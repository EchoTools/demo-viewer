using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using UnityEngine.Rendering.RenderGraphModule;

/// <summary>
/// URP Renderer Feature for Meta Quest passthrough.
///
/// URP (and particularly its XR initialization) clears the eye texture
/// with alpha=1 regardless of camera.backgroundColor.  The Quest compositor
/// uses alpha to decide whether to show the passthrough feed (alpha=0) or
/// the rendered scene (alpha=1).  Without this feature, background pixels
/// end up alpha=1 and block passthrough.
///
/// This feature inserts a full-screen pass at BeforeRenderingOpaques that
/// writes alpha=0 (ColorMask A, ZTest Always).  Opaque geometry then
/// renders with its usual alpha=1, so only un-touched background pixels
/// remain at alpha=0 and let passthrough show through.
///
/// Implements both the legacy Execute path (URP 14-) and RecordRenderGraph
/// (URP 17 / Unity 6 default) so the pass definitely runs regardless of
/// which code-path URP picks for this project.
///
/// Setup: Add this feature to URP-Pipe_Renderer via the Inspector.
/// The clearAlphaShader field is wired in the renderer asset YAML so the
/// shader is always included in device builds (no Shader.Find at runtime).
/// </summary>
public class PassthroughAlphaRendererFeature : ScriptableRendererFeature
{
    // Serialized so Unity bundles the shader into every build automatically.
    [SerializeField] private Shader clearAlphaShader;

    private ClearAlphaPass _pass;
    private Material _material;

    public override void Create()
    {
        if (clearAlphaShader == null)
            clearAlphaShader = Shader.Find("Hidden/Passthrough/ClearAlpha");

        if (clearAlphaShader != null)
        {
            _material = CoreUtils.CreateEngineMaterial(clearAlphaShader);
        }
        else
        {
            Debug.LogWarning("[PassthroughAlpha] Shader 'Hidden/Passthrough/ClearAlpha' not found. " +
                             "Assign the shader to the renderer feature in the Inspector.");
            return;
        }

        _pass = new ClearAlphaPass(_material)
        {
            renderPassEvent = RenderPassEvent.BeforeRenderingOpaques
        };
    }

    public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
    {
#if !UNITY_EDITOR
        if (_pass != null)
            renderer.EnqueuePass(_pass);
#endif
    }

    protected override void Dispose(bool disposing)
    {
        CoreUtils.Destroy(_material);
    }

    // -----------------------------------------------------------------------

    private class ClearAlphaPass : ScriptableRenderPass
    {
        private readonly Material _mat;

        // Render graph pass data bag.
        private class PassData { public Material material; }

        public ClearAlphaPass(Material material)
        {
            _mat = material;
            // Allow the pass to run even when render graph replaces it with
            // a native render graph pass — keeps Execute as a fallback.
            requiresIntermediateTexture = false;
        }

        // ------------------------------------------------------------------
        // URP 17 / Unity 6 path — RecordRenderGraph is the primary entry.
        // ------------------------------------------------------------------
        public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
        {
            if (_mat == null) return;

            UniversalResourceData resourceData = frameData.Get<UniversalResourceData>();

            using (IRasterRenderGraphBuilder builder =
                renderGraph.AddRasterRenderPass<PassData>("ClearAlpha", out PassData passData))
            {
                // Write to whatever the active color texture is at this point
                // (the intermediate RT in most setups, the XR swapchain directly
                // when IntermediateTextureMode == Auto and no post-processing).
                builder.SetRenderAttachment(resourceData.activeColorTexture, 0,
                    AccessFlags.Write);

                passData.material = _mat;

                builder.SetRenderFunc(static (PassData data, RasterGraphContext ctx) =>
                {
                    CoreUtils.DrawFullScreen(ctx.cmd, data.material);
                });
            }
        }

        // ------------------------------------------------------------------
        // Legacy path — called when render graph compatibility mode is on
        // or on older URP versions.
        // ------------------------------------------------------------------
        public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
        {
            if (_mat == null) return;

            CommandBuffer cmd = CommandBufferPool.Get("ClearAlpha");
            CoreUtils.DrawFullScreen(cmd, _mat);
            context.ExecuteCommandBuffer(cmd);
            CommandBufferPool.Release(cmd);
        }
    }
}

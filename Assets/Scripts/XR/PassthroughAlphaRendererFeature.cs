using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

/// <summary>
/// URP Renderer Feature for Meta Quest passthrough.
///
/// URP clears the eye texture to (0,0,0,0) but subsequent passes can
/// write alpha=1 to background pixels, making the scene opaque and
/// blocking the Quest compositor from showing the passthrough feed.
///
/// This feature runs a full-screen pass before opaque rendering that
/// writes alpha=0 to every pixel (ColorMask A only, no RGB touch).
/// Opaque geometry then renders with alpha=1 via standard shaders,
/// so only unrendered background pixels stay at alpha=0 and show
/// passthrough through the AlphaBlend compositor.
///
/// Setup: select URP-Pipe_Renderer in Assets/Render/, click
/// "Add Renderer Feature" and choose PassthroughAlphaRendererFeature.
/// The shader field is auto-assigned; rebuild after adding the feature.
/// </summary>
public class PassthroughAlphaRendererFeature : ScriptableRendererFeature
{
    // Serialized so Unity includes the shader in the build automatically.
    [SerializeField] private Shader clearAlphaShader;

    private ClearAlphaPass _pass;
    private Material _material;

    public override void Create()
    {
        // Fallback to Shader.Find for editor convenience, but the serialized
        // reference is what guarantees shader inclusion in device builds.
        if (clearAlphaShader == null)
            clearAlphaShader = Shader.Find("Hidden/Passthrough/ClearAlpha");

        if (clearAlphaShader != null)
        {
            _material = CoreUtils.CreateEngineMaterial(clearAlphaShader);
        }
        else
        {
            Debug.LogWarning("[PassthroughAlpha] Shader 'Hidden/Passthrough/ClearAlpha' not found. " +
                             "Assign it to the renderer feature in the Inspector.");
        }

        _pass = new ClearAlphaPass(_material);
        _pass.renderPassEvent = RenderPassEvent.BeforeRenderingOpaques;
    }

    public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
    {
#if !UNITY_EDITOR
        // Only run on device; passthrough is not active in Play Mode in Editor.
        if (_material != null)
            renderer.EnqueuePass(_pass);
#endif
    }

    protected override void Dispose(bool disposing)
    {
        CoreUtils.Destroy(_material);
    }

    private class ClearAlphaPass : ScriptableRenderPass
    {
        private readonly Material _material;

        public ClearAlphaPass(Material material)
        {
            _material = material;
        }

        public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
        {
            if (_material == null) return;

            CommandBuffer cmd = CommandBufferPool.Get("ClearAlpha");
            // CoreUtils.DrawFullScreen handles XR single-pass stereo correctly,
            // unlike DrawMesh which would apply eye-specific VP transforms.
            CoreUtils.DrawFullScreen(cmd, _material);
            context.ExecuteCommandBuffer(cmd);
            CommandBufferPool.Release(cmd);
        }
    }
}

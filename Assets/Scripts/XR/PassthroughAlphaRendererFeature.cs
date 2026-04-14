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
/// </summary>
public class PassthroughAlphaRendererFeature : ScriptableRendererFeature
{
    private ClearAlphaPass _pass;

    public override void Create()
    {
        _pass = new ClearAlphaPass();
        _pass.renderPassEvent = RenderPassEvent.BeforeRenderingOpaques;
    }

    public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
    {
#if !UNITY_EDITOR
        // Only run on device, not in Play Mode in Editor (passthrough not active there)
        renderer.EnqueuePass(_pass);
#endif
    }

    private class ClearAlphaPass : ScriptableRenderPass
    {
        private static readonly int ShaderID = Shader.PropertyToID("_PassthroughTemp");
        private Material _material;

        public ClearAlphaPass()
        {
            var shader = Shader.Find("Hidden/Passthrough/ClearAlpha");
            if (shader != null)
                _material = CoreUtils.CreateEngineMaterial(shader);
            else
                Debug.LogWarning("[PassthroughAlpha] Shader 'Hidden/Passthrough/ClearAlpha' not found.");
        }

        public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
        {
            if (_material == null) return;

            CommandBuffer cmd = CommandBufferPool.Get("ClearAlpha");
            cmd.DrawMesh(RenderingUtils.fullscreenMesh, Matrix4x4.identity, _material, 0, 0);
            context.ExecuteCommandBuffer(cmd);
            CommandBufferPool.Release(cmd);
        }
    }
}

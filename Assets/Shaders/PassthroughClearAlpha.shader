Shader "Hidden/Passthrough/ClearAlpha"
{
    SubShader
    {
        // DIAGNOSTIC MODE: write RGBA=(0,0,0,0) to the ENTIRE screen
        // at AfterRendering so we can confirm whether alpha=0 reaches the
        // Quest compositor. If the screen shows full passthrough (real world
        // visible through everything), alpha is working and we only need
        // to fix the timing / target. If still black, alpha isn't reaching
        // the compositor at all.
        Pass
        {
            Name "ClearAlpha"
            ZTest Always
            ZWrite Off
            Cull Off
            // DIAGNOSTIC: write RGBA so we know alpha is being pushed
            ColorMask RGBA

            HLSLPROGRAM
            #pragma vertex Vert
            #pragma fragment Frag
            #pragma multi_compile_instancing
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            struct Attributes
            {
                float4 positionOS : POSITION;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            Varyings Vert(Attributes IN)
            {
                Varyings OUT;
                UNITY_SETUP_INSTANCE_ID(IN);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
                OUT.positionCS = float4(IN.positionOS.xy, 0.0, 1.0);
                return OUT;
            }

            half4 Frag(Varyings IN) : SV_Target
            {
                UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(IN);
                // DIAGNOSTIC: solid RED, alpha=1.
                // If screen turns RED → our write reaches the XR swapchain.
                //   Then alpha=0 showing black means passthrough feed is not
                //   active (xrPassthroughStartFB failed) — not an RT issue.
                // If screen stays BLACK → a blit after our pass replaces it;
                //   our write targets the wrong (intermediate) RT.
                return half4(1, 0, 0, 1);
            }
            ENDHLSL
        }
    }
}

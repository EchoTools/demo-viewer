Shader "Hidden/Passthrough/ClearAlpha"
{
    SubShader
    {
        // Write only the alpha channel, touch nothing else.
        // ZTest Always + ZWrite Off so it runs over the full screen
        // regardless of depth, before any geometry is drawn.
        Pass
        {
            Name "ClearAlpha"
            ZTest Always
            ZWrite Off
            Cull Off
            ColorMask A

            HLSLPROGRAM
            #pragma vertex Vert
            #pragma fragment Frag
            // Required for single-pass stereo (multiview) on Quest.
            #pragma multi_compile_instancing
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            struct Attributes
            {
                float4 positionOS : POSITION;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct Varyings
            {
                // Positions are already in clip space on the fullscreen mesh;
                // do NOT apply TransformObjectToHClip — that would multiply by
                // the per-eye VP matrix and move the quad off-screen in XR.
                float4 positionCS : SV_POSITION;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            Varyings Vert(Attributes IN)
            {
                Varyings OUT;
                UNITY_SETUP_INSTANCE_ID(IN);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
                // Pass clip-space xy through directly; w=1 keeps them in NDC.
                OUT.positionCS = float4(IN.positionOS.xy, 0.0, 1.0);
                return OUT;
            }

            half4 Frag(Varyings IN) : SV_Target
            {
                UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(IN);
                // Alpha = 0 → fully transparent → passthrough shows through.
                return half4(0, 0, 0, 0);
            }
            ENDHLSL
        }
    }
}

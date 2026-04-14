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
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            struct Attributes { float4 positionOS : POSITION; };
            struct Varyings   { float4 positionCS : SV_POSITION; };

            Varyings Vert(Attributes IN)
            {
                Varyings OUT;
                OUT.positionCS = TransformObjectToHClip(IN.positionOS.xyz);
                return OUT;
            }

            half4 Frag(Varyings IN) : SV_Target
            {
                // Alpha = 0 → fully transparent → passthrough shows through
                return half4(0, 0, 0, 0);
            }
            ENDHLSL
        }
    }
}

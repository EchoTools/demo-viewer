using UnityEngine.XR.OpenXR.Features;
using UnityEngine.XR.OpenXR.NativeTypes;

/// <summary>
/// Minimal bridge that exposes OpenXRFeature.SetEnvironmentBlendMode
/// (which is protected static) to scripts outside the OpenXR feature system.
///
/// No [OpenXRFeature] attribute — Unity's feature discovery ignores this class.
/// It only exists so TableTopXRController can call SetBlendModeAlpha().
/// </summary>
public class PassthroughBridge : OpenXRFeature
{
    /// <summary>
    /// Tells the Quest runtime to composite rendered frames over the real-world
    /// camera feed (passthrough). Call this after XR subsystems have started.
    /// </summary>
    public static void SetBlendModeAlpha()
    {
        SetEnvironmentBlendMode(XrEnvironmentBlendMode.AlphaBlend);
    }
}

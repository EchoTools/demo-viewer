using System;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.XR.OpenXR;
using UnityEngine.XR.OpenXR.Features;
using UnityEngine.XR.OpenXR.NativeTypes;
#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.XR.OpenXR.Features;
#endif

/// <summary>
/// OpenXR feature that enables Meta Quest passthrough (XR_FB_passthrough).
///
/// What this does:
///   1. Requests XR_FB_passthrough extension from the runtime.
///   2. Sets XrEnvironmentBlendMode = AlphaBlend in OnSessionCreate so the
///      compositor blends rendered frames over the real-world camera feed.
///   3. Creates a passthrough handle (xrCreatePassthroughFB) and starts it
///      (xrPassthroughStartFB) — this starts the camera capture pipeline.
///   4. Creates a passthrough layer (xrCreatePassthroughLayerFB) and resumes
///      it (xrPassthroughLayerResumeFB) — this creates the composition layer.
///   5. Hooks xrGetInstanceProcAddr to intercept xrEndFrame and prepend an
///      XrCompositionLayerPassthroughFB to every frame submission.
///      Without this explicit composition layer, Meta Quest 3 shows black
///      even with AlphaBlend mode and alpha=0 pixels in the eye texture.
///
/// The URP PassthroughAlphaRendererFeature still runs: it writes alpha=0 to
/// background pixels so the compositor knows WHERE to composite the passthrough
/// feed.  This feature provides the passthrough image itself.
///
/// Enabled automatically by the "Tools → Setup XR Table-Top" editor tool.
/// Can also be enabled manually in:
///   Project Settings → XR Plug-in Management → OpenXR → Android → Features
///   → Table-Top Passthrough
/// </summary>
#if UNITY_EDITOR
[OpenXRFeature(
    UiName = "Table-Top Passthrough",
    BuildTargetGroups = new[] { BuildTargetGroup.Android },
    Company = "EchoTools",
    Desc = "Enables Meta Quest XR_FB_passthrough for table-top AR mode.",
    OpenxrExtensionStrings = "XR_FB_passthrough",
    Version = "1.0.0",
    FeatureId = TableTopPassthroughFeature.FeatureId
)]
#endif
public class TableTopPassthroughFeature : OpenXRFeature
{
    public const string FeatureId = "com.echotools.tabletop.passthrough";

    // -----------------------------------------------------------------------
    // XR structure type constants (from XR_FB_passthrough spec)
    // -----------------------------------------------------------------------
    private const uint XR_TYPE_PASSTHROUGH_CREATE_INFO_FB       = 1000118001u;
    private const uint XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB = 1000118002u;
    private const uint XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB = 1000118003u;
    private const uint XR_PASSTHROUGH_LAYER_PURPOSE_RECONSTRUCTION_FB = 0u;

    // -----------------------------------------------------------------------
    // Native struct layouts (must match the ABI exactly)
    // -----------------------------------------------------------------------

    [StructLayout(LayoutKind.Sequential)]
    private struct XrPassthroughCreateInfoFB
    {
        public uint   type;        // XR_TYPE_PASSTHROUGH_CREATE_INFO_FB
        public IntPtr next;
        public ulong  flags;
    }

    [StructLayout(LayoutKind.Sequential)]
    private struct XrPassthroughLayerCreateInfoFB
    {
        public uint   type;        // XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB
        public IntPtr next;
        public ulong  passthrough; // XrPassthroughFB handle
        public ulong  flags;
        public uint   purpose;     // XR_PASSTHROUGH_LAYER_PURPOSE_RECONSTRUCTION_FB = 0
    }

    [StructLayout(LayoutKind.Sequential)]
    private struct XrCompositionLayerPassthroughFB
    {
        public uint   type;        // XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB
        public IntPtr next;
        public ulong  flags;
        public ulong  space;       // XrSpace — 0 = XR_NULL_HANDLE (valid for reconstruction)
        public ulong  layerHandle; // XrPassthroughLayerFB handle
    }

    // XrFrameEndInfo — pointer-sized fields, so we use IntPtr for layers*.
    // In 64-bit ARM (Quest 3) IntPtr is 8 bytes, matching the ABI.
    [StructLayout(LayoutKind.Sequential)]
    private unsafe struct XrFrameEndInfo
    {
        public uint    type;                  // 14 = XR_TYPE_FRAME_END_INFO
        public IntPtr  next;
        public long    displayTime;           // XrTime (int64)
        public uint    environmentBlendMode;
        public uint    layerCount;
        public IntPtr* layers;               // const XrCompositionLayerBaseHeader* const*
    }

    // -----------------------------------------------------------------------
    // Delegate types
    // -----------------------------------------------------------------------

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate int PFN_xrGetInstanceProcAddr(
        ulong instance,
        [MarshalAs(UnmanagedType.LPStr)] string name,
        out IntPtr function);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate int PFN_xrCreatePassthroughFB(
        ulong session, ref XrPassthroughCreateInfoFB info, out ulong passthrough);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate int PFN_xrPassthroughStartFB(ulong passthrough);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate int PFN_xrCreatePassthroughLayerFB(
        ulong session, ref XrPassthroughLayerCreateInfoFB info, out ulong layer);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate int PFN_xrPassthroughLayerResumeFB(ulong layer);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private unsafe delegate int PFN_xrEndFrame(ulong session, XrFrameEndInfo* frameEndInfo);

    // -----------------------------------------------------------------------
    // Instance-level function pointers (loaded in OnInstanceCreate)
    // -----------------------------------------------------------------------

    private PFN_xrGetInstanceProcAddr   _getProcAddr;
    private PFN_xrCreatePassthroughFB   _xrCreatePassthroughFB;
    private PFN_xrPassthroughStartFB    _xrPassthroughStartFB;
    private PFN_xrCreatePassthroughLayerFB _xrCreatePassthroughLayerFB;
    private PFN_xrPassthroughLayerResumeFB _xrPassthroughLayerResumeFB;

    private ulong _xrInstance;
    private ulong _xrSession;
    private ulong _passthroughHandle;
    private ulong _passthroughLayerHandle;

    // -----------------------------------------------------------------------
    // Static state for xrEndFrame hook
    // Static because [MonoPInvokeCallback] functions cannot close over 'this'.
    // Delegates are stored statically to prevent GC collection.
    // -----------------------------------------------------------------------

    private static PFN_xrGetInstanceProcAddr s_RealGetProcAddr;
    private static PFN_xrGetInstanceProcAddr s_HookedGetProcAddrDelegate;
    private static PFN_xrEndFrame            s_RealEndFrame;
    private static PFN_xrEndFrame            s_HookedEndFrameDelegate;
    private static ulong                     s_PassthroughLayerHandle;

    // -----------------------------------------------------------------------
    // HookGetInstanceProcAddr — replace xrGetInstanceProcAddr so we can
    // intercept any OpenXR function (specifically xrEndFrame).
    // -----------------------------------------------------------------------

    protected override IntPtr HookGetInstanceProcAddr(IntPtr func)
    {
        s_RealGetProcAddr        = Marshal.GetDelegateForFunctionPointer<PFN_xrGetInstanceProcAddr>(func);
        s_HookedGetProcAddrDelegate = HookedGetInstanceProcAddrImpl; // keep delegate alive
        return Marshal.GetFunctionPointerForDelegate(s_HookedGetProcAddrDelegate);
    }

    [AOT.MonoPInvokeCallback(typeof(PFN_xrGetInstanceProcAddr))]
    private static int HookedGetInstanceProcAddrImpl(ulong instance, string name, out IntPtr function)
    {
        int result = s_RealGetProcAddr(instance, name, out function);

        // Replace xrEndFrame with our wrapper
        if (name == "xrEndFrame" && function != IntPtr.Zero)
        {
            s_RealEndFrame          = Marshal.GetDelegateForFunctionPointer<PFN_xrEndFrame>(function);
            s_HookedEndFrameDelegate = HookedEndFrameImpl;
            function = Marshal.GetFunctionPointerForDelegate(s_HookedEndFrameDelegate);
        }

        return result;
    }

    // -----------------------------------------------------------------------
    // Hooked xrEndFrame — prepends XrCompositionLayerPassthroughFB so the
    // Quest compositor shows the passthrough feed behind the rendered scene.
    //
    // Memory safety: ptLayer and newLayers are stack-allocated locals whose
    // lifetime covers the entire xrEndFrame call.  No heap allocation needed.
    // -----------------------------------------------------------------------

    [AOT.MonoPInvokeCallback(typeof(PFN_xrEndFrame))]
    private static unsafe int HookedEndFrameImpl(ulong session, XrFrameEndInfo* frameEndInfo)
    {
        if (s_PassthroughLayerHandle == 0 || frameEndInfo == null || s_RealEndFrame == null)
        {
            if (s_RealEndFrame != null) return s_RealEndFrame(session, frameEndInfo);
            return 1; // XR_ERROR_HANDLE_INVALID fallback
        }

        var ptLayer = new XrCompositionLayerPassthroughFB
        {
            type        = XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB,
            next        = IntPtr.Zero,
            flags       = 0,
            space       = 0, // XR_NULL_HANDLE — valid for reconstruction passthrough
            layerHandle = s_PassthroughLayerHandle,
        };

        uint origCount = frameEndInfo->layerCount;

        // Build a layers array with the passthrough layer at position 0 (back of stack)
        // followed by the original layers (eye projection layer etc.).
        IntPtr* newLayers = stackalloc IntPtr[(int)(origCount + 1)];
        newLayers[0] = (IntPtr)(&ptLayer); // passthrough at the back
        for (uint i = 0; i < origCount; i++)
            newLayers[i + 1] = frameEndInfo->layers[i];

        // Copy the original info, patch in the new layers array
        var modifiedInfo = *frameEndInfo;
        modifiedInfo.layerCount = origCount + 1;
        modifiedInfo.layers     = newLayers;

        return s_RealEndFrame(session, &modifiedInfo);
    }

    // -----------------------------------------------------------------------
    // OpenXR feature lifecycle
    // -----------------------------------------------------------------------

    protected override bool OnInstanceCreate(ulong xrInstance)
    {
        if (!OpenXRRuntime.IsExtensionEnabled("XR_FB_passthrough"))
        {
            Debug.LogWarning("[TableTopPassthrough] XR_FB_passthrough not available on this runtime.");
            return true; // don't fail the feature, just skip
        }

        _xrInstance = xrInstance;
        _getProcAddr = Marshal.GetDelegateForFunctionPointer<PFN_xrGetInstanceProcAddr>(xrGetInstanceProcAddr);

        bool ok = true;
        ok &= LoadFunction("xrCreatePassthroughFB",      out IntPtr p0);
        ok &= LoadFunction("xrPassthroughStartFB",        out IntPtr p1);
        ok &= LoadFunction("xrCreatePassthroughLayerFB",  out IntPtr p2);
        ok &= LoadFunction("xrPassthroughLayerResumeFB",  out IntPtr p3);

        if (!ok)
        {
            Debug.LogWarning("[TableTopPassthrough] Could not load XR_FB_passthrough function pointers.");
            return true;
        }

        _xrCreatePassthroughFB      = Marshal.GetDelegateForFunctionPointer<PFN_xrCreatePassthroughFB>(p0);
        _xrPassthroughStartFB       = Marshal.GetDelegateForFunctionPointer<PFN_xrPassthroughStartFB>(p1);
        _xrCreatePassthroughLayerFB = Marshal.GetDelegateForFunctionPointer<PFN_xrCreatePassthroughLayerFB>(p2);
        _xrPassthroughLayerResumeFB = Marshal.GetDelegateForFunctionPointer<PFN_xrPassthroughLayerResumeFB>(p3);

        return true;
    }

    protected override void OnSessionCreate(ulong xrSession)
    {
        _xrSession = xrSession;

        // AlphaBlend must be set before xrBeginSession (called in OnSessionBegin).
        SetEnvironmentBlendMode(XrEnvironmentBlendMode.AlphaBlend);
        Debug.Log("[TableTopPassthrough] AlphaBlend set in OnSessionCreate.");

        if (_xrCreatePassthroughFB == null) return;

        // Create the passthrough system handle
        var createInfo = new XrPassthroughCreateInfoFB
        {
            type  = XR_TYPE_PASSTHROUGH_CREATE_INFO_FB,
            next  = IntPtr.Zero,
            flags = 0
        };
        int r = _xrCreatePassthroughFB(xrSession, ref createInfo, out _passthroughHandle);
        if (r != 0)
        {
            Debug.LogWarning($"[TableTopPassthrough] xrCreatePassthroughFB failed: {r}");
            return;
        }
        Debug.Log("[TableTopPassthrough] xrCreatePassthroughFB succeeded.");

        if (_xrCreatePassthroughLayerFB == null || _passthroughHandle == 0) return;

        // Create the passthrough composition layer
        var layerInfo = new XrPassthroughLayerCreateInfoFB
        {
            type        = XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB,
            next        = IntPtr.Zero,
            passthrough = _passthroughHandle,
            flags       = 0,
            purpose     = XR_PASSTHROUGH_LAYER_PURPOSE_RECONSTRUCTION_FB
        };
        r = _xrCreatePassthroughLayerFB(xrSession, ref layerInfo, out _passthroughLayerHandle);
        if (r != 0)
            Debug.LogWarning($"[TableTopPassthrough] xrCreatePassthroughLayerFB failed: {r}");
        else
        {
            s_PassthroughLayerHandle = _passthroughLayerHandle; // expose to static hook
            Debug.Log("[TableTopPassthrough] xrCreatePassthroughLayerFB succeeded.");
        }
    }

    protected override void OnSessionBegin(ulong xrSession)
    {
        if (_xrPassthroughStartFB == null || _passthroughHandle == 0)
        {
            Debug.Log("[TableTopPassthrough] Native passthrough handles unavailable — relying on AlphaBlend only.");
            return;
        }

        // Start the passthrough camera pipeline
        int r = _xrPassthroughStartFB(_passthroughHandle);
        if (r == 0)
            Debug.Log("[TableTopPassthrough] xrPassthroughStartFB succeeded.");
        else
            Debug.LogWarning($"[TableTopPassthrough] xrPassthroughStartFB failed: {r}");

        // Resume (activate) the passthrough composition layer
        if (_xrPassthroughLayerResumeFB != null && _passthroughLayerHandle != 0)
        {
            r = _xrPassthroughLayerResumeFB(_passthroughLayerHandle);
            if (r == 0)
                Debug.Log("[TableTopPassthrough] xrPassthroughLayerResumeFB succeeded.");
            else
                Debug.LogWarning($"[TableTopPassthrough] xrPassthroughLayerResumeFB failed: {r}");
        }
    }

    protected override void OnSessionEnd(ulong xrSession)
    {
        // Clear the static handle so the hook stops injecting after session ends.
        s_PassthroughLayerHandle = 0;
    }

    // -----------------------------------------------------------------------
    // Helpers
    // -----------------------------------------------------------------------

    private bool LoadFunction(string name, out IntPtr ptr)
    {
        ptr = IntPtr.Zero;
        if (_getProcAddr == null) return false;
        int r = _getProcAddr(_xrInstance, name, out ptr);
        return r == 0 && ptr != IntPtr.Zero;
    }
}

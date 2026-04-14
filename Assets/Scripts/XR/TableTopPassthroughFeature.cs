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
/// Declaring the extension in OpenxrExtensionStrings causes the OpenXR
/// session to request it from the runtime. OnInstanceCreate loads the
/// native function pointers, OnSessionCreate creates the passthrough handle,
/// and OnSessionBegin starts it and sets AlphaBlend so the compositor
/// composites rendered frames over the real-world camera feed.
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

    // XR_TYPE_PASSTHROUGH_CREATE_INFO_FB = 1000118001
    private const uint XR_TYPE_PASSTHROUGH_CREATE_INFO_FB = 1000118001u;

    [StructLayout(LayoutKind.Sequential)]
    private struct XrPassthroughCreateInfoFB
    {
        public uint type;
        public IntPtr next;
        public ulong flags;
    }

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate int PFN_xrGetInstanceProcAddr(ulong instance, string name, out IntPtr function);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate int PFN_xrCreatePassthroughFB(ulong session, ref XrPassthroughCreateInfoFB info, out ulong passthrough);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate int PFN_xrPassthroughStartFB(ulong passthrough);

    private PFN_xrGetInstanceProcAddr _getProcAddr;
    private PFN_xrCreatePassthroughFB _xrCreatePassthroughFB;
    private PFN_xrPassthroughStartFB  _xrPassthroughStartFB;

    private ulong _xrInstance;
    private ulong _xrSession;
    private ulong _passthroughHandle;

    protected override bool OnInstanceCreate(ulong xrInstance)
    {
        if (!OpenXRRuntime.IsExtensionEnabled("XR_FB_passthrough"))
        {
            Debug.LogWarning("[TableTopPassthrough] XR_FB_passthrough not available on this runtime.");
            return true; // don't fail the feature, just skip
        }

        _xrInstance = xrInstance;

        // xrGetInstanceProcAddr is the raw function pointer exposed by OpenXRFeature
        _getProcAddr = Marshal.GetDelegateForFunctionPointer<PFN_xrGetInstanceProcAddr>(xrGetInstanceProcAddr);

        if (!LoadFunction("xrCreatePassthroughFB", out IntPtr createPtr) ||
            !LoadFunction("xrPassthroughStartFB",  out IntPtr startPtr))
        {
            Debug.LogWarning("[TableTopPassthrough] Could not load XR_FB_passthrough function pointers.");
            return true;
        }

        _xrCreatePassthroughFB = Marshal.GetDelegateForFunctionPointer<PFN_xrCreatePassthroughFB>(createPtr);
        _xrPassthroughStartFB  = Marshal.GetDelegateForFunctionPointer<PFN_xrPassthroughStartFB>(startPtr);

        return true;
    }

    protected override void OnSessionCreate(ulong xrSession)
    {
        _xrSession = xrSession;

        if (_xrCreatePassthroughFB == null) return;

        var info = new XrPassthroughCreateInfoFB
        {
            type  = XR_TYPE_PASSTHROUGH_CREATE_INFO_FB,
            next  = IntPtr.Zero,
            flags = 0
        };

        int result = _xrCreatePassthroughFB(xrSession, ref info, out _passthroughHandle);
        if (result != 0) // XR_SUCCESS = 0
            Debug.LogWarning($"[TableTopPassthrough] xrCreatePassthroughFB failed: {result}");
    }

    protected override void OnSessionBegin(ulong xrSession)
    {
        // Always request AlphaBlend — Quest 3 supports it natively via standard OpenXR.
        // The XR_FB_passthrough native calls are best-effort; if they fail the blend
        // mode alone is sufficient on Quest 3.
        SetEnvironmentBlendMode(XrEnvironmentBlendMode.AlphaBlend);
        Debug.Log("[TableTopPassthrough] AlphaBlend requested.");

        if (_xrPassthroughStartFB == null || _passthroughHandle == 0)
        {
            Debug.Log("[TableTopPassthrough] Native passthrough handles unavailable — relying on AlphaBlend only.");
            return;
        }

        int result = _xrPassthroughStartFB(_passthroughHandle);
        if (result == 0)
            Debug.Log("[TableTopPassthrough] xrPassthroughStartFB succeeded.");
        else
            Debug.LogWarning($"[TableTopPassthrough] xrPassthroughStartFB failed: {result}");
    }

    private bool LoadFunction(string name, out IntPtr ptr)
    {
        ptr = IntPtr.Zero;
        if (_getProcAddr == null) return false;
        int r = _getProcAddr(_xrInstance, name, out ptr);
        return r == 0 && ptr != IntPtr.Zero;
    }
}

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
///      (xrPassthroughStartFB) — this activates the camera capture pipeline.
///   4. Creates a passthrough layer (xrCreatePassthroughLayerFB) and resumes
///      it (xrPassthroughLayerResumeFB) — creates the composition layer object.
///   5. Hooks xrGetInstanceProcAddr to intercept xrEndFrame and prepend an
///      XrCompositionLayerPassthroughFB to every frame submission.
///
/// Why the composition layer is required:
///   Meta Quest 3 needs an explicit XrCompositionLayerPassthroughFB in
///   xrEndFrame to source the passthrough camera feed into the compositor.
///   Without it, "PT is: ON numLayers: 0" appears in logcat and the
///   background stays black even with AlphaBlend mode and alpha=0 pixels.
///
/// The URP PassthroughAlphaRendererFeature writes alpha=0 to background
/// pixels so the compositor knows WHERE to show the passthrough image.
/// This feature provides the image itself via the composition layer.
///
/// No 'unsafe' code is used: struct pinning uses GCHandle.Alloc (Pinned)
/// and ref parameters replace pointer parameters in delegate signatures.
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
    // Native struct layouts (must match OpenXR ABI on ARM64)
    //
    // IntPtr fields automatically get natural 8-byte alignment on ARM64,
    // matching the implicit padding the C compiler inserts after uint type.
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

    // XrFrameEndInfo — layers field stored as IntPtr (pointer value).
    // Elements are read via Marshal.ReadIntPtr to avoid 'unsafe' code.
    [StructLayout(LayoutKind.Sequential)]
    private struct XrFrameEndInfo
    {
        public uint   type;                  // 14 = XR_TYPE_FRAME_END_INFO
        public IntPtr next;
        public long   displayTime;           // XrTime (int64)
        public uint   environmentBlendMode;
        public uint   layerCount;
        public IntPtr layers;               // const XrCompositionLayerBaseHeader* const*
    }

    // -----------------------------------------------------------------------
    // Delegate types
    // Using 'ref' parameters instead of pointers avoids 'unsafe' code.
    // The C# runtime marshals 'ref T' as a pointer to T when invoking
    // unmanaged delegates, which is what the OpenXR ABI expects.
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
    private delegate int PFN_xrEndFrame(ulong session, ref XrFrameEndInfo frameEndInfo);

    // -----------------------------------------------------------------------
    // Instance-level function pointers (loaded in OnInstanceCreate)
    // -----------------------------------------------------------------------

    private PFN_xrGetInstanceProcAddr      _getProcAddr;
    private PFN_xrCreatePassthroughFB      _xrCreatePassthroughFB;
    private PFN_xrPassthroughStartFB       _xrPassthroughStartFB;
    private PFN_xrCreatePassthroughLayerFB _xrCreatePassthroughLayerFB;
    private PFN_xrPassthroughLayerResumeFB _xrPassthroughLayerResumeFB;

    private ulong _xrInstance;
    private ulong _xrSession;
    private ulong _passthroughHandle;
    private ulong _passthroughLayerHandle;

    // -----------------------------------------------------------------------
    // -----------------------------------------------------------------------
    // XrCompositionLayerBaseHeader — minimal view to read type and flags
    // from any composition layer (all layer types start with these fields).
    // -----------------------------------------------------------------------
    [StructLayout(LayoutKind.Sequential)]
    private struct XrCompositionLayerBaseHeader
    {
        public uint   type;   // XrStructureType
        public IntPtr next;
        public ulong  flags;  // XrCompositionLayerFlags
    }

    private const uint XR_TYPE_COMPOSITION_LAYER_PROJECTION = 35u;
    // Flag: tells the compositor to use the source texture's alpha channel.
    private const ulong XR_COMPOSITION_LAYER_BLEND_TEXTURE_SOURCE_ALPHA_BIT = 2uL;

    // -----------------------------------------------------------------------
    // Static state for the xrEndFrame hook.
    // Static because [MonoPInvokeCallback] methods cannot close over 'this'.
    // Delegates kept in static fields to prevent garbage collection.
    // -----------------------------------------------------------------------

    private static PFN_xrGetInstanceProcAddr s_RealGetProcAddr;
    private static PFN_xrGetInstanceProcAddr s_HookedGetProcAddrDelegate;
    private static PFN_xrEndFrame            s_RealEndFrame;
    private static PFN_xrEndFrame            s_HookedEndFrameDelegate;
    private static ulong                     s_PassthroughLayerHandle;
    private static int                       s_FrameCount;

    // File-based diagnostic log — written on first xrEndFrame call so it is
    // visible even in release builds where Debug.Log does not appear in logcat.
    private static System.Text.StringBuilder s_DiagLog = new System.Text.StringBuilder();
    private static string                    s_DiagPath; // set from main thread in Start()

    // Called from TableTopXRController.Start() on the main thread to record
    // the persistent-data path (Application.persistentDataPath is thread-safe
    // but setting it up from Start() guarantees Unity is fully initialised).
    public static void SetDiagnosticPath(string persistentDataPath)
    {
        s_DiagPath = System.IO.Path.Combine(persistentDataPath, "passthrough_feature_diag.txt");
        // Write whatever we've collected so far (lifecycle events before Start)
        FlushDiagLog();
    }

    private static void DiagLog(string msg)
    {
        s_DiagLog.AppendLine(msg);
        Debug.Log(msg);
        FlushDiagLog();
    }

    // Called from other features that share this diagnostic file.
    public static void DiagAppend(string msg)
    {
        s_DiagLog.AppendLine(msg);
        Debug.Log(msg);
        FlushDiagLog();
    }

    private static void FlushDiagLog()
    {
        if (string.IsNullOrEmpty(s_DiagPath)) return;
        try { System.IO.File.WriteAllText(s_DiagPath, s_DiagLog.ToString()); }
        catch { /* ignore write errors */ }
    }

    // -----------------------------------------------------------------------
    // HookGetInstanceProcAddr — wrap xrGetInstanceProcAddr so we intercept
    // any subsequent function lookups (specifically xrEndFrame).
    // -----------------------------------------------------------------------

    protected override IntPtr HookGetInstanceProcAddr(IntPtr func)
    {
        s_RealGetProcAddr           = Marshal.GetDelegateForFunctionPointer<PFN_xrGetInstanceProcAddr>(func);
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
            s_RealEndFrame           = Marshal.GetDelegateForFunctionPointer<PFN_xrEndFrame>(function);
            s_HookedEndFrameDelegate = HookedEndFrameImpl;
            function = Marshal.GetFunctionPointerForDelegate(s_HookedEndFrameDelegate);
        }

        return result;
    }

    // -----------------------------------------------------------------------
    // Hooked xrEndFrame — prepends XrCompositionLayerPassthroughFB so the
    // Quest compositor shows the passthrough feed behind the rendered scene.
    //
    // Memory safety: GCHandle.Alloc(Pinned) keeps the passthrough layer struct
    // and the new layers array alive and at a fixed address for the duration
    // of the real xrEndFrame call, then frees them in a finally block.
    // -----------------------------------------------------------------------

    [AOT.MonoPInvokeCallback(typeof(PFN_xrEndFrame))]
    private static int HookedEndFrameImpl(ulong session, ref XrFrameEndInfo frameEndInfo)
    {
        if (s_PassthroughLayerHandle == 0 || s_RealEndFrame == null)
        {
            if (s_FrameCount == 0)
            {
                s_FrameCount++;
                DiagLog($"[TableTopPassthrough] xrEndFrame hook: bailing out. ptLayerHandle={s_PassthroughLayerHandle} realEndFrame={s_RealEndFrame != null}");
            }
            return s_RealEndFrame?.Invoke(session, ref frameEndInfo) ?? 1;
        }

        uint origCount = frameEndInfo.layerCount;

        // Read existing layer pointers from native memory
        IntPtr[] origLayerPtrs = new IntPtr[origCount];
        for (uint i = 0; i < origCount; i++)
            origLayerPtrs[i] = Marshal.ReadIntPtr(frameEndInfo.layers, (int)(i * IntPtr.Size));

        // Log layers once on the first intercepted frame to verify the hook
        // is running and show what Unity is submitting (type + flags).
        bool logThisFrame = (s_FrameCount == 0);
        s_FrameCount++;

        if (logThisFrame)
        {
            var sb = new System.Text.StringBuilder();
            sb.AppendLine($"[TableTopPassthrough] xrEndFrame hook firing. " +
                          $"origLayers={origCount} blendMode={frameEndInfo.environmentBlendMode} " +
                          $"ptLayerHandle={s_PassthroughLayerHandle}");
            for (uint i = 0; i < origCount; i++)
            {
                IntPtr ptr = origLayerPtrs[i];
                if (ptr != IntPtr.Zero)
                {
                    uint  type  = (uint)Marshal.ReadInt32(ptr, 0);
                    ulong flags = (ulong)Marshal.ReadInt64(ptr, 2 * IntPtr.Size);
                    sb.AppendLine($"  layer[{i}]: type={type} flags={flags}");
                }
            }
            DiagLog(sb.ToString());
        }

        // Ensure every existing eye-projection layer has BLEND_TEXTURE_SOURCE_ALPHA_BIT
        // set so the compositor uses the eye texture's alpha to blend with the
        // passthrough layer (alpha=0 → passthrough, alpha=1 → rendered content).
        // We write directly into the native struct via Marshal — Unity owns this
        // memory for the duration of the xrEndFrame call, so it is safe to patch.
        for (uint i = 0; i < origCount; i++)
        {
            IntPtr ptr = origLayerPtrs[i];
            if (ptr == IntPtr.Zero) continue;

            uint layerType = (uint)Marshal.ReadInt32(ptr, 0);
            if (layerType == XR_TYPE_COMPOSITION_LAYER_PROJECTION)
            {
                // flags field offset: sizeof(uint type)=4 + padding=4 + sizeof(IntPtr next)=8 = 16
                int flagsOffset = 4 + 4 + IntPtr.Size; // = 16 on ARM64
                ulong currentFlags = (ulong)Marshal.ReadInt64(ptr, flagsOffset);
                if ((currentFlags & XR_COMPOSITION_LAYER_BLEND_TEXTURE_SOURCE_ALPHA_BIT) == 0)
                {
                    ulong newFlags = currentFlags | XR_COMPOSITION_LAYER_BLEND_TEXTURE_SOURCE_ALPHA_BIT;
                    Marshal.WriteInt64(ptr, flagsOffset, (long)newFlags);
                    if (logThisFrame)
                        DiagLog($"[TableTopPassthrough] Set BLEND_TEXTURE_SOURCE_ALPHA_BIT on projection layer[{i}]. was={currentFlags} now={newFlags}");
                }
            }
        }

        // Build the passthrough composition layer struct
        var ptLayer = new XrCompositionLayerPassthroughFB
        {
            type        = XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB,
            next        = IntPtr.Zero,
            flags       = 0,
            space       = 0, // XR_NULL_HANDLE — valid for reconstruction passthrough
            layerHandle = s_PassthroughLayerHandle,
        };

        // Pin ptLayer so the GC cannot move it during the xrEndFrame call.
        GCHandle ptHandle = GCHandle.Alloc(ptLayer, GCHandleType.Pinned);

        // Build new layers array: passthrough at index 0 (back), then original layers
        IntPtr[] newLayerPtrs = new IntPtr[origCount + 1];
        newLayerPtrs[0] = ptHandle.AddrOfPinnedObject();
        for (uint i = 0; i < origCount; i++)
            newLayerPtrs[i + 1] = origLayerPtrs[i];

        // Pin the new layers pointer array too
        GCHandle newLayersHandle = GCHandle.Alloc(newLayerPtrs, GCHandleType.Pinned);

        try
        {
            var modifiedInfo = frameEndInfo;
            modifiedInfo.layerCount = origCount + 1;
            modifiedInfo.layers     = newLayersHandle.AddrOfPinnedObject();

            // Verify the passthrough struct layout in memory before submission.
            // On ARM64: type(4)+pad(4)+next(8)+flags(8)+space(8)+layerHandle(8) = 40 bytes.
            if (logThisFrame)
            {
                IntPtr p = ptHandle.AddrOfPinnedObject();
                uint  rtype  = (uint) Marshal.ReadInt32(p, 0);
                long  rnext  = (long) Marshal.ReadInt64(p, 8);
                ulong rflags = (ulong)Marshal.ReadInt64(p, 16);
                ulong rspace = (ulong)Marshal.ReadInt64(p, 24);
                ulong rlayer = (ulong)Marshal.ReadInt64(p, 32);
                DiagLog($"[TableTopPassthrough] ptLayer in memory: type={rtype} next={rnext} flags={rflags} space={rspace} layerHandle={rlayer} addr={p}");
                DiagLog($"[TableTopPassthrough] layers ptr={modifiedInfo.layers} layerCount={modifiedInfo.layerCount}");
                // Verify layers[0] == &ptLayer
                IntPtr layers0 = Marshal.ReadIntPtr(modifiedInfo.layers, 0);
                DiagLog($"[TableTopPassthrough] layers[0]={layers0} (expected {p})");
            }

            int result = s_RealEndFrame(session, ref modifiedInfo);
            if (logThisFrame)
                DiagLog($"[TableTopPassthrough] xrEndFrame returned: {result}");
            return result;
        }
        finally
        {
            newLayersHandle.Free();
            ptHandle.Free();
        }
    }

    // -----------------------------------------------------------------------
    // OpenXR feature lifecycle
    // -----------------------------------------------------------------------

    protected override bool OnInstanceCreate(ulong xrInstance)
    {
        bool extEnabled = OpenXRRuntime.IsExtensionEnabled("XR_FB_passthrough");
        DiagLog($"[TableTopPassthrough] OnInstanceCreate: XR_FB_passthrough enabled={extEnabled}");
        if (!extEnabled)
        {
            DiagLog("[TableTopPassthrough] XR_FB_passthrough not available on this runtime — skipping.");
            return true;
        }

        _xrInstance  = xrInstance;
        _getProcAddr = Marshal.GetDelegateForFunctionPointer<PFN_xrGetInstanceProcAddr>(xrGetInstanceProcAddr);

        bool ok = true;
        ok &= LoadFunction("xrCreatePassthroughFB",      out IntPtr p0);
        ok &= LoadFunction("xrPassthroughStartFB",        out IntPtr p1);
        ok &= LoadFunction("xrCreatePassthroughLayerFB",  out IntPtr p2);
        ok &= LoadFunction("xrPassthroughLayerResumeFB",  out IntPtr p3);

        DiagLog($"[TableTopPassthrough] OnInstanceCreate: function load ok={ok} p0={p0} p1={p1} p2={p2} p3={p3}");

        if (!ok)
        {
            DiagLog("[TableTopPassthrough] Could not load XR_FB_passthrough function pointers.");
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
        DiagLog("[TableTopPassthrough] OnSessionCreate: AlphaBlend set.");

        if (_xrCreatePassthroughFB == null)
        {
            DiagLog("[TableTopPassthrough] OnSessionCreate: _xrCreatePassthroughFB is null — skipping.");
            return;
        }

        // Create the passthrough system handle
        var createInfo = new XrPassthroughCreateInfoFB
        {
            type  = XR_TYPE_PASSTHROUGH_CREATE_INFO_FB,
            next  = IntPtr.Zero,
            flags = 0
        };
        int r = _xrCreatePassthroughFB(xrSession, ref createInfo, out _passthroughHandle);
        DiagLog($"[TableTopPassthrough] OnSessionCreate: xrCreatePassthroughFB result={r} handle={_passthroughHandle}");
        if (r != 0) return;

        if (_xrCreatePassthroughLayerFB == null || _passthroughHandle == 0)
        {
            DiagLog($"[TableTopPassthrough] OnSessionCreate: cannot create layer — layerFn={_xrCreatePassthroughLayerFB != null} handle={_passthroughHandle}");
            return;
        }

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
        DiagLog($"[TableTopPassthrough] OnSessionCreate: xrCreatePassthroughLayerFB result={r} layerHandle={_passthroughLayerHandle}");
        if (r == 0)
            s_PassthroughLayerHandle = _passthroughLayerHandle; // expose to static hook
    }

    protected override void OnSessionBegin(ulong xrSession)
    {
        DiagLog($"[TableTopPassthrough] OnSessionBegin: startFn={_xrPassthroughStartFB != null} ptHandle={_passthroughHandle} layerHandle={_passthroughLayerHandle}");

        if (_xrPassthroughStartFB == null || _passthroughHandle == 0)
        {
            DiagLog("[TableTopPassthrough] OnSessionBegin: passthrough handles unavailable — skipping.");
            return;
        }

        // Start the passthrough camera pipeline
        int r = _xrPassthroughStartFB(_passthroughHandle);
        DiagLog($"[TableTopPassthrough] OnSessionBegin: xrPassthroughStartFB result={r}");

        // Resume (activate) the passthrough composition layer
        if (_xrPassthroughLayerResumeFB != null && _passthroughLayerHandle != 0)
        {
            r = _xrPassthroughLayerResumeFB(_passthroughLayerHandle);
            DiagLog($"[TableTopPassthrough] OnSessionBegin: xrPassthroughLayerResumeFB result={r}");
        }
        else
        {
            DiagLog($"[TableTopPassthrough] OnSessionBegin: resumeFn={_xrPassthroughLayerResumeFB != null} layerHandle={_passthroughLayerHandle} — skipping resume.");
        }
    }

    protected override void OnSessionEnd(ulong xrSession)
    {
        s_PassthroughLayerHandle = 0;
        s_FrameCount = 0;
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

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.Rendering.Universal;

/// <summary>
/// Table-top AR mode controller for Meta Quest.
/// Passthrough is handled by TableTopPassthroughFeature (an OpenXRFeature).
/// This script manages arena scale, placement, grab, and play/pause input.
///
/// Setup: run Tools → Setup XR Table-Top to wire everything automatically.
///
/// Controls:
///   Right grip   — grab and drag the arena in world space
///   Left trigger — toggle play / pause
/// </summary>
public class TableTopXRController : MonoBehaviour
{
    [Header("Arena")]
    public Transform arenaAnchor;

    [Tooltip("Real-world size of the arena. 0.01 ≈ 50 cm diameter.")]
    public float tableTopScale = 0.01f;

    [Header("Playback")]
    public Playhead playhead;

    [Header("Camera")]
    [Tooltip("The VR camera. Set to transparent so passthrough shows through.")]
    public Camera xrCamera;

    private const float GripThreshold    = 0.7f;
    private const float TriggerThreshold = 0.7f;

    private bool    isGrabbing;
    private Vector3 grabStartControllerPos;
    private Vector3 grabStartArenaPos;

    private bool prevRightGrip;
    private bool prevLeftTrigger;

    private InputDevice rightController;
    private InputDevice leftController;

    private void Awake()
    {
        // Must be set before the first frame is submitted so the compositor
        // uses straight alpha (not premultiplied) — required for passthrough.
        OVRManager.eyeFovPremultipliedAlphaModeEnabled = false;
    }

    private void Start()
    {
        // Set up file-based diagnostic log (survives release builds; read via adb).
        string diagPath = System.IO.Path.Combine(
            Application.persistentDataPath, "tabletop_xr_diag.txt");
        TableTopPassthroughFeature.SetDiagnosticPath(Application.persistentDataPath);
        _diagPath = diagPath;
        Diag("=== TableTopXRController.Start ===");
        Diag($"persistentDataPath={Application.persistentDataPath}");

        if (arenaAnchor != null)
        {
            arenaAnchor.localScale = Vector3.one * tableTopScale;
            PlaceAnchorInFrontOfCamera();
            ValidatePlayerParenting();
        }

        EnablePassthroughRuntime();
        SetCameraTransparent();
        DisableOtherCamerasFromVR();

        InputDevices.deviceConnected += OnDeviceConnected;
        RefreshControllers();
    }

    // ── Lightweight file diagnostic (reads with: adb shell cat <path>) ────────
    private static string _diagPath;
    private static readonly System.Text.StringBuilder _diagBuf = new System.Text.StringBuilder();

    private static void Diag(string msg)
    {
        _diagBuf.AppendLine($"[{System.DateTime.Now:HH:mm:ss.fff}] {msg}");
        Debug.Log("[TableTopXR] " + msg);
        if (!string.IsNullOrEmpty(_diagPath))
        {
            try { System.IO.File.WriteAllText(_diagPath, _diagBuf.ToString()); }
            catch { }
        }
    }

    private void OnDestroy()
    {
        InputDevices.deviceConnected -= OnDeviceConnected;
    }

    private void OnDeviceConnected(InputDevice _) => RefreshControllers();

    private void RefreshControllers()
    {
        var devices = new List<InputDevice>();

        InputDevices.GetDevicesWithCharacteristics(
            InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller, devices);
        if (devices.Count > 0) rightController = devices[0];

        devices.Clear();
        InputDevices.GetDevicesWithCharacteristics(
            InputDeviceCharacteristics.Left | InputDeviceCharacteristics.Controller, devices);
        if (devices.Count > 0) leftController = devices[0];
    }

    private void Update()
    {
        HandleGrab();
        HandlePlayPause();
    }

    private void HandleGrab()
    {
        if (!rightController.isValid) return;

        rightController.TryGetFeatureValue(CommonUsages.grip, out float grip);
        rightController.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 pos);

        bool gripping = grip > GripThreshold;

        if (gripping && !prevRightGrip)
        {
            isGrabbing            = true;
            grabStartControllerPos = pos;
            grabStartArenaPos     = arenaAnchor.position;
        }
        else if (!gripping && prevRightGrip)
        {
            isGrabbing = false;
        }

        if (isGrabbing && arenaAnchor != null)
            arenaAnchor.position = grabStartArenaPos + (pos - grabStartControllerPos);

        prevRightGrip = gripping;
    }

    private void HandlePlayPause()
    {
        if (playhead == null || !leftController.isValid) return;

        leftController.TryGetFeatureValue(CommonUsages.trigger, out float trig);
        bool triggered = trig > TriggerThreshold;

        if (triggered && !prevLeftTrigger)
            playhead.SetPlaying(!playhead.isPlaying);

        prevLeftTrigger = triggered;
    }

    private void PlaceAnchorInFrontOfCamera()
    {
        if (xrCamera == null) return;

        Vector3 forward = xrCamera.transform.forward;
        forward.y = 0f;
        if (forward.sqrMagnitude < 0.001f) forward = Vector3.forward;
        forward.Normalize();

        arenaAnchor.position = xrCamera.transform.position
            + forward * 1f
            + Vector3.up * (0.8f - xrCamera.transform.position.y);
    }

    private void ValidatePlayerParenting()
    {
        DemoStart demoStart = DemoStart.instance;
        if (demoStart == null)
            demoStart = Object.FindFirstObjectByType<DemoStart>();

        Transform players = demoStart != null ? demoStart.playerObjsParent : null;
        if (players == null || arenaAnchor == null || !players.IsChildOf(arenaAnchor))
            return;

        string message = $"Players parent '{players.name}' is under scaled arenaAnchor '{arenaAnchor.name}' " +
                         $"(anchor scale={arenaAnchor.localScale}, lossyScale={arenaAnchor.lossyScale}). " +
                         "Dynamic player meshes would inherit table-top scale and become effectively invisible. " +
                         "Detaching Players to scene root.";
        Debug.LogError("[TableTopXR] " + message);
        Diag("ERROR: " + message);

        players.SetParent(null, true);
    }

    /// <summary>
    /// Mirrors PassthroughEnabler from the working reference project:
    /// explicitly triggers the OVR runtime property setter (not just the
    /// serialized field), enables the passthrough layer, and hides the boundary.
    /// Must run AFTER OVRManager.Start() — called from our own Start().
    /// </summary>
    private void EnablePassthroughRuntime()
    {
        Diag("--- EnablePassthroughRuntime ---");
        Diag($"OVRManager.instance={(OVRManager.instance != null ? "OK" : "NULL")}");

        // OVRPlugin state
        try
        {
            Diag($"OVRPlugin.initialized={OVRPlugin.initialized}");
            Diag($"PT supported={OVRPlugin.IsInsightPassthroughSupported()}");
            Diag($"PT initialized={OVRPlugin.IsInsightPassthroughInitialized()}");
        }
        catch (System.Exception ex) { Diag($"OVRPlugin query failed: {ex.Message}"); }

        if (OVRManager.instance != null)
        {
            OVRManager.instance.isInsightPassthroughEnabled = true;
            Diag($"isInsightPassthroughEnabled set to true");
            try { OVRManager.boundary.SetVisible(false); } catch { }
        }
        else
        {
            Diag("WARNING: OVRManager.instance is null — passthrough may not initialize");
        }

        var layer = Object.FindFirstObjectByType<OVRPassthroughLayer>();
        Diag($"OVRPassthroughLayer={(layer != null ? $"found on '{layer.gameObject.name}' enabled={layer.enabled}" : "NOT FOUND")}");
        if (layer != null)
        {
            layer.enabled = true;
            Diag($"OVRPassthroughLayer.enabled forced true; overlayType={layer.overlayType} projSurface={layer.projectionSurfaceType}");
        }
    }

    /// <summary>
    /// Sets the camera to render with a transparent background so the Quest
    /// compositor can show the passthrough feed behind the scene.
    /// Disables HDR (prevents R11G11B10 which has no alpha channel) and
    /// post-processing (avoids intermediate blit that strips alpha).
    /// </summary>
    private void SetCameraTransparent()
    {
        if (xrCamera == null)
        {
            Debug.LogWarning("[TableTopXR] xrCamera is null — cannot set transparent background.");
            return;
        }

        xrCamera.clearFlags      = CameraClearFlags.SolidColor;
        xrCamera.backgroundColor = new Color(0f, 0f, 0f, 0f);
        xrCamera.allowHDR        = false;

        var urpData = xrCamera.GetUniversalAdditionalCameraData();
        if (urpData != null)
            urpData.renderPostProcessing = false;

        Diag($"Camera '{xrCamera.name}': clearFlags={xrCamera.clearFlags} bg={xrCamera.backgroundColor} allowHDR={xrCamera.allowHDR} postFX={urpData?.renderPostProcessing}");

        // Log ALL active cameras so we can see the full set.
        var allCams = Camera.allCameras;
        System.Text.StringBuilder sb = new System.Text.StringBuilder("[TableTopXR] All active cameras:\n");
        foreach (var cam in allCams)
        {
            sb.AppendLine($"  '{cam.name}' depth={cam.depth} clearFlags={cam.clearFlags} stereoTargetEye={cam.stereoTargetEye} targetDisplay={cam.targetDisplay}");
        }
        Debug.Log(sb.ToString());
    }

    /// <summary>
    /// In passthrough mode only the XR camera should render to the VR display.
    /// Disables all other active cameras so they cannot overwrite the alpha=0
    /// background the XR camera needs for passthrough compositing.
    /// Also writes a diagnostic file to persistent storage for post-mortem review.
    /// </summary>
    private void DisableOtherCamerasFromVR()
    {
        var allCams = Camera.allCameras;
        var sb = new System.Text.StringBuilder();
        sb.AppendLine($"[TableTopXR] DisableOtherCamerasFromVR — total active cameras: {allCams.Length}");

        foreach (var cam in allCams)
        {
            string action = "kept (XR camera)";
            if (cam != xrCamera)
            {
                cam.enabled = false;
                action = "DISABLED";
            }
            sb.AppendLine($"  '{cam.name}' depth={cam.depth} clearFlags={cam.clearFlags} stereo={cam.stereoTargetEye} → {action}");
        }

        string msg = sb.ToString();
        Debug.Log(msg);

        // Write to persistent storage so we can read it after the session ends.
        try
        {
            string path = System.IO.Path.Combine(Application.persistentDataPath, "passthrough_cameras.txt");
            System.IO.File.WriteAllText(path, msg);
        }
        catch (System.Exception e)
        {
            Debug.LogWarning($"[TableTopXR] Could not write diagnostic file: {e.Message}");
        }
    }
}

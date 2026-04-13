using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.Rendering.Universal;

/// <summary>
/// Table-top AR (passthrough) mode controller for Meta Quest.
///
/// Setup in Inspector:
///   1. Create an empty GameObject called "TableAnchor" in the scene.
///   2. Parent all arena content (arena models, disc, players, etc.) under it.
///   3. Assign "TableAnchor" to arenaAnchor below.
///   4. Assign the VR camera to xrCamera.
///   5. Assign the DemoStart playhead to playhead.
///
/// Controls:
///   Right grip   — grab and drag the arena anywhere in the room
///   Left trigger — toggle play / pause
/// </summary>
public class TableTopXRController : MonoBehaviour
{
    [Header("Arena")]
    [Tooltip("Root transform of all arena content. Scale and position are controlled here.")]
    public Transform arenaAnchor;

    [Tooltip("How large the arena appears in real-world metres. 0.01 ≈ 50 cm diameter.")]
    public float tableTopScale = 0.01f;

    [Header("Playback")]
    public Playhead playhead;

    [Header("Passthrough")]
    [Tooltip("The XR camera. Its clear flags are set to transparent for passthrough.")]
    public Camera xrCamera;

    // Input thresholds
    private const float GripThreshold = 0.7f;
    private const float TriggerThreshold = 0.7f;

    // Grab state
    private bool isGrabbing;
    private Vector3 grabStartControllerPos;
    private Vector3 grabStartArenaPos;

    // Previous-frame button states
    private bool prevRightGrip;
    private bool prevLeftTrigger;

    // XR input devices
    private InputDevice rightController;
    private InputDevice leftController;

    private void Start()
    {
        if (arenaAnchor != null)
        {
            arenaAnchor.localScale = Vector3.one * tableTopScale;
            PlaceAnchorInFrontOfCamera();
        }

        // Camera clear flags can be set immediately.
        SetCameraTransparent();

        // Blend mode must wait until the XR display subsystem is running —
        // calling it before the session is ready hangs the app on the loading screen.
        StartCoroutine(EnablePassthroughWhenReady());

        InputDevices.deviceConnected += OnDeviceConnected;
        RefreshControllers();
    }

    private void OnDestroy()
    {
        InputDevices.deviceConnected -= OnDeviceConnected;
    }

    private void OnDeviceConnected(InputDevice device)
    {
        RefreshControllers();
    }

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

        rightController.TryGetFeatureValue(CommonUsages.grip, out float gripValue);
        rightController.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 controllerPos);

        bool gripping = gripValue > GripThreshold;

        if (gripping && !prevRightGrip)
        {
            isGrabbing = true;
            grabStartControllerPos = controllerPos;
            grabStartArenaPos = arenaAnchor.position;
        }
        else if (!gripping && prevRightGrip)
        {
            isGrabbing = false;
        }

        if (isGrabbing && arenaAnchor != null)
            arenaAnchor.position = grabStartArenaPos + (controllerPos - grabStartControllerPos);

        prevRightGrip = gripping;
    }

    private void HandlePlayPause()
    {
        if (playhead == null || !leftController.isValid) return;

        leftController.TryGetFeatureValue(CommonUsages.trigger, out float trigValue);
        bool triggered = trigValue > TriggerThreshold;

        if (triggered && !prevLeftTrigger)
            playhead.SetPlaying(!playhead.isPlaying);

        prevLeftTrigger = triggered;
    }

    private void PlaceAnchorInFrontOfCamera()
    {
        if (xrCamera == null) return;

        Vector3 forward = xrCamera.transform.forward;
        forward.y = 0;
        if (forward.sqrMagnitude < 0.001f) forward = Vector3.forward;
        forward.Normalize();

        arenaAnchor.position = xrCamera.transform.position
            + forward * 1f
            + Vector3.up * (0.8f - xrCamera.transform.position.y);
    }

    /// <summary>
    /// Sets camera clear flags immediately — safe to call before XR session is ready.
    /// </summary>
    private void SetCameraTransparent()
    {
        if (xrCamera == null) return;

        xrCamera.clearFlags = CameraClearFlags.SolidColor;
        xrCamera.backgroundColor = new Color(0f, 0f, 0f, 0f);

        var urpData = xrCamera.GetUniversalAdditionalCameraData();
        if (urpData != null)
            urpData.renderPostProcessing = false;
    }

    /// <summary>
    /// Waits until the XRDisplaySubsystem is running, then sets AlphaBlend mode.
    /// Calling SetEnvironmentBlendMode before the XR session is fully up blocks
    /// the native layer and hangs the app on the Quest loading screen.
    /// </summary>
    private IEnumerator EnablePassthroughWhenReady()
    {
        var displays = new List<XRDisplaySubsystem>();

        // Wait up to 30 seconds for the display subsystem to come online.
        float deadline = Time.time + 30f;
        while (Time.time < deadline)
        {
            SubsystemManager.GetSubsystems(displays);
            if (displays.Count > 0 && displays[0].running)
                break;

            displays.Clear();
            yield return null;
        }

        if (displays.Count == 0 || !displays[0].running)
        {
            Debug.LogWarning("[TableTopXR] XR display subsystem never became ready — passthrough not enabled.");
            yield break;
        }

        PassthroughBridge.SetBlendModeAlpha();
        Debug.Log("[TableTopXR] Passthrough enabled — blend mode set to AlphaBlend.");
    }
}

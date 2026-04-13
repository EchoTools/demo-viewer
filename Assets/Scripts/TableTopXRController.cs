using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

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
///   Right grip  — grab and drag the arena anywhere in the room
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

        EnablePassthrough();

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

    /// <summary>
    /// Right-grip drag: moves the arena anchor 1:1 with controller movement.
    /// Movement is unrestricted (no Y clamping) so the user can freely adjust height.
    /// </summary>
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
        {
            arenaAnchor.position = grabStartArenaPos + (controllerPos - grabStartControllerPos);
        }

        prevRightGrip = gripping;
    }

    /// <summary>
    /// Left-trigger edge: toggles play / pause on press.
    /// </summary>
    private void HandlePlayPause()
    {
        if (playhead == null || !leftController.isValid) return;

        leftController.TryGetFeatureValue(CommonUsages.trigger, out float trigValue);
        bool triggered = trigValue > TriggerThreshold;

        if (triggered && !prevLeftTrigger)
        {
            playhead.SetPlaying(!playhead.isPlaying);
        }

        prevLeftTrigger = triggered;
    }

    /// <summary>
    /// Positions the arena anchor ~1 m in front of the camera at table height (0.8 m).
    /// Called once on Start so the user immediately sees the arena on a surface.
    /// </summary>
    private void PlaceAnchorInFrontOfCamera()
    {
        if (xrCamera == null) return;

        Vector3 forward = xrCamera.transform.forward;
        forward.y = 0;
        if (forward.sqrMagnitude < 0.001f) forward = Vector3.forward;
        forward.Normalize();

        arenaAnchor.position = xrCamera.transform.position + forward * 1f + Vector3.up * (0.8f - xrCamera.transform.position.y);
    }

    /// <summary>
    /// Configures the VR camera for passthrough (transparent background) and
    /// requests Alpha-Blend environment blend mode from the XR display subsystem.
    ///
    /// Requires the Oculus/Meta OpenXR feature to be enabled in
    /// Project Settings → XR Plug-in Management → OpenXR → Features.
    /// </summary>
    private void EnablePassthrough()
    {
        if (xrCamera != null)
        {
            xrCamera.clearFlags = CameraClearFlags.SolidColor;
            xrCamera.backgroundColor = new Color(0f, 0f, 0f, 0f);
        }

        var displaySubsystems = new List<XRDisplaySubsystem>();
        SubsystemManager.GetSubsystems(displaySubsystems);
        foreach (XRDisplaySubsystem subsystem in displaySubsystems)
        {
            subsystem.SetEnvironmentBlendMode(XRDisplaySubsystem.EnvironmentBlendMode.AlphaBlend);
            Debug.Log("[TableTopXR] Passthrough blend mode requested.");
            break;
        }
    }
}

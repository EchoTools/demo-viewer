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

    private void Start()
    {
        if (arenaAnchor != null)
        {
            arenaAnchor.localScale = Vector3.one * tableTopScale;
            PlaceAnchorInFrontOfCamera();
        }

        SetCameraTransparent();

        InputDevices.deviceConnected += OnDeviceConnected;
        RefreshControllers();
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

    /// <summary>
    /// Sets the camera to render with a transparent background so the Quest
    /// compositor can show the passthrough feed behind the scene.
    /// The actual AlphaBlend mode and XR_FB_passthrough setup is handled by
    /// TableTopPassthroughFeature (an OpenXRFeature that runs at session start).
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

        var urpData = xrCamera.GetUniversalAdditionalCameraData();
        if (urpData != null)
            urpData.renderPostProcessing = false;

        Debug.Log($"[TableTopXR] Camera '{xrCamera.name}' set transparent. clearFlags={xrCamera.clearFlags} bg={xrCamera.backgroundColor}");
    }
}

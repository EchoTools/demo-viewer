using UnityEngine;

/// <summary>
/// A world-space play/pause button that sits beside the table-top arena.
///
/// Setup:
///   1. Create a new GameObject (e.g. a small Sphere or Cube, ~3-5 cm radius).
///   2. Add a Collider (set Is Trigger = true).
///   3. Add this component and assign playhead.
///   4. Tag your VR controller GameObjects with the "XRController" tag,
///      OR set the controllerTag field to whatever tag you already use.
///   5. Make sure your controller GameObject has a Collider (IsTrigger = true).
///
/// Interaction:
///   Poke the button sphere with your controller hand to toggle play/pause.
///   The button turns green while playing and red while paused.
///
/// Visual:
///   The button's MeshRenderer material colour reflects playback state.
///   It also pulses slightly in scale to indicate it is interactive.
/// </summary>
[RequireComponent(typeof(Collider))]
public class TableTopPlayPauseButton : MonoBehaviour
{
    [Tooltip("The playhead to control.")]
    public Playhead playhead;

    [Tooltip("Tag on the controller GameObjects that can poke this button.")]
    public string controllerTag = "XRController";

    [Tooltip("Cooldown in seconds between presses to prevent accidental double-toggles.")]
    public float pressCooldown = 0.5f;

    [Header("Visuals")]
    [Tooltip("Color when replay is playing.")]
    public Color playingColor = new Color(0.2f, 0.9f, 0.2f, 1f);

    [Tooltip("Color when replay is paused.")]
    public Color pausedColor = new Color(0.9f, 0.2f, 0.2f, 1f);

    [Tooltip("Amplitude of the idle scale pulse (0 = no pulse).")]
    public float pulseAmplitude = 0.05f;

    [Tooltip("Speed of the idle scale pulse.")]
    public float pulseSpeed = 2f;

    private MeshRenderer meshRenderer;
    private Material buttonMaterial;
    private Vector3 baseScale;
    private float lastPressTime = float.NegativeInfinity;

    private void Start()
    {
        meshRenderer = GetComponent<MeshRenderer>();
        if (meshRenderer != null)
        {
            // Instantiate so we don't modify the shared asset
            buttonMaterial = new Material(meshRenderer.material);
            meshRenderer.material = buttonMaterial;
        }

        baseScale = transform.localScale;
        RefreshColor();
    }

    private void Update()
    {
        Pulse();
        RefreshColor();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag(controllerTag)) return;
        if (Time.time - lastPressTime < pressCooldown) return;
        if (playhead == null) return;

        lastPressTime = Time.time;
        playhead.SetPlaying(!playhead.isPlaying);

        // Snap colour immediately for tactile feedback
        RefreshColor();
    }

    private void RefreshColor()
    {
        if (buttonMaterial == null || playhead == null) return;
        buttonMaterial.color = playhead.isPlaying ? playingColor : pausedColor;
    }

    private void Pulse()
    {
        if (pulseAmplitude <= 0f) return;
        float s = 1f + Mathf.Sin(Time.time * pulseSpeed) * pulseAmplitude;
        transform.localScale = baseScale * s;
    }

    private void OnDestroy()
    {
        if (buttonMaterial != null) Destroy(buttonMaterial);
    }
}

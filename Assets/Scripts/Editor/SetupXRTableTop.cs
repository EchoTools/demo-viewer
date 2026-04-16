using System.Collections.Generic;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEditor.XR.OpenXR.Features;
using UnityEngine;

/// <summary>
/// Editor tool: Tools → Setup XR Table-Top
///
/// Automates all the steps needed to run the replay viewer in
/// Meta Quest passthrough / table-top board-game mode.
///
/// What it does:
///   1.  Finds GameManager, DemoStart, vrCamera, and Playhead in the open scene.
///   2.  Creates a "TableAnchor" empty GameObject at scene root (idempotent).
///   3.  Moves static arena content under TableAnchor so it can scale as one unit.
///   4.  Adds TableTopXRController to the GameManager object and wires
///       arenaAnchor, xrCamera, and playhead.
///   5.  Creates a small "PlayPauseButton" sphere beside the arena and
///       wires its playhead reference.
///   6.  Resets RigScaler's localScale to 1 (table-top uses arena scale,
///       not rig scale).
///   7.  Adds the "XRController" tag to the project TagManager so the
///       play/pause button can detect controller touches.
///   8.  Marks the scene dirty so you don't forget to save.
/// </summary>
public static class SetupXRTableTop
{
    private const string TableAnchorName = "TableAnchor";
    private const string ButtonName = "PlayPauseButton";
    private const string XRControllerTag = "XRController";

    // Names of static arena-content objects to group under TableAnchor.
    // Extend this list if you add more root-level arena objects.
    private static readonly string[] ArenaContentNames =
    {
        "Old Arena",
        "disc",
    };

    [MenuItem("Tools/Setup XR Table-Top")]
    public static void Run()
    {
        // ── Validation ──────────────────────────────────────────────────────────
        GameManager gameManager = Object.FindFirstObjectByType<GameManager>();
        if (gameManager == null)
        {
            EditorUtility.DisplayDialog("Setup XR Table-Top",
                "Could not find GameManager in the open scene.\n\n" +
                "Open 'Assets/Scenes/Game Scene.unity' and try again.",
                "OK");
            return;
        }

        DemoStart demoStart = Object.FindFirstObjectByType<DemoStart>();
        if (demoStart == null)
        {
            EditorUtility.DisplayDialog("Setup XR Table-Top",
                "Could not find DemoStart in the open scene.", "OK");
            return;
        }

        Camera vrCam = gameManager.vrCamera;
        if (vrCam == null)
        {
            EditorUtility.DisplayDialog("Setup XR Table-Top",
                "GameManager.vrCamera is not assigned.\n\n" +
                "Assign the VR camera in the GameManager inspector first.",
                "OK");
            return;
        }

        Playhead playhead = demoStart.playhead;
        if (playhead == null)
        {
            EditorUtility.DisplayDialog("Setup XR Table-Top",
                "DemoStart.playhead is not assigned.\n\n" +
                "Assign the Playhead component in the DemoStart inspector first.",
                "OK");
            return;
        }

        Undo.SetCurrentGroupName("Setup XR Table-Top");
        int undoGroup = Undo.GetCurrentGroup();

        var log = new List<string>();

        // ── 1. Enable TableTopPassthroughFeature for Android ────────────────────
        FeatureHelpers.RefreshFeatures(BuildTargetGroup.Android);
        var passthroughFeature = FeatureHelpers.GetFeatureWithIdForBuildTarget(
            BuildTargetGroup.Android, TableTopPassthroughFeature.FeatureId);
        if (passthroughFeature != null)
        {
            passthroughFeature.enabled = true;
            EditorUtility.SetDirty(passthroughFeature);
            log.Add("• TableTopPassthroughFeature enabled for Android.");
        }
        else
        {
            log.Add("  (warn) TableTopPassthroughFeature not found — open Project Settings → XR → OpenXR → Android → Features and enable 'Table-Top Passthrough' manually.");
        }

        // ── 3. Ensure XRController tag exists ───────────────────────────────────
        EnsureTagExists(XRControllerTag);
        log.Add($"• Tag '{XRControllerTag}' ensured in TagManager.");

        // ── 2. Force enableVR on GameManager (Quest has no -useVR command line) ───
        Undo.RecordObject(gameManager, "Enable VR on GameManager");
        gameManager.enableVR = true;
        log.Add("• GameManager.enableVR = true (required on Android — no -useVR arg).");

        // ── 4. Create / find TableAnchor ─────────────────────────────────────────
        GameObject tableAnchor = GameObject.Find(TableAnchorName);
        if (tableAnchor == null)
        {
            tableAnchor = new GameObject(TableAnchorName);
            Undo.RegisterCreatedObjectUndo(tableAnchor, "Create TableAnchor");
            log.Add($"• Created '{TableAnchorName}' at scene root.");
        }
        else
        {
            log.Add($"• '{TableAnchorName}' already exists — reusing it.");
        }

        // ── 5. Move arena content under TableAnchor ──────────────────────────────
        foreach (string goName in ArenaContentNames)
        {
            GameObject found = GameObject.Find(goName);
            if (found == null)
            {
                log.Add($"  (skip) '{goName}' not found in scene.");
                continue;
            }

            if (found.transform.parent == tableAnchor.transform)
            {
                log.Add($"  (skip) '{goName}' already under TableAnchor.");
                continue;
            }

            Undo.SetTransformParent(found.transform, tableAnchor.transform, $"Parent {goName} to TableAnchor");
            log.Add($"• Moved '{goName}' under TableAnchor.");
        }

        GameObject players = GameObject.Find("Players");
        if (players != null && players.transform.IsChildOf(tableAnchor.transform))
        {
            Undo.SetTransformParent(players.transform, null, "Detach Players from TableAnchor");
            log.Add("• Detached 'Players' from TableAnchor so runtime player meshes do not inherit table-top scale.");
        }

        // ── 6. Reset RigScaler to 1:1 (arena is now scaled, not the rig) ─────────
        GameObject rigScaler = GameObject.Find("RigScaler");
        if (rigScaler != null)
        {
            Undo.RecordObject(rigScaler.transform, "Reset RigScaler scale");
            rigScaler.transform.localScale = Vector3.one;
            log.Add("• Reset RigScaler.localScale to (1,1,1).");
        }
        else
        {
            log.Add("  (skip) RigScaler not found — rig scale unchanged.");
        }

        // ── 7. Add TableTopXRController to GameManager ──────────────────────────
        TableTopXRController xrCtrl = gameManager.GetComponent<TableTopXRController>();
        if (xrCtrl == null)
        {
            xrCtrl = Undo.AddComponent<TableTopXRController>(gameManager.gameObject);
            log.Add($"• Added TableTopXRController to '{gameManager.gameObject.name}'.");
        }
        else
        {
            log.Add($"  (update) TableTopXRController already on '{gameManager.gameObject.name}' — updating references.");
        }

        Undo.RecordObject(xrCtrl, "Wire TableTopXRController");
        xrCtrl.arenaAnchor = tableAnchor.transform;
        xrCtrl.xrCamera = vrCam;
        xrCtrl.playhead = playhead;
        xrCtrl.tableTopScale = 0.01f;
        log.Add("  → arenaAnchor, xrCamera, playhead wired. tableTopScale = 0.01");

        // ── 8. Create / find PlayPauseButton ─────────────────────────────────────
        Transform existingBtn = tableAnchor.transform.Find(ButtonName);
        GameObject button;
        if (existingBtn == null)
        {
            button = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            button.name = ButtonName;
            Undo.RegisterCreatedObjectUndo(button, "Create PlayPauseButton");
            Undo.SetTransformParent(button.transform, tableAnchor.transform, "Parent PlayPauseButton");
            log.Add($"• Created '{ButtonName}' sphere under TableAnchor.");
        }
        else
        {
            button = existingBtn.gameObject;
            log.Add($"  (update) '{ButtonName}' already exists — updating.");
        }

        // Position it at the edge of the arena (in local space, scaled by tableTopScale)
        // 0.55 local units ≈ edge of a ~50 m radius arena at 0.01 scale = ~5 cm out
        Undo.RecordObject(button.transform, "Position PlayPauseButton");
        button.transform.localPosition = new Vector3(0.55f, 0f, 0f);
        button.transform.localScale = Vector3.one * 0.04f;  // 4 cm in world space at scale 1

        // Sphere collider as trigger so OnTriggerEnter fires on controller touch
        SphereCollider col = button.GetComponent<SphereCollider>();
        if (col == null) col = Undo.AddComponent<SphereCollider>(button);
        Undo.RecordObject(col, "Set button collider trigger");
        col.isTrigger = true;

        // TableTopPlayPauseButton component
        TableTopPlayPauseButton btnComp = button.GetComponent<TableTopPlayPauseButton>();
        if (btnComp == null)
        {
            btnComp = Undo.AddComponent<TableTopPlayPauseButton>(button);
        }
        Undo.RecordObject(btnComp, "Wire PlayPauseButton");
        btnComp.playhead = playhead;
        btnComp.controllerTag = XRControllerTag;
        log.Add($"  → playhead wired, collider set to trigger.");

        // ── 9. Mark scene dirty ───────────────────────────────────────────────────
        Undo.CollapseUndoOperations(undoGroup);
        EditorSceneManager.MarkSceneDirty(gameManager.gameObject.scene);

        // ── 10. Summary dialog ─────────────────────────────────────────────────────
        string summary = string.Join("\n", log) +
            "\n\n─── Next steps ───\n" +
            "1. Tag your controller hand GameObjects with 'XRController' so the\n" +
            "   PlayPauseButton can detect pokes.\n" +
            "2. Add a Collider (IsTrigger) to each controller hand if not already present.\n" +
            "3. In Project Settings → XR → OpenXR → Features (Android), enable\n" +
            "   'Meta Quest: Passthrough' or 'Oculus Quest Feature'.\n" +
            "4. Save the scene (Ctrl+S) and build to your Quest.\n" +
            "5. Optional: adjust TableTopXRController.tableTopScale in the Inspector\n" +
            "   (0.01 = ~50 cm diameter arena; 0.008 = smaller).";

        EditorUtility.DisplayDialog("Setup XR Table-Top — Done", summary, "OK");
        Debug.Log("[SetupXRTableTop] " + summary);
    }

    /// <summary>
    /// Adds <paramref name="tag"/> to the project TagManager if it doesn't already exist.
    /// </summary>
    private static void EnsureTagExists(string tag)
    {
        Object[] assets = AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset");
        if (assets == null || assets.Length == 0) return;

        SerializedObject tagManager = new SerializedObject(assets[0]);
        SerializedProperty tags = tagManager.FindProperty("tags");

        for (int i = 0; i < tags.arraySize; i++)
        {
            if (tags.GetArrayElementAtIndex(i).stringValue == tag) return;
        }

        tags.InsertArrayElementAtIndex(tags.arraySize);
        tags.GetArrayElementAtIndex(tags.arraySize - 1).stringValue = tag;
        tagManager.ApplyModifiedProperties();
    }
}

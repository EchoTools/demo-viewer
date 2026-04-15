using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Text;
using UnityEditor;
using UnityEditor.XR.Management;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.XR.Management;

/// <summary>
/// Tools → Setup OVR Passthrough
///
/// Two-step wizard that replaces the custom raw-OpenXR passthrough hack with
/// the battle-tested Meta XR SDK approach (OVRManager + OVRPassthroughLayer).
///
/// Step 1 — adds com.meta.xr.sdk.all 85.0.0 and com.unity.xr.oculus 4.5.4
///           to Packages/manifest.json (both already in your local Unity cache)
///           then triggers package resolution.  Unity will reload automatically
///           and Step 2 runs on its own.
///
/// Step 2 — with the OVR types now available:
///   • Switches the Android XR loader from OpenXR → Oculus
///   • Adds OVRManager to the scene root with passthrough enabled
///   • Adds OVRPassthroughLayer configured as an underlay
///   • Sets the XR camera clear flags and background colour
///   • Disables the old PassthroughAlphaRendererFeature in the URP renderer
///   • Reverts the diagnostic (blue) shader back to alpha-only write
///
/// What stays manual:
///   • Build + deploy the APK
///   • Any OVR project-level settings Unity shows warnings about (eye buffer format, etc.)
/// </summary>
[InitializeOnLoad]
public static class SetupOVRPassthrough
{
    // ── Package IDs & versions already in your local cache ───────────────────
    private const string MetaSDKPackage  = "com.meta.xr.sdk.all";
    private const string OculusXRPackage = "com.unity.xr.oculus";
    private const string MetaSDKVersion  = "85.0.0";
    private const string OculusVersion   = "4.5.4";

    // SessionState key to re-enter Step 2 after the domain reload
    private const string PendingKey = "OVRPassthroughSetupPending";

    // ── Auto-continue after domain reload ────────────────────────────────────
    static SetupOVRPassthrough()
    {
        if (SessionState.GetBool(PendingKey, false))
        {
            SessionState.EraseBool(PendingKey);
            // delayCall defers until Editor is fully initialised post-reload
            EditorApplication.delayCall += () => Step2_ConfigureScene(auto: true);
        }
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Step 1: install packages
    // ─────────────────────────────────────────────────────────────────────────

    [MenuItem("Tools/Setup OVR Passthrough/Step 1 — Install Packages")]
    private static void Step1_InstallPackages()
    {
        bool hasMeta   = IsPackageInManifest(MetaSDKPackage);
        bool hasOculus = IsPackageInManifest(OculusXRPackage);

        if (hasMeta && hasOculus)
        {
            if (EditorUtility.DisplayDialog("Packages Already Present",
                $"Both packages are already in manifest.json:\n" +
                $"  • {MetaSDKPackage} {MetaSDKVersion}\n" +
                $"  • {OculusXRPackage} {OculusVersion}\n\n" +
                "Run Step 2 to configure the scene.",
                "Run Step 2 Now", "Cancel"))
                Step2_ConfigureScene(auto: false);
            return;
        }

        var sb = new StringBuilder();
        sb.AppendLine("The following packages will be added to Packages/manifest.json:");
        if (!hasMeta)   sb.AppendLine($"  + {MetaSDKPackage} {MetaSDKVersion}");
        if (!hasOculus) sb.AppendLine($"  + {OculusXRPackage} {OculusVersion}");
        sb.AppendLine();
        sb.AppendLine("Both are already in your local Unity package cache — no download needed.");
        sb.AppendLine("Unity will resolve packages and reload. Step 2 will run automatically.");

        if (!EditorUtility.DisplayDialog("Install Meta XR Packages", sb.ToString(), "Install & Reload", "Cancel"))
            return;

        AddPackagesToManifest(hasMeta, hasOculus);
        SessionState.SetBool(PendingKey, true);
        // Refresh triggers package resolution → domain reload → InitializeOnLoad
        AssetDatabase.Refresh();
        UnityEditor.PackageManager.Client.Resolve();
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Step 2: configure scene + XR settings
    // ─────────────────────────────────────────────────────────────────────────

    [MenuItem("Tools/Setup OVR Passthrough/Step 2 — Configure Scene")]
    private static void Step2_MenuItem() => Step2_ConfigureScene(auto: false);

    private static void Step2_ConfigureScene(bool auto)
    {
        if (!IsPackageInManifest(MetaSDKPackage) || !IsPackageInManifest(OculusXRPackage))
        {
            EditorUtility.DisplayDialog("Packages Not Installed",
                "Run Step 1 first to add the Meta XR SDK packages.", "OK");
            return;
        }

        var log  = new StringBuilder();
        bool ok  = true;

        ok &= SwitchXRLoaderToOculus(log);
        ok &= AddOVRManagerToScene(log);
        ok &= AddOVRPassthroughLayer(log);
        ok &= ConfigureCamera(log);
        DisableOldPassthroughAssets(log);
        RevertDiagnosticShader(log);

        UnityEditor.SceneManagement.EditorSceneManager.MarkAllScenesDirty();

        log.AppendLine();
        log.AppendLine("─── Manual steps still required ───────────────────────────────");
        log.AppendLine("1. SAVE THE SCENE  (Ctrl+S).");
        log.AppendLine("2. Build & deploy the APK to your Quest 3.");
        log.AppendLine("3. If Unity shows 'OVR Project Config' warnings, click Fix All.");

        string title = ok ? "OVR Passthrough Setup — Done" : "OVR Passthrough Setup — Done (with warnings)";
        EditorUtility.DisplayDialog(title, log.ToString(), "OK");
        Debug.Log($"[SetupOVRPassthrough]\n{log}");
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Switch XR loader: OpenXR → Oculus
    // Uses SerializedObject directly — avoids the XRPackageMetadataStore API
    // which is not available in all XR Management versions.
    // ─────────────────────────────────────────────────────────────────────────

    private static bool SwitchXRLoaderToOculus(StringBuilder log)
    {
        try
        {
            var generalSettings = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(
                BuildTargetGroup.Android);

            if (generalSettings == null)
            {
                log.AppendLine("⚠ XRGeneralSettings not found — switch manually:");
                log.AppendLine("  Project Settings → XR Plug-in Management → Android → uncheck OpenXR, check Oculus.");
                return false;
            }

            XRManagerSettings mgr = generalSettings.Manager;
            if (mgr == null)
            {
                log.AppendLine("⚠ XRManagerSettings is null — switch loader manually.");
                return false;
            }

            // Find the OculusLoader asset that the Oculus XR Plugin creates
            XRLoader oculusLoader = FindLoaderAsset("OculusLoader");
            if (oculusLoader == null)
            {
                log.AppendLine("⚠ OculusLoader asset not found — Oculus XR Plugin may still be resolving.");
                log.AppendLine("  Re-run Step 2 after Unity finishes the package reload, or switch manually:");
                log.AppendLine("  Project Settings → XR Plug-in Management → Android → uncheck OpenXR, check Oculus.");
                return false;
            }

            // Directly set the loaders list via SerializedObject
            var so      = new SerializedObject(mgr);
            var loaders = so.FindProperty("m_Loaders");
            if (loaders == null)
            {
                log.AppendLine("⚠ Could not find m_Loaders on XRManagerSettings.");
                return false;
            }

            // Clear existing loaders and set Oculus as the only one
            loaders.ClearArray();
            loaders.InsertArrayElementAtIndex(0);
            loaders.GetArrayElementAtIndex(0).objectReferenceValue = oculusLoader;
            so.ApplyModifiedProperties();

            EditorUtility.SetDirty(mgr);
            AssetDatabase.SaveAssets();
            log.AppendLine("✓ XR loader switched to OculusLoader.");
            return true;
        }
        catch (Exception e)
        {
            log.AppendLine($"⚠ XR loader switch failed: {e.Message}");
            log.AppendLine("  Switch manually: Project Settings → XR Plug-in Management → Android → uncheck OpenXR, check Oculus.");
            return false;
        }
    }

    private static XRLoader FindLoaderAsset(string loaderTypeName)
    {
        // Search all XRLoader assets and match by type name (class name) or asset name.
        // The asset file may be named differently (e.g. "Oculus Loader") from the class
        // name (e.g. "OculusLoader"), so we check both.
        string[] guids = AssetDatabase.FindAssets("t:XRLoader");
        foreach (string guid in guids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            var obj = AssetDatabase.LoadAssetAtPath<XRLoader>(path);
            if (obj == null) continue;
            // Match by class name or by asset name (with/without spaces)
            string className = obj.GetType().Name;
            string assetName = obj.name.Replace(" ", "");
            if (className == loaderTypeName || assetName == loaderTypeName)
                return obj;
        }
        return null;
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Add OVRManager to the scene (on GameManager or XR Origin)
    // ─────────────────────────────────────────────────────────────────────────

    private static bool AddOVRManagerToScene(StringBuilder log)
    {
        Type ovrManagerType = FindType("OVRManager");
        if (ovrManagerType == null)
        {
            log.AppendLine("⚠ OVRManager type not found — packages may still be resolving.");
            log.AppendLine("  Re-run Step 2 after Unity finishes the package reload.");
            return false;
        }

        // Prefer to attach to GameManager; fall back to any root GameObject
        Component existing = (Component)FindFirstOfType(ovrManagerType);
        GameObject host;

        if (existing != null)
        {
            host = existing.gameObject;
            log.AppendLine($"  OVRManager already present on '{host.name}' — updating settings.");
        }
        else
        {
            // Attach to GameManager if it exists, otherwise create a dedicated host
            var gameManager = UnityEngine.Object.FindFirstObjectByType<GameManager>();
            host = gameManager != null ? gameManager.gameObject : new GameObject("OVRCameraRig");
            if (gameManager == null) Undo.RegisterCreatedObjectUndo(host, "Create OVRCameraRig");
            existing = Undo.AddComponent(host, ovrManagerType) as Component;
            log.AppendLine($"✓ OVRManager added to '{host.name}'.");
        }

        // isInsightPassthroughEnabled = true
        SetSerializedField(existing, "isInsightPassthroughEnabled", true);

        // eyeFovPremultipliedAlphaModeEnabled static property = false  (mirrors working project)
        try
        {
            var prop = ovrManagerType.GetProperty("eyeFovPremultipliedAlphaModeEnabled",
                BindingFlags.Public | BindingFlags.Static);
            prop?.SetValue(null, false);
        }
        catch { /* ignore if not available */ }

        log.AppendLine("  → isInsightPassthroughEnabled = true");

        EditorUtility.SetDirty(host);
        return true;
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Add OVRPassthroughLayer (underlay, reconstruction) to scene root
    // ─────────────────────────────────────────────────────────────────────────

    private static bool AddOVRPassthroughLayer(StringBuilder log)
    {
        Type ptLayerType = FindType("OVRPassthroughLayer");
        if (ptLayerType == null)
        {
            log.AppendLine("⚠ OVRPassthroughLayer type not found — packages still resolving.");
            return false;
        }

        Component existing = (Component)FindFirstOfType(ptLayerType);
        GameObject host;

        if (existing != null)
        {
            host = existing.gameObject;
            log.AppendLine($"  OVRPassthroughLayer already on '{host.name}' — updating.");
        }
        else
        {
            // Add to the same object that has OVRManager, or the scene root
            Type ovrManagerType = FindType("OVRManager");
            Component mgr = ovrManagerType != null ? (Component)FindFirstOfType(ovrManagerType) : null;
            host = mgr != null ? mgr.gameObject : new GameObject("OVRPassthrough");
            if (mgr == null) Undo.RegisterCreatedObjectUndo(host, "Create OVRPassthrough");
            existing = Undo.AddComponent(host, ptLayerType) as Component;
            log.AppendLine($"✓ OVRPassthroughLayer added to '{host.name}'.");
        }

        // projectionSurfaceType = Reconstruction (0)
        // overlayType: OVROverlay.OverlayType enum is None=0, Underlay=1, Overlay=2
        SetSerializedField(existing, "projectionSurfaceType", 0);
        SetSerializedField(existing, "overlayType", 1); // 1 = Underlay

        log.AppendLine("  → Underlay, Reconstruction surface");
        EditorUtility.SetDirty(host);
        return true;
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Configure camera: clearFlags = Depth, backgroundColor = (0,0,0,0)
    // ─────────────────────────────────────────────────────────────────────────

    private static bool ConfigureCamera(StringBuilder log)
    {
        // Find the XR camera — prefer the one already wired in TableTopXRController
        Camera xrCam = null;
        var xrCtrl = UnityEngine.Object.FindFirstObjectByType<TableTopXRController>();
        if (xrCtrl != null)
            xrCam = xrCtrl.xrCamera;
        if (xrCam == null)
            xrCam = Camera.main;
        if (xrCam == null)
        {
            log.AppendLine("⚠ XR camera not found — configure it manually.");
            return false;
        }

        Undo.RecordObject(xrCam, "Configure XR Camera for passthrough");
        xrCam.clearFlags      = CameraClearFlags.Depth;
        xrCam.backgroundColor = new Color(0f, 0f, 0f, 0f);

        // Disable post-processing (passthrough + post-processing fight each other)
        var urpData = xrCam.GetUniversalAdditionalCameraData();
        if (urpData != null)
        {
            Undo.RecordObject(urpData, "Disable post-processing on XR camera");
            urpData.renderPostProcessing = false;
        }

        log.AppendLine($"✓ Camera '{xrCam.name}': clearFlags=Depth, backgroundColor=(0,0,0,0), postProcessing=off.");
        EditorUtility.SetDirty(xrCam);
        return true;
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Disable PassthroughAlphaRendererFeature from URP renderer
    // ─────────────────────────────────────────────────────────────────────────

    private static void DisableOldPassthroughAssets(StringBuilder log)
    {
        // Find URP renderer assets and disable PassthroughAlphaRendererFeature
        string[] guids = AssetDatabase.FindAssets("t:UniversalRendererData");
        foreach (string guid in guids)
        {
            string path   = AssetDatabase.GUIDToAssetPath(guid);
            var renderer  = AssetDatabase.LoadAssetAtPath<UniversalRendererData>(path);
            if (renderer == null) continue;

            foreach (var feature in renderer.rendererFeatures)
            {
                if (feature is PassthroughAlphaRendererFeature)
                {
                    Undo.RecordObject(feature, "Disable PassthroughAlphaRendererFeature");
                    feature.SetActive(false);
                    EditorUtility.SetDirty(renderer);
                    log.AppendLine($"✓ PassthroughAlphaRendererFeature disabled in '{path}'.");
                }
            }
        }
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Revert diagnostic shader back to alpha-only write (ColorMask A, black)
    // ─────────────────────────────────────────────────────────────────────────

    private static void RevertDiagnosticShader(StringBuilder log)
    {
        string[] guids = AssetDatabase.FindAssets("PassthroughClearAlpha t:Shader");
        foreach (string guid in guids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            if (!path.EndsWith(".shader")) continue;

            string src = File.ReadAllText(path);
            bool changed = false;

            if (src.Contains("ColorMask RGBA"))
            {
                src     = src.Replace("ColorMask RGBA", "ColorMask A");
                changed = true;
            }
            if (src.Contains("return half4(0, 0, 1, 0)"))
            {
                src     = src.Replace("return half4(0, 0, 1, 0)", "return half4(0, 0, 0, 0)");
                changed = true;
            }

            if (changed)
            {
                File.WriteAllText(path, src);
                AssetDatabase.ImportAsset(path);
                log.AppendLine($"✓ PassthroughClearAlpha.shader reverted to ColorMask A / alpha=0.");
            }
        }
    }

    // ─────────────────────────────────────────────────────────────────────────
    // Helpers
    // ─────────────────────────────────────────────────────────────────────────

    private static bool IsPackageInManifest(string packageId)
    {
        string manifest = Path.Combine(Application.dataPath, "..", "Packages", "manifest.json");
        return File.Exists(manifest) && File.ReadAllText(manifest).Contains($"\"{packageId}\"");
    }

    private static void AddPackagesToManifest(bool hasMeta, bool hasOculus)
    {
        string manifestPath = Path.Combine(Application.dataPath, "..", "Packages", "manifest.json");
        string content      = File.ReadAllText(manifestPath);

        // Insert into the "dependencies" block after the opening brace
        string insertion = "";
        if (!hasMeta)   insertion += $"    \"{MetaSDKPackage}\": \"{MetaSDKVersion}\",\n";
        if (!hasOculus) insertion += $"    \"{OculusXRPackage}\": \"{OculusVersion}\",\n";

        content = content.Replace("\"dependencies\": {", $"\"dependencies\": {{\n{insertion}");
        File.WriteAllText(manifestPath, content);
        Debug.Log($"[SetupOVRPassthrough] manifest.json updated:\n{insertion.Trim()}");
    }

    private static Type FindType(string typeName)
    {
        foreach (var asm in AppDomain.CurrentDomain.GetAssemblies())
        {
            Type t = asm.GetType(typeName);
            if (t != null) return t;
        }
        return null;
    }

    private static object FindFirstOfType(Type type)
    {
        // Works for MonoBehaviour via Unity's Object.FindFirstObjectByType(type)
        try
        {
            var method = typeof(UnityEngine.Object).GetMethod(
                "FindFirstObjectByType",
                BindingFlags.Public | BindingFlags.Static,
                null, new[] { typeof(Type) }, null);
            return method?.Invoke(null, new object[] { type });
        }
        catch { return null; }
    }

    /// <summary>
    /// Sets a serialized field on a Component using SerializedObject so the
    /// change is recorded in the undo stack and written to the asset properly.
    /// Falls back to direct reflection if the field name is not found.
    /// </summary>
    private static void SetSerializedField(Component target, string fieldName, object value)
    {
        if (target == null) return;
        try
        {
            var so   = new SerializedObject(target);
            var prop = so.FindProperty(fieldName);
            if (prop != null)
            {
                switch (value)
                {
                    case bool  b: prop.boolValue  = b; break;
                    case int   i: prop.intValue   = i; break;
                    case float f: prop.floatValue = f; break;
                    default: break;
                }
                so.ApplyModifiedProperties();
                return;
            }
        }
        catch { /* fall through to reflection */ }

        // Reflection fallback
        try
        {
            var field = target.GetType().GetField(fieldName,
                BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
            field?.SetValue(target, value);
        }
        catch { /* ignore */ }
    }
}

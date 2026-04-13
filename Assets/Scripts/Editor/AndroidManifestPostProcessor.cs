using System.IO;
using System.Xml;
using UnityEditor.Android;

/// <summary>
/// Fixes Unity 6 + MetaQuestFeature manifest generation issues:
///
///   1. MetaQuestFeature injects a nameless <activity> with the VR intent
///      filter. Gradle requires android:name as a merge key, causing build
///      failure. We remove it and adopt its children onto GameActivity.
///
///   2. UnityPlayerGameActivity is generated with android:enabled="false".
///      We force it to true.
///
///   3. The MAIN/LAUNCHER intent filter may be missing from GameActivity
///      when androidApplicationEntry=2. We add it if absent.
/// </summary>
public class AndroidManifestPostProcessor : IPostGenerateGradleAndroidProject
{
    private const string AndroidNS         = "http://schemas.android.com/apk/res/android";
    private const string GameActivityClass = "com.unity3d.player.UnityPlayerGameActivity";

    public int callbackOrder => 99;

    public void OnPostGenerateGradleAndroidProject(string gradlePath)
    {
        string manifestPath = Path.Combine(gradlePath, "src", "main", "AndroidManifest.xml");
        if (!File.Exists(manifestPath))
        {
            UnityEngine.Debug.LogWarning("[AndroidManifestPostProcessor] Manifest not found: " + manifestPath);
            return;
        }

        var doc = new XmlDocument();
        doc.Load(manifestPath);

        XmlNamespaceManager ns = new XmlNamespaceManager(doc.NameTable);
        ns.AddNamespace("android", AndroidNS);

        XmlElement application = doc.SelectSingleNode("/manifest/application", ns) as XmlElement;
        if (application == null)
        {
            UnityEngine.Debug.LogWarning("[AndroidManifestPostProcessor] No <application> element found.");
            return;
        }

        // ── 1. Find or create GameActivity ──────────────────────────────────────
        XmlElement gameActivity = doc.SelectSingleNode(
            $"/manifest/application/activity[@android:name='{GameActivityClass}']", ns) as XmlElement;

        if (gameActivity == null)
        {
            gameActivity = doc.CreateElement("activity");
            gameActivity.SetAttribute("name", AndroidNS, GameActivityClass);
            gameActivity.SetAttribute("exported", AndroidNS, "true");
            application.AppendChild(gameActivity);
            UnityEngine.Debug.Log("[AndroidManifestPostProcessor] Created GameActivity element.");
        }

        // ── 2. Force enabled=true ────────────────────────────────────────────────
        gameActivity.SetAttribute("enabled", AndroidNS, "true");

        // ── 3. Remove nameless activities, adopt their children ──────────────────
        var toRemove = new System.Collections.Generic.List<XmlElement>();
        foreach (XmlNode node in application.ChildNodes)
        {
            var act = node as XmlElement;
            if (act == null || act.LocalName != "activity") continue;
            if (act.GetAttribute("name", AndroidNS) != string.Empty) continue;
            toRemove.Add(act);
        }
        foreach (var act in toRemove)
        {
            foreach (XmlNode child in act.ChildNodes)
                gameActivity.AppendChild(child.CloneNode(deep: true));
            application.RemoveChild(act);
            UnityEngine.Debug.Log("[AndroidManifestPostProcessor] Removed nameless activity, adopted children.");
        }

        // ── 4. Ensure MAIN + LAUNCHER intent-filter exists ───────────────────────
        bool hasMain = false;
        foreach (XmlNode node in gameActivity.ChildNodes)
        {
            if (node.LocalName != "intent-filter") continue;
            foreach (XmlNode child in node.ChildNodes)
            {
                if (child.LocalName == "action" &&
                    (child as XmlElement)?.GetAttribute("name", AndroidNS) == "android.intent.action.MAIN")
                {
                    hasMain = true;
                    break;
                }
            }
            if (hasMain) break;
        }

        if (!hasMain)
        {
            XmlElement intentFilter = doc.CreateElement("intent-filter");

            XmlElement action = doc.CreateElement("action");
            action.SetAttribute("name", AndroidNS, "android.intent.action.MAIN");
            intentFilter.AppendChild(action);

            XmlElement catLauncher = doc.CreateElement("category");
            catLauncher.SetAttribute("name", AndroidNS, "android.intent.category.LAUNCHER");
            intentFilter.AppendChild(catLauncher);

            XmlElement catVR = doc.CreateElement("category");
            catVR.SetAttribute("name", AndroidNS, "com.oculus.intent.category.VR");
            intentFilter.AppendChild(catVR);

            gameActivity.InsertBefore(intentFilter, gameActivity.FirstChild);
            UnityEngine.Debug.Log("[AndroidManifestPostProcessor] Added MAIN/LAUNCHER intent-filter.");
        }

        // ── 5. Ensure focus-aware meta-data ──────────────────────────────────────
        bool hasFocusAware = false;
        foreach (XmlNode node in gameActivity.ChildNodes)
        {
            var el = node as XmlElement;
            if (el != null && el.LocalName == "meta-data" &&
                el.GetAttribute("name", AndroidNS) == "com.oculus.vr.focusaware")
            {
                hasFocusAware = true;
                break;
            }
        }
        if (!hasFocusAware)
        {
            XmlElement meta = doc.CreateElement("meta-data");
            meta.SetAttribute("name", AndroidNS, "com.oculus.vr.focusaware");
            meta.SetAttribute("value", AndroidNS, "true");
            gameActivity.AppendChild(meta);
        }

        doc.Save(manifestPath);
        UnityEngine.Debug.Log("[AndroidManifestPostProcessor] Manifest patched successfully.");
    }
}

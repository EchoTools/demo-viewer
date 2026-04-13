using System.IO;
using System.Xml;
using UnityEditor.Android;

/// <summary>
/// Fixes two Unity 6 + MetaQuestFeature manifest generation bugs:
///
///   1. MetaQuestFeature injects a nameless <activity> with the VR intent
///      filter into unityLibrary/src/main/AndroidManifest.xml. Gradle
///      requires activity elements to have android:name as a merge key, so
///      this causes "Missing 'name' key attribute" and a build failure.
///
///   2. UnityPlayerGameActivity is generated with android:enabled="false",
///      preventing Android from launching the app.
///
/// Fix: remove all nameless activities, merge their intent-filters and
/// meta-data onto UnityPlayerGameActivity, and set enabled="true".
/// </summary>
public class AndroidManifestPostProcessor : IPostGenerateGradleAndroidProject
{
    private const string AndroidNS        = "http://schemas.android.com/apk/res/android";
    private const string GameActivityClass = "com.unity3d.player.UnityPlayerGameActivity";

    public int callbackOrder => 99;

    public void OnPostGenerateGradleAndroidProject(string gradlePath)
    {
        // gradlePath = unityLibrary module root
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

        // Find GameActivity (may not exist yet in library manifest)
        XmlElement gameActivity = doc.SelectSingleNode(
            $"/manifest/application/activity[@android:name='{GameActivityClass}']", ns) as XmlElement;

        if (gameActivity == null)
        {
            gameActivity = doc.CreateElement("activity");
            gameActivity.SetAttribute("name", AndroidNS, GameActivityClass);
            gameActivity.SetAttribute("exported", AndroidNS, "true");
            application.AppendChild(gameActivity);
        }

        // Force enabled=true
        gameActivity.SetAttribute("enabled", AndroidNS, "true");

        // Move intent-filters and meta-data from nameless activities onto GameActivity,
        // then remove the nameless activities (they break Gradle merge).
        var allActivities = application.SelectNodes("activity", ns);
        if (allActivities != null)
        {
            foreach (XmlElement act in allActivities)
            {
                if (act.GetAttribute("name", AndroidNS) != string.Empty)
                    continue; // named — leave it alone

                // Adopt all child nodes into gameActivity
                foreach (XmlNode child in act.ChildNodes)
                    gameActivity.AppendChild(child.CloneNode(deep: true));

                application.RemoveChild(act);
            }
        }

        doc.Save(manifestPath);

        UnityEngine.Debug.Log(
            "[AndroidManifestPostProcessor] Fixed nameless activities and enabled GameActivity.");
    }
}

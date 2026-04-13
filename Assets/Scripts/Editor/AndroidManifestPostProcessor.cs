using System.IO;
using System.Xml;
using UnityEditor.Android;

/// <summary>
/// Post-processes the Android Gradle project to fix android:enabled=false
/// on UnityPlayerGameActivity. Unity 6 generates the GameActivity with
/// enabled=false in the library manifest; this patches it to true in the
/// launcher manifest so the app can be launched by Android and the Quest.
/// </summary>
public class AndroidManifestPostProcessor : IPostGenerateGradleAndroidProject
{
    private const string GameActivityClass = "com.unity3d.player.UnityPlayerGameActivity";

    public int callbackOrder => 99;

    public void OnPostGenerateGradleAndroidProject(string gradlePath)
    {
        // gradlePath points to the unityLibrary module.
        // The launcher manifest is one level up, in the launcher/ sibling folder.
        string launcherManifest = Path.Combine(
            gradlePath, "..", "launcher", "src", "main", "AndroidManifest.xml");

        launcherManifest = Path.GetFullPath(launcherManifest);

        if (!File.Exists(launcherManifest))
        {
            UnityEngine.Debug.LogWarning(
                "[AndroidManifestPostProcessor] Launcher manifest not found at: " + launcherManifest);
            return;
        }

        var doc = new XmlDocument();
        doc.Load(launcherManifest);

        XmlNamespaceManager ns = new XmlNamespaceManager(doc.NameTable);
        ns.AddNamespace("android", "http://schemas.android.com/apk/res/android");

        // Find or create the application element
        XmlElement application = doc.SelectSingleNode("/manifest/application", ns) as XmlElement;
        if (application == null)
        {
            XmlElement manifest = doc.SelectSingleNode("/manifest") as XmlElement;
            if (manifest == null)
            {
                UnityEngine.Debug.LogWarning("[AndroidManifestPostProcessor] No <manifest> root found.");
                return;
            }
            application = doc.CreateElement("application");
            manifest.AppendChild(application);
        }

        // Find or create the GameActivity element
        XmlElement activity = doc.SelectSingleNode(
            $"/manifest/application/activity[@android:name='{GameActivityClass}']", ns) as XmlElement;

        if (activity == null)
        {
            activity = doc.CreateElement("activity");
            activity.SetAttribute("name", "http://schemas.android.com/apk/res/android", GameActivityClass);
            application.AppendChild(activity);
        }

        // Force enabled=true so Android can launch the activity
        activity.SetAttribute("enabled", "http://schemas.android.com/apk/res/android", "true");

        doc.Save(launcherManifest);

        UnityEngine.Debug.Log(
            "[AndroidManifestPostProcessor] Set android:enabled=true on " + GameActivityClass);
    }
}

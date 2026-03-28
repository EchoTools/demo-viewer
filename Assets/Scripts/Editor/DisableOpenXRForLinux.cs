using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using System.Reflection;

public class DisableOpenXRForLinux : IPreprocessBuildWithReport
{
	// Higher priority than OpenXRProjectValidationBuildStep (which is 0 or higher)
	public int callbackOrder => int.MinValue;

	public void OnPreprocessBuild(BuildReport report)
	{
		if (report.summary.platform == BuildTarget.StandaloneLinux64)
		{
			Debug.Log("DisableOpenXRForLinux: Running with highest priority for Linux build");
			
			// Try to find and disable OpenXR validation
			try
			{
				DisableOpenXRValidation();
			}
			catch (System.Exception ex)
			{
				Debug.LogError($"DisableOpenXRForLinux: Exception: {ex}");
			}
		}
	}

	private void DisableOpenXRValidation()
	{
		try
		{
			// Get BuildTargetGroup
			var buildTargetGroup = EditorUserBuildSettings.activeBuildTarget;
			var btg = BuildPipeline.GetBuildTargetGroup(buildTargetGroup);

			// Use reflection to clear XR loaders
			var xrGeneralSettingsType = System.Type.GetType("UnityEngine.XR.Management.XRGeneralSettingsPerBuildTarget, Unity.XR.Management");
			if (xrGeneralSettingsType == null)
			{
				Debug.Log("DisableOpenXRForLinux: XR Management not found");
				return;
			}

			var getSettingsMethod = xrGeneralSettingsType.GetMethod("XRGeneralSettingsForBuildTarget", BindingFlags.Static | BindingFlags.Public);
			if (getSettingsMethod == null)
			{
				Debug.Log("DisableOpenXRForLinux: Cannot find XRGeneralSettingsForBuildTarget");
				return;
			}

			var settings = getSettingsMethod.Invoke(null, new object[] { btg });
			if (settings == null)
			{
				Debug.Log("DisableOpenXRForLinux: XRGeneralSettings is null");
				return;
			}

			var managerField = settings.GetType().GetProperty("Manager");
			if (managerField == null)
			{
				Debug.Log("DisableOpenXRForLinux: Manager property not found");
				return;
			}

			var manager = managerField.GetValue(settings);
			if (manager == null)
			{
				Debug.Log("DisableOpenXRForLinux: Manager is null");
				return;
			}

			var setLoadersMethod = manager.GetType().GetMethod("SetLoaders", BindingFlags.Public | BindingFlags.Instance);
			if (setLoadersMethod != null)
			{
				Debug.Log("DisableOpenXRForLinux: Clearing XR loaders");
				var emptyList = new System.Collections.Generic.List<UnityEngine.XR.Management.XRLoader>();
				setLoadersMethod.Invoke(manager, new object[] { emptyList });
				Debug.Log("DisableOpenXRForLinux: XR loaders cleared successfully");
			}
		}
		catch (System.Exception ex)
		{
			Debug.LogError($"DisableOpenXRForLinux: Failed to disable OpenXR: {ex.Message}\n{ex.StackTrace}");
		}
	}
}

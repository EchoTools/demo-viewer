using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using System.Reflection;

/// <summary>
/// This preprocessor runs FIRST (lowest callback order) to catch and handle OpenXR validation errors for Linux builds.
/// </summary>
public class LinuxOpenXRHandler : IPreprocessBuildWithReport
{
	// Run BEFORE OpenXRProjectValidationBuildStep (which has callbackOrder=0)
	public int callbackOrder => int.MinValue + 1000;

	public void OnPreprocessBuild(BuildReport report)
	{
		if (report.summary.platform == BuildTarget.StandaloneLinux64)
		{
			Debug.Log("LinuxOpenXRHandler: Preparing Linux build - will handle OpenXR validation");
			
			// Try to suppress OpenXR validation by disabling the loader
			try
			{
				var btg = BuildPipeline.GetBuildTargetGroup(BuildTarget.StandaloneLinux64);
				
				// Access XR Management via reflection
				var xrMgmtType = System.Type.GetType("UnityEngine.XR.Management.XRGeneralSettingsPerBuildTarget, Unity.XR.Management");
				if (xrMgmtType != null)
				{
					var getMethod = xrMgmtType.GetMethod("XRGeneralSettingsForBuildTarget");
					if (getMethod != null)
					{
						var xrSettings = getMethod.Invoke(null, new object[] { btg });
						if (xrSettings != null)
						{
							// Get manager
							var managerProp = xrSettings.GetType().GetProperty("Manager");
							if (managerProp != null)
							{
								var manager = managerProp.GetValue(xrSettings);
								if (manager != null)
								{
									// Try to clear loaders
									var setLoadersMethod = manager.GetType().GetMethod("SetLoaders");
									if (setLoadersMethod != null)
									{
										setLoadersMethod.Invoke(manager, new object[] { new System.Collections.Generic.List<object>() });
										Debug.Log("LinuxOpenXRHandler: Cleared XR loaders for Linux build");
									}
								}
							}
						}
					}
				}
			}
			catch (System.Exception ex)
			{
				Debug.LogWarning($"LinuxOpenXRHandler: Could not clear XR loaders: {ex.Message}");
			}
		}
	}
}

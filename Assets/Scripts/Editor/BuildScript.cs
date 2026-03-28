using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using System;
using System.IO;

public class BuildScript
{
	public static void PerformBuild()
	{
		// Get command line arguments
		string[] args = System.Environment.GetCommandLineArgs();
		string outputPath = ParseArgument(args, "--output=");
		string platformStr = ParseArgument(args, "--platform=");

		if (string.IsNullOrEmpty(outputPath))
		{
			EditorUserBuildSettings.SetPlatformSettings("Standalone", "CreateSolution", "False");
			Debug.LogError("BuildScript: No output path specified (use --output=)");
			EditorApplication.Exit(1);
			return;
		}

		if (string.IsNullOrEmpty(platformStr))
		{
			platformStr = "StandaloneLinux64";
		}

		BuildTarget buildTarget = GetBuildTarget(platformStr);

		Debug.Log($"BuildScript: Starting build for {buildTarget}");
		Debug.Log($"BuildScript: Output path: {outputPath}");

		// Get all scenes in the project
		string[] scenes = GetScenesInProject();
		if (scenes.Length == 0)
		{
			Debug.LogError("BuildScript: No scenes found in project");
			EditorApplication.Exit(1);
			return;
		}

		Debug.Log($"BuildScript: Found {scenes.Length} scene(s) to build");

		// Ensure output directory exists
		string outputDir = Path.GetDirectoryName(outputPath);
		if (!Directory.Exists(outputDir))
		{
			Directory.CreateDirectory(outputDir);
		}

		// Configure build
		BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions
		{
			scenes = scenes,
			locationPathName = outputPath,
			target = buildTarget,
			options = BuildOptions.None
		};

		// Add development options if needed
		// buildPlayerOptions.options |= BuildOptions.Development;
		// buildPlayerOptions.options |= BuildOptions.AllowDebugging;

		// Perform the build
		BuildReport report = null;
		
		try
		{
			report = BuildPipeline.BuildPlayer(buildPlayerOptions);
		}
		catch (BuildFailedException ex)
		{
			// For Linux builds, OpenXR might fail - check if this is the cause
			if (buildTarget == BuildTarget.StandaloneLinux64 && ex.Message.Contains("OpenXR"))
			{
				Debug.LogError($"BuildScript: OpenXR build error for Linux (expected - OpenXR is not supported on Linux): {ex.Message}");
				Debug.LogWarning("BuildScript: Retrying build without OpenXR...");
				
				// Try to disable OpenXR and retry
				try
				{
					DisableOpenXRLoader(buildTarget);
					Debug.Log("BuildScript: Attempting rebuild...");
					report = BuildPipeline.BuildPlayer(buildPlayerOptions);
				}
				catch (Exception innerEx)
				{
					Debug.LogError($"BuildScript: Rebuild also failed: {innerEx}");
					EditorApplication.Exit(1);
					return;
				}
			}
			else
			{
				Debug.LogError($"BuildScript: Build failed with BuildFailedException: {ex}");
				EditorApplication.Exit(1);
				return;
			}
		}
		catch (Exception ex)
		{
			Debug.LogError($"BuildScript: Build failed with exception: {ex}");
			EditorApplication.Exit(1);
			return;
		}

		if (report == null)
		{
			Debug.LogError("BuildScript: BuildReport is null");
			EditorApplication.Exit(1);
			return;
		}

		BuildSummary summary = report.summary;

		if (summary.result == BuildResult.Succeeded)
		{
			Debug.Log($"BuildScript: Build succeeded!");
			Debug.Log($"BuildScript: Output: {outputPath}");
			Debug.Log($"BuildScript: Build size: {summary.totalSize} bytes");
			EditorApplication.Exit(0);
		}
		else
		{
			Debug.LogError($"BuildScript: Build failed!");
			foreach (var step in report.steps)
			{
				foreach (var message in step.messages)
				{
					if (message.type == LogType.Error)
					{
						Debug.LogError(message.content);
					}
				}
			}
			EditorApplication.Exit(1);
		}
	}

	private static void DisableOpenXRLoader(BuildTarget buildTarget)
	{
		try
		{
			var btg = BuildPipeline.GetBuildTargetGroup(buildTarget);
			Debug.Log($"BuildScript: Disabling OpenXR for {btg}");
			
			// Try to find XR General Settings
			var xrGeneralSettingsType = System.Type.GetType("UnityEngine.XR.Management.XRGeneralSettingsPerBuildTarget, Unity.XR.Management");
			if (xrGeneralSettingsType == null)
			{
				Debug.LogWarning("BuildScript: Could not find XRGeneralSettingsPerBuildTarget");
				return;
			}

			var getSettingsMethod = xrGeneralSettingsType.GetMethod("XRGeneralSettingsForBuildTarget", 
				System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.Public);
			if (getSettingsMethod == null)
			{
				Debug.LogWarning("BuildScript: Could not find XRGeneralSettingsForBuildTarget method");
				return;
			}

			var settings = getSettingsMethod.Invoke(null, new object[] { btg });
			if (settings == null)
			{
				Debug.LogWarning("BuildScript: XRGeneralSettings is null");
				return;
			}

			var managerProperty = settings.GetType().GetProperty("Manager");
			if (managerProperty == null)
			{
				Debug.LogWarning("BuildScript: Could not find Manager property");
				return;
			}

			var manager = managerProperty.GetValue(settings);
			if (manager == null)
			{
				Debug.LogWarning("BuildScript: Manager is null");
				return;
			}

			// Clear the active loaders
			var setLoadersMethod = manager.GetType().GetMethod("SetLoaders", 
				System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);
			if (setLoadersMethod != null)
			{
				var emptyList = new System.Collections.Generic.List<object>();
				setLoadersMethod.Invoke(manager, new object[] { emptyList });
				Debug.Log("BuildScript: Cleared XR loaders successfully");
			}
			else
			{
				Debug.LogWarning("BuildScript: Could not find SetLoaders method");
			}
		}
		catch (Exception ex)
		{
			Debug.LogError($"BuildScript: Exception while disabling OpenXR: {ex}");
		}
	}

	private static string ParseArgument(string[] args, string argumentName)
	{
		foreach (var arg in args)
		{
			if (arg.StartsWith(argumentName))
			{
				return arg.Substring(argumentName.Length);
			}
		}
		return null;
	}

	private static BuildTarget GetBuildTarget(string platformName)
	{
		switch (platformName)
		{
			case "StandaloneWindows64":
				return BuildTarget.StandaloneWindows64;
			case "StandaloneOSX":
				return BuildTarget.StandaloneOSX;
			case "StandaloneLinux64":
				return BuildTarget.StandaloneLinux64;
			default:
				Debug.LogWarning($"Unknown platform: {platformName}, defaulting to StandaloneLinux64");
				return BuildTarget.StandaloneLinux64;
		}
	}

	private static string[] GetScenesInProject()
	{
		// Try to get scenes from EditorBuildSettings first
		var buildScenes = EditorBuildSettings.scenes;
		if (buildScenes != null && buildScenes.Length > 0)
		{
			var enabledScenes = new System.Collections.Generic.List<string>();
			foreach (var scene in buildScenes)
			{
				if (scene.enabled)
				{
					enabledScenes.Add(scene.path);
				}
			}

			if (enabledScenes.Count > 0)
			{
				Debug.Log($"BuildScript: Found {enabledScenes.Count} enabled scenes in EditorBuildSettings");
				return enabledScenes.ToArray();
			}
		}

		Debug.LogWarning("BuildScript: No enabled scenes found in EditorBuildSettings. Falling back to all scenes in project.");

		// Find all scenes in the project
		string[] sceneGUIDs = AssetDatabase.FindAssets("t:Scene");
		string[] scenes = new string[sceneGUIDs.Length];

		for (int i = 0; i < sceneGUIDs.Length; i++)
		{
			scenes[i] = AssetDatabase.GUIDToAssetPath(sceneGUIDs[i]);
		}

		// If no scenes found, try to use the first available scene
		if (scenes.Length == 0)
		{
			Debug.LogWarning("BuildScript: No scenes found, searching for MainScene...");
			if (File.Exists("Assets/Scenes/MainScene.unity"))
			{
				return new[] { "Assets/Scenes/MainScene.unity" };
			}
			// Try to find any .unity file
			string[] unityFiles = Directory.GetFiles("Assets", "*.unity", SearchOption.AllDirectories);
			if (unityFiles.Length > 0)
			{
				Debug.Log($"BuildScript: Found scene: {unityFiles[0]}");
				return new[] { unityFiles[0] };
			}
		}

		return scenes;
	}
}

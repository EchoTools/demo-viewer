using System;
using System.IO;
using UnityEngine;

/// <summary>
/// Captures Unity Debug.Log output and writes it to a log file
/// </summary>
public class DebugLogger : MonoBehaviour
{
	private static StreamWriter logWriter;
	private static string logFilePath;
	private static bool isInitialized = false;

	private void Awake()
	{
		if (!isInitialized)
		{
			InitializeLogFile();
			isInitialized = true;
		}
	}

	private void InitializeLogFile()
	{
		try
		{
			// Create log file in the same directory as the executable
			string logDirectory = Application.dataPath;
			#if !UNITY_EDITOR
			logDirectory = Path.GetDirectoryName(Application.dataPath);
			#endif
			
			string timestamp = DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss");
			logFilePath = Path.Combine(logDirectory, $"DemoViewer_{timestamp}.log");

			logWriter = new StreamWriter(logFilePath, false);
			logWriter.AutoFlush = true;

			// Subscribe to Unity's log messages
			Application.logMessageReceived += HandleLog;

			LogToFile($"[DebugLogger] Log file created at: {logFilePath}");
			Debug.Log($"[DebugLogger] Log file created at: {logFilePath}");
		}
		catch (Exception ex)
		{
			Debug.LogError($"[DebugLogger] Failed to create log file: {ex.Message}");
		}
	}

	private void HandleLog(string logString, string stackTrace, LogType type)
	{
		LogToFile($"[{DateTime.Now:HH:mm:ss.fff}] [{type}] {logString}");
		
		// Include stack trace for errors and exceptions
		if (type == LogType.Error || type == LogType.Exception)
		{
			if (!string.IsNullOrEmpty(stackTrace))
			{
				LogToFile($"Stack trace:\n{stackTrace}");
			}
		}
	}

	private static void LogToFile(string message)
	{
		try
		{
			logWriter?.WriteLine(message);
			
			// Also write to console for builds with -logFile
			Console.WriteLine(message);
		}
		catch (Exception ex)
		{
			// Can't log this error normally, so just write to console
			Console.WriteLine($"Failed to write to log file: {ex.Message}");
		}
	}

	private void OnApplicationQuit()
	{
		if (logWriter != null)
		{
			LogToFile("[DebugLogger] Application closing, finalizing log file...");
			Application.logMessageReceived -= HandleLog;
			logWriter.Close();
			logWriter = null;
		}
	}

	private void OnDestroy()
	{
		if (logWriter != null)
		{
			Application.logMessageReceived -= HandleLog;
			logWriter.Close();
			logWriter = null;
		}
	}
}

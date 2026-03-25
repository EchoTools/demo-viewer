using System;
using System.Runtime.InteropServices;
using UnityEngine;

/// <summary>
/// SignalHandler manages OS-level signals (SIGTERM, SIGINT, CTRL+C, etc.) across all platforms.
/// Allows the application to respond gracefully to system shutdown requests.
/// Linux: Uses native library for POSIX signals (SIGTERM, SIGINT, SIGHUP)
/// Windows: Uses Console.CancelKeyPress for CTRL+C and CTRL+Break
/// </summary>
public class SignalHandler : MonoBehaviour
{
	#region Native Imports

#if UNITY_STANDALONE_LINUX || UNITY_EDITOR_LINUX
	[DllImport("SignalHandler")]
	private static extern int InitializeSignalHandling();

	[DllImport("SignalHandler")]
	private static extern void RegisterSignalCallback(IntPtr callback);

	[DllImport("SignalHandler")]
	private static extern IntPtr GetSignalName(int sig);
#endif

	#endregion

	#region Delegates & Callbacks

	// Delegate for the native callback
	private delegate void SignalCallbackDelegate(int signalNumber);

	// Keep a reference to prevent garbage collection
	private static SignalCallbackDelegate s_callbackDelegate = null;

	#endregion

	#region Singleton

	private static SignalHandler s_instance;

	private void Awake()
	{
		if (s_instance != null && s_instance != this)
		{
			Destroy(gameObject);
			return;
		}

		s_instance = this;
		DontDestroyOnLoad(gameObject);
	}

	#endregion

	#region Public Methods

	/// <summary>
	/// Initialize signal handling for all platforms.
	/// Should be called early in the application startup.
	/// </summary>
	public static void Initialize()
	{
#if UNITY_STANDALONE_LINUX || UNITY_EDITOR_LINUX
		InitializeLinuxSignalHandling();
#elif UNITY_STANDALONE_WIN || UNITY_EDITOR_WIN
		InitializeWindowsSignalHandling();
#else
		Debug.Log("[SignalHandler] Signal handling not implemented for this platform.");
#endif
	}

	/// <summary>
	/// Initialize Linux/Unix signal handling using native library.
	/// </summary>
	private static void InitializeLinuxSignalHandling()
	{
		try
		{
			// Create the callback delegate
			s_callbackDelegate = new SignalCallbackDelegate(OnSignalReceived);

			// Register the callback with native code
			IntPtr callbackPtr = Marshal.GetFunctionPointerForDelegate(s_callbackDelegate);
			RegisterSignalCallback(callbackPtr);

			// Initialize the signal handlers
			int result = InitializeSignalHandling();

			if (result == 0)
			{
				Debug.Log("[SignalHandler] Linux signal handling initialized successfully (SIGTERM, SIGINT, SIGHUP).");
			}
			else
			{
				Debug.LogWarning("[SignalHandler] Failed to initialize Linux signal handling.");
			}
		}
		catch (Exception ex)
		{
			Debug.LogError($"[SignalHandler] Exception during Linux initialization: {ex.Message}");
		}
	}

	/// <summary>
	/// Initialize Windows signal handling using Console.CancelKeyPress.
	/// </summary>
	private static void InitializeWindowsSignalHandling()
	{
		try
		{
			Console.CancelKeyPress += OnConsoleCancelKeyPress;
			Debug.Log("[SignalHandler] Windows signal handling initialized successfully (CTRL+C).");
		}
		catch (Exception ex)
		{
			Debug.LogError($"[SignalHandler] Exception during Windows initialization: {ex.Message}");
		}
	}

	#endregion

	#region Windows Console Handler

	/// <summary>
	/// Handles CTRL+C and CTRL+Break on Windows.
	/// </summary>
	private static void OnConsoleCancelKeyPress(object sender, ConsoleCancelEventArgs e)
	{
		string signalName = e.SpecialKey == ConsoleSpecialKey.ControlC ? "CTRL+C" : "CTRL+Break";
		Debug.Log($"[SignalHandler] Received signal: {signalName}");

		// Prevent immediate termination
		e.Cancel = true;

		// Trigger application quit through GameManager
		if (GameManager.instance != null)
		{
			GameManager.instance.RequestGracefulShutdown(signalName);
		}
		else
		{
			// Fallback: quit directly if GameManager not available
			Application.Quit(0);
		}
	}

	#endregion

	#region Native Callbacks

	/// <summary>
	/// Called by native code when a signal is received.
	/// Forwards the signal to the GameManager for graceful shutdown.
	/// </summary>
	private static void OnSignalReceived(int signalNumber)
	{
		string signalName = "UNKNOWN";

		switch (signalNumber)
		{
			case 15: signalName = "SIGTERM"; break;
			case 2:  signalName = "SIGINT"; break;
			case 1:  signalName = "SIGHUP"; break;
			case 3:  signalName = "SIGQUIT"; break;
		}

		Debug.Log($"[SignalHandler] Received signal: {signalName} ({signalNumber})");

		// Trigger application quit through GameManager
		if (GameManager.instance != null)
		{
			GameManager.instance.RequestGracefulShutdown(signalName);
		}
		else
		{
			// Fallback: quit directly if GameManager not available
			Application.Quit(0);
		}
	}

	#endregion
}

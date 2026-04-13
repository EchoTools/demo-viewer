/**
 * Signal Handler Plugin for Unity
 * Handles OS signals (SIGTERM, SIGINT, etc.) and forwards them to C# code
 * 
 * This plugin allows Unity to properly respond to graceful shutdown signals
 * on Linux/Unix systems.
 */

#define _POSIX_C_SOURCE 200112L
#define _GNU_SOURCE

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Callback function type that can be set from C# */
typedef void (*SignalCallback)(int signal_number);

/* Static callback - will be set by C# code */
static SignalCallback g_signal_callback = NULL;

/* Signal handler that forwards to C# callback */
static void signal_handler(int sig)
{
	if (g_signal_callback != NULL)
	{
		g_signal_callback(sig);
	}
	else
	{
		/* If no callback registered, exit cleanly */
		exit(128 + sig);
	}
}

/**
 * RegisterSignalCallback: Set the C# callback function for signals
 * @param callback: Function pointer to call when a signal is received
 */
void RegisterSignalCallback(SignalCallback callback)
{
	g_signal_callback = callback;
}

/**
 * InitializeSignalHandling: Set up signal handlers for graceful shutdown
 * Returns 0 on success, -1 on error
 */
int InitializeSignalHandling(void)
{
	struct sigaction sa;
	int ret = 0;

	/* Set up signal action structure */
	memset(&sa, 0, sizeof(struct sigaction));
	sa.sa_handler = signal_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_RESTART;

	/* Register handlers for common termination signals */
	if (sigaction(SIGTERM, &sa, NULL) == -1)
	{
		fprintf(stderr, "Failed to register SIGTERM handler\n");
		ret = -1;
	}

	if (sigaction(SIGINT, &sa, NULL) == -1)
	{
		fprintf(stderr, "Failed to register SIGINT handler\n");
		ret = -1;
	}

	/* Also handle SIGHUP for terminal disconnection */
	if (sigaction(SIGHUP, &sa, NULL) == -1)
	{
		fprintf(stderr, "Failed to register SIGHUP handler\n");
		ret = -1;
	}

	return ret;
}

/**
 * GetSignalName: Return human-readable signal name
 */
const char* GetSignalName(int sig)
{
	switch (sig)
	{
		case SIGTERM: return "SIGTERM";
		case SIGINT:  return "SIGINT";
		case SIGHUP:  return "SIGHUP";
		case SIGQUIT: return "SIGQUIT";
		default:      return "UNKNOWN";
	}
}

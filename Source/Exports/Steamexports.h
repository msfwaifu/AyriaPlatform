/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-20
    Notes:
        Forward declaration of the steamworks exports.
*/

#pragma once
#include <stdint.h> 

extern "C"
{
    // Interface access.
    EXPORT_ATTR void *SteamAppList();
    EXPORT_ATTR void *SteamApps();
    EXPORT_ATTR void *SteamClient();
    EXPORT_ATTR void *SteamController();
    EXPORT_ATTR void *SteamFriends();
    EXPORT_ATTR void *SteamGameServer();
    EXPORT_ATTR void *SteamGameServerHTTP();
    EXPORT_ATTR void *SteamGameServerInventory();
    EXPORT_ATTR void *SteamGameServerNetworking();
    EXPORT_ATTR void *SteamGameServerStats();
    EXPORT_ATTR void *SteamGameServerUGC();
    EXPORT_ATTR void *SteamGameServerUtils();
    EXPORT_ATTR void *SteamHTMLSurface();
    EXPORT_ATTR void *SteamHTTP();
    EXPORT_ATTR void *SteamInventory();
    EXPORT_ATTR void *SteamMatchmaking();
    EXPORT_ATTR void *SteamMatchmakingServers();
    EXPORT_ATTR void *SteamMusic();
    EXPORT_ATTR void *SteamMusicRemote();
    EXPORT_ATTR void *SteamNetworking();
    EXPORT_ATTR void *SteamRemoteStorage();
    EXPORT_ATTR void *SteamScreenshots();
    EXPORT_ATTR void *SteamUnifiedMessages();
    EXPORT_ATTR void *SteamUGC();
    EXPORT_ATTR void *SteamUser();
    EXPORT_ATTR void *SteamUserStats();
    EXPORT_ATTR void *SteamUtils();
    EXPORT_ATTR void *SteamVideo();
    EXPORT_ATTR void *SteamMasterServerUpdater();

    // Initialization and shutdown.
    EXPORT_ATTR bool SteamAPI_Init();
    EXPORT_ATTR bool SteamAPI_InitSafe();
    EXPORT_ATTR void SteamAPI_Shutdown();
    EXPORT_ATTR bool SteamAPI_IsSteamRunning();
    EXPORT_ATTR const char *SteamAPI_GetSteamInstallPath();
    EXPORT_ATTR bool SteamAPI_RestartAppIfNecessary(uint32_t unOwnAppID);

    // Callback management.
    EXPORT_ATTR void SteamAPI_RunCallbacks();
    EXPORT_ATTR void SteamAPI_RegisterCallback(void *pCallback, int iCallback);
    EXPORT_ATTR void SteamAPI_UnregisterCallback(void *pCallback, int iCallback);
    EXPORT_ATTR void SteamAPI_RegisterCallResult(void *pCallback, uint64_t hAPICall);
    EXPORT_ATTR void SteamAPI_UnregisterCallResult(void *pCallback, uint64_t hAPICall);

    // Dedicated server mode.    
    EXPORT_ATTR bool SteamGameServer_BSecure();
    EXPORT_ATTR void SteamGameServer_Shutdown();
    EXPORT_ATTR void SteamGameServer_RunCallbacks();
    EXPORT_ATTR uint64_t SteamGameServer_GetSteamID();
    EXPORT_ATTR bool SteamGameServer_Init(uint32_t unIP, uint16_t usSteamPort, uint16_t usGamePort, uint16_t usQueryPort, uint32_t eServerMode, const char *pchVersionString);
    EXPORT_ATTR bool SteamGameServer_InitSafe(uint32_t unIP, uint16_t usSteamPort, uint16_t usGamePort, uint16_t usQueryPort, uint32_t eServerMode, const char *pchVersionString);
}

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
    void *SteamAppList();
    void *SteamApps();
    void *SteamClient();
    void *SteamController();
    void *SteamFriends();
    void *SteamGameServer();
    void *SteamGameServerHTTP();
    void *SteamGameServerInventory();
    void *SteamGameServerNetworking();
    void *SteamGameServerStats();
    void *SteamGameServerUGC();
    void *SteamGameServerUtils();
    void *SteamHTMLSurface();
    void *SteamHTTP();
    void *SteamInventory();
    void *SteamMatchmaking();
    void *SteamMatchmakingServers();
    void *SteamMusic();
    void *SteamMusicRemote();
    void *SteamNetworking();
    void *SteamRemoteStorage();
    void *SteamScreenshots();
    void *SteamUnifiedMessages();
    void *SteamUGC();
    void *SteamUser();
    void *SteamUserStats();
    void *SteamUtils();
    void *SteamVideo();
    void *SteamMasterServerUpdater();

    // Initialization and shutdown.
    bool SteamAPI_Init();
    bool SteamAPI_InitSafe();
    void SteamAPI_Shutdown();
    bool SteamAPI_IsSteamRunning();
    const char *SteamAPI_GetSteamInstallPath();
    bool SteamAPI_RestartAppIfNecessary(uint32_t unOwnAppID);

    // Callback management.
    void SteamAPI_RunCallbacks();
    void SteamAPI_RegisterCallback(void *pCallback, int iCallback);
    void SteamAPI_UnregisterCallback(void *pCallback, int iCallback);
    void SteamAPI_RegisterCallResult(void *pCallback, uint64_t hAPICall);
    void SteamAPI_UnregisterCallResult(void *pCallback, uint64_t hAPICall);

    // Dedicated server mode.    
    bool SteamGameServer_BSecure();
    void SteamGameServer_Shutdown();
    void SteamGameServer_RunCallbacks();
    uint64_t SteamGameServer_GetSteamID();
    bool SteamGameServer_Init(uint32_t unIP, uint16_t usSteamPort, uint16_t usGamePort, uint16_t usQueryPort, uint32_t eServerMode, const char *pchVersionString);
    bool SteamGameServer_InitSafe(uint32_t unIP, uint16_t usSteamPort, uint16_t usGamePort, uint16_t usQueryPort, uint32_t eServerMode, const char *pchVersionString);
}

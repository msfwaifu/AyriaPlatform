/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-21
    Notes:
        Implementation of the export API.
*/

#include "Ayriaexports.h"
#include "Steamexports.h"
#include <cstdarg>

constexpr const char *Steamdll = sizeof(size_t) == sizeof(uint64_t) ? "steam_api64.dll" : "steam_api.dll";

extern "C"
{
    // Ayrias extension exports as per the 2016 standard.
    EXPORT_ATTR void __cdecl onExtensionUnloading(void)
    {
    }
    EXPORT_ATTR void __cdecl onInitializationStart(void)
    {
        #define PATCH_STEAM_IAT(Function)                                           \
        size_t Address ##Function = GetIATFunction(Steamdll, #Function);            \
        if(Address ##Function) *(size_t *)Address ##Function = size_t(Function);    \

        // Steamworks exports.
        {
            PATCH_STEAM_IAT(SteamAppList);
            PATCH_STEAM_IAT(SteamApps);
            PATCH_STEAM_IAT(SteamClient);
            PATCH_STEAM_IAT(SteamController);
            PATCH_STEAM_IAT(SteamFriends);
            PATCH_STEAM_IAT(SteamGameServer);
            PATCH_STEAM_IAT(SteamGameServerHTTP);
            PATCH_STEAM_IAT(SteamGameServerInventory);
            PATCH_STEAM_IAT(SteamGameServerNetworking);
            PATCH_STEAM_IAT(SteamGameServerStats);
            PATCH_STEAM_IAT(SteamGameServerUGC);
            PATCH_STEAM_IAT(SteamGameServerUtils);
            PATCH_STEAM_IAT(SteamHTMLSurface);
            PATCH_STEAM_IAT(SteamHTTP);
            PATCH_STEAM_IAT(SteamInventory);
            PATCH_STEAM_IAT(SteamMatchmaking);
            PATCH_STEAM_IAT(SteamMatchmakingServers);
            PATCH_STEAM_IAT(SteamMusic);
            PATCH_STEAM_IAT(SteamMusicRemote);
            PATCH_STEAM_IAT(SteamNetworking);
            PATCH_STEAM_IAT(SteamRemoteStorage);
            PATCH_STEAM_IAT(SteamScreenshots);
            PATCH_STEAM_IAT(SteamUnifiedMessages);
            PATCH_STEAM_IAT(SteamUGC);
            PATCH_STEAM_IAT(SteamUser);
            PATCH_STEAM_IAT(SteamUserStats);
            PATCH_STEAM_IAT(SteamUtils);
            PATCH_STEAM_IAT(SteamVideo);
            PATCH_STEAM_IAT(SteamMasterServerUpdater);

            PATCH_STEAM_IAT(SteamAPI_Init);
            PATCH_STEAM_IAT(SteamAPI_InitSafe);
            PATCH_STEAM_IAT(SteamAPI_Shutdown);
            PATCH_STEAM_IAT(SteamAPI_IsSteamRunning);
            PATCH_STEAM_IAT(SteamAPI_GetSteamInstallPath);
            PATCH_STEAM_IAT(SteamAPI_RestartAppIfNecessary); 

            PATCH_STEAM_IAT(SteamAPI_RunCallbacks);
            PATCH_STEAM_IAT(SteamAPI_RegisterCallback);
            PATCH_STEAM_IAT(SteamAPI_UnregisterCallback);
            PATCH_STEAM_IAT(SteamAPI_RegisterCallResult);
            PATCH_STEAM_IAT(SteamAPI_UnregisterCallResult);

            PATCH_STEAM_IAT(SteamGameServer_BSecure);
            PATCH_STEAM_IAT(SteamGameServer_Shutdown);
            PATCH_STEAM_IAT(SteamGameServer_RunCallbacks);
            PATCH_STEAM_IAT(SteamGameServer_GetSteamID);
            PATCH_STEAM_IAT(SteamGameServer_Init);
            PATCH_STEAM_IAT(SteamGameServer_InitSafe);
        }
    }
    EXPORT_ATTR void __cdecl onInitializationComplete(void)
    {
    }
    EXPORT_ATTR void __cdecl onMessage(uint32_t Message, ...)
    {
        std::va_list Variadic;
        va_start(Variadic, Message);

        // Messages are a 32bit FNV1a hash of a string.
        switch (Message)
        {

        case FNV1a_Compiletime_32("DefaultCase"):
        default:
            break;
        }

        va_end(Variadic);
    }
}

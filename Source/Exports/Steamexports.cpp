/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-20
    Notes:
        A minimal implementation of steamworks exports.
*/

#include <Configuration\All.h>
#include <Steam\Steamcallback.h>
#include <Steam\Interfacemanager.h>

extern "C"
{
    // Interface access.
    EXPORT_ATTR void *SteamAppList()
    {
        return Interfacemanager::Fetchinterface(STEAM_APPLIST);
    }
    EXPORT_ATTR void *SteamApps()
    {
        return Interfacemanager::Fetchinterface(STEAM_APPS);
    }
    EXPORT_ATTR void *SteamClient()
    {
        return Interfacemanager::Fetchinterface(STEAM_CLIENT);
    }
    EXPORT_ATTR void *SteamController()
    {
        return Interfacemanager::Fetchinterface(STEAM_CONTROLLER);
    }
    EXPORT_ATTR void *SteamFriends()
    {
        return Interfacemanager::Fetchinterface(STEAM_FRIENDS);
    }
    EXPORT_ATTR void *SteamGameServer()
    {
        return Interfacemanager::Fetchinterface(STEAM_GAMESERVER);
    }
    EXPORT_ATTR void *SteamGameServerHTTP()
    {
        return Interfacemanager::Fetchinterface(STEAM_HTTP);
    }
    EXPORT_ATTR void *SteamGameServerInventory()
    {
        return Interfacemanager::Fetchinterface(STEAM_INVENTORY);
    }
    EXPORT_ATTR void *SteamGameServerNetworking()
    {
        return Interfacemanager::Fetchinterface(STEAM_NETWORKING);
    }
    EXPORT_ATTR void *SteamGameServerStats()
    {
        return Interfacemanager::Fetchinterface(STEAM_GAMESERVERSTATS);
    }
    EXPORT_ATTR void *SteamGameServerUGC()
    {
        return Interfacemanager::Fetchinterface(STEAM_UGC);
    }
    EXPORT_ATTR void *SteamGameServerUtils()
    {
        return Interfacemanager::Fetchinterface(STEAM_UTILS);
    }
    EXPORT_ATTR void *SteamHTMLSurface()
    {
        return Interfacemanager::Fetchinterface(STEAM_HTMLSURFACE);
    }
    EXPORT_ATTR void *SteamHTTP()
    {
        return Interfacemanager::Fetchinterface(STEAM_HTTP);
    }
    EXPORT_ATTR void *SteamInventory()
    {
        return Interfacemanager::Fetchinterface(STEAM_INVENTORY);
    }
    EXPORT_ATTR void *SteamMatchmaking()
    {
        return Interfacemanager::Fetchinterface(STEAM_MATCHMAKING);
    }
    EXPORT_ATTR void *SteamMatchmakingServers()
    {
        return Interfacemanager::Fetchinterface(STEAM_MATCHMAKINGSERVERS);
    }
    EXPORT_ATTR void *SteamMusic()
    {
        return Interfacemanager::Fetchinterface(STEAM_MUSIC);
    }
    EXPORT_ATTR void *SteamMusicRemote()
    {
        return Interfacemanager::Fetchinterface(STEAM_MUSICREMOTE);
    }
    EXPORT_ATTR void *SteamNetworking()
    {
        return Interfacemanager::Fetchinterface(STEAM_NETWORKING);
    }
    EXPORT_ATTR void *SteamRemoteStorage()
    {
        return Interfacemanager::Fetchinterface(STEAM_REMOTESTORAGE);
    }
    EXPORT_ATTR void *SteamScreenshots()
    {
        return Interfacemanager::Fetchinterface(STEAM_SCREENSHOTS);
    }
    EXPORT_ATTR void *SteamUnifiedMessages()
    {
        return Interfacemanager::Fetchinterface(STEAM_UNIFIEDMESSAGES);
    }
    EXPORT_ATTR void *SteamUGC()
    {
        return Interfacemanager::Fetchinterface(STEAM_UGC);
    }
    EXPORT_ATTR void *SteamUser()
    {
        return Interfacemanager::Fetchinterface(STEAM_USER);
    }
    EXPORT_ATTR void *SteamUserStats()
    {
        return Interfacemanager::Fetchinterface(STEAM_USERSTATS);
    }
    EXPORT_ATTR void *SteamUtils()
    {
        return Interfacemanager::Fetchinterface(STEAM_UTILS);
    }
    EXPORT_ATTR void *SteamVideo()
    {
        return Interfacemanager::Fetchinterface(STEAM_VIDEO);
    }
    EXPORT_ATTR void *SteamMasterServerUpdater()
    {
        return Interfacemanager::Fetchinterface(STEAM_MASTERSERVERUPDATER);
    }

    // Initialization and shutdown.
    EXPORT_ATTR bool SteamAPI_Init()
    {
        PrintFunction(); 

        // Check if we are forcing offline mode.
        for (int i = 0; i < __argc && !Steam_Offline; ++i)
            Steam_Offline = nullptr != std::strstr(__argv[i], "-AYRIA_OFFLINE");

        // Read the application ID from a file if the host
        // is too old to use RestartApp or a dev build.
        if (Steam_ApplicationID == 0)
        {
            FILE *Filehandle;

            // Open the configuration file.
            Filehandle = fopen("steam_appid.txt", "r");
            if(!Filehandle) Filehandle = fopen("ayria_appid.txt", "r");
            if(!Filehandle)
            {
                DebugPrint("No appconfig file found. Exiting.");
                exit(0xDEAD);
            }

            // Read the uint32.
            fscanf_s(Filehandle, "%d", &Steam_ApplicationID);
            fclose(Filehandle);
        }

        // If no application ID is provided, we can't do much.
        if (Steam_ApplicationID == 0)
        {
            DebugPrint("No application ID has been provided. Exiting.");
            exit(0xDEAD);
        }

        // Initialize the interface manager with the ID.
        Interfacemanager::Initialize(Steam_ApplicationID);
        return true;
    }
    EXPORT_ATTR bool SteamAPI_InitSafe()
    {
        return SteamAPI_Init();
    }
    EXPORT_ATTR void SteamAPI_Shutdown()
    {
    }
    EXPORT_ATTR bool SteamAPI_IsSteamRunning()
    {
        return true;
    }
    EXPORT_ATTR const char *SteamAPI_GetSteamInstallPath()
    {
        /* 
            TODO(Convery):
            Implement a portable way to get the install path.
        */

        PrintFunction();
        return "";
    }
    EXPORT_ATTR bool SteamAPI_RestartAppIfNecessary(uint32_t unOwnAppID)
    {
        // The host application reports a ID on startup.
        Steam_ApplicationID = unOwnAppID; 

        // Usage information.
        InfoPrint(va("Starting steamapp %i", Steam_ApplicationID));
        return false;
    } 

    // Callback management.
    EXPORT_ATTR void SteamAPI_RunCallbacks()
    {
        SteamCallback::RunCallbacks();
    }
    EXPORT_ATTR void SteamAPI_RegisterCallback(void *pCallback, int iCallback)
    {
        SteamCallback::RegisterCallback(static_cast<CallbackBase *>(pCallback), iCallback);
    }
    EXPORT_ATTR void SteamAPI_UnregisterCallback(void *pCallback, int iCallback)
    {
        SteamCallback::UnregisterCallback(static_cast<CallbackBase *>(pCallback), iCallback);
    }
    EXPORT_ATTR void SteamAPI_RegisterCallResult(void *pCallback, uint64_t hAPICall)
    {
        SteamCallback::RegisterCallResult(hAPICall, static_cast<CallbackBase *>(pCallback));
    }
    EXPORT_ATTR void SteamAPI_UnregisterCallResult(void *pCallback, uint64_t hAPICall)
    {
        SteamCallback::UnregisterCallResult(hAPICall, static_cast<CallbackBase *>(pCallback));
    }

    // Dedicated server mode.    
    EXPORT_ATTR bool SteamGameServer_BSecure()
    {
        return true;
    }
    EXPORT_ATTR void SteamGameServer_Shutdown()
    {
        Steam_Server = false;
    }
    EXPORT_ATTR void SteamGameServer_RunCallbacks()
    {
        SteamCallback::RunCallbacks();
    }
    EXPORT_ATTR uint64_t SteamGameServer_GetSteamID()
    {
        return Steam_UserID;
    }
    EXPORT_ATTR bool SteamGameServer_Init(uint32_t unIP, uint16_t usSteamPort, uint16_t usGamePort, uint16_t usQueryPort, uint32_t eServerMode, const char *pchVersionString)
    {
        Steam_Server = true;

        // Debug information about the servermode.
        InfoPrint("Server startup:");
        InfoPrint(va_small("IP: %u.%u.%u.%u", ((uint8_t *)&unIP)[0], ((uint8_t *)&unIP)[1], ((uint8_t *)&unIP)[2], ((uint8_t *)&unIP)[3]));
        InfoPrint(va_small("Query port: %u", usQueryPort));
        InfoPrint(va_small("Game port: %u", usGamePort));

        return true;
    }
    EXPORT_ATTR bool SteamGameServer_InitSafe(uint32_t unIP, uint16_t usSteamPort, uint16_t usGamePort, uint16_t usQueryPort, uint32_t eServerMode, const char *pchVersionString)
    {
        return SteamGameServer_Init(unIP, usSteamPort, usGamePort, usQueryPort, eServerMode, pchVersionString);
    }
}

/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-20
    Notes:
        Creates interfaces when needed.
        Similar to steamclient.dll's factory.
*/

#include <unordered_map>
#include "Interfaces\All.h"
#include "Interfacemanager.h"
#include <Configuration\All.h>
#include <Exports\Steamexports.h>

// The interfaces we support.
std::vector<std::pair<eInterfaceType /* Type */, void * /* Interface */>> Interfacestore;
std::unordered_map<eInterfaceType /* Type */, void * /* Interface */> Interfacemap;
std::unordered_map<std::string /* Name */, void * /* Interface */> Interfacenames;

// Create all interfaces declared in Interfaces\All.h.
void Createmaps()
{
    #define CreateInterface(Interface, Type)    \
    auto Temp_ ##Interface = new Interface();   \
    Interfacestore.push_back({ Type, Temp_ ##Interface });  \
    Interfacenames[#Interface] = Temp_ ##Interface;

    CreateInterface(SteamUtilities001, STEAM_UTILS);
    CreateInterface(SteamUtilities002, STEAM_UTILS);
    CreateInterface(SteamUtilities003, STEAM_UTILS);
    CreateInterface(SteamUtilities004, STEAM_UTILS);
    CreateInterface(SteamUtilities005, STEAM_UTILS);
    CreateInterface(SteamUtilities006, STEAM_UTILS);
    CreateInterface(SteamUtilities007, STEAM_UTILS);

    CreateInterface(SteamUserstats001, STEAM_USERSTATS);
    CreateInterface(SteamUserstats002, STEAM_USERSTATS);
    CreateInterface(SteamUserstats003, STEAM_USERSTATS);
    CreateInterface(SteamUserstats004, STEAM_USERSTATS);
    CreateInterface(SteamUserstats005, STEAM_USERSTATS);
    CreateInterface(SteamUserstats006, STEAM_USERSTATS);
    CreateInterface(SteamUserstats007, STEAM_USERSTATS);
    CreateInterface(SteamUserstats008, STEAM_USERSTATS);
    CreateInterface(SteamUserstats009, STEAM_USERSTATS);
    CreateInterface(SteamUserstats010, STEAM_USERSTATS);
    CreateInterface(SteamUserstats011, STEAM_USERSTATS);

    CreateInterface(SteamUser001, STEAM_USER);
    CreateInterface(SteamUser002, STEAM_USER);
    CreateInterface(SteamUser003, STEAM_USER);
    CreateInterface(SteamUser004, STEAM_USER);
    CreateInterface(SteamUser005, STEAM_USER);
    CreateInterface(SteamUser006, STEAM_USER);
    CreateInterface(SteamUser007, STEAM_USER);
    CreateInterface(SteamUser008, STEAM_USER);
    CreateInterface(SteamUser009, STEAM_USER);
    CreateInterface(SteamUser010, STEAM_USER);
    CreateInterface(SteamUser011, STEAM_USER);
    CreateInterface(SteamUser012, STEAM_USER);
    CreateInterface(SteamUser013, STEAM_USER);
    CreateInterface(SteamUser014, STEAM_USER);
    CreateInterface(SteamUser015, STEAM_USER);
    CreateInterface(SteamUser016, STEAM_USER);
    CreateInterface(SteamUser017, STEAM_USER);
    CreateInterface(SteamUser018, STEAM_USER);

    CreateInterface(SteamNetworking001, STEAM_NETWORKING);
    CreateInterface(SteamNetworking002, STEAM_NETWORKING);
    CreateInterface(SteamNetworking003, STEAM_NETWORKING);
    CreateInterface(SteamNetworking004, STEAM_NETWORKING);
    CreateInterface(SteamNetworking005, STEAM_NETWORKING);

    CreateInterface(SteamMatchmaking001, STEAM_MATCHMAKING);
    CreateInterface(SteamMatchmaking002, STEAM_MATCHMAKING);
    CreateInterface(SteamMatchmaking003, STEAM_MATCHMAKING);
    CreateInterface(SteamMatchmaking004, STEAM_MATCHMAKING);
    CreateInterface(SteamMatchmaking005, STEAM_MATCHMAKING);
    CreateInterface(SteamMatchmaking006, STEAM_MATCHMAKING);
    CreateInterface(SteamMatchmaking007, STEAM_MATCHMAKING);
    CreateInterface(SteamMatchmaking008, STEAM_MATCHMAKING);
    CreateInterface(SteamMatchmaking009, STEAM_MATCHMAKING);

    CreateInterface(SteamGameserver001, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver002, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver003, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver004, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver005, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver006, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver007, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver008, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver009, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver010, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver011, STEAM_GAMESERVER);
    CreateInterface(SteamGameserver012, STEAM_GAMESERVER);

    CreateInterface(SteamFriends001, STEAM_FRIENDS);
    CreateInterface(SteamFriends002, STEAM_FRIENDS);
    CreateInterface(SteamFriends003, STEAM_FRIENDS);
    CreateInterface(SteamFriends004, STEAM_FRIENDS);
    CreateInterface(SteamFriends005, STEAM_FRIENDS);
    CreateInterface(SteamFriends006, STEAM_FRIENDS);
    CreateInterface(SteamFriends007, STEAM_FRIENDS);
    CreateInterface(SteamFriends008, STEAM_FRIENDS);
    CreateInterface(SteamFriends009, STEAM_FRIENDS);
    CreateInterface(SteamFriends010, STEAM_FRIENDS);
    CreateInterface(SteamFriends011, STEAM_FRIENDS);
    CreateInterface(SteamFriends012, STEAM_FRIENDS);
    CreateInterface(SteamFriends013, STEAM_FRIENDS);
    CreateInterface(SteamFriends014, STEAM_FRIENDS);
    CreateInterface(SteamFriends015, STEAM_FRIENDS);

    CreateInterface(SteamApps001, STEAM_APPS);
    CreateInterface(SteamApps002, STEAM_APPS);
    CreateInterface(SteamApps003, STEAM_APPS);
    CreateInterface(SteamApps004, STEAM_APPS);
    CreateInterface(SteamApps005, STEAM_APPS);
    CreateInterface(SteamApps006, STEAM_APPS);
    CreateInterface(SteamApps007, STEAM_APPS);

    CreateInterface(SteamRemotestorage001, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage002, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage003, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage004, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage005, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage006, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage007, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage008, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage009, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage010, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage011, STEAM_REMOTESTORAGE);
    CreateInterface(SteamRemotestorage012, STEAM_REMOTESTORAGE);

    // TODO(Convery): Create the interfaces here as they are added.
}

void Setmapbyname(eInterfaceType Type, const char *Name)
{
    Interfacemap[Type] = Interfacemanager::Fetchinterface(Name);
}
void Interfacemanager::Initialize(uint32_t ApplicationID)
{
    static bool Mapcreated = false;
    if (!Mapcreated)
    {
        Createmaps();
        Mapcreated = true;
    }

    // Load the active interfaces from a CSV file.
    if (CSVManager::Readfile("./Plugins/SteamInterfaces.csv"))
    {
        for (size_t Row = 0; ; ++Row)
        {
            // End of buffer check.
            if (CSVManager::Getvalue(Row, 0).size() == 0)
                break;

            // Only load the interfaces related to our application.
            if (0 == std::strcmp(CSVManager::Getvalue(Row, 0).c_str(), va_small("%i", ApplicationID)))
            {
                for (size_t Col = 1; ; ++Col)
                {
                    #define Checktype(Interfacename, Type)          \
                    if(std::strstr(Name.c_str(), Interfacename))    \
                    { Setmapbyname(Type, Name.c_str()); continue; }

                    // End of buffer check.
                    if (CSVManager::Getvalue(Row, Col).size() == 0)
                        break;

                    // Find the type.
                    std::string Name = CSVManager::Getvalue(Row, Col);
                    Checktype("SteamUGC0", STEAM_UGC);
                    Checktype("SteamApps0", STEAM_APPS);
                    Checktype("SteamUser0", STEAM_USER);
                    Checktype("SteamHTTP0", STEAM_HTTP);
                    Checktype("SteamMusic0", STEAM_MUSIC);                
                    Checktype("SteamVideo0", STEAM_VIDEO);
                    Checktype("SteamClient0", STEAM_CLIENT);
                    Checktype("SteamUtilities0", STEAM_UTILS);
                    Checktype("SteamFriends0", STEAM_FRIENDS);
                    Checktype("SteamApplist0", STEAM_APPLIST);
                    Checktype("SteamInventory0", STEAM_INVENTORY);
                    Checktype("SteamUserstats0", STEAM_USERSTATS);
                    Checktype("SteamController0", STEAM_CONTROLLER);
                    Checktype("SteamGameserver0", STEAM_GAMESERVER);
                    Checktype("SteamNetworking0", STEAM_NETWORKING);
                    Checktype("SteamHTMLSurface0", STEAM_HTMLSURFACE);
                    Checktype("SteamMusicremote0", STEAM_MUSICREMOTE);
                    Checktype("SteamScreenshots0", STEAM_SCREENSHOTS);
                    Checktype("SteamMatchmaking0", STEAM_MATCHMAKING);
                    Checktype("SteamRemotestorage0", STEAM_REMOTESTORAGE);
                    Checktype("SteamUnifiedmessages0", STEAM_UNIFIEDMESSAGES);
                    Checktype("SteamGameserverStats0", STEAM_GAMESERVERSTATS);
                    Checktype("SteamMatchamkingservers0", STEAM_MATCHMAKINGSERVERS);
                    Checktype("SteamMasterserverUpdater0", STEAM_MASTERSERVERUPDATER);                
                }
            }
        }
    }
    else
    {
        DebugPrint("Missing file: \"./Plugins/SteamInterfaces.csv\", the program is unlikely to function properly.");
    }
}
void *Interfacemanager::Fetchinterface(const char *Name)
{
    auto Result = Interfacenames.find(Name);
    if (Result != Interfacenames.end()) return Result->second;

    DebugPrint(va_small("%s had no interface with name \"%s\"", __FUNCTION__, Name));
    return nullptr;
}
void *Interfacemanager::Fetchinterface(eInterfaceType Type)
{
    // Workaround for initialization of servers.
    static bool Initialized = false;
    if (!Initialized)
    {
        if(Interfacestore.size() == 0)
            SteamAPI_Init();
        Initialized = true;
    }

    auto Result = Interfacemap.find(Type);
    if (Result != Interfacemap.end()) return Result->second;

    // Search through the created interfaces to find the last of the type.
    for (auto Iterator = Interfacestore.rbegin(); Iterator != Interfacestore.rend(); Iterator++)
    {
        if (Iterator->first == Type)
            return Iterator->second;
    }

    DebugPrint(va_small("%s had no interface for type %i", __FUNCTION__, Type));
    return nullptr;
}

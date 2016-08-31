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

void Setmapbyname(eInterfaceType Type, const char *Name)
{
    Interfacemap[Type] = Interfacemanager::Fetchinterface(Name);
}
void Interfacemanager::Initialize(uint32_t ApplicationID)
{
    // Load the active interfaces from a CSV file.
    CSVManager CSVReader;
    if (CSVReader.Readfile("./Plugins/SteamInterfaces.csv"))
    {
        for (size_t Row = 0; ; ++Row)
        {
            // End of buffer check.
            if (CSVReader.Getvalue(Row, 0).size() == 0)
                break;

            // Only load the interfaces related to our application.
            if (0 == std::strcmp(CSVReader.Getvalue(Row, 0).c_str(), va_small("%i", ApplicationID)))
            {
                for (size_t Col = 1; ; ++Col)
                {
                    #define Checktype(Interfacename, Type)          \
                    if(std::strstr(Name.c_str(), Interfacename))    \
                    { Setmapbyname(Type, Name.c_str()); continue; }

                    // End of buffer check.
                    if (CSVReader.Getvalue(Row, Col).size() == 0)
                        break;

                    // Find the type.
                    std::string Name = CSVReader.Getvalue(Row, Col);
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
void Interfacemanager::Addinterface(eInterfaceType Type, const char *Name, void *Interface)
{
    Interfacestore.push_back({ Type, Interface });
    Interfacenames[Name] = Interface;
}

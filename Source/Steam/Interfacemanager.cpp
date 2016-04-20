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

    // TODO(Convery): Create the interfaces here as they are added.
}

void Setmapbyname(eInterfaceType Type, const char *Name)
{
    Interfacemap[Type] = Interfacemanager::Fetchinterface(Name);
}
void Interfacemanager::Initialize(const char *Filepath)
{
    static bool Mapcreated = false;
    if (!Mapcreated)
    {
        Createmaps();
        Mapcreated = true;
    }

    // TODO(Convery): Load interfaces as CSV file.
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
    auto Result = Interfacemap.find(Type);
    if (Result != Interfacemap.end()) return Result->second;

    DebugPrint(va_small("%s had no interface for type %i", __FUNCTION__, Type));
    return nullptr;
}

/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-20
    Notes:
        Similar to steamclient.dll's factory, just returns objects.
*/

#pragma once

// Types.
enum eInterfaceType
{
    STEAM_UGC,
    STEAM_APPS,
    STEAM_USER,
    STEAM_HTTP,
    STEAM_MUSIC,
    STEAM_UTILS,
    STEAM_VIDEO,
    STEAM_CLIENT,
    STEAM_FRIENDS,
    STEAM_APPLIST,
    STEAM_INVENTORY,
    STEAM_USERSTATS,
    STEAM_CONTROLLER,
    STEAM_GAMESERVER,
    STEAM_NETWORKING,
    STEAM_HTMLSURFACE,
    STEAM_MUSICREMOTE,
    STEAM_SCREENSHOTS,
    STEAM_MATCHMAKING,
    STEAM_REMOTESTORAGE,
    STEAM_UNIFIEDMESSAGES,
    STEAM_GAMESERVERSTATS,
    STEAM_MATCHMAKINGSERVERS,
    STEAM_MASTERSERVERUPDATER,
    STEAM_MAX,
    STEAM_INVALID
};

struct Interfacemanager
{
    static void Initialize(const char *Filepath);
    static void *Fetchinterface(const char *Name);
    static void *Fetchinterface(eInterfaceType Type);
};

/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-20
    Notes:
        Creates interfaces when needed.
        Similar to steamclient.dll's factory.
*/

#include <unordered_map>
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
    Interfacenames[##Interface] = Temp_ ##Interface;

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

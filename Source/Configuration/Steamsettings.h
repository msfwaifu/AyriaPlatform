/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-20
    Notes:
        Globally accessible settings for Steam.
*/

#pragma once
#include <stdint.h>

// Application info.
extern char Steam_Language[32];
extern uint32_t Steam_ApplicationID;
extern int64_t Steam_StartupTimestamp;

// Network access.
extern bool Steam_LAN;
extern bool Steam_Server;
extern bool Steam_Offline;

// User information.
extern char Steam_path[260];
extern uint64_t Steam_UserID;
extern char Steam_Username[17];

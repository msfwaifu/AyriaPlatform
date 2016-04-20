/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-20
    Notes:
        Globally accessible settings for Steam.
*/

#include "Steamsettings.h"
#include <chrono>

// Application info.
char Steam_Language[32]{ "english" };
uint32_t Steam_ApplicationID{ 0 };
int64_t Steam_StartupTimestamp{ std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count() };

// Network access.
bool Steam_LAN{ false };
bool Steam_Server{ false };
bool Steam_Offline{ false };

// User information.
uint64_t Steam_UserID{ 0x1100001DEADC0DE };
char Steam_Username[17]{ "Ayria" };

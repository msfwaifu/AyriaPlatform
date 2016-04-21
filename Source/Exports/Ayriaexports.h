/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-21
    Notes:
        Forward declaration of Ayrias exports.
*/

#pragma once
#include <Configuration\All.h>

extern "C"
{
    // Ayrias extension exports as per the 2016 standard.
    EXPORT_ATTR void __cdecl onExtensionUnloading(void);
    EXPORT_ATTR void __cdecl onInitializationStart(void);
    EXPORT_ATTR void __cdecl onInitializationComplete(void);
    EXPORT_ATTR void __cdecl onMessage(uint32_t Message, ...);
}

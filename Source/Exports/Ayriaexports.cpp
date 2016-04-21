/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-21
    Notes:
        Implementation of the export API.
*/

#include "Ayriaexports.h"
#include <cstdarg>

extern "C"
{
    // Ayrias extension exports as per the 2016 standard.
    EXPORT_ATTR void __cdecl onExtensionUnloading(void)
    {
    }
    EXPORT_ATTR void __cdecl onInitializationStart(void)
    {
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

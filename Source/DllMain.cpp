/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-04-13
    Notes:
        The entrypoint for this extension.
*/

#include <Configuration\All.h>
#include <iostream>
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

#ifdef _WIN32
#include <Windows.h>
BOOLEAN WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
    switch ( nReason )
    {
    case DLL_PROCESS_ATTACH:
        // Rather not handle all thread updates.
        DisableThreadLibraryCalls( hDllHandle );

        // Create a console window for debug output.
        if (!std::strstr(GetCommandLineA(), "-no_con"))
        {
            AllocConsole();
            freopen("CONIN$", "r", stdin);
            freopen("CONOUT$", "w", stdout);
            freopen("CONOUT$", "w", stderr);
            std::wcout.clear();
            std::cout.clear();
            std::wcerr.clear();
            std::cerr.clear();
            std::wcin.clear();
            std::cin.clear();
        }

        // Clean the logfile so we only save this session.
        DeleteLogfile();

        // Load the plugins if it's not already loaded.
        LoadLibraryA("Bootstrap"); 
        break;
    }

    return TRUE;
}

#else

void __attribute__((constructor)) SOMain()
{
    // Clean the logfile so we only save this session.
    DeleteLogfile();
}
#endif

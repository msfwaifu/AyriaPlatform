/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-04-13
    Notes:
        The entrypoint for this extension.
*/

#include <Configuration\All.h>

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
        }

        // Clean the logfile so we only save this session.
        DeleteLogfile();

        /*
            NOTE(Convery):
            The users will have the bootstrapper injected via the desktop
            client but that's not useful for debugging. As such the dev
            needs to copy the NativeBootstrap32/64 to the gamefolder.
        */
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

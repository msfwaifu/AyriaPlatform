/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-9-2
    Notes:
		Captures the screen and saves the data to disk.
*/

#include "All.h"
#include <algorithm>
#include <Steam\CSteamID.h>
#include <Configuration\All.h>
#include <Steam\Steamcallback.h>
#include <Steam\Interfacemanager.h>

#define Createmethod(Index, Class, Function)    \
auto Temp ##Function = &Class::Function;        \
Methods[Index] = *(void **)&Temp ##Function;

#pragma region Methods
class SteamScreenshots
{
public:
	uint32_t WriteScreenshot(void *pubRGB, uint32_t cubRGB, int nWidth, int nHeight)
	{
		PrintFunction();
		return 0;
	}
	uint32_t AddScreenshotToLibrary(const char *pchJpegOrTGAFilename, const char *pchJpegOrTGAThumbFilename, int nWidth, int nHeight)
	{
		PrintFunction();
		return 0;
	}
	void TriggerScreenshot()
	{
		PrintFunction();
	}
	void HookScreenshots(bool bHook)
	{
		PrintFunction();
	}
	bool SetLocation(uint32_t hScreenshot, const char *pchLocation)
	{
		PrintFunction();
		return false;
	}
	bool TagUser(uint32_t hScreenshot, CSteamID steamID)
	{
		PrintFunction();
		return false;
	}
	bool TagPublishedFile(uint32_t hScreenshot, uint64_t unPublishedFileId)
	{
		PrintFunction();
		return false;
	}
};
#pragma endregion

SteamScreenshots001::SteamScreenshots001() 
{
	Createmethod(0, SteamScreenshots, WriteScreenshot);
	Createmethod(1, SteamScreenshots, AddScreenshotToLibrary);
	Createmethod(2, SteamScreenshots, TriggerScreenshot);
	Createmethod(3, SteamScreenshots, HookScreenshots);
	Createmethod(4, SteamScreenshots, SetLocation);
	Createmethod(5, SteamScreenshots, TagUser);
};
SteamScreenshots002::SteamScreenshots002() 
{
    Createmethod(0, SteamScreenshots, WriteScreenshot);
	Createmethod(1, SteamScreenshots, AddScreenshotToLibrary);
	Createmethod(2, SteamScreenshots, TriggerScreenshot);
	Createmethod(3, SteamScreenshots, HookScreenshots);
	Createmethod(4, SteamScreenshots, SetLocation);
	Createmethod(5, SteamScreenshots, TagUser);
	Createmethod(6, SteamScreenshots, TagPublishedFile);
};

struct Steamscreenshotsloader
{
	Steamscreenshotsloader()
	{
		Interfacemanager::Addinterface(STEAM_SCREENSHOTS, "SteamScreenshots001", new SteamScreenshots001);
		Interfacemanager::Addinterface(STEAM_SCREENSHOTS, "SteamScreenshots002", new SteamScreenshots002);
	}
};
static Steamscreenshotsloader Interfaceloader;

/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: LGPL 3.0
    Started: 2016-4-20
    Notes:
        Statistics over the users activity.
*/

#include "All.h"
#include <Steam\CSteamID.h>
#include <Configuration\All.h>
#include <Steam\Interfacemanager.h>

#define Createmethod(Index, Class, Function)    \
auto Temp ##Function = &Class::Function;        \
Methods[Index] = *(void **)&Temp ##Function;

#pragma region Methods
class SteamUserstats
{
public:
    uint32_t GetNumStats(CGameID nGameID)
    {
        PrintFunction();
        return 0;
    }
    const char *GetStatName(CGameID nGameID, uint32_t iStat)
    {
        PrintFunction();
        return "";
    }
    uint32_t GetStatType(CGameID nGameID, const char *pchName)
    {
        PrintFunction();
        return 0;
    }
    uint32_t GetNumAchievements(CGameID nGameID)
    {
        PrintFunction();
        return 0;
    }
    const char *GetAchievementName0(CGameID nGameID, uint32_t iAchievement)
    {
        PrintFunction();
        return "";
    }
    uint32_t GetNumGroupAchievements(CGameID)
    {
        PrintFunction();
        return 0;
    }
    const char *GetGroupAchievementName(CGameID, uint32_t iAchievement)
    {
        PrintFunction();
        return "";
    }
    bool RequestCurrentStats0(CGameID nGameID)
    {
        PrintFunction();
        return true;
    }
    bool GetStat1(CGameID nGameID, const char *pchName, int32_t *pData)
    {
        PrintFunction();
        return false;
    }
    bool GetStat2(CGameID nGameID, const char *pchName, float *pData)
    {
        PrintFunction();
        return false;
    }
    bool SetStat1(CGameID nGameID, const char *pchName, int32_t nData)
    {
        PrintFunction();
        return false;
    }
    bool SetStat2(CGameID nGameID, const char *pchName, float fData)
    {
        PrintFunction();
        return false;
    }
    bool UpdateAvgRateStat0(CGameID nGameID, const char *pchName, float, double dSessionLength)
    {
        PrintFunction();
        return false;
    }
    bool GetAchievement0(CGameID nGameID, const char *pchName, bool *pbAchieved)
    {
        PrintFunction();
        return false;
    }
    bool GetGroupAchievement(CGameID nGameID, const char *pchName, bool *pbAchieved)
    {
        PrintFunction();
        return false;
    }
    bool SetAchievement0(CGameID nGameID, const char *pchName)
    {
        PrintFunction();
        return false;
    }
    bool SetGroupAchievement(CGameID nGameID, const char *pchName)
    {
        PrintFunction();
        return false;
    }
    bool StoreStats0(CGameID nGameID)
    {
        PrintFunction();
        return false;
    }
    bool ClearAchievement0(CGameID nGameID, const char *pchName)
    {
        PrintFunction();
        return false;
    }
    bool ClearGroupAchievement(CGameID nGameID, const char *pchName)
    {
        PrintFunction();
        return false;
    }
    int GetAchievementIcon0(CGameID nGameID, const char *pchName)
    {
        PrintFunction();
        return 0;
    }
    const char *GetAchievementDisplayAttribute0(CGameID nGameID, const char *pchName, const char *pchKey)
    {
        PrintFunction();
        return "";
    }
    bool UpdateAvgRateStat1(CGameID nGameID, const char *pchName, uint32_t nCountThisSession, double dSessionLength)
    {
        PrintFunction();
        return false;
    }
    bool IndicateAchievementProgress0(CGameID nGameID, const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
    {
        PrintFunction();
        return false;
    }
    bool RequestCurrentStats1()
    {
        PrintFunction();
        return true;
    }
    bool GetStat(const char *pchName, int32_t *pData)
    {
        PrintFunction();
        return false;
    }
    bool GetStat(const char *pchName, float *pData)
    {
        PrintFunction();
        return false;
    }
    bool SetStat(const char *pchName, int32_t nData)
    {
        PrintFunction();
        return false;
    }
    bool SetStat(const char *pchName, float fData)
    {
        PrintFunction();
        return false;
    }
    bool UpdateAvgRateStat2(const char *pchName, float, double dSessionLength)
    {
        PrintFunction();
        return false;
    }
    bool GetAchievement1(const char *pchName, bool *pbAchieved)
    {
        PrintFunction();
        return false;
    }
    bool SetAchievement1(const char *pchName)
    {
        PrintFunction();
        return false;
    }
    bool ClearAchievement1(const char *pchName)
    {
        PrintFunction();
        return false;
    }
    bool StoreStats1()
    {
        PrintFunction();
        return true;
    }
    int GetAchievementIcon1(const char *pchName)
    {
        PrintFunction();
        return 0;
    }
    const char *GetAchievementDisplayAttribute1(const char *pchName, const char *pchKey)
    {
        PrintFunction();
        return "";
    }
    bool IndicateAchievementProgress1(const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
    {
        PrintFunction();
        return false;
    }
    static uint64_t RequestUserStats(CSteamID steamIDUser)
    {
        PrintFunction();
        return 0;
    }
    static bool GetUserStat1(CSteamID steamIDUser, const char *pchName, int32_t *pData)
    {
        PrintFunction();
        return false;
    }
    static bool GetUserStat2(CSteamID steamIDUser, const char *pchName, float *pData)
    {
        PrintFunction();
        return false;
    }
    static bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
    {
        PrintFunction();
        return false;
    }
    bool ResetAllStats(bool bAchievementsToo)
    {
        PrintFunction();
        return false;
    }
    uint64_t FindOrCreateLeaderboard(const char *pchLeaderboardName, uint32_t eLeaderboardSortMethod, uint32_t eLeaderboardDisplayType)
    {
        PrintFunction();
        return 0;
    }
    uint64_t FindLeaderboard(const char *pchLeaderboardName)
    {
        PrintFunction();
        return 0;
    }
    const char *GetLeaderboardName(uint64_t hSteamLeaderboard)
    {
        PrintFunction();
        return "";
    }
    int GetLeaderboardEntryCount(uint64_t hSteamLeaderboard)
    {
        PrintFunction();
        return 0;
    }
    uint32_t GetLeaderboardSortMethod(uint64_t hSteamLeaderboard)
    {
        PrintFunction();
        return 0;
    }
    uint32_t GetLeaderboardDisplayType(uint64_t hSteamLeaderboard)
    {
        PrintFunction();
        return 0;
    }
    uint64_t DownloadLeaderboardEntries(uint64_t hSteamLeaderboard, uint32_t eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
    {
        PrintFunction();
        return 0;
    }
    uint64_t UploadLeaderboardScore0(uint64_t hSteamLeaderboard, int32_t nScore, int32_t *pScoreDetails, int cScoreDetailsCount)
    {
        PrintFunction();
        return 0;
    }
    uint64_t UploadLeaderboardScore1(uint64_t hSteamLeaderboard, uint32_t eLeaderboardUploadScoreMethod, int32_t nScore, int32_t *pScoreDetails, int cScoreDetailsCount)
    {
        PrintFunction();
        return 0;
    }
    uint64_t GetNumberOfCurrentPlayers()
    {
        PrintFunction();
        return 0;
    }
    bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32_t *prtTime)
    {
        PrintFunction();
        return false;
    }
    bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32_t *prtTime)
    {
        PrintFunction();
        return false;
    }
    bool GetDownloadedLeaderboardEntry(uint64_t hSteamLeaderboardEntries, int index, struct LeaderboardEntry_t *pLeaderboardEntry, int32_t *pDetails, int cDetailsMax)
    {
        PrintFunction();
        return false;
    }
    uint64_t AttachLeaderboardUGC(uint64_t hSteamLeaderboard, uint32_t hUGC)
    {
        PrintFunction();
        return 0;
    }
    uint64_t DownloadLeaderboardEntriesForUsers(uint64_t hSteamLeaderboard, CSteamID * prgUsers, int cUsers)
    {
        PrintFunction();
        return 0;
    }
    uint64_t RequestGlobalAchievementPercentages()
    {
        PrintFunction();
        return 0;
    }
    int GetMostAchievedAchievementInfo(char *pchName, uint32_t unNameBufLen, float *pflPercent, bool *pbAchieved)
    {
        PrintFunction();
        return 0;
    }
    int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32_t unNameBufLen, float *pflPercent, bool *pbAchieved)
    {
        PrintFunction();
        return 0;
    }
    bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent)
    {
        PrintFunction();
        return false;
    }
    uint64_t RequestGlobalStats(int nHistoryDays)
    {
        PrintFunction();
        return 0;
    }
    bool GetGlobalStat1(const char *pchStatName, int64_t *pData)
    {
        PrintFunction();
        return false;
    }
    bool GetGlobalStat2(const char *pchStatName, double *pData)
    {
        PrintFunction();
        return false;
    }
    int32_t GetGlobalStatHistory1(const char *pchStatName, int64_t *pData, uint32_t cubData)
    {
        PrintFunction();
        return 0;
    }
    int32_t GetGlobalStatHistory2(const char *pchStatName, double *pData, uint32_t cubData)
    {
        PrintFunction();
        return 0;
    }
    const char *GetAchievementName1(uint32_t iAchievement)
    {
        PrintFunction();
        return "";
    }
};
#pragma endregion

SteamUserstats001::SteamUserstats001() 
{
    Createmethod(0, SteamUserstats, GetNumStats);
    Createmethod(1, SteamUserstats, GetStatName);
    Createmethod(2, SteamUserstats, GetStatType);
    Createmethod(3, SteamUserstats, GetNumAchievements);
    Createmethod(4, SteamUserstats, GetAchievementName0);
    Createmethod(5, SteamUserstats, GetNumGroupAchievements);
    Createmethod(6, SteamUserstats, GetGroupAchievementName);
    Createmethod(7, SteamUserstats, RequestCurrentStats0);
    Createmethod(8, SteamUserstats, GetStat1);
    Createmethod(9, SteamUserstats, GetStat2);
    Createmethod(10, SteamUserstats, SetStat1);
    Createmethod(11, SteamUserstats, SetStat2);
    Createmethod(12, SteamUserstats, UpdateAvgRateStat0);
    Createmethod(13, SteamUserstats, GetAchievement0);
    Createmethod(14, SteamUserstats, GetGroupAchievement);
    Createmethod(15, SteamUserstats, SetAchievement0);
    Createmethod(16, SteamUserstats, SetGroupAchievement);
    Createmethod(17, SteamUserstats, StoreStats0);
    Createmethod(18, SteamUserstats, ClearAchievement0);
    Createmethod(19, SteamUserstats, ClearGroupAchievement);
    Createmethod(20, SteamUserstats, GetAchievementIcon0);
    Createmethod(21, SteamUserstats, GetAchievementDisplayAttribute0);
};
SteamUserstats002::SteamUserstats002() 
{
    Createmethod(0, SteamUserstats, GetNumStats);
    Createmethod(1, SteamUserstats, GetStatName);
    Createmethod(2, SteamUserstats, GetStatType);
    Createmethod(3, SteamUserstats, GetNumAchievements);
    Createmethod(4, SteamUserstats, GetAchievementName0);
    Createmethod(5, SteamUserstats, RequestCurrentStats0);
    Createmethod(6, SteamUserstats, GetStat1);
    Createmethod(7, SteamUserstats, GetStat2);
    Createmethod(8, SteamUserstats, SetStat1);
    Createmethod(9, SteamUserstats, SetStat2);
    Createmethod(10, SteamUserstats, UpdateAvgRateStat1);
    Createmethod(11, SteamUserstats, GetAchievement0);
    Createmethod(12, SteamUserstats, SetAchievement0);
    Createmethod(13, SteamUserstats, ClearAchievement0);
    Createmethod(14, SteamUserstats, StoreStats0);
    Createmethod(15, SteamUserstats, GetAchievementIcon0);
    Createmethod(16, SteamUserstats, GetAchievementDisplayAttribute0);
    Createmethod(17, SteamUserstats, IndicateAchievementProgress0);
};
SteamUserstats003::SteamUserstats003() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement0);
    Createmethod(7, SteamUserstats, SetAchievement0);
    Createmethod(8, SteamUserstats, ClearAchievement0);
    Createmethod(9, SteamUserstats, StoreStats0);
    Createmethod(10, SteamUserstats, GetAchievementIcon0);
    Createmethod(11, SteamUserstats, GetAchievementDisplayAttribute0);
    Createmethod(12, SteamUserstats, IndicateAchievementProgress0);
};
SteamUserstats004::SteamUserstats004() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement1);
    Createmethod(7, SteamUserstats, SetAchievement1);
    Createmethod(8, SteamUserstats, ClearAchievement1);
    Createmethod(9, SteamUserstats, StoreStats1);
    Createmethod(10, SteamUserstats, GetAchievementIcon1);
    Createmethod(11, SteamUserstats, GetAchievementDisplayAttribute1);
    Createmethod(12, SteamUserstats, IndicateAchievementProgress1);
    Createmethod(13, SteamUserstats, RequestUserStats);
    Createmethod(14, SteamUserstats, GetUserStat1);
    Createmethod(15, SteamUserstats, GetUserStat2);
    Createmethod(16, SteamUserstats, GetUserAchievement);
    Createmethod(17, SteamUserstats, ResetAllStats);
};
SteamUserstats005::SteamUserstats005() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement1);
    Createmethod(7, SteamUserstats, SetAchievement1);
    Createmethod(8, SteamUserstats, ClearAchievement1);
    Createmethod(9, SteamUserstats, StoreStats1);
    Createmethod(10, SteamUserstats, GetAchievementIcon1);
    Createmethod(11, SteamUserstats, GetAchievementDisplayAttribute1);
    Createmethod(12, SteamUserstats, IndicateAchievementProgress1);
    Createmethod(13, SteamUserstats, RequestUserStats);
    Createmethod(14, SteamUserstats, GetUserStat1);
    Createmethod(15, SteamUserstats, GetUserStat2);
    Createmethod(16, SteamUserstats, GetUserAchievement);
    Createmethod(17, SteamUserstats, ResetAllStats);
    Createmethod(18, SteamUserstats, FindOrCreateLeaderboard);
    Createmethod(19, SteamUserstats, FindLeaderboard);
    Createmethod(20, SteamUserstats, GetLeaderboardName);
    Createmethod(21, SteamUserstats, GetLeaderboardEntryCount);
    Createmethod(22, SteamUserstats, GetLeaderboardSortMethod);
    Createmethod(23, SteamUserstats, GetLeaderboardDisplayType);
    Createmethod(24, SteamUserstats, DownloadLeaderboardEntries);
    Createmethod(25, SteamUserstats, GetDownloadedLeaderboardEntry);
    Createmethod(26, SteamUserstats, UploadLeaderboardScore0);
};
SteamUserstats006::SteamUserstats006() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement1);
    Createmethod(7, SteamUserstats, SetAchievement1);
    Createmethod(8, SteamUserstats, ClearAchievement1);
    Createmethod(9, SteamUserstats, StoreStats1);
    Createmethod(10, SteamUserstats, GetAchievementIcon1);
    Createmethod(11, SteamUserstats, GetAchievementDisplayAttribute1);
    Createmethod(12, SteamUserstats, IndicateAchievementProgress1);
    Createmethod(13, SteamUserstats, RequestUserStats);
    Createmethod(14, SteamUserstats, GetUserStat1);
    Createmethod(15, SteamUserstats, GetUserStat2);
    Createmethod(16, SteamUserstats, GetUserAchievement);
    Createmethod(17, SteamUserstats, ResetAllStats);
    Createmethod(18, SteamUserstats, FindOrCreateLeaderboard);
    Createmethod(19, SteamUserstats, FindLeaderboard);
    Createmethod(20, SteamUserstats, GetLeaderboardName);
    Createmethod(21, SteamUserstats, GetLeaderboardEntryCount);
    Createmethod(22, SteamUserstats, GetLeaderboardSortMethod);
    Createmethod(23, SteamUserstats, GetLeaderboardDisplayType);
    Createmethod(24, SteamUserstats, DownloadLeaderboardEntries);
    Createmethod(25, SteamUserstats, GetDownloadedLeaderboardEntry);
    Createmethod(26, SteamUserstats, UploadLeaderboardScore1);
    Createmethod(27, SteamUserstats, GetNumberOfCurrentPlayers);
};
SteamUserstats007::SteamUserstats007() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement1);
    Createmethod(7, SteamUserstats, SetAchievement1);
    Createmethod(8, SteamUserstats, ClearAchievement1);
    Createmethod(9, SteamUserstats, GetAchievementAndUnlockTime);
    Createmethod(10, SteamUserstats, StoreStats1);
    Createmethod(11, SteamUserstats, GetAchievementIcon1);
    Createmethod(12, SteamUserstats, GetAchievementDisplayAttribute1);
    Createmethod(13, SteamUserstats, IndicateAchievementProgress1);
    Createmethod(14, SteamUserstats, RequestUserStats);
    Createmethod(15, SteamUserstats, GetUserStat1);
    Createmethod(16, SteamUserstats, GetUserStat2);
    Createmethod(17, SteamUserstats, GetUserAchievement);
    Createmethod(18, SteamUserstats, GetUserAchievementAndUnlockTime);
    Createmethod(19, SteamUserstats, ResetAllStats);
    Createmethod(20, SteamUserstats, FindOrCreateLeaderboard);
    Createmethod(21, SteamUserstats, FindLeaderboard);
    Createmethod(22, SteamUserstats, GetLeaderboardName);
    Createmethod(23, SteamUserstats, GetLeaderboardEntryCount);
    Createmethod(24, SteamUserstats, GetLeaderboardSortMethod);
    Createmethod(25, SteamUserstats, GetLeaderboardDisplayType);
    Createmethod(26, SteamUserstats, DownloadLeaderboardEntries);
    Createmethod(27, SteamUserstats, GetDownloadedLeaderboardEntry);
    Createmethod(28, SteamUserstats, UploadLeaderboardScore1);
    Createmethod(29, SteamUserstats, GetNumberOfCurrentPlayers);
};
SteamUserstats008::SteamUserstats008() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement1);
    Createmethod(7, SteamUserstats, SetAchievement1);
    Createmethod(8, SteamUserstats, ClearAchievement1);
    Createmethod(9, SteamUserstats, GetAchievementAndUnlockTime);
    Createmethod(10, SteamUserstats, StoreStats1);
    Createmethod(11, SteamUserstats, GetAchievementIcon1);
    Createmethod(12, SteamUserstats, GetAchievementDisplayAttribute1);
    Createmethod(13, SteamUserstats, IndicateAchievementProgress1);
    Createmethod(14, SteamUserstats, RequestUserStats);
    Createmethod(15, SteamUserstats, GetUserStat1);
    Createmethod(16, SteamUserstats, GetUserStat2);
    Createmethod(17, SteamUserstats, GetUserAchievement);
    Createmethod(18, SteamUserstats, GetUserAchievementAndUnlockTime);
    Createmethod(19, SteamUserstats, ResetAllStats);
    Createmethod(20, SteamUserstats, FindOrCreateLeaderboard);
    Createmethod(21, SteamUserstats, FindLeaderboard);
    Createmethod(22, SteamUserstats, GetLeaderboardName);
    Createmethod(23, SteamUserstats, GetLeaderboardEntryCount);
    Createmethod(24, SteamUserstats, GetLeaderboardSortMethod);
    Createmethod(25, SteamUserstats, GetLeaderboardDisplayType);
    Createmethod(26, SteamUserstats, DownloadLeaderboardEntries);
    Createmethod(27, SteamUserstats, GetDownloadedLeaderboardEntry);
    Createmethod(28, SteamUserstats, UploadLeaderboardScore1);
    Createmethod(29, SteamUserstats, AttachLeaderboardUGC);
    Createmethod(30, SteamUserstats, GetNumberOfCurrentPlayers);

};
SteamUserstats009::SteamUserstats009() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement1);
    Createmethod(7, SteamUserstats, SetAchievement1);
    Createmethod(8, SteamUserstats, ClearAchievement1);
    Createmethod(9, SteamUserstats, GetAchievementAndUnlockTime);
    Createmethod(10, SteamUserstats, StoreStats1);
    Createmethod(11, SteamUserstats, GetAchievementIcon1);
    Createmethod(12, SteamUserstats, GetAchievementDisplayAttribute1);
    Createmethod(13, SteamUserstats, IndicateAchievementProgress1);
    Createmethod(14, SteamUserstats, RequestUserStats);
    Createmethod(15, SteamUserstats, GetUserStat1);
    Createmethod(16, SteamUserstats, GetUserStat2);
    Createmethod(17, SteamUserstats, GetUserAchievement);
    Createmethod(18, SteamUserstats, GetUserAchievementAndUnlockTime);
    Createmethod(19, SteamUserstats, ResetAllStats);
    Createmethod(20, SteamUserstats, FindOrCreateLeaderboard);
    Createmethod(21, SteamUserstats, FindLeaderboard);
    Createmethod(22, SteamUserstats, GetLeaderboardName);
    Createmethod(23, SteamUserstats, GetLeaderboardEntryCount);
    Createmethod(24, SteamUserstats, GetLeaderboardSortMethod);
    Createmethod(25, SteamUserstats, GetLeaderboardDisplayType);
    Createmethod(26, SteamUserstats, DownloadLeaderboardEntries);
    Createmethod(27, SteamUserstats, DownloadLeaderboardEntriesForUsers);
    Createmethod(28, SteamUserstats, GetDownloadedLeaderboardEntry);
    Createmethod(29, SteamUserstats, UploadLeaderboardScore1);
    Createmethod(30, SteamUserstats, AttachLeaderboardUGC);
    Createmethod(31, SteamUserstats, GetNumberOfCurrentPlayers);
};
SteamUserstats010::SteamUserstats010() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement1);
    Createmethod(7, SteamUserstats, SetAchievement1);
    Createmethod(8, SteamUserstats, ClearAchievement1);
    Createmethod(9, SteamUserstats, GetAchievementAndUnlockTime);
    Createmethod(10, SteamUserstats, StoreStats1);
    Createmethod(11, SteamUserstats, GetAchievementIcon1);
    Createmethod(12, SteamUserstats, GetAchievementDisplayAttribute1);
    Createmethod(13, SteamUserstats, IndicateAchievementProgress1);
    Createmethod(14, SteamUserstats, RequestUserStats);
    Createmethod(15, SteamUserstats, GetUserStat1);
    Createmethod(16, SteamUserstats, GetUserStat2);
    Createmethod(17, SteamUserstats, GetUserAchievement);
    Createmethod(18, SteamUserstats, GetUserAchievementAndUnlockTime);
    Createmethod(19, SteamUserstats, ResetAllStats);
    Createmethod(20, SteamUserstats, FindOrCreateLeaderboard);
    Createmethod(21, SteamUserstats, FindLeaderboard);
    Createmethod(22, SteamUserstats, GetLeaderboardName);
    Createmethod(23, SteamUserstats, GetLeaderboardEntryCount);
    Createmethod(24, SteamUserstats, GetLeaderboardSortMethod);
    Createmethod(25, SteamUserstats, GetLeaderboardDisplayType);
    Createmethod(26, SteamUserstats, DownloadLeaderboardEntries);
    Createmethod(27, SteamUserstats, DownloadLeaderboardEntriesForUsers);
    Createmethod(28, SteamUserstats, GetDownloadedLeaderboardEntry);
    Createmethod(29, SteamUserstats, UploadLeaderboardScore1);
    Createmethod(30, SteamUserstats, AttachLeaderboardUGC);
    Createmethod(31, SteamUserstats, GetNumberOfCurrentPlayers);
    Createmethod(32, SteamUserstats, RequestGlobalAchievementPercentages);
    Createmethod(33, SteamUserstats, GetMostAchievedAchievementInfo);
    Createmethod(34, SteamUserstats, GetNextMostAchievedAchievementInfo);
    Createmethod(35, SteamUserstats, GetAchievementAchievedPercent);
    Createmethod(36, SteamUserstats, RequestGlobalStats);
    Createmethod(37, SteamUserstats, GetGlobalStat1);
    Createmethod(38, SteamUserstats, GetGlobalStat2);
    Createmethod(39, SteamUserstats, GetGlobalStatHistory1);
    Createmethod(40, SteamUserstats, GetGlobalStatHistory2);
};
SteamUserstats011::SteamUserstats011() 
{
    Createmethod(0, SteamUserstats, RequestCurrentStats1);
    Createmethod(1, SteamUserstats, GetStat1);
    Createmethod(2, SteamUserstats, GetStat2);
    Createmethod(3, SteamUserstats, SetStat1);
    Createmethod(4, SteamUserstats, SetStat2);
    Createmethod(5, SteamUserstats, UpdateAvgRateStat2);
    Createmethod(6, SteamUserstats, GetAchievement1);
    Createmethod(7, SteamUserstats, SetAchievement1);
    Createmethod(8, SteamUserstats, ClearAchievement1);
    Createmethod(9, SteamUserstats, GetAchievementAndUnlockTime);
    Createmethod(10, SteamUserstats, StoreStats1);
    Createmethod(11, SteamUserstats, GetAchievementIcon1);
    Createmethod(12, SteamUserstats, GetAchievementDisplayAttribute1);
    Createmethod(13, SteamUserstats, IndicateAchievementProgress1);
    Createmethod(14, SteamUserstats, GetNumAchievements);
    Createmethod(15, SteamUserstats, GetAchievementName1);
    Createmethod(16, SteamUserstats, RequestUserStats);
    Createmethod(17, SteamUserstats, GetUserStat1);
    Createmethod(18, SteamUserstats, GetUserStat2);
    Createmethod(19, SteamUserstats, GetUserAchievement);
    Createmethod(20, SteamUserstats, GetUserAchievementAndUnlockTime);
    Createmethod(21, SteamUserstats, ResetAllStats);
    Createmethod(22, SteamUserstats, FindOrCreateLeaderboard);
    Createmethod(23, SteamUserstats, FindLeaderboard);
    Createmethod(24, SteamUserstats, GetLeaderboardName);
    Createmethod(25, SteamUserstats, GetLeaderboardEntryCount);
    Createmethod(26, SteamUserstats, GetLeaderboardSortMethod);
    Createmethod(27, SteamUserstats, GetLeaderboardDisplayType);
    Createmethod(28, SteamUserstats, DownloadLeaderboardEntries);
    Createmethod(29, SteamUserstats, DownloadLeaderboardEntriesForUsers);
    Createmethod(30, SteamUserstats, GetDownloadedLeaderboardEntry);
    Createmethod(31, SteamUserstats, UploadLeaderboardScore1);
    Createmethod(32, SteamUserstats, AttachLeaderboardUGC);
    Createmethod(33, SteamUserstats, GetNumberOfCurrentPlayers);
    Createmethod(34, SteamUserstats, RequestGlobalAchievementPercentages);
    Createmethod(35, SteamUserstats, GetMostAchievedAchievementInfo);
    Createmethod(36, SteamUserstats, GetNextMostAchievedAchievementInfo);
    Createmethod(37, SteamUserstats, GetAchievementAchievedPercent);
    Createmethod(38, SteamUserstats, RequestGlobalStats);
    Createmethod(39, SteamUserstats, GetGlobalStat1);
    Createmethod(40, SteamUserstats, GetGlobalStat2);
    Createmethod(41, SteamUserstats, GetGlobalStatHistory1);
    Createmethod(42, SteamUserstats, GetGlobalStatHistory2);
};

struct Steamuserstatsloader
{
    Steamuserstatsloader()
    {
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats001", new SteamUserstats001);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats002", new SteamUserstats002);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats003", new SteamUserstats003);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats004", new SteamUserstats004);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats005", new SteamUserstats005);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats006", new SteamUserstats006);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats007", new SteamUserstats007);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats008", new SteamUserstats008);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats009", new SteamUserstats009);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats010", new SteamUserstats010);
        Interfacemanager::Addinterface(STEAM_USERSTATS, "SteamUserstats011", new SteamUserstats011);
    }
};
static Steamuserstatsloader Interfaceloader;

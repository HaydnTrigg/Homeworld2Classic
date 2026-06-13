#if 0
#ifndef __ISTEAMUSERSTATS_H__
#define __ISTEAMUSERSTATS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    k_cchStatNameMax = 128, // 0x0080
};

enum ELeaderboardDataRequest
{
    k_ELeaderboardDataRequestGlobal = 0,
    k_ELeaderboardDataRequestGlobalAroundUser,
    k_ELeaderboardDataRequestFriends,
    k_ELeaderboardDataRequestUsers,
};

enum ELeaderboardSortMethod
{
    k_ELeaderboardSortMethodNone = 0,
    k_ELeaderboardSortMethodAscending,
    k_ELeaderboardSortMethodDescending,
};

enum ELeaderboardDisplayType
{
    k_ELeaderboardDisplayTypeNone = 0,
    k_ELeaderboardDisplayTypeNumeric,
    k_ELeaderboardDisplayTypeTimeSeconds,
    k_ELeaderboardDisplayTypeTimeMilliSeconds,
};

enum ELeaderboardUploadScoreMethod
{
    k_ELeaderboardUploadScoreMethodNone = 0,
    k_ELeaderboardUploadScoreMethodKeepBest,
    k_ELeaderboardUploadScoreMethodForceUpdate,
};

/* ---------- definitions */

struct LeaderboardEntry_t
{
    CSteamID m_steamIDUser; // 0x0
    __int32 m_nGlobalRank; // 0x8
    __int32 m_nScore; // 0xC
    __int32 m_cDetails; // 0x10
    unsigned long long m_hUGC; // 0x18
    LeaderboardEntry_t(); /* compiler_generated() */
};
static_assert(sizeof(LeaderboardEntry_t) == 32, "Invalid LeaderboardEntry_t size");

class ISteamUserStats
{
public:
    virtual bool RequestCurrentStats() = 0;
    virtual bool GetStat(char const *, float *) = 0;
    virtual bool GetStat(char const *, __int32 *) = 0;
    virtual bool SetStat(char const *, float) = 0;
    virtual bool SetStat(char const *, __int32) = 0;
    virtual bool UpdateAvgRateStat(char const *, float, double) = 0;
    virtual bool GetAchievement(char const *, bool *) = 0;
    virtual bool SetAchievement(char const *) = 0;
    virtual bool ClearAchievement(char const *) = 0;
    virtual bool GetAchievementAndUnlockTime(char const *, bool *, unsigned __int32 *) = 0;
    virtual bool StoreStats() = 0;
    virtual __int32 GetAchievementIcon(char const *) = 0;
    virtual char const *GetAchievementDisplayAttribute(char const *, char const *) = 0;
    virtual bool IndicateAchievementProgress(char const *, unsigned __int32, unsigned __int32) = 0;
    virtual unsigned __int32 GetNumAchievements() = 0;
    virtual char const *GetAchievementName(unsigned __int32) = 0;
    virtual unsigned long long RequestUserStats(CSteamID) = 0;
    virtual bool GetUserStat(CSteamID, char const *, float *) = 0;
    virtual bool GetUserStat(CSteamID, char const *, __int32 *) = 0;
    virtual bool GetUserAchievement(CSteamID, char const *, bool *) = 0;
    virtual bool GetUserAchievementAndUnlockTime(CSteamID, char const *, bool *, unsigned __int32 *) = 0;
    virtual bool ResetAllStats(bool) = 0;
    virtual unsigned long long FindOrCreateLeaderboard(char const *, ELeaderboardSortMethod, ELeaderboardDisplayType) = 0;
    virtual unsigned long long FindLeaderboard(char const *) = 0;
    virtual char const *GetLeaderboardName(unsigned long long) = 0;
    virtual __int32 GetLeaderboardEntryCount(unsigned long long) = 0;
    virtual ELeaderboardSortMethod GetLeaderboardSortMethod(unsigned long long) = 0;
    virtual ELeaderboardDisplayType GetLeaderboardDisplayType(unsigned long long) = 0;
    virtual unsigned long long DownloadLeaderboardEntries(unsigned long long, ELeaderboardDataRequest, __int32, __int32) = 0;
    virtual unsigned long long DownloadLeaderboardEntriesForUsers(unsigned long long, CSteamID *, __int32) = 0;
    virtual bool GetDownloadedLeaderboardEntry(unsigned long long, __int32, LeaderboardEntry_t *, __int32 *, __int32) = 0;
    virtual unsigned long long UploadLeaderboardScore(unsigned long long, ELeaderboardUploadScoreMethod, __int32, __int32 const *, __int32) = 0;
    virtual unsigned long long AttachLeaderboardUGC(unsigned long long, unsigned long long) = 0;
    virtual unsigned long long GetNumberOfCurrentPlayers() = 0;
    virtual unsigned long long RequestGlobalAchievementPercentages() = 0;
    virtual __int32 GetMostAchievedAchievementInfo(char *, unsigned __int32, float *, bool *) = 0;
    virtual __int32 GetNextMostAchievedAchievementInfo(__int32, char *, unsigned __int32, float *, bool *) = 0;
    virtual bool GetAchievementAchievedPercent(char const *, float *) = 0;
    virtual unsigned long long RequestGlobalStats(__int32) = 0;
    virtual bool GetGlobalStat(char const *, double *) = 0;
    virtual bool GetGlobalStat(char const *, long long *) = 0;
    virtual __int32 GetGlobalStatHistory(char const *, double *, unsigned __int32) = 0;
    virtual __int32 GetGlobalStatHistory(char const *, long long *, unsigned __int32) = 0;
    ISteamUserStats(ISteamUserStats const &); /* compiler_generated() */
    ISteamUserStats(); /* compiler_generated() */
    ISteamUserStats &operator=(ISteamUserStats const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamUserStats) == 4, "Invalid ISteamUserStats size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUSERSTATS_H__
/* combined */
#ifndef __ISTEAMUSERSTATS_H__
#define __ISTEAMUSERSTATS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    k_cchStatNameMax = 128, // 0x0080
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUSERSTATS_H__
/* combined */
#ifndef __ISTEAMUSERSTATS_H__
#define __ISTEAMUSERSTATS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    k_cchStatNameMax = 128, // 0x0080
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUSERSTATS_H__
#endif

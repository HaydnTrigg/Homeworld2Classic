#if 0
#ifndef __STEAMFUNCS_H__
#define __STEAMFUNCS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamFuncs
{
private:
    static unsigned __int32 const HW1HDAppID;
    static unsigned __int32 const HW2HDAppID;
    static bool bNoSteam;
    static bool GSteamworksInitialized;
    static bool GSteamworksStatsReceived;
public:
    static ISteamUser *pSteamUser;
    static ISteamUtils *pSteamUtils;
    static ISteamUserStats *pSteamUserStats;
    static ISteamScreenshots *pSteamScreenshots;
    static ISteamApps *pSteamApps;
    static bool Startup();
    static bool Shutdown();
    static bool IsNoSteamEnabled();
    static bool IsSteamworksInitialized();
    static bool AreSteamworksStatsRecieved();
    static void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition);
    static char const *GetSteamUILanguage();
    static char const *GetCurrentGameLanguage();
    static bool BIsSubscribed();
    static bool BOwnsHW1HDDLC();
    static bool BOwnsHW2HDDLC();
    static bool SetAchievement(char const *pchName);
    static bool GetStat(char const *pchName, float *pData);
    static bool GetStat(char const *pchName, __int32 *pData);
    static bool SetStat(char const *pchName, float fData);
    static bool SetStat(char const *pchName, __int32 nData);
    static unsigned __int32 WriteScreenshot(void *pubRGB, unsigned __int32 cubRGB, __int32 nWidth, __int32 nHeight);
    static bool SetLocation(unsigned __int32 hScreenshot, char const *pchLocation);
    static void HookScreenshots(bool bHook);
};
static_assert(sizeof(SteamFuncs) == 1, "Invalid SteamFuncs size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STEAMFUNCS_H__
#endif

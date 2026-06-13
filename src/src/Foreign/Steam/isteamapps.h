#if 0
#ifndef __ISTEAMAPPS_H__
#define __ISTEAMAPPS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ISteamApps
{
public:
    virtual bool BIsSubscribed() = 0;
    virtual bool BIsLowViolence() = 0;
    virtual bool BIsCybercafe() = 0;
    virtual bool BIsVACBanned() = 0;
    virtual char const *GetCurrentGameLanguage() = 0;
    virtual char const *GetAvailableGameLanguages() = 0;
    virtual bool BIsSubscribedApp(unsigned __int32) = 0;
    virtual bool BIsDlcInstalled(unsigned __int32) = 0;
    virtual unsigned __int32 GetEarliestPurchaseUnixTime(unsigned __int32) = 0;
    virtual bool BIsSubscribedFromFreeWeekend() = 0;
    virtual __int32 GetDLCCount() = 0;
    virtual bool BGetDLCDataByIndex(__int32, unsigned __int32 *, bool *, char *, __int32) = 0;
    virtual void InstallDLC(unsigned __int32) = 0;
    virtual void UninstallDLC(unsigned __int32) = 0;
    virtual void RequestAppProofOfPurchaseKey(unsigned __int32) = 0;
    virtual bool GetCurrentBetaName(char *, __int32) = 0;
    virtual bool MarkContentCorrupt(bool) = 0;
    virtual unsigned __int32 GetInstalledDepots(unsigned __int32, unsigned __int32 *, unsigned __int32) = 0;
    virtual unsigned __int32 GetAppInstallDir(unsigned __int32, char *, unsigned __int32) = 0;
    virtual bool BIsAppInstalled(unsigned __int32) = 0;
    virtual CSteamID GetAppOwner() = 0;
    virtual char const *GetLaunchQueryParam(char const *) = 0;
    ISteamApps(ISteamApps const &); /* compiler_generated() */
    ISteamApps(); /* compiler_generated() */
    ISteamApps &operator=(ISteamApps const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamApps) == 4, "Invalid ISteamApps size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMAPPS_H__
/* combined */
#ifndef __ISTEAMAPPS_H__
#define __ISTEAMAPPS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMAPPS_H__
/* combined */
#ifndef __ISTEAMAPPS_H__
#define __ISTEAMAPPS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMAPPS_H__
#endif

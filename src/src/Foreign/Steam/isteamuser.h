#if 0
#ifndef __ISTEAMUSER_H__
#define __ISTEAMUSER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ISteamUser
{
public:
    virtual __int32 GetHSteamUser() = 0;
    virtual bool BLoggedOn() = 0;
    virtual CSteamID GetSteamID() = 0;
    virtual __int32 InitiateGameConnection(void *, __int32, CSteamID, unsigned __int32, unsigned short, bool) = 0;
    virtual void TerminateGameConnection(unsigned __int32, unsigned short) = 0;
    virtual void TrackAppUsageEvent(CGameID, __int32, char const *) = 0;
    virtual bool GetUserDataFolder(char *, __int32) = 0;
    virtual void StartVoiceRecording() = 0;
    virtual void StopVoiceRecording() = 0;
    virtual EVoiceResult GetAvailableVoice(unsigned __int32 *, unsigned __int32 *, unsigned __int32) = 0;
    virtual EVoiceResult GetVoice(bool, void *, unsigned __int32, unsigned __int32 *, bool, void *, unsigned __int32, unsigned __int32 *, unsigned __int32) = 0;
    virtual EVoiceResult DecompressVoice(void const *, unsigned __int32, void *, unsigned __int32, unsigned __int32 *, unsigned __int32) = 0;
    virtual unsigned __int32 GetVoiceOptimalSampleRate() = 0;
    virtual unsigned __int32 GetAuthSessionTicket(void *, __int32, unsigned __int32 *) = 0;
    virtual EBeginAuthSessionResult BeginAuthSession(void const *, __int32, CSteamID) = 0;
    virtual void EndAuthSession(CSteamID) = 0;
    virtual void CancelAuthTicket(unsigned __int32) = 0;
    virtual EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID, unsigned __int32) = 0;
    virtual bool BIsBehindNAT() = 0;
    virtual void AdvertiseGame(CSteamID, unsigned __int32, unsigned short) = 0;
    virtual unsigned long long RequestEncryptedAppTicket(void *, __int32) = 0;
    virtual bool GetEncryptedAppTicket(void *, __int32, unsigned __int32 *) = 0;
    virtual __int32 GetGameBadgeLevel(__int32, bool) = 0;
    virtual __int32 GetPlayerSteamLevel() = 0;
    ISteamUser(ISteamUser const &); /* compiler_generated() */
    ISteamUser(); /* compiler_generated() */
    ISteamUser &operator=(ISteamUser const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamUser) == 4, "Invalid ISteamUser size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUSER_H__
/* combined */
#ifndef __ISTEAMUSER_H__
#define __ISTEAMUSER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUSER_H__
/* combined */
#ifndef __ISTEAMUSER_H__
#define __ISTEAMUSER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ISteamUser
{
public:
    virtual __int32 GetHSteamUser() = 0;
    virtual bool BLoggedOn() = 0;
    virtual CSteamID GetSteamID() = 0;
    virtual __int32 InitiateGameConnection(void *, __int32, CSteamID, unsigned __int32, unsigned short, bool) = 0;
    virtual void TerminateGameConnection(unsigned __int32, unsigned short) = 0;
    virtual void TrackAppUsageEvent(CGameID, __int32, char const *) = 0;
    virtual bool GetUserDataFolder(char *, __int32) = 0;
    virtual void StartVoiceRecording() = 0;
    virtual void StopVoiceRecording() = 0;
    virtual EVoiceResult GetAvailableVoice(unsigned __int32 *, unsigned __int32 *, unsigned __int32) = 0;
    virtual EVoiceResult GetVoice(bool, void *, unsigned __int32, unsigned __int32 *, bool, void *, unsigned __int32, unsigned __int32 *, unsigned __int32) = 0;
    virtual EVoiceResult DecompressVoice(void const *, unsigned __int32, void *, unsigned __int32, unsigned __int32 *, unsigned __int32) = 0;
    virtual unsigned __int32 GetVoiceOptimalSampleRate() = 0;
    virtual unsigned __int32 GetAuthSessionTicket(void *, __int32, unsigned __int32 *) = 0;
    virtual EBeginAuthSessionResult BeginAuthSession(void const *, __int32, CSteamID) = 0;
    virtual void EndAuthSession(CSteamID) = 0;
    virtual void CancelAuthTicket(unsigned __int32) = 0;
    virtual EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID, unsigned __int32) = 0;
    virtual bool BIsBehindNAT() = 0;
    virtual void AdvertiseGame(CSteamID, unsigned __int32, unsigned short) = 0;
    virtual unsigned long long RequestEncryptedAppTicket(void *, __int32) = 0;
    virtual bool GetEncryptedAppTicket(void *, __int32, unsigned __int32 *) = 0;
    virtual __int32 GetGameBadgeLevel(__int32, bool) = 0;
    virtual __int32 GetPlayerSteamLevel() = 0;
    ISteamUser(ISteamUser const &); /* compiler_generated() */
    ISteamUser(); /* compiler_generated() */
    ISteamUser &operator=(ISteamUser const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamUser) == 4, "Invalid ISteamUser size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUSER_H__
#endif

#if 0
#ifndef __ISTEAMUTILS_H__
#define __ISTEAMUTILS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ESteamAPICallFailure
{
    k_ESteamAPICallFailureNone = -1,
    k_ESteamAPICallFailureSteamGone = 0,
    k_ESteamAPICallFailureNetworkFailure,
    k_ESteamAPICallFailureInvalidHandle,
    k_ESteamAPICallFailureMismatchedCallback,
};

enum EGamepadTextInputMode
{
    k_EGamepadTextInputModeNormal = 0,
    k_EGamepadTextInputModePassword,
};

enum EGamepadTextInputLineMode
{
    k_EGamepadTextInputLineModeSingleLine = 0,
    k_EGamepadTextInputLineModeMultipleLines,
};

/* ---------- definitions */

class ISteamUtils
{
public:
    virtual unsigned __int32 GetSecondsSinceAppActive() = 0;
    virtual unsigned __int32 GetSecondsSinceComputerActive() = 0;
    virtual EUniverse GetConnectedUniverse() = 0;
    virtual unsigned __int32 GetServerRealTime() = 0;
    virtual char const *GetIPCountry() = 0;
    virtual bool GetImageSize(__int32, unsigned __int32 *, unsigned __int32 *) = 0;
    virtual bool GetImageRGBA(__int32, unsigned char *, __int32) = 0;
    virtual bool GetCSERIPPort(unsigned __int32 *, unsigned short *) = 0;
    virtual unsigned char GetCurrentBatteryPower() = 0;
    virtual unsigned __int32 GetAppID() = 0;
    virtual void SetOverlayNotificationPosition(ENotificationPosition) = 0;
    virtual bool IsAPICallCompleted(unsigned long long, bool *) = 0;
    virtual ESteamAPICallFailure GetAPICallFailureReason(unsigned long long) = 0;
    virtual bool GetAPICallResult(unsigned long long, void *, __int32, __int32, bool *) = 0;
    virtual void RunFrame() = 0;
    virtual unsigned __int32 GetIPCCallCount() = 0;
    virtual void SetWarningMessageHook(void (*)(__int32, char const *)) = 0;
    virtual bool IsOverlayEnabled() = 0;
    virtual bool BOverlayNeedsPresent() = 0;
    virtual unsigned long long CheckFileSignature(char const *) = 0;
    virtual bool ShowGamepadTextInput(EGamepadTextInputMode, EGamepadTextInputLineMode, char const *, unsigned __int32, char const *) = 0;
    virtual unsigned __int32 GetEnteredGamepadTextLength() = 0;
    virtual bool GetEnteredGamepadTextInput(char *, unsigned __int32) = 0;
    virtual char const *GetSteamUILanguage() = 0;
    virtual bool IsSteamRunningInVR() = 0;
    ISteamUtils(ISteamUtils const &); /* compiler_generated() */
    ISteamUtils(); /* compiler_generated() */
    ISteamUtils &operator=(ISteamUtils const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamUtils) == 4, "Invalid ISteamUtils size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUTILS_H__
/* combined */
#ifndef __ISTEAMUTILS_H__
#define __ISTEAMUTILS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUTILS_H__
/* combined */
#ifndef __ISTEAMUTILS_H__
#define __ISTEAMUTILS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ESteamAPICallFailure
{
    k_ESteamAPICallFailureNone = -1,
    k_ESteamAPICallFailureSteamGone = 0,
    k_ESteamAPICallFailureNetworkFailure,
    k_ESteamAPICallFailureInvalidHandle,
    k_ESteamAPICallFailureMismatchedCallback,
};

enum EGamepadTextInputMode
{
    k_EGamepadTextInputModeNormal = 0,
    k_EGamepadTextInputModePassword,
};

enum EGamepadTextInputLineMode
{
    k_EGamepadTextInputLineModeSingleLine = 0,
    k_EGamepadTextInputLineModeMultipleLines,
};

/* ---------- definitions */

class ISteamUtils
{
public:
    virtual unsigned __int32 GetSecondsSinceAppActive() = 0;
    virtual unsigned __int32 GetSecondsSinceComputerActive() = 0;
    virtual EUniverse GetConnectedUniverse() = 0;
    virtual unsigned __int32 GetServerRealTime() = 0;
    virtual char const *GetIPCountry() = 0;
    virtual bool GetImageSize(__int32, unsigned __int32 *, unsigned __int32 *) = 0;
    virtual bool GetImageRGBA(__int32, unsigned char *, __int32) = 0;
    virtual bool GetCSERIPPort(unsigned __int32 *, unsigned short *) = 0;
    virtual unsigned char GetCurrentBatteryPower() = 0;
    virtual unsigned __int32 GetAppID() = 0;
    virtual void SetOverlayNotificationPosition(ENotificationPosition) = 0;
    virtual bool IsAPICallCompleted(unsigned long long, bool *) = 0;
    virtual ESteamAPICallFailure GetAPICallFailureReason(unsigned long long) = 0;
    virtual bool GetAPICallResult(unsigned long long, void *, __int32, __int32, bool *) = 0;
    virtual void RunFrame() = 0;
    virtual unsigned __int32 GetIPCCallCount() = 0;
    virtual void SetWarningMessageHook(void (*)(__int32, char const *)) = 0;
    virtual bool IsOverlayEnabled() = 0;
    virtual bool BOverlayNeedsPresent() = 0;
    virtual unsigned long long CheckFileSignature(char const *) = 0;
    virtual bool ShowGamepadTextInput(EGamepadTextInputMode, EGamepadTextInputLineMode, char const *, unsigned __int32, char const *) = 0;
    virtual unsigned __int32 GetEnteredGamepadTextLength() = 0;
    virtual bool GetEnteredGamepadTextInput(char *, unsigned __int32) = 0;
    virtual char const *GetSteamUILanguage() = 0;
    virtual bool IsSteamRunningInVR() = 0;
    ISteamUtils(ISteamUtils const &); /* compiler_generated() */
    ISteamUtils(); /* compiler_generated() */
    ISteamUtils &operator=(ISteamUtils const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamUtils) == 4, "Invalid ISteamUtils size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMUTILS_H__
#endif

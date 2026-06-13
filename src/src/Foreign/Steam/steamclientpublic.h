#if 0
#ifndef __STEAMCLIENTPUBLIC_H__
#define __STEAMCLIENTPUBLIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EResult
{
    k_EResultOK = 1, // 0x0001
    k_EResultFail = 2, // 0x0002
    k_EResultNoConnection = 3, // 0x0003
    k_EResultInvalidPassword = 5, // 0x0005
    k_EResultLoggedInElsewhere = 6, // 0x0006
    k_EResultInvalidProtocolVer = 7, // 0x0007
    k_EResultInvalidParam = 8, // 0x0008
    k_EResultFileNotFound = 9, // 0x0009
    k_EResultBusy = 10, // 0x000A
    k_EResultInvalidState = 11, // 0x000B
    k_EResultInvalidName = 12, // 0x000C
    k_EResultInvalidEmail = 13, // 0x000D
    k_EResultDuplicateName = 14, // 0x000E
    k_EResultAccessDenied = 15, // 0x000F
    k_EResultTimeout = 16, // 0x0010
    k_EResultBanned = 17, // 0x0011
    k_EResultAccountNotFound = 18, // 0x0012
    k_EResultInvalidSteamID = 19, // 0x0013
    k_EResultServiceUnavailable = 20, // 0x0014
    k_EResultNotLoggedOn = 21, // 0x0015
    k_EResultPending = 22, // 0x0016
    k_EResultEncryptionFailure = 23, // 0x0017
    k_EResultInsufficientPrivilege = 24, // 0x0018
    k_EResultLimitExceeded = 25, // 0x0019
    k_EResultRevoked = 26, // 0x001A
    k_EResultExpired = 27, // 0x001B
    k_EResultAlreadyRedeemed = 28, // 0x001C
    k_EResultDuplicateRequest = 29, // 0x001D
    k_EResultAlreadyOwned = 30, // 0x001E
    k_EResultIPNotFound = 31, // 0x001F
    k_EResultPersistFailed = 32, // 0x0020 ' '
    k_EResultLockingFailed = 33, // 0x0021 '!'
    k_EResultLogonSessionReplaced = 34, // 0x0022 '"'
    k_EResultConnectFailed = 35, // 0x0023 '#'
    k_EResultHandshakeFailed = 36, // 0x0024 '$'
    k_EResultIOFailure = 37, // 0x0025 '%'
    k_EResultRemoteDisconnect = 38, // 0x0026 '&'
    k_EResultShoppingCartNotFound = 39, // 0x0027 '''
    k_EResultBlocked = 40, // 0x0028 '('
    k_EResultIgnored = 41, // 0x0029 ')'
    k_EResultNoMatch = 42, // 0x002A '*'
    k_EResultAccountDisabled = 43, // 0x002B '+'
    k_EResultServiceReadOnly = 44, // 0x002C ','
    k_EResultAccountNotFeatured = 45, // 0x002D '-'
    k_EResultAdministratorOK = 46, // 0x002E '.'
    k_EResultContentVersion = 47, // 0x002F '/'
    k_EResultTryAnotherCM = 48, // 0x0030 '0'
    k_EResultPasswordRequiredToKickSession = 49, // 0x0031 '1'
    k_EResultAlreadyLoggedInElsewhere = 50, // 0x0032 '2'
    k_EResultSuspended = 51, // 0x0033 '3'
    k_EResultCancelled = 52, // 0x0034 '4'
    k_EResultDataCorruption = 53, // 0x0035 '5'
    k_EResultDiskFull = 54, // 0x0036 '6'
    k_EResultRemoteCallFailed = 55, // 0x0037 '7'
    k_EResultPasswordUnset = 56, // 0x0038 '8'
    k_EResultExternalAccountUnlinked = 57, // 0x0039 '9'
    k_EResultPSNTicketInvalid = 58, // 0x003A ':'
    k_EResultExternalAccountAlreadyLinked = 59, // 0x003B ';'
    k_EResultRemoteFileConflict = 60, // 0x003C '<'
    k_EResultIllegalPassword = 61, // 0x003D '='
    k_EResultSameAsPreviousValue = 62, // 0x003E '>'
    k_EResultAccountLogonDenied = 63, // 0x003F '?'
    k_EResultCannotUseOldPassword = 64, // 0x0040 '@'
    k_EResultInvalidLoginAuthCode = 65, // 0x0041 'A'
    k_EResultAccountLogonDeniedNoMail = 66, // 0x0042 'B'
    k_EResultHardwareNotCapableOfIPT = 67, // 0x0043 'C'
    k_EResultIPTInitError = 68, // 0x0044 'D'
    k_EResultParentalControlRestricted = 69, // 0x0045 'E'
    k_EResultFacebookQueryError = 70, // 0x0046 'F'
    k_EResultExpiredLoginAuthCode = 71, // 0x0047 'G'
    k_EResultIPLoginRestrictionFailed = 72, // 0x0048 'H'
    k_EResultAccountLockedDown = 73, // 0x0049 'I'
    k_EResultAccountLogonDeniedVerifiedEmailRequired = 74, // 0x004A 'J'
    k_EResultNoMatchingURL = 75, // 0x004B 'K'
    k_EResultBadResponse = 76, // 0x004C 'L'
    k_EResultRequirePasswordReEntry = 77, // 0x004D 'M'
    k_EResultValueOutOfRange = 78, // 0x004E 'N'
    k_EResultUnexpectedError = 79, // 0x004F 'O'
    k_EResultDisabled = 80, // 0x0050 'P'
    k_EResultInvalidCEGSubmission = 81, // 0x0051 'Q'
    k_EResultRestrictedDevice = 82, // 0x0052 'R'
    k_EResultRegionLocked = 83, // 0x0053 'S'
    k_EResultRateLimitExceeded = 84, // 0x0054 'T'
    k_EResultAccountLoginDeniedNeedTwoFactor = 85, // 0x0055 'U'
    k_EResultItemDeleted = 86, // 0x0056 'V'
    k_EResultAccountLoginDeniedThrottle = 87, // 0x0057 'W'
    k_EResultTwoFactorCodeMismatch = 88, // 0x0058 'X'
    k_EResultTwoFactorActivationCodeMismatch = 89, // 0x0059 'Y'
};

enum EVoiceResult
{
    k_EVoiceResultOK = 0,
    k_EVoiceResultNotInitialized,
    k_EVoiceResultNotRecording,
    k_EVoiceResultNoData,
    k_EVoiceResultBufferTooSmall,
    k_EVoiceResultDataCorrupted,
    k_EVoiceResultRestricted,
    k_EVoiceResultUnsupportedCodec,
};

enum EBeginAuthSessionResult
{
    k_EBeginAuthSessionResultOK = 0,
    k_EBeginAuthSessionResultInvalidTicket,
    k_EBeginAuthSessionResultDuplicateRequest,
    k_EBeginAuthSessionResultInvalidVersion,
    k_EBeginAuthSessionResultGameMismatch,
    k_EBeginAuthSessionResultExpiredTicket,
};

enum EUserHasLicenseForAppResult
{
    k_EUserHasLicenseResultHasLicense = 0,
    k_EUserHasLicenseResultDoesNotHaveLicense,
    k_EUserHasLicenseResultNoAuth,
};

enum EAccountType
{
    k_EAccountTypeInvalid = 0,
    k_EAccountTypeIndividual,
    k_EAccountTypeMultiseat,
    k_EAccountTypeGameServer,
    k_EAccountTypeAnonGameServer,
    k_EAccountTypePending,
    k_EAccountTypeContentServer,
    k_EAccountTypeClan,
    k_EAccountTypeChat,
    k_EAccountTypeConsoleUser,
    k_EAccountTypeAnonUser,
    k_EAccountTypeMax,
};

enum EChatEntryType
{
    k_EChatEntryTypeInvalid = 0, // 0x0000
    k_EChatEntryTypeChatMsg = 1, // 0x0001
    k_EChatEntryTypeTyping = 2, // 0x0002
    k_EChatEntryTypeInviteGame = 3, // 0x0003
    k_EChatEntryTypeEmote = 4, // 0x0004
    k_EChatEntryTypeLeftConversation = 6, // 0x0006
    k_EChatEntryTypeEntered = 7, // 0x0007
    k_EChatEntryTypeWasKicked = 8, // 0x0008
    k_EChatEntryTypeWasBanned = 9, // 0x0009
    k_EChatEntryTypeDisconnected = 10, // 0x000A
    k_EChatEntryTypeHistoricalChat = 11, // 0x000B
    k_EChatEntryTypeReserved1 = 12, // 0x000C
    k_EChatEntryTypeReserved2 = 13, // 0x000D
};

enum EChatSteamIDInstanceFlags
{
    k_EChatAccountInstanceMask = 4095, // 0x0FFF
    k_EChatInstanceFlagClan = 524288, // 0x00080000
    k_EChatInstanceFlagLobby = 262144, // 0x00040000
    k_EChatInstanceFlagMMSLobby = 131072, // 0x00020000
};

enum EMarketingMessageFlags
{
    k_EMarketingMessageFlagsNone = 0, // 0x0000
    k_EMarketingMessageFlagsHighPriority = 1, // 0x0001
    k_EMarketingMessageFlagsPlatformWindows = 2, // 0x0002
    k_EMarketingMessageFlagsPlatformMac = 4, // 0x0004
    k_EMarketingMessageFlagsPlatformLinux = 8, // 0x0008
    k_EMarketingMessageFlagsPlatformRestrictions = 14, // 0x000E
};

enum ENotificationPosition
{
    k_EPositionTopLeft = 0,
    k_EPositionTopRight,
    k_EPositionBottomLeft,
    k_EPositionBottomRight,
};

/* ---------- definitions */

class CSteamID
{
private:
    CSteamID(__int32);
    CSteamID(unsigned __int32);
public:
    CSteamID(char const *, EUniverse);
    _inline CSteamID(unsigned long long);
    CSteamID(unsigned __int32, unsigned __int32, EUniverse, EAccountType);
    CSteamID(unsigned __int32, EUniverse, EAccountType);
    CSteamID();
    void Set(unsigned __int32, EUniverse, EAccountType);
    void InstancedSet(unsigned __int32, unsigned __int32, EUniverse, EAccountType);
    void FullSet(unsigned long long, EUniverse, EAccountType);
    _inline void SetFromUint64(unsigned long long);
    void Clear();
    unsigned long long ConvertToUint64() const;
    unsigned long long GetStaticAccountKey() const;
    void CreateBlankAnonLogon(EUniverse);
    void CreateBlankAnonUserLogon(EUniverse);
    bool BBlankAnonAccount() const;
    bool BGameServerAccount() const;
    bool BPersistentGameServerAccount() const;
    bool BAnonGameServerAccount() const;
    bool BContentServerAccount() const;
    bool BClanAccount() const;
    bool BChatAccount() const;
    bool IsLobby() const;
    bool BIndividualAccount() const;
    bool BAnonAccount() const;
    bool BAnonUserAccount() const;
    bool BConsoleUserAccount() const;
    void SetAccountID(unsigned __int32);
    void SetAccountInstance(unsigned __int32);
    void ClearIndividualInstance();
    bool HasNoIndividualInstance() const;
    unsigned __int32 GetAccountID() const;
    unsigned __int32 GetUnAccountInstance() const;
    EAccountType GetEAccountType() const;
    EUniverse GetEUniverse() const;
    void SetEUniverse(EUniverse);
    bool IsValid() const;
    static char const *Render(unsigned long long);
    char const *Render() const;
    void SetFromString(char const *, EUniverse);
    bool SetFromStringStrict(char const *, EUniverse);
    bool SetFromSteam2String(char const *, EUniverse);
    bool operator==(CSteamID const &) const;
    bool operator!=(CSteamID const &) const;
    bool operator<(CSteamID const &) const;
    bool operator>(CSteamID const &) const;
    bool BValidExternalSteamID() const;
    union SteamID_t
    {
        struct SteamIDComponent_t
        {
            unsigned __int32 m_unAccountID : 32; // 0x0
            unsigned __int32 m_unAccountInstance : 20; // 0x4
            unsigned __int32 m_EAccountType : 4; // 0x4
            EUniverse m_EUniverse : 8; // 0x4
        };
        static_assert(sizeof(SteamIDComponent_t) == 8, "Invalid SteamIDComponent_t size");
        CSteamID::SteamID_t::SteamIDComponent_t m_comp; // 0x0
        unsigned long long m_unAll64Bits; // 0x0
    };
    static_assert(sizeof(SteamID_t) == 8, "Invalid SteamID_t size");
private:
    CSteamID::SteamID_t m_steamid; // 0x0
};
static_assert(sizeof(CSteamID) == 8, "Invalid CSteamID size");

class CGameID
{
public:
    CGameID(char const *);
    CGameID(unsigned __int32, unsigned __int32);
    CGameID(unsigned __int32);
    CGameID(__int32);
    CGameID(unsigned long long);
    CGameID();
    static char const *Render(unsigned long long);
    char const *Render() const;
    unsigned long long ToUint64() const;
    unsigned long long *GetUint64Ptr();
    void Set(unsigned long long);
    bool IsMod() const;
    bool IsShortcut() const;
    bool IsP2PFile() const;
    bool IsSteamApp() const;
    unsigned __int32 ModID() const;
    unsigned __int32 AppID() const;
    bool operator==(CGameID const &) const;
    bool operator!=(CGameID const &) const;
    bool operator<(CGameID const &) const;
    bool IsValid() const;
    void Reset();
    enum EGameIDType
    {
        k_EGameIDTypeApp = 0,
        k_EGameIDTypeGameMod,
        k_EGameIDTypeShortcut,
        k_EGameIDTypeP2P,
    };
    struct GameID_t
    {
        unsigned __int32 m_nAppID : 24; // 0x0
        unsigned __int32 m_nType : 8; // 0x0
        unsigned __int32 m_nModID : 32; // 0x4
    };
    static_assert(sizeof(GameID_t) == 8, "Invalid GameID_t size");
    union
    {
    private:
        unsigned long long m_ulGameID; // 0x0
        CGameID::GameID_t m_gameID; // 0x0
    };
};
static_assert(sizeof(CGameID) == 8, "Invalid CGameID size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_44AEE2(CSteamID *const, unsigned long long);
_inline CSteamID::CSteamID(unsigned long long) // 0x44AEE2
{
    mangled_assert("??0CSteamID@@QAE@_K@Z");
    todo("implement");
    _sub_44AEE2(this, arg);
}

_extern void _sub_44C032(CSteamID *const, unsigned long long);
_inline void CSteamID::SetFromUint64(unsigned long long) // 0x44C032
{
    mangled_assert("?SetFromUint64@CSteamID@@QAEX_K@Z");
    todo("implement");
    _sub_44C032(this, arg);
}

/* ---------- private code */

#endif // __STEAMCLIENTPUBLIC_H__
/* combined */
#ifndef __STEAMCLIENTPUBLIC_H__
#define __STEAMCLIENTPUBLIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EAccountType
{
    k_EAccountTypeInvalid = 0,
    k_EAccountTypeIndividual,
    k_EAccountTypeMultiseat,
    k_EAccountTypeGameServer,
    k_EAccountTypeAnonGameServer,
    k_EAccountTypePending,
    k_EAccountTypeContentServer,
    k_EAccountTypeClan,
    k_EAccountTypeChat,
    k_EAccountTypeConsoleUser,
    k_EAccountTypeAnonUser,
    k_EAccountTypeMax,
};

enum EChatSteamIDInstanceFlags
{
    k_EChatAccountInstanceMask = 4095, // 0x0FFF
    k_EChatInstanceFlagClan = 524288, // 0x00080000
    k_EChatInstanceFlagLobby = 262144, // 0x00040000
    k_EChatInstanceFlagMMSLobby = 131072, // 0x00020000
};

enum EMarketingMessageFlags
{
    k_EMarketingMessageFlagsNone = 0, // 0x0000
    k_EMarketingMessageFlagsHighPriority = 1, // 0x0001
    k_EMarketingMessageFlagsPlatformWindows = 2, // 0x0002
    k_EMarketingMessageFlagsPlatformMac = 4, // 0x0004
    k_EMarketingMessageFlagsPlatformLinux = 8, // 0x0008
    k_EMarketingMessageFlagsPlatformRestrictions = 14, // 0x000E
};

/* ---------- definitions */

class CSteamID
{
private:
    CSteamID(__int32);
    CSteamID(unsigned __int32);
public:
    CSteamID(char const *, EUniverse);
    CSteamID(unsigned long long);
    CSteamID(unsigned __int32, unsigned __int32, EUniverse, EAccountType);
    CSteamID(unsigned __int32, EUniverse, EAccountType);
    CSteamID();
    void Set(unsigned __int32, EUniverse, EAccountType);
    void InstancedSet(unsigned __int32, unsigned __int32, EUniverse, EAccountType);
    void FullSet(unsigned long long, EUniverse, EAccountType);
    void SetFromUint64(unsigned long long);
    void Clear();
    unsigned long long ConvertToUint64() const;
    unsigned long long GetStaticAccountKey() const;
    void CreateBlankAnonLogon(EUniverse);
    void CreateBlankAnonUserLogon(EUniverse);
    bool BBlankAnonAccount() const;
    bool BGameServerAccount() const;
    bool BPersistentGameServerAccount() const;
    bool BAnonGameServerAccount() const;
    bool BContentServerAccount() const;
    bool BClanAccount() const;
    bool BChatAccount() const;
    bool IsLobby() const;
    bool BIndividualAccount() const;
    bool BAnonAccount() const;
    bool BAnonUserAccount() const;
    bool BConsoleUserAccount() const;
    void SetAccountID(unsigned __int32);
    void SetAccountInstance(unsigned __int32);
    void ClearIndividualInstance();
    bool HasNoIndividualInstance() const;
    unsigned __int32 GetAccountID() const;
    unsigned __int32 GetUnAccountInstance() const;
    EAccountType GetEAccountType() const;
    EUniverse GetEUniverse() const;
    void SetEUniverse(EUniverse);
    bool IsValid() const;
    static char const *Render(unsigned long long);
    char const *Render() const;
    void SetFromString(char const *, EUniverse);
    bool SetFromStringStrict(char const *, EUniverse);
    bool SetFromSteam2String(char const *, EUniverse);
    bool operator==(CSteamID const &) const;
    bool operator!=(CSteamID const &) const;
    bool operator<(CSteamID const &) const;
    bool operator>(CSteamID const &) const;
    bool BValidExternalSteamID() const;
    union SteamID_t
    {
        struct SteamIDComponent_t
        {
            unsigned __int32 m_unAccountID : 32; // 0x0
            unsigned __int32 m_unAccountInstance : 20; // 0x4
            unsigned __int32 m_EAccountType : 4; // 0x4
            EUniverse m_EUniverse : 8; // 0x4
        };
        static_assert(sizeof(SteamIDComponent_t) == 8, "Invalid SteamIDComponent_t size");
        CSteamID::SteamID_t::SteamIDComponent_t m_comp; // 0x0
        unsigned long long m_unAll64Bits; // 0x0
    };
    static_assert(sizeof(SteamID_t) == 8, "Invalid SteamID_t size");
private:
    CSteamID::SteamID_t m_steamid; // 0x0
};
static_assert(sizeof(CSteamID) == 8, "Invalid CSteamID size");

class CGameID
{
public:
    CGameID(char const *);
    CGameID(unsigned __int32, unsigned __int32);
    CGameID(unsigned __int32);
    CGameID(__int32);
    CGameID(unsigned long long);
    CGameID();
    static char const *Render(unsigned long long);
    char const *Render() const;
    unsigned long long ToUint64() const;
    unsigned long long *GetUint64Ptr();
    void Set(unsigned long long);
    bool IsMod() const;
    bool IsShortcut() const;
    bool IsP2PFile() const;
    bool IsSteamApp() const;
    unsigned __int32 ModID() const;
    unsigned __int32 AppID() const;
    bool operator==(CGameID const &) const;
    bool operator!=(CGameID const &) const;
    bool operator<(CGameID const &) const;
    bool IsValid() const;
    void Reset();
    enum EGameIDType
    {
        k_EGameIDTypeApp = 0,
        k_EGameIDTypeGameMod,
        k_EGameIDTypeShortcut,
        k_EGameIDTypeP2P,
    };
    struct GameID_t
    {
        unsigned __int32 m_nAppID : 24; // 0x0
        unsigned __int32 m_nType : 8; // 0x0
        unsigned __int32 m_nModID : 32; // 0x4
    };
    static_assert(sizeof(GameID_t) == 8, "Invalid GameID_t size");
    union
    {
    private:
        unsigned long long m_ulGameID; // 0x0
        CGameID::GameID_t m_gameID; // 0x0
    };
};
static_assert(sizeof(CGameID) == 8, "Invalid CGameID size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STEAMCLIENTPUBLIC_H__
/* combined */
#ifndef __STEAMCLIENTPUBLIC_H__
#define __STEAMCLIENTPUBLIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EResult
{
    k_EResultOK = 1, // 0x0001
    k_EResultFail = 2, // 0x0002
    k_EResultNoConnection = 3, // 0x0003
    k_EResultInvalidPassword = 5, // 0x0005
    k_EResultLoggedInElsewhere = 6, // 0x0006
    k_EResultInvalidProtocolVer = 7, // 0x0007
    k_EResultInvalidParam = 8, // 0x0008
    k_EResultFileNotFound = 9, // 0x0009
    k_EResultBusy = 10, // 0x000A
    k_EResultInvalidState = 11, // 0x000B
    k_EResultInvalidName = 12, // 0x000C
    k_EResultInvalidEmail = 13, // 0x000D
    k_EResultDuplicateName = 14, // 0x000E
    k_EResultAccessDenied = 15, // 0x000F
    k_EResultTimeout = 16, // 0x0010
    k_EResultBanned = 17, // 0x0011
    k_EResultAccountNotFound = 18, // 0x0012
    k_EResultInvalidSteamID = 19, // 0x0013
    k_EResultServiceUnavailable = 20, // 0x0014
    k_EResultNotLoggedOn = 21, // 0x0015
    k_EResultPending = 22, // 0x0016
    k_EResultEncryptionFailure = 23, // 0x0017
    k_EResultInsufficientPrivilege = 24, // 0x0018
    k_EResultLimitExceeded = 25, // 0x0019
    k_EResultRevoked = 26, // 0x001A
    k_EResultExpired = 27, // 0x001B
    k_EResultAlreadyRedeemed = 28, // 0x001C
    k_EResultDuplicateRequest = 29, // 0x001D
    k_EResultAlreadyOwned = 30, // 0x001E
    k_EResultIPNotFound = 31, // 0x001F
    k_EResultPersistFailed = 32, // 0x0020 ' '
    k_EResultLockingFailed = 33, // 0x0021 '!'
    k_EResultLogonSessionReplaced = 34, // 0x0022 '"'
    k_EResultConnectFailed = 35, // 0x0023 '#'
    k_EResultHandshakeFailed = 36, // 0x0024 '$'
    k_EResultIOFailure = 37, // 0x0025 '%'
    k_EResultRemoteDisconnect = 38, // 0x0026 '&'
    k_EResultShoppingCartNotFound = 39, // 0x0027 '''
    k_EResultBlocked = 40, // 0x0028 '('
    k_EResultIgnored = 41, // 0x0029 ')'
    k_EResultNoMatch = 42, // 0x002A '*'
    k_EResultAccountDisabled = 43, // 0x002B '+'
    k_EResultServiceReadOnly = 44, // 0x002C ','
    k_EResultAccountNotFeatured = 45, // 0x002D '-'
    k_EResultAdministratorOK = 46, // 0x002E '.'
    k_EResultContentVersion = 47, // 0x002F '/'
    k_EResultTryAnotherCM = 48, // 0x0030 '0'
    k_EResultPasswordRequiredToKickSession = 49, // 0x0031 '1'
    k_EResultAlreadyLoggedInElsewhere = 50, // 0x0032 '2'
    k_EResultSuspended = 51, // 0x0033 '3'
    k_EResultCancelled = 52, // 0x0034 '4'
    k_EResultDataCorruption = 53, // 0x0035 '5'
    k_EResultDiskFull = 54, // 0x0036 '6'
    k_EResultRemoteCallFailed = 55, // 0x0037 '7'
    k_EResultPasswordUnset = 56, // 0x0038 '8'
    k_EResultExternalAccountUnlinked = 57, // 0x0039 '9'
    k_EResultPSNTicketInvalid = 58, // 0x003A ':'
    k_EResultExternalAccountAlreadyLinked = 59, // 0x003B ';'
    k_EResultRemoteFileConflict = 60, // 0x003C '<'
    k_EResultIllegalPassword = 61, // 0x003D '='
    k_EResultSameAsPreviousValue = 62, // 0x003E '>'
    k_EResultAccountLogonDenied = 63, // 0x003F '?'
    k_EResultCannotUseOldPassword = 64, // 0x0040 '@'
    k_EResultInvalidLoginAuthCode = 65, // 0x0041 'A'
    k_EResultAccountLogonDeniedNoMail = 66, // 0x0042 'B'
    k_EResultHardwareNotCapableOfIPT = 67, // 0x0043 'C'
    k_EResultIPTInitError = 68, // 0x0044 'D'
    k_EResultParentalControlRestricted = 69, // 0x0045 'E'
    k_EResultFacebookQueryError = 70, // 0x0046 'F'
    k_EResultExpiredLoginAuthCode = 71, // 0x0047 'G'
    k_EResultIPLoginRestrictionFailed = 72, // 0x0048 'H'
    k_EResultAccountLockedDown = 73, // 0x0049 'I'
    k_EResultAccountLogonDeniedVerifiedEmailRequired = 74, // 0x004A 'J'
    k_EResultNoMatchingURL = 75, // 0x004B 'K'
    k_EResultBadResponse = 76, // 0x004C 'L'
    k_EResultRequirePasswordReEntry = 77, // 0x004D 'M'
    k_EResultValueOutOfRange = 78, // 0x004E 'N'
    k_EResultUnexpectedError = 79, // 0x004F 'O'
    k_EResultDisabled = 80, // 0x0050 'P'
    k_EResultInvalidCEGSubmission = 81, // 0x0051 'Q'
    k_EResultRestrictedDevice = 82, // 0x0052 'R'
    k_EResultRegionLocked = 83, // 0x0053 'S'
    k_EResultRateLimitExceeded = 84, // 0x0054 'T'
    k_EResultAccountLoginDeniedNeedTwoFactor = 85, // 0x0055 'U'
    k_EResultItemDeleted = 86, // 0x0056 'V'
    k_EResultAccountLoginDeniedThrottle = 87, // 0x0057 'W'
    k_EResultTwoFactorCodeMismatch = 88, // 0x0058 'X'
    k_EResultTwoFactorActivationCodeMismatch = 89, // 0x0059 'Y'
};

enum EVoiceResult
{
    k_EVoiceResultOK = 0,
    k_EVoiceResultNotInitialized,
    k_EVoiceResultNotRecording,
    k_EVoiceResultNoData,
    k_EVoiceResultBufferTooSmall,
    k_EVoiceResultDataCorrupted,
    k_EVoiceResultRestricted,
    k_EVoiceResultUnsupportedCodec,
};

enum EBeginAuthSessionResult
{
    k_EBeginAuthSessionResultOK = 0,
    k_EBeginAuthSessionResultInvalidTicket,
    k_EBeginAuthSessionResultDuplicateRequest,
    k_EBeginAuthSessionResultInvalidVersion,
    k_EBeginAuthSessionResultGameMismatch,
    k_EBeginAuthSessionResultExpiredTicket,
};

enum EUserHasLicenseForAppResult
{
    k_EUserHasLicenseResultHasLicense = 0,
    k_EUserHasLicenseResultDoesNotHaveLicense,
    k_EUserHasLicenseResultNoAuth,
};

enum EAccountType
{
    k_EAccountTypeInvalid = 0,
    k_EAccountTypeIndividual,
    k_EAccountTypeMultiseat,
    k_EAccountTypeGameServer,
    k_EAccountTypeAnonGameServer,
    k_EAccountTypePending,
    k_EAccountTypeContentServer,
    k_EAccountTypeClan,
    k_EAccountTypeChat,
    k_EAccountTypeConsoleUser,
    k_EAccountTypeAnonUser,
    k_EAccountTypeMax,
};

enum EChatEntryType
{
    k_EChatEntryTypeInvalid = 0, // 0x0000
    k_EChatEntryTypeChatMsg = 1, // 0x0001
    k_EChatEntryTypeTyping = 2, // 0x0002
    k_EChatEntryTypeInviteGame = 3, // 0x0003
    k_EChatEntryTypeEmote = 4, // 0x0004
    k_EChatEntryTypeLeftConversation = 6, // 0x0006
    k_EChatEntryTypeEntered = 7, // 0x0007
    k_EChatEntryTypeWasKicked = 8, // 0x0008
    k_EChatEntryTypeWasBanned = 9, // 0x0009
    k_EChatEntryTypeDisconnected = 10, // 0x000A
    k_EChatEntryTypeHistoricalChat = 11, // 0x000B
    k_EChatEntryTypeReserved1 = 12, // 0x000C
    k_EChatEntryTypeReserved2 = 13, // 0x000D
};

enum EChatSteamIDInstanceFlags
{
    k_EChatAccountInstanceMask = 4095, // 0x0FFF
    k_EChatInstanceFlagClan = 524288, // 0x00080000
    k_EChatInstanceFlagLobby = 262144, // 0x00040000
    k_EChatInstanceFlagMMSLobby = 131072, // 0x00020000
};

enum EMarketingMessageFlags
{
    k_EMarketingMessageFlagsNone = 0, // 0x0000
    k_EMarketingMessageFlagsHighPriority = 1, // 0x0001
    k_EMarketingMessageFlagsPlatformWindows = 2, // 0x0002
    k_EMarketingMessageFlagsPlatformMac = 4, // 0x0004
    k_EMarketingMessageFlagsPlatformLinux = 8, // 0x0008
    k_EMarketingMessageFlagsPlatformRestrictions = 14, // 0x000E
};

enum ENotificationPosition
{
    k_EPositionTopLeft = 0,
    k_EPositionTopRight,
    k_EPositionBottomLeft,
    k_EPositionBottomRight,
};

/* ---------- definitions */

class CSteamID
{
private:
    CSteamID(__int32);
    CSteamID(unsigned __int32);
public:
    CSteamID(char const *, EUniverse);
    CSteamID(unsigned long long);
    CSteamID(unsigned __int32, unsigned __int32, EUniverse, EAccountType);
    CSteamID(unsigned __int32, EUniverse, EAccountType);
    CSteamID();
    void Set(unsigned __int32, EUniverse, EAccountType);
    void InstancedSet(unsigned __int32, unsigned __int32, EUniverse, EAccountType);
    void FullSet(unsigned long long, EUniverse, EAccountType);
    void SetFromUint64(unsigned long long);
    void Clear();
    unsigned long long ConvertToUint64() const;
    unsigned long long GetStaticAccountKey() const;
    void CreateBlankAnonLogon(EUniverse);
    void CreateBlankAnonUserLogon(EUniverse);
    bool BBlankAnonAccount() const;
    bool BGameServerAccount() const;
    bool BPersistentGameServerAccount() const;
    bool BAnonGameServerAccount() const;
    bool BContentServerAccount() const;
    bool BClanAccount() const;
    bool BChatAccount() const;
    bool IsLobby() const;
    bool BIndividualAccount() const;
    bool BAnonAccount() const;
    bool BAnonUserAccount() const;
    bool BConsoleUserAccount() const;
    void SetAccountID(unsigned __int32);
    void SetAccountInstance(unsigned __int32);
    void ClearIndividualInstance();
    bool HasNoIndividualInstance() const;
    unsigned __int32 GetAccountID() const;
    unsigned __int32 GetUnAccountInstance() const;
    EAccountType GetEAccountType() const;
    EUniverse GetEUniverse() const;
    void SetEUniverse(EUniverse);
    bool IsValid() const;
    static char const *Render(unsigned long long);
    char const *Render() const;
    void SetFromString(char const *, EUniverse);
    bool SetFromStringStrict(char const *, EUniverse);
    bool SetFromSteam2String(char const *, EUniverse);
    _inline bool operator==(CSteamID const &) const;
    bool operator!=(CSteamID const &) const;
    bool operator<(CSteamID const &) const;
    bool operator>(CSteamID const &) const;
    bool BValidExternalSteamID() const;
    union SteamID_t
    {
        struct SteamIDComponent_t
        {
            unsigned __int32 m_unAccountID : 32; // 0x0
            unsigned __int32 m_unAccountInstance : 20; // 0x4
            unsigned __int32 m_EAccountType : 4; // 0x4
            EUniverse m_EUniverse : 8; // 0x4
        };
        static_assert(sizeof(SteamIDComponent_t) == 8, "Invalid SteamIDComponent_t size");
        CSteamID::SteamID_t::SteamIDComponent_t m_comp; // 0x0
        unsigned long long m_unAll64Bits; // 0x0
    };
    static_assert(sizeof(SteamID_t) == 8, "Invalid SteamID_t size");
private:
    CSteamID::SteamID_t m_steamid; // 0x0
};
static_assert(sizeof(CSteamID) == 8, "Invalid CSteamID size");

class CGameID
{
public:
    CGameID(char const *);
    CGameID(unsigned __int32, unsigned __int32);
    CGameID(unsigned __int32);
    CGameID(__int32);
    CGameID(unsigned long long);
    CGameID();
    static char const *Render(unsigned long long);
    char const *Render() const;
    unsigned long long ToUint64() const;
    unsigned long long *GetUint64Ptr();
    void Set(unsigned long long);
    bool IsMod() const;
    bool IsShortcut() const;
    bool IsP2PFile() const;
    bool IsSteamApp() const;
    unsigned __int32 ModID() const;
    unsigned __int32 AppID() const;
    bool operator==(CGameID const &) const;
    bool operator!=(CGameID const &) const;
    bool operator<(CGameID const &) const;
    bool IsValid() const;
    void Reset();
    enum EGameIDType
    {
        k_EGameIDTypeApp = 0,
        k_EGameIDTypeGameMod,
        k_EGameIDTypeShortcut,
        k_EGameIDTypeP2P,
    };
    struct GameID_t
    {
        unsigned __int32 m_nAppID : 24; // 0x0
        unsigned __int32 m_nType : 8; // 0x0
        unsigned __int32 m_nModID : 32; // 0x4
    };
    static_assert(sizeof(GameID_t) == 8, "Invalid GameID_t size");
    union
    {
    private:
        unsigned long long m_ulGameID; // 0x0
        CGameID::GameID_t m_gameID; // 0x0
    };
};
static_assert(sizeof(CGameID) == 8, "Invalid CGameID size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_10002D8D(CSteamID const *const, CSteamID const &);
_inline bool CSteamID::operator==(CSteamID const &) const // 0x10002D8D
{
    mangled_assert("??8CSteamID@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_10002D8D(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __STEAMCLIENTPUBLIC_H__
#endif

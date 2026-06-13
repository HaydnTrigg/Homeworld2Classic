#if 0
/* ---------- headers */

#include "decomp.h"
#include <winerror.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <GSLobby\GamespySDK\chat\chatCallbacks.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <GSLobby\GamespySDK\darray.h>
#include <string.h>
#include <memoryapi.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <stdio.h>
#include <crtdefs.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <GSLobby\GamespySDK\chat\chatChannel.h>
#include <kernelspecs.h>
#include <GSLobby\GamespySDK\chat\chatSocket.h>
#include <basetsd.h>
#include <GSLobby\GamespySDK\chat\chatCrypt.h>
#include <mcx.h>
#include <pshpack1.h>
#include <GSLobby\GamespySDK\chat\chatMain.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <swprintf.inl>
#include <namedpipeapi.h>
#include <securityappcontainer.h>
#include <wincon.h>
#include <stdlib.h>
#include <fileapi.h>
#include <limits.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <wtime.inl>
#include <ktmtypes.h>
#include <pshpack4.h>
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <GSLobby\GamespySDK\chat\chatHandlers.h>
#include <winuser.h>
#include <ime_cmodes.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <winapifamily.h>
#include <time.h>
#include <threadpoolapiset.h>
#include <sdkddkver.h>
#include <time.inl>
#include <excpt.h>
#include <stringapiset.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <imm.h>
#include <minwinbase.h>
#include <synchapi.h>
#include <poppack.h>
#include <guiddef.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <inaddr.h>
#include <stralign.h>
#include <namespaceapi.h>
#include <winsvc.h>
#include <errhandlingapi.h>

/* ---------- constants */

enum
{
    TYPE_LIST = 0,
    TYPE_JOIN,
    TYPE_TOPIC,
    TYPE_NAMES,
    TYPE_WHOIS,
    TYPE_CMODE,
    TYPE_UMODE,
    TYPE_BAN,
    TYPE_GETBAN,
    TYPE_NICK,
    TYPE_WHO,
    TYPE_CWHO,
    TYPE_GETKEY,
    TYPE_GETCKEY,
    TYPE_GETCHANKEY,
    TYPE_UNQUIET,
    TYPE_CDKEY,
    NUM_TYPES,
};

/* ---------- definitions */

typedef _gs_crypt_key gs_crypt_key;
typedef void (*chatGetChannelTopicCallback)(void *, CHATBool, char const *, char const *, void *);
typedef void (*ciChannelListUsersCallback)(void *, char const *, __int32, char const **, __int32 *, void *);
typedef void (*chatEnumChannelBansCallback)(void *, CHATBool, char const *, __int32, char const **, void *);
typedef void (*chatGetChannelBasicUserInfoCallback)(void *, CHATBool, char const *, char const *, char const *, char const *, void *);
typedef void (*chatGetChannelPasswordCallback)(void *, CHATBool, char const *, CHATBool, char const *, void *);
typedef void (*chatGetUserModeCallback)(void *, CHATBool, char const *, char const *, __int32, void *);
typedef void (*chatEnumChannelsCallbackAll)(void *, CHATBool, __int32, char const **, char const **, __int32 *, void *);
typedef void (*chatGetChannelModeCallback)(void *, CHATBool, char const *, CHATChannelMode *, void *);
typedef void (*chatEnumJoinedChannelsCallback)(void *, __int32, char const *, void *);
typedef void (*chatEnumChannelsCallbackEach)(void *, CHATBool, __int32, char const *, char const *, __int32, void *);
typedef void (*chatGetUserInfoCallback)(void *, CHATBool, char const *, char const *, char const *, char const *, __int32, char const **, void *);
typedef void (*ciUserEnumChannelsCallback)(void *, char const *, char const *, void *);

struct ciModeChange
{
    __int32 mode; // 0x0
    CHATBool enable; // 0x4
    char *param; // 0x8
};
static_assert(sizeof(ciModeChange) == 12, "Invalid ciModeChange size");

struct ciFilterMatch
{
    __int32 type; // 0x0
    char const *name; // 0x4
    char const *name2; // 0x8
};
static_assert(sizeof(ciFilterMatch) == 12, "Invalid ciFilterMatch size");

struct LISTData
{
    CHATBool gotStart; // 0x0
    __int32 numChannels; // 0x4
    char **channels; // 0x8
    __int32 *numUsers; // 0xC
    char **topics; // 0x10
};
static_assert(sizeof(LISTData) == 20, "Invalid LISTData size");

struct JOINData
{
    chatChannelCallbacks callbacks; // 0x0
    CHATBool joined; // 0x30
    char password[256]; // 0x34
};
static_assert(sizeof(JOINData) == 308, "Invalid JOINData size");

struct NAMESData
{
    __int32 len; // 0x0
    __int32 numUsers; // 0x4
    char **users; // 0x8
    __int32 *modes; // 0xC
};
static_assert(sizeof(NAMESData) == 16, "Invalid NAMESData size");

struct WHOISData
{
    char *user; // 0x0
    char *name; // 0x4
    char *address; // 0x8
    __int32 numChannels; // 0xC
    char **channels; // 0x10
};
static_assert(sizeof(WHOISData) == 20, "Invalid WHOISData size");

struct BANData
{
    char *channel; // 0x0
};
static_assert(sizeof(BANData) == 4, "Invalid BANData size");

struct GETBANData
{
    __int32 numBans; // 0x0
    char **bans; // 0x4
};
static_assert(sizeof(GETBANData) == 8, "Invalid GETBANData size");

struct GETKEYData
{
    __int32 num; // 0x0
    char **keys; // 0x4
    char *channel; // 0x8
};
static_assert(sizeof(GETKEYData) == 12, "Invalid GETKEYData size");

struct GETCKEYData
{
    __int32 num; // 0x0
    char **keys; // 0x4
    CHATBool channel; // 0x8
    CHATBool allBroadcastKeys; // 0xC
};
static_assert(sizeof(GETCKEYData) == 16, "Invalid GETCKEYData size");

struct GETCHANKEYData
{
    __int32 num; // 0x0
    char **keys; // 0x4
    CHATBool allBroadcastKeys; // 0x8
};
static_assert(sizeof(GETCHANKEYData) == 12, "Invalid GETCHANKEYData size");

/* ---------- prototypes */

extern void ciFilterThink(void *chat);
extern __int32 ciGetNextID(void *chat);
extern CHATBool ciCheckFiltersForID(void *chat, __int32 ID);
extern void ciCleanupFilters(void *chat);
extern __int32 ciAddJOINFilter(void *chat, char const *channel, void (*callback)(void *, CHATBool, CHATEnterResult, char const *, void *), void *param, chatChannelCallbacks *callbacks, char const *password);
extern __int32 ciAddNAMESFilter(void *chat, char const *channel, void (*callback)(void *, CHATBool, char const *, __int32, char const **, __int32 *, void *), void *param);
extern __int32 ciAddGETKEYFilter(void *chat, char const *cookie, __int32 num, char const **keys, char const *channel, void (*callback)(void *, CHATBool, char const *, __int32, char const **, char const **, void *), void *param);
extern __int32 ciAddGETCKEYFilter(void *chat, char const *cookie, __int32 num, char const **keys, CHATBool channel, CHATBool getBroadcastKeys, void (*callback)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *param);
extern __int32 ciAddGETCHANKEYFilter(void *chat, char const *cookie, __int32 num, char const **keys, CHATBool getBroadcastKeys, void (*callback)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *param);
extern __int32 ciAddUNQUIETFilter(void *chat, char const *channel);
extern __int32 ciAddCDKEYFilter(void *chat, void (*callback)(void *, __int32, char const *, void *), void *param);
extern ciModeChange *ciParseMode(char *mode, char **params, __int32 numParams);
extern void ciApplyChangesToMode(CHATChannelMode *mode, ciModeChange *changes);
extern void ciNickError(void *chat, __int32 type);
extern void ciPrivmsgHandler(void *chat, ciServerMessage *message);
extern void ciNoticeHandler(void *chat, ciServerMessage *message);
extern void ciUTMHandler(void *chat, ciServerMessage *message);
extern void ciATMHandler(void *chat, ciServerMessage *message);
extern void ciPingHandler(void *chat, ciServerMessage *message);
extern void ciNickHandler(void *chat, ciServerMessage *message);
extern void ciJoinHandler(void *chat, ciServerMessage *message);
extern void ciPartHandler(void *chat, ciServerMessage *message);
extern void ciKickHandler(void *chat, ciServerMessage *message);
extern void ciQuitEnumChannelsCallback(void *chat, char const *user, char const *channel, void *reason);
extern void ciQuitHandler(void *chat, ciServerMessage *message);
extern void ciKillEnumChannelsCallback(void *chat, char const *user, char const *channel, void *param);
extern void ciKillHandler(void *chat, ciServerMessage *message);
extern void ciTopicHandler(void *chat, ciServerMessage *message);
extern void ciModeHandler(void *chat, ciServerMessage *message);
extern void ciErrorHandler(void *chat, ciServerMessage *message);
extern void ciInviteHandler(void *chat, ciServerMessage *message);
extern void ciNameReplyHandler(void *chat, ciServerMessage *message);
extern void ciEndOfNamesHandler(void *chat, ciServerMessage *message);
extern void ciRplTopicHandler(void *chat, ciServerMessage *message);
extern void ciRplNoTopicHandler(void *chat, ciServerMessage *message);
extern void ciErrNickInUseHandler(void *chat, ciServerMessage *message);
extern void ciRplWhoReplyHandler(void *chat, ciServerMessage *message);
extern void ciRplEndOfWhoHandler(void *chat, ciServerMessage *message);
extern void ciRplGetKeyHandler(void *chat, ciServerMessage *message);
extern void ciRplEndGetKeyHandler(void *chat, ciServerMessage *message);
extern void ciRplGetCKeyHandler(void *chat, ciServerMessage *message);
extern void ciRplEndGetCKeyHandler(void *chat, ciServerMessage *message);
extern void ciRplGetChanKeyHandler(void *chat, ciServerMessage *message);
extern void ciRplUserIPHandler(void *chat, ciServerMessage *message);
extern void ciRplListStartHandler(void *chat, ciServerMessage *message);
extern void ciRplListHandler(void *chat, ciServerMessage *message);
extern void ciRplListEndHandler(void *chat, ciServerMessage *message);
extern void ciRplChannelModeIsHandler(void *chat, ciServerMessage *message);
extern void ciRplWhoisUserHandler(void *chat, ciServerMessage *message);
extern void ciRplWhoisChannelsHandler(void *chat, ciServerMessage *message);
extern void ciRplEndOfWhoisHandler(void *chat, ciServerMessage *message);
extern void ciRplBanListHandler(void *chat, ciServerMessage *message);
extern void ciRplEndOfBanListHandler(void *chat, ciServerMessage *message);
extern void ciRplWelcomeHandler(void *chat, ciServerMessage *message);
extern void ciRplSecureKeyHandler(void *chat, ciServerMessage *message);
extern void ciRplCDKeyHandler(void *chat, ciServerMessage *message);
extern void ciErrNoSuchChannelHandler(void *chat, ciServerMessage *message);
extern void ciErrTooManyChannelsHandler(void *chat, ciServerMessage *message);
extern void ciErrChannelIsFullHandler(void *chat, ciServerMessage *message);
extern void ciErrInviteOnlyChanHandler(void *chat, ciServerMessage *message);
extern void ciErrBannedFromChanHandler(void *chat, ciServerMessage *message);
extern void ciErrBadChannelKeyHandler(void *chat, ciServerMessage *message);
extern void ciErrBadChanMaskHandler(void *chat, ciServerMessage *message);
extern void ciErrNoSuchNickHandler(void *chat, ciServerMessage *message);
extern void ciErrErroneusNicknameHandler(void *chat, ciServerMessage *message);

_static ciServerMessageFilter *ciFindFilter(void *chat, __int32 numMatches, ciFilterMatch *matches);
_static void ciRemoveFilter(void *chat, ciServerMessageFilter *filter);
_static void ciFinishFilter(void *chat, ciServerMessageFilter *filter, void *params);
_static void ciFilterTimedout(void *chat, ciServerMessageFilter *filter);
_static __int32 ciAddFilter(void *chat, __int32 type, char const *name, char const *name2, void *callback, void *callback2, void *param, void *data);
_static char *ciParseValue(char const *flags, __int32 *len);

/* ---------- globals */

extern ciServerMessageType serverMessageTypes[0]; // 0x1001E588
extern __int32 numServerMessageTypes; // 0x1001E710

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_1000C149(void *);
void ciFilterThink(void *chat) // 0x1000C149
{
    mangled_assert("_ciFilterThink@4");
    todo("implement");
    _sub_1000C149(chat);
}

_extern __int32 _sub_1000C756(void *);
__int32 ciGetNextID(void *chat) // 0x1000C756
{
    mangled_assert("_ciGetNextID@4");
    todo("implement");
    __int32 __result = _sub_1000C756(chat);
    return __result;
}

_extern CHATBool _sub_1000C105(void *, __int32);
CHATBool ciCheckFiltersForID(void *chat, __int32 ID) // 0x1000C105
{
    mangled_assert("_ciCheckFiltersForID@8");
    todo("implement");
    CHATBool __result = _sub_1000C105(chat, ID);
    return __result;
}

_extern void _sub_1000C12D(void *);
void ciCleanupFilters(void *chat) // 0x1000C12D
{
    mangled_assert("_ciCleanupFilters@4");
    todo("implement");
    _sub_1000C12D(chat);
}

_extern __int32 _sub_1000BF84(void *, char const *, void (*)(void *, CHATBool, CHATEnterResult, char const *, void *), void *, chatChannelCallbacks *, char const *);
__int32 ciAddJOINFilter(void *chat, char const *channel, void (*callback)(void *, CHATBool, CHATEnterResult, char const *, void *), void *param, chatChannelCallbacks *callbacks, char const *password) // 0x1000BF84
{
    mangled_assert("_ciAddJOINFilter@24");
    todo("implement");
    __int32 __result = _sub_1000BF84(chat, channel, callback, param, callbacks, password);
    return __result;
}

_extern __int32 _sub_1000BFEE(void *, char const *, void (*)(void *, CHATBool, char const *, __int32, char const **, __int32 *, void *), void *);
__int32 ciAddNAMESFilter(void *chat, char const *channel, void (*callback)(void *, CHATBool, char const *, __int32, char const **, __int32 *, void *), void *param) // 0x1000BFEE
{
    mangled_assert("_ciAddNAMESFilter@16");
    todo("implement");
    __int32 __result = _sub_1000BFEE(chat, channel, callback, param);
    return __result;
}

_extern __int32 _sub_1000BEA2(void *, char const *, __int32, char const **, char const *, void (*)(void *, CHATBool, char const *, __int32, char const **, char const **, void *), void *);
__int32 ciAddGETKEYFilter(void *chat, char const *cookie, __int32 num, char const **keys, char const *channel, void (*callback)(void *, CHATBool, char const *, __int32, char const **, char const **, void *), void *param) // 0x1000BEA2
{
    mangled_assert("_ciAddGETKEYFilter@28");
    todo("implement");
    __int32 __result = _sub_1000BEA2(chat, cookie, num, keys, channel, callback, param);
    return __result;
}

_extern __int32 _sub_1000BDBC(void *, char const *, __int32, char const **, CHATBool, CHATBool, void (*)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *);
__int32 ciAddGETCKEYFilter(void *chat, char const *cookie, __int32 num, char const **keys, CHATBool channel, CHATBool getBroadcastKeys, void (*callback)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *param) // 0x1000BDBC
{
    mangled_assert("_ciAddGETCKEYFilter@32");
    todo("implement");
    __int32 __result = _sub_1000BDBC(chat, cookie, num, keys, channel, getBroadcastKeys, callback, param);
    return __result;
}

_extern __int32 _sub_1000BCD9(void *, char const *, __int32, char const **, CHATBool, void (*)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *);
__int32 ciAddGETCHANKEYFilter(void *chat, char const *cookie, __int32 num, char const **keys, CHATBool getBroadcastKeys, void (*callback)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *param) // 0x1000BCD9
{
    mangled_assert("_ciAddGETCHANKEYFilter@28");
    todo("implement");
    __int32 __result = _sub_1000BCD9(chat, cookie, num, keys, getBroadcastKeys, callback, param);
    return __result;
}

_extern __int32 _sub_1000C02B(void *, char const *);
__int32 ciAddUNQUIETFilter(void *chat, char const *channel) // 0x1000C02B
{
    mangled_assert("_ciAddUNQUIETFilter@8");
    todo("implement");
    __int32 __result = _sub_1000C02B(chat, channel);
    return __result;
}

_extern __int32 _sub_1000BC0D(void *, void (*)(void *, __int32, char const *, void *), void *);
__int32 ciAddCDKEYFilter(void *chat, void (*callback)(void *, __int32, char const *, void *), void *param) // 0x1000BC0D
{
    mangled_assert("_ciAddCDKEYFilter@12");
    todo("implement");
    __int32 __result = _sub_1000BC0D(chat, callback, param);
    return __result;
}

_extern ciModeChange *_sub_1000C87A(char *, char **, __int32);
ciModeChange *ciParseMode(char *mode, char **params, __int32 numParams) // 0x1000C87A
{
    mangled_assert("_ciParseMode@12");
    todo("implement");
    ciModeChange * __result = _sub_1000C87A(mode, params, numParams);
    return __result;
}

_extern void _sub_1000C085(CHATChannelMode *, ciModeChange *);
void ciApplyChangesToMode(CHATChannelMode *mode, ciModeChange *changes) // 0x1000C085
{
    mangled_assert("_ciApplyChangesToMode@8");
    todo("implement");
    _sub_1000C085(mode, changes);
}

_extern void _sub_1000C81C(void *, __int32);
void ciNickError(void *chat, __int32 type) // 0x1000C81C
{
    mangled_assert("_ciNickError@8");
    todo("implement");
    _sub_1000C81C(chat, type);
}

_extern void _sub_10009A08(void *, ciServerMessage *);
void ciPrivmsgHandler(void *chat, ciServerMessage *message) // 0x10009A08
{
    mangled_assert("_ciPrivmsgHandler@8");
    todo("implement");
    _sub_10009A08(chat, message);
}

_extern void _sub_10009B3C(void *, ciServerMessage *);
void ciNoticeHandler(void *chat, ciServerMessage *message) // 0x10009B3C
{
    mangled_assert("_ciNoticeHandler@8");
    todo("implement");
    _sub_10009B3C(chat, message);
}

_extern void _sub_10009BE9(void *, ciServerMessage *);
void ciUTMHandler(void *chat, ciServerMessage *message) // 0x10009BE9
{
    mangled_assert("_ciUTMHandler@8");
    todo("implement");
    _sub_10009BE9(chat, message);
}

_extern void _sub_10009C99(void *, ciServerMessage *);
void ciATMHandler(void *chat, ciServerMessage *message) // 0x10009C99
{
    mangled_assert("_ciATMHandler@8");
    todo("implement");
    _sub_10009C99(chat, message);
}

_extern void _sub_10009D47(void *, ciServerMessage *);
void ciPingHandler(void *chat, ciServerMessage *message) // 0x10009D47
{
    mangled_assert("_ciPingHandler@8");
    todo("implement");
    _sub_10009D47(chat, message);
}

_extern void _sub_10009D66(void *, ciServerMessage *);
void ciNickHandler(void *chat, ciServerMessage *message) // 0x10009D66
{
    mangled_assert("_ciNickHandler@8");
    todo("implement");
    _sub_10009D66(chat, message);
}

_extern void _sub_10009E0A(void *, ciServerMessage *);
void ciJoinHandler(void *chat, ciServerMessage *message) // 0x10009E0A
{
    mangled_assert("_ciJoinHandler@8");
    todo("implement");
    _sub_10009E0A(chat, message);
}

_extern void _sub_10009F5E(void *, ciServerMessage *);
void ciPartHandler(void *chat, ciServerMessage *message) // 0x10009F5E
{
    mangled_assert("_ciPartHandler@8");
    todo("implement");
    _sub_10009F5E(chat, message);
}

_extern void _sub_1000A023(void *, ciServerMessage *);
void ciKickHandler(void *chat, ciServerMessage *message) // 0x1000A023
{
    mangled_assert("_ciKickHandler@8");
    todo("implement");
    _sub_1000A023(chat, message);
}

_extern void _sub_1000CA3F(void *, char const *, char const *, void *);
void ciQuitEnumChannelsCallback(void *chat, char const *user, char const *channel, void *reason) // 0x1000CA3F
{
    mangled_assert("_ciQuitEnumChannelsCallback@16");
    todo("implement");
    _sub_1000CA3F(chat, user, channel, reason);
}

_extern void _sub_1000A141(void *, ciServerMessage *);
void ciQuitHandler(void *chat, ciServerMessage *message) // 0x1000A141
{
    mangled_assert("_ciQuitHandler@8");
    todo("implement");
    _sub_1000A141(chat, message);
}

_extern void _sub_1000C782(void *, char const *, char const *, void *);
void ciKillEnumChannelsCallback(void *chat, char const *user, char const *channel, void *param) // 0x1000C782
{
    mangled_assert("_ciKillEnumChannelsCallback@16");
    todo("implement");
    _sub_1000C782(chat, user, channel, param);
}

_extern void _sub_1000A164(void *, ciServerMessage *);
void ciKillHandler(void *chat, ciServerMessage *message) // 0x1000A164
{
    mangled_assert("_ciKillHandler@8");
    todo("implement");
    _sub_1000A164(chat, message);
}

_extern void _sub_1000A187(void *, ciServerMessage *);
void ciTopicHandler(void *chat, ciServerMessage *message) // 0x1000A187
{
    mangled_assert("_ciTopicHandler@8");
    todo("implement");
    _sub_1000A187(chat, message);
}

_extern void _sub_1000A1E1(void *, ciServerMessage *);
void ciModeHandler(void *chat, ciServerMessage *message) // 0x1000A1E1
{
    mangled_assert("_ciModeHandler@8");
    todo("implement");
    _sub_1000A1E1(chat, message);
}

_extern void _sub_1000A2BD(void *, ciServerMessage *);
void ciErrorHandler(void *chat, ciServerMessage *message) // 0x1000A2BD
{
    mangled_assert("_ciErrorHandler@8");
    todo("implement");
    _sub_1000A2BD(chat, message);
}

_extern void _sub_1000A572(void *, ciServerMessage *);
void ciInviteHandler(void *chat, ciServerMessage *message) // 0x1000A572
{
    mangled_assert("_ciInviteHandler@8");
    todo("implement");
    _sub_1000A572(chat, message);
}

_extern void _sub_1000A2F3(void *, ciServerMessage *);
void ciNameReplyHandler(void *chat, ciServerMessage *message) // 0x1000A2F3
{
    mangled_assert("_ciNameReplyHandler@8");
    todo("implement");
    _sub_1000A2F3(chat, message);
}

_extern void _sub_1000A470(void *, ciServerMessage *);
void ciEndOfNamesHandler(void *chat, ciServerMessage *message) // 0x1000A470
{
    mangled_assert("_ciEndOfNamesHandler@8");
    todo("implement");
    _sub_1000A470(chat, message);
}

_extern void _sub_1000A5BB(void *, ciServerMessage *);
void ciRplTopicHandler(void *chat, ciServerMessage *message) // 0x1000A5BB
{
    mangled_assert("_ciRplTopicHandler@8");
    todo("implement");
    _sub_1000A5BB(chat, message);
}

_extern void _sub_1000A65E(void *, ciServerMessage *);
void ciRplNoTopicHandler(void *chat, ciServerMessage *message) // 0x1000A65E
{
    mangled_assert("_ciRplNoTopicHandler@8");
    todo("implement");
    _sub_1000A65E(chat, message);
}

_extern void _sub_1000A6FA(void *, ciServerMessage *);
void ciErrNickInUseHandler(void *chat, ciServerMessage *message) // 0x1000A6FA
{
    mangled_assert("_ciErrNickInUseHandler@8");
    todo("implement");
    _sub_1000A6FA(chat, message);
}

_extern void _sub_1000A77A(void *, ciServerMessage *);
void ciRplWhoReplyHandler(void *chat, ciServerMessage *message) // 0x1000A77A
{
    mangled_assert("_ciRplWhoReplyHandler@8");
    todo("implement");
    _sub_1000A77A(chat, message);
}

_extern void _sub_1000B032(void *, ciServerMessage *);
void ciRplEndOfWhoHandler(void *chat, ciServerMessage *message) // 0x1000B032
{
    mangled_assert("_ciRplEndOfWhoHandler@8");
    todo("implement");
    _sub_1000B032(chat, message);
}

_extern void _sub_1000B0BB(void *, ciServerMessage *);
void ciRplGetKeyHandler(void *chat, ciServerMessage *message) // 0x1000B0BB
{
    mangled_assert("_ciRplGetKeyHandler@8");
    todo("implement");
    _sub_1000B0BB(chat, message);
}

_extern void _sub_1000B1F6(void *, ciServerMessage *);
void ciRplEndGetKeyHandler(void *chat, ciServerMessage *message) // 0x1000B1F6
{
    mangled_assert("_ciRplEndGetKeyHandler@8");
    todo("implement");
    _sub_1000B1F6(chat, message);
}

_extern void _sub_1000B265(void *, ciServerMessage *);
void ciRplGetCKeyHandler(void *chat, ciServerMessage *message) // 0x1000B265
{
    mangled_assert("_ciRplGetCKeyHandler@8");
    todo("implement");
    _sub_1000B265(chat, message);
}

_extern void _sub_1000B527(void *, ciServerMessage *);
void ciRplEndGetCKeyHandler(void *chat, ciServerMessage *message) // 0x1000B527
{
    mangled_assert("_ciRplEndGetCKeyHandler@8");
    todo("implement");
    _sub_1000B527(chat, message);
}

_extern void _sub_1000B5A0(void *, ciServerMessage *);
void ciRplGetChanKeyHandler(void *chat, ciServerMessage *message) // 0x1000B5A0
{
    mangled_assert("_ciRplGetChanKeyHandler@8");
    todo("implement");
    _sub_1000B5A0(chat, message);
}

_extern void _sub_1000A8E0(void *, ciServerMessage *);
void ciRplUserIPHandler(void *chat, ciServerMessage *message) // 0x1000A8E0
{
    mangled_assert("_ciRplUserIPHandler@8");
    todo("implement");
    _sub_1000A8E0(chat, message);
}

_extern void _sub_1000A93F(void *, ciServerMessage *);
void ciRplListStartHandler(void *chat, ciServerMessage *message) // 0x1000A93F
{
    mangled_assert("_ciRplListStartHandler@8");
    todo("implement");
    _sub_1000A93F(chat, message);
}

_extern void _sub_1000A978(void *, ciServerMessage *);
void ciRplListHandler(void *chat, ciServerMessage *message) // 0x1000A978
{
    mangled_assert("_ciRplListHandler@8");
    todo("implement");
    _sub_1000A978(chat, message);
}

_extern void _sub_1000AB09(void *, ciServerMessage *);
void ciRplListEndHandler(void *chat, ciServerMessage *message) // 0x1000AB09
{
    mangled_assert("_ciRplListEndHandler@8");
    todo("implement");
    _sub_1000AB09(chat, message);
}

_extern void _sub_1000AB6C(void *, ciServerMessage *);
void ciRplChannelModeIsHandler(void *chat, ciServerMessage *message) // 0x1000AB6C
{
    mangled_assert("_ciRplChannelModeIsHandler@8");
    todo("implement");
    _sub_1000AB6C(chat, message);
}

_extern void _sub_1000AC70(void *, ciServerMessage *);
void ciRplWhoisUserHandler(void *chat, ciServerMessage *message) // 0x1000AC70
{
    mangled_assert("_ciRplWhoisUserHandler@8");
    todo("implement");
    _sub_1000AC70(chat, message);
}

_extern void _sub_1000AD75(void *, ciServerMessage *);
void ciRplWhoisChannelsHandler(void *chat, ciServerMessage *message) // 0x1000AD75
{
    mangled_assert("_ciRplWhoisChannelsHandler@8");
    todo("implement");
    _sub_1000AD75(chat, message);
}

_extern void _sub_1000AE4C(void *, ciServerMessage *);
void ciRplEndOfWhoisHandler(void *chat, ciServerMessage *message) // 0x1000AE4C
{
    mangled_assert("_ciRplEndOfWhoisHandler@8");
    todo("implement");
    _sub_1000AE4C(chat, message);
}

_extern void _sub_1000AED1(void *, ciServerMessage *);
void ciRplBanListHandler(void *chat, ciServerMessage *message) // 0x1000AED1
{
    mangled_assert("_ciRplBanListHandler@8");
    todo("implement");
    _sub_1000AED1(chat, message);
}

_extern void _sub_1000AF76(void *, ciServerMessage *);
void ciRplEndOfBanListHandler(void *chat, ciServerMessage *message) // 0x1000AF76
{
    mangled_assert("_ciRplEndOfBanListHandler@8");
    todo("implement");
    _sub_1000AF76(chat, message);
}

_extern void _sub_1000AFE2(void *, ciServerMessage *);
void ciRplWelcomeHandler(void *chat, ciServerMessage *message) // 0x1000AFE2
{
    mangled_assert("_ciRplWelcomeHandler@8");
    todo("implement");
    _sub_1000AFE2(chat, message);
}

_extern void _sub_1000B97B(void *, ciServerMessage *);
void ciRplSecureKeyHandler(void *chat, ciServerMessage *message) // 0x1000B97B
{
    mangled_assert("_ciRplSecureKeyHandler@8");
    todo("implement");
    _sub_1000B97B(chat, message);
}

_extern void _sub_1000BA11(void *, ciServerMessage *);
void ciRplCDKeyHandler(void *chat, ciServerMessage *message) // 0x1000BA11
{
    mangled_assert("_ciRplCDKeyHandler@8");
    todo("implement");
    _sub_1000BA11(chat, message);
}

_extern void _sub_1000BA78(void *, ciServerMessage *);
void ciErrNoSuchChannelHandler(void *chat, ciServerMessage *message) // 0x1000BA78
{
    mangled_assert("_ciErrNoSuchChannelHandler@8");
    todo("implement");
    _sub_1000BA78(chat, message);
}

_extern void _sub_1000BB4D(void *, ciServerMessage *);
void ciErrTooManyChannelsHandler(void *chat, ciServerMessage *message) // 0x1000BB4D
{
    mangled_assert("_ciErrTooManyChannelsHandler@8");
    todo("implement");
    _sub_1000BB4D(chat, message);
}

_extern void _sub_1000BBAD(void *, ciServerMessage *);
void ciErrChannelIsFullHandler(void *chat, ciServerMessage *message) // 0x1000BBAD
{
    mangled_assert("_ciErrChannelIsFullHandler@8");
    todo("implement");
    _sub_1000BBAD(chat, message);
}

_extern void _sub_10009870(void *, ciServerMessage *);
void ciErrInviteOnlyChanHandler(void *chat, ciServerMessage *message) // 0x10009870
{
    mangled_assert("_ciErrInviteOnlyChanHandler@8");
    todo("implement");
    _sub_10009870(chat, message);
}

_extern void _sub_100098D0(void *, ciServerMessage *);
void ciErrBannedFromChanHandler(void *chat, ciServerMessage *message) // 0x100098D0
{
    mangled_assert("_ciErrBannedFromChanHandler@8");
    todo("implement");
    _sub_100098D0(chat, message);
}

_extern void _sub_10009930(void *, ciServerMessage *);
void ciErrBadChannelKeyHandler(void *chat, ciServerMessage *message) // 0x10009930
{
    mangled_assert("_ciErrBadChannelKeyHandler@8");
    todo("implement");
    _sub_10009930(chat, message);
}

_extern void _sub_10009990(void *, ciServerMessage *);
void ciErrBadChanMaskHandler(void *chat, ciServerMessage *message) // 0x10009990
{
    mangled_assert("_ciErrBadChanMaskHandler@8");
    todo("implement");
    _sub_10009990(chat, message);
}

_extern void _sub_100099F0(void *, ciServerMessage *);
void ciErrNoSuchNickHandler(void *chat, ciServerMessage *message) // 0x100099F0
{
    mangled_assert("_ciErrNoSuchNickHandler@8");
    todo("implement");
    _sub_100099F0(chat, message);
}

_extern void _sub_100099F3(void *, ciServerMessage *);
void ciErrErroneusNicknameHandler(void *chat, ciServerMessage *message) // 0x100099F3
{
    mangled_assert("_ciErrErroneusNicknameHandler@8");
    todo("implement");
    _sub_100099F3(chat, message);
}

/* ---------- private code */

_extern ciServerMessageFilter *_sub_1000C2CE(void *, __int32, ciFilterMatch *);
_static ciServerMessageFilter *ciFindFilter(void *chat, __int32 numMatches, ciFilterMatch *matches) // 0x1000C2CE
{
    mangled_assert("ciFindFilter");
    todo("implement");
    ciServerMessageFilter * __result = _sub_1000C2CE(chat, numMatches, matches);
    return __result;
}

_extern void _sub_1000CAD9(void *, ciServerMessageFilter *);
_static void ciRemoveFilter(void *chat, ciServerMessageFilter *filter) // 0x1000CAD9
{
    mangled_assert("ciRemoveFilter");
    todo("implement");
    _sub_1000CAD9(chat, filter);
}

_extern void _sub_1000C366(void *, ciServerMessageFilter *, void *);
_static void ciFinishFilter(void *chat, ciServerMessageFilter *filter, void *params) // 0x1000C366
{
    mangled_assert("ciFinishFilter");
    todo("implement");
    _sub_1000C366(chat, filter, params);
}

_extern void _sub_1000C17C(void *, ciServerMessageFilter *);
_static void ciFilterTimedout(void *chat, ciServerMessageFilter *filter) // 0x1000C17C
{
    mangled_assert("ciFilterTimedout");
    todo("implement");
    _sub_1000C17C(chat, filter);
}

_extern __int32 _sub_1000BC29(void *, __int32, char const *, char const *, void *, void *, void *, void *);
_static __int32 ciAddFilter(void *chat, __int32 type, char const *name, char const *name2, void *callback, void *callback2, void *param, void *data) // 0x1000BC29
{
    mangled_assert("ciAddFilter");
    todo("implement");
    __int32 __result = _sub_1000BC29(chat, type, name, name2, callback, callback2, param, data);
    return __result;
}

_extern char *_sub_1000C9E8(char const *, __int32 *);
_static char *ciParseValue(char const *flags, __int32 *len) // 0x1000C9E8
{
    mangled_assert("ciParseValue");
    todo("implement");
    char * __result = _sub_1000C9E8(flags, len);
    return __result;
}
#endif

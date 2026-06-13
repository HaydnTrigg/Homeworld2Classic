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
#include <memoryapi.h>
#include <stdio.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <string.h>
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
#include <GSLobby\GamespySDK\chat\chatMain.h>
#include <kernelspecs.h>
#include <GSLobby\GamespySDK\chat\chatSocket.h>
#include <basetsd.h>
#include <GSLobby\GamespySDK\chat\chatCrypt.h>
#include <mcx.h>
#include <pshpack1.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnls.h>
#include <datetimeapi.h>
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
#include <swprintf.inl>
#include <inaddr.h>
#include <stralign.h>
#include <namespaceapi.h>
#include <winsvc.h>
#include <errhandlingapi.h>

/* ---------- constants */

/* ---------- definitions */

struct ciEnumUsersData
{
    void (*callback)(void *, CHATBool, char const *, __int32, char const **, __int32 *, void *); // 0x0
    void *param; // 0x4
};
static_assert(sizeof(ciEnumUsersData) == 8, "Invalid ciEnumUsersData size");

/* ---------- prototypes */

extern void ciHandleDisconnect(void *chat, char const *reason);
extern void ciSendNickAndUser(void *chat);
extern void *chatConnectDoit(char const *serverAddress, __int32 port, char const *nick, char const *user, char const *name, char const *gamename, char const *secretKey, chatGlobalCallbacks *callbacks, void (*nickErrorCallback)(void *, __int32, char const *, void *), void (*fillInUserCallback)(void *, unsigned __int32, char *, void *), void (*connectCallback)(void *, CHATBool, void *), void *param, CHATBool blocking);
extern void *chatConnectSecure(char const *serverAddress, __int32 port, char const *nick, char const *name, char const *gamename, char const *secretKey, chatGlobalCallbacks *callbacks, void (*nickErrorCallback)(void *, __int32, char const *, void *), void (*fillInUserCallback)(void *, unsigned __int32, char *, void *), void (*connectCallback)(void *, CHATBool, void *), void *param, CHATBool blocking);
extern void chatRetryWithNick(void *chat, char const *nick);
extern void chatDisconnect(void *chat);
extern void chatThink(void *chat);
extern void chatSendRaw(void *chat, char const *command);
extern char *chatGetNick(void *chat);
extern void chatFixNick(char *newNick, char const *oldNick);
extern void chatSetQuietMode(void *chat, CHATBool quiet);
extern void chatAuthenticateCDKey(void *chat, char const *cdkey, void (*callback)(void *, __int32, char const *, void *), void *param, CHATBool blocking);
extern void chatEnterChannel(void *chat, char const *channel, char const *password, chatChannelCallbacks *callbacks, void (*callback)(void *, CHATBool, CHATEnterResult, char const *, void *), void *param, CHATBool blocking);
extern void chatLeaveChannel(void *chat, char const *channel, char const *reason);
extern void chatSendChannelMessage(void *chat, char const *channel, char const *message, __int32 type);
extern void ciEnumUsersCallback(void *chat, char const *channel, __int32 numUsers, char const **users, __int32 *modes, void *param);
extern void chatEnumUsers(void *chat, char const *channel, void (*callback)(void *, CHATBool, char const *, __int32, char const **, __int32 *, void *), void *param, CHATBool blocking);
extern void chatSendUserMessage(void *chat, char const *user, char const *message, __int32 type);
extern CHATBool chatGetBasicUserInfoNoWait(void *chat, char const *nick, char const **user, char const **address);
extern void chatGetGlobalKeys(void *chat, char const *target, __int32 num, char const **keys, void (*callback)(void *, CHATBool, char const *, __int32, char const **, char const **, void *), void *param, CHATBool blocking);
extern void chatSetChannelKeys(void *chat, char const *channel, char const *user, __int32 num, char const **keys, char const **values);
extern void chatGetChannelKeys(void *chat, char const *channel, char const *user, __int32 num, char const **keys, void (*callback)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *param, CHATBool blocking);

_static CHATBool ciCheckForID(void *chat, __int32 ID);
_static void ciThink(void *chat, __int32 ID);
_static void ciSetQuietModeEnumJoinedChannels(void *chat, __int32 index, char const *channel, void *param);
_static char *ciRandomCookie(...);
_static void ciSendGetKey(void *chat, char const *target, char const *cookie, __int32 num, char const **keys);
_static CHATBool ciSendGetChannelKey(void *chat, char const *channel, char const *nick, char const *cookie, __int32 num, char const **keys);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_1000D466(void *, char const *);
void ciHandleDisconnect(void *chat, char const *reason) // 0x1000D466
{
    mangled_assert("_ciHandleDisconnect@8");
    todo("implement");
    _sub_1000D466(chat, reason);
}

_extern void _sub_1000D704(void *);
void ciSendNickAndUser(void *chat) // 0x1000D704
{
    mangled_assert("_ciSendNickAndUser@4");
    todo("implement");
    _sub_1000D704(chat);
}

_extern void *_sub_1000CBF6(char const *, __int32, char const *, char const *, char const *, char const *, char const *, chatGlobalCallbacks *, void (*)(void *, __int32, char const *, void *), void (*)(void *, unsigned __int32, char *, void *), void (*)(void *, CHATBool, void *), void *, CHATBool);
void *chatConnectDoit(char const *serverAddress, __int32 port, char const *nick, char const *user, char const *name, char const *gamename, char const *secretKey, chatGlobalCallbacks *callbacks, void (*nickErrorCallback)(void *, __int32, char const *, void *), void (*fillInUserCallback)(void *, unsigned __int32, char *, void *), void (*connectCallback)(void *, CHATBool, void *), void *param, CHATBool blocking) // 0x1000CBF6
{
    mangled_assert("_chatConnectDoit@52");
    todo("implement");
    void * __result = _sub_1000CBF6(serverAddress, port, nick, user, name, gamename, secretKey, callbacks, nickErrorCallback, fillInUserCallback, connectCallback, param, blocking);
    return __result;
}

_extern void *_sub_1000CD92(char const *, __int32, char const *, char const *, char const *, char const *, chatGlobalCallbacks *, void (*)(void *, __int32, char const *, void *), void (*)(void *, unsigned __int32, char *, void *), void (*)(void *, CHATBool, void *), void *, CHATBool);
void *chatConnectSecure(char const *serverAddress, __int32 port, char const *nick, char const *name, char const *gamename, char const *secretKey, chatGlobalCallbacks *callbacks, void (*nickErrorCallback)(void *, __int32, char const *, void *), void (*fillInUserCallback)(void *, unsigned __int32, char *, void *), void (*connectCallback)(void *, CHATBool, void *), void *param, CHATBool blocking) // 0x1000CD92
{
    mangled_assert("_chatConnectSecure@48");
    todo("implement");
    void * __result = _sub_1000CD92(serverAddress, port, nick, name, gamename, secretKey, callbacks, nickErrorCallback, fillInUserCallback, connectCallback, param, blocking);
    return __result;
}

_extern void _sub_1000D128(void *, char const *);
void chatRetryWithNick(void *chat, char const *nick) // 0x1000D128
{
    mangled_assert("_chatRetryWithNick@8");
    todo("implement");
    _sub_1000D128(chat, nick);
}

_extern void _sub_1000CDC4(void *);
void chatDisconnect(void *chat) // 0x1000CDC4
{
    mangled_assert("_chatDisconnect@4");
    todo("implement");
    _sub_1000CDC4(chat);
}

_extern void _sub_1000D410(void *);
void chatThink(void *chat) // 0x1000D410
{
    mangled_assert("_chatThink@4");
    todo("implement");
    _sub_1000D410(chat);
}

_extern void _sub_1000D253(void *, char const *);
void chatSendRaw(void *chat, char const *command) // 0x1000D253
{
    mangled_assert("_chatSendRaw@8");
    todo("implement");
    _sub_1000D253(chat, command);
}

_extern char *_sub_1000D0D4(void *);
char *chatGetNick(void *chat) // 0x1000D0D4
{
    mangled_assert("_chatGetNick@4");
    todo("implement");
    char * __result = _sub_1000D0D4(chat);
    return __result;
}

_extern void _sub_1000CF3B(char *, char const *);
void chatFixNick(char *newNick, char const *oldNick) // 0x1000CF3B
{
    mangled_assert("_chatFixNick@8");
    todo("implement");
    _sub_1000CF3B(newNick, oldNick);
}

_extern void _sub_1000D3B5(void *, CHATBool);
void chatSetQuietMode(void *chat, CHATBool quiet) // 0x1000D3B5
{
    mangled_assert("_chatSetQuietMode@8");
    todo("implement");
    _sub_1000D3B5(chat, quiet);
}

_extern void _sub_1000CB41(void *, char const *, void (*)(void *, __int32, char const *, void *), void *, CHATBool);
void chatAuthenticateCDKey(void *chat, char const *cdkey, void (*callback)(void *, __int32, char const *, void *), void *param, CHATBool blocking) // 0x1000CB41
{
    mangled_assert("_chatAuthenticateCDKey@20");
    todo("implement");
    _sub_1000CB41(chat, cdkey, callback, param, blocking);
}

_extern void _sub_1000CE2E(void *, char const *, char const *, chatChannelCallbacks *, void (*)(void *, CHATBool, CHATEnterResult, char const *, void *), void *, CHATBool);
void chatEnterChannel(void *chat, char const *channel, char const *password, chatChannelCallbacks *callbacks, void (*callback)(void *, CHATBool, CHATEnterResult, char const *, void *), void *param, CHATBool blocking) // 0x1000CE2E
{
    mangled_assert("_chatEnterChannel@28");
    todo("implement");
    _sub_1000CE2E(chat, channel, password, callbacks, callback, param, blocking);
}

_extern void _sub_1000D0EC(void *, char const *, char const *);
void chatLeaveChannel(void *chat, char const *channel, char const *reason) // 0x1000D0EC
{
    mangled_assert("_chatLeaveChannel@12");
    todo("implement");
    _sub_1000D0EC(chat, channel, reason);
}

_extern void _sub_1000D181(void *, char const *, char const *, __int32);
void chatSendChannelMessage(void *chat, char const *channel, char const *message, __int32 type) // 0x1000D181
{
    mangled_assert("_chatSendChannelMessage@16");
    todo("implement");
    _sub_1000D181(chat, channel, message, type);
}

_extern void _sub_1000D446(void *, char const *, __int32, char const **, __int32 *, void *);
void ciEnumUsersCallback(void *chat, char const *channel, __int32 numUsers, char const **users, __int32 *modes, void *param) // 0x1000D446
{
    mangled_assert("_ciEnumUsersCallback@24");
    todo("implement");
    _sub_1000D446(chat, channel, numUsers, users, modes, param);
}

_extern void _sub_1000CEA0(void *, char const *, void (*)(void *, CHATBool, char const *, __int32, char const **, __int32 *, void *), void *, CHATBool);
void chatEnumUsers(void *chat, char const *channel, void (*callback)(void *, CHATBool, char const *, __int32, char const **, __int32 *, void *), void *param, CHATBool blocking) // 0x1000CEA0
{
    mangled_assert("_chatEnumUsers@20");
    todo("implement");
    _sub_1000CEA0(chat, channel, callback, param, blocking);
}

_extern void _sub_1000D26C(void *, char const *, char const *, __int32);
void chatSendUserMessage(void *chat, char const *user, char const *message, __int32 type) // 0x1000D26C
{
    mangled_assert("_chatSendUserMessage@16");
    todo("implement");
    _sub_1000D26C(chat, user, message, type);
}

_extern CHATBool _sub_1000CF9A(void *, char const *, char const **, char const **);
CHATBool chatGetBasicUserInfoNoWait(void *chat, char const *nick, char const **user, char const **address) // 0x1000CF9A
{
    mangled_assert("_chatGetBasicUserInfoNoWait@16");
    todo("implement");
    CHATBool __result = _sub_1000CF9A(chat, nick, user, address);
    return __result;
}

_extern void _sub_1000D05B(void *, char const *, __int32, char const **, void (*)(void *, CHATBool, char const *, __int32, char const **, char const **, void *), void *, CHATBool);
void chatGetGlobalKeys(void *chat, char const *target, __int32 num, char const **keys, void (*callback)(void *, CHATBool, char const *, __int32, char const **, char const **, void *), void *param, CHATBool blocking) // 0x1000D05B
{
    mangled_assert("_chatGetGlobalKeys@28");
    todo("implement");
    _sub_1000D05B(chat, target, num, keys, callback, param, blocking);
}

_extern void _sub_1000D2E3(void *, char const *, char const *, __int32, char const **, char const **);
void chatSetChannelKeys(void *chat, char const *channel, char const *user, __int32 num, char const **keys, char const **values) // 0x1000D2E3
{
    mangled_assert("_chatSetChannelKeys@24");
    todo("implement");
    _sub_1000D2E3(chat, channel, user, num, keys, values);
}

_extern void _sub_1000CFC0(void *, char const *, char const *, __int32, char const **, void (*)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *, CHATBool);
void chatGetChannelKeys(void *chat, char const *channel, char const *user, __int32 num, char const **keys, void (*callback)(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *), void *param, CHATBool blocking) // 0x1000CFC0
{
    mangled_assert("_chatGetChannelKeys@32");
    todo("implement");
    _sub_1000CFC0(chat, channel, user, num, keys, callback, param, blocking);
}

/* ---------- private code */

_extern CHATBool _sub_1000D41E(void *, __int32);
_static CHATBool ciCheckForID(void *chat, __int32 ID) // 0x1000D41E
{
    mangled_assert("ciCheckForID");
    todo("implement");
    CHATBool __result = _sub_1000D41E(chat, ID);
    return __result;
}

_extern void _sub_1000D7B2(void *, __int32);
_static void ciThink(void *chat, __int32 ID) // 0x1000D7B2
{
    mangled_assert("ciThink");
    todo("implement");
    _sub_1000D7B2(chat, ID);
}

_extern void _sub_1000D7A2(void *, __int32, char const *, void *);
_static void ciSetQuietModeEnumJoinedChannels(void *chat, __int32 index, char const *channel, void *param) // 0x1000D7A2
{
    mangled_assert("ciSetQuietModeEnumJoinedChannels");
    todo("implement");
    _sub_1000D7A2(chat, index, channel, param);
}

_extern char *_sub_1000D4AC(...);
_static char *ciRandomCookie(...) // 0x1000D4AC
{
    mangled_assert("ciRandomCookie");
    todo("implement");
    char * __result = _sub_1000D4AC(arg);
    return __result;
}

_extern void _sub_1000D636(void *, char const *, char const *, __int32, char const **);
_static void ciSendGetKey(void *chat, char const *target, char const *cookie, __int32 num, char const **keys) // 0x1000D636
{
    mangled_assert("ciSendGetKey");
    todo("implement");
    _sub_1000D636(chat, target, cookie, num, keys);
}

_extern CHATBool _sub_1000D4E4(void *, char const *, char const *, char const *, __int32, char const **);
_static CHATBool ciSendGetChannelKey(void *chat, char const *channel, char const *nick, char const *cookie, __int32 num, char const **keys) // 0x1000D4E4
{
    mangled_assert("ciSendGetChannelKey");
    todo("implement");
    CHATBool __result = _sub_1000D4E4(chat, channel, nick, cookie, num, keys);
    return __result;
}
#endif

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

/* ---------- definitions */

struct ciChatChannel
{
    char name[257]; // 0x0
    chatChannelCallbacks callbacks; // 0x104
    HashImplementation *users; // 0x134
    CHATChannelMode mode; // 0x138
    CHATBool gotMode; // 0x154
    char *password; // 0x158
    CHATBool joinCallbackCalled; // 0x15C
    char topic[128]; // 0x160
};
static_assert(sizeof(ciChatChannel) == 480, "Invalid ciChatChannel size");

struct ciChatUser
{
    char name[128]; // 0x0
    char user[24]; // 0x80
    char address[64]; // 0x98
    CHATBool gotUserAndAddress; // 0xD8
    __int32 mode; // 0xDC
};
static_assert(sizeof(ciChatUser) == 224, "Invalid ciChatUser size");

struct ciUserEnumChannelsData
{
    void *chat; // 0x0
    ciChatUser *user; // 0x4
    void (*callback)(void *, char const *, char const *, void *); // 0x8
    void *param; // 0xC
};
static_assert(sizeof(ciUserEnumChannelsData) == 16, "Invalid ciUserEnumChannelsData size");

struct ciUserChangedNickData
{
    void *chat; // 0x0
    char const *oldNick; // 0x4
    char const *newNick; // 0x8
};
static_assert(sizeof(ciUserChangedNickData) == 12, "Invalid ciUserChangedNickData size");

struct ciChannelListUsersData
{
    void *chat; // 0x0
    __int32 numUsers; // 0x4
    char **users; // 0x8
    __int32 *modes; // 0xC
};
static_assert(sizeof(ciChannelListUsersData) == 16, "Invalid ciChannelListUsersData size");

struct ciEnumJoinedChannelsData
{
    void *chat; // 0x0
    void (*callback)(void *, __int32, char const *, void *); // 0x4
    void *param; // 0x8
    __int32 index; // 0xC
};
static_assert(sizeof(ciEnumJoinedChannelsData) == 16, "Invalid ciEnumJoinedChannelsData size");

struct ciSetUserBasicInfoData
{
    ciChatUser *chatUser; // 0x0
    char *user; // 0x4
    char *address; // 0x8
};
static_assert(sizeof(ciSetUserBasicInfoData) == 12, "Invalid ciSetUserBasicInfoData size");

struct ciGetUserBasicInfoData
{
    CHATBool found; // 0x0
    ciChatUser *chatUser; // 0x4
    char *user; // 0x8
    char *address; // 0xC
};
static_assert(sizeof(ciGetUserBasicInfoData) == 16, "Invalid ciGetUserBasicInfoData size");

struct ciClearAllUsersData
{
    void *chat; // 0x0
    ciChatChannel *channel; // 0x4
};
static_assert(sizeof(ciClearAllUsersData) == 8, "Invalid ciClearAllUsersData size");

/* ---------- prototypes */

extern CHATBool ciInitChannels(ciConnection *connection);
extern void ciCleanupChannels(void *chat);
extern void ciChannelEntering(void *chat, char const *channel);
extern CHATBool ciIsEnteringChannel(void *chat, char const *channel);
extern void ciChannelEntered(void *chat, char const *channel, chatChannelCallbacks *callbacks);
extern void ciChannelLeft(void *chat, char const *channel);
extern chatChannelCallbacks *ciGetChannelCallbacks(void *chat, char const *channel);
extern void ciChannelListUsers(void *chat, char const *channel, void (*callback)(void *, char const *, __int32, char const **, __int32 *, void *), void *param);
extern CHATBool ciInChannel(void *chat, char const *channel);
extern CHATBool ciGetChannelMode(void *chat, char const *channel, CHATChannelMode *mode);
extern void ciSetChannelMode(void *chat, char const *channel, CHATChannelMode *mode);
extern void ciSetChannelPassword(void *chat, char const *channel, char const *password);
extern void ciJoinCallbackCalled(void *chat, char const *channel);
extern CHATBool ciWasJoinCallbackCalled(void *chat, char const *channel);
extern void ciSetChannelTopic(void *chat, char const *channel, char const *topic);
extern void ciUserEnteredChannel(void *chat, char const *name, char const *channel, __int32 mode, char const *user, char const *address);
extern void ciUserLeftChannel(void *chat, char const *user, char const *channel);
extern void ciUserEnumChannels(void *chat, char const *user, void (*callback)(void *, char const *, char const *, void *), void *param);
extern void ciUserChangedNick(void *chat, char const *oldNick, char const *newNick);
extern void ciUserChangedMode(void *chat, char const *user, char const *channel, __int32 mode, CHATBool enabled);
extern void ciEnumJoinedChannels(void *chat, void (*callback)(void *, __int32, char const *, void *), void *param);
extern void ciSetUserBasicInfo(void *chat, char const *nick, char const *user, char const *address);
extern CHATBool ciGetUserBasicInfo(void *chat, char const *nick, char const **user, char const **address);
extern void ciClearAllUsers(void *chat);

_static __int32 ciHashString(char const *str);
_static ciChatChannel *ciGetChannel(ciConnection *connection, char const *channel);
_static __int32 ciChannelTableHashFn(void const *elem, __int32 numBuckets);
_static void ciChannelTableElementFreeFn(void *elem);
_static void ciUserTableElementFreeFn(void *elem);
_static __int32 ciChannelTableCompareFn(void const *elem1, void const *elem2);
_static void ciChannelListUsersMap(void *elem, void *clientData);
_static void ciUserEnumChannelsMap(void *elem, void *clientData);
_static void ciUserChangeNickMap(void *elem, void *clientData);
_static void ciEnumJoinedChannelsMap(void *elem, void *clientData);
_static void ciSetUserBasicInfoMap(void *elem, void *clientData);
_static void ciGetUserBasicInfoMap(void *elem, void *clientData);
_static void ciClearAllUsersUsersMap(void *elem, void *clientData);
_static void ciClearAllUsersChannelMap(void *elem, void *clientData);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern CHATBool _sub_100091B7(ciConnection *);
CHATBool ciInitChannels(ciConnection *connection) // 0x100091B7
{
    mangled_assert("_ciInitChannels@4");
    todo("implement");
    CHATBool __result = _sub_100091B7(connection);
    return __result;
}

_extern void _sub_10008F31(void *);
void ciCleanupChannels(void *chat) // 0x10008F31
{
    mangled_assert("_ciCleanupChannels@4");
    todo("implement");
    _sub_10008F31(chat);
}

_extern void _sub_10008D9C(void *, char const *);
void ciChannelEntering(void *chat, char const *channel) // 0x10008D9C
{
    mangled_assert("_ciChannelEntering@8");
    todo("implement");
    _sub_10008D9C(chat, channel);
}

_extern CHATBool _sub_10009210(void *, char const *);
CHATBool ciIsEnteringChannel(void *chat, char const *channel) // 0x10009210
{
    mangled_assert("_ciIsEnteringChannel@8");
    todo("implement");
    CHATBool __result = _sub_10009210(chat, channel);
    return __result;
}

_extern void _sub_10008CBD(void *, char const *, chatChannelCallbacks *);
void ciChannelEntered(void *chat, char const *channel, chatChannelCallbacks *callbacks) // 0x10008CBD
{
    mangled_assert("_ciChannelEntered@12");
    todo("implement");
    _sub_10008CBD(chat, channel, callbacks);
}

_extern void _sub_10008DE3(void *, char const *);
void ciChannelLeft(void *chat, char const *channel) // 0x10008DE3
{
    mangled_assert("_ciChannelLeft@8");
    todo("implement");
    _sub_10008DE3(chat, channel);
}

_extern chatChannelCallbacks *_sub_10009066(void *, char const *);
chatChannelCallbacks *ciGetChannelCallbacks(void *chat, char const *channel) // 0x10009066
{
    mangled_assert("_ciGetChannelCallbacks@8");
    todo("implement");
    chatChannelCallbacks * __result = _sub_10009066(chat, channel);
    return __result;
}

_extern void _sub_10008E46(void *, char const *, void (*)(void *, char const *, __int32, char const **, __int32 *, void *), void *);
void ciChannelListUsers(void *chat, char const *channel, void (*callback)(void *, char const *, __int32, char const **, __int32 *, void *), void *param) // 0x10008E46
{
    mangled_assert("_ciChannelListUsers@16");
    todo("implement");
    _sub_10008E46(chat, channel, callback, param);
}

_extern CHATBool _sub_100091A1(void *, char const *);
CHATBool ciInChannel(void *chat, char const *channel) // 0x100091A1
{
    mangled_assert("_ciInChannel@8");
    todo("implement");
    CHATBool __result = _sub_100091A1(chat, channel);
    return __result;
}

_extern CHATBool _sub_1000907F(void *, char const *, CHATChannelMode *);
CHATBool ciGetChannelMode(void *chat, char const *channel, CHATChannelMode *mode) // 0x1000907F
{
    mangled_assert("_ciGetChannelMode@12");
    todo("implement");
    CHATBool __result = _sub_1000907F(chat, channel, mode);
    return __result;
}

_extern void _sub_10009277(void *, char const *, CHATChannelMode *);
void ciSetChannelMode(void *chat, char const *channel, CHATChannelMode *mode) // 0x10009277
{
    mangled_assert("_ciSetChannelMode@12");
    todo("implement");
    _sub_10009277(chat, channel, mode);
}

_extern void _sub_100092A9(void *, char const *, char const *);
void ciSetChannelPassword(void *chat, char const *channel, char const *password) // 0x100092A9
{
    mangled_assert("_ciSetChannelPassword@12");
    todo("implement");
    _sub_100092A9(chat, channel, password);
}

_extern void _sub_10009259(void *, char const *);
void ciJoinCallbackCalled(void *chat, char const *channel) // 0x10009259
{
    mangled_assert("_ciJoinCallbackCalled@8");
    todo("implement");
    _sub_10009259(chat, channel);
}

_extern CHATBool _sub_1000970D(void *, char const *);
CHATBool ciWasJoinCallbackCalled(void *chat, char const *channel) // 0x1000970D
{
    mangled_assert("_ciWasJoinCallbackCalled@8");
    todo("implement");
    CHATBool __result = _sub_1000970D(chat, channel);
    return __result;
}

_extern void _sub_10009308(void *, char const *, char const *);
void ciSetChannelTopic(void *chat, char const *channel, char const *topic) // 0x10009308
{
    mangled_assert("_ciSetChannelTopic@12");
    todo("implement");
    _sub_10009308(chat, channel, topic);
}

_extern void _sub_100095A3(void *, char const *, char const *, __int32, char const *, char const *);
void ciUserEnteredChannel(void *chat, char const *name, char const *channel, __int32 mode, char const *user, char const *address) // 0x100095A3
{
    mangled_assert("_ciUserEnteredChannel@24");
    todo("implement");
    _sub_100095A3(chat, name, channel, mode, user, address);
}

_extern void _sub_100096BB(void *, char const *, char const *);
void ciUserLeftChannel(void *chat, char const *user, char const *channel) // 0x100096BB
{
    mangled_assert("_ciUserLeftChannel@12");
    todo("implement");
    _sub_100096BB(chat, user, channel);
}

_extern void _sub_10009641(void *, char const *, void (*)(void *, char const *, char const *, void *), void *);
void ciUserEnumChannels(void *chat, char const *user, void (*callback)(void *, char const *, char const *, void *), void *param) // 0x10009641
{
    mangled_assert("_ciUserEnumChannels@16");
    todo("implement");
    _sub_10009641(chat, user, callback, param);
}

_extern void _sub_10009573(void *, char const *, char const *);
void ciUserChangedNick(void *chat, char const *oldNick, char const *newNick) // 0x10009573
{
    mangled_assert("_ciUserChangedNick@12");
    todo("implement");
    _sub_10009573(chat, oldNick, newNick);
}

_extern void _sub_10009496(void *, char const *, char const *, __int32, CHATBool);
void ciUserChangedMode(void *chat, char const *user, char const *channel, __int32 mode, CHATBool enabled) // 0x10009496
{
    mangled_assert("_ciUserChangedMode@20");
    todo("implement");
    _sub_10009496(chat, user, channel, mode, enabled);
}

_extern void _sub_10008FDD(void *, void (*)(void *, __int32, char const *, void *), void *);
void ciEnumJoinedChannels(void *chat, void (*callback)(void *, __int32, char const *, void *), void *param) // 0x10008FDD
{
    mangled_assert("_ciEnumJoinedChannels@12");
    todo("implement");
    _sub_10008FDD(chat, callback, param);
}

_extern void _sub_10009340(void *, char const *, char const *, char const *);
void ciSetUserBasicInfo(void *chat, char const *nick, char const *user, char const *address) // 0x10009340
{
    mangled_assert("_ciSetUserBasicInfo@16");
    todo("implement");
    _sub_10009340(chat, nick, user, address);
}

_extern CHATBool _sub_100090B7(void *, char const *, char const **, char const **);
CHATBool ciGetUserBasicInfo(void *chat, char const *nick, char const **user, char const **address) // 0x100090B7
{
    mangled_assert("_ciGetUserBasicInfo@16");
    todo("implement");
    CHATBool __result = _sub_100090B7(chat, nick, user, address);
    return __result;
}

_extern void _sub_10008F5A(void *);
void ciClearAllUsers(void *chat) // 0x10008F5A
{
    mangled_assert("_ciClearAllUsers@4");
    todo("implement");
    _sub_10008F5A(chat);
}

/* ---------- private code */

_extern __int32 _sub_10009175(char const *);
_static __int32 ciHashString(char const *str) // 0x10009175
{
    mangled_assert("ciHashString");
    todo("implement");
    __int32 __result = _sub_10009175(str);
    return __result;
}

_extern ciChatChannel *_sub_10009033(ciConnection *, char const *);
_static ciChatChannel *ciGetChannel(ciConnection *connection, char const *channel) // 0x10009033
{
    mangled_assert("ciGetChannel");
    todo("implement");
    ciChatChannel * __result = _sub_10009033(connection, channel);
    return __result;
}

_extern __int32 _sub_10009701(void const *, __int32);
_static __int32 ciChannelTableHashFn(void const *elem, __int32 numBuckets) // 0x10009701
{
    mangled_assert("ciChannelTableHashFn");
    todo("implement");
    __int32 __result = _sub_10009701(elem, numBuckets);
    return __result;
}

_extern void _sub_10008F0B(void *);
_static void ciChannelTableElementFreeFn(void *elem) // 0x10008F0B
{
    mangled_assert("ciChannelTableElementFreeFn");
    todo("implement");
    _sub_10008F0B(elem);
}

_extern void _sub_100096FE(void *);
_static void ciUserTableElementFreeFn(void *elem) // 0x100096FE
{
    mangled_assert("ciUserTableElementFreeFn");
    todo("implement");
    _sub_100096FE(elem);
}

_extern __int32 _sub_10014FFB(void const *, void const *);
_static __int32 ciChannelTableCompareFn(void const *elem1, void const *elem2) // 0x10014FFB
{
    mangled_assert("ciChannelTableCompareFn");
    todo("implement");
    __int32 __result = _sub_10014FFB(elem1, elem2);
    return __result;
}

_extern void _sub_10008EA9(void *, void *);
_static void ciChannelListUsersMap(void *elem, void *clientData) // 0x10008EA9
{
    mangled_assert("ciChannelListUsersMap");
    todo("implement");
    _sub_10008EA9(elem, clientData);
}

_extern void _sub_1000968E(void *, void *);
_static void ciUserEnumChannelsMap(void *elem, void *clientData) // 0x1000968E
{
    mangled_assert("ciUserEnumChannelsMap");
    todo("implement");
    _sub_1000968E(elem, clientData);
}

_extern void _sub_100093EB(void *, void *);
_static void ciUserChangeNickMap(void *elem, void *clientData) // 0x100093EB
{
    mangled_assert("ciUserChangeNickMap");
    todo("implement");
    _sub_100093EB(elem, clientData);
}

_extern void _sub_10009016(void *, void *);
_static void ciEnumJoinedChannelsMap(void *elem, void *clientData) // 0x10009016
{
    mangled_assert("ciEnumJoinedChannelsMap");
    todo("implement");
    _sub_10009016(elem, clientData);
}

_extern void _sub_1000938A(void *, void *);
_static void ciSetUserBasicInfoMap(void *elem, void *clientData) // 0x1000938A
{
    mangled_assert("ciSetUserBasicInfoMap");
    todo("implement");
    _sub_1000938A(elem, clientData);
}

_extern void _sub_1000911E(void *, void *);
_static void ciGetUserBasicInfoMap(void *elem, void *clientData) // 0x1000911E
{
    mangled_assert("ciGetUserBasicInfoMap");
    todo("implement");
    _sub_1000911E(elem, clientData);
}

_extern void _sub_10008FC4(void *, void *);
_static void ciClearAllUsersUsersMap(void *elem, void *clientData) // 0x10008FC4
{
    mangled_assert("ciClearAllUsersUsersMap");
    todo("implement");
    _sub_10008FC4(elem, clientData);
}

_extern void _sub_10008F72(void *, void *);
_static void ciClearAllUsersChannelMap(void *elem, void *clientData) // 0x10008F72
{
    mangled_assert("ciClearAllUsersChannelMap");
    todo("implement");
    _sub_10008F72(elem, clientData);
}
#endif

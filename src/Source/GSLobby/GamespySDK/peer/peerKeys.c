#if 0
/* ---------- headers */

#include "decomp.h"
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
#include <winuser.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_serverbrowsing.h>
#include <ime_cmodes.h>
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
#include <GSLobby\GamespySDK\peer\peerGlobalCallbacks.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <stdlib.h>
#include <crtdefs.h>
#include <winbase.h>
#include <sal.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <concurrencysal.h>
#include <imm.h>
#include <minwinbase.h>
#include <vadefs.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_internal.h>
#include <GSLobby\GamespySDK\darray.h>
#include <synchapi.h>
#include <poppack.h>
#include <guiddef.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <GSLobby\GamespySDK\pinger\pinger.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <GSLobby\GamespySDK\peer\peerCallbacks.h>
#include <inaddr.h>
#include <stralign.h>
#include <namespaceapi.h>
#include <winsvc.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <GSLobby\GamespySDK\qr2\qr2.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <GSLobby\GamespySDK\peer\peerPlayers.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <GSLobby\GamespySDK\peer\peerKeys.h>
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <GSLobby\GamespySDK\peer\peer.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <string.h>
#include <GSLobby\GamespySDK\peer\peerRooms.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <limits.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <GSLobby\GamespySDK\peer\peerMangle.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <namedpipeapi.h>
#include <securityappcontainer.h>
#include <wincon.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>

/* ---------- constants */

/* ---------- definitions */

struct piWatchKey
{
    char *key; // 0x0
};
static_assert(sizeof(piWatchKey) == 4, "Invalid piWatchKey size");

struct piCacheKey
{
    char *nick; // 0x0
    char *key; // 0x4
    char *value; // 0x8
};
static_assert(sizeof(piCacheKey) == 12, "Invalid piCacheKey size");

struct piRemoveExistingKeysData
{
    __int32 num; // 0x0
    char const **keys; // 0x4
    HashImplementation *watchKeys; // 0x8
};
static_assert(sizeof(piRemoveExistingKeysData) == 12, "Invalid piRemoveExistingKeysData size");

struct piPlayerChangedNickMapData
{
    char const *oldNick; // 0x0
    char const *newNick; // 0x4
};
static_assert(sizeof(piPlayerChangedNickMapData) == 8, "Invalid piPlayerChangedNickMapData size");

struct piSetupKeysMapData
{
    __int32 next; // 0x0
    char **keys; // 0x4
};
static_assert(sizeof(piSetupKeysMapData) == 8, "Invalid piSetupKeysMapData size");

struct piCleanseRoomCacheMapData
{
    void *peer; // 0x0
    RoomType roomType; // 0x4
};
static_assert(sizeof(piCleanseRoomCacheMapData) == 8, "Invalid piCleanseRoomCacheMapData size");

/* ---------- prototypes */

extern __int32 WatchKeysHash(void const *elem, __int32 numBuckets);
extern __int32 WatchKeysCompare(void const *elem1, void const *elem2);
extern void WatchKeysFree(void *elem);
extern __int32 WatchCacheHash(void const *elem, __int32 numBuckets);
extern __int32 WatchCacheCompare(void const *elem1, void const *elem2);
extern void WatchCacheFree(void *elem);
extern PEERBool piKeysInit(void *peer);
extern void piKeysCleanup(void *peer);
extern void piKeyCacheCleanse(void *peer);
extern void piGlobalKeyChanged(void *peer, char const *nick, char const *key, char const *value);
extern void piRoomKeyChanged(void *peer, RoomType roomType, char const *nick, char const *key, char const *value);
extern void piKeyCachePlayerChangedNick(void *peer, char const *oldNick, char const *newNick);
extern void piKeyCacheRefresh(void *peer, RoomType roomType, char const *nick);
extern void piKeyCacheRefreshPlayer(void *peer, RoomType roomType, char const *nick);
extern void piKeyCacheRefreshRoom(void *peer, RoomType roomType);

_static void piCleanseGlobalCacheMap(void *elem, void *clientData);
_static void piCleanseRoomCacheMap(void *elem, void *clientData);
_static void piGetGlobalKeysCallback(void *chat, CHATBool success, char const *user, __int32 num, char const **keys, char const **values, void *param);
_static void piGetRoomKeysCallback(void *chat, CHATBool success, char const *channel, char const *user, __int32 num, char const **keys, char const **values, void *param);
_static PEERBool piKeyChanged(void *peer, char const *nick, char const *key, char const *value, HashImplementation *watchKeys, HashImplementation *watchCache, PEERBool inRoom, RoomType roomType);
_static void piPlayerChangedNickMap(void *elem, void *clientData);
_static void piSetupKeysMap(void *elem, void *clientData);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_10012401(void const *, __int32);
__int32 WatchKeysHash(void const *elem, __int32 numBuckets) // 0x10012401
{
    mangled_assert("_WatchKeysHash@8");
    todo("implement");
    __int32 __result = _sub_10012401(elem, numBuckets);
    return __result;
}

_extern __int32 _sub_1000EC37(void const *, void const *);
__int32 WatchKeysCompare(void const *elem1, void const *elem2) // 0x1000EC37
{
    __int32 __result = _sub_1000EC37(elem1, elem2);
    return __result;
}

_extern void _sub_10010774(void *);
void WatchKeysFree(void *elem) // 0x10010774
{
    _sub_10010774(elem);
}

_extern __int32 _sub_100123D3(void const *, __int32);
__int32 WatchCacheHash(void const *elem, __int32 numBuckets) // 0x100123D3
{
    mangled_assert("_WatchCacheHash@8");
    todo("implement");
    __int32 __result = _sub_100123D3(elem, numBuckets);
    return __result;
}

_extern __int32 _sub_10012386(void const *, void const *);
__int32 WatchCacheCompare(void const *elem1, void const *elem2) // 0x10012386
{
    mangled_assert("_WatchCacheCompare");
    todo("implement");
    __int32 __result = _sub_10012386(elem1, elem2);
    return __result;
}

_extern void _sub_100123B1(void *);
void WatchCacheFree(void *elem) // 0x100123B1
{
    mangled_assert("_WatchCacheFree@4");
    todo("implement");
    _sub_100123B1(elem);
}

_extern PEERBool _sub_10012AF0(void *);
PEERBool piKeysInit(void *peer) // 0x10012AF0
{
    mangled_assert("_piKeysInit@4");
    todo("implement");
    PEERBool __result = _sub_10012AF0(peer);
    return __result;
}

_extern void _sub_10012A9E(void *);
void piKeysCleanup(void *peer) // 0x10012A9E
{
    mangled_assert("_piKeysCleanup@4");
    todo("implement");
    _sub_10012A9E(peer);
}

_extern void _sub_1001263E(void *);
void piKeyCacheCleanse(void *peer) // 0x1001263E
{
    mangled_assert("_piKeyCacheCleanse@4");
    todo("implement");
    _sub_1001263E(peer);
}

_extern void _sub_100125BE(void *, char const *, char const *, char const *);
void piGlobalKeyChanged(void *peer, char const *nick, char const *key, char const *value) // 0x100125BE
{
    mangled_assert("_piGlobalKeyChanged@16");
    todo("implement");
    _sub_100125BE(peer, nick, key, value);
}

_extern void _sub_10012BF8(void *, RoomType, char const *, char const *, char const *);
void piRoomKeyChanged(void *peer, RoomType roomType, char const *nick, char const *key, char const *value) // 0x10012BF8
{
    mangled_assert("_piRoomKeyChanged@20");
    todo("implement");
    _sub_10012BF8(peer, roomType, nick, key, value);
}

_extern void _sub_100126A1(void *, char const *, char const *);
void piKeyCachePlayerChangedNick(void *peer, char const *oldNick, char const *newNick) // 0x100126A1
{
    mangled_assert("_piKeyCachePlayerChangedNick@12");
    todo("implement");
    _sub_100126A1(peer, oldNick, newNick);
}

_extern void _sub_10012702(void *, RoomType, char const *);
void piKeyCacheRefresh(void *peer, RoomType roomType, char const *nick) // 0x10012702
{
    mangled_assert("_piKeyCacheRefresh@12");
    todo("implement");
    _sub_10012702(peer, roomType, nick);
}

_extern void _sub_10012902(void *, RoomType, char const *);
void piKeyCacheRefreshPlayer(void *peer, RoomType roomType, char const *nick) // 0x10012902
{
    mangled_assert("_piKeyCacheRefreshPlayer@12");
    todo("implement");
    _sub_10012902(peer, roomType, nick);
}

_extern void _sub_10012907(void *, RoomType);
void piKeyCacheRefreshRoom(void *peer, RoomType roomType) // 0x10012907
{
    mangled_assert("_piKeyCacheRefreshRoom@8");
    todo("implement");
    _sub_10012907(peer, roomType);
}

/* ---------- private code */

_extern void _sub_1001242E(void *, void *);
_static void piCleanseGlobalCacheMap(void *elem, void *clientData) // 0x1001242E
{
    mangled_assert("piCleanseGlobalCacheMap");
    todo("implement");
    _sub_1001242E(elem, clientData);
}

_extern void _sub_1001249A(void *, void *);
_static void piCleanseRoomCacheMap(void *elem, void *clientData) // 0x1001249A
{
    mangled_assert("piCleanseRoomCacheMap");
    todo("implement");
    _sub_1001249A(elem, clientData);
}

_extern void _sub_100124EB(void *, CHATBool, char const *, __int32, char const **, char const **, void *);
_static void piGetGlobalKeysCallback(void *chat, CHATBool success, char const *user, __int32 num, char const **keys, char const **values, void *param) // 0x100124EB
{
    mangled_assert("piGetGlobalKeysCallback");
    todo("implement");
    _sub_100124EB(chat, success, user, num, keys, values, param);
}

_extern void _sub_10012529(void *, CHATBool, char const *, char const *, __int32, char const **, char const **, void *);
_static void piGetRoomKeysCallback(void *chat, CHATBool success, char const *channel, char const *user, __int32 num, char const **keys, char const **values, void *param) // 0x10012529
{
    mangled_assert("piGetRoomKeysCallback");
    todo("implement");
    _sub_10012529(chat, success, channel, user, num, keys, values, param);
}

_extern PEERBool _sub_10012919(void *, char const *, char const *, char const *, HashImplementation *, HashImplementation *, PEERBool, RoomType);
_static PEERBool piKeyChanged(void *peer, char const *nick, char const *key, char const *value, HashImplementation *watchKeys, HashImplementation *watchCache, PEERBool inRoom, RoomType roomType) // 0x10012919
{
    mangled_assert("piKeyChanged");
    todo("implement");
    PEERBool __result = _sub_10012919(peer, nick, key, value, watchKeys, watchCache, inRoom, roomType);
    return __result;
}

_extern void _sub_10012BC6(void *, void *);
_static void piPlayerChangedNickMap(void *elem, void *clientData) // 0x10012BC6
{
    mangled_assert("piPlayerChangedNickMap");
    todo("implement");
    _sub_10012BC6(elem, clientData);
}

_extern void _sub_10012C3D(void *, void *);
_static void piSetupKeysMap(void *elem, void *clientData) // 0x10012C3D
{
    mangled_assert("piSetupKeysMap");
    todo("implement");
    _sub_10012C3D(elem, clientData);
}
#endif

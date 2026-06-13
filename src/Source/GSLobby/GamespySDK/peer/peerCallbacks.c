#if 0
/* ---------- headers */

#include "decomp.h"
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <winuser.h>
#include <GSLobby\GamespySDK\peer\peer.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_serverbrowsing.h>
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
#include <stdlib.h>
#include <stringapiset.h>
#include <limits.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <string.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <crtdefs.h>
#include <imm.h>
#include <minwinbase.h>
#include <sal.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_internal.h>
#include <concurrencysal.h>
#include <GSLobby\GamespySDK\darray.h>
#include <vadefs.h>
#include <synchapi.h>
#include <poppack.h>
#include <guiddef.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <specstrings_strict.h>
#include <GSLobby\GamespySDK\pinger\pinger.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
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
#include <GSLobby\GamespySDK\peer\peerCallbacks.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
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
#include <wtime.inl>
#include <ktmtypes.h>
#include <pshpack4.h>

/* ---------- constants */

/* ---------- definitions */

struct piCallbackData
{
    piCallbackType type; // 0x0
    PEERBool success; // 0x4
    void *callback; // 0x8
    void *callbackParam; // 0xC
    void *params; // 0x10
    __int32 ID; // 0x14
    PEERBool inCall; // 0x18
};
static_assert(sizeof(piCallbackData) == 28, "Invalid piCallbackData size");

struct piCallbackFuncs
{
    piCallbackType type; // 0x0
    PEERBool (*copy)(void *, void *); // 0x4
    void (*free)(void *); // 0x8
    void (*call)(void *, piCallbackData *); // 0xC
};
static_assert(sizeof(piCallbackFuncs) == 16, "Invalid piCallbackFuncs size");

typedef piGlobalGlobalKeyChangedParams piGlobalKeyChangedParams;

struct piConnectParams
{
    __int32 dummy; // 0x0
};
static_assert(sizeof(piConnectParams) == 4, "Invalid piConnectParams size");

struct piJoinRoomParams
{
    PEERJoinResult result; // 0x0
    RoomType roomType; // 0x4
};
static_assert(sizeof(piJoinRoomParams) == 8, "Invalid piJoinRoomParams size");

struct piListGroupRoomsParams
{
    __int32 groupID; // 0x0
    _SBServer *server; // 0x4
    char *name; // 0x8
    __int32 numWaiting; // 0xC
    __int32 maxWaiting; // 0x10
    __int32 numGames; // 0x14
    __int32 numPlaying; // 0x18
};
static_assert(sizeof(piListGroupRoomsParams) == 28, "Invalid piListGroupRoomsParams size");

struct piListingGamesParams
{
    char *name; // 0x0
    _SBServer *server; // 0x4
    PEERBool staging; // 0x8
    __int32 msg; // 0xC
    __int32 progress; // 0x10
};
static_assert(sizeof(piListingGamesParams) == 20, "Invalid piListingGamesParams size");

struct piNickErrorParams
{
    __int32 type; // 0x0
    char *nick; // 0x4
};
static_assert(sizeof(piNickErrorParams) == 8, "Invalid piNickErrorParams size");

struct piEnumPlayersParams
{
    RoomType roomType; // 0x0
    __int32 index; // 0x4
    char *nick; // 0x8
    __int32 flags; // 0xC
};
static_assert(sizeof(piEnumPlayersParams) == 16, "Invalid piEnumPlayersParams size");

struct piGetPlayerProfileIDParams
{
    char *nick; // 0x0
    __int32 profileID; // 0x4
};
static_assert(sizeof(piGetPlayerProfileIDParams) == 8, "Invalid piGetPlayerProfileIDParams size");

struct piGetPlayerIPParams
{
    char *nick; // 0x0
    unsigned __int32 IP; // 0x4
};
static_assert(sizeof(piGetPlayerIPParams) == 8, "Invalid piGetPlayerIPParams size");

struct piRoomMessageParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    char *message; // 0x8
    MessageType messageType; // 0xC
};
static_assert(sizeof(piRoomMessageParams) == 16, "Invalid piRoomMessageParams size");

struct piRoomUTMParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    char *command; // 0x8
    char *parameters; // 0xC
    PEERBool authenticated; // 0x10
};
static_assert(sizeof(piRoomUTMParams) == 20, "Invalid piRoomUTMParams size");

struct piRoomNameChangedParams
{
    RoomType roomType; // 0x0
};
static_assert(sizeof(piRoomNameChangedParams) == 4, "Invalid piRoomNameChangedParams size");

struct piRoomModeChangedParams
{
    RoomType roomType; // 0x0
    CHATChannelMode mode; // 0x4
};
static_assert(sizeof(piRoomModeChangedParams) == 32, "Invalid piRoomModeChangedParams size");

struct piPlayerMessageParams
{
    char *nick; // 0x0
    char *message; // 0x4
    MessageType messageType; // 0x8
};
static_assert(sizeof(piPlayerMessageParams) == 12, "Invalid piPlayerMessageParams size");

struct piPlayerUTMParams
{
    char *nick; // 0x0
    char *command; // 0x4
    char *parameters; // 0x8
    PEERBool authenticated; // 0xC
};
static_assert(sizeof(piPlayerUTMParams) == 16, "Invalid piPlayerUTMParams size");

struct piReadyChangedParams
{
    char *nick; // 0x0
    PEERBool ready; // 0x4
};
static_assert(sizeof(piReadyChangedParams) == 8, "Invalid piReadyChangedParams size");

struct piGameStartedParams
{
    unsigned __int32 IP; // 0x0
    char *message; // 0x4
};
static_assert(sizeof(piGameStartedParams) == 8, "Invalid piGameStartedParams size");

struct piPlayerJoinedParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
};
static_assert(sizeof(piPlayerJoinedParams) == 8, "Invalid piPlayerJoinedParams size");

struct piPlayerLeftParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    char *reason; // 0x8
};
static_assert(sizeof(piPlayerLeftParams) == 12, "Invalid piPlayerLeftParams size");

struct piKickedParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    char *reason; // 0x8
};
static_assert(sizeof(piKickedParams) == 12, "Invalid piKickedParams size");

struct piNewPlayerListParams
{
    RoomType roomType; // 0x0
};
static_assert(sizeof(piNewPlayerListParams) == 4, "Invalid piNewPlayerListParams size");

struct piPlayerChangedNickParams
{
    RoomType roomType; // 0x0
    char *oldNick; // 0x4
    char *newNick; // 0x8
};
static_assert(sizeof(piPlayerChangedNickParams) == 12, "Invalid piPlayerChangedNickParams size");

struct piPlayerInfoParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    unsigned __int32 IP; // 0x8
    __int32 profileID; // 0xC
};
static_assert(sizeof(piPlayerInfoParams) == 16, "Invalid piPlayerInfoParams size");

struct piDisconnectedParams
{
    char *reason; // 0x0
};
static_assert(sizeof(piDisconnectedParams) == 4, "Invalid piDisconnectedParams size");

struct piPingParams
{
    char *nick; // 0x0
    __int32 ping; // 0x4
};
static_assert(sizeof(piPingParams) == 8, "Invalid piPingParams size");

struct piCrossPingParams
{
    char *nick1; // 0x0
    char *nick2; // 0x4
    __int32 crossPing; // 0x8
};
static_assert(sizeof(piCrossPingParams) == 12, "Invalid piCrossPingParams size");

struct piChangeNickParams
{
    char *oldNick; // 0x0
    char *newNick; // 0x4
};
static_assert(sizeof(piChangeNickParams) == 8, "Invalid piChangeNickParams size");

struct piGlobalGlobalKeyChangedParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    char *key; // 0x8
    char *value; // 0xC
};
static_assert(sizeof(piGlobalGlobalKeyChangedParams) == 16, "Invalid piGlobalGlobalKeyChangedParams size");

struct piRoomKeyChangedParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    char *key; // 0x8
    char *value; // 0xC
};
static_assert(sizeof(piRoomKeyChangedParams) == 16, "Invalid piRoomKeyChangedParams size");

struct piGetGlobalKeysParams
{
    char *nick; // 0x0
    __int32 num; // 0x4
    char **keys; // 0x8
    char **values; // 0xC
};
static_assert(sizeof(piGetGlobalKeysParams) == 16, "Invalid piGetGlobalKeysParams size");

struct piGetRoomKeysParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    __int32 num; // 0x8
    char **keys; // 0xC
    char **values; // 0x10
};
static_assert(sizeof(piGetRoomKeysParams) == 20, "Invalid piGetRoomKeysParams size");

struct piPlayerFlagsChangedParams
{
    RoomType roomType; // 0x0
    char *nick; // 0x4
    __int32 oldFlags; // 0x8
    __int32 newFlags; // 0xC
};
static_assert(sizeof(piPlayerFlagsChangedParams) == 16, "Invalid piPlayerFlagsChangedParams size");

struct piAuthenticateCDKeyParams
{
    __int32 result; // 0x0
    char *message; // 0x4
};
static_assert(sizeof(piAuthenticateCDKeyParams) == 8, "Invalid piAuthenticateCDKeyParams size");

/* ---------- prototypes */

extern void piAddConnectCallback(void *peer, PEERBool success, void (*callback)(void *, PEERBool, void *), void *param, __int32 opID);
extern void piAddJoinRoomCallback(void *peer, PEERBool success, PEERJoinResult result, RoomType roomType, void (*callback)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *param, __int32 opID);
extern void piAddListGroupRoomsCallback(void *peer, PEERBool success, __int32 groupID, _SBServer *server, char const *name, __int32 numWaiting, __int32 maxWaiting, __int32 numGames, __int32 numPlaying, void (*callback)(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void *), void *param, __int32 opID);
extern void piAddListingGamesCallback(void *peer, PEERBool success, _SBServer *server, __int32 msg);
extern void piAddNickErrorCallback(void *peer, __int32 type, char const *nick, void *param, __int32 opID);
extern void piAddRoomMessageCallback(void *peer, RoomType roomType, char const *nick, char const *message, MessageType messageType);
extern void piAddRoomUTMCallback(void *peer, RoomType roomType, char const *nick, char const *command, char const *parameters, PEERBool authenticated);
extern void piAddRoomNameChangedCallback(void *peer, RoomType roomType);
extern void piAddRoomModeChangedCallback(void *peer, RoomType roomType, CHATChannelMode *mode);
extern void piAddPlayerMessageCallback(void *peer, char const *nick, char const *message, MessageType messageType);
extern void piAddPlayerUTMCallback(void *peer, char const *nick, char const *command, char const *parameters, PEERBool authenticated);
extern void piAddReadyChangedCallback(void *peer, char const *nick, PEERBool ready);
extern void piAddGameStartedCallback(void *peer, unsigned __int32 IP, char const *message);
extern void piAddPlayerJoinedCallback(void *peer, RoomType roomType, char const *nick);
extern void piAddPlayerLeftCallback(void *peer, RoomType roomType, char const *nick, char const *reason);
extern void piAddKickedCallback(void *peer, RoomType roomType, char const *nick, char const *reason);
extern void piAddNewPlayerListCallback(void *peer, RoomType roomType);
extern void piAddPlayerChangedNickCallback(void *peer, RoomType roomType, char const *oldNick, char const *newNick);
extern void piAddPlayerInfoCallback(void *peer, RoomType roomType, char const *nick, unsigned __int32 IP, __int32 profileID);
extern void piAddDisconnectedCallback(void *peer, char const *reason);
extern void piAddPingCallback(void *peer, char const *nick, __int32 ping);
extern void piAddCrossPingCallback(void *peer, char const *nick1, char const *nick2, __int32 crossPing);
extern void piAddGlobalKeyChangedCallback(void *peer, char const *nick, char const *key, char const *value);
extern void piAddRoomKeyChangedCallback(void *peer, RoomType roomType, char const *nick, char const *key, char const *value);
extern void piAddGetRoomKeysCallback(void *peer, PEERBool success, RoomType roomType, char const *nick, __int32 num, char const **keys, char const **values, void (*callback)(void *, PEERBool, RoomType, char const *, __int32, char **, char **, void *), void *param, __int32 opID);
extern void piAddPlayerFlagsChangedCallback(void *peer, RoomType roomType, char const *nick, __int32 oldFlags, __int32 newFlags);
extern void piAddAuthenticateCDKeyCallback(void *peer, __int32 result, char const *message, void (*callback)(void *, __int32, char const *, void *), void *param, __int32 opID);
extern PEERBool piCallbacksInit(void *peer);
extern void piCallbacksCleanup(void *peer);
extern void piCallbacksThink(void *peer, __int32 blockingID);
extern PEERBool piIsCallbackFinished(void *peer, __int32 opID);
extern void piClearCallbacks(void *peer, piCallbackType type);

_static PEERBool piConnectCopy(void *paramsOut_, void *paramsIn_);
_static void piConnectFree(void *params_);
_static void piConnectCall(void *peer, piCallbackData *data);
_static PEERBool piJoinRoomCopy(void *paramsOut_, void *paramsIn_);
_static PEERBool piListGroupRoomsCopy(void *paramsOut_, void *paramsIn_);
_static void piEnumPlayersFree(void *params_);
_static void piListGroupRoomsCall(void *peer, piCallbackData *data);
_static PEERBool piListingGamesCopy(void *paramsOut_, void *paramsIn_);
_static void piDisconnectedFree(void *params_);
_static void piAuthenticateCDKeyCall(void *peer, piCallbackData *data);
_static PEERBool piEnumPlayersCopy(void *paramsOut_, void *paramsIn_);
_static void piEnumPlayersCall(void *peer, piCallbackData *data);
_static PEERBool piGetPlayerIPCopy(void *paramsOut_, void *paramsIn_);
_static PEERBool piRoomMessageCopy(void *paramsOut_, void *paramsIn_);
_static PEERBool piRoomUTMCopy(void *paramsOut_, void *paramsIn_);
_static void piGlobalKeyChangedFree(void *params_);
_static void piRoomUTMCall(void *peer, piCallbackData *data);
_static PEERBool piRoomModeChangedCopy(void *paramsOut_, void *paramsIn_);
_static void piRoomModeChangedCall(void *peer, piCallbackData *data);
_static PEERBool piPlayerUTMCopy(void *paramsOut_, void *paramsIn_);
_static void piPlayerUTMFree(void *params_);
_static PEERBool piGetPlayerProfileIDCopy(void *paramsOut_, void *paramsIn_);
_static PEERBool piKickedCopy(void *paramsOut_, void *paramsIn_);
_static void piKickedFree(void *params_);
_static PEERBool piNewPlayerListCopy(void *paramsOut_, void *paramsIn_);
_static void piDisconnectedCall(void *peer, piCallbackData *data);
_static void piCrossPingCall(void *peer, piCallbackData *data);
_static PEERBool piPlayerInfoCopy(void *paramsOut_, void *paramsIn_);
_static void piPlayerInfoCall(void *peer, piCallbackData *data);
_static PEERBool piDisconnectedCopy(void *paramsOut_, void *paramsIn_);
_static PEERBool piCrossPingCopy(void *paramsOut_, void *paramsIn_);
_static void piCrossPingFree(void *params_);
_static PEERBool piChangeNickCopy(void *paramsOut_, void *paramsIn_);
_static void piChangeNickFree(void *params_);
_static void piChangeNickCall(void *peer, piCallbackData *data);
_static void piGlobalKeyChangedCall(void *peer, piCallbackData *data);
_static PEERBool piGlobalKeyChangedCopy(void *paramsOut_, void *paramsIn_);
_static PEERBool piGetGlobalKeysCopy(void *paramsOut_, void *paramsIn_);
_static void piGetGlobalKeysFree(void *params_);
_static PEERBool piGetRoomKeysCopy(void *paramsOut_, void *paramsIn_);
_static void piGetRoomKeysFree(void *params_);
_static void piGetRoomKeysCall(void *peer, piCallbackData *data);
_static PEERBool piPlayerFlagsChangedCopy(void *paramsOut_, void *paramsIn_);
_static void piPlayerFlagsChangedCall(void *peer, piCallbackData *data);
_static PEERBool piAuthenticateCDKeyCopy(void *paramsOut_, void *paramsIn_);
_static void piAuthenticateCDKeyFree(void *params_);
_static void piCallbackListFree(void *elem1);
_static void piCallCallback(void *peer, piCallbackData *data, __int32 index);
_static __int32 piAddCallback(void *peer, PEERBool success, void *callback, void *param, piCallbackType type, void *paramsIn, unsigned __int32 paramsSize, __int32 opID);
_static __int32 piIsCallbackFinishedCompareCallback(void const *elem1, void const *elem2);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern piCallbackFuncs const callbackFuncs[33]; // 0x1001AF90
}

/* ---------- public code */

_extern void _sub_10011078(void *, PEERBool, void (*)(void *, PEERBool, void *), void *, __int32);
void piAddConnectCallback(void *peer, PEERBool success, void (*callback)(void *, PEERBool, void *), void *param, __int32 opID) // 0x10011078
{
    mangled_assert("_piAddConnectCallback@20");
    todo("implement");
    _sub_10011078(peer, success, callback, param, opID);
}

_extern void _sub_100111D1(void *, PEERBool, PEERJoinResult, RoomType, void (*)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *, __int32);
void piAddJoinRoomCallback(void *peer, PEERBool success, PEERJoinResult result, RoomType roomType, void (*callback)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *param, __int32 opID) // 0x100111D1
{
    mangled_assert("_piAddJoinRoomCallback@28");
    todo("implement");
    _sub_100111D1(peer, success, result, roomType, callback, param, opID);
}

_extern void _sub_10011244(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void (*)(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void *), void *, __int32);
void piAddListGroupRoomsCallback(void *peer, PEERBool success, __int32 groupID, _SBServer *server, char const *name, __int32 numWaiting, __int32 maxWaiting, __int32 numGames, __int32 numPlaying, void (*callback)(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void *), void *param, __int32 opID) // 0x10011244
{
    mangled_assert("_piAddListGroupRoomsCallback@48");
    todo("implement");
    _sub_10011244(peer, success, groupID, server, name, numWaiting, maxWaiting, numGames, numPlaying, callback, param, opID);
}

_extern void _sub_10011294(void *, PEERBool, _SBServer *, __int32);
void piAddListingGamesCallback(void *peer, PEERBool success, _SBServer *server, __int32 msg) // 0x10011294
{
    mangled_assert("_piAddListingGamesCallback@16");
    todo("implement");
    _sub_10011294(peer, success, server, msg);
}

_extern void _sub_10011397(void *, __int32, char const *, void *, __int32);
void piAddNickErrorCallback(void *peer, __int32 type, char const *nick, void *param, __int32 opID) // 0x10011397
{
    mangled_assert("_piAddNickErrorCallback@20");
    todo("implement");
    _sub_10011397(peer, type, nick, param, opID);
}

_extern void _sub_1001165F(void *, RoomType, char const *, char const *, MessageType);
void piAddRoomMessageCallback(void *peer, RoomType roomType, char const *nick, char const *message, MessageType messageType) // 0x1001165F
{
    mangled_assert("_piAddRoomMessageCallback@20");
    todo("implement");
    _sub_1001165F(peer, roomType, nick, message, messageType);
}

_extern void _sub_10011721(void *, RoomType, char const *, char const *, char const *, PEERBool);
void piAddRoomUTMCallback(void *peer, RoomType roomType, char const *nick, char const *command, char const *parameters, PEERBool authenticated) // 0x10011721
{
    mangled_assert("_piAddRoomUTMCallback@24");
    todo("implement");
    _sub_10011721(peer, roomType, nick, command, parameters, authenticated);
}

_extern void _sub_100116EE(void *, RoomType);
void piAddRoomNameChangedCallback(void *peer, RoomType roomType) // 0x100116EE
{
    mangled_assert("_piAddRoomNameChangedCallback@8");
    todo("implement");
    _sub_100116EE(peer, roomType);
}

_extern void _sub_100116A7(void *, RoomType, CHATChannelMode *);
void piAddRoomModeChangedCallback(void *peer, RoomType roomType, CHATChannelMode *mode) // 0x100116A7
{
    mangled_assert("_piAddRoomModeChangedCallback@12");
    todo("implement");
    _sub_100116A7(peer, roomType, mode);
}

_extern void _sub_10011552(void *, char const *, char const *, MessageType);
void piAddPlayerMessageCallback(void *peer, char const *nick, char const *message, MessageType messageType) // 0x10011552
{
    mangled_assert("_piAddPlayerMessageCallback@16");
    todo("implement");
    _sub_10011552(peer, nick, message, messageType);
}

_extern void _sub_10011594(void *, char const *, char const *, char const *, PEERBool);
void piAddPlayerUTMCallback(void *peer, char const *nick, char const *command, char const *parameters, PEERBool authenticated) // 0x10011594
{
    mangled_assert("_piAddPlayerUTMCallback@20");
    todo("implement");
    _sub_10011594(peer, nick, command, parameters, authenticated);
}

_extern void _sub_100115DC(void *, char const *, PEERBool);
void piAddReadyChangedCallback(void *peer, char const *nick, PEERBool ready) // 0x100115DC
{
    mangled_assert("_piAddReadyChangedCallback@12");
    todo("implement");
    _sub_100115DC(peer, nick, ready);
}

_extern void _sub_10011110(void *, unsigned __int32, char const *);
void piAddGameStartedCallback(void *peer, unsigned __int32 IP, char const *message) // 0x10011110
{
    mangled_assert("_piAddGameStartedCallback@12");
    todo("implement");
    _sub_10011110(peer, IP, message);
}

_extern void _sub_100114D5(void *, RoomType, char const *);
void piAddPlayerJoinedCallback(void *peer, RoomType roomType, char const *nick) // 0x100114D5
{
    mangled_assert("_piAddPlayerJoinedCallback@12");
    todo("implement");
    _sub_100114D5(peer, roomType, nick);
}

_extern void _sub_10011510(void *, RoomType, char const *, char const *);
void piAddPlayerLeftCallback(void *peer, RoomType roomType, char const *nick, char const *reason) // 0x10011510
{
    mangled_assert("_piAddPlayerLeftCallback@16");
    todo("implement");
    _sub_10011510(peer, roomType, nick, reason);
}

_extern void _sub_10011202(void *, RoomType, char const *, char const *);
void piAddKickedCallback(void *peer, RoomType roomType, char const *nick, char const *reason) // 0x10011202
{
    mangled_assert("_piAddKickedCallback@16");
    todo("implement");
    _sub_10011202(peer, roomType, nick, reason);
}

_extern void _sub_10011364(void *, RoomType);
void piAddNewPlayerListCallback(void *peer, RoomType roomType) // 0x10011364
{
    mangled_assert("_piAddNewPlayerListCallback@8");
    todo("implement");
    _sub_10011364(peer, roomType);
}

_extern void _sub_10011403(void *, RoomType, char const *, char const *);
void piAddPlayerChangedNickCallback(void *peer, RoomType roomType, char const *oldNick, char const *newNick) // 0x10011403
{
    mangled_assert("_piAddPlayerChangedNickCallback@16");
    todo("implement");
    _sub_10011403(peer, roomType, oldNick, newNick);
}

_extern void _sub_1001148D(void *, RoomType, char const *, unsigned __int32, __int32);
void piAddPlayerInfoCallback(void *peer, RoomType roomType, char const *nick, unsigned __int32 IP, __int32 profileID) // 0x1001148D
{
    mangled_assert("_piAddPlayerInfoCallback@20");
    todo("implement");
    _sub_1001148D(peer, roomType, nick, IP, profileID);
}

_extern void _sub_100110DD(void *, char const *);
void piAddDisconnectedCallback(void *peer, char const *reason) // 0x100110DD
{
    mangled_assert("_piAddDisconnectedCallback@8");
    todo("implement");
    _sub_100110DD(peer, reason);
}

_extern void _sub_100113C8(void *, char const *, __int32);
void piAddPingCallback(void *peer, char const *nick, __int32 ping) // 0x100113C8
{
    mangled_assert("_piAddPingCallback@12");
    todo("implement");
    _sub_100113C8(peer, nick, ping);
}

_extern void _sub_1001109B(void *, char const *, char const *, __int32);
void piAddCrossPingCallback(void *peer, char const *nick1, char const *nick2, __int32 crossPing) // 0x1001109B
{
    mangled_assert("_piAddCrossPingCallback@16");
    todo("implement");
    _sub_1001109B(peer, nick1, nick2, crossPing);
}

_extern void _sub_1001118F(void *, char const *, char const *, char const *);
void piAddGlobalKeyChangedCallback(void *peer, char const *nick, char const *key, char const *value) // 0x1001118F
{
    mangled_assert("_piAddGlobalKeyChangedCallback@16");
    todo("implement");
    _sub_1001118F(peer, nick, key, value);
}

_extern void _sub_10011617(void *, RoomType, char const *, char const *, char const *);
void piAddRoomKeyChangedCallback(void *peer, RoomType roomType, char const *nick, char const *key, char const *value) // 0x10011617
{
    mangled_assert("_piAddRoomKeyChangedCallback@20");
    todo("implement");
    _sub_10011617(peer, roomType, nick, key, value);
}

_extern void _sub_1001114B(void *, PEERBool, RoomType, char const *, __int32, char const **, char const **, void (*)(void *, PEERBool, RoomType, char const *, __int32, char **, char **, void *), void *, __int32);
void piAddGetRoomKeysCallback(void *peer, PEERBool success, RoomType roomType, char const *nick, __int32 num, char const **keys, char const **values, void (*callback)(void *, PEERBool, RoomType, char const *, __int32, char **, char **, void *), void *param, __int32 opID) // 0x1001114B
{
    mangled_assert("_piAddGetRoomKeysCallback@40");
    todo("implement");
    _sub_1001114B(peer, success, roomType, nick, num, keys, values, callback, param, opID);
}

_extern void _sub_10011445(void *, RoomType, char const *, __int32, __int32);
void piAddPlayerFlagsChangedCallback(void *peer, RoomType roomType, char const *nick, __int32 oldFlags, __int32 newFlags) // 0x10011445
{
    mangled_assert("_piAddPlayerFlagsChangedCallback@20");
    todo("implement");
    _sub_10011445(peer, roomType, nick, oldFlags, newFlags);
}

_extern void _sub_10010FA9(void *, __int32, char const *, void (*)(void *, __int32, char const *, void *), void *, __int32);
void piAddAuthenticateCDKeyCallback(void *peer, __int32 result, char const *message, void (*callback)(void *, __int32, char const *, void *), void *param, __int32 opID) // 0x10010FA9
{
    mangled_assert("_piAddAuthenticateCDKeyCallback@24");
    todo("implement");
    _sub_10010FA9(peer, result, message, callback, param, opID);
}

_extern PEERBool _sub_100117EF(void *);
PEERBool piCallbacksInit(void *peer) // 0x100117EF
{
    mangled_assert("_piCallbacksInit@4");
    todo("implement");
    PEERBool __result = _sub_100117EF(peer);
    return __result;
}

_extern void _sub_100117D8(void *);
void piCallbacksCleanup(void *peer) // 0x100117D8
{
    mangled_assert("_piCallbacksCleanup@4");
    todo("implement");
    _sub_100117D8(peer);
}

_extern void _sub_10011828(void *, __int32);
void piCallbacksThink(void *peer, __int32 blockingID) // 0x10011828
{
    mangled_assert("_piCallbacksThink@8");
    todo("implement");
    _sub_10011828(peer, blockingID);
}

_extern PEERBool _sub_100118FB(void *, __int32);
PEERBool piIsCallbackFinished(void *peer, __int32 opID) // 0x100118FB
{
    mangled_assert("_piIsCallbackFinished@8");
    todo("implement");
    PEERBool __result = _sub_100118FB(peer, opID);
    return __result;
}

_extern void _sub_100118BB(void *, piCallbackType);
void piClearCallbacks(void *peer, piCallbackType type) // 0x100118BB
{
    mangled_assert("_piClearCallbacks@8");
    todo("implement");
    _sub_100118BB(peer, type);
}

/* ---------- private code */

_extern PEERBool _sub_10010FA3(void *, void *);
_static PEERBool piConnectCopy(void *paramsOut_, void *paramsIn_) // 0x10010FA3
{
    mangled_assert("piConnectCopy");
    todo("implement");
    PEERBool __result = _sub_10010FA3(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_100096FE(void *);
_static void piConnectFree(void *params_) // 0x100096FE
{
    mangled_assert("piConnectFree");
    todo("implement");
    _sub_100096FE(params_);
}

_extern void _sub_100104FE(void *, piCallbackData *);
_static void piConnectCall(void *peer, piCallbackData *data) // 0x100104FE
{
    mangled_assert("piConnectCall");
    todo("implement");
    _sub_100104FE(peer, data);
}

_extern PEERBool _sub_10010512(void *, void *);
_static PEERBool piJoinRoomCopy(void *paramsOut_, void *paramsIn_) // 0x10010512
{
    mangled_assert("piJoinRoomCopy");
    todo("implement");
    PEERBool __result = _sub_10010512(paramsOut_, paramsIn_);
    return __result;
}

_extern PEERBool _sub_100105BB(void *, void *);
_static PEERBool piListGroupRoomsCopy(void *paramsOut_, void *paramsIn_) // 0x100105BB
{
    mangled_assert("piListGroupRoomsCopy");
    todo("implement");
    PEERBool __result = _sub_100105BB(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010622(void *);
_static void piEnumPlayersFree(void *params_) // 0x10010622
{
    mangled_assert("piEnumPlayersFree");
    todo("implement");
    _sub_10010622(params_);
}

_extern void _sub_10010633(void *, piCallbackData *);
_static void piListGroupRoomsCall(void *peer, piCallbackData *data) // 0x10010633
{
    mangled_assert("piListGroupRoomsCall");
    todo("implement");
    _sub_10010633(peer, data);
}

_extern PEERBool _sub_10010674(void *, void *);
_static PEERBool piListingGamesCopy(void *paramsOut_, void *paramsIn_) // 0x10010674
{
    mangled_assert("piListingGamesCopy");
    todo("implement");
    PEERBool __result = _sub_10010674(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010774(void *);
_static void piDisconnectedFree(void *params_) // 0x10010774
{
    mangled_assert("piDisconnectedFree");
    todo("implement");
    _sub_10010774(params_);
}

_extern void _sub_10010F4A(void *, piCallbackData *);
_static void piAuthenticateCDKeyCall(void *peer, piCallbackData *data) // 0x10010F4A
{
    mangled_assert("piAuthenticateCDKeyCall");
    todo("implement");
    _sub_10010F4A(peer, data);
}

_extern PEERBool _sub_10010784(void *, void *);
_static PEERBool piEnumPlayersCopy(void *paramsOut_, void *paramsIn_) // 0x10010784
{
    mangled_assert("piEnumPlayersCopy");
    todo("implement");
    PEERBool __result = _sub_10010784(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_100107C7(void *, piCallbackData *);
_static void piEnumPlayersCall(void *peer, piCallbackData *data) // 0x100107C7
{
    mangled_assert("piEnumPlayersCall");
    todo("implement");
    _sub_100107C7(peer, data);
}

_extern PEERBool _sub_100108A7(void *, void *);
_static PEERBool piGetPlayerIPCopy(void *paramsOut_, void *paramsIn_) // 0x100108A7
{
    mangled_assert("piGetPlayerIPCopy");
    todo("implement");
    PEERBool __result = _sub_100108A7(paramsOut_, paramsIn_);
    return __result;
}

_extern PEERBool _sub_10010944(void *, void *);
_static PEERBool piRoomMessageCopy(void *paramsOut_, void *paramsIn_) // 0x10010944
{
    mangled_assert("piRoomMessageCopy");
    todo("implement");
    PEERBool __result = _sub_10010944(paramsOut_, paramsIn_);
    return __result;
}

_extern PEERBool _sub_10010A66(void *, void *);
_static PEERBool piRoomUTMCopy(void *paramsOut_, void *paramsIn_) // 0x10010A66
{
    mangled_assert("piRoomUTMCopy");
    todo("implement");
    PEERBool __result = _sub_10010A66(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010A26(void *);
_static void piGlobalKeyChangedFree(void *params_) // 0x10010A26
{
    mangled_assert("piGlobalKeyChangedFree");
    todo("implement");
    _sub_10010A26(params_);
}

_extern void _sub_10010AF0(void *, piCallbackData *);
_static void piRoomUTMCall(void *peer, piCallbackData *data) // 0x10010AF0
{
    mangled_assert("piRoomUTMCall");
    todo("implement");
    _sub_10010AF0(peer, data);
}

_extern PEERBool _sub_10010C4D(void *, void *);
_static PEERBool piRoomModeChangedCopy(void *paramsOut_, void *paramsIn_) // 0x10010C4D
{
    mangled_assert("piRoomModeChangedCopy");
    todo("implement");
    PEERBool __result = _sub_10010C4D(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010C6E(void *, piCallbackData *);
_static void piRoomModeChangedCall(void *peer, piCallbackData *data) // 0x10010C6E
{
    mangled_assert("piRoomModeChangedCall");
    todo("implement");
    _sub_10010C6E(peer, data);
}

_extern PEERBool _sub_10010E28(void *, void *);
_static PEERBool piPlayerUTMCopy(void *paramsOut_, void *paramsIn_) // 0x10010E28
{
    mangled_assert("piPlayerUTMCopy");
    todo("implement");
    PEERBool __result = _sub_10010E28(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_100123B1(void *);
_static void piPlayerUTMFree(void *params_) // 0x100123B1
{
    mangled_assert("piPlayerUTMFree");
    todo("implement");
    _sub_100123B1(params_);
}

_extern PEERBool _sub_100107E9(void *, void *);
_static PEERBool piGetPlayerProfileIDCopy(void *paramsOut_, void *paramsIn_) // 0x100107E9
{
    mangled_assert("piGetPlayerProfileIDCopy");
    todo("implement");
    PEERBool __result = _sub_100107E9(paramsOut_, paramsIn_);
    return __result;
}

_extern PEERBool _sub_1001052A(void *, void *);
_static PEERBool piKickedCopy(void *paramsOut_, void *paramsIn_) // 0x1001052A
{
    mangled_assert("piKickedCopy");
    todo("implement");
    PEERBool __result = _sub_1001052A(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_1001059E(void *);
_static void piKickedFree(void *params_) // 0x1001059E
{
    mangled_assert("piKickedFree");
    todo("implement");
    _sub_1001059E(params_);
}

_extern PEERBool _sub_10010610(void *, void *);
_static PEERBool piNewPlayerListCopy(void *paramsOut_, void *paramsIn_) // 0x10010610
{
    mangled_assert("piNewPlayerListCopy");
    todo("implement");
    PEERBool __result = _sub_10010610(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_1001065E(void *, piCallbackData *);
_static void piDisconnectedCall(void *peer, piCallbackData *data) // 0x1001065E
{
    mangled_assert("piDisconnectedCall");
    todo("implement");
    _sub_1001065E(peer, data);
}

_extern void _sub_1001088B(void *, piCallbackData *);
_static void piCrossPingCall(void *peer, piCallbackData *data) // 0x1001088B
{
    mangled_assert("piCrossPingCall");
    todo("implement");
    _sub_1001088B(peer, data);
}

_extern PEERBool _sub_100106E1(void *, void *);
_static PEERBool piPlayerInfoCopy(void *paramsOut_, void *paramsIn_) // 0x100106E1
{
    mangled_assert("piPlayerInfoCopy");
    todo("implement");
    PEERBool __result = _sub_100106E1(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_1001071E(void *, piCallbackData *);
_static void piPlayerInfoCall(void *peer, piCallbackData *data) // 0x1001071E
{
    mangled_assert("piPlayerInfoCall");
    todo("implement");
    _sub_1001071E(peer, data);
}

_extern PEERBool _sub_1001074B(void *, void *);
_static PEERBool piDisconnectedCopy(void *paramsOut_, void *paramsIn_) // 0x1001074B
{
    mangled_assert("piDisconnectedCopy");
    todo("implement");
    PEERBool __result = _sub_1001074B(paramsOut_, paramsIn_);
    return __result;
}

_extern PEERBool _sub_1001081A(void *, void *);
_static PEERBool piCrossPingCopy(void *paramsOut_, void *paramsIn_) // 0x1001081A
{
    mangled_assert("piCrossPingCopy");
    todo("implement");
    PEERBool __result = _sub_1001081A(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_1001086F(void *);
_static void piCrossPingFree(void *params_) // 0x1001086F
{
    mangled_assert("piCrossPingFree");
    todo("implement");
    _sub_1001086F(params_);
}

_extern PEERBool _sub_100108D4(void *, void *);
_static PEERBool piChangeNickCopy(void *paramsOut_, void *paramsIn_) // 0x100108D4
{
    mangled_assert("piChangeNickCopy");
    todo("implement");
    PEERBool __result = _sub_100108D4(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010928(void *);
_static void piChangeNickFree(void *params_) // 0x10010928
{
    mangled_assert("piChangeNickFree");
    todo("implement");
    _sub_10010928(params_);
}

_extern void _sub_10010582(void *, piCallbackData *);
_static void piChangeNickCall(void *peer, piCallbackData *data) // 0x10010582
{
    mangled_assert("piChangeNickCall");
    todo("implement");
    _sub_10010582(peer, data);
}

_extern void _sub_10010A49(void *, piCallbackData *);
_static void piGlobalKeyChangedCall(void *peer, piCallbackData *data) // 0x10010A49
{
    mangled_assert("piGlobalKeyChangedCall");
    todo("implement");
    _sub_10010A49(peer, data);
}

_extern PEERBool _sub_100109A2(void *, void *);
_static PEERBool piGlobalKeyChangedCopy(void *paramsOut_, void *paramsIn_) // 0x100109A2
{
    mangled_assert("piGlobalKeyChangedCopy");
    todo("implement");
    PEERBool __result = _sub_100109A2(paramsOut_, paramsIn_);
    return __result;
}

_extern PEERBool _sub_10010B12(void *, void *);
_static PEERBool piGetGlobalKeysCopy(void *paramsOut_, void *paramsIn_) // 0x10010B12
{
    mangled_assert("piGetGlobalKeysCopy");
    todo("implement");
    PEERBool __result = _sub_10010B12(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010C88(void *);
_static void piGetGlobalKeysFree(void *params_) // 0x10010C88
{
    mangled_assert("piGetGlobalKeysFree");
    todo("implement");
    _sub_10010C88(params_);
}

_extern PEERBool _sub_10010CCF(void *, void *);
_static PEERBool piGetRoomKeysCopy(void *paramsOut_, void *paramsIn_) // 0x10010CCF
{
    mangled_assert("piGetRoomKeysCopy");
    todo("implement");
    PEERBool __result = _sub_10010CCF(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010EA8(void *);
_static void piGetRoomKeysFree(void *params_) // 0x10010EA8
{
    mangled_assert("piGetRoomKeysFree");
    todo("implement");
    _sub_10010EA8(params_);
}

_extern void _sub_100106BC(void *, piCallbackData *);
_static void piGetRoomKeysCall(void *peer, piCallbackData *data) // 0x100106BC
{
    mangled_assert("piGetRoomKeysCall");
    todo("implement");
    _sub_100106BC(peer, data);
}

_extern PEERBool _sub_10010F0F(void *, void *);
_static PEERBool piPlayerFlagsChangedCopy(void *paramsOut_, void *paramsIn_) // 0x10010F0F
{
    mangled_assert("piPlayerFlagsChangedCopy");
    todo("implement");
    PEERBool __result = _sub_10010F0F(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010EF0(void *, piCallbackData *);
_static void piPlayerFlagsChangedCall(void *peer, piCallbackData *data) // 0x10010EF0
{
    mangled_assert("piPlayerFlagsChangedCall");
    todo("implement");
    _sub_10010EF0(peer, data);
}

_extern PEERBool _sub_10010F63(void *, void *);
_static PEERBool piAuthenticateCDKeyCopy(void *paramsOut_, void *paramsIn_) // 0x10010F63
{
    mangled_assert("piAuthenticateCDKeyCopy");
    todo("implement");
    PEERBool __result = _sub_10010F63(paramsOut_, paramsIn_);
    return __result;
}

_extern void _sub_10010F92(void *);
_static void piAuthenticateCDKeyFree(void *params_) // 0x10010F92
{
    mangled_assert("piAuthenticateCDKeyFree");
    todo("implement");
    _sub_10010F92(params_);
}

_extern void _sub_100117B7(void *);
_static void piCallbackListFree(void *elem1) // 0x100117B7
{
    mangled_assert("piCallbackListFree");
    todo("implement");
    _sub_100117B7(elem1);
}

_extern void _sub_1001176F(void *, piCallbackData *, __int32);
_static void piCallCallback(void *peer, piCallbackData *data, __int32 index) // 0x1001176F
{
    mangled_assert("piCallCallback");
    todo("implement");
    _sub_1001176F(peer, data, index);
}

_extern __int32 _sub_10010FD9(void *, PEERBool, void *, void *, piCallbackType, void *, unsigned __int32, __int32);
_static __int32 piAddCallback(void *peer, PEERBool success, void *callback, void *param, piCallbackType type, void *paramsIn, unsigned __int32 paramsSize, __int32 opID) // 0x10010FD9
{
    mangled_assert("piAddCallback");
    todo("implement");
    __int32 __result = _sub_10010FD9(peer, success, callback, param, type, paramsIn, paramsSize, opID);
    return __result;
}

_extern __int32 _sub_1001192C(void const *, void const *);
_static __int32 piIsCallbackFinishedCompareCallback(void const *elem1, void const *elem2) // 0x1001192C
{
    mangled_assert("piIsCallbackFinishedCompareCallback");
    todo("implement");
    __int32 __result = _sub_1001192C(elem1, elem2);
    return __result;
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <stdio.h>
#include <processtopologyapi.h>
#include <GSLobby\GamespySDK\md5.h>
#include <assert.h>
#include <GSLobby\GamespySDK\peer\peerMangle.h>
#include <debugapi.h>
#include <string.h>
#include <crtdefs.h>
#include <fibersapi.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <winnls.h>
#include <GSLobby\GamespySDK\peer\peerCallbacks.h>
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
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <winuser.h>
#include <GSLobby\GamespySDK\peer\peerOperations.h>
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <GSLobby\GamespySDK\peer\peer.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_serverbrowsing.h>
#include <ime_cmodes.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <GSLobby\GamespySDK\peer\peerRooms.h>
#include <winapifamily.h>
#include <time.h>
#include <threadpoolapiset.h>
#include <sdkddkver.h>
#include <time.inl>
#include <excpt.h>
#include <stringapiset.h>
#include <libloaderapi.h>
#include <limits.h>
#include <stdlib.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <imm.h>
#include <minwinbase.h>
#include <GSLobby\GamespySDK\peer\peerGlobalCallbacks.h>
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
#include <inaddr.h>
#include <stralign.h>
#include <GSLobby\GamespySDK\peer\peerSB.h>
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
#include <swprintf.inl>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnt.h>
#include <GSLobby\GamespySDK\peer\peerPlayers.h>
#include <ctype.h>
#include <apiset.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <GSLobby\GamespySDK\peer\peerKeys.h>
#include <processthreadsapi.h>
#include <profileapi.h>

/* ---------- constants */

/* ---------- definitions */

struct piOperationContainer
{
    piOperation *operation; // 0x0
};
static_assert(sizeof(piOperationContainer) == 4, "Invalid piOperationContainer size");

/* ---------- prototypes */

extern PEERBool piOperationsInit(void *peer);
extern void piOperationsReset(void *peer);
extern void piOperationsCleanup(void *peer);
extern void piRemoveOperation(void *peer, piOperation *operation);
extern PEERBool piIsOperationFinished(void *peer, __int32 opID);
extern PEERBool piNewConnectOperation(void *peer, char const *nick, void (*callback)(void *, PEERBool, void *), void *callbackParam, __int32 opID);
extern PEERBool piNewJoinRoomOperation(void *peer, RoomType roomType, char const *channel, void (*callback)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *callbackParam, __int32 opID);
extern PEERBool piNewListGroupRoomsOperation(void *peer, char const *fields, void (*callback)(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void *), void *param, __int32 opID);
extern PEERBool piNewGetRoomKeysOperation(void *peer, RoomType roomType, char const *nick, __int32 num, char const **keys, void (*callback)(void *, PEERBool, RoomType, char const *, __int32, char **, char **, void *), void *param, __int32 opID);
extern void piAuthenticateCDKeyCallback(void *chat, __int32 result, char const *message, void *param);
extern PEERBool piNewAuthenticateCDKeyOperation(void *peer, char const *cdkey, void (*callback)(void *, __int32, char const *, void *), void *param, __int32 opID);

_static void piOperationsListFree(void *elem1);
_static piOperation *piAddOperation(void *peer, piOperationType type, void *data, void *callback, void *callbackParam, __int32 opID);
_static __int32 piRemoveCompareCallback(void const *elem1, void const *elem2);
_static __int32 piIsOperationFinishedCompareCallback(void const *elem1, void const *elem2);
_static void piConnectConnectCallback(void *chat, CHATBool success, void *param);
_static void piConnectNickErrorCallback(void *chat, __int32 type, char const *nick, void *param);
_static void piConnectFillInUserCallback(void *chat, unsigned __int32 IP, char *user, void *param);
_static PEERJoinResult piEnterResultToJoinResult(CHATEnterResult result);
_static void piJoinRoomEnumUsersCallback(void *chat, CHATBool success, char const *channel, __int32 numUsers, char const **users, __int32 *modes, void *param);
_static void piJoinRoomEnterChannelCallback(void *chat, CHATBool success, CHATEnterResult result, char const *channel, void *param);
_static void piGetChannelKeysCallback(void *chat, CHATBool success, char const *channel, char const *user, __int32 num, char const **keys, char const **values, void *param);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

PEERBool piOperationsInit(void *peer) // 0x10014173
{
    mangled_assert("_piOperationsInit@4");
    todo("implement");
}

void piOperationsReset(void *peer) // 0x100141C9
{
    mangled_assert("_piOperationsReset@4");
    todo("implement");
}

void piOperationsCleanup(void *peer) // 0x1001415C
{
    mangled_assert("_piOperationsCleanup@4");
    todo("implement");
}

void piRemoveOperation(void *peer, piOperation *operation) // 0x100141EE
{
    mangled_assert("_piRemoveOperation@8");
    todo("implement");
}

PEERBool piIsOperationFinished(void *peer, __int32 opID) // 0x10013D35
{
    mangled_assert("_piIsOperationFinished@8");
    todo("implement");
}

PEERBool piNewConnectOperation(void *peer, char const *nick, void (*callback)(void *, PEERBool, void *), void *callbackParam, __int32 opID) // 0x10013F24
{
    mangled_assert("_piNewConnectOperation@20");
    todo("implement");
}

PEERBool piNewJoinRoomOperation(void *peer, RoomType roomType, char const *channel, void (*callback)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *callbackParam, __int32 opID) // 0x1001408D
{
    mangled_assert("_piNewJoinRoomOperation@24");
    todo("implement");
}

PEERBool piNewListGroupRoomsOperation(void *peer, char const *fields, void (*callback)(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void *), void *param, __int32 opID) // 0x1001412A
{
    mangled_assert("_piNewListGroupRoomsOperation@20");
    todo("implement");
}

PEERBool piNewGetRoomKeysOperation(void *peer, RoomType roomType, char const *nick, __int32 num, char const **keys, void (*callback)(void *, PEERBool, RoomType, char const *, __int32, char **, char **, void *), void *param, __int32 opID) // 0x10013FF5
{
    mangled_assert("_piNewGetRoomKeysOperation@32");
    todo("implement");
}

void piAuthenticateCDKeyCallback(void *chat, __int32 result, char const *message, void *param) // 0x10013B78
{
    mangled_assert("_piAuthenticateCDKeyCallback@16");
    todo("implement");
}

PEERBool piNewAuthenticateCDKeyOperation(void *peer, char const *cdkey, void (*callback)(void *, __int32, char const *, void *), void *param, __int32 opID) // 0x10013EEC
{
    mangled_assert("_piNewAuthenticateCDKeyOperation@20");
    todo("implement");
}

/* ---------- private code */

_static void piOperationsListFree(void *elem1) // 0x100141A6
{
    mangled_assert("piOperationsListFree");
    todo("implement");
}

_static piOperation *piAddOperation(void *peer, piOperationType type, void *data, void *callback, void *callbackParam, __int32 opID) // 0x10013B0B
{
    mangled_assert("piAddOperation");
    todo("implement");
}

_static __int32 piRemoveCompareCallback(void const *elem1, void const *elem2) // 0x100141DB
{
    mangled_assert("piRemoveCompareCallback");
    todo("implement");
}

_static __int32 piIsOperationFinishedCompareCallback(void const *elem1, void const *elem2) // 0x10013D6C
{
    mangled_assert("piIsOperationFinishedCompareCallback");
    todo("implement");
}

_static void piConnectConnectCallback(void *chat, CHATBool success, void *param) // 0x10013BA9
{
    mangled_assert("piConnectConnectCallback");
    todo("implement");
}

_static void piConnectNickErrorCallback(void *chat, __int32 type, char const *nick, void *param) // 0x10013C4F
{
    mangled_assert("piConnectNickErrorCallback");
    todo("implement");
}

_static void piConnectFillInUserCallback(void *chat, unsigned __int32 IP, char *user, void *param) // 0x10013C32
{
    mangled_assert("piConnectFillInUserCallback");
    todo("implement");
}

_static PEERJoinResult piEnterResultToJoinResult(CHATEnterResult result) // 0x10013C6B
{
    mangled_assert("piEnterResultToJoinResult");
    todo("implement");
}

_static void piJoinRoomEnumUsersCallback(void *chat, CHATBool success, char const *channel, __int32 numUsers, char const **users, __int32 *modes, void *param) // 0x10013E17
{
    mangled_assert("piJoinRoomEnumUsersCallback");
    todo("implement");
}

_static void piJoinRoomEnterChannelCallback(void *chat, CHATBool success, CHATEnterResult result, char const *channel, void *param) // 0x10013D7F
{
    mangled_assert("piJoinRoomEnterChannelCallback");
    todo("implement");
}

_static void piGetChannelKeysCallback(void *chat, CHATBool success, char const *channel, char const *user, __int32 num, char const **keys, char const **values, void *param) // 0x10013C9C
{
    mangled_assert("piGetChannelKeysCallback");
    todo("implement");
}
#endif

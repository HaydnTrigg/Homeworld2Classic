#if 0
/* ---------- headers */

#include "decomp.h"
#include <systemtopologyapi.h>
#include <GSLobby\GamespySDK\peer\peerGlobalCallbacks.h>
#include <heapapi.h>
#include <stdio.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <stdlib.h>
#include <limits.h>
#include <processtopologyapi.h>
#include <assert.h>
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
#include <GSLobby\GamespySDK\peer\peerPlayers.h>
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <winuser.h>
#include <GSLobby\GamespySDK\peer\peerRooms.h>
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <GSLobby\GamespySDK\peer\peerMangle.h>
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
#include <stringapiset.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <imm.h>
#include <minwinbase.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_internal.h>
#include <GSLobby\GamespySDK\darray.h>
#include <synchapi.h>
#include <poppack.h>
#include <GSLobby\GamespySDK\peer\peerKeys.h>
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
#include <GSLobby\GamespySDK\peer\peerCallbacks.h>
#include <namespaceapi.h>
#include <winsvc.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <swprintf.inl>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <GSLobby\GamespySDK\qr2\qr2.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <processthreadsapi.h>
#include <profileapi.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern PEERBool piRoomsInit(void *peer);
extern void piRoomsCleanup(void *peer);
extern void piStartedEnteringRoom(void *peer, RoomType roomType, char const *room);
extern void piFinishedEnteringRoom(void *peer, RoomType roomType, char const *name);
extern PEERBool piStartHosting(void *peer, unsigned __int32 socket, unsigned short port);
extern void piResetHosting(void *peer);
extern void piStopHosting(void *peer);
extern PEERBool piStartReporting(void *peer, unsigned __int32 socket, unsigned short port);
extern void piStopReporting(void *peer);
extern void piLeaveRoom(void *peer, RoomType roomType, char const *reason);
extern PEERBool piRoomToType(void *peer, char const *room, RoomType *roomType);
extern void piSetLocalFlags(void *peer);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern PEERBool _sub_100153A5(void *);
PEERBool piRoomsInit(void *peer) // 0x100153A5
{
    mangled_assert("_piRoomsInit@4");
    todo("implement");
    PEERBool __result = _sub_100153A5(peer);
    return __result;
}

_extern void _sub_1001532B(void *);
void piRoomsCleanup(void *peer) // 0x1001532B
{
    mangled_assert("_piRoomsCleanup@4");
    todo("implement");
    _sub_1001532B(peer);
}

_extern void _sub_10015712(void *, RoomType, char const *);
void piStartedEnteringRoom(void *peer, RoomType roomType, char const *room) // 0x10015712
{
    mangled_assert("_piStartedEnteringRoom@12");
    todo("implement");
    _sub_10015712(peer, roomType, room);
}

_extern void _sub_10015199(void *, RoomType, char const *);
void piFinishedEnteringRoom(void *peer, RoomType roomType, char const *name) // 0x10015199
{
    mangled_assert("_piFinishedEnteringRoom@12");
    todo("implement");
    _sub_10015199(peer, roomType, name);
}

_extern PEERBool _sub_10015614(void *, unsigned __int32, unsigned short);
PEERBool piStartHosting(void *peer, unsigned __int32 socket, unsigned short port) // 0x10015614
{
    mangled_assert("_piStartHosting@12");
    todo("implement");
    PEERBool __result = _sub_10015614(peer, socket, port);
    return __result;
}

_extern void _sub_100152D3(void *);
void piResetHosting(void *peer) // 0x100152D3
{
    mangled_assert("_piResetHosting@4");
    todo("implement");
    _sub_100152D3(peer);
}

_extern void _sub_10015760(void *);
void piStopHosting(void *peer) // 0x10015760
{
    mangled_assert("_piStopHosting@4");
    todo("implement");
    _sub_10015760(peer);
}

_extern PEERBool _sub_10015672(void *, unsigned __int32, unsigned short);
PEERBool piStartReporting(void *peer, unsigned __int32 socket, unsigned short port) // 0x10015672
{
    mangled_assert("_piStartReporting@12");
    todo("implement");
    PEERBool __result = _sub_10015672(peer, socket, port);
    return __result;
}

_extern void _sub_1001579B(void *);
void piStopReporting(void *peer) // 0x1001579B
{
    mangled_assert("_piStopReporting@4");
    todo("implement");
    _sub_1001579B(peer);
}

_extern void _sub_100151FE(void *, RoomType, char const *);
void piLeaveRoom(void *peer, RoomType roomType, char const *reason) // 0x100151FE
{
    mangled_assert("_piLeaveRoom@12");
    todo("implement");
    _sub_100151FE(peer, roomType, reason);
}

_extern PEERBool _sub_100152EE(void *, char const *, RoomType *);
PEERBool piRoomToType(void *peer, char const *room, RoomType *roomType) // 0x100152EE
{
    mangled_assert("_piRoomToType@12");
    todo("implement");
    PEERBool __result = _sub_100152EE(peer, room, roomType);
    return __result;
}

_extern void _sub_1001540D(void *);
void piSetLocalFlags(void *peer) // 0x1001540D
{
    mangled_assert("_piSetLocalFlags@4");
    todo("implement");
    _sub_1001540D(peer);
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <GSLobby\GamespySDK\peer\peerSB.h>
#include <stdio.h>
#include <threadpoollegacyapiset.h>
#include <processtopologyapi.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <debugapi.h>
#include <GSLobby\GamespySDK\peer\peerPlayers.h>
#include <fibersapi.h>
#include <string.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <GSLobby\GamespySDK\peer\peerRooms.h>
#include <GSLobby\GamespySDK\peer\peerGlobalCallbacks.h>
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
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <GSLobby\GamespySDK\peer\peerMangle.h>
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
#include <guiddef.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <specstrings_strict.h>
#include <GSLobby\GamespySDK\peer\peerPing.h>
#include <GSLobby\GamespySDK\pinger\pinger.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <GSLobby\GamespySDK\peer\peerKeys.h>
#include <inaddr.h>
#include <stralign.h>
#include <namespaceapi.h>
#include <GSLobby\GamespySDK\peer\peerOperations.h>
#include <winsvc.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <swprintf.inl>
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

/* ---------- constants */

/* ---------- definitions */

struct piEnumPlayersData
{
    void (*callback)(void *, PEERBool, RoomType, __int32, char const *, __int32, void *); // 0x0
    void *param; // 0x4
};
static_assert(sizeof(piEnumPlayersData) == 8, "Invalid piEnumPlayersData size");

typedef void (*peerEnumPlayersCallback)(void *, PEERBool, RoomType, __int32, char const *, __int32, void *);
typedef in_addr IN_ADDR;

/* ---------- prototypes */

extern void *peerInitialize(PEERCallbacks *callbacks);
extern void peerConnect(void *peer, char const *nick, __int32 profileID, void (*nickErrorCallback)(void *, __int32, char const *, void *), void (*connectCallback)(void *, PEERBool, void *), void *param, PEERBool blocking);
extern void peerRetryWithNick(void *peer, char const *nick);
extern PEERBool peerIsConnected(void *peer);
extern PEERBool piConnectTitle(void *peer);
extern void piDisconnectTitle(void *peer);
extern PEERBool peerSetTitle(void *peer, char const *title, char const *qrSecretKey, char const *sbName, char const *sbSecretKey, __int32 sbGameVersion, __int32 sbMaxUpdates, PEERBool natNegotiate, PEERBool *pingRooms, PEERBool *crossPingRooms);
extern void peerClearTitle(void *peer);
extern void piDisconnect(void *peer);
extern void peerDisconnect(void *peer);
extern void peerShutdown(void *peer);
extern void peerThink(void *peer);
extern char const *peerGetNick(void *peer);
extern void peerSetQuietMode(void *peer, PEERBool quiet);
extern void peerAuthenticateCDKey(void *peer, char const *cdkey, void (*callback)(void *, __int32, char const *, void *), void *param, PEERBool blocking);
extern void peerJoinTitleRoom(void *peer, void (*callback)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *param, PEERBool blocking);
extern void peerJoinGroupRoom(void *peer, __int32 groupID, void (*callback)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *param, PEERBool blocking);
extern void peerLeaveRoom(void *peer, RoomType roomType, char const *reason);
extern void peerListGroupRooms(void *peer, char const *fields, void (*callback)(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void *), void *param, PEERBool blocking);
extern void peerStartListingGames(void *peer, unsigned char const *fields, __int32 numFields, char const *filter, void (*callback)(void *, PEERBool, char const *, _SBServer *, PEERBool, __int32, __int32, void *), void *param);
extern void peerStopListingGames(void *peer);
extern void peerUpdateGame(void *peer, _SBServer *server, PEERBool fullUpdate);
extern void peerMessageRoom(void *peer, RoomType roomType, char const *message, MessageType messageType);
extern PEERBool peerInRoom(void *peer, RoomType roomType);
extern void peerEnumPlayers(void *peer, RoomType roomType, void (*callback)(void *, PEERBool, RoomType, __int32, char const *, __int32, void *), void *param);
extern void peerMessagePlayer(void *peer, char const *nick, char const *message, MessageType messageType);
extern PEERBool peerStartReporting(void *peer);
extern PEERBool peerStartReportingWithSocket(void *peer, unsigned __int32 socket, unsigned short port);
extern void peerStartPlaying(void *peer);
extern void peerStopGame(void *peer);
extern void peerStateChanged(void *peer);
extern void piSendChannelUTM(void *peer, char const *channel, char const *command, char const *parameters, PEERBool authenticate);
extern void peerSetRoomKeys(void *peer, RoomType roomType, char const *nick, __int32 num, char const **keys, char const **values);
extern void peerGetRoomKeys(void *peer, RoomType roomType, char const *nick, __int32 num, char const **keys, void (*callback)(void *, PEERBool, RoomType, char const *, __int32, char **, char **, void *), void *param, PEERBool blocking);

_static PEERBool piCheckBlockingID(void *peer, __int32 ID);
_static __int32 piGetNextID(void *peer);
_static void piDisconnectCleanup(void *peer);
_static void piShutdownCleanup(void *peer);
_static void piThink(void *peer, __int32 opID);
_static void piEnumPlayersEnumRoomPlayersCallback(void *peer, RoomType roomType, piPlayer *player, __int32 index, void *param);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void *peerInitialize(PEERCallbacks *callbacks) // 0x10012EE8
{
    mangled_assert("_peerInitialize@4");
    todo("implement");
}

void peerConnect(void *peer, char const *nick, __int32 profileID, void (*nickErrorCallback)(void *, __int32, char const *, void *), void (*connectCallback)(void *, PEERBool, void *), void *param, PEERBool blocking) // 0x10012CF9
{
    mangled_assert("_peerConnect@28");
    todo("implement");
}

void peerRetryWithNick(void *peer, char const *nick) // 0x100132D1
{
    mangled_assert("_peerRetryWithNick@8");
    todo("implement");
}

PEERBool peerIsConnected(void *peer) // 0x10012F6D
{
    mangled_assert("_peerIsConnected@4");
    todo("implement");
}

PEERBool piConnectTitle(void *peer) // 0x1001369C
{
    mangled_assert("_piConnectTitle@4");
    todo("implement");
}

void piDisconnectTitle(void *peer) // 0x1001373E
{
    mangled_assert("_piDisconnectTitle@4");
    todo("implement");
}

PEERBool peerSetTitle(void *peer, char const *title, char const *qrSecretKey, char const *sbName, char const *sbSecretKey, __int32 sbGameVersion, __int32 sbMaxUpdates, PEERBool natNegotiate, PEERBool *pingRooms, PEERBool *crossPingRooms) // 0x10013364
{
    mangled_assert("_peerSetTitle@40");
    todo("implement");
}

void peerClearTitle(void *peer) // 0x10012CCA
{
    mangled_assert("_peerClearTitle@4");
    todo("implement");
}

void piDisconnect(void *peer) // 0x100136C9
{
    mangled_assert("_piDisconnect@4");
    todo("implement");
}

void peerDisconnect(void *peer) // 0x10012DB1
{
    mangled_assert("_peerDisconnect@4");
    todo("implement");
}

void peerShutdown(void *peer) // 0x100134BC
{
    mangled_assert("_peerShutdown@4");
    todo("implement");
}

void peerThink(void *peer) // 0x1001362C
{
    mangled_assert("_peerThink@4");
    todo("implement");
}

char const *peerGetNick(void *peer) // 0x10012E1D
{
    mangled_assert("_peerGetNick@4");
    todo("implement");
}

void peerSetQuietMode(void *peer, PEERBool quiet) // 0x1001330B
{
    mangled_assert("_peerSetQuietMode@8");
    todo("implement");
}

void peerAuthenticateCDKey(void *peer, char const *cdkey, void (*callback)(void *, __int32, char const *, void *), void *param, PEERBool blocking) // 0x10012C56
{
    mangled_assert("_peerAuthenticateCDKey@20");
    todo("implement");
}

void peerJoinTitleRoom(void *peer, void (*callback)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *param, PEERBool blocking) // 0x10013079
{
    mangled_assert("_peerJoinTitleRoom@16");
    todo("implement");
}

void peerJoinGroupRoom(void *peer, __int32 groupID, void (*callback)(void *, PEERBool, PEERJoinResult, RoomType, void *), void *param, PEERBool blocking) // 0x10012F77
{
    mangled_assert("_peerJoinGroupRoom@20");
    todo("implement");
}

void peerLeaveRoom(void *peer, RoomType roomType, char const *reason) // 0x10013180
{
    mangled_assert("_peerLeaveRoom@12");
    todo("implement");
}

void peerListGroupRooms(void *peer, char const *fields, void (*callback)(void *, PEERBool, __int32, _SBServer *, char const *, __int32, __int32, __int32, __int32, void *), void *param, PEERBool blocking) // 0x100131CF
{
    mangled_assert("_peerListGroupRooms@20");
    todo("implement");
}

void peerStartListingGames(void *peer, unsigned char const *fields, __int32 numFields, char const *filter, void (*callback)(void *, PEERBool, char const *, _SBServer *, PEERBool, __int32, __int32, void *), void *param) // 0x10013513
{
    mangled_assert("_peerStartListingGames@24");
    todo("implement");
}

void peerStopListingGames(void *peer) // 0x10013619
{
    mangled_assert("_peerStopListingGames@4");
    todo("implement");
}

void peerUpdateGame(void *peer, _SBServer *server, PEERBool fullUpdate) // 0x10013655
{
    mangled_assert("_peerUpdateGame@12");
    todo("implement");
}

void peerMessageRoom(void *peer, RoomType roomType, char const *message, MessageType messageType) // 0x10013294
{
    mangled_assert("_peerMessageRoom@16");
    todo("implement");
}

PEERBool peerInRoom(void *peer, RoomType roomType) // 0x10012ED6
{
    mangled_assert("_peerInRoom@8");
    todo("implement");
}

void peerEnumPlayers(void *peer, RoomType roomType, void (*callback)(void *, PEERBool, RoomType, __int32, char const *, __int32, void *), void *param) // 0x10012DD8
{
    mangled_assert("_peerEnumPlayers@16");
    todo("implement");
}

void peerMessagePlayer(void *peer, char const *nick, char const *message, MessageType messageType) // 0x1001326A
{
    mangled_assert("_peerMessagePlayer@16");
    todo("implement");
}

PEERBool peerStartReporting(void *peer) // 0x10013589
{
    mangled_assert("_peerStartReporting@4");
    todo("implement");
}

PEERBool peerStartReportingWithSocket(void *peer, unsigned __int32 socket, unsigned short port) // 0x10013599
{
    mangled_assert("_peerStartReportingWithSocket@12");
    todo("implement");
}

void peerStartPlaying(void *peer) // 0x1001356C
{
    mangled_assert("_peerStartPlaying@4");
    todo("implement");
}

void peerStopGame(void *peer) // 0x100135E4
{
    mangled_assert("_peerStopGame@4");
    todo("implement");
}

void peerStateChanged(void *peer) // 0x100135CD
{
    mangled_assert("_peerStateChanged@4");
    todo("implement");
}

void piSendChannelUTM(void *peer, char const *channel, char const *command, char const *parameters, PEERBool authenticate) // 0x100137A8
{
    mangled_assert("_piSendChannelUTM@20");
    todo("implement");
}

void peerSetRoomKeys(void *peer, RoomType roomType, char const *nick, __int32 num, char const **keys, char const **values) // 0x1001331D
{
    mangled_assert("_peerSetRoomKeys@24");
    todo("implement");
}

void peerGetRoomKeys(void *peer, RoomType roomType, char const *nick, __int32 num, char const **keys, void (*callback)(void *, PEERBool, RoomType, char const *, __int32, char **, char **, void *), void *param, PEERBool blocking) // 0x10012E31
{
    mangled_assert("_peerGetRoomKeys@32");
    todo("implement");
}

/* ---------- private code */

_static PEERBool piCheckBlockingID(void *peer, __int32 ID) // 0x10013670
{
    mangled_assert("piCheckBlockingID");
    todo("implement");
}

_static __int32 piGetNextID(void *peer) // 0x10013785
{
    mangled_assert("piGetNextID");
    todo("implement");
}

_static void piDisconnectCleanup(void *peer) // 0x100136FC
{
    mangled_assert("piDisconnectCleanup");
    todo("implement");
}

_static void piShutdownCleanup(void *peer) // 0x10013866
{
    mangled_assert("piShutdownCleanup");
    todo("implement");
}

_static void piThink(void *peer, __int32 opID) // 0x10013894
{
    mangled_assert("piThink");
    todo("implement");
}

_static void piEnumPlayersEnumRoomPlayersCallback(void *peer, RoomType roomType, piPlayer *player, __int32 index, void *param) // 0x10013755
{
    mangled_assert("piEnumPlayersEnumRoomPlayersCallback");
    todo("implement");
}
#endif

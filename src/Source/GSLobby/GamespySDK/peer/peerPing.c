#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <GSLobby\GamespySDK\peer\peer.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <string.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <debugapi.h>
#include <stdlib.h>
#include <crtdefs.h>
#include <fibersapi.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <GSLobby\GamespySDK\peer\peerMangle.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <namedpipeapi.h>
#include <securityappcontainer.h>
#include <wincon.h>
#include <GSLobby\GamespySDK\peer\peerGlobalCallbacks.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <wtime.inl>
#include <ktmtypes.h>
#include <pshpack4.h>
#include <winver.h>
#include <swprintf.inl>
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
#include <stdio.h>
#include <poppack.h>
#include <guiddef.h>
#include <GSLobby\GamespySDK\hashtable.h>
#include <stdarg.h>
#include <windef.h>
#include <limits.h>
#include <minwindef.h>
#include <specstrings.h>
#include <GSLobby\GamespySDK\pinger\pinger.h>
#include <specstrings_strict.h>
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
#include <GSLobby\GamespySDK\peer\peerCallbacks.h>
#include <memoryapi.h>
#include <GSLobby\GamespySDK\qr2\qr2.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <GSLobby\GamespySDK\peer\peerPing.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <GSLobby\GamespySDK\peer\peerPlayers.h>

/* ---------- constants */

/* ---------- definitions */

struct piXping
{
    char nicks[2][64]; // 0x0
    __int32 ping; // 0x80
};
static_assert(sizeof(piXping) == 132, "Invalid piXping size");

struct piPingerReplyData
{
    void *peer; // 0x0
    unsigned __int32 IP; // 0x4
    __int32 ping; // 0x8
};
static_assert(sizeof(piPingerReplyData) == 12, "Invalid piPingerReplyData size");

struct piPickPingPlayersData
{
    void *peer; // 0x0
    piPlayer **players; // 0x4
    __int32 max; // 0x8
    __int32 num; // 0xC
};
static_assert(sizeof(piPickPingPlayersData) == 16, "Invalid piPickPingPlayersData size");

struct piPickXpingPlayerData
{
    void *peer; // 0x0
    piPlayer *player; // 0x4
};
static_assert(sizeof(piPickXpingPlayerData) == 8, "Invalid piPickXpingPlayerData size");

struct piPingPlayerLeftRoomData
{
    void *peer; // 0x0
    char const *nick; // 0x4
};
static_assert(sizeof(piPingPlayerLeftRoomData) == 8, "Invalid piPingPlayerLeftRoomData size");

/* ---------- prototypes */

extern PEERBool piPingInit(void *peer);
extern void piPingCleanup(void *peer);
extern void piPingThink(void *peer);
extern PEERBool piPingInitPlayer(void *peer, piPlayer *player);
extern void piPingPlayerJoinedRoom(void *peer, piPlayer *player, RoomType roomType);
extern void piPingPlayerLeftRoom(void *peer, piPlayer *player, RoomType roomType);
extern void piUpdateXping(void *peer, char const *nick1, char const *nick2, __int32 ping);

_static __int32 piXpingTableHashFn(void const *param, __int32 numBuckets);
_static __int32 piXpingTableCompareFn(void const *param1, void const *param2);
_static void piXpingTableElementFreeFn(void *param);
_static void piProcessPing(void *peer, piPlayer *player, __int32 ping);
_static void piPinged(unsigned __int32 IP, unsigned short port, __int32 ping, char const *data, __int32 len, void *peer);
_static void piPingerReplyMapFn(void *elem, void *clientdata);
_static void piPingerReply(unsigned __int32 IP, unsigned short port, __int32 ping, char const *pingData, __int32 pingDataLen, void *peer);
_static void piPingPlayer(void *peer, piPlayer *player);
_static void piPickPingPlayersMap(void *elem, void *clientData);
_static piPlayer **piPickPingPlayers(void *peer, __int32 *numPings);
_static void piXpingPlayer(void *peer, piPlayer *player);
_static void piPickXpingPlayerMap(void *elem, void *clientData);
_static piPlayer *piPickXpingPlayer(void *peer);
_static void piPingPlayerLeftRoomTableMapFn(void *elem, void *clientdata);
_static piXping *piAddXping(void *peer, char const *nick1, char const *nick2);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

PEERBool piPingInit(void *peer) // 0x10014559
{
    mangled_assert("_piPingInit@4");
    todo("implement");
}

void piPingCleanup(void *peer) // 0x10014517
{
    mangled_assert("_piPingCleanup@4");
    todo("implement");
}

void piPingThink(void *peer) // 0x1001479D
{
    mangled_assert("_piPingThink@4");
    todo("implement");
}

PEERBool piPingInitPlayer(void *peer, piPlayer *player) // 0x100145C4
{
    mangled_assert("_piPingInitPlayer@8");
    todo("implement");
}

void piPingPlayerJoinedRoom(void *peer, piPlayer *player, RoomType roomType) // 0x10014668
{
    mangled_assert("_piPingPlayerJoinedRoom@12");
    todo("implement");
}

void piPingPlayerLeftRoom(void *peer, piPlayer *player, RoomType roomType) // 0x100146B0
{
    mangled_assert("_piPingPlayerLeftRoom@12");
    todo("implement");
}

void piUpdateXping(void *peer, char const *nick1, char const *nick2, __int32 ping) // 0x1001497D
{
    mangled_assert("_piUpdateXping@16");
    todo("implement");
}

/* ---------- private code */

_static __int32 piXpingTableHashFn(void const *param, __int32 numBuckets) // 0x10014B21
{
    mangled_assert("piXpingTableHashFn");
    todo("implement");
}

_static __int32 piXpingTableCompareFn(void const *param1, void const *param2) // 0x10014AB4
{
    mangled_assert("piXpingTableCompareFn");
    todo("implement");
}

_static void piXpingTableElementFreeFn(void *param) // 0x100096FE
{
    mangled_assert("piXpingTableElementFreeFn");
    todo("implement");
}

_static void piProcessPing(void *peer, piPlayer *player, __int32 ping) // 0x100148DF
{
    mangled_assert("piProcessPing");
    todo("implement");
}

_static void piPinged(unsigned __int32 IP, unsigned short port, __int32 ping, char const *data, __int32 len, void *peer) // 0x10014854
{
    mangled_assert("piPinged");
    todo("implement");
}

_static void piPingerReplyMapFn(void *elem, void *clientdata) // 0x100148A6
{
    mangled_assert("piPingerReplyMapFn");
    todo("implement");
}

_static void piPingerReply(unsigned __int32 IP, unsigned short port, __int32 ping, char const *pingData, __int32 pingDataLen, void *peer) // 0x10014876
{
    mangled_assert("piPingerReply");
    todo("implement");
}

_static void piPingPlayer(void *peer, piPlayer *player) // 0x10014626
{
    mangled_assert("piPingPlayer");
    todo("implement");
}

_static void piPickPingPlayersMap(void *elem, void *clientData) // 0x10014321
{
    mangled_assert("piPickPingPlayersMap");
    todo("implement");
}

_static piPlayer **piPickPingPlayers(void *peer, __int32 *numPings) // 0x1001429F
{
    mangled_assert("piPickPingPlayers");
    todo("implement");
}

_static void piXpingPlayer(void *peer, piPlayer *player) // 0x100149D7
{
    mangled_assert("piXpingPlayer");
    todo("implement");
}

_static void piPickXpingPlayerMap(void *elem, void *clientData) // 0x100144C6
{
    mangled_assert("piPickXpingPlayerMap");
    todo("implement");
}

_static piPlayer *piPickXpingPlayer(void *peer) // 0x10014482
{
    mangled_assert("piPickXpingPlayer");
    todo("implement");
}

_static void piPingPlayerLeftRoomTableMapFn(void *elem, void *clientdata) // 0x1001475F
{
    mangled_assert("piPingPlayerLeftRoomTableMapFn");
    todo("implement");
}

_static piXping *piAddXping(void *peer, char const *nick1, char const *nick2) // 0x1001422F
{
    mangled_assert("piAddXping");
    todo("implement");
}
#endif

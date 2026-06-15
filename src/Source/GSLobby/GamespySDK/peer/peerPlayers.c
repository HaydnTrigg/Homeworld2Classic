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
#include <GSLobby\GamespySDK\peer\peerPlayers.h>
#include <time.inl>
#include <excpt.h>
#include <GSLobby\GamespySDK\peer\peerMain.h>
#include <GSLobby\GamespySDK\peer\peer.h>
#include <stringapiset.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <stdlib.h>
#include <libloaderapi.h>
#include <limits.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <string.h>
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
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <GSLobby\GamespySDK\peer\peerPing.h>
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
#include <GSLobby\GamespySDK\peer\peerCallbacks.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>

/* ---------- constants */

/* ---------- definitions */

struct piLeftRoomData
{
    void *peer; // 0x0
    RoomType roomType; // 0x4
};
static_assert(sizeof(piLeftRoomData) == 8, "Invalid piLeftRoomData size");

struct piEnumRoomPlayersData
{
    void *peer; // 0x0
    RoomType roomType; // 0x4
    __int32 count; // 0x8
    void (*callback)(void *, RoomType, piPlayer *, __int32, void *); // 0xC
    void *param; // 0x10
};
static_assert(sizeof(piEnumRoomPlayersData) == 20, "Invalid piEnumRoomPlayersData size");

struct piFindPlayerByIndexData
{
    __int32 index; // 0x0
    __int32 count; // 0x4
    RoomType roomType; // 0x8
};
static_assert(sizeof(piFindPlayerByIndexData) == 12, "Invalid piFindPlayerByIndexData size");

typedef void (*TableMapFn)(void *, void *);
typedef __int32 (*TableMapFn2)(void *, void *);
typedef __int32 (*TableCompareFn)(void const *, void const *);
typedef void (*piEnumRoomPlayersCallback)(void *, RoomType, piPlayer *, __int32, void *);
typedef __int32 (*TableHashFn)(void const *, __int32);
typedef void (*TableElementFreeFn)(void *);

/* ---------- prototypes */

extern PEERBool piPlayersInit(void *peer);
extern void piPlayersCleanup(void *peer);
extern piPlayer *piPlayerJoinedRoom(void *peer, char const *nick, RoomType roomType, __int32 mode);
extern void piPlayerLeftRoom(void *peer, char const *nick, RoomType roomType);
extern void piPlayerChangedNick(void *peer, char const *oldNick, char const *newNick);
extern void piClearRoomPlayers(void *peer, RoomType roomType);
extern piPlayer *piGetPlayer(void *peer, char const *nick);
extern void piEnumRoomPlayersMap(void *elem, void *clientdata);
extern void piEnumRoomPlayers(void *peer, RoomType roomType, void (*callback)(void *, RoomType, piPlayer *, __int32, void *), void *param);
extern __int32 piFindPlayersByIPMap(void *elem, void *clientdata);
extern piPlayer *piFindPlayerByIP(void *peer, unsigned __int32 IP);
extern void piSetPlayerIPAndProfileID(void *peer, char const *nick, unsigned __int32 IP, __int32 profileID);
extern __int32 piParseFlags(char const *flags);
extern void piSetPlayerRoomFlags(void *peer, char const *nick, RoomType roomType, char const *flags);
extern void piSetPlayerModeFlags(void *peer, char const *nick, RoomType roomType, __int32 mode);
extern PEERBool piIsPlayerVIP(void *peer, piPlayer *player, RoomType roomType);
extern __int32 piFindPlayerByIndexMap(void *elem, void *clientdata);
extern piPlayer *piFindPlayerByIndex(void *peer, RoomType roomType, __int32 index);

_static __int32 piPlayersTableHashFn(void const *elem, __int32 numBuckets);
_static __int32 piPlayersTableCompareFn(void const *elem1, void const *elem2);
_static void piPlayersTableElementFreeFn(void *elem);
_static piPlayer *piAddPlayer(void *peer, char const *nick, PEERBool initialize);
_static void piLeftRoomMapFn(void *elem, void *clientdata);
_static void piSetNewPlayerFlags(void *peer, char const *nick, RoomType roomType, __int32 flags);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

PEERBool piPlayersInit(void *peer) // 0x10014FB6
{
    mangled_assert("_piPlayersInit@4");
    todo("implement");
}

void piPlayersCleanup(void *peer) // 0x10014F82
{
    mangled_assert("_piPlayersCleanup@4");
    todo("implement");
}

piPlayer *piPlayerJoinedRoom(void *peer, char const *nick, RoomType roomType, __int32 mode) // 0x10014EA9
{
    mangled_assert("_piPlayerJoinedRoom@16");
    todo("implement");
}

void piPlayerLeftRoom(void *peer, char const *nick, RoomType roomType) // 0x10014F27
{
    mangled_assert("_piPlayerLeftRoom@12");
    todo("implement");
}

void piPlayerChangedNick(void *peer, char const *oldNick, char const *newNick) // 0x10014E3E
{
    mangled_assert("_piPlayerChangedNick@12");
    todo("implement");
}

void piClearRoomPlayers(void *peer, RoomType roomType) // 0x10014C17
{
    mangled_assert("_piClearRoomPlayers@8");
    todo("implement");
}

piPlayer *piGetPlayer(void *peer, char const *nick) // 0x10014D4E
{
    mangled_assert("_piGetPlayer@8");
    todo("implement");
}

void piEnumRoomPlayersMap(void *elem, void *clientdata) // 0x10014C94
{
    mangled_assert("_piEnumRoomPlayersMap@8");
    todo("implement");
}

void piEnumRoomPlayers(void *peer, RoomType roomType, void (*callback)(void *, RoomType, piPlayer *, __int32, void *), void *param) // 0x10014C40
{
    mangled_assert("_piEnumRoomPlayers@16");
    todo("implement");
}

__int32 piFindPlayersByIPMap(void *elem, void *clientdata) // 0x10014D2F
{
    mangled_assert("_piFindPlayersByIPMap@8");
    todo("implement");
}

piPlayer *piFindPlayerByIP(void *peer, unsigned __int32 IP) // 0x10014CBB
{
    mangled_assert("_piFindPlayerByIP@8");
    todo("implement");
}

void piSetPlayerIPAndProfileID(void *peer, char const *nick, unsigned __int32 IP, __int32 profileID) // 0x1001509A
{
    mangled_assert("_piSetPlayerIPAndProfileID@16");
    todo("implement");
}

__int32 piParseFlags(char const *flags) // 0x10014DE9
{
    mangled_assert("_piParseFlags@4");
    todo("implement");
}

void piSetPlayerRoomFlags(void *peer, char const *nick, RoomType roomType, char const *flags) // 0x10015151
{
    mangled_assert("_piSetPlayerRoomFlags@16");
    todo("implement");
}

void piSetPlayerModeFlags(void *peer, char const *nick, RoomType roomType, __int32 mode) // 0x10015105
{
    mangled_assert("_piSetPlayerModeFlags@16");
    todo("implement");
}

PEERBool piIsPlayerVIP(void *peer, piPlayer *player, RoomType roomType) // 0x10014D98
{
    mangled_assert("_piIsPlayerVIP@12");
    todo("implement");
}

__int32 piFindPlayerByIndexMap(void *elem, void *clientdata) // 0x10014D08
{
    mangled_assert("_piFindPlayerByIndexMap@8");
    todo("implement");
}

piPlayer *piFindPlayerByIndex(void *peer, RoomType roomType, __int32 index) // 0x10014CD7
{
    mangled_assert("_piFindPlayerByIndex@12");
    todo("implement");
}

/* ---------- private code */

_static __int32 piPlayersTableHashFn(void const *elem, __int32 numBuckets) // 0x10015001
{
    mangled_assert("piPlayersTableHashFn");
    todo("implement");
}

_static __int32 piPlayersTableCompareFn(void const *elem1, void const *elem2) // 0x10014FFB
{
    mangled_assert("piPlayersTableCompareFn");
    todo("implement");
}

_static void piPlayersTableElementFreeFn(void *elem) // 0x100096FE
{
    mangled_assert("piPlayersTableElementFreeFn");
    todo("implement");
}

_static piPlayer *piAddPlayer(void *peer, char const *nick, PEERBool initialize) // 0x10014B7C
{
    mangled_assert("piAddPlayer");
    todo("implement");
}

_static void piLeftRoomMapFn(void *elem, void *clientdata) // 0x10014DCB
{
    mangled_assert("piLeftRoomMapFn");
    todo("implement");
}

_static void piSetNewPlayerFlags(void *peer, char const *nick, RoomType roomType, __int32 flags) // 0x1001502C
{
    mangled_assert("piSetNewPlayerFlags");
    todo("implement");
}
#endif

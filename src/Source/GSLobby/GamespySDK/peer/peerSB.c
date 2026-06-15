#if 0
/* ---------- headers */

#include "decomp.h"
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <stdio.h>
#include <threadpoollegacyapiset.h>
#include <stdlib.h>
#include <processtopologyapi.h>
#include <limits.h>
#include <assert.h>
#include <debugapi.h>
#include <string.h>
#include <fibersapi.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <GSLobby\GamespySDK\peer\peerRooms.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <GSLobby\GamespySDK\peer\peerSB.h>
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
#include <GSLobby\GamespySDK\peer\peerMain.h>
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
#include <GSLobby\GamespySDK\peer\peerCallbacks.h>
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
#include <swprintf.inl>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <GSLobby\GamespySDK\qr2\qr2.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <GSLobby\GamespySDK\peer\peerOperations.h>
#include <GSLobby\GamespySDK\chat\chat.h>
#include <winnt.h>
#include <GSLobby\GamespySDK\peer\peerMangle.h>
#include <ctype.h>
#include <apiset.h>
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <processthreadsapi.h>
#include <profileapi.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern PEERBool piSBInit(void *peer);
extern void piSBCleanup(void *peer);
extern PEERBool piSBStartListingGames(void *peer, unsigned char const *fields, __int32 numFields, char const *filter);
extern void piSBStopListingGames(void *peer);
extern void piSBUpdateGame(void *peer, _SBServer *server, PEERBool fullUpdate);
extern PEERBool piSBStartListingGroups(void *peer, char const *fields);
extern void piSBStopListingGroups(void *peer);
extern void piSBThink(void *peer);

_static void piSBListGamesCallback(_SBServerList *serverlist, SBListCallbackReason reason, _SBServer *server, void *instance);
_static void piSBEngineGamesCallback(_SBQueryEngine *engine, SBQueryEngineCallbackReason reason, _SBServer *server, void *instance);
_static void piSBListGroupsCallback(_SBServerList *serverlist, SBListCallbackReason reason, _SBServer *server, void *instance);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

PEERBool piSBInit(void *peer) // 0x10015823
{
    mangled_assert("_piSBInit@4");
    todo("implement");
}

void piSBCleanup(void *peer) // 0x100157C6
{
    mangled_assert("_piSBCleanup@4");
    todo("implement");
}

PEERBool piSBStartListingGames(void *peer, unsigned char const *fields, __int32 numFields, char const *filter) // 0x10015A36
{
    mangled_assert("_piSBStartListingGames@16");
    todo("implement");
}

void piSBStopListingGames(void *peer) // 0x10015CA5
{
    mangled_assert("_piSBStopListingGames@4");
    todo("implement");
}

void piSBUpdateGame(void *peer, _SBServer *server, PEERBool fullUpdate) // 0x10015D28
{
    mangled_assert("_piSBUpdateGame@12");
    todo("implement");
}

PEERBool piSBStartListingGroups(void *peer, char const *fields) // 0x10015C12
{
    mangled_assert("_piSBStartListingGroups@8");
    todo("implement");
}

void piSBStopListingGroups(void *peer) // 0x10015CD7
{
    mangled_assert("_piSBStopListingGroups@4");
    todo("implement");
}

void piSBThink(void *peer) // 0x10015CF2
{
    mangled_assert("_piSBThink@4");
    todo("implement");
}

/* ---------- private code */

_static void piSBListGamesCallback(_SBServerList *serverlist, SBListCallbackReason reason, _SBServer *server, void *instance) // 0x1001589E
{
    mangled_assert("piSBListGamesCallback");
    todo("implement");
}

_static void piSBEngineGamesCallback(_SBQueryEngine *engine, SBQueryEngineCallbackReason reason, _SBServer *server, void *instance) // 0x10015808
{
    mangled_assert("piSBEngineGamesCallback");
    todo("implement");
}

_static void piSBListGroupsCallback(_SBServerList *serverlist, SBListCallbackReason reason, _SBServer *server, void *instance) // 0x10015947
{
    mangled_assert("piSBListGroupsCallback");
    todo("implement");
}
#endif

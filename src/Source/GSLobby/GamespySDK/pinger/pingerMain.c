#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\darray.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <GSLobby\GamespySDK\pinger\pinger.h>
#include <systemtopologyapi.h>
#include <stdlib.h>
#include <heapapi.h>
#include <limits.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <string.h>
#include <processtopologyapi.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <assert.h>
#include <vadefs.h>
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
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
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

/* ---------- constants */

/* ---------- definitions */

struct piUDPPing
{
    unsigned char magic; // 0x0
    unsigned char version; // 0x1
    unsigned short trip; // 0x2
    unsigned short ID_A; // 0x4
    unsigned short ID_B; // 0x6
};
static_assert(sizeof(piUDPPing) == 8, "Invalid piUDPPing size");

struct piActivePing
{
    PINGERBool originator; // 0x0
    unsigned short ID; // 0x4
    unsigned short expectedTrip; // 0x6
    unsigned long timestamp; // 0x8
    unsigned long timeout; // 0xC
    unsigned __int32 remoteIP; // 0x10
    unsigned short remotePort; // 0x14
    void (*reply)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *); // 0x18
    void *replyParam; // 0x1C
};
static_assert(sizeof(piActivePing) == 32, "Invalid piActivePing size");

typedef void (*pingerGotPing)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *);
typedef void (*pingerSetData)(unsigned __int32, unsigned short, char *, __int32, void *);

struct piQueuedCallback
{
    unsigned __int32 IP; // 0x0
    unsigned short port; // 0x4
    __int32 ping; // 0x8
    char *data; // 0xC
    __int32 len; // 0x10
    void *param; // 0x14
    void (*callback)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *); // 0x18
};
static_assert(sizeof(piQueuedCallback) == 28, "Invalid piQueuedCallback size");

typedef __int32 (*ArrayCompareFn)(void const *, void const *);

/* ---------- prototypes */

extern PINGERBool pingerInit(char const *localAddress, unsigned short localPort, void (*pinged)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *), void *pingedParam, void (*setData)(unsigned __int32, unsigned short, char *, __int32, void *), void *setDataParam);
extern void pingerShutdown();
extern void pingerThink();
extern void pingerPing(unsigned __int32 IP, unsigned short port, void (*reply)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *), void *replyParam, PINGERBool blocking, unsigned long timeout);

_static unsigned short piGetNextID();
_static PINGERBool piBytesToPing(unsigned char *buffer, piUDPPing *udpPing, char *data);
_static PINGERBool piSendPing(sockaddr_in *to, unsigned short trip, unsigned short ID_A, unsigned short ID_B, char const *data);
_static PINGERBool piSocketInit(char const *localAddress, unsigned short localPort);
_static void piQueueCallback(unsigned __int32 IP, unsigned short port, __int32 ping, char const *data, __int32 len, void *param, void (*callbackFunc)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *));
_static void piCallCallbacks();
_static __int32 piFindActivePingCompareFn(void const *elem1, void const *elem2);
_static piActivePing *piFindActivePing(unsigned short ID, __int32 *index);
_static void piProcessTrip1(piUDPPing *udpPing, char const *data, sockaddr_in *from, unsigned long recvTime);
_static void piProcessTrip2(piUDPPing *udpPing, char const *data, sockaddr_in *from, unsigned long recvTime);
_static void piProcessTrip3(piUDPPing *udpPing, char const *data, sockaddr_in *from, unsigned long recvTime);
_static void piProcessIncoming();
_static void piCheckTimeouts();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern PINGERBool piInitialized; // 0x1001FDC4
    extern unsigned __int32 piSocket; // 0x1001E720
    extern void (*piPingerPinged)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *); // 0x1001FDC8
    extern void *piPingerPingedParam; // 0x1001FDCC
    extern void (*piPingerSetData)(unsigned __int32, unsigned short, char *, __int32, void *); // 0x1001FDD0
    extern void *piPingerSetDataParam; // 0x1001FDD4
    extern PINGERBool piSettingData; // 0x1001FDD8
    extern PINGERBool piUDPEnabled; // 0x1001FDDC
    extern unsigned short piNextID; // 0x1001FDE0
    extern DArrayImplementation *piActivePingList; // 0x1001FDE4
    extern unsigned long piLastThinkTime; // 0x1001FDE8
    extern DArrayImplementation *piCallbacks; // 0x1001FDEC
}

/* ---------- public code */

PINGERBool pingerInit(char const *localAddress, unsigned short localPort, void (*pinged)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *), void *pingedParam, void (*setData)(unsigned __int32, unsigned short, char *, __int32, void *), void *setDataParam) // 0x100163EF
{
    mangled_assert("_pingerInit@24");
    todo("implement");
}

void pingerShutdown() // 0x100165C8
{
    mangled_assert("_pingerShutdown@0");
    todo("implement");
}

void pingerThink() // 0x10016614
{
    mangled_assert("_pingerThink@0");
    todo("implement");
}

void pingerPing(unsigned __int32 IP, unsigned short port, void (*reply)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *), void *replyParam, PINGERBool blocking, unsigned long timeout) // 0x100164DF
{
    mangled_assert("_pingerPing@24");
    todo("implement");
}

/* ---------- private code */

_static unsigned short piGetNextID() // 0x10015F35
{
    mangled_assert("piGetNextID");
    todo("implement");
}

_static PINGERBool piBytesToPing(unsigned char *buffer, piUDPPing *udpPing, char *data) // 0x10015D7B
{
    mangled_assert("piBytesToPing");
    todo("implement");
}

_static PINGERBool piSendPing(sockaddr_in *to, unsigned short trip, unsigned short ID_A, unsigned short ID_B, char const *data) // 0x100162BA
{
    mangled_assert("piSendPing");
    todo("implement");
}

_static PINGERBool piSocketInit(char const *localAddress, unsigned short localPort) // 0x1001633E
{
    mangled_assert("piSocketInit");
    todo("implement");
}

_static void piQueueCallback(unsigned __int32 IP, unsigned short port, __int32 ping, char const *data, __int32 len, void *param, void (*callbackFunc)(unsigned __int32, unsigned short, __int32, char const *, __int32, void *)) // 0x1001624D
{
    mangled_assert("piQueueCallback");
    todo("implement");
}

_static void piCallCallbacks() // 0x10015E06
{
    mangled_assert("piCallCallbacks");
    todo("implement");
}

_static __int32 piFindActivePingCompareFn(void const *elem1, void const *elem2) // 0x10015F22
{
    mangled_assert("piFindActivePingCompareFn");
    todo("implement");
}

_static piActivePing *piFindActivePing(unsigned short ID, __int32 *index) // 0x10015EDA
{
    mangled_assert("piFindActivePing");
    todo("implement");
}

_static void piProcessTrip1(piUDPPing *udpPing, char const *data, sockaddr_in *from, unsigned long recvTime) // 0x1001603F
{
    mangled_assert("piProcessTrip1");
    todo("implement");
}

_static void piProcessTrip2(piUDPPing *udpPing, char const *data, sockaddr_in *from, unsigned long recvTime) // 0x10016129
{
    mangled_assert("piProcessTrip2");
    todo("implement");
}

_static void piProcessTrip3(piUDPPing *udpPing, char const *data, sockaddr_in *from, unsigned long recvTime) // 0x100161EC
{
    mangled_assert("piProcessTrip3");
    todo("implement");
}

_static void piProcessIncoming() // 0x10015F59
{
    mangled_assert("piProcessIncoming");
    todo("implement");
}

_static void piCheckTimeouts() // 0x10015E6B
{
    mangled_assert("piCheckTimeouts");
    todo("implement");
}
#endif

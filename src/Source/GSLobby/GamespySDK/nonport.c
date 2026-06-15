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
#include <stdlib.h>
#include <libloaderapi.h>
#include <limits.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <imm.h>
#include <minwinbase.h>
#include <string.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <synchapi.h>
#include <vadefs.h>
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
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
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

typedef char const *(*GetUniqueIDFunction)(...);
typedef void (*ptPatchCallback)(__int32, __int32, char const *, __int32, char const *, void *);
typedef void (*ptFilePlanetInfoCallback)(__int32, __int32, char const *, char const *, __int32, char const **, char const **, void *);
typedef __int32 PTBool;
typedef void *LPVOID;
typedef HKEY__ *HKEY;
typedef char const *LPCSTR;
typedef char *LPSTR;
typedef unsigned long *LPDWORD;
typedef __int32 BOOL;
typedef _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;
typedef _LARGE_INTEGER LARGE_INTEGER;
typedef unsigned long ACCESS_MASK;
typedef WSAData WSADATA;
typedef unsigned char *LPBYTE;
typedef long LSTATUS;
typedef WSAData *LPWSADATA;
typedef HKEY__ **PHKEY;
typedef unsigned __int32 UINT;
typedef unsigned long REGSAM;

/* ---------- prototypes */

extern unsigned long current_time(...);
extern void msleep(unsigned long msec);
extern void SocketStartUp(...);
extern void SocketShutDown(...);
extern char *goastrdup(char const *src);
extern __int32 SetSockBlocking(unsigned __int32 sock, __int32 isblocking);
extern __int32 SetReceiveBufferSize(unsigned __int32 sock, __int32 size);
extern __int32 CanReceiveOnSocket(unsigned __int32 sock);
extern hostent *getlocalhost();
extern char const *GOAGetUniqueID_Internal();

_static void GenerateID(char *keyval);

/* ---------- globals */

extern char const *(*GOAGetUniqueID)(...); // 0x1001E078

/* ---------- private variables */

_static
{
    extern long randomnum; // 0x1001E07C
}

/* ---------- public code */

unsigned long current_time(...) // 0x10006A35
{
    mangled_assert("_current_time@0");
    todo("implement");
}

void msleep(unsigned long msec) // 0x10006AB7
{
    mangled_assert("_msleep@4");
    todo("implement");
}

void SocketStartUp(...) // 0x10006A1A
{
    mangled_assert("_SocketStartUp@0");
    todo("implement");
}

void SocketShutDown(...) // 0x10006A15
{
    mangled_assert("_SocketShutDown@0");
    todo("implement");
}

char *goastrdup(char const *src) // 0x10006A80
{
    mangled_assert("_goastrdup@4");
    todo("implement");
}

__int32 SetSockBlocking(unsigned __int32 sock, __int32 isblocking) // 0x100069ED
{
    mangled_assert("_SetSockBlocking@8");
    todo("implement");
}

__int32 SetReceiveBufferSize(unsigned __int32 sock, __int32 size) // 0x100069C6
{
    mangled_assert("_SetReceiveBufferSize@8");
    todo("implement");
}

__int32 CanReceiveOnSocket(unsigned __int32 sock) // 0x10006895
{
    mangled_assert("_CanReceiveOnSocket@4");
    todo("implement");
}

hostent *getlocalhost() // 0x10006A3B
{
    mangled_assert("_getlocalhost@0");
    todo("implement");
}

char const *GOAGetUniqueID_Internal() // 0x100067A0
{
    mangled_assert("_GOAGetUniqueID_Internal@0");
    todo("implement");
}

/* ---------- private code */

_static void GenerateID(char *keyval) // 0x100068E1
{
    mangled_assert("GenerateID");
    todo("implement");
}
#endif

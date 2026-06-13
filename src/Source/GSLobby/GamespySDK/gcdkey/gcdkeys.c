#if 0
/* ---------- headers */

#include "decomp.h"
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <GSLobby\GamespySDK\gcdkey\gcdkeys.h>
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
#include <swprintf.inl>
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
#include <stdio.h>
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>

/* ---------- constants */

enum gsclientstate_t
{
    cs_sentreq = 0,
    cs_gotok,
    cs_gotnok,
    cs_done,
};

/* ---------- definitions */

struct gsclient_s
{
    __int32 localid; // 0x0
    char hkey[33]; // 0x4
    __int32 sesskey; // 0x28
    __int32 ip; // 0x2C
    unsigned long sttime; // 0x30
    __int32 ntries; // 0x34
    gsclientstate_t state; // 0x38
    void *instance; // 0x3C
    void (*authfn)(__int32, __int32, __int32, char *, void *); // 0x40
    char *errmsg; // 0x44
    char *reqstr; // 0x48
    __int32 reqlen; // 0x4C
};
static_assert(sizeof(gsclient_s) == 80, "Invalid gsclient_s size");

typedef gsproduct_s gsproduct_t;
typedef void (*AuthCallBackFn)(__int32, __int32, __int32, char *, void *);
typedef gsnode_s gsnode_t;
typedef gsclient_s gsclient_t;

struct gsnode_s
{
    gsclient_s *client; // 0x0
    gsnode_s *next; // 0x4
    gsnode_s *prev; // 0x8
};
static_assert(sizeof(gsnode_s) == 12, "Invalid gsnode_s size");

struct gsproduct_s
{
    __int32 pid; // 0x0
    gsnode_s clientq; // 0x4
};
static_assert(sizeof(gsproduct_s) == 16, "Invalid gsproduct_s size");

/* ---------- prototypes */

/* ---------- globals */

extern char gcd_hostname[64]; // 0x1001FDF0

/* ---------- private variables */

_static
{
    extern unsigned __int32 sock; // 0x1001E724
    extern unsigned short localport; // 0x1001FE30
    extern char enc[9]; // 0x1001FE38
    extern sockaddr_in valaddr; // 0x1001FE44
    extern __int32 numproducts; // 0x1001FE34
}

/* ---------- public code */

/* ---------- private code */
#endif

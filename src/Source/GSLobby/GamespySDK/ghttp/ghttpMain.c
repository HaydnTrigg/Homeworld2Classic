#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <GSLobby\GamespySDK\ghttp\ghttpCallbacks.h>
#include <sdv_driverspecs.h>
#include <GSLobby\GamespySDK\ghttp\ghttp.h>
#include <inaddr.h>
#include <stralign.h>
#include <stdlib.h>
#include <limits.h>
#include <namespaceapi.h>
#include <winsvc.h>
#include <GSLobby\GamespySDK\ghttp\ghttpMain.h>
#include <errhandlingapi.h>
#include <stdio.h>
#include <GSLobby\GamespySDK\ghttp\ghttpProcess.h>
#include <winerror.h>
#include <crtdefs.h>
#include <securitybaseapi.h>
#include <sal.h>
#include <winreg.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <GSLobby\GamespySDK\ghttp\ghttpConnection.h>
#include <winnt.h>
#include <GSLobby\GamespySDK\ghttp\ghttpBuffer.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <GSLobby\GamespySDK\ghttp\ghttpCommon.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <string.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <swprintf.inl>
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
#include <GSLobby\GamespySDK\ghttp\ghttpPost.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <GSLobby\GamespySDK\darray.h>
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

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void ghttpStartup();
extern void ghttpCleanup();
extern __int32 ghttpGet(char const *URL, GHTTPBool blocking, GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param);
extern __int32 ghttpSaveEx(char const *URL, char const *filename, char const *headers, GHIPost *post, GHTTPBool throttle, GHTTPBool blocking, void (*progressCallback)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *), GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param);
extern __int32 ghttpHeadEx(char const *URL, char const *headers, GHTTPBool throttle, GHTTPBool blocking, void (*progressCallback)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *), GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param);
extern GHTTPBool ghttpRequestThink(__int32 request);
extern void ghttpCancelRequest(__int32 request);
extern char const *ghttpGetHeaders(__int32 request);

_static void ghiHandleStatus(GHIConnection *connection);
_static GHTTPBool ghiProcessConnection(GHIConnection *connection);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 ghiReferenceCount; // 0x1002076C
}

/* ---------- public code */

void ghttpStartup() // 0x10017703
{
    mangled_assert("_ghttpStartup@0");
    todo("implement");
}

void ghttpCleanup() // 0x10017459
{
    mangled_assert("_ghttpCleanup@0");
    todo("implement");
}

__int32 ghttpGet(char const *URL, GHTTPBool blocking, GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param) // 0x10017492
{
    mangled_assert("_ghttpGet@16");
    todo("implement");
}

__int32 ghttpSaveEx(char const *URL, char const *filename, char const *headers, GHIPost *post, GHTTPBool throttle, GHTTPBool blocking, void (*progressCallback)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *), GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param) // 0x10017621
{
    mangled_assert("_ghttpSaveEx@36");
    todo("implement");
}

__int32 ghttpHeadEx(char const *URL, char const *headers, GHTTPBool throttle, GHTTPBool blocking, void (*progressCallback)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *), GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param) // 0x10017563
{
    mangled_assert("_ghttpHeadEx@28");
    todo("implement");
}

GHTTPBool ghttpRequestThink(__int32 request) // 0x10017608
{
    mangled_assert("_ghttpRequestThink@4");
    todo("implement");
}

void ghttpCancelRequest(__int32 request) // 0x10017443
{
    mangled_assert("_ghttpCancelRequest@4");
    todo("implement");
}

char const *ghttpGetHeaders(__int32 request) // 0x1001753C
{
    mangled_assert("_ghttpGetHeaders@4");
    todo("implement");
}

/* ---------- private code */

_static void ghiHandleStatus(GHIConnection *connection) // 0x10017311
{
    mangled_assert("ghiHandleStatus");
    todo("implement");
}

_static GHTTPBool ghiProcessConnection(GHIConnection *connection) // 0x10017378
{
    mangled_assert("ghiProcessConnection");
    todo("implement");
}
#endif

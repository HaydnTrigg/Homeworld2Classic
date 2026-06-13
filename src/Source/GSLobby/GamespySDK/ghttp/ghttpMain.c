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

_extern void _sub_10017703();
void ghttpStartup() // 0x10017703
{
    mangled_assert("_ghttpStartup@0");
    todo("implement");
    _sub_10017703();
}

_extern void _sub_10017459();
void ghttpCleanup() // 0x10017459
{
    mangled_assert("_ghttpCleanup@0");
    todo("implement");
    _sub_10017459();
}

_extern __int32 _sub_10017492(char const *, GHTTPBool, GHTTPBool (*)(__int32, GHTTPResult, char *, __int32, void *), void *);
__int32 ghttpGet(char const *URL, GHTTPBool blocking, GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param) // 0x10017492
{
    mangled_assert("_ghttpGet@16");
    todo("implement");
    __int32 __result = _sub_10017492(URL, blocking, completedCallback, param);
    return __result;
}

_extern __int32 _sub_10017621(char const *, char const *, char const *, GHIPost *, GHTTPBool, GHTTPBool, void (*)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *), GHTTPBool (*)(__int32, GHTTPResult, char *, __int32, void *), void *);
__int32 ghttpSaveEx(char const *URL, char const *filename, char const *headers, GHIPost *post, GHTTPBool throttle, GHTTPBool blocking, void (*progressCallback)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *), GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param) // 0x10017621
{
    mangled_assert("_ghttpSaveEx@36");
    todo("implement");
    __int32 __result = _sub_10017621(URL, filename, headers, post, throttle, blocking, progressCallback, completedCallback, param);
    return __result;
}

_extern __int32 _sub_10017563(char const *, char const *, GHTTPBool, GHTTPBool, void (*)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *), GHTTPBool (*)(__int32, GHTTPResult, char *, __int32, void *), void *);
__int32 ghttpHeadEx(char const *URL, char const *headers, GHTTPBool throttle, GHTTPBool blocking, void (*progressCallback)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *), GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *), void *param) // 0x10017563
{
    mangled_assert("_ghttpHeadEx@28");
    todo("implement");
    __int32 __result = _sub_10017563(URL, headers, throttle, blocking, progressCallback, completedCallback, param);
    return __result;
}

_extern GHTTPBool _sub_10017608(__int32);
GHTTPBool ghttpRequestThink(__int32 request) // 0x10017608
{
    mangled_assert("_ghttpRequestThink@4");
    todo("implement");
    GHTTPBool __result = _sub_10017608(request);
    return __result;
}

_extern void _sub_10017443(__int32);
void ghttpCancelRequest(__int32 request) // 0x10017443
{
    mangled_assert("_ghttpCancelRequest@4");
    todo("implement");
    _sub_10017443(request);
}

_extern char const *_sub_1001753C(__int32);
char const *ghttpGetHeaders(__int32 request) // 0x1001753C
{
    mangled_assert("_ghttpGetHeaders@4");
    todo("implement");
    char const * __result = _sub_1001753C(request);
    return __result;
}

/* ---------- private code */

_extern void _sub_10017311(GHIConnection *);
_static void ghiHandleStatus(GHIConnection *connection) // 0x10017311
{
    mangled_assert("ghiHandleStatus");
    todo("implement");
    _sub_10017311(connection);
}

_extern GHTTPBool _sub_10017378(GHIConnection *);
_static GHTTPBool ghiProcessConnection(GHIConnection *connection) // 0x10017378
{
    mangled_assert("ghiProcessConnection");
    todo("implement");
    GHTTPBool __result = _sub_10017378(connection);
    return __result;
}
#endif

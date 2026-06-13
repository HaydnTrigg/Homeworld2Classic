#if 0
/* ---------- headers */

#include "decomp.h"
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <GSLobby\GamespySDK\pt\pt.h>
#include <processtopologyapi.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <string.h>
#include <assert.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <stdio.h>
#include <crtdefs.h>
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
#include <swprintf.inl>
#include <stringapiset.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <stdlib.h>
#include <GSLobby\GamespySDK\ghttp\ghttp.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <limits.h>
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
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>

/* ---------- constants */

/* ---------- definitions */

struct ptaPatchData
{
    void (*callback)(__int32, __int32, char const *, __int32, char const *, void *); // 0x0
    void *param; // 0x4
};
static_assert(sizeof(ptaPatchData) == 8, "Invalid ptaPatchData size");

struct ptaFilePlanetInfoData
{
    __int32 fileID; // 0x0
    void (*callback)(__int32, __int32, char const *, char const *, __int32, char const **, char const **, void *); // 0x4
    void *param; // 0x8
};
static_assert(sizeof(ptaFilePlanetInfoData) == 12, "Invalid ptaFilePlanetInfoData size");

/* ---------- prototypes */

extern __int32 ptCheckForPatch(__int32 productID, char const *versionUniqueID, __int32 distributionID, void (*callback)(__int32, __int32, char const *, __int32, char const *, void *), __int32 blocking, void *param);
extern __int32 ptTrackUsage(__int32 userID, __int32 productID, char const *versionUniqueID, __int32 distributionID, __int32 blocking);

_static char const *ptaGetKeyValue(char const *buffer, char const *key);
_static GHTTPBool ptaPatchFailed(ptaPatchData *data);
_static GHTTPBool ptaPatchCompletedCallback(__int32 request, GHTTPResult result, char *buffer, __int32 bufferLen, void *param);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char URL[256]; // 0x10020458
    extern char Line[256]; // 0x10020658
}

/* ---------- public code */

_extern __int32 _sub_10016636(__int32, char const *, __int32, void (*)(__int32, __int32, char const *, __int32, char const *, void *), __int32, void *);
__int32 ptCheckForPatch(__int32 productID, char const *versionUniqueID, __int32 distributionID, void (*callback)(__int32, __int32, char const *, __int32, char const *, void *), __int32 blocking, void *param) // 0x10016636
{
    mangled_assert("_ptCheckForPatch@24");
    todo("implement");
    __int32 __result = _sub_10016636(productID, versionUniqueID, distributionID, callback, blocking, param);
    return __result;
}

_extern __int32 _sub_100166B5(__int32, __int32, char const *, __int32, __int32);
__int32 ptTrackUsage(__int32 userID, __int32 productID, char const *versionUniqueID, __int32 distributionID, __int32 blocking) // 0x100166B5
{
    mangled_assert("_ptTrackUsage@20");
    todo("implement");
    __int32 __result = _sub_100166B5(userID, productID, versionUniqueID, distributionID, blocking);
    return __result;
}

/* ---------- private code */

_extern char const *_sub_10016706(char const *, char const *);
_static char const *ptaGetKeyValue(char const *buffer, char const *key) // 0x10016706
{
    mangled_assert("ptaGetKeyValue");
    todo("implement");
    char const * __result = _sub_10016706(buffer, key);
    return __result;
}

_extern GHTTPBool _sub_1001688F(ptaPatchData *);
_static GHTTPBool ptaPatchFailed(ptaPatchData *data) // 0x1001688F
{
    mangled_assert("ptaPatchFailed");
    todo("implement");
    GHTTPBool __result = _sub_1001688F(data);
    return __result;
}

_extern GHTTPBool _sub_1001675F(__int32, GHTTPResult, char *, __int32, void *);
_static GHTTPBool ptaPatchCompletedCallback(__int32 request, GHTTPResult result, char *buffer, __int32 bufferLen, void *param) // 0x1001675F
{
    mangled_assert("ptaPatchCompletedCallback");
    todo("implement");
    GHTTPBool __result = _sub_1001675F(request, result, buffer, bufferLen, param);
    return __result;
}
#endif

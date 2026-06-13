#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <GSLobby\GamespySDK\ghttp\ghttpCommon.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <GSLobby\GamespySDK\ghttp\ghttp.h>
#include <inaddr.h>
#include <stralign.h>
#include <stdlib.h>
#include <limits.h>
#include <namespaceapi.h>
#include <GSLobby\GamespySDK\ghttp\ghttpBuffer.h>
#include <winsvc.h>
#include <GSLobby\GamespySDK\ghttp\ghttpMain.h>
#include <errhandlingapi.h>
#include <stdio.h>
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
#include <winnt.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>
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
#include <GSLobby\GamespySDK\ghttp\ghttpConnection.h>
#include <GSLobby\GamespySDK\ghttp\ghttpPost.h>
#include <ime_cmodes.h>
#include <GSLobby\GamespySDK\darray.h>
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

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern GHTTPBool ghiInitBuffer(GHIConnection *connection, GHIBuffer *buffer, __int32 initialSize, __int32 sizeIncrement);
extern void ghiFreeBuffer(GHIBuffer *buffer);
extern GHTTPBool ghiAppendDataToBuffer(GHIBuffer *buffer, char const *data, __int32 dataLen);
extern GHTTPBool ghiAppendHeaderToBuffer(GHIBuffer *buffer, char const *name, char const *value);
extern GHTTPBool ghiAppendCharToBuffer(GHIBuffer *buffer, __int32 c);
extern GHTTPBool ghiAppendIntToBuffer(GHIBuffer *buffer, __int32 i);
extern void ghiResetBuffer(GHIBuffer *buffer);
extern GHTTPBool ghiSendBuffer(GHIBuffer *buffer, GHIConnection *connection);

_static GHTTPBool ghiResizeBuffer(GHIBuffer *buffer, __int32 sizeIncrement);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern GHTTPBool _sub_10016A7F(GHIConnection *, GHIBuffer *, __int32, __int32);
GHTTPBool ghiInitBuffer(GHIConnection *connection, GHIBuffer *buffer, __int32 initialSize, __int32 sizeIncrement) // 0x10016A7F
{
    mangled_assert("_ghiInitBuffer@16");
    todo("implement");
    GHTTPBool __result = _sub_10016A7F(connection, buffer, initialSize, sizeIncrement);
    return __result;
}

_extern void _sub_10016A4F(GHIBuffer *);
void ghiFreeBuffer(GHIBuffer *buffer) // 0x10016A4F
{
    mangled_assert("_ghiFreeBuffer@4");
    todo("implement");
    _sub_10016A4F(buffer);
}

_extern GHTTPBool _sub_1001692D(GHIBuffer *, char const *, __int32);
GHTTPBool ghiAppendDataToBuffer(GHIBuffer *buffer, char const *data, __int32 dataLen) // 0x1001692D
{
    mangled_assert("_ghiAppendDataToBuffer@12");
    todo("implement");
    GHTTPBool __result = _sub_1001692D(buffer, data, dataLen);
    return __result;
}

_extern GHTTPBool _sub_100169CD(GHIBuffer *, char const *, char const *);
GHTTPBool ghiAppendHeaderToBuffer(GHIBuffer *buffer, char const *name, char const *value) // 0x100169CD
{
    mangled_assert("_ghiAppendHeaderToBuffer@12");
    todo("implement");
    GHTTPBool __result = _sub_100169CD(buffer, name, value);
    return __result;
}

_extern GHTTPBool _sub_100168BA(GHIBuffer *, __int32);
GHTTPBool ghiAppendCharToBuffer(GHIBuffer *buffer, __int32 c) // 0x100168BA
{
    mangled_assert("_ghiAppendCharToBuffer@8");
    todo("implement");
    GHTTPBool __result = _sub_100168BA(buffer, c);
    return __result;
}

_extern GHTTPBool _sub_10016A22(GHIBuffer *, __int32);
GHTTPBool ghiAppendIntToBuffer(GHIBuffer *buffer, __int32 i) // 0x10016A22
{
    mangled_assert("_ghiAppendIntToBuffer@8");
    todo("implement");
    GHTTPBool __result = _sub_10016A22(buffer, i);
    return __result;
}

_extern void _sub_10016AD7(GHIBuffer *);
void ghiResetBuffer(GHIBuffer *buffer) // 0x10016AD7
{
    mangled_assert("_ghiResetBuffer@4");
    todo("implement");
    _sub_10016AD7(buffer);
}

_extern GHTTPBool _sub_10016B25(GHIBuffer *, GHIConnection *);
GHTTPBool ghiSendBuffer(GHIBuffer *buffer, GHIConnection *connection) // 0x10016B25
{
    mangled_assert("_ghiSendBuffer@8");
    todo("implement");
    GHTTPBool __result = _sub_10016B25(buffer, connection);
    return __result;
}

/* ---------- private code */

_extern GHTTPBool _sub_10016AEB(GHIBuffer *, __int32);
_static GHTTPBool ghiResizeBuffer(GHIBuffer *buffer, __int32 sizeIncrement) // 0x10016AEB
{
    mangled_assert("ghiResizeBuffer");
    todo("implement");
    GHTTPBool __result = _sub_10016AEB(buffer, sizeIncrement);
    return __result;
}
#endif

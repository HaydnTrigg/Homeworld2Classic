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
#include <sdv_driverspecs.h>
#include <GSLobby\GamespySDK\ghttp\ghttp.h>
#include <inaddr.h>
#include <stralign.h>
#include <stdlib.h>
#include <limits.h>
#include <namespaceapi.h>
#include <GSLobby\GamespySDK\ghttp\ghttpProcess.h>
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
#include <GSLobby\GamespySDK\ghttp\ghttpCallbacks.h>
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

extern void ghiDoHostLookup(GHIConnection *connection);
extern void ghiDoConnecting(GHIConnection *connection);
extern void ghiDoSendingRequest(GHIConnection *connection);
extern void ghiDoPosting(GHIConnection *connection);
extern void ghiDoWaiting(GHIConnection *connection);
extern void ghiDoReceivingStatus(GHIConnection *connection);
extern void ghiDoReceivingHeaders(GHIConnection *connection);
extern void ghiDoReceivingFile(GHIConnection *connection);

_static GHTTPBool ghiParseURL(GHIConnection *connection);
_static GHTTPBool ghiParseStatus(GHIConnection *connection);
_static GHTTPBool ghiDeliverIncomingFileData(GHIConnection *connection, char *data, __int32 len);
_static void ghiAppendToChunkHeaderBuffer(GHIConnection *connection, char *data, __int32 len);
_static GHTTPBool ghiProcessIncomingFileData(GHIConnection *connection, char *data, __int32 len);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void ghiDoHostLookup(GHIConnection *connection) // 0x1001807C
{
    mangled_assert("_ghiDoHostLookup@4");
    todo("implement");
}

void ghiDoConnecting(GHIConnection *connection) // 0x10017F58
{
    mangled_assert("_ghiDoConnecting@4");
    todo("implement");
}

void ghiDoSendingRequest(GHIConnection *connection) // 0x1001851D
{
    mangled_assert("_ghiDoSendingRequest@4");
    todo("implement");
}

void ghiDoPosting(GHIConnection *connection) // 0x10018106
{
    mangled_assert("_ghiDoPosting@4");
    todo("implement");
}

void ghiDoWaiting(GHIConnection *connection) // 0x10018688
{
    mangled_assert("_ghiDoWaiting@4");
    todo("implement");
}

void ghiDoReceivingStatus(GHIConnection *connection) // 0x10018474
{
    mangled_assert("_ghiDoReceivingStatus@4");
    todo("implement");
}

void ghiDoReceivingHeaders(GHIConnection *connection) // 0x100181BF
{
    mangled_assert("_ghiDoReceivingHeaders@4");
    todo("implement");
}

void ghiDoReceivingFile(GHIConnection *connection) // 0x10018157
{
    mangled_assert("_ghiDoReceivingFile@4");
    todo("implement");
}

/* ---------- private code */

_static GHTTPBool ghiParseURL(GHIConnection *connection) // 0x10018786
{
    mangled_assert("ghiParseURL");
    todo("implement");
}

_static GHTTPBool ghiParseStatus(GHIConnection *connection) // 0x100186DA
{
    mangled_assert("ghiParseStatus");
    todo("implement");
}

_static GHTTPBool ghiDeliverIncomingFileData(GHIConnection *connection, char *data, __int32 len) // 0x10017EB4
{
    mangled_assert("ghiDeliverIncomingFileData");
    todo("implement");
}

_static void ghiAppendToChunkHeaderBuffer(GHIConnection *connection, char *data, __int32 len) // 0x10017E63
{
    mangled_assert("ghiAppendToChunkHeaderBuffer");
    todo("implement");
}

_static GHTTPBool ghiProcessIncomingFileData(GHIConnection *connection, char *data, __int32 len) // 0x10018856
{
    mangled_assert("ghiProcessIncomingFileData");
    todo("implement");
}
#endif

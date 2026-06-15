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
#include <GSLobby\GamespySDK\ghttp\ghttpConnection.h>
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
#include <GSLobby\GamespySDK\ghttp\ghttpBuffer.h>
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

typedef unsigned long u_long;

/* ---------- prototypes */

extern GHIConnection *ghiNewConnection();
extern GHTTPBool ghiFreeConnection(GHIConnection *connection);
extern GHIConnection *ghiRequestToConnection(__int32 request);
extern void ghiEnumConnections(GHTTPBool (*callback)(GHIConnection *));
extern void ghiRedirectConnection(GHIConnection *connection);
extern void ghiCleanupConnections();

_static __int32 ghiFindFreeSlot();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern GHIConnection **ghiConnections; // 0x1002075C
    extern __int32 ghiConnectionsLen; // 0x10020760
    extern __int32 ghiNumConnections; // 0x10020764
    extern __int32 ghiNextUniqueID; // 0x10020768
}

/* ---------- public code */

GHIConnection *ghiNewConnection() // 0x10017124
{
    mangled_assert("_ghiNewConnection@0");
    todo("implement");
}

GHTTPBool ghiFreeConnection(GHIConnection *connection) // 0x1001703E
{
    mangled_assert("_ghiFreeConnection@4");
    todo("implement");
}

GHIConnection *ghiRequestToConnection(__int32 request) // 0x100172D8
{
    mangled_assert("_ghiRequestToConnection@4");
    todo("implement");
}

void ghiEnumConnections(GHTTPBool (*callback)(GHIConnection *)) // 0x10016F6F
{
    mangled_assert("_ghiEnumConnections@4");
    todo("implement");
}

void ghiRedirectConnection(GHIConnection *connection) // 0x10017244
{
    mangled_assert("_ghiRedirectConnection@4");
    todo("implement");
}

void ghiCleanupConnections() // 0x10016F1B
{
    mangled_assert("_ghiCleanupConnections@0");
    todo("implement");
}

/* ---------- private code */

_static __int32 ghiFindFreeSlot() // 0x10016FB0
{
    mangled_assert("ghiFindFreeSlot");
    todo("implement");
}
#endif

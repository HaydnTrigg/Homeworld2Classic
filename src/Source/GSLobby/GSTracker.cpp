#if 0
/* ---------- headers */

#include "decomp.h"
#include <winbase.h>
#include <wincon.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <errhandlingapi.h>
#include <crtdefs.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <wow64apiset.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <processtopologyapi.h>
#include <winnt.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <mcx.h>
#include <winreg.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <winver.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <winuser.h>
#include <ime_cmodes.h>
#include <consoleapi.h>
#include <winsock.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <wingdi.h>
#include <assert.h>
#include <pshpack4.h>
#include <winerror.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <pch.h>
#include <GSLobby\GSTracker.h>
#include <GSLobby\gslobbyexport.h>
#include <securitybaseapi.h>
#include <imm.h>
#include <debugapi.h>
#include <fileapi.h>
#include <stralign.h>
#include <GSLobby\GamespySDK\pt\pt.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <winsvc.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <excpt.h>
#include <poppack.h>
#include <profileapi.h>
#include <synchapi.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <inaddr.h>
#include <namespaceapi.h>
#include <ktmtypes.h>

/* ---------- constants */

/* ---------- definitions */

typedef _GUID GUID;
typedef tagAR_STATE AR_STATE;

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 GSTracker::s_usagesTracked; // 0x1001E820

/* ---------- private variables */

/* ---------- public code */

_extern GSTracker &_sub_100058C4(GSTracker *const, GSTracker const &);
_inline GSTracker &GSTracker::operator=(GSTracker const &) // 0x100058C4
{
    mangled_assert("??4GSTracker@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    GSTracker & __result = _sub_100058C4(this, arg);
    return __result;
}

_extern void _sub_100058C9(__int32, char const *, __int32);
void GSTracker::TrackUsage(__int32 productID, char const *versionUniqueID, __int32 distributionID) // 0x100058C9
{
    mangled_assert("?TrackUsage@GSTracker@@SGXHPBDH@Z");
    todo("implement");
    _sub_100058C9(productID, versionUniqueID, distributionID);
}

/* ---------- private code */
#endif

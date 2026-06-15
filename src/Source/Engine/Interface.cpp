#if 0
/* ---------- headers */

#include "decomp.h"
#include <prim.h>
#include <profileapi.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <synchapi.h>
#include <crtdefs.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pshpack8.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <tvout.h>
#include <specstrings.h>
#include <winnetwk.h>
#include <specstrings_strict.h>
#include <wnnc.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <xstddef>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <xutility>
#include <vector>
#include <iosfwd>
#include <winbase.h>
#include <apisetcconv.h>
#include <pshpack1.h>
#include <minwinbase.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <task.h>
#include <apiset.h>
#include <stack>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <platform\sharedlibraryinterface.h>
#include <platform\osdef.h>
#include <platform\namedinterface.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <boost\scoped_ptr.hpp>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <Mathlib\vector2.h>
#include <platform\platformexports.h>
#include <util\types.h>
#include <winreg.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <realtimeapiset.h>
#include <winver.h>
#include <verrsrc.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <debug\debug.h>
#include <memoryapi.h>
#include <debug\filter.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack4.h>
#include <winerror.h>
#include <platform\keydefines.h>
#include <ime_cmodes.h>
#include <Interface.h>
#include <platform\sysinputinterface.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <securitybaseapi.h>
#include <reason.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <winuser.h>
#include <debugapi.h>
#include <fileapi.h>
#include <platform\cmdline.h>
#include <platform\os.h>
#include <windows.h>
#include <winnls.h>
#include <winapifamily.h>
#include <datetimeapi.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <stralign.h>
#include <excpt.h>
#include <poppack.h>
#include <imm.h>
#include <region.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned __int32 getLibraryID();
extern bool setupInterfaces();
extern __int32 DllMain(void *hInstance, unsigned long reason, void *reserved);

/* ---------- globals */

extern SysInputInterface *sysInInterface; // 0x848A80
extern SysDialogInterface *sysDialogInterface; // 0x848A84
extern ImageInterface *imageInterface; // 0x848A88

/* ---------- private variables */

/* ---------- public code */

unsigned __int32 getLibraryID() // 0x5FB2D1
{
    mangled_assert("_getLibraryID");
    todo("implement");
}

bool setupInterfaces() // 0x5FB217
{
    mangled_assert("?setupInterfaces@@YG_NXZ");
    todo("implement");
}

__int32 DllMain(void *hInstance, unsigned long reason, void *reserved) // 0x5FB2CB
{
    mangled_assert("_DllMain@12");
    todo("implement");
}

/* ---------- private code */
#endif

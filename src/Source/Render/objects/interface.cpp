#if 0
/* ---------- headers */

#include "decomp.h"
#include <specstrings.h>
#include <handleapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <platform\namedinterface.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <winbase.h>
#include <apisetcconv.h>
#include <pshpack1.h>
#include <minwinbase.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <processtopologyapi.h>
#include <winnt.h>
#include <pshpack2.h>
#include <kernelspecs.h>
#include <libloaderapi.h>
#include <basetsd.h>
#include <sysinfoapi.h>
#include <winreg.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <realtimeapiset.h>
#include <winver.h>
#include <verrsrc.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack4.h>
#include <winerror.h>
#include <util\types.h>
#include <ime_cmodes.h>
#include <Objects\Objects.h>
#include <platform\sharedlibraryinterface.h>
#include <platform\osdef.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <securitybaseapi.h>
#include <reason.h>
#include <winuser.h>
#include <platform\platformexports.h>
#include <debugapi.h>
#include <fileapi.h>
#include <winnls.h>
#include <platform\os.h>
#include <datetimeapi.h>
#include <windows.h>
#include <threadpoollegacyapiset.h>
#include <stralign.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <excpt.h>
#include <poppack.h>
#include <imm.h>
#include <profileapi.h>
#include <synchapi.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pshpack8.h>
#include <stdarg.h>
#include <bemapiset.h>
#include <tvout.h>
#include <windef.h>
#include <winnetwk.h>
#include <minwindef.h>
#include <wnnc.h>

/* ---------- constants */

/* ---------- definitions */

typedef void *LPVOID;
typedef void *HANDLE;
typedef unsigned __int32 osLibraryTypeID;
typedef void *osLibraryHandle;
typedef __int32 (*osLibraryProc)();

/* ---------- prototypes */

extern unsigned __int32 getLibraryID();
extern bool setupFunctionTable(void *fnTable);
extern __int32 DllMain(void *hInstance, unsigned long reason, void *reserved);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

unsigned __int32 getLibraryID() // 0x10064390
{
    mangled_assert("_getLibraryID");
    todo("implement");
}

bool setupFunctionTable(void *fnTable) // 0x100643A0
{
    mangled_assert("_setupFunctionTable");
    todo("implement");
}

__int32 DllMain(void *hInstance, unsigned long reason, void *reserved) // 0x10064380
{
    mangled_assert("_DllMain@12");
    todo("implement");
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\os.h>
#include <windows.h>
#include <realtimeapiset.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <winver.h>
#include <excpt.h>
#include <verrsrc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <vadefs.h>
#include <memoryapi.h>
#include <consoleapi.h>
#include <winnt.h>
#include <pshpack4.h>
#include <ctype.h>
#include <wingdi.h>
#include <winerror.h>
#include <ime_cmodes.h>
#include <util\types.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <securitybaseapi.h>
#include <reason.h>
#include <winuser.h>
#include <debugapi.h>
#include <fileapi.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <stralign.h>
#include <threadpoollegacyapiset.h>
#include <poppack.h>
#include <platform\sharedlibraryinterface.h>
#include <platform\osdef.h>
#include <imm.h>
#include <profileapi.h>
#include <synchapi.h>
#include <platform\platformexports.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <guiddef.h>
#include <stdlib.h>
#include <limits.h>
#include <pshpack8.h>
#include <tvout.h>
#include <bemapiset.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <handleapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <threadpoolapiset.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <string.h>
#include <winbase.h>
#include <pshpack1.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <jobapi.h>
#include <apiset.h>
#include <Debug\Debug.h>
#include <systemtopologyapi.h>
#include <Debug\filter.h>
#include <wow64apiset.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <processtopologyapi.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <pshpack2.h>
#include <specstrings_undef.h>
#include <libloaderapi.h>
#include <driverspecs.h>
#include <sysinfoapi.h>
#include <sdv_driverspecs.h>
#include <winreg.h>
#include <securityappcontainer.h>
#include <fibersapi.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 udword;
typedef unsigned long ULONG;
typedef long long LONGLONG;
typedef long LONG_PTR;
typedef void *LPVOID;
typedef tagAR_STATE AR_STATE;
typedef unsigned long SIZE_T;
typedef unsigned long long ULONGLONG;
typedef unsigned __int32 osLibraryTypeID;
typedef __int32 BOOL;
typedef _lldiv_t lldiv_t;
typedef short *PSHORT;
typedef char *PCHAR;
typedef _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;
typedef wchar_t const *PCUWSTR;
typedef unsigned long TP_VERSION;
typedef void *PVOID;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
typedef _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;
typedef __int32 (*osLibraryProc)();
typedef _ldiv_t ldiv_t;
typedef unsigned long DWORD;
typedef void *HANDLE;
typedef void *osLibraryHandle;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef _TP_POOL *PTP_POOL;
typedef unsigned long long DWORD64;
typedef wchar_t WCHAR;
typedef short SHORT;
typedef long LONG;
typedef long *PLONG;
typedef wchar_t *PUWSTR;
typedef long long LONG64;
typedef unsigned __int32 size_t;
typedef long long *PLONG64;
typedef void (*PTP_SIMPLE_CALLBACK)(_TP_CALLBACK_INSTANCE *, void *);
typedef void (*PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(void *, void *);
typedef _GUID GUID;
typedef _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;
typedef _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;
typedef char CHAR;
typedef unsigned long ULONG_PTR;
typedef float real32;
typedef long HRESULT;

/* ---------- prototypes */

extern __int32 DllMain(void *hInstance, unsigned long reason, void *reserved);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

__int32 DllMain(void *hInstance, unsigned long reason, void *reserved) // 0x10001BF8
{
    mangled_assert("_DllMain@12");
    todo("implement");
}

/* ---------- private code */
#endif

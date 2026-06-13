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
#include <debug.h>
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
#include <new>
#include <exception>
#include <xstddef>
#include <cstddef>
#include <stddef.h>
#include <yvals.h>
#include <winerror.h>
#include <xkeycheck.h>
#include <use_ansi.h>
#include <ime_cmodes.h>
#include <platform\namedinterface.h>
#include <util\types.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <securitybaseapi.h>
#include <reason.h>
#include <console.h>
#include <filter.h>
#include <winuser.h>
#include <debugapi.h>
#include <fileapi.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <stralign.h>
#include <threadpoollegacyapiset.h>
#include <poppack.h>
#include <platform\platformexports.h>
#include <stdio.h>
#include <imm.h>
#include <profileapi.h>
#include <synchapi.h>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <guiddef.h>
#include <pshpack8.h>
#include <tvout.h>
#include <bemapiset.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <handleapi.h>
#include <xtr1common>
#include <kernelspecs.h>
#include <basetsd.h>
#include <threadpoolapiset.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <string.h>
#include <eh.h>
#include <winbase.h>
#include <pshpack1.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <memory.h>
#include <stdlib.h>
#include <limits.h>
#include <jobapi.h>
#include <apiset.h>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <swprintf.inl>
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
#include <DCDefault\interface.h>
#include <memory\memorylib.h>
#include <winreg.h>
#include <malloc.h>
#include <platform\osdef.h>
#include <securityappcontainer.h>
#include <fibersapi.h>

/* ---------- constants */

/* ---------- definitions */

typedef _s__RTTIBaseClassArray __RTTIBaseClassArray;
typedef unsigned long ULONG;
typedef long long LONGLONG;
typedef long LONG_PTR;
typedef void *LPVOID;
typedef tagAR_STATE AR_STATE;
typedef unsigned long SIZE_T;
typedef void *nullptr_t;
typedef char const *LPCSTR;
typedef unsigned long long ULONGLONG;
typedef unsigned __int32 osLibraryTypeID;
typedef threadmbcinfostruct *pthreadmbcinfo;
typedef __int32 BOOL;
typedef _s__RTTIClassHierarchyDescriptor __RTTIClassHierarchyDescriptor;
typedef _s__RTTIBaseClassDescriptor2 __RTTIBaseClassDescriptor;
typedef _lldiv_t lldiv_t;
typedef short *PSHORT;
typedef void (*unexpected_function)();
typedef char *PCHAR;
typedef _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;
typedef void (*ShutdownCallback)(unsigned __int32);
typedef void (*terminate_handler)();
typedef void (*InputCallback)(unsigned __int32, char *);
typedef unsigned __int32 udword;
typedef wchar_t const *PCUWSTR;
typedef unsigned long TP_VERSION;
typedef void *PVOID;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
typedef _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;
typedef localeinfo_struct *_locale_t;
typedef __int32 sdword;
typedef _ldiv_t ldiv_t;
typedef unsigned short wint_t;
typedef localerefcount locrefcount;
typedef void (*unexpected_handler)();
typedef unsigned long DWORD;
typedef char *va_list;
typedef char const *FilterKey;
typedef void *HANDLE;
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
typedef void (*terminate_function)();
typedef _iobuf FILE;
typedef void (*PTP_SIMPLE_CALLBACK)(_TP_CALLBACK_INSTANCE *, void *);
typedef void (*PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(void *, void *);
typedef _GUID GUID;
typedef _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;
typedef _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;
typedef char CHAR;
typedef unsigned long ULONG_PTR;
typedef long HRESULT;
typedef threadlocaleinfostruct *pthreadlocinfo;

/* ---------- prototypes */

extern bool dcdStartup();
extern bool dcdShutdown();
extern unsigned __int32 getLibraryID();
extern void dcdPrint(char const *key, char const *string);
extern void dcdLineFeed();
extern void dcdClear();
extern bool dcdSetInputCB(void (*fn)(unsigned __int32, char *), unsigned __int32 ID);
extern bool dcdSetCharInputCB(void (*fn)(unsigned __int32, char *), unsigned __int32 ID);
extern bool dcdSetShutdownCB(void (*fn)(unsigned __int32), unsigned __int32 ID);
extern bool setupFunctionTable(void *fnTable);
extern __int32 DllMain(void *hInstance, unsigned long reason, void *reserved);

/* ---------- globals */

extern void (*dcdInputCB)(unsigned __int32, char *); // 0x10003010
extern void (*dcdCharInutCB)(unsigned __int32, char *); // 0x10003014
extern void (*dcdShutdownCB)(unsigned __int32); // 0x10003018
extern unsigned __int32 dcdInputID; // 0x1000301C
extern unsigned __int32 dcdCharInutID; // 0x10003020
extern unsigned __int32 dcdShutdownID; // 0x10003024

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_1000109E();
bool dcdStartup() // 0x1000109E
{
    mangled_assert("?dcdStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_1000109E();
    return __result;
}

_extern bool _sub_1000108A();
bool dcdShutdown() // 0x1000108A
{
    mangled_assert("?dcdShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_1000108A();
    return __result;
}

_extern unsigned __int32 _sub_100010E1();
unsigned __int32 getLibraryID() // 0x100010E1
{
    mangled_assert("_getLibraryID");
    todo("implement");
    unsigned __int32 __result = _sub_100010E1();
    return __result;
}

_extern void _sub_10001018(char const *, char const *);
void dcdPrint(char const *key, char const *string) // 0x10001018
{
    mangled_assert("?dcdPrint@@YGXPBD0@Z");
    todo("implement");
    _sub_10001018(key, string);
}

_extern void _sub_1000100C();
void dcdLineFeed() // 0x1000100C
{
    mangled_assert("?dcdLineFeed@@YGXXZ");
    todo("implement");
    _sub_1000100C();
}

_extern void _sub_10001000();
void dcdClear() // 0x10001000
{
    mangled_assert("?dcdClear@@YGXXZ");
    todo("implement");
    _sub_10001000();
}

_extern bool _sub_1000106C(void (*)(unsigned __int32, char *), unsigned __int32);
bool dcdSetInputCB(void (*fn)(unsigned __int32, char *), unsigned __int32 ID) // 0x1000106C
{
    mangled_assert("?dcdSetInputCB@@YG_NP6GXIPAD@ZI@Z");
    todo("implement");
    bool __result = _sub_1000106C(fn, ID);
    return __result;
}

_extern bool _sub_10001067(void (*)(unsigned __int32, char *), unsigned __int32);
bool dcdSetCharInputCB(void (*fn)(unsigned __int32, char *), unsigned __int32 ID) // 0x10001067
{
    mangled_assert("?dcdSetCharInputCB@@YG_NP6GXIPAD@ZI@Z");
    todo("implement");
    bool __result = _sub_10001067(fn, ID);
    return __result;
}

_extern bool _sub_10001071(void (*)(unsigned __int32), unsigned __int32);
bool dcdSetShutdownCB(void (*fn)(unsigned __int32), unsigned __int32 ID) // 0x10001071
{
    mangled_assert("?dcdSetShutdownCB@@YG_NP6GXI@ZI@Z");
    todo("implement");
    bool __result = _sub_10001071(fn, ID);
    return __result;
}

_extern bool _sub_100010E7(void *);
bool setupFunctionTable(void *fnTable) // 0x100010E7
{
    mangled_assert("_setupFunctionTable");
    todo("implement");
    bool __result = _sub_100010E7(fnTable);
    return __result;
}

_extern __int32 _sub_100010B2(void *, unsigned long, void *);
__int32 DllMain(void *hInstance, unsigned long reason, void *reserved) // 0x100010B2
{
    mangled_assert("_DllMain@12");
    todo("implement");
    __int32 __result = _sub_100010B2(hInstance, reason, reserved);
    return __result;
}

/* ---------- private code */
#endif

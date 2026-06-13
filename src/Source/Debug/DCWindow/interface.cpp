#if 0
/* ---------- headers */

#include "decomp.h"
#include <xdebug>
#include <platform\os.h>
#include <windows.h>
#include <realtimeapiset.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <intrin.h>
#include <winver.h>
#include <excpt.h>
#include <setjmp.h>
#include <verrsrc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <xfacet>
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
#include <assist\stlexstring.h>
#include <stddef.h>
#include <yvals.h>
#include <winerror.h>
#include <debug\db.h>
#include <xkeycheck.h>
#include <use_ansi.h>
#include <ime_cmodes.h>
#include <cfloat>
#include <platform\namedinterface.h>
#include <float.h>
#include <util\types.h>
#include <crtwrn.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <immintrin.h>
#include <securitybaseapi.h>
#include <wmmintrin.h>
#include <reason.h>
#include <nmmintrin.h>
#include <xtgmath.h>
#include <smmintrin.h>
#include <cstdio>
#include <stdexcept>
#include <tmmintrin.h>
#include <type_traits>
#include <stdio.h>
#include <winuser.h>
#include <xstring>
#include <pmmintrin.h>
#include <emmintrin.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <debugapi.h>
#include <xutility>
#include <fileapi.h>
#include <utility>
#include <xatomic0.h>
#include <iosfwd>
#include <cstring>
#include <crtdbg.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <stralign.h>
#include <threadpoollegacyapiset.h>
#include <poppack.h>
#include <platform\platformexports.h>
#include <DCWindow\interface.h>
#include <console.h>
#include <xrefwrap>
#include <imm.h>
#include <platform\osdef.h>
#include <Filter.h>
#include <wtime.inl>
#include <xlocinfo>
#include <xlocinfo.h>
#include <profileapi.h>
#include <locale.h>
#include <synchapi.h>
#include <system_error>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <cerrno>
#include <guiddef.h>
#include <errno.h>
#include <pshpack8.h>
#include <tvout.h>
#include <bemapiset.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <handleapi.h>
#include <xtr1common>
#include <kernelspecs.h>
#include <climits>
#include <basetsd.h>
#include <cmath>
#include <threadpoolapiset.h>
#include <string>
#include <math.h>
#include <iterator>
#include <istream>
#include <namespaceapi.h>
#include <ostream>
#include <vector>
#include <ktmtypes.h>
#include <ios>
#include <xmemory>
#include <string.h>
#include <xlocnum>
#include <xmemory0>
#include <eh.h>
#include <streambuf>
#include <cstdlib>
#include <swprintf.inl>
#include <xiosbase>
#include <limits>
#include <winbase.h>
#include <xlocale>
#include <ymath.h>
#include <pshpack1.h>
#include <apisetcconv.h>
#include <typeinfo>
#include <minwinbase.h>
#include <wincon.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <memory.h>
#include <stdlib.h>
#include <limits.h>
#include <jobapi.h>
#include <apiset.h>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <cwchar>
#include <wchar.h>
#include <stdarg.h>
#include <windef.h>
#include <set>
#include <minwindef.h>
#include <xtree>
#include <processtopologyapi.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <share.h>
#include <pshpack2.h>
#include <specstrings_undef.h>
#include <libloaderapi.h>
#include <driverspecs.h>
#include <sysinfoapi.h>
#include <sdv_driverspecs.h>
#include <DCWindow\debugwnd.h>
#include <memory\memorylib.h>
#include <winreg.h>
#include <algorithm>
#include <malloc.h>
#include <securityappcontainer.h>
#include <fibersapi.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned char ubyte;
typedef unsigned long _Uint32t;
typedef tagLOGFONTA LOGFONTA;
typedef void (*FilterCallback)(char const *);
typedef _s__RTTIBaseClassArray __RTTIBaseClassArray;
typedef unsigned long ULONG;
typedef long long LONGLONG;
typedef _s__CatchableTypeArray _CatchableTypeArray;
typedef long LONG_PTR;
typedef void *LPVOID;
typedef tagAR_STATE AR_STATE;
typedef unsigned long SIZE_T;
typedef std::errc::errc generic_errno;
typedef long long streamoff;
typedef unsigned long _Atomic_counter_t;
typedef void *nullptr_t;
typedef bool _Bool;
typedef std::float_denorm_style float_denorm_style;
typedef std::integral_constant<bool,0> false_type;
typedef unsigned long _Atomic_integral_t;
typedef std::_Container_base0 _Container_base;
typedef long long streamsize;
typedef unsigned long _Uint4_t;
typedef std::basic_ostream<char,std::char_traits<char> > ostream;
typedef std::fpos<int> streampos;
typedef std::float_round_style float_round_style;
typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > wstring;
typedef std::io_errc::io_errc _Io_errc;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > string;
typedef __int32 errno_t;
typedef char const *LPCSTR;
typedef unsigned long long ULONGLONG;
typedef long long fpos_t;
typedef unsigned __int32 osLibraryTypeID;
typedef threadmbcinfostruct *pthreadmbcinfo;
typedef HFONT__ *HFONT;
typedef unsigned __int32 rsize_t;
typedef __int32 BOOL;
typedef long long _Longlong;
typedef _s__RTTIClassHierarchyDescriptor __RTTIClassHierarchyDescriptor;
typedef _s__RTTIBaseClassDescriptor2 __RTTIBaseClassDescriptor;
typedef _lldiv_t lldiv_t;
typedef short *PSHORT;
typedef void (*unexpected_function)();
typedef char *PCHAR;
typedef long long time_t;
typedef _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;
typedef _s__CatchableType _CatchableType;
typedef void (*ShutdownCallback)(unsigned __int32);
typedef void (*terminate_handler)();
typedef void (*InputCallback)(unsigned __int32, char *);
typedef unsigned __int32 udword;
typedef wchar_t const *PCUWSTR;
typedef __int32 ptrdiff_t;
typedef unsigned long TP_VERSION;
typedef void *PVOID;
typedef _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;
typedef _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;
typedef localeinfo_struct *_locale_t;
typedef __int32 sdword;
typedef _ldiv_t ldiv_t;
typedef unsigned short wint_t;
typedef tagLOGFONTA LOGFONT;
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
typedef HWND__ *HWND;
typedef long long __time64_t;
typedef short SHORT;
typedef long LONG;
typedef long *PLONG;
typedef wchar_t *PUWSTR;
typedef unsigned long long _ULonglong;
typedef long long LONG64;
typedef unsigned __int32 size_t;
typedef long long *PLONG64;
typedef tagRECT RECT;
typedef void (*terminate_function)();
typedef HDC__ *HDC;
typedef __int32 mbstate_t;
typedef _iobuf FILE;
typedef void (*PTP_SIMPLE_CALLBACK)(_TP_CALLBACK_INSTANCE *, void *);
typedef void (*PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(void *, void *);
typedef _GUID GUID;
typedef _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;
typedef _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;
typedef void (*_PMFN)(void *);
typedef char CHAR;
typedef unsigned long ULONG_PTR;
typedef long HRESULT;
typedef __int32 _Mbstatet;
typedef threadlocaleinfostruct *pthreadlocinfo;

/* ---------- prototypes */

extern bool dcwStartup();
extern bool dcwShutdown();
extern unsigned __int32 getLibraryID();
extern void dcwPrint(char const *key, char const *string);
extern void dcwConsoleValidate();
extern bool dcwSetInputCB(void (*fn)(unsigned __int32, char *), unsigned __int32 ID);
extern bool dcwSetCharInputCB(void (*fn)(unsigned __int32, char *), unsigned __int32 ID);
extern bool dcwSetShutdownCB(void (*fn)(unsigned __int32), unsigned __int32 ID);
extern bool setupFunctionTable(void *fnTable);
extern __int32 DllMain(void *hInstance, unsigned long reason, void *reserved);

/* ---------- globals */

extern unsigned __int32 dcwParentWindow; // 0x100091B8
extern unsigned __int32 dcwParentInstance; // 0x100091BC
extern void (*dcwInputCB)(unsigned __int32, char *); // 0x100091C0
extern void (*dcwCharInutCB)(unsigned __int32, char *); // 0x100091C4
extern void (*dcwShutdownCB)(unsigned __int32); // 0x100091C8
extern unsigned __int32 dcwInputID; // 0x100091CC
extern unsigned __int32 dcwCharInutID; // 0x100091D0
extern unsigned __int32 dcwShutdownID; // 0x100091D4
extern unsigned __int32 dcwInstance; // 0x100091DC

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x100091E1
    extern std::allocator_arg_t allocator_arg; // 0x100091E0
    extern bool dcwModuleStarted; // 0x100091D8
}

/* ---------- public code */

_extern bool _sub_10005C8F();
bool dcwStartup() // 0x10005C8F
{
    mangled_assert("?dcwStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10005C8F();
    return __result;
}

_extern bool _sub_10005C66();
bool dcwShutdown() // 0x10005C66
{
    mangled_assert("?dcwShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10005C66();
    return __result;
}

_extern unsigned __int32 _sub_10005CDA();
unsigned __int32 getLibraryID() // 0x10005CDA
{
    mangled_assert("_getLibraryID");
    todo("implement");
    unsigned __int32 __result = _sub_10005CDA();
    return __result;
}

_extern void _sub_10005BF5(char const *, char const *);
void dcwPrint(char const *key, char const *string) // 0x10005BF5
{
    mangled_assert("?dcwPrint@@YGXPBD0@Z");
    todo("implement");
    _sub_10005BF5(key, string);
}

_extern void _sub_10005BBA();
void dcwConsoleValidate() // 0x10005BBA
{
    mangled_assert("?dcwConsoleValidate@@YGXXZ");
    todo("implement");
    _sub_10005BBA();
}

_extern bool _sub_10005C3C(void (*)(unsigned __int32, char *), unsigned __int32);
bool dcwSetInputCB(void (*fn)(unsigned __int32, char *), unsigned __int32 ID) // 0x10005C3C
{
    mangled_assert("?dcwSetInputCB@@YG_NP6GXIPAD@ZI@Z");
    todo("implement");
    bool __result = _sub_10005C3C(fn, ID);
    return __result;
}

_extern bool _sub_10005C37(void (*)(unsigned __int32, char *), unsigned __int32);
bool dcwSetCharInputCB(void (*fn)(unsigned __int32, char *), unsigned __int32 ID) // 0x10005C37
{
    mangled_assert("?dcwSetCharInputCB@@YG_NP6GXIPAD@ZI@Z");
    todo("implement");
    bool __result = _sub_10005C37(fn, ID);
    return __result;
}

_extern bool _sub_10005C4D(void (*)(unsigned __int32), unsigned __int32);
bool dcwSetShutdownCB(void (*fn)(unsigned __int32), unsigned __int32 ID) // 0x10005C4D
{
    mangled_assert("?dcwSetShutdownCB@@YG_NP6GXI@ZI@Z");
    todo("implement");
    bool __result = _sub_10005C4D(fn, ID);
    return __result;
}

_extern bool _sub_10005CE0(void *);
bool setupFunctionTable(void *fnTable) // 0x10005CE0
{
    mangled_assert("_setupFunctionTable");
    todo("implement");
    bool __result = _sub_10005CE0(fnTable);
    return __result;
}

_extern __int32 _sub_10005CA3(void *, unsigned long, void *);
__int32 DllMain(void *hInstance, unsigned long reason, void *reserved) // 0x10005CA3
{
    mangled_assert("_DllMain@12");
    todo("implement");
    __int32 __result = _sub_10005CA3(hInstance, reason, reserved);
    return __result;
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <winnt.h>
#include <pshpack2.h>
#include <time.inl>
#include <libloaderapi.h>
#include <kernelspecs.h>
#include <mcx.h>
#include <sysinfoapi.h>
#include <basetsd.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <winreg.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <intrin.h>
#include <setjmp.h>
#include <debug\ctmessage.h>
#include <securityappcontainer.h>
#include <debug\ctassert.h>
#include <fibersapi.h>
#include <hash_map>
#include <new>
#include <winver.h>
#include <xhash>
#include <exception>
#include <verrsrc.h>
#include <list>
#include <xstddef>
#include <cstddef>
#include <stddef.h>
#include <yvals.h>
#include <tvout.h>
#include <realtimeapiset.h>
#include <xkeycheck.h>
#include <use_ansi.h>
#include <winuser.h>
#include <xlocinfo>
#include <ime_cmodes.h>
#include <stack>
#include <xlocinfo.h>
#include <ZLib\CompressionMem.h>
#include <consoleapi.h>
#include <ctype.h>
#include <debug\dbdefines.h>
#include <ioapiset.h>
#include <namedpipeapi.h>
#include <stl.h>
#include <algorithm>
#include <memoryapi.h>
#include <vector>
#include <xmemory>
#include <map>
#include <xmemory0>
#include <xtree>
#include <cstdlib>
#include <limits>
#include <ymath.h>
#include <wingdi.h>
#include <share.h>
#include <compilerconfig.h>
#include <pshpack4.h>
#include <ctime>
#include <cstdio>
#include <time.h>
#include <stdio.h>
#include <winerror.h>
#include <immintrin.h>
#include <string.h>
#include <wmmintrin.h>
#include <nmmintrin.h>
#include <debug\db.h>
#include <smmintrin.h>
#include <tmmintrin.h>
#include <type_traits>
#include <hash_set>
#include <pmmintrin.h>
#include <emmintrin.h>
#include <reason.h>
#include <stringapiset.h>
#include <timezoneapi.h>
#include <interlockedapi.h>
#include <xmmintrin.h>
#include <xtgmath.h>
#include <mmintrin.h>
#include <xutility>
#include <utility>
#include <securitybaseapi.h>
#include <xatomic0.h>
#include <iosfwd>
#include <cstring>
#include <xdebug>
#include <crtdbg.h>
#include <imm.h>
#include <set>
#include <typeinfo>
#include <debugapi.h>
#include <fileapi.h>
#include <memory.h>
#include <xfacet>
#include <xrefwrap>
#include <stralign.h>
#include <winsvc.h>
#include <threadpoollegacyapiset.h>
#include <windows.h>
#include <winapifamily.h>
#include <poppack.h>
#include <sdkddkver.h>
#include <excpt.h>
#include <bitset>
#include <string>
#include <iterator>
#include <istream>
#include <xtr1common>
#include <profileapi.h>
#include <ostream>
#include <queue>
#include <ios>
#include <synchapi.h>
#include <deque>
#include <xlocnum>
#include <streambuf>
#include <xiosbase>
#include <processthreadsapi.h>
#include <heapapi.h>
#include <utilapiset.h>
#include <xlocale>
#include <stdexcept>
#include <xstring>
#include <cstdarg>
#include <eh.h>
#include <stdarg.h>
#include <winnetwk.h>
#include <pshpack8.h>
#include <cmath>
#include <wnnc.h>
#include <math.h>
#include <swprintf.inl>
#include <bemapiset.h>
#include <windef.h>
#include <minwindef.h>
#include <handleapi.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <threadpoolapiset.h>
#include <sdv_driverspecs.h>
#include <climits>
#include <cwchar>
#include <wchar.h>
#include <namespaceapi.h>
#include <ktmtypes.h>
#include <wincon.h>
#include <winbase.h>
#include <numeric>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <errhandlingapi.h>
#include <locale.h>
#include <processenv.h>
#include <stdlib.h>
#include <limits.h>
#include <jobapi.h>
#include <guiddef.h>
#include <system_error>
#include <cfloat>
#include <cerrno>
#include <float.h>
#include <apiset.h>
#include <errno.h>
#include <crtwrn.h>
#include <wtime.inl>
#include <pshpack1.h>
#include <systemtopologyapi.h>
#include <wow64apiset.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <processtopologyapi.h>

/* ---------- constants */

/* ---------- definitions */

typedef HINSTANCE__ *HINSTANCE;
typedef void *LPVOID;
typedef char const *LPCSTR;
typedef HINSTANCE__ *HMODULE;
typedef void *HANDLE;

/* ---------- prototypes */

extern __int32 DllMain(void *hInstance, unsigned long reason, void *reserved);

/* ---------- globals */

extern std::locale::id std::num_put<char,std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::id; // 0x1000D2A4
extern std::locale::id std::num_put<wchar_t,std::back_insert_iterator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > >::id; // 0x1000D2A8
extern std::_Generic_error_category std::_Error_objects<int>::_Generic_object; // 0x1000C000
extern std::_Iostream_error_category std::_Error_objects<int>::_Iostream_object; // 0x1000C004
extern std::_System_error_category std::_Error_objects<int>::_System_object; // 0x1000C008

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x1000D2A1
    extern std::allocator_arg_t allocator_arg; // 0x1000D2A0
}

/* ---------- public code */

_inline std::_Generic_error_category::~_Generic_error_category() // 0x10001119
{
    mangled_assert("??1_Generic_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Iostream_error_category::~_Iostream_error_category() // 0x10001120
{
    mangled_assert("??1_Iostream_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_System_error_category::~_System_error_category() // 0x10001127
{
    mangled_assert("??1_System_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

__int32 DllMain(void *hInstance, unsigned long reason, void *reserved) // 0x100017A4
{
    mangled_assert("_DllMain@12");
    todo("implement");
}

/* ---------- private code */
#endif

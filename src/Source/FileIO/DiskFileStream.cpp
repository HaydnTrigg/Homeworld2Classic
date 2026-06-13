#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\config.hpp>
#include <time.inl>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <pch.h>
#include <boost\config\select_stdlib_config.hpp>
#include <memory\memorylib.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <malloc.h>
#include <boost\config\select_platform_config.hpp>
#include <crtdefs.h>
#include <boost\config\platform\win32.hpp>
#include <sal.h>
#include <concurrencysal.h>
#include <intrin.h>
#include <vadefs.h>
#include <setjmp.h>
#include <debug\ctassert.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\DiskFileStream.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ByteStream.h"
#include <new>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
#include <exception>
#include <assist\fixedstring.h>
#include <set>
#include <xstddef>
#include <cstddef>
#include <assist\stlexstring.h>
#include <stddef.h>
#include <yvals.h>
#include <xkeycheck.h>
#include <boost\detail\workaround.hpp>
#include <use_ansi.h>
#include <debug\ctmessage.h>
#include <algorithm>
#include <tuple>
#include <xmemory>
#include <boost\config\suffix.hpp>
#include <xmemory0>
#include <cstdlib>
#include <limits>
#include <ymath.h>
#include <bitset>
#include <xlocinfo>
#include <string>
#include <xlocinfo.h>
#include <ctype.h>
#include <immintrin.h>
#include <ctime>
#include <compiler\compilerconfig.h>
#include <wmmintrin.h>
#include <time.h>
#include <cstdio>
#include <nmmintrin.h>
#include <stdio.h>
#include <smmintrin.h>
#include <tmmintrin.h>
#include <type_traits>
#include <string.h>
#include <queue>
#include <pmmintrin.h>
#include <debug\db.h>
#include <deque>
#include <share.h>
#include <emmintrin.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <xutility>
#include <xtgmath.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <crtdbg.h>
#include <assist\typemagic.h>
#include <vector>
#include <iterator>
#include <istream>
#include <boost\shared_ptr.hpp>
#include <ostream>
#include <xrefwrap>
#include <boost\throw_exception.hpp>
#include <ios>
#include <xlocnum>
#include <xdebug>
#include <memory.h>
#include <streambuf>
#include <boost\detail\shared_count.hpp>
#include <xiosbase>
#include <boost\detail\lightweight_mutex.hpp>
#include <xlocale>
#include <boost\detail\lwm_win32.hpp>
#include <typeinfo>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <assert.h>
#include <boost\checked_delete.hpp>
#include <numeric>
#include <xfacet>
#include <hash_map>
#include <hash_set>
#include <xhash>
#include <list>
#include <stdexcept>
#include <xstring>
#include <xtr1common>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\platform.h"
#include <cstring>
#include <eh.h>
#include <memory>
#include <cmath>
#include <stdint.h>
#include <math.h>
#include <sys\types.h>
#include <swprintf.inl>
#include <sys\stat.h>
#include <boost\shared_array.hpp>
#include <climits>
#include <cwchar>
#include <wchar.h>
#include <functional>
#include <xfunctional>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <stdlib.h>
#include <sys\stat.inl>
#include <limits.h>
#include <cfloat>
#include <stack>
#include <float.h>
#include <crtwrn.h>
#include <wtime.inl>
#include <locale.h>
#include <map>
#include <xtree>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static unsigned long OpenPlatFile(char const *fname, StreamMode openMode);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F516
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F515
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F518
    extern std::allocator_arg_t allocator_arg; // 0x1001F517
}

/* ---------- public code */

_extern _sub_10009D90(DiskFileStream *const);
DiskFileStream::DiskFileStream() // 0x10009D90
{
    mangled_assert("??0DiskFileStream@@QAE@XZ");
    todo("implement");
    _sub_10009D90(this);
}

_extern void _sub_10009DB6(DiskFileStream *const);
DiskFileStream::~DiskFileStream() // 0x10009DB6
{
    mangled_assert("??1DiskFileStream@@UAE@XZ");
    todo("implement");
    _sub_10009DB6(this);
}

_extern DiskFileStream *_sub_1000A054(char const *, StreamMode);
DiskFileStream *DiskFileStream::TryOpen(char const *fname, StreamMode openMode) // 0x1000A054
{
    mangled_assert("?TryOpen@DiskFileStream@@SGPAV1@PBDW4StreamMode@@@Z");
    todo("implement");
    DiskFileStream * __result = _sub_1000A054(fname, openMode);
    return __result;
}

_extern long long _sub_10009EEE(char const *);
long long DiskFileStream::GetFileDate(char const *fname) // 0x10009EEE
{
    mangled_assert("?GetFileDate@DiskFileStream@@SG_JPBD@Z");
    todo("implement");
    long long __result = _sub_10009EEE(fname);
    return __result;
}

_extern long _sub_10009F3C(DiskFileStream *const, char const *, StreamMode);
long DiskFileStream::Open(char const *, StreamMode) // 0x10009F3C
{
    mangled_assert("?Open@DiskFileStream@@QAEJPBDW4StreamMode@@@Z");
    todo("implement");
    long __result = _sub_10009F3C(this, arg, arg);
    return __result;
}

_extern long _sub_10009E56(DiskFileStream *const, unsigned long, StreamMode, bool);
long DiskFileStream::Attach(unsigned long, StreamMode, bool) // 0x10009E56
{
    mangled_assert("?Attach@DiskFileStream@@QAEJKW4StreamMode@@_N@Z");
    todo("implement");
    long __result = _sub_10009E56(this, arg, arg, arg);
    return __result;
}

_extern void _sub_10009ECB(DiskFileStream *const);
void DiskFileStream::CloseIfOpen() // 0x10009ECB
{
    mangled_assert("?CloseIfOpen@DiskFileStream@@AAEXXZ");
    todo("implement");
    _sub_10009ECB(this);
}

_extern void _sub_10009FF0(DiskFileStream *const);
void DiskFileStream::Reset() // 0x10009FF0
{
    mangled_assert("?Reset@DiskFileStream@@AAEXXZ");
    todo("implement");
    _sub_10009FF0(this);
}

_extern long _sub_10009EA5(DiskFileStream *const);
long DiskFileStream::Close() // 0x10009EA5
{
    mangled_assert("?Close@DiskFileStream@@QAEJXZ");
    todo("implement");
    long __result = _sub_10009EA5(this);
    return __result;
}

_extern unsigned long _sub_10009FBA(DiskFileStream *const, void *, unsigned long);
unsigned long DiskFileStream::Read(void *, unsigned long) // 0x10009FBA
{
    mangled_assert("?Read@DiskFileStream@@UAEKPAXK@Z");
    todo("implement");
    unsigned long __result = _sub_10009FBA(this, arg, arg);
    return __result;
}

_extern unsigned long _sub_1000A0BF(DiskFileStream *const, void const *, unsigned long);
unsigned long DiskFileStream::Write(void const *, unsigned long) // 0x1000A0BF
{
    mangled_assert("?Write@DiskFileStream@@UAEKPBXK@Z");
    todo("implement");
    unsigned long __result = _sub_1000A0BF(this, arg, arg);
    return __result;
}

_extern void _sub_10009EED(DiskFileStream *const);
void DiskFileStream::Flush() // 0x10009EED
{
    mangled_assert("?Flush@DiskFileStream@@UAEXXZ");
    todo("implement");
    _sub_10009EED(this);
}

_extern unsigned long _sub_10009F17(DiskFileStream *const);
unsigned long DiskFileStream::GetLen() // 0x10009F17
{
    mangled_assert("?GetLen@DiskFileStream@@UAEKXZ");
    todo("implement");
    unsigned long __result = _sub_10009F17(this);
    return __result;
}

_extern unsigned long _sub_10009F29(DiskFileStream *const);
unsigned long DiskFileStream::GetPos() // 0x10009F29
{
    mangled_assert("?GetPos@DiskFileStream@@UAEKXZ");
    todo("implement");
    unsigned long __result = _sub_10009F29(this);
    return __result;
}

_extern unsigned long _sub_1000A01D(DiskFileStream *const, unsigned long);
unsigned long DiskFileStream::SetPos(unsigned long) // 0x1000A01D
{
    mangled_assert("?SetPos@DiskFileStream@@UAEKK@Z");
    todo("implement");
    unsigned long __result = _sub_1000A01D(this, arg);
    return __result;
}

/* ---------- private code */

_extern unsigned long _sub_10009F90(char const *, StreamMode);
_static unsigned long OpenPlatFile(char const *fname, StreamMode openMode) // 0x10009F90
{
    mangled_assert("OpenPlatFile");
    todo("implement");
    unsigned long __result = _sub_10009F90(fname, openMode);
    return __result;
}
#endif

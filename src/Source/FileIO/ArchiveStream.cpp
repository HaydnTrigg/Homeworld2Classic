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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ArchiveStream.h"
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
#include <zlib\compression.h>
#include <assist\typemagic.h>
#include <zlib\zlibexports.h>
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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\Archive.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\archiveinternals.h"
#include <cstring>
#include <eh.h>
#include <memory>
#include <cmath>
#include <stdint.h>
#include <math.h>
#include <swprintf.inl>
#include <boost\shared_array.hpp>
#include <climits>
#include <cwchar>
#include <wchar.h>
#include <functional>
#include <xfunctional>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <stdlib.h>
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

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F501
    extern char const *k_ArchiveFileSignature; // 0x1001F264
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F500
    extern char const *k_ArchiveMD5SecurityKey; // 0x1001F268
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x1001F26C
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F503
    extern std::allocator_arg_t allocator_arg; // 0x1001F502
}

/* ---------- public code */

_extern _sub_10005ED2(ArchiveStoreStream *const, Archive::FileProxy const &);
ArchiveStoreStream::ArchiveStoreStream(Archive::FileProxy const &) // 0x10005ED2
{
    mangled_assert("??0ArchiveStoreStream@@AAE@ABVFileProxy@Archive@@@Z");
    todo("implement");
    _sub_10005ED2(this, arg);
}

_extern void _sub_10005FC5(ArchiveStoreStream *const);
ArchiveStoreStream::~ArchiveStoreStream() // 0x10005FC5
{
    mangled_assert("??1ArchiveStoreStream@@UAE@XZ");
    todo("implement");
    _sub_10005FC5(this);
}

_extern unsigned long _sub_100062B4(ArchiveStoreStream *const, void *, unsigned long);
unsigned long ArchiveStoreStream::Read(void *, unsigned long) // 0x100062B4
{
    mangled_assert("?Read@ArchiveStoreStream@@UAEKPAXK@Z");
    todo("implement");
    unsigned long __result = _sub_100062B4(this, arg, arg);
    return __result;
}

_extern unsigned long _sub_10006474(ArchiveStoreStream *const, void const *, unsigned long);
unsigned long ArchiveStoreStream::Write(void const *, unsigned long) // 0x10006474
{
    mangled_assert("?Write@ArchiveStoreStream@@UAEKPBXK@Z");
    todo("implement");
    unsigned long __result = _sub_10006474(this, arg, arg);
    return __result;
}

_extern void _sub_1000608E(ArchiveStoreStream *const);
void ArchiveStoreStream::Flush() // 0x1000608E
{
    mangled_assert("?Flush@ArchiveStoreStream@@UAEXXZ");
    todo("implement");
    _sub_1000608E(this);
}

_extern unsigned long _sub_1000638B(ArchiveStoreStream *const, unsigned long);
unsigned long ArchiveStoreStream::SetPos(unsigned long) // 0x1000638B
{
    mangled_assert("?SetPos@ArchiveStoreStream@@UAEKK@Z");
    todo("implement");
    unsigned long __result = _sub_1000638B(this, arg);
    return __result;
}

_extern unsigned long _sub_100060DB(ArchiveStoreStream *const);
unsigned long ArchiveStoreStream::GetPos() // 0x100060DB
{
    mangled_assert("?GetPos@ArchiveStoreStream@@UAEKXZ");
    todo("implement");
    unsigned long __result = _sub_100060DB(this);
    return __result;
}

_extern unsigned long _sub_100060C9(ArchiveStoreStream *const);
unsigned long ArchiveStoreStream::GetLen() // 0x100060C9
{
    mangled_assert("?GetLen@ArchiveStoreStream@@UAEKXZ");
    todo("implement");
    unsigned long __result = _sub_100060C9(this);
    return __result;
}

_extern _sub_10005E4C(ArchiveCompressStream *const, Archive::FileProxy const &);
ArchiveCompressStream::ArchiveCompressStream(Archive::FileProxy const &) // 0x10005E4C
{
    mangled_assert("??0ArchiveCompressStream@@AAE@ABVFileProxy@Archive@@@Z");
    todo("implement");
    _sub_10005E4C(this, arg);
}

_extern void _sub_10005F81(ArchiveCompressStream *const);
ArchiveCompressStream::~ArchiveCompressStream() // 0x10005F81
{
    mangled_assert("??1ArchiveCompressStream@@UAE@XZ");
    todo("implement");
    _sub_10005F81(this);
}

_extern unsigned long _sub_100061F6(ArchiveCompressStream *const, void *, unsigned long);
unsigned long ArchiveCompressStream::Read(void *, unsigned long) // 0x100061F6
{
    mangled_assert("?Read@ArchiveCompressStream@@UAEKPAXK@Z");
    todo("implement");
    unsigned long __result = _sub_100061F6(this, arg, arg);
    return __result;
}

_extern unsigned long _sub_10006440(ArchiveCompressStream *const, void const *, unsigned long);
unsigned long ArchiveCompressStream::Write(void const *, unsigned long) // 0x10006440
{
    mangled_assert("?Write@ArchiveCompressStream@@UAEKPBXK@Z");
    todo("implement");
    unsigned long __result = _sub_10006440(this, arg, arg);
    return __result;
}

_extern void _sub_1000605E(ArchiveCompressStream *const);
void ArchiveCompressStream::Flush() // 0x1000605E
{
    mangled_assert("?Flush@ArchiveCompressStream@@UAEXXZ");
    todo("implement");
    _sub_1000605E(this);
}

_extern unsigned long _sub_1000630E(ArchiveCompressStream *const, unsigned long);
unsigned long ArchiveCompressStream::SetPos(unsigned long) // 0x1000630E
{
    mangled_assert("?SetPos@ArchiveCompressStream@@UAEKK@Z");
    todo("implement");
    unsigned long __result = _sub_1000630E(this, arg);
    return __result;
}

_extern unsigned long _sub_100060D4(ArchiveCompressStream *const);
unsigned long ArchiveCompressStream::GetPos() // 0x100060D4
{
    mangled_assert("?GetPos@ArchiveCompressStream@@UAEKXZ");
    todo("implement");
    unsigned long __result = _sub_100060D4(this);
    return __result;
}

_extern unsigned long _sub_100060BE(ArchiveCompressStream *const);
unsigned long ArchiveCompressStream::GetLen() // 0x100060BE
{
    mangled_assert("?GetLen@ArchiveCompressStream@@UAEKXZ");
    todo("implement");
    unsigned long __result = _sub_100060BE(this);
    return __result;
}

_extern void _sub_100060E2(ArchiveCompressStream *const);
void ArchiveCompressStream::InitStream() // 0x100060E2
{
    mangled_assert("?InitStream@ArchiveCompressStream@@AAEXXZ");
    todo("implement");
    _sub_100060E2(this);
}

_extern void _sub_10006401(ArchiveCompressStream *const);
void ArchiveCompressStream::ShutStream() // 0x10006401
{
    mangled_assert("?ShutStream@ArchiveCompressStream@@AAEXXZ");
    todo("implement");
    _sub_10006401(this);
}

/* ---------- private code */
#endif

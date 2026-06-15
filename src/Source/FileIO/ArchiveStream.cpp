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
#include "src\Source\FileIO\ArchiveStream.h"
#include "src\Source\FileIO\ByteStream.h"
#include <new>
#include "src\Source\FileIO\fileioexports.h"
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
#include "src\Source\FileIO\Archive.h"
#include "src\Source\FileIO\archiveinternals.h"
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

ArchiveStoreStream::ArchiveStoreStream(Archive::FileProxy const &) // 0x10005ED2
{
    mangled_assert("??0ArchiveStoreStream@@AAE@ABVFileProxy@Archive@@@Z");
    todo("implement");
}

ArchiveStoreStream::~ArchiveStoreStream() // 0x10005FC5
{
    mangled_assert("??1ArchiveStoreStream@@UAE@XZ");
    todo("implement");
}

unsigned long ArchiveStoreStream::Read(void *, unsigned long) // 0x100062B4
{
    mangled_assert("?Read@ArchiveStoreStream@@UAEKPAXK@Z");
    todo("implement");
}

unsigned long ArchiveStoreStream::Write(void const *, unsigned long) // 0x10006474
{
    mangled_assert("?Write@ArchiveStoreStream@@UAEKPBXK@Z");
    todo("implement");
}

void ArchiveStoreStream::Flush() // 0x1000608E
{
    mangled_assert("?Flush@ArchiveStoreStream@@UAEXXZ");
    todo("implement");
}

unsigned long ArchiveStoreStream::SetPos(unsigned long) // 0x1000638B
{
    mangled_assert("?SetPos@ArchiveStoreStream@@UAEKK@Z");
    todo("implement");
}

unsigned long ArchiveStoreStream::GetPos() // 0x100060DB
{
    mangled_assert("?GetPos@ArchiveStoreStream@@UAEKXZ");
    todo("implement");
}

unsigned long ArchiveStoreStream::GetLen() // 0x100060C9
{
    mangled_assert("?GetLen@ArchiveStoreStream@@UAEKXZ");
    todo("implement");
}

ArchiveCompressStream::ArchiveCompressStream(Archive::FileProxy const &) // 0x10005E4C
{
    mangled_assert("??0ArchiveCompressStream@@AAE@ABVFileProxy@Archive@@@Z");
    todo("implement");
}

ArchiveCompressStream::~ArchiveCompressStream() // 0x10005F81
{
    mangled_assert("??1ArchiveCompressStream@@UAE@XZ");
    todo("implement");
}

unsigned long ArchiveCompressStream::Read(void *, unsigned long) // 0x100061F6
{
    mangled_assert("?Read@ArchiveCompressStream@@UAEKPAXK@Z");
    todo("implement");
}

unsigned long ArchiveCompressStream::Write(void const *, unsigned long) // 0x10006440
{
    mangled_assert("?Write@ArchiveCompressStream@@UAEKPBXK@Z");
    todo("implement");
}

void ArchiveCompressStream::Flush() // 0x1000605E
{
    mangled_assert("?Flush@ArchiveCompressStream@@UAEXXZ");
    todo("implement");
}

unsigned long ArchiveCompressStream::SetPos(unsigned long) // 0x1000630E
{
    mangled_assert("?SetPos@ArchiveCompressStream@@UAEKK@Z");
    todo("implement");
}

unsigned long ArchiveCompressStream::GetPos() // 0x100060D4
{
    mangled_assert("?GetPos@ArchiveCompressStream@@UAEKXZ");
    todo("implement");
}

unsigned long ArchiveCompressStream::GetLen() // 0x100060BE
{
    mangled_assert("?GetLen@ArchiveCompressStream@@UAEKXZ");
    todo("implement");
}

void ArchiveCompressStream::InitStream() // 0x100060E2
{
    mangled_assert("?InitStream@ArchiveCompressStream@@AAEXXZ");
    todo("implement");
}

void ArchiveCompressStream::ShutStream() // 0x10006401
{
    mangled_assert("?ShutStream@ArchiveCompressStream@@AAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif

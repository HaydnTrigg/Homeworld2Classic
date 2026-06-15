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
#include "src\Source\FileIO\ByteStream.h"
#include "src\Source\FileIO\fileioexports.h"
#include <new>
#include <assist\fixedstring.h>
#include <exception>
#include <assist\stlexstring.h>
#include <set>
#include <xstddef>
#include <cstddef>
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
#include <cstdarg>
#include <stdarg.h>
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

extern bool BSWriteString(ByteStream &stream, char const *str);
extern bool BSReadString(ByteStream &stream, char *str, unsigned __int32 maxlen);
extern bool BSWriteString(ByteStream &stream, wchar_t const *str);
extern bool BSReadString(ByteStream &stream, wchar_t *str, unsigned __int32 maxlen);
extern bool BSWriteText(ByteStream &stream, char const *s, bool addNewline);
extern bool BSPrintf(ByteStream &file, char const *format, ...);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F505
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F504
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F507
    extern std::allocator_arg_t allocator_arg; // 0x1001F506
}

/* ---------- public code */

ByteStream::ByteStream() // 0x100065A6
{
    mangled_assert("??0ByteStream@@QAE@XZ");
    todo("implement");
}

ByteStream::~ByteStream() // 0x100065B7
{
    mangled_assert("??1ByteStream@@UAE@XZ");
    todo("implement");
}

void ByteStream::SetStreamMode(StreamMode) // 0x1000681D
{
    mangled_assert("?SetStreamMode@ByteStream@@MAEXW4StreamMode@@@Z");
    todo("implement");
}

void ByteStream::SetStreamName(char const *) // 0x10006827
{
    mangled_assert("?SetStreamName@ByteStream@@UAEXPBD@Z");
    todo("implement");
}

char const *ByteStream::GetStreamName() const // 0x10006819
{
    mangled_assert("?GetStreamName@ByteStream@@QBEPBDXZ");
    todo("implement");
}

bool BSWriteString(ByteStream &stream, char const *str) // 0x100066E7
{
    mangled_assert("?BSWriteString@@YG_NAAVByteStream@@PBD@Z");
    todo("implement");
}

bool BSReadString(ByteStream &stream, char *str, unsigned __int32 maxlen) // 0x1000661C
{
    mangled_assert("?BSReadString@@YG_NAAVByteStream@@PADI@Z");
    todo("implement");
}

bool BSWriteString(ByteStream &stream, wchar_t const *str) // 0x10006727
{
    mangled_assert("?BSWriteString@@YG_NAAVByteStream@@PB_W@Z");
    todo("implement");
}

bool BSReadString(ByteStream &stream, wchar_t *str, unsigned __int32 maxlen) // 0x10006679
{
    mangled_assert("?BSReadString@@YG_NAAVByteStream@@PA_WI@Z");
    todo("implement");
}

bool BSWriteText(ByteStream &stream, char const *s, bool addNewline) // 0x1000676F
{
    mangled_assert("?BSWriteText@@YG_NAAVByteStream@@PBD_N@Z");
    todo("implement");
}

bool BSPrintf(ByteStream &file, char const *format, ...) // 0x100065D0
{
    mangled_assert("?BSPrintf@@YA_NAAVByteStream@@PBDZZ");
    todo("implement");
}

/* ---------- private code */
#endif

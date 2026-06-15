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
#include "src\Source\FileIO\RamStream.h"
#include "src\Source\FileIO\fileioexports.h"
#include <new>
#include "src\Source\FileIO\ByteStream.h"
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


_static unsigned __int32 CalcNextSize(unsigned __int32 currentSize);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F875
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F874
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F877
    extern std::allocator_arg_t allocator_arg; // 0x1001F876
}

/* ---------- public code */

RamStream::RamStream() // 0x10013717
{
    mangled_assert("??0RamStream@@QAE@XZ");
    todo("implement");
}

RamStream::~RamStream() // 0x1001374A
{
    mangled_assert("??1RamStream@@UAE@XZ");
    todo("implement");
}

bool RamStream::Open(unsigned __int32) // 0x10013844
{
    mangled_assert("?Open@RamStream@@QAE_NI@Z");
    todo("implement");
}

bool RamStream::Attach(void *, unsigned __int32, bool, StreamMode) // 0x10013777
{
    mangled_assert("?Attach@RamStream@@QAE_NPAXI_NW4StreamMode@@@Z");
    todo("implement");
}

void *RamStream::Detach() // 0x100137D7
{
    mangled_assert("?Detach@RamStream@@QAEPAXXZ");
    todo("implement");
}

unsigned long RamStream::Read(void *, unsigned long) // 0x10013893
{
    mangled_assert("?Read@RamStream@@UAEKPAXK@Z");
    todo("implement");
}

void RamStream::Flush() // 0x10013811
{
    mangled_assert("?Flush@RamStream@@UAEXXZ");
    todo("implement");
}

unsigned long RamStream::SetPos(unsigned long) // 0x10013913
{
    mangled_assert("?SetPos@RamStream@@UAEKK@Z");
    todo("implement");
}

unsigned long RamStream::GetPos() // 0x1001383D
{
    mangled_assert("?GetPos@RamStream@@UAEKXZ");
    todo("implement");
}

unsigned long RamStream::GetLen() // 0x10013819
{
    mangled_assert("?GetLen@RamStream@@UAEKXZ");
    todo("implement");
}

void RamStream::SetStreamMode(StreamMode) // 0x10013943
{
    mangled_assert("?SetStreamMode@RamStream@@UAEXW4StreamMode@@@Z");
    todo("implement");
}

unsigned long RamStream::Write(void const *, unsigned long) // 0x10013946
{
    mangled_assert("?Write@RamStream@@UAEKPBXK@Z");
    todo("implement");
}

void *RamStream::GetBuffer() // 0x10013812
{
    mangled_assert("?GetBuffer@RamStream@@QAEPAXXZ");
    todo("implement");
}

/* ---------- private code */

_static unsigned __int32 CalcNextSize(unsigned __int32 currentSize) // 0x100137C3
{
    mangled_assert("CalcNextSize");
    todo("implement");
}
#endif

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
#include "src\Source\FileIO\CRC.h"
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

extern unsigned long crc32(unsigned long crc, unsigned char const *buf, unsigned __int32 len);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F50E
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F50D
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F510
    extern unsigned long const crc_table[256]; // 0x100169A8
    extern std::allocator_arg_t allocator_arg; // 0x1001F50F
}

/* ---------- public code */

unsigned long crc32(unsigned long crc, unsigned char const *buf, unsigned __int32 len) // 0x10009C61
{
    mangled_assert("?crc32@@YGKKPBEI@Z");
    todo("implement");
}

void CRC::AddValues(void const *, unsigned __int32) // 0x10009BF5
{
    mangled_assert("?AddValues@CRC@@QAEXPBXI@Z");
    todo("implement");
}

void CRC::AddFile(_iobuf *) // 0x10009B2A
{
    mangled_assert("?AddFile@CRC@@QAEXPAU_iobuf@@@Z");
    todo("implement");
}

void CRC::AddFile(ByteStream *) // 0x10009BA5
{
    mangled_assert("?AddFile@CRC@@QAEXPAVByteStream@@@Z");
    todo("implement");
}

CRCStream::CRCStream(CRC *) // 0x10009A78
{
    mangled_assert("??0CRCStream@@QAE@PAVCRC@@@Z");
    todo("implement");
}

unsigned long CRCStream::Read(void *, unsigned long) // 0x10009C22
{
    mangled_assert("?Read@CRCStream@@UAEKPAXK@Z");
    todo("implement");
}

void CRCStream::SetStreamMode(StreamMode) // 0x10009C2C
{
    mangled_assert("?SetStreamMode@CRCStream@@MAEXW4StreamMode@@@Z");
    todo("implement");
}

void CRCStream::Flush() // 0x10009C13
{
    mangled_assert("?Flush@CRCStream@@UAEXXZ");
    todo("implement");
}

unsigned long CRCStream::SetPos(unsigned long) // 0x10009C27
{
    mangled_assert("?SetPos@CRCStream@@UAEKK@Z");
    todo("implement");
}

unsigned long CRCStream::GetPos() // 0x10009C1B
{
    mangled_assert("?GetPos@CRCStream@@UAEKXZ");
    todo("implement");
}

unsigned long CRCStream::GetLen() // 0x10009C14
{
    mangled_assert("?GetLen@CRCStream@@UAEKXZ");
    todo("implement");
}

unsigned long CRCStream::Write(void const *, unsigned long) // 0x10009C2F
{
    mangled_assert("?Write@CRCStream@@UAEKPBXK@Z");
    todo("implement");
}

/* ---------- private code */
#endif

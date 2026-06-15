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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePath.h"
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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FileStream.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
#include <new>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ByteStream.h"
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

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F865
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F864
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F867
    extern std::allocator_arg_t allocator_arg; // 0x1001F866
}

/* ---------- public code */

FileStream::FileStream() // 0x1000F99E
{
    mangled_assert("??0FileStream@@QAE@XZ");
    todo("implement");
}

FileStream::~FileStream() // 0x1000F9B7
{
    mangled_assert("??1FileStream@@UAE@XZ");
    todo("implement");
}

long FileStream::Open(char const *, StreamMode) // 0x1000FAED
{
    mangled_assert("?Open@FileStream@@QAEJPBDW4StreamMode@@@Z");
    todo("implement");
}

long FileStream::Close() // 0x1000FA69
{
    mangled_assert("?Close@FileStream@@QAEJXZ");
    todo("implement");
}

unsigned long FileStream::Read(void *, unsigned long) // 0x1000FB67
{
    mangled_assert("?Read@FileStream@@UAEKPAXK@Z");
    todo("implement");
}

unsigned long FileStream::ReadLine(char *, unsigned long) // 0x1000FB82
{
    mangled_assert("?ReadLine@FileStream@@QAEKPADK@Z");
    todo("implement");
}

unsigned long FileStream::Write(void const *, unsigned long) // 0x1000FC5F
{
    mangled_assert("?Write@FileStream@@UAEKPBXK@Z");
    todo("implement");
}

void FileStream::Write(char const *) // 0x1000FC37
{
    mangled_assert("?Write@FileStream@@QAEXPBD@Z");
    todo("implement");
}

void FileStream::Flush() // 0x1000FAB9
{
    mangled_assert("?Flush@FileStream@@UAEXXZ");
    todo("implement");
}

unsigned long FileStream::GetLen() // 0x1000FAC9
{
    mangled_assert("?GetLen@FileStream@@UAEKXZ");
    todo("implement");
}

unsigned long FileStream::GetPos() // 0x1000FADB
{
    mangled_assert("?GetPos@FileStream@@UAEKXZ");
    todo("implement");
}

unsigned long FileStream::SetPos(unsigned long) // 0x1000FC23
{
    mangled_assert("?SetPos@FileStream@@UAEKK@Z");
    todo("implement");
}

/* ---------- private code */
#endif

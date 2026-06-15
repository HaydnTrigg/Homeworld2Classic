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
#include "src\Source\FileIO\MD5.h"
#include "src\Source\FileIO\fileioexports.h"
#include <new>
#include <exception>
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
#include <vector>
#include <iterator>
#include <istream>
#include <boost\shared_ptr.hpp>
#include <ostream>
#include <xrefwrap>
#include <boost\throw_exception.hpp>
#include <ios>
#include "src\Source\FileIO\FilePath.h"
#include <xlocnum>
#include <xdebug>
#include <memory.h>
#include "src\Source\FileIO\ByteStream.h"
#include <streambuf>
#include <assist\fixedstring.h>
#include <boost\detail\shared_count.hpp>
#include <xiosbase>
#include <assist\stlexstring.h>
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
#include <assist\typemagic.h>
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

struct MD5_CTX
{
    unsigned long state[4]; // 0x0
    unsigned long count[2]; // 0x10
    unsigned char buffer[64]; // 0x18
};
static_assert(sizeof(MD5_CTX) == 88, "Invalid MD5_CTX size");

/* ---------- prototypes */

extern void MD5Init(MD5_CTX *context);
extern void MD5Update(MD5_CTX *context, unsigned char *input, unsigned __int32 inputLen);
extern void MD5Final(unsigned char *digest, MD5_CTX *context);

_static void MD5Transform(unsigned long *state, unsigned char *block);
_static void Encode(unsigned char *output, unsigned long *input, unsigned __int32 len);
_static void Decode(unsigned long *output, unsigned char *input, unsigned __int32 len);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F871
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F870
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F873
    extern unsigned char PADDING[64]; // 0x1001F470
    extern std::allocator_arg_t allocator_arg; // 0x1001F872
}

/* ---------- public code */

void MD5Init(MD5_CTX *context) // 0x10012F27
{
    mangled_assert("?MD5Init@@YGXPAUMD5_CTX@@@Z");
    todo("implement");
}

void MD5Update(MD5_CTX *context, unsigned char *input, unsigned __int32 inputLen) // 0x10013675
{
    mangled_assert("?MD5Update@@YGXPAUMD5_CTX@@PAEI@Z");
    todo("implement");
}

void MD5Final(unsigned char *digest, MD5_CTX *context) // 0x10012EC0
{
    mangled_assert("?MD5Final@@YGXQAEPAUMD5_CTX@@@Z");
    todo("implement");
}

void MD5::ResetStream() // 0x10013710
{
    mangled_assert("?ResetStream@MD5@@QAEXXZ");
    todo("implement");
}

void MD5::GetMD5Hash(unsigned char *) // 0x10012E10
{
    mangled_assert("?GetMD5Hash@MD5@@QAEXQAE@Z");
    todo("implement");
}

void MD5::AddValues(void const *, unsigned __int32) // 0x10012D12
{
    mangled_assert("?AddValues@MD5@@QAEXPBXI@Z");
    todo("implement");
}

void MD5::GetStreamMD5Hash(ByteStream *stream, unsigned char *MD5Hash) // 0x10012E27
{
    mangled_assert("?GetStreamMD5Hash@MD5@@SGXPAVByteStream@@QAE@Z");
    todo("implement");
}

void MD5::GetFileMD5Hash(char const *fileName, unsigned char *MD5Hash) // 0x10012DA8
{
    mangled_assert("?GetFileMD5Hash@MD5@@SGXPBDQAE@Z");
    todo("implement");
}

/* ---------- private code */

_static void MD5Transform(unsigned long *state, unsigned char *block) // 0x10012F51
{
    mangled_assert("MD5Transform");
    todo("implement");
}

_static void Encode(unsigned char *output, unsigned long *input, unsigned __int32 len) // 0x10012D6B
{
    mangled_assert("Encode");
    todo("implement");
}

_static void Decode(unsigned long *output, unsigned char *input, unsigned __int32 len) // 0x10012D23
{
    mangled_assert("Decode");
    todo("implement");
}
#endif

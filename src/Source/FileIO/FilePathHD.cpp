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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePathHD.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePath.h"
#include <new>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
#include <exception>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ByteStream.h"
#include <set>
#include <xstddef>
#include <cstddef>
#include <assist\fixedstring.h>
#include <stddef.h>
#include <yvals.h>
#include <assist\stlexstring.h>
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
#include <direct.h>
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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePathHDRaw.h"
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static bool ValidateFilename(char const *file);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F85D
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F85C
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F85F
    extern std::allocator_arg_t allocator_arg; // 0x1001F85E
}

/* ---------- public code */

_extern _sub_1000EA2A(FilePathHD *const);
FilePathHD::FilePathHD() // 0x1000EA2A
{
    mangled_assert("??0FilePathHD@@AAE@XZ");
    todo("implement");
    _sub_1000EA2A(this);
}

_extern void _sub_1000EA40(FilePathHD *const);
FilePathHD::~FilePathHD() // 0x1000EA40
{
    mangled_assert("??1FilePathHD@@UAE@XZ");
    todo("implement");
    _sub_1000EA40(this);
}

_extern FilePathHD *_sub_1000EBDE(char const *, StreamMode);
FilePathHD *FilePathHD::Create(char const *pathprepend, StreamMode mode) // 0x1000EBDE
{
    mangled_assert("?Create@FilePathHD@@SGPAV1@PBDW4StreamMode@@@Z");
    todo("implement");
    FilePathHD * __result = _sub_1000EBDE(pathprepend, mode);
    return __result;
}

_extern ByteStream *_sub_1000ED88(FilePathHD *const, char const *, StreamMode);
ByteStream *FilePathHD::FileOpen(char const *, StreamMode) // 0x1000ED88
{
    mangled_assert("?FileOpen@FilePathHD@@UAEPAVByteStream@@PBDW4StreamMode@@@Z");
    todo("implement");
    ByteStream * __result = _sub_1000ED88(this, arg, arg);
    return __result;
}

_extern bool _sub_1000ECE5(FilePathHD *const, char const *);
bool FilePathHD::FileDel(char const *) // 0x1000ECE5
{
    mangled_assert("?FileDel@FilePathHD@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_1000ECE5(this, arg);
    return __result;
}

_extern FilePath::FILE_Type _sub_1000EDF2(FilePathHD *const, char const *, StreamMode);
FilePath::FILE_Type FilePathHD::FileType(char const *, StreamMode) // 0x1000EDF2
{
    mangled_assert("?FileType@FilePathHD@@UAE?AW4FILE_Type@FilePath@@PBDW4StreamMode@@@Z");
    todo("implement");
    FilePath::FILE_Type __result = _sub_1000EDF2(this, arg, arg);
    return __result;
}

_extern void _sub_1000ED3A(FilePathHD *const, char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &);
void FilePathHD::FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) // 0x1000ED3A
{
    mangled_assert("?FileList@FilePathHD@@UAEXPBDAAV?$vector@V?$fstring@$0BAE@@@V?$allocator@V?$fstring@$0BAE@@@@std@@@std@@@Z");
    todo("implement");
    _sub_1000ED3A(this, arg, arg);
}

_extern bool _sub_1000EAC2(FilePathHD *const, char *, char const *, StreamMode const);
bool FilePathHD::ConvertFromAlias(char *, char const *, StreamMode const) // 0x1000EAC2
{
    mangled_assert("?ConvertFromAlias@FilePathHD@@UAE_NPADPBDW4StreamMode@@@Z");
    todo("implement");
    bool __result = _sub_1000EAC2(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_1000EB50(FilePathHD *const, char *, char const *);
bool FilePathHD::ConvertToAlias(char *, char const *) // 0x1000EB50
{
    mangled_assert("?ConvertToAlias@FilePathHD@@UAE_NPADPBD@Z");
    todo("implement");
    bool __result = _sub_1000EB50(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern bool _sub_1000EE63(char const *);
_static bool ValidateFilename(char const *file) // 0x1000EE63
{
    mangled_assert("ValidateFilename");
    todo("implement");
    bool __result = _sub_1000EE63(file);
    return __result;
}
#endif

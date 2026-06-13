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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePathArchive.h"
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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\Archive.h"
#include <cerrno>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\archiveinternals.h"
#include <errno.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F859
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F858
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F85B
    extern char const *k_ArchiveFileSignature; // 0x1001F3A4
    extern char const *k_ArchiveMD5SecurityKey; // 0x1001F3A8
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x1001F3AC
    extern std::allocator_arg_t allocator_arg; // 0x1001F85A
}

/* ---------- public code */

_extern _sub_1000E787(FilePathArchive::Data *const);
_inline FilePathArchive::Data::Data() // 0x1000E787
{
    mangled_assert("??0Data@FilePathArchive@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000E787(this);
}

_extern _sub_1000E792(FilePathArchive *const);
FilePathArchive::FilePathArchive() // 0x1000E792
{
    mangled_assert("??0FilePathArchive@@AAE@XZ");
    todo("implement");
    _sub_1000E792(this);
}

_extern void _sub_1000E7E4(FilePathArchive *const);
FilePathArchive::~FilePathArchive() // 0x1000E7E4
{
    mangled_assert("??1FilePathArchive@@UAE@XZ");
    todo("implement");
    _sub_1000E7E4(this);
}

_extern FilePathArchive *_sub_1000E8A2(char const *, Archive *);
FilePathArchive *FilePathArchive::Create(char const *TOCName, Archive *pArchive) // 0x1000E8A2
{
    mangled_assert("?Create@FilePathArchive@@SGPAV1@PBDPAVArchive@@@Z");
    todo("implement");
    FilePathArchive * __result = _sub_1000E8A2(TOCName, pArchive);
    return __result;
}

_extern bool _sub_1000E88A(FilePathArchive *const, char *, char const *, StreamMode const);
bool FilePathArchive::ConvertFromAlias(char *, char const *, StreamMode const) // 0x1000E88A
{
    mangled_assert("?ConvertFromAlias@FilePathArchive@@UAE_NPADPBDW4StreamMode@@@Z");
    todo("implement");
    bool __result = _sub_1000E88A(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_1000E896(FilePathArchive *const, char *, char const *);
bool FilePathArchive::ConvertToAlias(char *, char const *) // 0x1000E896
{
    mangled_assert("?ConvertToAlias@FilePathArchive@@UAE_NPADPBD@Z");
    todo("implement");
    bool __result = _sub_1000E896(this, arg, arg);
    return __result;
}

_extern ByteStream *_sub_1000E981(FilePathArchive *const, char const *, StreamMode);
ByteStream *FilePathArchive::FileOpen(char const *, StreamMode) // 0x1000E981
{
    mangled_assert("?FileOpen@FilePathArchive@@UAEPAVByteStream@@PBDW4StreamMode@@@Z");
    todo("implement");
    ByteStream * __result = _sub_1000E981(this, arg, arg);
    return __result;
}

_extern bool _sub_1000E930(FilePathArchive *const, char const *);
bool FilePathArchive::FileDel(char const *) // 0x1000E930
{
    mangled_assert("?FileDel@FilePathArchive@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_1000E930(this, arg);
    return __result;
}

_extern FilePath::FILE_Type _sub_1000E9B2(FilePathArchive *const, char const *, StreamMode);
FilePath::FILE_Type FilePathArchive::FileType(char const *, StreamMode) // 0x1000E9B2
{
    mangled_assert("?FileType@FilePathArchive@@UAE?AW4FILE_Type@FilePath@@PBDW4StreamMode@@@Z");
    todo("implement");
    FilePath::FILE_Type __result = _sub_1000E9B2(this, arg, arg);
    return __result;
}

_extern void _sub_1000E957(FilePathArchive *const, char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &);
void FilePathArchive::FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) // 0x1000E957
{
    mangled_assert("?FileList@FilePathArchive@@UAEXPBDAAV?$vector@V?$fstring@$0BAE@@@V?$allocator@V?$fstring@$0BAE@@@@std@@@std@@@Z");
    todo("implement");
    _sub_1000E957(this, arg, arg);
}

/* ---------- private code */
#endif

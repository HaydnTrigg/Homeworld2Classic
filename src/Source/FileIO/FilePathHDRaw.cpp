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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\DiskFileStream.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\platform.h"
#include <debug\ctassert.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePathHDRaw.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePath.h"
#include <new>
#include <direct.h>
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
#include <sys\types.h>
#include <sys\stat.h>
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
#include <io.h>
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
#include <sys\stat.inl>
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

typedef unsigned long Handle;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F861
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F860
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F863
    extern std::allocator_arg_t allocator_arg; // 0x1001F862
}

/* ---------- public code */

_extern _sub_1000F08C(FilePathHDRaw *const);
FilePathHDRaw::FilePathHDRaw() // 0x1000F08C
{
    mangled_assert("??0FilePathHDRaw@@QAE@XZ");
    todo("implement");
    _sub_1000F08C(this);
}

_extern void _sub_1000F0AF(FilePathHDRaw *const);
FilePathHDRaw::~FilePathHDRaw() // 0x1000F0AF
{
    mangled_assert("??1FilePathHDRaw@@UAE@XZ");
    todo("implement");
    _sub_1000F0AF(this);
}

_extern bool _sub_1000F204(FilePathHDRaw *const, char *, char const *, StreamMode const);
bool FilePathHDRaw::ConvertFromAlias(char *, char const *, StreamMode const) // 0x1000F204
{
    mangled_assert("?ConvertFromAlias@FilePathHDRaw@@UAE_NPADPBDW4StreamMode@@@Z");
    todo("implement");
    bool __result = _sub_1000F204(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_1000F218(FilePathHDRaw *const, char *, char const *);
bool FilePathHDRaw::ConvertToAlias(char *, char const *) // 0x1000F218
{
    mangled_assert("?ConvertToAlias@FilePathHDRaw@@UAE_NPADPBD@Z");
    todo("implement");
    bool __result = _sub_1000F218(this, arg, arg);
    return __result;
}

_extern bool _sub_1000F22C(FilePathHDRaw *const, char const *);
bool FilePathHDRaw::FileDel(char const *) // 0x1000F22C
{
    mangled_assert("?FileDel@FilePathHDRaw@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_1000F22C(this, arg);
    return __result;
}

_extern bool _sub_1000F2E3(char const *);
bool FilePathHDRaw::UnaliasedFileDel(char const *filename) // 0x1000F2E3
{
    mangled_assert("?UnaliasedFileDel@FilePathHDRaw@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_1000F2E3(filename);
    return __result;
}

_extern FilePath::FILE_Type _sub_1000F23B(FilePathHDRaw *const, char const *, StreamMode);
FilePath::FILE_Type FilePathHDRaw::FileType(char const *, StreamMode) // 0x1000F23B
{
    mangled_assert("?FileType@FilePathHDRaw@@UAE?AW4FILE_Type@FilePath@@PBDW4StreamMode@@@Z");
    todo("implement");
    FilePath::FILE_Type __result = _sub_1000F23B(this, arg, arg);
    return __result;
}

_extern FilePath::FILE_Type _sub_1000F533(char const *);
FilePath::FILE_Type FilePathHDRaw::UnaliasedFileType(char const *filename) // 0x1000F533
{
    mangled_assert("?UnaliasedFileType@FilePathHDRaw@@SG?AW4FILE_Type@FilePath@@PBD@Z");
    todo("implement");
    FilePath::FILE_Type __result = _sub_1000F533(filename);
    return __result;
}

_extern void _sub_1000F231(FilePathHDRaw *const, char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &);
void FilePathHDRaw::FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) // 0x1000F231
{
    mangled_assert("?FileList@FilePathHDRaw@@UAEXPBDAAV?$vector@V?$fstring@$0BAE@@@V?$allocator@V?$fstring@$0BAE@@@@std@@@std@@@Z");
    todo("implement");
    _sub_1000F231(this, arg, arg);
}

_extern void _sub_1000F468(char const *, FilePath::FileListObj *);
void FilePathHDRaw::UnaliasedFileList(char const *filespec, FilePath::FileListObj *out) // 0x1000F468
{
    mangled_assert("?UnaliasedFileList@FilePathHDRaw@@SGXPBDPAVFileListObj@FilePath@@@Z");
    todo("implement");
    _sub_1000F468(filespec, out);
}

_extern void _sub_1000F372(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &);
void FilePathHDRaw::UnaliasedFileList(char const *filespec, std::vector<fstring<260>,std::allocator<fstring<260> > > &out) // 0x1000F372
{
    mangled_assert("?UnaliasedFileList@FilePathHDRaw@@SGXPBDAAV?$vector@V?$fstring@$0BAE@@@V?$allocator@V?$fstring@$0BAE@@@@std@@@std@@@Z");
    todo("implement");
    _sub_1000F372(filespec, out);
}

_extern ByteStream *_sub_1000F236(FilePathHDRaw *const, char const *, StreamMode);
ByteStream *FilePathHDRaw::FileOpen(char const *, StreamMode) // 0x1000F236
{
    mangled_assert("?FileOpen@FilePathHDRaw@@UAEPAVByteStream@@PBDW4StreamMode@@@Z");
    todo("implement");
    ByteStream * __result = _sub_1000F236(this, arg, arg);
    return __result;
}

_extern ByteStream *_sub_1000F4EC(char const *, StreamMode);
ByteStream *FilePathHDRaw::UnaliasedFileOpen(char const *filename, StreamMode mode) // 0x1000F4EC
{
    mangled_assert("?UnaliasedFileOpen@FilePathHDRaw@@SGPAVByteStream@@PBDW4StreamMode@@@Z");
    todo("implement");
    ByteStream * __result = _sub_1000F4EC(filename, mode);
    return __result;
}

_extern bool _sub_1000F306(char const *);
bool FilePathHDRaw::UnaliasedFileExists(char const *fname) // 0x1000F306
{
    mangled_assert("?UnaliasedFileExists@FilePathHDRaw@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_1000F306(fname);
    return __result;
}

_extern bool _sub_1000F26B(char const *);
bool FilePathHDRaw::UnaliasedDirCreate(char const *filename) // 0x1000F26B
{
    mangled_assert("?UnaliasedDirCreate@FilePathHDRaw@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_1000F26B(filename);
    return __result;
}

_extern long long _sub_1000F50A(char const *);
long long FilePathHDRaw::UnaliasedFileTime(char const *filename) // 0x1000F50A
{
    mangled_assert("?UnaliasedFileTime@FilePathHDRaw@@SG_JPBD@Z");
    todo("implement");
    long long __result = _sub_1000F50A(filename);
    return __result;
}

_extern _sub_1000F007(FileListRaw *const, char const *);
FileListRaw::FileListRaw(char const *) // 0x1000F007
{
    mangled_assert("??0FileListRaw@@QAE@PBD@Z");
    todo("implement");
    _sub_1000F007(this, arg);
}

_extern void _sub_1000F095(FileListRaw *const);
FileListRaw::~FileListRaw() // 0x1000F095
{
    mangled_assert("??1FileListRaw@@UAE@XZ");
    todo("implement");
    _sub_1000F095(this);
}

_extern unsigned __int32 _sub_1000F247(FileListRaw *const);
unsigned __int32 FileListRaw::GetCount() // 0x1000F247
{
    mangled_assert("?GetCount@FileListRaw@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_1000F247(this);
    return __result;
}

_extern char const *_sub_1000F254(FileListRaw *const, unsigned __int32);
char const *FileListRaw::GetFullPathAt(unsigned __int32) // 0x1000F254
{
    mangled_assert("?GetFullPathAt@FileListRaw@@QAEPBDI@Z");
    todo("implement");
    char const * __result = _sub_1000F254(this, arg);
    return __result;
}

_extern void _sub_1000F1BD(FileListRaw *const, char const *);
void FileListRaw::AddFile(char const *) // 0x1000F1BD
{
    mangled_assert("?AddFile@FileListRaw@@EAEXPBD@Z");
    todo("implement");
    _sub_1000F1BD(this, arg);
}

/* ---------- private code */
#endif

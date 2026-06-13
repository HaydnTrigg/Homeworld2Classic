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
#include <assist\wildcard.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\MD5.h"
#include <debug\ctassert.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\Archive.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
#include <new>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\RamStream.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\archiveinternals.h"
#include <exception>
#include <set>
#include <xstddef>
#include <cstddef>
#include <stddef.h>
#include <yvals.h>
#include <xkeycheck.h>
#include <boost\detail\workaround.hpp>
#include <use_ansi.h>
#include <memory\memorypool.h>
#include <debug\ctmessage.h>
#include <assist\fileobj.h>
#include <assist\typemagic.h>
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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\platform.h"
#include <xutility>
#include <xtgmath.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <crtdbg.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\CRC.h"
#include <zlib\compression.h>
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
#include <assist\stlexsmallvector.h>
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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePathHDRaw.h"
#include <stdexcept>
#include <xstring>
#include <xtr1common>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePath.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ArchiveStream.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ByteStream.h"
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
#include <assist\fixedstring.h>
#include <locale.h>
#include <assist\stlexstring.h>
#include <map>
#include <xtree>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::FindFileEntry :
    public std::binary_function<ArchiveInternals::FileEntry const ,char const ,bool>
{
    char const *m_StringDB; // 0x0
    bool operator()(ArchiveInternals::FileEntry const &, char const *);
};
static_assert(sizeof(`anonymous-namespace'::FindFileEntry) == 4, "Invalid `anonymous-namespace'::FindFileEntry size");

typedef `anonymous-namespace'::FindFileEntry ?A0x10433147::FindFileEntry;
typedef std::smallvector<_iobuf *,10,std::allocator<_iobuf *> > FILEHandleList;

/* ---------- prototypes */


_static _inline bool CompareAlias(char const *lhsAlias, char const *rhsAlias);

/* ---------- globals */

extern std::_Generic_error_category std::_Error_objects<int>::_Generic_object; // 0x1001F00C
extern std::_Iostream_error_category std::_Error_objects<int>::_Iostream_object; // 0x1001F010
extern std::_System_error_category std::_Error_objects<int>::_System_object; // 0x1001F014
extern std::locale::id std::num_put<char,std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::id; // 0x1001F4F0
extern std::locale::id std::num_put<wchar_t,std::back_insert_iterator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > >::id; // 0x1001F4F4

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F4E1
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F4E0
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F4E3
    extern char const *k_ArchiveFileSignature; // 0x1001F000
    extern char const *k_ArchiveMD5SecurityKey; // 0x1001F004
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x1001F008
    extern MemoryPoolObj s_archivePool; // 0x1001F4E4
    extern std::allocator_arg_t allocator_arg; // 0x1001F4E2
}

/* ---------- public code */

_extern _sub_10001AB1(Archive::Data *const);
_inline Archive::Data::Data() // 0x10001AB1
{
    mangled_assert("??0Data@Archive@@QAE@XZ");
    todo("implement");
    _sub_10001AB1(this);
}

_extern _sub_10001B6E(FilePath::FileListObj *const, FilePath::FileListObj const &);
_inline FilePath::FileListObj::FileListObj(FilePath::FileListObj const &) // 0x10001B6E
{
    mangled_assert("??0FileListObj@FilePath@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_10001B6E(this, arg);
}

_extern _sub_10001B79(FilePath::FileListObj *const);
_inline FilePath::FileListObj::FileListObj() // 0x10001B79
{
    mangled_assert("??0FileListObj@FilePath@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001B79(this);
}

_extern _sub_10001B82(FileListRaw *const, FileListRaw const &);
_inline FileListRaw::FileListRaw(FileListRaw const &) // 0x10001B82
{
    mangled_assert("??0FileListRaw@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10001B82(this, arg);
}

_extern _sub_10001C15(RamStream *const, RamStream const &);
_inline RamStream::RamStream(RamStream const &) // 0x10001C15
{
    mangled_assert("??0RamStream@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10001C15(this, arg);
}

_extern _sub_10001C8C(FilePath::Source *const, FilePath::Source const &);
_inline FilePath::Source::Source(FilePath::Source const &) // 0x10001C8C
{
    mangled_assert("??0Source@FilePath@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_10001C8C(this, arg);
}

_extern _sub_10001C97(FilePath::Source *const);
_inline FilePath::Source::Source() // 0x10001C97
{
    mangled_assert("??0Source@FilePath@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001C97(this);
}

_extern ArchiveInternals::FolderEntry const *_sub_10002CF8(Archive::Data *const, ArchiveInternals::FolderEntry const *, char const *);
_inline ArchiveInternals::FolderEntry const *Archive::Data::FindFolderRecurse(ArchiveInternals::FolderEntry const *, char const *) // 0x10002CF8
{
    mangled_assert("?FindFolderRecurse@Data@Archive@@QAEPBUFolderEntry@ArchiveInternals@@PBU34@PBD@Z");
    todo("implement");
    ArchiveInternals::FolderEntry const * __result = _sub_10002CF8(this, arg, arg);
    return __result;
}

_extern ArchiveInternals::FileEntry const *_sub_10002C99(Archive::Data *const, ArchiveInternals::FolderEntry const *, char const *);
_inline ArchiveInternals::FileEntry const *Archive::Data::FindFile(ArchiveInternals::FolderEntry const *, char const *) // 0x10002C99
{
    mangled_assert("?FindFile@Data@Archive@@QAEPBUFileEntry@ArchiveInternals@@PBUFolderEntry@4@PBD@Z");
    todo("implement");
    ArchiveInternals::FileEntry const * __result = _sub_10002C99(this, arg, arg);
    return __result;
}

_extern Archive *_sub_10003512(char const *);
Archive *Archive::NewArchive(char const *file) // 0x10003512
{
    mangled_assert("?NewArchive@Archive@@SGPAV1@PBD@Z");
    todo("implement");
    Archive * __result = _sub_10003512(file);
    return __result;
}

_extern void _sub_10001D57(Archive *const);
Archive::~Archive() // 0x10001D57
{
    mangled_assert("??1Archive@@QAE@XZ");
    todo("implement");
    _sub_10001D57(this);
}

_extern void _sub_10001DFE(CRCStream *const);
_inline CRCStream::~CRCStream() // 0x10001DFE
{
    mangled_assert("??1CRCStream@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001DFE(this);
}

_extern void _sub_10001E19(Archive::Data *const);
_inline Archive::Data::~Data() // 0x10001E19
{
    mangled_assert("??1Data@Archive@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001E19(this);
}

_extern void _sub_10001E7E(std::_Generic_error_category *const);
_inline std::_Generic_error_category::~_Generic_error_category() // 0x10001E7E
{
    mangled_assert("??1_Generic_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001E7E(this);
}

_extern void _sub_10001E85(std::_Iostream_error_category *const);
_inline std::_Iostream_error_category::~_Iostream_error_category() // 0x10001E85
{
    mangled_assert("??1_Iostream_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001E85(this);
}

_extern void _sub_10001E8C(std::_System_error_category *const);
_inline std::_System_error_category::~_System_error_category() // 0x10001E8C
{
    mangled_assert("??1_System_error_category@std@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10001E8C(this);
}

_extern Archive &_sub_10001FFD(Archive *const, Archive const &);
_inline Archive &Archive::operator=(Archive const &) // 0x10001FFD
{
    mangled_assert("??4Archive@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Archive & __result = _sub_10001FFD(this, arg);
    return __result;
}

_extern ByteStream &_sub_1000200A(ByteStream *const, ByteStream const &);
_inline ByteStream &ByteStream::operator=(ByteStream const &) // 0x1000200A
{
    mangled_assert("??4ByteStream@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    ByteStream & __result = _sub_1000200A(this, arg);
    return __result;
}

_extern FilePath::FileListObj &_sub_10002057(FilePath::FileListObj *const, FilePath::FileListObj const &);
_inline FilePath::FileListObj &FilePath::FileListObj::operator=(FilePath::FileListObj const &) // 0x10002057
{
    mangled_assert("??4FileListObj@FilePath@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    FilePath::FileListObj & __result = _sub_10002057(this, arg);
    return __result;
}

_extern FileListRaw &_sub_1000205C(FileListRaw *const, FileListRaw const &);
_inline FileListRaw &FileListRaw::operator=(FileListRaw const &) // 0x1000205C
{
    mangled_assert("??4FileListRaw@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    FileListRaw & __result = _sub_1000205C(this, arg);
    return __result;
}

_extern FilePath &_sub_10002083(FilePath *const, FilePath const &);
_inline FilePath &FilePath::operator=(FilePath const &) // 0x10002083
{
    mangled_assert("??4FilePath@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    FilePath & __result = _sub_10002083(this, arg);
    return __result;
}

_extern RamStream &_sub_100020AE(RamStream *const, RamStream const &);
_inline RamStream &RamStream::operator=(RamStream const &) // 0x100020AE
{
    mangled_assert("??4RamStream@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    RamStream & __result = _sub_100020AE(this, arg);
    return __result;
}

_extern FilePath::Source &_sub_10002119(FilePath::Source *const, FilePath::Source const &);
_inline FilePath::Source &FilePath::Source::operator=(FilePath::Source const &) // 0x10002119
{
    mangled_assert("??4Source@FilePath@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    FilePath::Source & __result = _sub_10002119(this, arg);
    return __result;
}

_extern bool _sub_10002FED(char const *, wchar_t *, unsigned __int32, unsigned char *);
bool Archive::GetArchiveInfo(char const *file, wchar_t *out, unsigned __int32 outlen, unsigned char *hashout) // 0x10002FED
{
    mangled_assert("?GetArchiveInfo@Archive@@SG_NPBDPA_WIQAE@Z");
    todo("implement");
    bool __result = _sub_10002FED(file, out, outlen, hashout);
    return __result;
}

_extern char const *_sub_100031B5(Archive const *const);
char const *Archive::GetFilename() const // 0x100031B5
{
    mangled_assert("?GetFilename@Archive@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_100031B5(this);
    return __result;
}

_extern wchar_t const *_sub_10003284(Archive const *const);
wchar_t const *Archive::GetUIName() const // 0x10003284
{
    mangled_assert("?GetUIName@Archive@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_10003284(this);
    return __result;
}

_extern void _sub_100031EB(Archive const *const, unsigned char *);
void Archive::GetMD5Hash(unsigned char *) const // 0x100031EB
{
    mangled_assert("?GetMD5Hash@Archive@@QBEXQAE@Z");
    todo("implement");
    _sub_100031EB(this, arg);
}

_extern void _sub_10003204(Archive const *const, unsigned char *);
void Archive::GetMD5RootHash(unsigned char *) const // 0x10003204
{
    mangled_assert("?GetMD5RootHash@Archive@@QBEXQAE@Z");
    todo("implement");
    _sub_10003204(this, arg);
}

_extern ArchiveIterator<Archive::TOCProxy> _sub_1000376F(Archive const *const);
ArchiveIterator<Archive::TOCProxy> Archive::TOC_begin() const // 0x1000376F
{
    mangled_assert("?TOC_begin@Archive@@QBE?AV?$ArchiveIterator@VTOCProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::TOCProxy> __result = _sub_1000376F(this);
    return __result;
}

_extern ArchiveIterator<Archive::TOCProxy> _sub_10003787(Archive const *const);
ArchiveIterator<Archive::TOCProxy> Archive::TOC_end() const // 0x10003787
{
    mangled_assert("?TOC_end@Archive@@QBE?AV?$ArchiveIterator@VTOCProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::TOCProxy> __result = _sub_10003787(this);
    return __result;
}

_extern unsigned __int32 _sub_1000379F(Archive const *const);
unsigned __int32 Archive::TOC_size() const // 0x1000379F
{
    mangled_assert("?TOC_size@Archive@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_1000379F(this);
    return __result;
}

_extern ArchiveIterator<Archive::FolderProxy> _sub_10002E87(Archive const *const);
ArchiveIterator<Archive::FolderProxy> Archive::Folder_begin() const // 0x10002E87
{
    mangled_assert("?Folder_begin@Archive@@QBE?AV?$ArchiveIterator@VFolderProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FolderProxy> __result = _sub_10002E87(this);
    return __result;
}

_extern ArchiveIterator<Archive::FolderProxy> _sub_10002ED6(Archive const *const);
ArchiveIterator<Archive::FolderProxy> Archive::Folder_end() const // 0x10002ED6
{
    mangled_assert("?Folder_end@Archive@@QBE?AV?$ArchiveIterator@VFolderProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FolderProxy> __result = _sub_10002ED6(this);
    return __result;
}

_extern ArchiveIterator<Archive::FileProxy> _sub_10002BEE(Archive const *const);
ArchiveIterator<Archive::FileProxy> Archive::File_begin() const // 0x10002BEE
{
    mangled_assert("?File_begin@Archive@@QBE?AV?$ArchiveIterator@VFileProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FileProxy> __result = _sub_10002BEE(this);
    return __result;
}

_extern ArchiveIterator<Archive::FileProxy> _sub_10002C3D(Archive const *const);
ArchiveIterator<Archive::FileProxy> Archive::File_end() const // 0x10002C3D
{
    mangled_assert("?File_end@Archive@@QBE?AV?$ArchiveIterator@VFileProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FileProxy> __result = _sub_10002C3D(this);
    return __result;
}

_extern unsigned __int32 _sub_10002C8C(Archive const *const);
unsigned __int32 Archive::File_size() const // 0x10002C8C
{
    mangled_assert("?File_size@Archive@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10002C8C(this);
    return __result;
}

_extern ArchiveIterator<Archive::TOCProxy> _sub_10002D76(Archive const *const, char const *);
ArchiveIterator<Archive::TOCProxy> Archive::FindTOCEntry(char const *) const // 0x10002D76
{
    mangled_assert("?FindTOCEntry@Archive@@QBE?AV?$ArchiveIterator@VTOCProxy@Archive@@@@PBD@Z");
    todo("implement");
    ArchiveIterator<Archive::TOCProxy> __result = _sub_10002D76(this, arg);
    return __result;
}

_extern ArchiveIterator<Archive::TOCProxy> _sub_10002DE4(Archive const *const, char const *);
ArchiveIterator<Archive::TOCProxy> Archive::FindTOCForAlias(char const *) const // 0x10002DE4
{
    mangled_assert("?FindTOCForAlias@Archive@@QBE?AV?$ArchiveIterator@VTOCProxy@Archive@@@@PBD@Z");
    todo("implement");
    ArchiveIterator<Archive::TOCProxy> __result = _sub_10002DE4(this, arg);
    return __result;
}

_extern ByteStream *_sub_10002A7C(Archive *const, ArchiveIterator<Archive::TOCProxy>, char const *);
ByteStream *Archive::FileOpen(ArchiveIterator<Archive::TOCProxy>, char const *) // 0x10002A7C
{
    mangled_assert("?FileOpen@Archive@@QAEPAVByteStream@@V?$ArchiveIterator@VTOCProxy@Archive@@@@PBD@Z");
    todo("implement");
    ByteStream * __result = _sub_10002A7C(this, arg, arg);
    return __result;
}

_extern ByteStream *_sub_100029B5(Archive *const, ArchiveIterator<Archive::FileProxy>);
ByteStream *Archive::FileOpen(ArchiveIterator<Archive::FileProxy>) // 0x100029B5
{
    mangled_assert("?FileOpen@Archive@@QAEPAVByteStream@@V?$ArchiveIterator@VFileProxy@Archive@@@@@Z");
    todo("implement");
    ByteStream * __result = _sub_100029B5(this, arg);
    return __result;
}

_extern Archive::FileType _sub_100030D2(Archive *const, ArchiveIterator<Archive::TOCProxy>, char const *);
Archive::FileType Archive::GetFileType(ArchiveIterator<Archive::TOCProxy>, char const *) // 0x100030D2
{
    mangled_assert("?GetFileType@Archive@@QAE?AW4FileType@1@V?$ArchiveIterator@VTOCProxy@Archive@@@@PBD@Z");
    todo("implement");
    Archive::FileType __result = _sub_100030D2(this, arg, arg);
    return __result;
}

_extern void _sub_100026BF(Archive *const, ArchiveIterator<Archive::TOCProxy>, char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &);
void Archive::FileList(ArchiveIterator<Archive::TOCProxy>, char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) // 0x100026BF
{
    mangled_assert("?FileList@Archive@@QAEXV?$ArchiveIterator@VTOCProxy@Archive@@@@PBDAAV?$vector@V?$fstring@$0BAE@@@V?$allocator@V?$fstring@$0BAE@@@@std@@@std@@@Z");
    todo("implement");
    _sub_100026BF(this, arg, arg, arg);
}

_extern bool _sub_100037AC(Archive *const);
bool Archive::TestArchive() // 0x100037AC
{
    mangled_assert("?TestArchive@Archive@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_100037AC(this);
    return __result;
}

_extern char const *_sub_1000326A(Archive const *const, unsigned long);
char const *Archive::GetStringAtOffset(unsigned long) const // 0x1000326A
{
    mangled_assert("?GetStringAtOffset@Archive@@ABEPBDK@Z");
    todo("implement");
    char const * __result = _sub_1000326A(this, arg);
    return __result;
}

_extern ArchiveIterator<Archive::FolderProxy> _sub_100031B8(Archive const *const, unsigned __int32);
ArchiveIterator<Archive::FolderProxy> Archive::GetFolderIterator(unsigned __int32) const // 0x100031B8
{
    mangled_assert("?GetFolderIterator@Archive@@ABE?AV?$ArchiveIterator@VFolderProxy@Archive@@@@I@Z");
    todo("implement");
    ArchiveIterator<Archive::FolderProxy> __result = _sub_100031B8(this, arg);
    return __result;
}

_extern ArchiveIterator<Archive::FileProxy> _sub_10003098(Archive const *const, unsigned __int32);
ArchiveIterator<Archive::FileProxy> Archive::GetFileIterator(unsigned __int32) const // 0x10003098
{
    mangled_assert("?GetFileIterator@Archive@@ABE?AV?$ArchiveIterator@VFileProxy@Archive@@@@I@Z");
    todo("implement");
    ArchiveIterator<Archive::FileProxy> __result = _sub_10003098(this, arg);
    return __result;
}

_extern _iobuf *_sub_100035A3(Archive *const);
_iobuf *Archive::NewHandle() // 0x100035A3
{
    mangled_assert("?NewHandle@Archive@@AAEPAU_iobuf@@XZ");
    todo("implement");
    _iobuf * __result = _sub_100035A3(this);
    return __result;
}

_extern void _sub_10002F25(Archive *const, _iobuf *);
void Archive::FreeHandle(_iobuf *) // 0x10002F25
{
    mangled_assert("?FreeHandle@Archive@@AAEXPAU_iobuf@@@Z");
    todo("implement");
    _sub_10002F25(this, arg);
}

_extern _sub_10001A09(Archive *const);
Archive::Archive() // 0x10001A09
{
    mangled_assert("??0Archive@@AAE@XZ");
    todo("implement");
    _sub_10001A09(this);
}

_extern _sub_10001A46(ByteStream *const, ByteStream const &);
_inline ByteStream::ByteStream(ByteStream const &) // 0x10001A46
{
    mangled_assert("??0ByteStream@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10001A46(this, arg);
}

_extern bool _sub_1000328C(Archive *const, char const *);
bool Archive::LoadPrivate(char const *) // 0x1000328C
{
    mangled_assert("?LoadPrivate@Archive@@AAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_1000328C(this, arg);
    return __result;
}

_extern char const *_sub_1000327D(Archive::TOCProxy const *const);
char const *Archive::TOCProxy::GetTOCName() const // 0x1000327D
{
    mangled_assert("?GetTOCName@TOCProxy@Archive@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_1000327D(this);
    return __result;
}

_extern char const *_sub_10003279(Archive::TOCProxy const *const);
char const *Archive::TOCProxy::GetTOCAlias() const // 0x10003279
{
    mangled_assert("?GetTOCAlias@TOCProxy@Archive@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_10003279(this);
    return __result;
}

_extern ArchiveIterator<Archive::FolderProxy> _sub_10002EB9(Archive::TOCProxy const *const);
ArchiveIterator<Archive::FolderProxy> Archive::TOCProxy::Folder_begin() const // 0x10002EB9
{
    mangled_assert("?Folder_begin@TOCProxy@Archive@@QBE?AV?$ArchiveIterator@VFolderProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FolderProxy> __result = _sub_10002EB9(this);
    return __result;
}

_extern ArchiveIterator<Archive::FolderProxy> _sub_10002F08(Archive::TOCProxy const *const);
ArchiveIterator<Archive::FolderProxy> Archive::TOCProxy::Folder_end() const // 0x10002F08
{
    mangled_assert("?Folder_end@TOCProxy@Archive@@QBE?AV?$ArchiveIterator@VFolderProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FolderProxy> __result = _sub_10002F08(this);
    return __result;
}

_extern ArchiveIterator<Archive::FileProxy> _sub_10002C20(Archive::TOCProxy const *const);
ArchiveIterator<Archive::FileProxy> Archive::TOCProxy::File_begin() const // 0x10002C20
{
    mangled_assert("?File_begin@TOCProxy@Archive@@QBE?AV?$ArchiveIterator@VFileProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FileProxy> __result = _sub_10002C20(this);
    return __result;
}

_extern ArchiveIterator<Archive::FileProxy> _sub_10002C6F(Archive::TOCProxy const *const);
ArchiveIterator<Archive::FileProxy> Archive::TOCProxy::File_end() const // 0x10002C6F
{
    mangled_assert("?File_end@TOCProxy@Archive@@QBE?AV?$ArchiveIterator@VFileProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FileProxy> __result = _sub_10002C6F(this);
    return __result;
}

_extern char const *_sub_100031DB(Archive::FolderProxy const *const);
char const *Archive::FolderProxy::GetFolderName() const // 0x100031DB
{
    mangled_assert("?GetFolderName@FolderProxy@Archive@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_100031DB(this);
    return __result;
}

_extern ArchiveIterator<Archive::FolderProxy> _sub_10002E9F(Archive::FolderProxy const *const);
ArchiveIterator<Archive::FolderProxy> Archive::FolderProxy::Folder_begin() const // 0x10002E9F
{
    mangled_assert("?Folder_begin@FolderProxy@Archive@@QBE?AV?$ArchiveIterator@VFolderProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FolderProxy> __result = _sub_10002E9F(this);
    return __result;
}

_extern ArchiveIterator<Archive::FolderProxy> _sub_10002EEE(Archive::FolderProxy const *const);
ArchiveIterator<Archive::FolderProxy> Archive::FolderProxy::Folder_end() const // 0x10002EEE
{
    mangled_assert("?Folder_end@FolderProxy@Archive@@QBE?AV?$ArchiveIterator@VFolderProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FolderProxy> __result = _sub_10002EEE(this);
    return __result;
}

_extern ArchiveIterator<Archive::FileProxy> _sub_10002C06(Archive::FolderProxy const *const);
ArchiveIterator<Archive::FileProxy> Archive::FolderProxy::File_begin() const // 0x10002C06
{
    mangled_assert("?File_begin@FolderProxy@Archive@@QBE?AV?$ArchiveIterator@VFileProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FileProxy> __result = _sub_10002C06(this);
    return __result;
}

_extern ArchiveIterator<Archive::FileProxy> _sub_10002C55(Archive::FolderProxy const *const);
ArchiveIterator<Archive::FileProxy> Archive::FolderProxy::File_end() const // 0x10002C55
{
    mangled_assert("?File_end@FolderProxy@Archive@@QBE?AV?$ArchiveIterator@VFileProxy@Archive@@@@XZ");
    todo("implement");
    ArchiveIterator<Archive::FileProxy> __result = _sub_10002C55(this);
    return __result;
}

_extern char const *_sub_100030BB(Archive::FileProxy const *const);
char const *Archive::FileProxy::GetFileName() const // 0x100030BB
{
    mangled_assert("?GetFileName@FileProxy@Archive@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_100030BB(this);
    return __result;
}

_extern unsigned long _sub_100030CB(Archive::FileProxy const *const);
unsigned long Archive::FileProxy::GetFileSize() const // 0x100030CB
{
    mangled_assert("?GetFileSize@FileProxy@Archive@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_100030CB(this);
    return __result;
}

_extern char const *_sub_10003224(Archive::FileProxy const *const);
char const *Archive::FileProxy::GetStorageType() const // 0x10003224
{
    mangled_assert("?GetStorageType@FileProxy@Archive@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_10003224(this);
    return __result;
}

_extern ArchiveInternals::FileStorageType _sub_1000324F(Archive::FileProxy const *const);
ArchiveInternals::FileStorageType Archive::FileProxy::GetStorageTypeEnum() const // 0x1000324F
{
    mangled_assert("?GetStorageTypeEnum@FileProxy@Archive@@QBE?AW4FileStorageType@ArchiveInternals@@XZ");
    todo("implement");
    ArchiveInternals::FileStorageType __result = _sub_1000324F(this);
    return __result;
}

_extern unsigned long _sub_1000321D(Archive::FileProxy const *const);
unsigned long Archive::FileProxy::GetRawFileSize() const // 0x1000321D
{
    mangled_assert("?GetRawFileSize@FileProxy@Archive@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_1000321D(this);
    return __result;
}

_extern _iobuf *_sub_10003686(Archive::FileProxy *const);
_iobuf *Archive::FileProxy::OpenHandle() // 0x10003686
{
    mangled_assert("?OpenHandle@FileProxy@Archive@@AAEPAU_iobuf@@XZ");
    todo("implement");
    _iobuf * __result = _sub_10003686(this);
    return __result;
}

_extern void _sub_1000257D(Archive::FileProxy *const, _iobuf *);
void Archive::FileProxy::CloseHandle(_iobuf *) // 0x1000257D
{
    mangled_assert("?CloseHandle@FileProxy@Archive@@AAEXPAU_iobuf@@@Z");
    todo("implement");
    _sub_1000257D(this, arg);
}

_extern unsigned long _sub_100024C0(Archive::FileProxy const *const, unsigned long);
unsigned long Archive::FileProxy::CalcArchiveSeekPos(unsigned long) const // 0x100024C0
{
    mangled_assert("?CalcArchiveSeekPos@FileProxy@Archive@@ABEKK@Z");
    todo("implement");
    unsigned long __result = _sub_100024C0(this, arg);
    return __result;
}

/* ---------- private code */

_extern bool _sub_10002584(char const *, char const *);
_static _inline bool CompareAlias(char const *lhsAlias, char const *rhsAlias) // 0x10002584
{
    mangled_assert("CompareAlias");
    todo("implement");
    bool __result = _sub_10002584(lhsAlias, rhsAlias);
    return __result;
}
#endif

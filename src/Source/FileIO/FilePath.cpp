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
#include <assist\stlexbind.h>
#include <boost\call_traits.hpp>
#include <boost\detail\call_traits.hpp>
#include <boost\type_traits\arithmetic_traits.hpp>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePath.h"
#include <boost\type_traits\is_arithmetic.hpp>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
#include <new>
#include <boost\type_traits\is_integral.hpp>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ByteStream.h"
#include <exception>
#include <boost\type_traits\detail\bool_trait_def.hpp>
#include <assist\fixedstring.h>
#include <set>
#include <xstddef>
#include <cstddef>
#include <boost\type_traits\detail\ice_not.hpp>
#include <boost\type_traits\detail\template_arity_spec.hpp>
#include <assist\stlexstring.h>
#include <stddef.h>
#include <yvals.h>
#include <boost\mpl\aux_\template_arity_fwd.hpp>
#include <xkeycheck.h>
#include <boost\detail\workaround.hpp>
#include <use_ansi.h>
#include <boost\mpl\aux_\preprocessor\params.hpp>
#include <boost\mpl\aux_\config\preprocessor.hpp>
#include <debug\ctmessage.h>
#include <boost\preprocessor\cat.hpp>
#include <algorithm>
#include <boost\preprocessor\config\config.hpp>
#include <tuple>
#include <xmemory>
#include <boost\mpl\aux_\lambda_support.hpp>
#include <boost\config\suffix.hpp>
#include <xmemory0>
#include <boost\mpl\aux_\config\lambda.hpp>
#include <cstdlib>
#include <boost\mpl\aux_\config\ttp.hpp>
#include <limits>
#include <boost\mpl\aux_\config\overload_resolution.hpp>
#include <ymath.h>
#include <boost\mpl\bool.hpp>
#include <bitset>
#include <xlocinfo>
#include <boost\mpl\bool_fwd.hpp>
#include <string>
#include <xlocinfo.h>
#include <ctype.h>
#include <boost\type_traits\detail\ice_eq.hpp>
#include <boost\type_traits\composite_traits.hpp>
#include <immintrin.h>
#include <ctime>
#include <compiler\compilerconfig.h>
#include <boost\type_traits\is_array.hpp>
#include <wmmintrin.h>
#include <time.h>
#include <cstdio>
#include <boost\type_traits\config.hpp>
#include <nmmintrin.h>
#include <stdio.h>
#include <smmintrin.h>
#include <boost\mpl\aux_\config\static_constant.hpp>
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
#include <boost\type_traits\is_class.hpp>
#include <xatomic0.h>
#include <utility>
#include <boost\type_traits\is_union.hpp>
#include <iosfwd>
#include <boost\type_traits\remove_cv.hpp>
#include <crtdbg.h>
#include <boost\type_traits\broken_compiler_spec.hpp>
#include <boost\type_traits\detail\cv_traits_impl.hpp>
#include <boost\type_traits\is_enum.hpp>
#include <boost\type_traits\add_reference.hpp>
#include <assist\typemagic.h>
#include <boost\type_traits\is_reference.hpp>
#include <vector>
#include <iterator>
#include <istream>
#include <boost\shared_ptr.hpp>
#include <ostream>
#include <xrefwrap>
#include <boost\throw_exception.hpp>
#include <ios>
#include <boost\functional.hpp>
#include <boost\type_traits\detail\type_trait_def.hpp>
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
#include <boost\type_traits\is_pointer.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <assert.h>
#include <boost\checked_delete.hpp>
#include <numeric>
#include <xfacet>
#include <hash_map>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\DiskFileStream.h"
#include <hash_set>
#include <xhash>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\platform.h"
#include <list>
#include <stdexcept>
#include <xstring>
#include <xtr1common>
#include <assist\stlexmap.h>
#include <boost\type_traits\detail\ice_or.hpp>
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
#include <boost\type_traits\intrinsics.hpp>
#include <xfunctional>
#include <ammintrin.h>
#include <mm3dnow.h>
#include <boost\type_traits\detail\type_trait_undef.hpp>
#include <boost\type_traits\is_convertible.hpp>
#include <boost\type_traits\detail\yes_no_type.hpp>
#include <boost\type_traits\detail\bool_trait_undef.hpp>
#include <boost\type_traits\is_float.hpp>
#include <boost\type_traits\is_member_pointer.hpp>
#include <boost\type_traits\is_member_function_pointer.hpp>
#include <boost\type_traits\detail\is_mem_fun_pointer_impl.hpp>
#include <stdlib.h>
#include <limits.h>
#include <cfloat>
#include <stack>
#include <float.h>
#include <crtwrn.h>
#include <boost\type_traits\is_fundamental.hpp>
#include <wtime.inl>
#include <boost\type_traits\ice.hpp>
#include <boost\type_traits\is_void.hpp>
#include <locale.h>
#include <boost\type_traits\detail\ice_and.hpp>
#include <map>
#include <xtree>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::FPSource
{
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > id; // 0x0
    long priority; // 0x18
    boost::shared_ptr<FilePath::Source> source; // 0x1C
    FPSource(`anonymous-namespace'::FPSource const &); /* compiler_generated() */
    FPSource(); /* compiler_generated() */
    ~FPSource(); /* compiler_generated() */
    `anonymous-namespace'::FPSource &operator=(`anonymous-namespace'::FPSource const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::FPSource) == 36, "Invalid `anonymous-namespace'::FPSource size");

struct `anonymous-namespace'::FPAlias
{
    std::vector<`anonymous namespace'::FPSource,std::allocator<`anonymous namespace'::FPSource> > sources; // 0x0
    FPAlias(`anonymous-namespace'::FPAlias const &); /* compiler_generated() */
    FPAlias(); /* compiler_generated() */
    ~FPAlias(); /* compiler_generated() */
    `anonymous-namespace'::FPAlias &operator=(`anonymous-namespace'::FPAlias const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::FPAlias) == 12, "Invalid `anonymous-namespace'::FPAlias size");

struct `anonymous-namespace'::FPInternals
{
    std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > aliases; // 0x0
    FilePath::FindState ffState; // 0x10
    FPInternals(`anonymous-namespace'::FPInternals const &); /* compiler_generated() */
    FPInternals(); /* compiler_generated() */
    ~FPInternals(); /* compiler_generated() */
    `anonymous-namespace'::FPInternals &operator=(`anonymous-namespace'::FPInternals const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::FPInternals) == 32, "Invalid `anonymous-namespace'::FPInternals size");

struct FilePath::AddAlias::__l10::CheckId
{
    static bool Pred(`anonymous-namespace'::FPSource const &, char const *);
};
static_assert(sizeof(FilePath::AddAlias::__l10::CheckId) == 1, "Invalid FilePath::AddAlias::__l10::CheckId size");

struct FilePath::AddAlias::__l14::CheckPriority
{
    static bool Pred(`anonymous-namespace'::FPSource const &, long);
};
static_assert(sizeof(FilePath::AddAlias::__l14::CheckPriority) == 1, "Invalid FilePath::AddAlias::__l14::CheckPriority size");

struct FilePath::RemoveAlias::__l5::CheckId
{
    static bool Pred(`anonymous-namespace'::FPSource const &, char const *);
};
static_assert(sizeof(FilePath::RemoveAlias::__l5::CheckId) == 1, "Invalid FilePath::RemoveAlias::__l5::CheckId size");

typedef std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > FPAliasMap;
typedef `anonymous-namespace'::FPInternals ?A0x2d1208b2::FPInternals;
typedef `anonymous-namespace'::FPAlias ?A0x2d1208b2::FPAlias;
typedef std::vector<`anonymous namespace'::FPSource,std::allocator<`anonymous namespace'::FPSource> > FPSourceArray;
typedef `anonymous-namespace'::FPSource ?A0x2d1208b2::FPSource;

/* ---------- prototypes */


_static void PrepareAlias(char *alias);
_static void PreparePath(char *path);
_static void PreparePath(char const *inname, char *alias, char *path);
_static bool EmptyConvert(char *fname, StreamMode mode);
_static ByteStream *EmptyOpen(char const *streamName, StreamMode mode);
_static FilePath::FILE_Type EmptyFileType(char const *fname);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Ignore ignore; // 0x1001F835
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F834
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F837
    extern std::allocator_arg_t allocator_arg; // 0x1001F836
}

/* ---------- public code */

FilePath::Source::~Source() // 0x1000C55C
{
    mangled_assert("??1Source@FilePath@@UAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<FilePath::Source> &boost::shared_ptr<FilePath::Source>::operator=(boost::shared_ptr<FilePath::Source> const &) // 0x1000C5BA
{
    mangled_assert("??4?$shared_ptr@VSource@FilePath@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

bool FilePath::AddAlias(char const *alias, char const *id, long const priority, FilePath::Source *source) // 0x1000C9CF
{
    mangled_assert("?AddAlias@FilePath@@SG_NPBD0JPAVSource@1@@Z");
    todo("implement");
}

bool FilePath::RemoveAlias(char const *alias, char const *id) // 0x1000D43A
{
    mangled_assert("?RemoveAlias@FilePath@@SG_NPBD0@Z");
    todo("implement");
}

_inline boost::shared_ptr<FilePath::Source>::shared_ptr<FilePath::Source>(boost::shared_ptr<FilePath::Source> const &) // 0x1000C273
{
    mangled_assert("??0?$shared_ptr@VSource@FilePath@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline FilePath::FindState::FindState() // 0x1000C4A3
{
    mangled_assert("??0FindState@FilePath@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::shared_ptr<FilePath::Source>::~shared_ptr<FilePath::Source>() // 0x1000C4E8
{
    mangled_assert("??1?$shared_ptr@VSource@FilePath@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >::~sp_counted_base_impl<FilePath::Source *,boost::checked_deleter<FilePath::Source> >() // 0x1000C4F4
{
    mangled_assert("??1?$sp_counted_base_impl@PAVSource@FilePath@@U?$checked_deleter@VSource@FilePath@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FilePath::FindState::~FindState() // 0x1000C557
{
    mangled_assert("??1FindState@FilePath@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void FilePath::RemoveAllAliases() // 0x1000D4B9
{
    mangled_assert("?RemoveAllAliases@FilePath@@SGXXZ");
    todo("implement");
}

bool FilePath::ConvertFromAlias(char *streamName, StreamMode mode) // 0x1000CBAB
{
    mangled_assert("?ConvertFromAlias@FilePath@@SG_NPADW4StreamMode@@@Z");
    todo("implement");
}

bool FilePath::ContainsAlias(char const *fname) // 0x1000CB57
{
    mangled_assert("?ContainsAlias@FilePath@@SG_NPBD@Z");
    todo("implement");
}

bool FilePath::ConvertToAlias(char *fname) // 0x1000CC62
{
    mangled_assert("?ConvertToAlias@FilePath@@SG_NPAD@Z");
    todo("implement");
}

bool FilePath::SplitPath(char const *fullpath, char *outalias, char *outpath, char *outfname, char *outext) // 0x1000D554
{
    mangled_assert("?SplitPath@FilePath@@SG_NPBDPAD111@Z");
    todo("implement");
}

bool FilePath::MakePath(char *fullpath, char const *alias, char const *path, char const *fname, char const *extension) // 0x1000D11B
{
    mangled_assert("?MakePath@FilePath@@SG_NPADPBD111@Z");
    todo("implement");
}

void FilePath::FullPath(char *fullpath, char const *relpath, unsigned __int32 maxLength) // 0x1000D06B
{
    mangled_assert("?FullPath@FilePath@@SGXPADPBDI@Z");
    todo("implement");
}

ByteStreamProxy FilePath::OpenStream(char const *streamName, StreamMode mode) // 0x1000D1FA
{
    mangled_assert("?OpenStream@FilePath@@SG?AVByteStreamProxy@@PBDW4StreamMode@@@Z");
    todo("implement");
}

bool FilePath::FindFirst(char const *filespec, char *filename, FilePath::FindState *findState) // 0x1000CF50
{
    mangled_assert("?FindFirst@FilePath@@SG_NPBDPADPAUFindState@1@@Z");
    todo("implement");
}

bool FilePath::FindNext(char *filename, FilePath::FindState *findState) // 0x1000D021
{
    mangled_assert("?FindNext@FilePath@@SG_NPADPAUFindState@1@@Z");
    todo("implement");
}

bool FilePath::FileExists(char const *filename) // 0x1000CF03
{
    mangled_assert("?FileExists@FilePath@@SG_NPBD@Z");
    todo("implement");
}

FilePath::FILE_Type FilePath::GetFileType(char const *streamName, StreamMode mode) // 0x1000D083
{
    mangled_assert("?GetFileType@FilePath@@SG?AW4FILE_Type@1@PBDW4StreamMode@@@Z");
    todo("implement");
}

bool FilePath::RemoveFile(char const *filename) // 0x1000D4C3
{
    mangled_assert("?RemoveFile@FilePath@@SG_NPBD@Z");
    todo("implement");
}

/* ---------- private code */

_static void PrepareAlias(char *alias) // 0x1000D338
{
    mangled_assert("PrepareAlias");
    todo("implement");
}

_static void PreparePath(char *path) // 0x1000D3B0
{
    mangled_assert("PreparePath");
    todo("implement");
}

_static void PreparePath(char const *inname, char *alias, char *path) // 0x1000D346
{
    mangled_assert("PreparePath");
    todo("implement");
}

_static bool EmptyConvert(char *fname, StreamMode mode) // 0x1000CD17
{
    mangled_assert("EmptyConvert");
    todo("implement");
}

_static ByteStream *EmptyOpen(char const *streamName, StreamMode mode) // 0x1000CE52
{
    mangled_assert("EmptyOpen");
    todo("implement");
}

_static FilePath::FILE_Type EmptyFileType(char const *fname) // 0x1000CDF5
{
    mangled_assert("EmptyFileType");
    todo("implement");
}
#endif

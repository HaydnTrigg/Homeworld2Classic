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
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePathArchive.h"
#include <setjmp.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\FilePath.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ByteStream.h"
#include <debug\ctassert.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\ArchiveManager.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\fileioexports.h"
#include <new>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\Archive.h"
#include <exception>
#include <assist\stlexsmallvector.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Source\FileIO\archiveinternals.h"
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
#include <assist\typemagic.h>
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
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <map>
#include <xtree>
#include <system_error>
#include <cerrno>
#include <errno.h>
#include <boost\scoped_array.hpp>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::ArchiveRecord
{
    bool bRegisteredToFilePath; // 0x0
    std::smallvector<bool,4,std::allocator<bool> > TOCRegistered; // 0x4
    char filePathID[64]; // 0x18
    boost::shared_ptr<Archive> archive; // 0x58
    ArchiveRecord(`anonymous-namespace'::ArchiveRecord const &); /* compiler_generated() */
    ArchiveRecord(); /* compiler_generated() */
    ~ArchiveRecord(); /* compiler_generated() */
    `anonymous-namespace'::ArchiveRecord &operator=(`anonymous-namespace'::ArchiveRecord const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::ArchiveRecord) == 96, "Invalid `anonymous-namespace'::ArchiveRecord size");

struct `anonymous-namespace'::FindArchivePred :
    public std::binary_function<`anonymous namespace'::ArchiveRecord,unsigned long,bool>
{
    bool operator()(`anonymous-namespace'::ArchiveRecord const &, unsigned long const &) const;
};
static_assert(sizeof(`anonymous-namespace'::FindArchivePred) == 1, "Invalid `anonymous-namespace'::FindArchivePred size");

typedef `anonymous-namespace'::ArchiveRecord ?A0xf56b6f55::ArchiveRecord;
typedef `anonymous-namespace'::FindArchivePred ?A0xf56b6f55::FindArchivePred;
typedef std::smallvector<bool,4,std::allocator<bool> > TOCRegistredList;
typedef std::vector<`anonymous namespace'::ArchiveRecord,std::allocator<`anonymous namespace'::ArchiveRecord> > ArchiveList;

/* ---------- prototypes */

/* ---------- globals */

extern unsigned long const ArchiveManager::InvalidArchiveID; // 0x10016768

/* ---------- private variables */

_static
{
    extern ArchiveManager *s_Instance; // 0x1001F4F8
    extern std::_Ignore ignore; // 0x1001F4FD
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x1001F4FC
    extern std::piecewise_construct_t piecewise_construct; // 0x1001F4FF
    extern char const *k_ArchiveFileSignature; // 0x1001F154
    extern char const *k_ArchiveMD5SecurityKey; // 0x1001F158
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x1001F15C
    extern std::allocator_arg_t allocator_arg; // 0x1001F4FE
}

/* ---------- public code */

_inline ArchiveManager::Data::Data() // 0x10004F0A
{
    mangled_assert("??0Data@ArchiveManager@@QAE@XZ");
    todo("implement");
}

_inline boost::bad_weak_ptr::bad_weak_ptr(boost::bad_weak_ptr const &) // 0x10004F17
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline boost::bad_weak_ptr::bad_weak_ptr() // 0x10004F30
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::shared_ptr<Archive>::~shared_ptr<Archive>() // 0x10004FA9
{
    mangled_assert("??1?$shared_ptr@VArchive@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >::~sp_counted_base_impl<Archive *,boost::checked_deleter<Archive> >() // 0x10004FD6
{
    mangled_assert("??1?$sp_counted_base_impl@PAVArchive@@U?$checked_deleter@VArchive@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::shared_ptr<Archive>::shared_ptr<Archive>(boost::shared_ptr<Archive> const &) // 0x10004DDB
{
    mangled_assert("??0?$shared_ptr@VArchive@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

void ArchiveManager::Startup() // 0x100055E5
{
    mangled_assert("?Startup@ArchiveManager@@SGXXZ");
    todo("implement");
}

void ArchiveManager::Shutdown() // 0x100055C3
{
    mangled_assert("?Shutdown@ArchiveManager@@SGXXZ");
    todo("implement");
}

ArchiveManager *ArchiveManager::Instance() // 0x10005439
{
    mangled_assert("?Instance@ArchiveManager@@SGPAV1@XZ");
    todo("implement");
}

ArchiveManager::ArchiveManager() // 0x10004E68
{
    mangled_assert("??0ArchiveManager@@AAE@XZ");
    todo("implement");
}

ArchiveManager::~ArchiveManager() // 0x10004FE2
{
    mangled_assert("??1ArchiveManager@@AAE@XZ");
    todo("implement");
}

_inline ArchiveManager::Data::~Data() // 0x1000503A
{
    mangled_assert("??1Data@ArchiveManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::bad_weak_ptr::~bad_weak_ptr() // 0x1000503F
{
    mangled_assert("??1bad_weak_ptr@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::shared_ptr<Archive> &boost::shared_ptr<Archive>::operator=(boost::shared_ptr<Archive> const &) // 0x10005062
{
    mangled_assert("??4?$shared_ptr@VArchive@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline ArchiveManager &ArchiveManager::operator=(ArchiveManager const &) // 0x1000509F
{
    mangled_assert("??4ArchiveManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

unsigned long ArchiveManager::LoadArchive(char const *, char const *) // 0x10005478
{
    mangled_assert("?LoadArchive@ArchiveManager@@QAEKPBD0@Z");
    todo("implement");
}

bool ArchiveManager::UnLoadArchive(unsigned long) // 0x1000561C
{
    mangled_assert("?UnLoadArchive@ArchiveManager@@QAE_NK@Z");
    todo("implement");
}

Archive *ArchiveManager::GetArchive(unsigned long) // 0x10005410
{
    mangled_assert("?GetArchive@ArchiveManager@@QAEPAVArchive@@K@Z");
    todo("implement");
}

bool ArchiveManager::MapArchiveFilePath(unsigned long, long, bool (*)(ArchiveIterator<Archive::TOCProxy>)) // 0x10005551
{
    mangled_assert("?MapArchiveFilePath@ArchiveManager@@QAE_NKJP6G_NV?$ArchiveIterator@VTOCProxy@Archive@@@@@Z@Z");
    todo("implement");
}

bool ArchiveManager::UnMapArchiveFilePath(unsigned long) // 0x10005667
{
    mangled_assert("?UnMapArchiveFilePath@ArchiveManager@@QAE_NK@Z");
    todo("implement");
}

unsigned long ArchiveManager::ListArchives(std::vector<Archive const *,std::allocator<Archive const *> > &) // 0x1000543F
{
    mangled_assert("?ListArchives@ArchiveManager@@QAEKAAV?$vector@PBVArchive@@V?$allocator@PBVArchive@@@std@@@std@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

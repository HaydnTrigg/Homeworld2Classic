#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\bind\placeholders.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <memory\memorylib.h>
#include <boost\bind\bind_cc.hpp>
#include <boost\config.hpp>
#include <boost\bind\bind_mf_cc.hpp>
#include <Localizer\LocalizerTxt.h>
#include <memory\memoryalloc.h>
#include <new>
#include <xstddef>
#include <boost\bind\bind_template.hpp>
#include <boost\detail\workaround.hpp>
#include <vector>
#include <algorithm>
#include <xmemory>
#include <xmemory0>
#include <assist\scoped.h>
#include <boost\mpl\bool.hpp>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\Localizer\pch.h"
#include <Localizer\LocalizerImp.h>
#include <type_traits>
#include <Localizer\Localizer.h>
#include <assist\typemagic.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <memory\memorypool.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\checked_delete.hpp>
#include <xstring>
#include <boost\bind.hpp>
#include <boost\ref.hpp>
#include <boost\utility\addressof.hpp>
#include <boost\bind\mem_fn_cc.hpp>
#include <boost\type.hpp>
#include <boost\bind\arg.hpp>
#include <boost\mem_fn.hpp>
#include <boost\get_pointer.hpp>
#include <Localizer\LocalizerUCS.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::STH :
    public ScopedTrait<void *>
{
    void Release(void *);
    bool IsNull(void *) const;
};
static_assert(sizeof(`anonymous-namespace'::STH) == 1, "Invalid `anonymous-namespace'::STH size");

struct LocalizerImp::InternalResUnload::__l5::S
{
    static bool CheckName(LocalizerImp::ResEntry const &, char const *);
};
static_assert(sizeof(LocalizerImp::InternalResUnload::__l5::S) == 1, "Invalid LocalizerImp::InternalResUnload::__l5::S size");

typedef `anonymous-namespace'::STH ?A0x592ce793::STH;
typedef void *Type;
typedef `anonymous-namespace'::STH Trait;
typedef void (*bool_type)();
typedef boost::shared_ptr<LocalizerImp::Resource> this_type;
typedef boost::detail::lightweight_mutex mutex_type;

/* ---------- prototypes */


_static _inline bool RangeOverlap(__int32 min, __int32 max, __int32 val);
_static void ListFiles(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &files, char const *folder, char const *extension);
_static void ListFilesTime(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &files, bool const oldest, _FILETIME &time);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern boost::arg<1> _1; // 0x100112A0
    extern boost::arg<2> _2; // 0x100112A1
    extern boost::arg<3> _3; // 0x100112A2
    extern boost::arg<4> _4; // 0x100112A3
    extern boost::arg<5> _5; // 0x100112A4
    extern boost::arg<6> _6; // 0x100112A5
    extern boost::arg<7> _7; // 0x100112A6
    extern boost::arg<8> _8; // 0x100112A7
    extern boost::arg<9> _9; // 0x100112A8
    extern LocalizerImp *s_instance; // 0x100112AC
    extern unsigned __int32 s_instanceCount; // 0x100112B0
}

/* ---------- public code */

LocalizerImp::Resource::~Resource() // 0x1000351B
{
    mangled_assert("??1Resource@LocalizerImp@@UAE@XZ");
    todo("implement");
}

_inline boost::bad_weak_ptr::~bad_weak_ptr() // 0x10003522
{
    mangled_assert("??1bad_weak_ptr@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::shared_ptr<LocalizerImp::Resource> &boost::shared_ptr<LocalizerImp::Resource>::operator=(boost::shared_ptr<LocalizerImp::Resource> const &) // 0x10003545
{
    mangled_assert("??4?$shared_ptr@VResource@LocalizerImp@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline LocalizerImp::ResEntry &LocalizerImp::ResEntry::operator=(LocalizerImp::ResEntry const &) // 0x10003562
{
    mangled_assert("??4ResEntry@LocalizerImp@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_HMEMPOOL *LocalizerImp::Allocator() // 0x100036FA
{
    mangled_assert("?Allocator@LocalizerImp@@SGPAU_HMEMPOOL@@XZ");
    todo("implement");
}

LocalizerImp *LocalizerImp::Instance() // 0x1000383C
{
    mangled_assert("?Instance@LocalizerImp@@SGPAV1@XZ");
    todo("implement");
}

void LocalizerImp::Initialize() // 0x1000380D
{
    mangled_assert("?Initialize@LocalizerImp@@SGXXZ");
    todo("implement");
}

void LocalizerImp::Shutdown() // 0x10003EC8
{
    mangled_assert("?Shutdown@LocalizerImp@@SGXXZ");
    todo("implement");
}

LocalizerImp::LocalizerImp() // 0x100033EC
{
    mangled_assert("??0LocalizerImp@@AAE@XZ");
    todo("implement");
}

_inline LocalizerImp::ResEntry::ResEntry(LocalizerImp::ResEntry const &) // 0x100033F9
{
    mangled_assert("??0ResEntry@LocalizerImp@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline LocalizerImp::ResEntry::ResEntry() // 0x10003419
{
    mangled_assert("??0ResEntry@LocalizerImp@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::bad_weak_ptr::bad_weak_ptr(boost::bad_weak_ptr const &) // 0x10003423
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline boost::bad_weak_ptr::bad_weak_ptr() // 0x1000343C
{
    mangled_assert("??0bad_weak_ptr@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline boost::shared_ptr<LocalizerImp::Resource>::~shared_ptr<LocalizerImp::Resource>() // 0x100034E7
{
    mangled_assert("??1?$shared_ptr@VResource@LocalizerImp@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LocalizerImp::~LocalizerImp() // 0x100034FF
{
    mangled_assert("??1LocalizerImp@@AAE@XZ");
    todo("implement");
}

_inline boost::detail::sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >::~sp_counted_base_impl<LocalizerImp::Resource *,boost::checked_deleter<LocalizerImp::Resource> >() // 0x100034F3
{
    mangled_assert("??1?$sp_counted_base_impl@PAVResource@LocalizerImp@@U?$checked_deleter@VResource@LocalizerImp@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LocalizerImp::ResEntry::~ResEntry() // 0x1000350F
{
    mangled_assert("??1ResEntry@LocalizerImp@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool LocalizerImp::InternalResLoad(char const *, LocalizerImp::Resource *(*)(char const *)) // 0x10003842
{
    mangled_assert("?InternalResLoad@LocalizerImp@@AAE_NPBDP6GPAVResource@1@0@Z@Z");
    todo("implement");
}

bool LocalizerImp::InternalResUnload(char const *) // 0x10003A14
{
    mangled_assert("?InternalResUnload@LocalizerImp@@AAE_NPBD@Z");
    todo("implement");
}

_inline boost::shared_ptr<LocalizerImp::Resource>::shared_ptr<LocalizerImp::Resource>(boost::shared_ptr<LocalizerImp::Resource> const &) // 0x10003360
{
    mangled_assert("??0?$shared_ptr@VResource@LocalizerImp@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

bool LocalizerImp::UCSLoad(char const *) // 0x10003FE9
{
    mangled_assert("?UCSLoad@LocalizerImp@@QAE_NPBD@Z");
    todo("implement");
}

bool LocalizerImp::UCSUnload(char const *) // 0x10003FFA
{
    mangled_assert("?UCSUnload@LocalizerImp@@QAE_NPBD@Z");
    todo("implement");
}

bool LocalizerImp::TxtLoad(char const *) // 0x10003F89
{
    mangled_assert("?TxtLoad@LocalizerImp@@QAE_NPBD@Z");
    todo("implement");
}

bool LocalizerImp::TxtUnload(char const *) // 0x10003FE4
{
    mangled_assert("?TxtUnload@LocalizerImp@@QAE_NPBD@Z");
    todo("implement");
}

LocalizerImp::Resource *LocalizerImp::GetTxtResourceByFileName(char const *) // 0x100037BB
{
    mangled_assert("?GetTxtResourceByFileName@LocalizerImp@@AAEPAVResource@1@PBD@Z");
    todo("implement");
}

bool LocalizerImp::GetString(wchar_t *, unsigned __int32, __int32) const // 0x10003768
{
    mangled_assert("?GetString@LocalizerImp@@QBE_NPA_WIH@Z");
    todo("implement");
}

bool LocalizerImp::TxtSave(char const *) // 0x10003FBD
{
    mangled_assert("?TxtSave@LocalizerImp@@QAE_NPBD@Z");
    todo("implement");
}

bool LocalizerImp::TxtGetRange(char const *, __int32 &, __int32 &) // 0x10003F4B
{
    mangled_assert("?TxtGetRange@LocalizerImp@@QAE_NPBDAAH1@Z");
    todo("implement");
}

bool LocalizerImp::TxtResetRange(char const *, __int32 const, __int32 const) // 0x10003F9A
{
    mangled_assert("?TxtResetRange@LocalizerImp@@QAE_NPBDHH@Z");
    todo("implement");
}

bool LocalizerImp::TxtAddRange(char const *, unsigned __int32 const, char const *, __int32 &, __int32 &) // 0x10003F21
{
    mangled_assert("?TxtAddRange@LocalizerImp@@QAE_NPBDI0AAH1@Z");
    todo("implement");
}

__int32 LocalizerImp::TxtAdd(char const *, __int32 const, __int32 const, wchar_t const *, __int32 const) // 0x10003EFB
{
    mangled_assert("?TxtAdd@LocalizerImp@@QAEHPBDHHPB_WH@Z");
    todo("implement");
}

std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > LocalizerImp::ResLoadFolder(char const *) // 0x10003CD3
{
    mangled_assert("?ResLoadFolder@LocalizerImp@@QAE?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PBD@Z");
    todo("implement");
}

bool LocalizerImp::ResUnload(char const *) // 0x10003E48
{
    mangled_assert("?ResUnload@LocalizerImp@@QAE_NPBD@Z");
    todo("implement");
}

void LocalizerImp::ResUnload(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &) // 0x10003E17
{
    mangled_assert("?ResUnload@LocalizerImp@@QAEXABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

/* ---------- private code */

_static _inline bool RangeOverlap(__int32 min, __int32 max, __int32 val) // 0x10003CA3
{
    mangled_assert("RangeOverlap");
    todo("implement");
}

_static void ListFiles(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &files, char const *folder, char const *extension) // 0x10003A93
{
    mangled_assert("ListFiles");
    todo("implement");
}

_static void ListFilesTime(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &files, bool const oldest, _FILETIME &time) // 0x10003BCF
{
    mangled_assert("ListFilesTime");
    todo("implement");
}
#endif

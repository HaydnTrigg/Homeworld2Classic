#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <boost\bind.hpp>
#include <boost\ref.hpp>
#include <boost\utility\addressof.hpp>
#include <new>
#include <xstddef>
#include <boost\detail\workaround.hpp>
#include <vector>
#include <boost\bind\mem_fn_cc.hpp>
#include <algorithm>
#include <xmemory0>
#include <boost\mpl\bool.hpp>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\src\Shared\PC\Localizer\pch.h"
#include <Localizer\Localizer.h>
#include <boost\type.hpp>
#include <type_traits>
#include <assist\typemagic.h>
#include <boost\bind\arg.hpp>
#include <boost\mem_fn.hpp>
#include <boost\get_pointer.hpp>
#include <xutility>
#include <iosfwd>
#include <boost\bind\placeholders.hpp>
#include <boost\bind\mem_fn_template.hpp>
#include <boost\bind\bind_cc.hpp>
#include <boost\bind\bind_mf_cc.hpp>
#include <boost\checked_delete.hpp>
#include <boost\bind\bind_template.hpp>
#include <xstring>
#include <Localizer\LocalizerImp.h>
#include <wchar.h>
#include <Localizer\Localizer.pch>

/* ---------- constants */

/* ---------- definitions */

struct Localizer::CheckString::__l8::Pred
{
    static bool IsAllowed(wchar_t, wchar_t const *);
};
static_assert(sizeof(Localizer::CheckString::__l8::Pred) == 1, "Invalid Localizer::CheckString::__l8::Pred size");

/* ---------- prototypes */


_static bool IsNT();
_static bool FormatArgsUsed(unsigned __int32 *argsused, unsigned __int32 &argsusedC, wchar_t const *format);
_static bool FormatArgsExtract(wchar_t const **args, unsigned __int32 const *argsused, unsigned __int32 argsusedC, __int32 *formatkey);
_static bool FormatInternal(wchar_t *out, unsigned __int32 outlen, wchar_t const *format, wchar_t const **args);
_static bool ConvertToMultiByte(char *dst, unsigned __int32 dstlen, wchar_t const *src);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern boost::arg<1> _1; // 0x1000D290
    extern boost::arg<2> _2; // 0x1000D291
    extern boost::arg<3> _3; // 0x1000D292
    extern boost::arg<4> _4; // 0x1000D293
    extern boost::arg<5> _5; // 0x1000D294
    extern boost::arg<6> _6; // 0x1000D295
    extern boost::arg<7> _7; // 0x1000D296
    extern boost::arg<8> _8; // 0x1000D297
    extern boost::arg<9> _9; // 0x1000D298
}

/* ---------- public code */

_extern bool _sub_10001EB1();
bool Localizer::Initialize() // 0x10001EB1
{
    mangled_assert("?Initialize@Localizer@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10001EB1();
    return __result;
}

_extern bool _sub_10002028();
bool Localizer::Shutdown() // 0x10002028
{
    mangled_assert("?Shutdown@Localizer@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10002028();
    return __result;
}

_extern bool _sub_10002185(char const *);
bool Localizer::UCSLoad(char const *fileName) // 0x10002185
{
    mangled_assert("?UCSLoad@Localizer@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10002185(fileName);
    return __result;
}

_extern bool _sub_10002198(char const *);
bool Localizer::UCSUnload(char const *fileName) // 0x10002198
{
    mangled_assert("?UCSUnload@Localizer@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10002198(fileName);
    return __result;
}

_extern bool _sub_10002131(char const *);
bool Localizer::TxtLoad(char const *fileName) // 0x10002131
{
    mangled_assert("?TxtLoad@Localizer@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10002131(fileName);
    return __result;
}

_extern bool _sub_10002172(char const *);
bool Localizer::TxtUnload(char const *fileName) // 0x10002172
{
    mangled_assert("?TxtUnload@Localizer@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10002172(fileName);
    return __result;
}

_extern std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > _sub_10001FE1(char const *);
std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > Localizer::ResLoadFolder(char const *folder) // 0x10001FE1
{
    mangled_assert("?ResLoadFolder@Localizer@@SG?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PBD@Z");
    todo("implement");
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > __result = _sub_10001FE1(folder);
    return __result;
}

_extern bool _sub_10002015(char const *);
bool Localizer::ResUnload(char const *fileName) // 0x10002015
{
    mangled_assert("?ResUnload@Localizer@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10002015(fileName);
    return __result;
}

_extern void _sub_10002002(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
void Localizer::ResUnload(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &files) // 0x10002002
{
    mangled_assert("?ResUnload@Localizer@@SGXABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_10002002(files);
}

_extern bool _sub_10001DF6(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, __int32);
bool Localizer::GetString(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out, __int32 key) // 0x10001DF6
{
    mangled_assert("?GetString@Localizer@@SG_NAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@H@Z");
    todo("implement");
    bool __result = _sub_10001DF6(out, key);
    return __result;
}

_extern bool _sub_10001E66(wchar_t *, unsigned __int32, __int32);
bool Localizer::GetString(wchar_t *out, unsigned __int32 outlen, __int32 key) // 0x10001E66
{
    mangled_assert("?GetString@Localizer@@SG_NPA_WIH@Z");
    todo("implement");
    bool __result = _sub_10001E66(out, outlen, key);
    return __result;
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > _sub_10001DBB(__int32);
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > Localizer::GetString(__int32 key) // 0x10001DBB
{
    mangled_assert("?GetString@Localizer@@SG?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@H@Z");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > __result = _sub_10001DBB(key);
    return __result;
}

_extern void _sub_1000208E(wchar_t *, unsigned __int32, char const *);
void Localizer::String2LocString(wchar_t *out, unsigned __int32 outlen, char const *s) // 0x1000208E
{
    mangled_assert("?String2LocString@Localizer@@SGXPA_WIPBD@Z");
    todo("implement");
    _sub_1000208E(out, outlen, s);
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > _sub_10002030(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > Localizer::String2LocString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &s) // 0x10002030
{
    mangled_assert("?String2LocString@Localizer@@SG?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > __result = _sub_10002030(s);
    return __result;
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > _sub_10002053(char const *);
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > Localizer::String2LocString(char const *s) // 0x10002053
{
    mangled_assert("?String2LocString@Localizer@@SG?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PBD@Z");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > __result = _sub_10002053(s);
    return __result;
}

_extern void _sub_10001F9F(char *, unsigned __int32, wchar_t const *);
void Localizer::LocString2String(char *out, unsigned __int32 outlen, wchar_t const *s) // 0x10001F9F
{
    mangled_assert("?LocString2String@Localizer@@SGXPADIPB_W@Z");
    todo("implement");
    _sub_10001F9F(out, outlen, s);
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_10001F41(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > Localizer::LocString2String(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &s) // 0x10001F41
{
    mangled_assert("?LocString2String@Localizer@@SG?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z");
    todo("implement");
    std::string __result = _sub_10001F41(s);
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_10001F64(wchar_t const *);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > Localizer::LocString2String(wchar_t const *s) // 0x10001F64
{
    mangled_assert("?LocString2String@Localizer@@SG?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PB_W@Z");
    todo("implement");
    std::string __result = _sub_10001F64(s);
    return __result;
}

_extern bool _sub_100019A2(wchar_t *, unsigned __int32, long);
bool Localizer::ConvertNumber2Localized(wchar_t *out, unsigned __int32 outlen, long n) // 0x100019A2
{
    mangled_assert("?ConvertNumber2Localized@Localizer@@SG_NPA_WIJ@Z");
    todo("implement");
    bool __result = _sub_100019A2(out, outlen, n);
    return __result;
}

_extern bool _sub_10001CF9(wchar_t *, unsigned __int32);
bool Localizer::GetLocalizedDate(wchar_t *out, unsigned __int32 outlen) // 0x10001CF9
{
    mangled_assert("?GetLocalizedDate@Localizer@@SG_NPA_WI@Z");
    todo("implement");
    bool __result = _sub_10001CF9(out, outlen);
    return __result;
}

_extern bool _sub_10001D5A(wchar_t *, unsigned __int32);
bool Localizer::GetLocalizedTime(wchar_t *out, unsigned __int32 outlen) // 0x10001D5A
{
    mangled_assert("?GetLocalizedTime@Localizer@@SG_NPA_WI@Z");
    todo("implement");
    bool __result = _sub_10001D5A(out, outlen);
    return __result;
}

_extern bool _sub_1000187E(char const *, wchar_t *, unsigned __int32);
bool Localizer::ConvertLocIDToLocalized(char const *locid, wchar_t *out, unsigned __int32 outlen) // 0x1000187E
{
    mangled_assert("?ConvertLocIDToLocalized@Localizer@@SG_NPBDPA_WI@Z");
    todo("implement");
    bool __result = _sub_1000187E(locid, out, outlen);
    return __result;
}

_extern bool _sub_100018B5(wchar_t const *, wchar_t *, unsigned __int32);
bool Localizer::ConvertLocIDToLocalized(wchar_t const *locid, wchar_t *out, unsigned __int32 outlen) // 0x100018B5
{
    mangled_assert("?ConvertLocIDToLocalized@Localizer@@SG_NPB_WPA_WI@Z");
    todo("implement");
    bool __result = _sub_100018B5(locid, out, outlen);
    return __result;
}

_extern bool _sub_10001830(__int32 const, wchar_t *, unsigned __int32);
bool Localizer::ConvertLocIDToLocalized(__int32 const id, wchar_t *out, unsigned __int32 outlen) // 0x10001830
{
    mangled_assert("?ConvertLocIDToLocalized@Localizer@@SG_NHPA_WI@Z");
    todo("implement");
    bool __result = _sub_10001830(id, out, outlen);
    return __result;
}

_extern bool _sub_10001945(wchar_t const *, __int32 &);
bool Localizer::ConvertLocalizedToLocID(wchar_t const *locid, __int32 &id) // 0x10001945
{
    mangled_assert("?ConvertLocalizedToLocID@Localizer@@SG_NPB_WAAH@Z");
    todo("implement");
    bool __result = _sub_10001945(locid, id);
    return __result;
}

_extern bool _sub_10001C0E(wchar_t *, unsigned __int32, __int32, ...);
bool Localizer::FormatText(wchar_t *out, unsigned __int32 outlen, __int32 formatkey, ...) // 0x10001C0E
{
    mangled_assert("?FormatText@Localizer@@SA_NPA_WIHZZ");
    todo("implement");
    bool __result = _sub_10001C0E(out, outlen, formatkey, format);
    return __result;
}

_extern bool _sub_1000154A(wchar_t const *, unsigned long, wchar_t const *);
bool Localizer::CheckString(wchar_t const *str, unsigned long mask, wchar_t const *allowed) // 0x1000154A
{
    mangled_assert("?CheckString@Localizer@@SG_NPB_WK0@Z");
    todo("implement");
    bool __result = _sub_1000154A(str, mask, allowed);
    return __result;
}

_extern _sub_10001432(LocalizerImp::Resource *const, LocalizerImp::Resource const &);
_inline LocalizerImp::Resource::Resource(LocalizerImp::Resource const &) // 0x10001432
{
    mangled_assert("??0Resource@LocalizerImp@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_10001432(this, arg);
}

_extern _sub_1000143D(LocalizerImp::Resource *const);
_inline LocalizerImp::Resource::Resource() // 0x1000143D
{
    mangled_assert("??0Resource@LocalizerImp@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1000143D(this);
}

_extern LocalizerImp::Resource &_sub_100014A2(LocalizerImp::Resource *const, LocalizerImp::Resource const &);
_inline LocalizerImp::Resource &LocalizerImp::Resource::operator=(LocalizerImp::Resource const &) // 0x100014A2
{
    mangled_assert("??4Resource@LocalizerImp@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    LocalizerImp::Resource & __result = _sub_100014A2(this, arg);
    return __result;
}

_extern __int32 _sub_10001748(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
__int32 Localizer::CompareSort(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &l, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &r) // 0x10001748
{
    mangled_assert("?CompareSort@Localizer@@SGHABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z");
    todo("implement");
    __int32 __result = _sub_10001748(l, r);
    return __result;
}

_extern __int32 _sub_1000176A(wchar_t const *, wchar_t const *);
__int32 Localizer::CompareSort(wchar_t const *l, wchar_t const *r) // 0x1000176A
{
    mangled_assert("?CompareSort@Localizer@@SGHPB_W0@Z");
    todo("implement");
    __int32 __result = _sub_1000176A(l, r);
    return __result;
}

_extern bool _sub_100016B1(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
bool Localizer::CompareEqual(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &l, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &r) // 0x100016B1
{
    mangled_assert("?CompareEqual@Localizer@@SG_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z");
    todo("implement");
    bool __result = _sub_100016B1(l, r);
    return __result;
}

_extern bool _sub_100016D3(wchar_t const *, wchar_t const *);
bool Localizer::CompareEqual(wchar_t const *l, wchar_t const *r) // 0x100016D3
{
    mangled_assert("?CompareEqual@Localizer@@SG_NPB_W0@Z");
    todo("implement");
    bool __result = _sub_100016D3(l, r);
    return __result;
}

_extern bool _sub_100017F6(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
bool Localizer::CompareStrict(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &l, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &r) // 0x100017F6
{
    mangled_assert("?CompareStrict@Localizer@@SG_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z");
    todo("implement");
    bool __result = _sub_100017F6(l, r);
    return __result;
}

_extern bool _sub_10001818(wchar_t const *, wchar_t const *);
bool Localizer::CompareStrict(wchar_t const *l, wchar_t const *r) // 0x10001818
{
    mangled_assert("?CompareStrict@Localizer@@SG_NPB_W0@Z");
    todo("implement");
    bool __result = _sub_10001818(l, r);
    return __result;
}

_extern bool _sub_1000215F(char const *);
bool Localizer::TxtSave(char const *txtResName) // 0x1000215F
{
    mangled_assert("?TxtSave@Localizer@@SG_NPBD@Z");
    todo("implement");
    bool __result = _sub_1000215F(txtResName);
    return __result;
}

_extern bool _sub_10002144(char const *, __int32 const, __int32 const);
bool Localizer::TxtResetRange(char const *txtResName, __int32 const rangeMin, __int32 const rangeMax) // 0x10002144
{
    mangled_assert("?TxtResetRange@Localizer@@SG_NPBDHH@Z");
    todo("implement");
    bool __result = _sub_10002144(txtResName, rangeMin, rangeMax);
    return __result;
}

_extern bool _sub_100020F4(char const *, unsigned __int32 const, char const *, __int32 &, __int32 &);
bool Localizer::TxtAddRange(char const *txtResName, unsigned __int32 const rangeSize, char const *comment, __int32 &rangeMin, __int32 &rangeMax) // 0x100020F4
{
    mangled_assert("?TxtAddRange@Localizer@@SG_NPBDI0AAH1@Z");
    todo("implement");
    bool __result = _sub_100020F4(txtResName, rangeSize, comment, rangeMin, rangeMax);
    return __result;
}

_extern __int32 _sub_100020D2(char const *, __int32 const, __int32 const, wchar_t const *, __int32 const);
__int32 Localizer::TxtAdd(char const *txtResName, __int32 const rangeMin, __int32 const rangeMax, wchar_t const *text, __int32 const suggestion) // 0x100020D2
{
    mangled_assert("?TxtAdd@Localizer@@SGHPBDHHPB_WH@Z");
    todo("implement");
    __int32 __result = _sub_100020D2(txtResName, rangeMin, rangeMax, text, suggestion);
    return __result;
}

_extern bool _sub_10002116(char const *, __int32 &, __int32 &);
bool Localizer::TxtGetRange(char const *txtResName, __int32 &rangeMin, __int32 &rangeMax) // 0x10002116
{
    mangled_assert("?TxtGetRange@Localizer@@SG_NPBDAAH1@Z");
    todo("implement");
    bool __result = _sub_10002116(txtResName, rangeMin, rangeMax);
    return __result;
}

/* ---------- private code */

_extern bool _sub_10001ED2();
_static bool IsNT() // 0x10001ED2
{
    mangled_assert("IsNT");
    todo("implement");
    bool __result = _sub_10001ED2();
    return __result;
}

_extern bool _sub_10001A73(unsigned __int32 *, unsigned __int32 &, wchar_t const *);
_static bool FormatArgsUsed(unsigned __int32 *argsused, unsigned __int32 &argsusedC, wchar_t const *format) // 0x10001A73
{
    mangled_assert("FormatArgsUsed");
    todo("implement");
    bool __result = _sub_10001A73(argsused, argsusedC, format);
    return __result;
}

_extern bool _sub_10001A24(wchar_t const **, unsigned __int32 const *, unsigned __int32, __int32 *);
_static bool FormatArgsExtract(wchar_t const **args, unsigned __int32 const *argsused, unsigned __int32 argsusedC, __int32 *formatkey) // 0x10001A24
{
    mangled_assert("FormatArgsExtract");
    todo("implement");
    bool __result = _sub_10001A24(args, argsused, argsusedC, formatkey);
    return __result;
}

_extern bool _sub_10001B06(wchar_t *, unsigned __int32, wchar_t const *, wchar_t const **);
_static bool FormatInternal(wchar_t *out, unsigned __int32 outlen, wchar_t const *format, wchar_t const **args) // 0x10001B06
{
    mangled_assert("FormatInternal");
    todo("implement");
    bool __result = _sub_10001B06(out, outlen, format, args);
    return __result;
}

_extern bool _sub_100019F0(char *, unsigned __int32, wchar_t const *);
_static bool ConvertToMultiByte(char *dst, unsigned __int32 dstlen, wchar_t const *src) // 0x100019F0
{
    mangled_assert("ConvertToMultiByte");
    todo("implement");
    bool __result = _sub_100019F0(dst, dstlen, src);
    return __result;
}
#endif

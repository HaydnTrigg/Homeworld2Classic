#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <Objects\Draw.h>
#include <xhash>
#include <Objects\Material.h>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <malloc.h>
#include <new>
#include <Objects\ClipRect.h>
#include <xstddef>
#include <gl\r_defines.h>
#include <type_traits>
#include <gl\glext.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <list>
#include <Mathlib\matrix3.h>
#include <map>
#include <xtree>
#include <Objects\Constructor.h>
#include <Objects\CompiledText.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <Objects\FontSystem.h>
#include <Objects\Objects.h>
#include <Objects\BitmapFont.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Objects\Typeface.h>
#include <Mathlib\mathlibdll.h>
#include <Objects\Texture.h>
#include <Mathlib\fastmath.h>
#include <Objects\TextureRegistry.h>
#include <string>
#include <gl\r_types.h>
#include <engine\prim.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > FontNameMap;

/* ---------- prototypes */


_static void udwordToRGB(unsigned __int32 val, float &R, float &G, float &B);

/* ---------- globals */

extern unsigned __int32 const FontSystem::INVALID_HANDLE; // 0x100E4440
extern FontSystem *FontSystem::s_instance; // 0x10132A60
extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > FontSystem::s_defaultFilename; // 0x1010D4F8
extern vector4 FontSystem::s_lastColour; // 0x10132A68
extern Typeface *FontSystem::s_lastTypeface; // 0x10132A64

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132A78
    extern wchar_t *fancySkipStrings[8]; // 0x1010D4D8
}

/* ---------- public code */

_extern bool _sub_1004BFB0();
bool FontSystem::Startup() // 0x1004BFB0
{
    mangled_assert("?Startup@FontSystem@@SG_NXZ");
    todo("implement");
    bool __result = _sub_1004BFB0();
    return __result;
}

_extern _sub_1004B950(CompiledText *const);
_inline CompiledText::CompiledText() // 0x1004B950
{
    mangled_assert("??0CompiledText@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1004B950(this);
}

_extern bool _sub_1004BF90();
bool FontSystem::Shutdown() // 0x1004BF90
{
    mangled_assert("?Shutdown@FontSystem@@SG_NXZ");
    todo("implement");
    bool __result = _sub_1004BF90();
    return __result;
}

_extern _sub_1004B970(FontSystem *const);
FontSystem::FontSystem() // 0x1004B970
{
    mangled_assert("??0FontSystem@@QAE@XZ");
    todo("implement");
    _sub_1004B970(this);
}

_extern void _sub_1004BB20(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *>() // 0x1004BB20
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1004BB20(this);
}

_extern void _sub_1004BB50(FontSystem *const);
FontSystem::~FontSystem() // 0x1004BB50
{
    mangled_assert("??1FontSystem@@UAE@XZ");
    todo("implement");
    _sub_1004BB50(this);
}

_extern FontSystem *_sub_1004CEB0();
FontSystem *FontSystem::create() // 0x1004CEB0
{
    mangled_assert("?create@FontSystem@@KGPAV1@XZ");
    todo("implement");
    FontSystem * __result = _sub_1004CEB0();
    return __result;
}

_extern FontSystem *_sub_1004DC10();
FontSystem *FontSystem::instance() // 0x1004DC10
{
    mangled_assert("?instance@FontSystem@@SGPAV1@XZ");
    todo("implement");
    FontSystem * __result = _sub_1004DC10();
    return __result;
}

_extern void _sub_1004D070(FontSystem *const);
void FontSystem::freeBitmaps() // 0x1004D070
{
    mangled_assert("?freeBitmaps@FontSystem@@AAEXXZ");
    todo("implement");
    _sub_1004D070(this);
}

_extern bool _sub_1004EE30();
bool FontSystem::release() // 0x1004EE30
{
    mangled_assert("?release@FontSystem@@SG_NXZ");
    todo("implement");
    bool __result = _sub_1004EE30();
    return __result;
}

_extern void _sub_1004F690(FontSystem *const, __int32, __int32);
void FontSystem::setResolution(__int32, __int32) // 0x1004F690
{
    mangled_assert("?setResolution@FontSystem@@QAEXHH@Z");
    todo("implement");
    _sub_1004F690(this, arg, arg);
}

_extern void _sub_1004F5A0(FontSystem *const, bool, float);
void FontSystem::setProjection(bool, float) // 0x1004F5A0
{
    mangled_assert("?setProjection@FontSystem@@QAEX_NM@Z");
    todo("implement");
    _sub_1004F5A0(this, arg, arg);
}

_extern void _sub_1004F350(FontSystem *const, bool);
void FontSystem::setBlending(bool) // 0x1004F350
{
    mangled_assert("?setBlending@FontSystem@@QAEX_N@Z");
    todo("implement");
    _sub_1004F350(this, arg);
}

_extern void _sub_1004F160(FontSystem *const, bool);
void FontSystem::setAll(bool) // 0x1004F160
{
    mangled_assert("?setAll@FontSystem@@QAEX_N@Z");
    todo("implement");
    _sub_1004F160(this, arg);
}

_extern BitmapFont *_sub_1004D190(FontSystem *const, char const *);
BitmapFont *FontSystem::getLoadedFont(char const *) // 0x1004D190
{
    mangled_assert("?getLoadedFont@FontSystem@@AAEPAVBitmapFont@@PBD@Z");
    todo("implement");
    BitmapFont * __result = _sub_1004D190(this, arg);
    return __result;
}

_extern void _sub_1004F560(FontSystem *const, std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const *);
void FontSystem::setFontNameMap(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > const *) // 0x1004F560
{
    mangled_assert("?setFontNameMap@FontSystem@@QAEXPBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_1004F560(this, arg);
}

_extern bool _sub_1004DCC0(FontSystem *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool FontSystem::loadBitmapFont(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x1004DCC0
{
    mangled_assert("?loadBitmapFont@FontSystem@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_1004DCC0(this, arg);
    return __result;
}

_extern bool _sub_1004EE50(FontSystem *const);
bool FontSystem::reloadAllBitmapFonts() // 0x1004EE50
{
    mangled_assert("?reloadAllBitmapFonts@FontSystem@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_1004EE50(this);
    return __result;
}

_extern void _sub_1004F420(FontSystem *const, float, float, float, float);
void FontSystem::setColour(float, float, float, float) // 0x1004F420
{
    mangled_assert("?setColour@FontSystem@@QAEXMMMM@Z");
    todo("implement");
    _sub_1004F420(this, arg, arg, arg, arg);
}

_extern void _sub_1004F400(FontSystem *const, vector4 const &);
void FontSystem::setColour(vector4 const &) // 0x1004F400
{
    mangled_assert("?setColour@FontSystem@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_1004F400(this, arg);
}

_extern bool _sub_1004F480(FontSystem *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool FontSystem::setFont(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x1004F480
{
    mangled_assert("?setFont@FontSystem@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_1004F480(this, arg);
    return __result;
}

_extern bool _sub_1004F520(FontSystem *const, char const *);
bool FontSystem::setFont(char const *) // 0x1004F520
{
    mangled_assert("?setFont@FontSystem@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_1004F520(this, arg);
    return __result;
}

_extern bool _sub_1004F700(FontSystem *const, FontSystem::Style);
bool FontSystem::setStyle(FontSystem::Style) // 0x1004F700
{
    mangled_assert("?setStyle@FontSystem@@QAE_NW4Style@1@@Z");
    todo("implement");
    bool __result = _sub_1004F700(this, arg);
    return __result;
}

_extern void _sub_1004F590(FontSystem *const, FontSystem::Justification);
void FontSystem::setJustification(FontSystem::Justification) // 0x1004F590
{
    mangled_assert("?setJustification@FontSystem@@QAEXW4Justification@1@@Z");
    todo("implement");
    _sub_1004F590(this, arg);
}

_extern void _sub_1004F450(FontSystem *const, bool);
void FontSystem::setDropShadow(bool) // 0x1004F450
{
    mangled_assert("?setDropShadow@FontSystem@@QAEX_N@Z");
    todo("implement");
    _sub_1004F450(this, arg);
}

_extern void _sub_1004F460(FontSystem *const, float, float);
void FontSystem::setDropShadowOffset(float, float) // 0x1004F460
{
    mangled_assert("?setDropShadowOffset@FontSystem@@QAEXMM@Z");
    todo("implement");
    _sub_1004F460(this, arg, arg);
}

_extern void _sub_1004F6D0(FontSystem *const, float, float, float, float);
void FontSystem::setShadowColour(float, float, float, float) // 0x1004F6D0
{
    mangled_assert("?setShadowColour@FontSystem@@QAEXMMMM@Z");
    todo("implement");
    _sub_1004F6D0(this, arg, arg, arg, arg);
}

_extern void _sub_1004F6B0(FontSystem *const, vector4 const &);
void FontSystem::setShadowColour(vector4 const &) // 0x1004F6B0
{
    mangled_assert("?setShadowColour@FontSystem@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_1004F6B0(this, arg);
}

_extern void _sub_1004F7C0(FontSystem *const, bool);
void FontSystem::stateSaver(bool) // 0x1004F7C0
{
    mangled_assert("?stateSaver@FontSystem@@QAEX_N@Z");
    todo("implement");
    _sub_1004F7C0(this, arg);
}

_extern bool _sub_1004DBC0(FontSystem *const, FontSystem::Style);
bool FontSystem::hasStyle(FontSystem::Style) // 0x1004DBC0
{
    mangled_assert("?hasStyle@FontSystem@@QAE_NW4Style@1@@Z");
    todo("implement");
    bool __result = _sub_1004DBC0(this, arg);
    return __result;
}

_extern float _sub_1004D170(FontSystem *const);
float FontSystem::getFontHeight() // 0x1004D170
{
    mangled_assert("?getFontHeight@FontSystem@@QAEMXZ");
    todo("implement");
    float __result = _sub_1004D170(this);
    return __result;
}

_extern void _sub_1004D980(FontSystem *const, wchar_t const *, float *, float *);
void FontSystem::getPrintSize(wchar_t const *, float *, float *) // 0x1004D980
{
    mangled_assert("?getPrintSize@FontSystem@@QAEXPB_WPAM1@Z");
    todo("implement");
    _sub_1004D980(this, arg, arg, arg);
}

_extern void _sub_1004D880(FontSystem *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, float *, float *);
void FontSystem::getPrintSize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, float *, float *) // 0x1004D880
{
    mangled_assert("?getPrintSize@FontSystem@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAM1@Z");
    todo("implement");
    _sub_1004D880(this, arg, arg, arg);
}

_extern void _sub_1004D7D0(FontSystem *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, float *, float *);
void FontSystem::getPrintSize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, float *, float *) // 0x1004D7D0
{
    mangled_assert("?getPrintSize@FontSystem@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAM1@Z");
    todo("implement");
    _sub_1004D7D0(this, arg, arg, arg);
}

_extern void _sub_1004D8D0(FontSystem *const, char const *, float *, float *);
void FontSystem::getPrintSize(char const *, float *, float *) // 0x1004D8D0
{
    mangled_assert("?getPrintSize@FontSystem@@QAEXPBDPAM1@Z");
    todo("implement");
    _sub_1004D8D0(this, arg, arg, arg);
}

_extern void _sub_1004D5A0(FontSystem *const, wchar_t const *, float *, float *);
void FontSystem::getPrintFancySize(wchar_t const *, float *, float *) // 0x1004D5A0
{
    mangled_assert("?getPrintFancySize@FontSystem@@QAEXPB_WPAM1@Z");
    todo("implement");
    _sub_1004D5A0(this, arg, arg, arg);
}

_extern void _sub_1004D4A0(FontSystem *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, float *, float *);
void FontSystem::getPrintFancySize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, float *, float *) // 0x1004D4A0
{
    mangled_assert("?getPrintFancySize@FontSystem@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAM1@Z");
    todo("implement");
    _sub_1004D4A0(this, arg, arg, arg);
}

_extern void _sub_1004D3F0(FontSystem *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, float *, float *);
void FontSystem::getPrintFancySize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, float *, float *) // 0x1004D3F0
{
    mangled_assert("?getPrintFancySize@FontSystem@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAM1@Z");
    todo("implement");
    _sub_1004D3F0(this, arg, arg, arg);
}

_extern void _sub_1004D4F0(FontSystem *const, char const *, float *, float *);
void FontSystem::getPrintFancySize(char const *, float *, float *) // 0x1004D4F0
{
    mangled_assert("?getPrintFancySize@FontSystem@@QAEXPBDPAM1@Z");
    todo("implement");
    _sub_1004D4F0(this, arg, arg, arg);
}

_extern void _sub_1004DB70(FontSystem *const, wchar_t const *, __int32, float *, float *);
void FontSystem::getSubStringPrintSize(wchar_t const *, __int32, float *, float *) // 0x1004DB70
{
    mangled_assert("?getSubStringPrintSize@FontSystem@@QAEXPB_WHPAM1@Z");
    todo("implement");
    _sub_1004DB70(this, arg, arg, arg, arg);
}

_extern void _sub_1004DA80(FontSystem *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, __int32, float *, float *);
void FontSystem::getSubStringPrintSize(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, __int32, float *, float *) // 0x1004DA80
{
    mangled_assert("?getSubStringPrintSize@FontSystem@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@HPAM1@Z");
    todo("implement");
    _sub_1004DA80(this, arg, arg, arg, arg);
}

_extern void _sub_1004D9E0(FontSystem *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32, float *, float *);
void FontSystem::getSubStringPrintSize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32, float *, float *) // 0x1004D9E0
{
    mangled_assert("?getSubStringPrintSize@FontSystem@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HPAM1@Z");
    todo("implement");
    _sub_1004D9E0(this, arg, arg, arg, arg);
}

_extern void _sub_1004DAD0(FontSystem *const, char const *, __int32, float *, float *);
void FontSystem::getSubStringPrintSize(char const *, __int32, float *, float *) // 0x1004DAD0
{
    mangled_assert("?getSubStringPrintSize@FontSystem@@QAEXPBDHPAM1@Z");
    todo("implement");
    _sub_1004DAD0(this, arg, arg, arg, arg);
}

_extern void _sub_1004F940(FontSystem *const, wchar_t const *, float, wchar_t *, unsigned __int32);
void FontSystem::wrapStringFancy(wchar_t const *, float, wchar_t *, unsigned __int32) // 0x1004F940
{
    mangled_assert("?wrapStringFancy@FontSystem@@QAEXPB_WMPA_WI@Z");
    todo("implement");
    _sub_1004F940(this, arg, arg, arg, arg);
}

_extern void _sub_1004D220(FontSystem *const, wchar_t const *, __int32, float *);
void FontSystem::getPrintCharOffset(wchar_t const *, __int32, float *) // 0x1004D220
{
    mangled_assert("?getPrintCharOffset@FontSystem@@QAEXPB_WHPAM@Z");
    todo("implement");
    _sub_1004D220(this, arg, arg, arg);
}

_extern void _sub_1004D290(FontSystem *const, wchar_t const *, __int32, float *, float *);
void FontSystem::getPrintFancyCharOffset(wchar_t const *, __int32, float *, float *) // 0x1004D290
{
    mangled_assert("?getPrintFancyCharOffset@FontSystem@@QAEXPB_WHPAM1@Z");
    todo("implement");
    _sub_1004D290(this, arg, arg, arg, arg);
}

_extern void _sub_1004F030(FontSystem *const);
void FontSystem::resetStatCount() // 0x1004F030
{
    mangled_assert("?resetStatCount@FontSystem@@QAEXXZ");
    todo("implement");
    _sub_1004F030(this);
}

_extern void _sub_1004D9D0(FontSystem *const, __int32 &);
void FontSystem::getStatCount(__int32 &) // 0x1004D9D0
{
    mangled_assert("?getStatCount@FontSystem@@QAEXAAH@Z");
    todo("implement");
    _sub_1004D9D0(this, arg);
}

_extern void _sub_1004E4A0(FontSystem *const, float, float, wchar_t const *);
void FontSystem::print(float, float, wchar_t const *) // 0x1004E4A0
{
    mangled_assert("?print@FontSystem@@QAEXMMPB_W@Z");
    todo("implement");
    _sub_1004E4A0(this, arg, arg, arg);
}

_extern void _sub_1004E3E0(FontSystem *const, float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
void FontSystem::print(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x1004E3E0
{
    mangled_assert("?print@FontSystem@@QAEXMMABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_1004E3E0(this, arg, arg, arg);
}

_extern void _sub_1004C940(FontSystem *const, unsigned __int32, float, float, vector4 const &, wchar_t const *);
void FontSystem::compile(unsigned __int32, float, float, vector4 const &, wchar_t const *) // 0x1004C940
{
    mangled_assert("?compile@FontSystem@@QAEXIMMABVvector4@@PB_W@Z");
    todo("implement");
    _sub_1004C940(this, arg, arg, arg, arg, arg);
}

_extern void _sub_1004C860(FontSystem *const, unsigned __int32, float, float, vector4 const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
void FontSystem::compile(unsigned __int32, float, float, vector4 const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x1004C860
{
    mangled_assert("?compile@FontSystem@@QAEXIMMABVvector4@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_1004C860(this, arg, arg, arg, arg, arg);
}

_extern void _sub_1004C8A0(FontSystem *const, unsigned __int32, float, float, vector4 const &, char const *);
void FontSystem::compile(unsigned __int32, float, float, vector4 const &, char const *) // 0x1004C8A0
{
    mangled_assert("?compile@FontSystem@@QAEXIMMABVvector4@@PBD@Z");
    todo("implement");
    _sub_1004C8A0(this, arg, arg, arg, arg, arg);
}

_extern void _sub_1004C820(FontSystem *const, unsigned __int32, float, float, vector4 const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void FontSystem::compile(unsigned __int32, float, float, vector4 const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x1004C820
{
    mangled_assert("?compile@FontSystem@@QAEXIMMABVvector4@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_1004C820(this, arg, arg, arg, arg, arg);
}

_extern void _sub_1004CA30(FontSystem *const, unsigned __int32, float, float, vector4 const &, wchar_t const *);
void FontSystem::compileFancy(unsigned __int32, float, float, vector4 const &, wchar_t const *) // 0x1004CA30
{
    mangled_assert("?compileFancy@FontSystem@@QAEXIMMABVvector4@@PB_W@Z");
    todo("implement");
    _sub_1004CA30(this, arg, arg, arg, arg, arg);
}

_extern void _sub_1004DF30(wchar_t *, unsigned __int32, wchar_t const *);
void FontSystem::makeNotFancy(wchar_t *notFancy, unsigned __int32 length, wchar_t const *fancy) // 0x1004DF30
{
    mangled_assert("?makeNotFancy@FontSystem@@SGXPA_WIPB_W@Z");
    todo("implement");
    _sub_1004DF30(notFancy, length, fancy);
}

_extern void _sub_1004E300(FontSystem *const, unsigned __int32);
void FontSystem::print(unsigned __int32) // 0x1004E300
{
    mangled_assert("?print@FontSystem@@QAEXI@Z");
    todo("implement");
    _sub_1004E300(this, arg);
}

_extern void _sub_1004E350(FontSystem *const, float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void FontSystem::print(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x1004E350
{
    mangled_assert("?print@FontSystem@@QAEXMMABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_1004E350(this, arg, arg, arg);
}

_extern void _sub_1004E410(FontSystem *const, float, float, char const *);
void FontSystem::print(float, float, char const *) // 0x1004E410
{
    mangled_assert("?print@FontSystem@@QAEXMMPBD@Z");
    todo("implement");
    _sub_1004E410(this, arg, arg, arg);
}

_extern void _sub_1004EBB0(FontSystem *const, float, float, wchar_t const *, __int32);
void FontSystem::printSubString(float, float, wchar_t const *, __int32) // 0x1004EBB0
{
    mangled_assert("?printSubString@FontSystem@@QAEXMMPB_WH@Z");
    todo("implement");
    _sub_1004EBB0(this, arg, arg, arg, arg);
}

_extern void _sub_1004EAF0(FontSystem *const, float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, __int32);
void FontSystem::printSubString(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, __int32) // 0x1004EAF0
{
    mangled_assert("?printSubString@FontSystem@@QAEXMMABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@H@Z");
    todo("implement");
    _sub_1004EAF0(this, arg, arg, arg, arg);
}

_extern void _sub_1004EA60(FontSystem *const, float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32);
void FontSystem::printSubString(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32) // 0x1004EA60
{
    mangled_assert("?printSubString@FontSystem@@QAEXMMABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z");
    todo("implement");
    _sub_1004EA60(this, arg, arg, arg, arg);
}

_extern void _sub_1004EB20(FontSystem *const, float, float, char const *, __int32);
void FontSystem::printSubString(float, float, char const *, __int32) // 0x1004EB20
{
    mangled_assert("?printSubString@FontSystem@@QAEXMMPBDH@Z");
    todo("implement");
    _sub_1004EB20(this, arg, arg, arg, arg);
}

_extern __int32 _sub_1004E070(FontSystem *const, wchar_t const *, vector4 &);
__int32 FontSystem::parseColour(wchar_t const *, vector4 &) // 0x1004E070
{
    mangled_assert("?parseColour@FontSystem@@AAEHPB_WAAVvector4@@@Z");
    todo("implement");
    __int32 __result = _sub_1004E070(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1004E1B0(FontSystem *const, wchar_t const *, Typeface **);
__int32 FontSystem::parseStyle(wchar_t const *, Typeface **) // 0x1004E1B0
{
    mangled_assert("?parseStyle@FontSystem@@AAEHPB_WPAPAVTypeface@@@Z");
    todo("implement");
    __int32 __result = _sub_1004E1B0(this, arg, arg);
    return __result;
}

_extern void _sub_1004E740(FontSystem *const, float, float, wchar_t const *);
void FontSystem::printFancy(float, float, wchar_t const *) // 0x1004E740
{
    mangled_assert("?printFancy@FontSystem@@QAEXMMPB_W@Z");
    todo("implement");
    _sub_1004E740(this, arg, arg, arg);
}

_extern void _sub_1004E680(FontSystem *const, float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
void FontSystem::printFancy(float, float, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x1004E680
{
    mangled_assert("?printFancy@FontSystem@@QAEXMMABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_1004E680(this, arg, arg, arg);
}

_extern void _sub_1004E5F0(FontSystem *const, float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void FontSystem::printFancy(float, float, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x1004E5F0
{
    mangled_assert("?printFancy@FontSystem@@QAEXMMABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_1004E5F0(this, arg, arg, arg);
}

_extern void _sub_1004E6B0(FontSystem *const, float, float, char const *);
void FontSystem::printFancy(float, float, char const *) // 0x1004E6B0
{
    mangled_assert("?printFancy@FontSystem@@QAEXMMPBD@Z");
    todo("implement");
    _sub_1004E6B0(this, arg, arg, arg);
}

_extern unsigned __int32 _sub_1004DC20(FontSystem *const);
unsigned __int32 FontSystem::labelCreate() // 0x1004DC20
{
    mangled_assert("?labelCreate@FontSystem@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_1004DC20(this);
    return __result;
}

_extern void _sub_1004DC80(FontSystem *const, unsigned __int32);
void FontSystem::labelDestroy(unsigned __int32) // 0x1004DC80
{
    mangled_assert("?labelDestroy@FontSystem@@QAEXI@Z");
    todo("implement");
    _sub_1004DC80(this, arg);
}

_extern void _sub_1004CD50(FontSystem *const, FontSystem::Label &, float, float, wchar_t const *, __int32);
void FontSystem::compileText(FontSystem::Label &, float, float, wchar_t const *, __int32) // 0x1004CD50
{
    mangled_assert("?compileText@FontSystem@@AAEXAAULabel@1@MMPB_WH@Z");
    todo("implement");
    _sub_1004CD50(this, arg, arg, arg, arg, arg);
}

/* ---------- private code */

_extern void _sub_1004F8A0(unsigned __int32, float &, float &, float &);
_static void udwordToRGB(unsigned __int32 val, float &R, float &G, float &B) // 0x1004F8A0
{
    mangled_assert("udwordToRGB");
    todo("implement");
    _sub_1004F8A0(val, R, G, B);
}
#endif

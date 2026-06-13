#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Render\gl\lotypes.h>
#include <Render\objects\compiledtext.h>
#include <Render\gl\r_types.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\RenderUIPrim.h>
#include <xutility>
#include <UserInterface\uiprimitives.h>
#include <utility>
#include <UserInterface\NewText.h>
#include <iosfwd>
#include <vector>
#include <Render\objects\fontsystem.h>
#include <xmemory>
#include <Render\objects\bitmapfont.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <map>
#include <xtree>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <cassert>
#include <assert.h>
#include <util\types.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <Render\objects\cliprect.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <localizer\localizer.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <wchar.h>
#include <platform\osdef.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_67E4B9(UI::NewText *const, wchar_t const *);
UI::NewText::NewText(wchar_t const *) // 0x67E4B9
{
    mangled_assert("??0NewText@UI@@QAE@PB_W@Z");
    todo("implement");
    _sub_67E4B9(this, arg);
}

_extern _sub_67E417(UI::NewText *const, UI::NewText const &);
UI::NewText::NewText(UI::NewText const &) // 0x67E417
{
    mangled_assert("??0NewText@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_67E417(this, arg);
}

_extern _sub_67E326(UI::NewText *const, LuaConfig &);
UI::NewText::NewText(LuaConfig &) // 0x67E326
{
    mangled_assert("??0NewText@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_67E326(this, arg);
}

_extern void _sub_67E5B2(UI::NewText *const);
UI::NewText::~NewText() // 0x67E5B2
{
    mangled_assert("??1NewText@UI@@QAE@XZ");
    todo("implement");
    _sub_67E5B2(this);
}

_extern UI::NewText const &_sub_67E623(UI::NewText *const, UI::NewText const &);
UI::NewText const &UI::NewText::operator=(UI::NewText const &) // 0x67E623
{
    mangled_assert("??4NewText@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::NewText const & __result = _sub_67E623(this, arg);
    return __result;
}

_extern void _sub_67E994(UI::NewText *const, LuaConfig &);
void UI::NewText::Load(LuaConfig &) // 0x67E994
{
    mangled_assert("?Load@NewText@UI@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_67E994(this, arg);
}

_extern void _sub_67E7A3(UI::NewText *const, Rect_i const &, Rect_i const &);
void UI::NewText::Draw(Rect_i const &, Rect_i const &) // 0x67E7A3
{
    mangled_assert("?Draw@NewText@UI@@QAEXABURect_i@@0@Z");
    todo("implement");
    _sub_67E7A3(this, arg, arg);
}

_extern void _sub_67EC12(UI::NewText *const, long);
void UI::NewText::SetWrapWidth(long) // 0x67EC12
{
    mangled_assert("?SetWrapWidth@NewText@UI@@QAEXJ@Z");
    todo("implement");
    _sub_67EC12(this, arg);
}

_extern void _sub_67E712(UI::NewText *const);
void UI::NewText::ClearWrap() // 0x67E712
{
    mangled_assert("?ClearWrap@NewText@UI@@QAEXXZ");
    todo("implement");
    _sub_67E712(this);
}

_extern void _sub_67EB8F(UI::NewText *const, wchar_t const *, bool);
void UI::NewText::SetText(wchar_t const *, bool) // 0x67EB8F
{
    mangled_assert("?SetText@NewText@UI@@QAEXPB_W_N@Z");
    todo("implement");
    _sub_67EB8F(this, arg, arg);
}

_extern wchar_t const *_sub_67E974(UI::NewText const *const);
wchar_t const *UI::NewText::GetWrappedText() const // 0x67E974
{
    mangled_assert("?GetWrappedText@NewText@UI@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_67E974(this);
    return __result;
}

_extern void _sub_67E8BE(UI::NewText *const, wchar_t const *, long &, long &);
void UI::NewText::GetStringSize(wchar_t const *, long &, long &) // 0x67E8BE
{
    mangled_assert("?GetStringSize@NewText@UI@@QAEXPB_WAAJ1@Z");
    todo("implement");
    _sub_67E8BE(this, arg, arg, arg);
}

_extern void _sub_67E87F(UI::NewText *const, long &, long &);
void UI::NewText::GetSize(long &, long &) // 0x67E87F
{
    mangled_assert("?GetSize@NewText@UI@@QAEXAAJ0@Z");
    todo("implement");
    _sub_67E87F(this, arg, arg);
}

_extern void _sub_67E92A(UI::NewText *const, Rect_i const &, long, long &, long &);
void UI::NewText::GetTextCharOffset(Rect_i const &, long, long &, long &) // 0x67E92A
{
    mangled_assert("?GetTextCharOffset@NewText@UI@@QAEXABURect_i@@JAAJ1@Z");
    todo("implement");
    _sub_67E92A(this, arg, arg, arg, arg);
}

_extern void _sub_67E72E(UI::NewText *const, wchar_t const *);
void UI::NewText::ConvertSubstringToNewline(wchar_t const *) // 0x67E72E
{
    mangled_assert("?ConvertSubstringToNewline@NewText@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_67E72E(this, arg);
}

/* ---------- private code */
#endif

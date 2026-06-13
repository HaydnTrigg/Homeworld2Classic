#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Render\gl\lotypes.h>
#include <Render\gl\r_types.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Render\objects\cliprect.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <localizer\localizer.h>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <Engine\task.h>
#include <UserInterface\NewButton.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <map>
#include <Engine\region.h>
#include <xtree>
#include <Engine\prim.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <cassert>
#include <assert.h>
#include <util\types.h>
#include <Render\objects\compiledtext.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <Mathlib\matrix3.h>
#include <assist\stlexsmallvector.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <UserInterface\NewUIScreenManager.h>
#include <assist\typemagic.h>
#include <stack>
#include <boost\cstdint.hpp>
#include <deque>
#include <debug\db.h>
#include <UserInterface\UISoundManager.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <platform\osdef.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_67D5CA(UI::NewButton *const, UI::InterfaceElement *, char const *, bool);
UI::NewButton::NewButton(UI::InterfaceElement *, char const *, bool) // 0x67D5CA
{
    mangled_assert("??0NewButton@UI@@QAE@PAVInterfaceElement@1@PBD_N@Z");
    todo("implement");
    _sub_67D5CA(this, arg, arg, arg);
}

_extern _sub_67D4AC(UI::NewButton *const, UI::NewButton const &);
UI::NewButton::NewButton(UI::NewButton const &) // 0x67D4AC
{
    mangled_assert("??0NewButton@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_67D4AC(this, arg);
}

_extern _sub_67D36E(UI::NewButton *const, LuaConfig &);
UI::NewButton::NewButton(LuaConfig &) // 0x67D36E
{
    mangled_assert("??0NewButton@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_67D36E(this, arg);
}

_extern void _sub_67D737(UI::NewButton *const);
UI::NewButton::~NewButton() // 0x67D737
{
    mangled_assert("??1NewButton@UI@@UAE@XZ");
    todo("implement");
    _sub_67D737(this);
}

_extern UI::NewButton const &_sub_67D800(UI::NewButton *const, UI::NewButton const &);
UI::NewButton const &UI::NewButton::operator=(UI::NewButton const &) // 0x67D800
{
    mangled_assert("??4NewButton@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::NewButton const & __result = _sub_67D800(this, arg);
    return __result;
}

_extern void _sub_67DCE6(UI::NewButton *const, LuaConfig &, bool);
void UI::NewButton::Load(LuaConfig &, bool) // 0x67DCE6
{
    mangled_assert("?Load@NewButton@UI@@IAEXAAVLuaConfig@@_N@Z");
    todo("implement");
    _sub_67DCE6(this, arg, arg);
}

_extern void _sub_67D9BD(UI::NewButton *const, Vector_2i const &, Rect_i const &);
void UI::NewButton::Draw2(Vector_2i const &, Rect_i const &) // 0x67D9BD
{
    mangled_assert("?Draw2@NewButton@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_67D9BD(this, arg, arg);
}

_extern void _sub_67E2DF(UI::NewButton *const, bool);
void UI::NewButton::SetPressed(bool) // 0x67E2DF
{
    mangled_assert("?SetPressed@NewButton@UI@@QAEX_N@Z");
    todo("implement");
    _sub_67E2DF(this, arg);
}

_extern void _sub_67E276(UI::NewButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::NewButton::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x67E276
{
    mangled_assert("?OnMousePressed@NewButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_67E276(this, arg, arg);
}

_extern void _sub_67E183(UI::NewButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::NewButton::OnMouseClicked(Vector_2i const &, UI::MouseButton const &) // 0x67E183
{
    mangled_assert("?OnMouseClicked@NewButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_67E183(this, arg, arg);
}

_extern void _sub_67E28A(UI::NewButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::NewButton::OnMouseReleased(Vector_2i const &, UI::MouseButton const &) // 0x67E28A
{
    mangled_assert("?OnMouseReleased@NewButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_67E28A(this, arg, arg);
}

_extern void _sub_67E1E8(UI::NewButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::NewButton::OnMouseEnter(Vector_2i const &, UI::MouseButton const &) // 0x67E1E8
{
    mangled_assert("?OnMouseEnter@NewButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_67E1E8(this, arg, arg);
}

_extern void _sub_67E1FA(UI::NewButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::NewButton::OnMouseExit(Vector_2i const &, UI::MouseButton const &) // 0x67E1FA
{
    mangled_assert("?OnMouseExit@NewButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_67E1FA(this, arg, arg);
}

_extern void _sub_67E17D(UI::NewButton *const, unsigned char, UI::KeyModifier const &);
void UI::NewButton::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x67E17D
{
    mangled_assert("?OnKeyPressed@NewButton@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_67E17D(this, arg, arg);
}

_extern void _sub_67E180(UI::NewButton *const, unsigned char, UI::KeyModifier const &);
void UI::NewButton::OnKeyReleased(unsigned char, UI::KeyModifier const &) // 0x67E180
{
    mangled_assert("?OnKeyReleased@NewButton@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_67E180(this, arg, arg);
}

_extern void _sub_67E294(UI::NewButton *const, unsigned __int32);
void UI::NewButton::OnUpdate(unsigned __int32) // 0x67E294
{
    mangled_assert("?OnUpdate@NewButton@UI@@MAEXI@Z");
    todo("implement");
    _sub_67E294(this, arg);
}

/* ---------- private code */
#endif

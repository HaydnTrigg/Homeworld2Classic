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
#include <util\colour.h>
#include <Render\objects\cliprect.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <UserInterface\TextButton.h>
#include <utility>
#include <UserInterface\NewButton.h>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <localizer\localizer.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\ListBoxItem.h>
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
#include <Render\objects\compiledtext.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\NewListBox.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
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

_extern _sub_682A25(UI::ListBoxItem *const, char const *);
UI::ListBoxItem::ListBoxItem(char const *) // 0x682A25
{
    mangled_assert("??0ListBoxItem@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_682A25(this, arg);
}

_extern _sub_6829E1(UI::ListBoxItem *const, UI::ListBoxItem const &);
UI::ListBoxItem::ListBoxItem(UI::ListBoxItem const &) // 0x6829E1
{
    mangled_assert("??0ListBoxItem@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_6829E1(this, arg);
}

_extern _sub_68298C(UI::ListBoxItem *const, LuaConfig &);
UI::ListBoxItem::ListBoxItem(LuaConfig &) // 0x68298C
{
    mangled_assert("??0ListBoxItem@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_68298C(this, arg);
}

_extern void _sub_682AF0(UI::ListBoxItem *const);
UI::ListBoxItem::~ListBoxItem() // 0x682AF0
{
    mangled_assert("??1ListBoxItem@UI@@UAE@XZ");
    todo("implement");
    _sub_682AF0(this);
}

_extern UI::ListBoxItem const &_sub_682B06(UI::ListBoxItem *const, UI::ListBoxItem const &);
UI::ListBoxItem const &UI::ListBoxItem::operator=(UI::ListBoxItem const &) // 0x682B06
{
    mangled_assert("??4ListBoxItem@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::ListBoxItem const & __result = _sub_682B06(this, arg);
    return __result;
}

_extern void _sub_682BB4(UI::ListBoxItem *const, LuaConfig &);
void UI::ListBoxItem::Load(LuaConfig &) // 0x682BB4
{
    mangled_assert("?Load@ListBoxItem@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_682BB4(this, arg);
}

_extern void _sub_682CC6(UI::ListBoxItem *const, Vector_2i const &, UI::MouseButton const &);
void UI::ListBoxItem::OnMouseReleased(Vector_2i const &, UI::MouseButton const &) // 0x682CC6
{
    mangled_assert("?OnMouseReleased@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_682CC6(this, arg, arg);
}

_extern void _sub_682CC1(UI::ListBoxItem *const, Vector_2i const &, UI::MouseButton const &);
void UI::ListBoxItem::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x682CC1
{
    mangled_assert("?OnMousePressed@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_682CC1(this, arg, arg);
}

_extern void _sub_682C8D(UI::ListBoxItem *const, Vector_2i const &, UI::MouseButton const &);
void UI::ListBoxItem::OnMouseEnter(Vector_2i const &, UI::MouseButton const &) // 0x682C8D
{
    mangled_assert("?OnMouseEnter@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_682C8D(this, arg, arg);
}

_extern void _sub_682CA7(UI::ListBoxItem *const, Vector_2i const &, UI::MouseButton const &);
void UI::ListBoxItem::OnMouseExit(Vector_2i const &, UI::MouseButton const &) // 0x682CA7
{
    mangled_assert("?OnMouseExit@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_682CA7(this, arg, arg);
}

_extern void _sub_682C53(UI::ListBoxItem *const, Vector_2i const &, UI::MouseButton const &);
void UI::ListBoxItem::OnMouseClicked(Vector_2i const &, UI::MouseButton const &) // 0x682C53
{
    mangled_assert("?OnMouseClicked@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_682C53(this, arg, arg);
}

_extern void _sub_682C49(UI::ListBoxItem *const, unsigned char, UI::KeyModifier const &);
void UI::ListBoxItem::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x682C49
{
    mangled_assert("?OnKeyPressed@ListBoxItem@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_682C49(this, arg, arg);
}

_extern void _sub_682C4E(UI::ListBoxItem *const, unsigned char, UI::KeyModifier const &);
void UI::ListBoxItem::OnKeyReleased(unsigned char, UI::KeyModifier const &) // 0x682C4E
{
    mangled_assert("?OnKeyReleased@ListBoxItem@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
    _sub_682C4E(this, arg, arg);
}

_extern void _sub_682D0E(UI::ListBoxItem *const, bool);
void UI::ListBoxItem::SetSelected(bool) // 0x682D0E
{
    mangled_assert("?SetSelected@ListBoxItem@UI@@QAEX_N@Z");
    todo("implement");
    _sub_682D0E(this, arg);
}

_extern _sub_682AD8(UI::TextListBoxItem *const, char const *, wchar_t const *);
UI::TextListBoxItem::TextListBoxItem(char const *, wchar_t const *) // 0x682AD8
{
    mangled_assert("??0TextListBoxItem@UI@@QAE@PBDPB_W@Z");
    todo("implement");
    _sub_682AD8(this, arg, arg);
}

_extern _sub_682A98(UI::TextListBoxItem *const, UI::TextListBoxItem const &);
UI::TextListBoxItem::TextListBoxItem(UI::TextListBoxItem const &) // 0x682A98
{
    mangled_assert("??0TextListBoxItem@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_682A98(this, arg);
}

_extern _sub_682A58(UI::TextListBoxItem *const, LuaConfig &);
UI::TextListBoxItem::TextListBoxItem(LuaConfig &) // 0x682A58
{
    mangled_assert("??0TextListBoxItem@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_682A58(this, arg);
}

_extern UI::TextListBoxItem const &_sub_682B4B(UI::TextListBoxItem *const, UI::TextListBoxItem const &);
UI::TextListBoxItem const &UI::TextListBoxItem::operator=(UI::TextListBoxItem const &) // 0x682B4B
{
    mangled_assert("??4TextListBoxItem@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::TextListBoxItem const & __result = _sub_682B4B(this, arg);
    return __result;
}

_extern void _sub_682C10(UI::TextListBoxItem *const, LuaConfig &);
void UI::TextListBoxItem::Load(LuaConfig &) // 0x682C10
{
    mangled_assert("?Load@TextListBoxItem@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_682C10(this, arg);
}

_extern void _sub_682AFB(UI::TextListBoxItem *const);
UI::TextListBoxItem::~TextListBoxItem() // 0x682AFB
{
    mangled_assert("??1TextListBoxItem@UI@@UAE@XZ");
    todo("implement");
    _sub_682AFB(this);
}

_extern void _sub_682BA1(UI::TextListBoxItem *const, Vector_2i const &, Rect_i const &);
void UI::TextListBoxItem::Draw2(Vector_2i const &, Rect_i const &) // 0x682BA1
{
    mangled_assert("?Draw2@TextListBoxItem@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_682BA1(this, arg, arg);
}

_extern UI::NewText &_sub_682BAD(UI::TextListBoxItem *const);
UI::NewText &UI::TextListBoxItem::GetTextInfo() // 0x682BAD
{
    mangled_assert("?GetTextInfo@TextListBoxItem@UI@@QAEAAVNewText@2@XZ");
    todo("implement");
    UI::NewText & __result = _sub_682BAD(this);
    return __result;
}

/* ---------- private code */
#endif

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

UI::ListBoxItem::ListBoxItem(char const *) // 0x682A25
{
    mangled_assert("??0ListBoxItem@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::ListBoxItem::ListBoxItem(UI::ListBoxItem const &) // 0x6829E1
{
    mangled_assert("??0ListBoxItem@UI@@QAE@ABV01@@Z");
    todo("implement");
}

UI::ListBoxItem::ListBoxItem(LuaConfig &) // 0x68298C
{
    mangled_assert("??0ListBoxItem@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::ListBoxItem::~ListBoxItem() // 0x682AF0
{
    mangled_assert("??1ListBoxItem@UI@@UAE@XZ");
    todo("implement");
}

UI::ListBoxItem const &UI::ListBoxItem::operator=(UI::ListBoxItem const &) // 0x682B06
{
    mangled_assert("??4ListBoxItem@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

void UI::ListBoxItem::Load(LuaConfig &) // 0x682BB4
{
    mangled_assert("?Load@ListBoxItem@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::ListBoxItem::OnMouseReleased(Vector_2i const &, UI::MouseButton const &) // 0x682CC6
{
    mangled_assert("?OnMouseReleased@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::ListBoxItem::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x682CC1
{
    mangled_assert("?OnMousePressed@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::ListBoxItem::OnMouseEnter(Vector_2i const &, UI::MouseButton const &) // 0x682C8D
{
    mangled_assert("?OnMouseEnter@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::ListBoxItem::OnMouseExit(Vector_2i const &, UI::MouseButton const &) // 0x682CA7
{
    mangled_assert("?OnMouseExit@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::ListBoxItem::OnMouseClicked(Vector_2i const &, UI::MouseButton const &) // 0x682C53
{
    mangled_assert("?OnMouseClicked@ListBoxItem@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::ListBoxItem::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x682C49
{
    mangled_assert("?OnKeyPressed@ListBoxItem@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

void UI::ListBoxItem::OnKeyReleased(unsigned char, UI::KeyModifier const &) // 0x682C4E
{
    mangled_assert("?OnKeyReleased@ListBoxItem@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

void UI::ListBoxItem::SetSelected(bool) // 0x682D0E
{
    mangled_assert("?SetSelected@ListBoxItem@UI@@QAEX_N@Z");
    todo("implement");
}

UI::TextListBoxItem::TextListBoxItem(char const *, wchar_t const *) // 0x682AD8
{
    mangled_assert("??0TextListBoxItem@UI@@QAE@PBDPB_W@Z");
    todo("implement");
}

UI::TextListBoxItem::TextListBoxItem(UI::TextListBoxItem const &) // 0x682A98
{
    mangled_assert("??0TextListBoxItem@UI@@QAE@ABV01@@Z");
    todo("implement");
}

UI::TextListBoxItem::TextListBoxItem(LuaConfig &) // 0x682A58
{
    mangled_assert("??0TextListBoxItem@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::TextListBoxItem const &UI::TextListBoxItem::operator=(UI::TextListBoxItem const &) // 0x682B4B
{
    mangled_assert("??4TextListBoxItem@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

void UI::TextListBoxItem::Load(LuaConfig &) // 0x682C10
{
    mangled_assert("?Load@TextListBoxItem@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

UI::TextListBoxItem::~TextListBoxItem() // 0x682AFB
{
    mangled_assert("??1TextListBoxItem@UI@@UAE@XZ");
    todo("implement");
}

void UI::TextListBoxItem::Draw2(Vector_2i const &, Rect_i const &) // 0x682BA1
{
    mangled_assert("?Draw2@TextListBoxItem@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

UI::NewText &UI::TextListBoxItem::GetTextInfo() // 0x682BAD
{
    mangled_assert("?GetTextInfo@TextListBoxItem@UI@@QAEAAVNewText@2@XZ");
    todo("implement");
}

/* ---------- private code */
#endif

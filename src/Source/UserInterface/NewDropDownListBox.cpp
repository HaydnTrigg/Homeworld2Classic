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
#include <Engine\KeyBindings.h>
#include <Render\gl\r_types.h>
#include <new>
#include <Engine\config.h>
#include <assist\stlexsmallvector.h>
#include <xstddef>
#include <UserInterface\UISoundManager.h>
#include <type_traits>
#include <util\colour.h>
#include <UserInterface\NewScrollBar.h>
#include <Mathlib\vector4.h>
#include <Render\objects\cliprect.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <UserInterface\ListBoxItem.h>
#include <utility>
#include <UserInterface\TextButton.h>
#include <iosfwd>
#include <vector>
#include <UserInterface\NewButton.h>
#include <xmemory>
#include <localizer\localizer.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\NewUIScreen.h>
#include <Engine\task.h>
#include <stack>
#include <UserInterface\NewDropDownListBox.h>
#include <deque>
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
#include <Render\objects\compiledtext.h>
#include <UserInterface\NewListBox.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <UserInterface\NewFrame.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <platform\osdef.h>
#include <Engine\region.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Engine\prim.h>
#include <UserInterface\Graphic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern UI::NewDropDownListBox *UI::NewDropDownListBox::ms_focusedDropDownListBox; // 0x84B9A0

/* ---------- private variables */

/* ---------- public code */

UI::NewDropDownListBox::NewDropDownListBox(UI::InterfaceElement *, char const *, UI::ComboBoxStyle *) // 0x682E90
{
    mangled_assert("??0NewDropDownListBox@UI@@QAE@PAVInterfaceElement@1@PBDPAVComboBoxStyle@1@@Z");
    todo("implement");
}

UI::NewDropDownListBox::NewDropDownListBox(UI::NewDropDownListBox const &) // 0x682E02
{
    mangled_assert("??0NewDropDownListBox@UI@@QAE@ABV01@@Z");
    todo("implement");
}

UI::NewDropDownListBox::NewDropDownListBox(LuaConfig &) // 0x682D74
{
    mangled_assert("??0NewDropDownListBox@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::NewDropDownListBox::~NewDropDownListBox() // 0x682F16
{
    mangled_assert("??1NewDropDownListBox@UI@@UAE@XZ");
    todo("implement");
}

UI::NewDropDownListBox const &UI::NewDropDownListBox::operator=(UI::NewDropDownListBox const &) // 0x682F72
{
    mangled_assert("??4NewDropDownListBox@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

void UI::NewDropDownListBox::Init() // 0x683160
{
    mangled_assert("?Init@NewDropDownListBox@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewDropDownListBox::Load(LuaConfig &) // 0x68329F
{
    mangled_assert("?Load@NewDropDownListBox@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::NewDropDownListBox::SelectItemWithCustomData2(unsigned __int32) // 0x68357A
{
    mangled_assert("?SelectItemWithCustomData2@NewDropDownListBox@UI@@QAEXI@Z");
    todo("implement");
}

void UI::NewDropDownListBox::SelectItemWithCustomData(unsigned __int32) // 0x6835A1
{
    mangled_assert("?SelectItemWithCustomData@NewDropDownListBox@UI@@QAEXI@Z");
    todo("implement");
}

void UI::NewDropDownListBox::SelectItem(__int32) // 0x683553
{
    mangled_assert("?SelectItem@NewDropDownListBox@UI@@QAEXH@Z");
    todo("implement");
}

bool UI::NewDropDownListBox::RemoveListBoxItem(UI::ListBoxItem *) // 0x683513
{
    mangled_assert("?RemoveListBoxItem@NewDropDownListBox@UI@@QAE_NPAVListBoxItem@2@@Z");
    todo("implement");
}

void UI::NewDropDownListBox::InsertListBoxItem(UI::ListBoxItem *, bool) // 0x683269
{
    mangled_assert("?InsertListBoxItem@NewDropDownListBox@UI@@QAEXPAVListBoxItem@2@_N@Z");
    todo("implement");
}

void UI::NewDropDownListBox::HideDropDownListBox() // 0x68312D
{
    mangled_assert("?HideDropDownListBox@NewDropDownListBox@UI@@QAEXXZ");
    todo("implement");
}

void UI::NewDropDownListBox::ShowDropDownListBox() // 0x6835C8
{
    mangled_assert("?ShowDropDownListBox@NewDropDownListBox@UI@@QAEXXZ");
    todo("implement");
}

void UI::NewDropDownListBox::EmptyListBox() // 0x68311B
{
    mangled_assert("?EmptyListBox@NewDropDownListBox@UI@@QAEXXZ");
    todo("implement");
}

void UI::NewDropDownListBox::ClearListBox() // 0x683001
{
    mangled_assert("?ClearListBox@NewDropDownListBox@UI@@QAEXXZ");
    todo("implement");
}

void UI::NewDropDownListBox::ResizeDropDownListBox(__int32) // 0x68353E
{
    mangled_assert("?ResizeDropDownListBox@NewDropDownListBox@UI@@QAEXH@Z");
    todo("implement");
}

void UI::NewDropDownListBox::OnResize(__int32, __int32) // 0x6834DC
{
    mangled_assert("?OnResize@NewDropDownListBox@UI@@MAEXHH@Z");
    todo("implement");
}

void UI::NewDropDownListBox::Draw2(Vector_2i const &, Rect_i const &) // 0x683086
{
    mangled_assert("?Draw2@NewDropDownListBox@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::NewDropDownListBox::OnMouseClicked(Vector_2i const &, UI::MouseButton const &) // 0x6834D4
{
    mangled_assert("?OnMouseClicked@NewDropDownListBox@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::NewDropDownListBox::OnEnable(bool) // 0x6834C3
{
    mangled_assert("?OnEnable@NewDropDownListBox@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::NewDropDownListBox::DropDownButtonClicked(UI::InterfaceElement *e) // 0x6830DF
{
    mangled_assert("?DropDownButtonClicked@NewDropDownListBox@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewDropDownListBox::DropDownItemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button) // 0x683109
{
    mangled_assert("?DropDownItemClicked@NewDropDownListBox@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

/* ---------- private code */
#endif

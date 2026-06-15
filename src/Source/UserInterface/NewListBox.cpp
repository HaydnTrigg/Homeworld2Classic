#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\objects.h>
#include <UserInterface\NewFrame.h>
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
#include <UserInterface\NewScrollBar.h>
#include <UserInterface\NewButton.h>
#include <Render\gl\lotypes.h>
#include <Render\gl\r_types.h>
#include <new>
#include <xstddef>
#include <Render\objects\compiledtext.h>
#include <type_traits>
#include <UserInterface\Line.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\TextButton.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewText.h>
#include <boost\detail\shared_count.hpp>
#include <Render\objects\fontsystem.h>
#include <math.h>
#include <Render\objects\bitmapfont.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\NewListBox.h>
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
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Render\objects\cliprect.h>
#include <localizer\localizer.h>
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

UI::NewListBox::NewListBox(UI::InterfaceElement *, char const *, UI::ListBoxStyle *) // 0x67C405
{
    mangled_assert("??0NewListBox@UI@@QAE@PAVInterfaceElement@1@PBDPAVListBoxStyle@1@@Z");
    todo("implement");
}

UI::NewListBox::NewListBox(UI::NewListBox const &) // 0x67C357
{
    mangled_assert("??0NewListBox@UI@@QAE@ABV01@@Z");
    todo("implement");
}

UI::NewListBox::NewListBox(LuaConfig &) // 0x67C2A2
{
    mangled_assert("??0NewListBox@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::NewListBox::~NewListBox() // 0x67C4B2
{
    mangled_assert("??1NewListBox@UI@@UAE@XZ");
    todo("implement");
}

UI::NewListBox const &UI::NewListBox::operator=(UI::NewListBox const &) // 0x67C4D9
{
    mangled_assert("??4NewListBox@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

void UI::NewListBox::SetScrollBarSpace(__int32) // 0x67D107
{
    mangled_assert("?SetScrollBarSpace@NewListBox@UI@@QAEXH@Z");
    todo("implement");
}

void UI::NewListBox::Load(LuaConfig &) // 0x67CA7E
{
    mangled_assert("?Load@NewListBox@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::NewListBox::Init() // 0x67C7B3
{
    mangled_assert("?Init@NewListBox@UI@@AAEXXZ");
    todo("implement");
}

UI::Size UI::NewListBox::GetItemSize() const // 0x67C6E5
{
    mangled_assert("?GetItemSize@NewListBox@UI@@QBE?AVSize@2@XZ");
    todo("implement");
}

void UI::NewListBox::UpdateListBox() // 0x67D197
{
    mangled_assert("?UpdateListBox@NewListBox@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewListBox::SetScrollBarVisible(bool) // 0x67D131
{
    mangled_assert("?SetScrollBarVisible@NewListBox@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::NewListBox::EmptyListBox() // 0x67C689
{
    mangled_assert("?EmptyListBox@NewListBox@UI@@QAEXXZ");
    todo("implement");
}

void UI::NewListBox::ClearListBox() // 0x67C628
{
    mangled_assert("?ClearListBox@NewListBox@UI@@QAEXXZ");
    todo("implement");
}

UI::ListBoxItem *UI::NewListBox::GetListBoxItemWithCustomData(unsigned __int32) // 0x67C75F
{
    mangled_assert("?GetListBoxItemWithCustomData@NewListBox@UI@@QAEPAVListBoxItem@2@I@Z");
    todo("implement");
}

bool UI::NewListBox::SelectItemWithCustomData2(unsigned __int32) // 0x67CFFB
{
    mangled_assert("?SelectItemWithCustomData2@NewListBox@UI@@QAE_NI@Z");
    todo("implement");
}

bool UI::NewListBox::SelectItemWithCustomData(unsigned __int32) // 0x67D046
{
    mangled_assert("?SelectItemWithCustomData@NewListBox@UI@@QAE_NI@Z");
    todo("implement");
}

void UI::NewListBox::SelectItem(__int32) // 0x67CF71
{
    mangled_assert("?SelectItem@NewListBox@UI@@QAEXH@Z");
    todo("implement");
}

bool UI::NewListBox::IsSelected(__int32) const // 0x67CA68
{
    mangled_assert("?IsSelected@NewListBox@UI@@QBE_NH@Z");
    todo("implement");
}

void UI::NewListBox::DeselectAll() // 0x67C65A
{
    mangled_assert("?DeselectAll@NewListBox@UI@@QAEXXZ");
    todo("implement");
}

void UI::NewListBox::InsertListBoxItem(UI::ListBoxItem *, bool) // 0x67C903
{
    mangled_assert("?InsertListBoxItem@NewListBox@UI@@QAEXPAVListBoxItem@2@_N@Z");
    todo("implement");
}

UI::ListBoxItem *UI::NewListBox::GetListBoxItem(__int32) const // 0x67C732
{
    mangled_assert("?GetListBoxItem@NewListBox@UI@@QBEPAVListBoxItem@2@H@Z");
    todo("implement");
}

void UI::NewListBox::SetContentsSize(UI::Size const &) // 0x67D0B6
{
    mangled_assert("?SetContentsSize@NewListBox@UI@@QAEXABVSize@2@@Z");
    todo("implement");
}

UI::Size UI::NewListBox::GetContentsSize() const // 0x67C6C3
{
    mangled_assert("?GetContentsSize@NewListBox@UI@@QBE?AVSize@2@XZ");
    todo("implement");
}

bool UI::NewListBox::RemoveListBoxItem(UI::ListBoxItem *) // 0x67CEE7
{
    mangled_assert("?RemoveListBoxItem@NewListBox@UI@@QAE_NPAVListBoxItem@2@@Z");
    todo("implement");
}

bool UI::NewListBox::RemoveListBoxItem(unsigned __int32) // 0x67CEC7
{
    mangled_assert("?RemoveListBoxItem@NewListBox@UI@@QAE_NI@Z");
    todo("implement");
}

void UI::NewListBox::UpdateItemsIndex() // 0x67D153
{
    mangled_assert("?UpdateItemsIndex@NewListBox@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewListBox::Draw2(Vector_2i const &, Rect_i const &) // 0x67C684
{
    mangled_assert("?Draw2@NewListBox@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::NewListBox::AddChildR(UI::InterfaceElement *) // 0x67C5E1
{
    mangled_assert("?AddChildR@NewListBox@UI@@UAEXPAVInterfaceElement@2@@Z");
    todo("implement");
}

UI::InterfaceElement *UI::NewListBox::RemoveChildR(UI::InterfaceElement *) // 0x67CEBC
{
    mangled_assert("?RemoveChildR@NewListBox@UI@@UAEPAVInterfaceElement@2@PAV32@@Z");
    todo("implement");
}

void UI::NewListBox::OnResize(__int32, __int32) // 0x67CE94
{
    mangled_assert("?OnResize@NewListBox@UI@@MAEXHH@Z");
    todo("implement");
}

void UI::NewListBox::OnScrollVert(UI::InterfaceElement *e, __int32 pos) // 0x67CE9C
{
    mangled_assert("?OnScrollVert@NewListBox@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::NewListBox::ChildResizeNotify() // 0x67C5EE
{
    mangled_assert("?ChildResizeNotify@NewListBox@UI@@UAEXXZ");
    todo("implement");
}

void UI::NewListBox::ChildMoveNotify() // 0x67C5ED
{
    mangled_assert("?ChildMoveNotify@NewListBox@UI@@UAEXXZ");
    todo("implement");
}

void UI::NewListBox::CalcAutoSize() // 0x67C5EC
{
    mangled_assert("?CalcAutoSize@NewListBox@UI@@MAEXXZ");
    todo("implement");
}

void UI::NewListBox::ScrollToSelectedItem() // 0x67CF3C
{
    mangled_assert("?ScrollToSelectedItem@NewListBox@UI@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif

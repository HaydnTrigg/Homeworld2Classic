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
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\ScrollView.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <cassert>
#include <assert.h>
#include <Engine\task.h>
#include <util\types.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureregistry.h>
#include <Engine\region.h>
#include <hash_map>
#include <Engine\prim.h>
#include <xhash>
#include <UserInterface\NewFrame.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <UserInterface\NewScrollBar.h>
#include <debug\db.h>
#include <UserInterface\NewButton.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <platform\osdef.h>
#include <UserInterface\NewUIScreenManager.h>
#include <stack>
#include <UserInterface\SharedGraphicFactory.h>
#include <deque>
#include <UserInterface\Graphic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::ScrollView::ScrollView(UI::InterfaceElement *, char const *) // 0x68BD0D
{
    mangled_assert("??0ScrollView@UI@@QAE@PAVInterfaceElement@1@PBD@Z");
    todo("implement");
}

UI::ScrollView::ScrollView(LuaConfig &) // 0x68BAF8
{
    mangled_assert("??0ScrollView@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::ScrollView::ScrollView(UI::ScrollView const &) // 0x68BBF3
{
    mangled_assert("??0ScrollView@UI@@QAE@ABV01@@Z");
    todo("implement");
}

UI::ScrollView::~ScrollView() // 0x68BE27
{
    mangled_assert("??1ScrollView@UI@@UAE@XZ");
    todo("implement");
}

void UI::ScrollView::Init() // 0x68BFBD
{
    mangled_assert("?Init@ScrollView@UI@@AAEXXZ");
    todo("implement");
}

UI::ScrollView const &UI::ScrollView::operator=(UI::ScrollView const &) // 0x68BE32
{
    mangled_assert("??4ScrollView@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

void UI::ScrollView::Load(LuaConfig &) // 0x68C0BB
{
    mangled_assert("?Load@ScrollView@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::ScrollView::ClearContents() // 0x68BEEB
{
    mangled_assert("?ClearContents@ScrollView@UI@@QAEXXZ");
    todo("implement");
}

void UI::ScrollView::Draw2(Vector_2i const &, Rect_i const &) // 0x68BEF6
{
    mangled_assert("?Draw2@ScrollView@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::ScrollView::SetContentsAutosize(bool) // 0x68C341
{
    mangled_assert("?SetContentsAutosize@ScrollView@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::ScrollView::EnableHorizontalScrollbar(bool) // 0x68BF07
{
    mangled_assert("?EnableHorizontalScrollbar@ScrollView@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::ScrollView::EnableVerticalScrollbar(bool) // 0x68BF2E
{
    mangled_assert("?EnableVerticalScrollbar@ScrollView@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::ScrollView::SetContentsRect(Rect_i const &) // 0x68C34C
{
    mangled_assert("?SetContentsRect@ScrollView@UI@@QAEXABURect_i@@@Z");
    todo("implement");
}

Rect_i UI::ScrollView::GetViewRect() const // 0x68BF73
{
    mangled_assert("?GetViewRect@ScrollView@UI@@QBE?AURect_i@@XZ");
    todo("implement");
}

void UI::ScrollView::UpdateContents() // 0x68C3D7
{
    mangled_assert("?UpdateContents@ScrollView@UI@@AAEXXZ");
    todo("implement");
}

Rect_i UI::ScrollView::GetContentsRect() const // 0x68BF55
{
    mangled_assert("?GetContentsRect@ScrollView@UI@@QBE?AURect_i@@XZ");
    todo("implement");
}

void UI::ScrollView::UpdateScrollBars() // 0x68C460
{
    mangled_assert("?UpdateScrollBars@ScrollView@UI@@AAEXXZ");
    todo("implement");
}

void UI::ScrollView::SetStepSize(__int32) // 0x68C3B8
{
    mangled_assert("?SetStepSize@ScrollView@UI@@QAEXH@Z");
    todo("implement");
}

void UI::ScrollView::SetPageSize(__int32) // 0x68C38C
{
    mangled_assert("?SetPageSize@ScrollView@UI@@QAEXH@Z");
    todo("implement");
}

void UI::ScrollView::AddChildR(UI::InterfaceElement *) // 0x68BEE0
{
    mangled_assert("?AddChildR@ScrollView@UI@@UAEXPAVInterfaceElement@2@@Z");
    todo("implement");
}

UI::InterfaceElement *UI::ScrollView::RemoveChildR(UI::InterfaceElement *) // 0x68C336
{
    mangled_assert("?RemoveChildR@ScrollView@UI@@UAEPAVInterfaceElement@2@PAV32@@Z");
    todo("implement");
}

void UI::ScrollView::OnResize(__int32, __int32) // 0x68C2F6
{
    mangled_assert("?OnResize@ScrollView@UI@@MAEXHH@Z");
    todo("implement");
}

void UI::ScrollView::OnScrollHorz(UI::InterfaceElement *e, __int32 pos) // 0x68C2FE
{
    mangled_assert("?OnScrollHorz@ScrollView@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::ScrollView::OnScrollVert(UI::InterfaceElement *e, __int32 pos) // 0x68C31A
{
    mangled_assert("?OnScrollVert@ScrollView@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

/* ---------- private code */
#endif

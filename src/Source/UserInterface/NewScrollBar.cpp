#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <Render\objects\compiledtext.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\NewTextLabel.h>
#include <Render\gl\r_types.h>
#include <UserInterface\uiprimitives.h>
#include <new>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\NewText.h>
#include <xstddef>
#include <Engine\task.h>
#include <Render\objects\fontsystem.h>
#include <stack>
#include <Render\objects\bitmapfont.h>
#include <type_traits>
#include <deque>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <UserInterface\NewButton.h>
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
#include <UserInterface\NewScrollBar.h>
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
#include <UserInterface\UISoundManager.h>
#include <assert.h>
#include <util\types.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <Render\objects\cliprect.h>
#include <localizer\localizer.h>
#include <UserInterface\NewFrame.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Engine\region.h>
#include <Engine\prim.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <swprintf.inl>
#include <platform\osdef.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <assist\stlexsmallvector.h>
#include <UserInterface\Graphic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::NewScrollBar::NewScrollBar(UI::InterfaceElement *, char const *) // 0x681245
{
    mangled_assert("??0NewScrollBar@UI@@QAE@PAVInterfaceElement@1@PBD@Z");
    todo("implement");
}

UI::NewScrollBar::NewScrollBar(LuaConfig &) // 0x681119
{
    mangled_assert("??0NewScrollBar@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::NewScrollBar::NewScrollBar(UI::NewScrollBar const &) // 0x6811AF
{
    mangled_assert("??0NewScrollBar@UI@@QAE@ABV01@@Z");
    todo("implement");
}

void UI::NewScrollBar::Init() // 0x6818CF
{
    mangled_assert("?Init@NewScrollBar@UI@@AAEXXZ");
    todo("implement");
}

UI::NewScrollBar::~NewScrollBar() // 0x6813BC
{
    mangled_assert("??1NewScrollBar@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::ScrollBarTrackButton::~ScrollBarTrackButton() // 0x6814A9
{
    mangled_assert("??1ScrollBarTrackButton@UI@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::NewScrollBar::Load(LuaConfig &) // 0x681AD6
{
    mangled_assert("?Load@NewScrollBar@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
}

UI::NewScrollBar const &UI::NewScrollBar::operator=(UI::NewScrollBar const &) // 0x6814AE
{
    mangled_assert("??4NewScrollBar@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
}

_inline UI::ScrollBarTrackButton &UI::ScrollBarTrackButton::operator=(UI::ScrollBarTrackButton const &) // 0x68165F
{
    mangled_assert("??4ScrollBarTrackButton@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

void UI::NewScrollBar::SetRange(__int32, __int32) // 0x6824BF
{
    mangled_assert("?SetRange@NewScrollBar@UI@@QAEXHH@Z");
    todo("implement");
}

void UI::NewScrollBar::GetRange(__int32 &, __int32 &) const // 0x681821
{
    mangled_assert("?GetRange@NewScrollBar@UI@@QBEXAAH0@Z");
    todo("implement");
}

void UI::NewScrollBar::SetOrientation(UI::ScrollBarOrientation) // 0x6823B6
{
    mangled_assert("?SetOrientation@NewScrollBar@UI@@QAEXW4ScrollBarOrientation@2@@Z");
    todo("implement");
}

__int32 UI::NewScrollBar::GetScrollPosition() const // 0x68188D
{
    mangled_assert("?GetScrollPosition@NewScrollBar@UI@@QBEHXZ");
    todo("implement");
}

float UI::NewScrollBar::GetScalarPosition() const // 0x68183C
{
    mangled_assert("?GetScalarPosition@NewScrollBar@UI@@QBEMXZ");
    todo("implement");
}

__int32 UI::NewScrollBar::GetScrollButtonWidth() const // 0x68187E
{
    mangled_assert("?GetScrollButtonWidth@NewScrollBar@UI@@QBEHXZ");
    todo("implement");
}

__int32 UI::NewScrollBar::GetScrollButtonHeight() const // 0x68186C
{
    mangled_assert("?GetScrollButtonHeight@NewScrollBar@UI@@QBEHXZ");
    todo("implement");
}

void UI::NewScrollBar::SetScalarScrollPosition(float) // 0x68250D
{
    mangled_assert("?SetScalarScrollPosition@NewScrollBar@UI@@QAEXM@Z");
    todo("implement");
}

void UI::NewScrollBar::SetScrollPosition(__int32) // 0x682602
{
    mangled_assert("?SetScrollPosition@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
}

void UI::NewScrollBar::StepUp(__int32) // 0x6826BA
{
    mangled_assert("?StepUp@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
}

void UI::NewScrollBar::StepDown(__int32) // 0x6826AB
{
    mangled_assert("?StepDown@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
}

void UI::NewScrollBar::PageUp(__int32) // 0x682350
{
    mangled_assert("?PageUp@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
}

void UI::NewScrollBar::PageDown(__int32) // 0x682341
{
    mangled_assert("?PageDown@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
}

void UI::NewScrollBar::SetScrollBarEnabled(bool) // 0x68253B
{
    mangled_assert("?SetScrollBarEnabled@NewScrollBar@UI@@QAEX_N@Z");
    todo("implement");
}

__int32 UI::NewScrollBar::GetTrackFrameSize() // 0x681894
{
    mangled_assert("?GetTrackFrameSize@NewScrollBar@UI@@AAEHXZ");
    todo("implement");
}

void UI::NewScrollBar::UpdateTrackButton() // 0x6827AC
{
    mangled_assert("?UpdateTrackButton@NewScrollBar@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewScrollBar::UpdateScrollPosition() // 0x6826F8
{
    mangled_assert("?UpdateScrollPosition@NewScrollBar@UI@@QAEXXZ");
    todo("implement");
}

__int32 UI::NewScrollBar::GetMinScrollBarSize() const // 0x6817E1
{
    mangled_assert("?GetMinScrollBarSize@NewScrollBar@UI@@QBEHXZ");
    todo("implement");
}

void UI::NewScrollBar::OnResize(__int32, __int32) // 0x682209
{
    mangled_assert("?OnResize@NewScrollBar@UI@@MAEXHH@Z");
    todo("implement");
}

void UI::NewScrollBar::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x6820F7
{
    mangled_assert("?OnMousePressed@NewScrollBar@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::NewScrollBar::Draw2(Vector_2i const &, Rect_i const &) // 0x6816D0
{
    mangled_assert("?Draw2@NewScrollBar@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::NewScrollBar::OnStepUpClicked(UI::InterfaceElement *e) // 0x68232D
{
    mangled_assert("?OnStepUpClicked@NewScrollBar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewScrollBar::OnStepDownClicked(UI::InterfaceElement *e) // 0x682319
{
    mangled_assert("?OnStepDownClicked@NewScrollBar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewScrollBar::SetScrollButtonPosition(Vector_2i) // 0x682569
{
    mangled_assert("?SetScrollButtonPosition@NewScrollBar@UI@@QAEXUVector_2i@@@Z");
    todo("implement");
}

void UI::NewScrollBar::NotifyTrackButtonReleased() // 0x682093
{
    mangled_assert("?NotifyTrackButtonReleased@NewScrollBar@UI@@QAEXXZ");
    todo("implement");
}

UI::ScrollBarTrackButton::ScrollBarTrackButton(UI::NewScrollBar *, char const *) // 0x681387
{
    mangled_assert("??0ScrollBarTrackButton@UI@@QAE@PAVNewScrollBar@1@PBD@Z");
    todo("implement");
}

UI::ScrollBarTrackButton::ScrollBarTrackButton(LuaConfig &) // 0x6812F4
{
    mangled_assert("??0ScrollBarTrackButton@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

_inline UI::ScrollBarTrackButton::ScrollBarTrackButton(UI::ScrollBarTrackButton const &) // 0x681348
{
    mangled_assert("??0ScrollBarTrackButton@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

__int32 UI::ScrollBarTrackButton::GetMin() const // 0x6817C9
{
    mangled_assert("?GetMin@ScrollBarTrackButton@UI@@IBEHXZ");
    todo("implement");
}

__int32 UI::ScrollBarTrackButton::GetMax() const // 0x68177F
{
    mangled_assert("?GetMax@ScrollBarTrackButton@UI@@IBEHXZ");
    todo("implement");
}

void UI::ScrollBarTrackButton::OnMouseMoved(Vector_2i const &, UI::MouseButton const &) // 0x6820A0
{
    mangled_assert("?OnMouseMoved@ScrollBarTrackButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::ScrollBarTrackButton::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x682193
{
    mangled_assert("?OnMousePressed@ScrollBarTrackButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::ScrollBarTrackButton::OnMouseReleased(Vector_2i const &, UI::MouseButton const &) // 0x6821CC
{
    mangled_assert("?OnMouseReleased@ScrollBarTrackButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
}

void UI::ScrollBarTrackButton::Draw2(Vector_2i const &, Rect_i const &) // 0x6816D5
{
    mangled_assert("?Draw2@ScrollBarTrackButton@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

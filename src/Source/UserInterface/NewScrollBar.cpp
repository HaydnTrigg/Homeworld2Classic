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

_extern _sub_681245(UI::NewScrollBar *const, UI::InterfaceElement *, char const *);
UI::NewScrollBar::NewScrollBar(UI::InterfaceElement *, char const *) // 0x681245
{
    mangled_assert("??0NewScrollBar@UI@@QAE@PAVInterfaceElement@1@PBD@Z");
    todo("implement");
    _sub_681245(this, arg, arg);
}

_extern _sub_681119(UI::NewScrollBar *const, LuaConfig &);
UI::NewScrollBar::NewScrollBar(LuaConfig &) // 0x681119
{
    mangled_assert("??0NewScrollBar@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_681119(this, arg);
}

_extern _sub_6811AF(UI::NewScrollBar *const, UI::NewScrollBar const &);
UI::NewScrollBar::NewScrollBar(UI::NewScrollBar const &) // 0x6811AF
{
    mangled_assert("??0NewScrollBar@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_6811AF(this, arg);
}

_extern void _sub_6818CF(UI::NewScrollBar *const);
void UI::NewScrollBar::Init() // 0x6818CF
{
    mangled_assert("?Init@NewScrollBar@UI@@AAEXXZ");
    todo("implement");
    _sub_6818CF(this);
}

_extern void _sub_6813BC(UI::NewScrollBar *const);
UI::NewScrollBar::~NewScrollBar() // 0x6813BC
{
    mangled_assert("??1NewScrollBar@UI@@UAE@XZ");
    todo("implement");
    _sub_6813BC(this);
}

_extern void _sub_6814A9(UI::ScrollBarTrackButton *const);
_inline UI::ScrollBarTrackButton::~ScrollBarTrackButton() // 0x6814A9
{
    mangled_assert("??1ScrollBarTrackButton@UI@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6814A9(this);
}

_extern void _sub_681AD6(UI::NewScrollBar *const, LuaConfig &);
void UI::NewScrollBar::Load(LuaConfig &) // 0x681AD6
{
    mangled_assert("?Load@NewScrollBar@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_681AD6(this, arg);
}

_extern UI::NewScrollBar const &_sub_6814AE(UI::NewScrollBar *const, UI::NewScrollBar const &);
UI::NewScrollBar const &UI::NewScrollBar::operator=(UI::NewScrollBar const &) // 0x6814AE
{
    mangled_assert("??4NewScrollBar@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::NewScrollBar const & __result = _sub_6814AE(this, arg);
    return __result;
}

_extern UI::ScrollBarTrackButton &_sub_68165F(UI::ScrollBarTrackButton *const, UI::ScrollBarTrackButton const &);
_inline UI::ScrollBarTrackButton &UI::ScrollBarTrackButton::operator=(UI::ScrollBarTrackButton const &) // 0x68165F
{
    mangled_assert("??4ScrollBarTrackButton@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    UI::ScrollBarTrackButton & __result = _sub_68165F(this, arg);
    return __result;
}

_extern void _sub_6824BF(UI::NewScrollBar *const, __int32, __int32);
void UI::NewScrollBar::SetRange(__int32, __int32) // 0x6824BF
{
    mangled_assert("?SetRange@NewScrollBar@UI@@QAEXHH@Z");
    todo("implement");
    _sub_6824BF(this, arg, arg);
}

_extern void _sub_681821(UI::NewScrollBar const *const, __int32 &, __int32 &);
void UI::NewScrollBar::GetRange(__int32 &, __int32 &) const // 0x681821
{
    mangled_assert("?GetRange@NewScrollBar@UI@@QBEXAAH0@Z");
    todo("implement");
    _sub_681821(this, arg, arg);
}

_extern void _sub_6823B6(UI::NewScrollBar *const, UI::ScrollBarOrientation);
void UI::NewScrollBar::SetOrientation(UI::ScrollBarOrientation) // 0x6823B6
{
    mangled_assert("?SetOrientation@NewScrollBar@UI@@QAEXW4ScrollBarOrientation@2@@Z");
    todo("implement");
    _sub_6823B6(this, arg);
}

_extern __int32 _sub_68188D(UI::NewScrollBar const *const);
__int32 UI::NewScrollBar::GetScrollPosition() const // 0x68188D
{
    mangled_assert("?GetScrollPosition@NewScrollBar@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_68188D(this);
    return __result;
}

_extern float _sub_68183C(UI::NewScrollBar const *const);
float UI::NewScrollBar::GetScalarPosition() const // 0x68183C
{
    mangled_assert("?GetScalarPosition@NewScrollBar@UI@@QBEMXZ");
    todo("implement");
    float __result = _sub_68183C(this);
    return __result;
}

_extern __int32 _sub_68187E(UI::NewScrollBar const *const);
__int32 UI::NewScrollBar::GetScrollButtonWidth() const // 0x68187E
{
    mangled_assert("?GetScrollButtonWidth@NewScrollBar@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_68187E(this);
    return __result;
}

_extern __int32 _sub_68186C(UI::NewScrollBar const *const);
__int32 UI::NewScrollBar::GetScrollButtonHeight() const // 0x68186C
{
    mangled_assert("?GetScrollButtonHeight@NewScrollBar@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_68186C(this);
    return __result;
}

_extern void _sub_68250D(UI::NewScrollBar *const, float);
void UI::NewScrollBar::SetScalarScrollPosition(float) // 0x68250D
{
    mangled_assert("?SetScalarScrollPosition@NewScrollBar@UI@@QAEXM@Z");
    todo("implement");
    _sub_68250D(this, arg);
}

_extern void _sub_682602(UI::NewScrollBar *const, __int32);
void UI::NewScrollBar::SetScrollPosition(__int32) // 0x682602
{
    mangled_assert("?SetScrollPosition@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
    _sub_682602(this, arg);
}

_extern void _sub_6826BA(UI::NewScrollBar *const, __int32);
void UI::NewScrollBar::StepUp(__int32) // 0x6826BA
{
    mangled_assert("?StepUp@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
    _sub_6826BA(this, arg);
}

_extern void _sub_6826AB(UI::NewScrollBar *const, __int32);
void UI::NewScrollBar::StepDown(__int32) // 0x6826AB
{
    mangled_assert("?StepDown@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
    _sub_6826AB(this, arg);
}

_extern void _sub_682350(UI::NewScrollBar *const, __int32);
void UI::NewScrollBar::PageUp(__int32) // 0x682350
{
    mangled_assert("?PageUp@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
    _sub_682350(this, arg);
}

_extern void _sub_682341(UI::NewScrollBar *const, __int32);
void UI::NewScrollBar::PageDown(__int32) // 0x682341
{
    mangled_assert("?PageDown@NewScrollBar@UI@@QAEXH@Z");
    todo("implement");
    _sub_682341(this, arg);
}

_extern void _sub_68253B(UI::NewScrollBar *const, bool);
void UI::NewScrollBar::SetScrollBarEnabled(bool) // 0x68253B
{
    mangled_assert("?SetScrollBarEnabled@NewScrollBar@UI@@QAEX_N@Z");
    todo("implement");
    _sub_68253B(this, arg);
}

_extern __int32 _sub_681894(UI::NewScrollBar *const);
__int32 UI::NewScrollBar::GetTrackFrameSize() // 0x681894
{
    mangled_assert("?GetTrackFrameSize@NewScrollBar@UI@@AAEHXZ");
    todo("implement");
    __int32 __result = _sub_681894(this);
    return __result;
}

_extern void _sub_6827AC(UI::NewScrollBar *const);
void UI::NewScrollBar::UpdateTrackButton() // 0x6827AC
{
    mangled_assert("?UpdateTrackButton@NewScrollBar@UI@@AAEXXZ");
    todo("implement");
    _sub_6827AC(this);
}

_extern void _sub_6826F8(UI::NewScrollBar *const);
void UI::NewScrollBar::UpdateScrollPosition() // 0x6826F8
{
    mangled_assert("?UpdateScrollPosition@NewScrollBar@UI@@QAEXXZ");
    todo("implement");
    _sub_6826F8(this);
}

_extern __int32 _sub_6817E1(UI::NewScrollBar const *const);
__int32 UI::NewScrollBar::GetMinScrollBarSize() const // 0x6817E1
{
    mangled_assert("?GetMinScrollBarSize@NewScrollBar@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_6817E1(this);
    return __result;
}

_extern void _sub_682209(UI::NewScrollBar *const, __int32, __int32);
void UI::NewScrollBar::OnResize(__int32, __int32) // 0x682209
{
    mangled_assert("?OnResize@NewScrollBar@UI@@MAEXHH@Z");
    todo("implement");
    _sub_682209(this, arg, arg);
}

_extern void _sub_6820F7(UI::NewScrollBar *const, Vector_2i const &, UI::MouseButton const &);
void UI::NewScrollBar::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x6820F7
{
    mangled_assert("?OnMousePressed@NewScrollBar@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_6820F7(this, arg, arg);
}

_extern void _sub_6816D0(UI::NewScrollBar *const, Vector_2i const &, Rect_i const &);
void UI::NewScrollBar::Draw2(Vector_2i const &, Rect_i const &) // 0x6816D0
{
    mangled_assert("?Draw2@NewScrollBar@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_6816D0(this, arg, arg);
}

_extern void _sub_68232D(UI::InterfaceElement *);
void UI::NewScrollBar::OnStepUpClicked(UI::InterfaceElement *e) // 0x68232D
{
    mangled_assert("?OnStepUpClicked@NewScrollBar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_68232D(e);
}

_extern void _sub_682319(UI::InterfaceElement *);
void UI::NewScrollBar::OnStepDownClicked(UI::InterfaceElement *e) // 0x682319
{
    mangled_assert("?OnStepDownClicked@NewScrollBar@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_682319(e);
}

_extern void _sub_682569(UI::NewScrollBar *const, Vector_2i);
void UI::NewScrollBar::SetScrollButtonPosition(Vector_2i) // 0x682569
{
    mangled_assert("?SetScrollButtonPosition@NewScrollBar@UI@@QAEXUVector_2i@@@Z");
    todo("implement");
    _sub_682569(this, arg);
}

_extern void _sub_682093(UI::NewScrollBar *const);
void UI::NewScrollBar::NotifyTrackButtonReleased() // 0x682093
{
    mangled_assert("?NotifyTrackButtonReleased@NewScrollBar@UI@@QAEXXZ");
    todo("implement");
    _sub_682093(this);
}

_extern _sub_681387(UI::ScrollBarTrackButton *const, UI::NewScrollBar *, char const *);
UI::ScrollBarTrackButton::ScrollBarTrackButton(UI::NewScrollBar *, char const *) // 0x681387
{
    mangled_assert("??0ScrollBarTrackButton@UI@@QAE@PAVNewScrollBar@1@PBD@Z");
    todo("implement");
    _sub_681387(this, arg, arg);
}

_extern _sub_6812F4(UI::ScrollBarTrackButton *const, LuaConfig &);
UI::ScrollBarTrackButton::ScrollBarTrackButton(LuaConfig &) // 0x6812F4
{
    mangled_assert("??0ScrollBarTrackButton@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_6812F4(this, arg);
}

_extern _sub_681348(UI::ScrollBarTrackButton *const, UI::ScrollBarTrackButton const &);
_inline UI::ScrollBarTrackButton::ScrollBarTrackButton(UI::ScrollBarTrackButton const &) // 0x681348
{
    mangled_assert("??0ScrollBarTrackButton@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_681348(this, arg);
}

_extern __int32 _sub_6817C9(UI::ScrollBarTrackButton const *const);
__int32 UI::ScrollBarTrackButton::GetMin() const // 0x6817C9
{
    mangled_assert("?GetMin@ScrollBarTrackButton@UI@@IBEHXZ");
    todo("implement");
    __int32 __result = _sub_6817C9(this);
    return __result;
}

_extern __int32 _sub_68177F(UI::ScrollBarTrackButton const *const);
__int32 UI::ScrollBarTrackButton::GetMax() const // 0x68177F
{
    mangled_assert("?GetMax@ScrollBarTrackButton@UI@@IBEHXZ");
    todo("implement");
    __int32 __result = _sub_68177F(this);
    return __result;
}

_extern void _sub_6820A0(UI::ScrollBarTrackButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::ScrollBarTrackButton::OnMouseMoved(Vector_2i const &, UI::MouseButton const &) // 0x6820A0
{
    mangled_assert("?OnMouseMoved@ScrollBarTrackButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_6820A0(this, arg, arg);
}

_extern void _sub_682193(UI::ScrollBarTrackButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::ScrollBarTrackButton::OnMousePressed(Vector_2i const &, UI::MouseButton const &) // 0x682193
{
    mangled_assert("?OnMousePressed@ScrollBarTrackButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_682193(this, arg, arg);
}

_extern void _sub_6821CC(UI::ScrollBarTrackButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::ScrollBarTrackButton::OnMouseReleased(Vector_2i const &, UI::MouseButton const &) // 0x6821CC
{
    mangled_assert("?OnMouseReleased@ScrollBarTrackButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_6821CC(this, arg, arg);
}

_extern void _sub_6816D5(UI::ScrollBarTrackButton *const, Vector_2i const &, Rect_i const &);
void UI::ScrollBarTrackButton::Draw2(Vector_2i const &, Rect_i const &) // 0x6816D5
{
    mangled_assert("?Draw2@ScrollBarTrackButton@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_6816D5(this, arg, arg);
}

/* ---------- private code */
#endif

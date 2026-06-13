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

_extern _sub_68BD0D(UI::ScrollView *const, UI::InterfaceElement *, char const *);
UI::ScrollView::ScrollView(UI::InterfaceElement *, char const *) // 0x68BD0D
{
    mangled_assert("??0ScrollView@UI@@QAE@PAVInterfaceElement@1@PBD@Z");
    todo("implement");
    _sub_68BD0D(this, arg, arg);
}

_extern _sub_68BAF8(UI::ScrollView *const, LuaConfig &);
UI::ScrollView::ScrollView(LuaConfig &) // 0x68BAF8
{
    mangled_assert("??0ScrollView@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_68BAF8(this, arg);
}

_extern _sub_68BBF3(UI::ScrollView *const, UI::ScrollView const &);
UI::ScrollView::ScrollView(UI::ScrollView const &) // 0x68BBF3
{
    mangled_assert("??0ScrollView@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_68BBF3(this, arg);
}

_extern void _sub_68BE27(UI::ScrollView *const);
UI::ScrollView::~ScrollView() // 0x68BE27
{
    mangled_assert("??1ScrollView@UI@@UAE@XZ");
    todo("implement");
    _sub_68BE27(this);
}

_extern void _sub_68BFBD(UI::ScrollView *const);
void UI::ScrollView::Init() // 0x68BFBD
{
    mangled_assert("?Init@ScrollView@UI@@AAEXXZ");
    todo("implement");
    _sub_68BFBD(this);
}

_extern UI::ScrollView const &_sub_68BE32(UI::ScrollView *const, UI::ScrollView const &);
UI::ScrollView const &UI::ScrollView::operator=(UI::ScrollView const &) // 0x68BE32
{
    mangled_assert("??4ScrollView@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::ScrollView const & __result = _sub_68BE32(this, arg);
    return __result;
}

_extern void _sub_68C0BB(UI::ScrollView *const, LuaConfig &);
void UI::ScrollView::Load(LuaConfig &) // 0x68C0BB
{
    mangled_assert("?Load@ScrollView@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_68C0BB(this, arg);
}

_extern void _sub_68BEEB(UI::ScrollView *const);
void UI::ScrollView::ClearContents() // 0x68BEEB
{
    mangled_assert("?ClearContents@ScrollView@UI@@QAEXXZ");
    todo("implement");
    _sub_68BEEB(this);
}

_extern void _sub_68BEF6(UI::ScrollView *const, Vector_2i const &, Rect_i const &);
void UI::ScrollView::Draw2(Vector_2i const &, Rect_i const &) // 0x68BEF6
{
    mangled_assert("?Draw2@ScrollView@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_68BEF6(this, arg, arg);
}

_extern void _sub_68C341(UI::ScrollView *const, bool);
void UI::ScrollView::SetContentsAutosize(bool) // 0x68C341
{
    mangled_assert("?SetContentsAutosize@ScrollView@UI@@QAEX_N@Z");
    todo("implement");
    _sub_68C341(this, arg);
}

_extern void _sub_68BF07(UI::ScrollView *const, bool);
void UI::ScrollView::EnableHorizontalScrollbar(bool) // 0x68BF07
{
    mangled_assert("?EnableHorizontalScrollbar@ScrollView@UI@@QAEX_N@Z");
    todo("implement");
    _sub_68BF07(this, arg);
}

_extern void _sub_68BF2E(UI::ScrollView *const, bool);
void UI::ScrollView::EnableVerticalScrollbar(bool) // 0x68BF2E
{
    mangled_assert("?EnableVerticalScrollbar@ScrollView@UI@@QAEX_N@Z");
    todo("implement");
    _sub_68BF2E(this, arg);
}

_extern void _sub_68C34C(UI::ScrollView *const, Rect_i const &);
void UI::ScrollView::SetContentsRect(Rect_i const &) // 0x68C34C
{
    mangled_assert("?SetContentsRect@ScrollView@UI@@QAEXABURect_i@@@Z");
    todo("implement");
    _sub_68C34C(this, arg);
}

_extern Rect_i _sub_68BF73(UI::ScrollView const *const);
Rect_i UI::ScrollView::GetViewRect() const // 0x68BF73
{
    mangled_assert("?GetViewRect@ScrollView@UI@@QBE?AURect_i@@XZ");
    todo("implement");
    Rect_i __result = _sub_68BF73(this);
    return __result;
}

_extern void _sub_68C3D7(UI::ScrollView *const);
void UI::ScrollView::UpdateContents() // 0x68C3D7
{
    mangled_assert("?UpdateContents@ScrollView@UI@@AAEXXZ");
    todo("implement");
    _sub_68C3D7(this);
}

_extern Rect_i _sub_68BF55(UI::ScrollView const *const);
Rect_i UI::ScrollView::GetContentsRect() const // 0x68BF55
{
    mangled_assert("?GetContentsRect@ScrollView@UI@@QBE?AURect_i@@XZ");
    todo("implement");
    Rect_i __result = _sub_68BF55(this);
    return __result;
}

_extern void _sub_68C460(UI::ScrollView *const);
void UI::ScrollView::UpdateScrollBars() // 0x68C460
{
    mangled_assert("?UpdateScrollBars@ScrollView@UI@@AAEXXZ");
    todo("implement");
    _sub_68C460(this);
}

_extern void _sub_68C3B8(UI::ScrollView *const, __int32);
void UI::ScrollView::SetStepSize(__int32) // 0x68C3B8
{
    mangled_assert("?SetStepSize@ScrollView@UI@@QAEXH@Z");
    todo("implement");
    _sub_68C3B8(this, arg);
}

_extern void _sub_68C38C(UI::ScrollView *const, __int32);
void UI::ScrollView::SetPageSize(__int32) // 0x68C38C
{
    mangled_assert("?SetPageSize@ScrollView@UI@@QAEXH@Z");
    todo("implement");
    _sub_68C38C(this, arg);
}

_extern void _sub_68BEE0(UI::ScrollView *const, UI::InterfaceElement *);
void UI::ScrollView::AddChildR(UI::InterfaceElement *) // 0x68BEE0
{
    mangled_assert("?AddChildR@ScrollView@UI@@UAEXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_68BEE0(this, arg);
}

_extern UI::InterfaceElement *_sub_68C336(UI::ScrollView *const, UI::InterfaceElement *);
UI::InterfaceElement *UI::ScrollView::RemoveChildR(UI::InterfaceElement *) // 0x68C336
{
    mangled_assert("?RemoveChildR@ScrollView@UI@@UAEPAVInterfaceElement@2@PAV32@@Z");
    todo("implement");
    UI::InterfaceElement * __result = _sub_68C336(this, arg);
    return __result;
}

_extern void _sub_68C2F6(UI::ScrollView *const, __int32, __int32);
void UI::ScrollView::OnResize(__int32, __int32) // 0x68C2F6
{
    mangled_assert("?OnResize@ScrollView@UI@@MAEXHH@Z");
    todo("implement");
    _sub_68C2F6(this, arg, arg);
}

_extern void _sub_68C2FE(UI::InterfaceElement *, __int32);
void UI::ScrollView::OnScrollHorz(UI::InterfaceElement *e, __int32 pos) // 0x68C2FE
{
    mangled_assert("?OnScrollHorz@ScrollView@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
    _sub_68C2FE(e, pos);
}

_extern void _sub_68C31A(UI::InterfaceElement *, __int32);
void UI::ScrollView::OnScrollVert(UI::InterfaceElement *e, __int32 pos) // 0x68C31A
{
    mangled_assert("?OnScrollVert@ScrollView@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
    _sub_68C31A(e, pos);
}

/* ---------- private code */
#endif

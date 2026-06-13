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
#include <UserInterface\ProgressBar.h>
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
#include <util\types.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
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

_extern _sub_67BD1B(UI::ProgressBar *const);
UI::ProgressBar::ProgressBar() // 0x67BD1B
{
    mangled_assert("??0ProgressBar@UI@@QAE@XZ");
    todo("implement");
    _sub_67BD1B(this);
}

_extern _sub_67BD70(UI::UIIntSignal *const, UI::UIIntSignal const &);
_inline UI::UIIntSignal::UIIntSignal(UI::UIIntSignal const &) // 0x67BD70
{
    mangled_assert("??0UIIntSignal@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_67BD70(this, arg);
}

_extern _sub_67BD82(UI::UIIntSignal *const);
_inline UI::UIIntSignal::UIIntSignal() // 0x67BD82
{
    mangled_assert("??0UIIntSignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_67BD82(this);
}

_extern _sub_67BCC0(UI::ProgressBar *const, UI::InterfaceElement *, char const *);
UI::ProgressBar::ProgressBar(UI::InterfaceElement *, char const *) // 0x67BCC0
{
    mangled_assert("??0ProgressBar@UI@@QAE@PAVInterfaceElement@1@PBD@Z");
    todo("implement");
    _sub_67BCC0(this, arg, arg);
}

_extern _sub_67BB7C(UI::ProgressBar *const, LuaConfig &);
UI::ProgressBar::ProgressBar(LuaConfig &) // 0x67BB7C
{
    mangled_assert("??0ProgressBar@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_67BB7C(this, arg);
}

_extern _sub_67BBFD(UI::ProgressBar *const, UI::ProgressBar const &);
_inline UI::ProgressBar::ProgressBar(UI::ProgressBar const &) // 0x67BBFD
{
    mangled_assert("??0ProgressBar@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_67BBFD(this, arg);
}

_extern void _sub_67BD94(UI::ProgressBar *const);
UI::ProgressBar::~ProgressBar() // 0x67BD94
{
    mangled_assert("??1ProgressBar@UI@@UAE@XZ");
    todo("implement");
    _sub_67BD94(this);
}

_extern void _sub_67BDE1(UI::UIIntSignal *const);
_inline UI::UIIntSignal::~UIIntSignal() // 0x67BDE1
{
    mangled_assert("??1UIIntSignal@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_67BDE1(this);
}

_extern void _sub_67C0C1(UI::ProgressBar *const, float);
void UI::ProgressBar::SetProgressAsRatio(float) // 0x67C0C1
{
    mangled_assert("?SetProgressAsRatio@ProgressBar@UI@@QAEXM@Z");
    todo("implement");
    _sub_67C0C1(this, arg);
}

_extern void _sub_67C086(UI::ProgressBar *const, __int32);
void UI::ProgressBar::SetProgress(__int32) // 0x67C086
{
    mangled_assert("?SetProgress@ProgressBar@UI@@QAEXH@Z");
    todo("implement");
    _sub_67C086(this, arg);
}

_extern void _sub_67BF7B(UI::ProgressBar *const, LuaConfig &);
void UI::ProgressBar::Load(LuaConfig &) // 0x67BF7B
{
    mangled_assert("?Load@ProgressBar@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_67BF7B(this, arg);
}

_extern void _sub_67BF58(UI::ProgressBar *const);
void UI::ProgressBar::Init() // 0x67BF58
{
    mangled_assert("?Init@ProgressBar@UI@@AAEXXZ");
    todo("implement");
    _sub_67BF58(this);
}

_extern void _sub_67BE37(UI::ProgressBar *const, Vector_2i const &, Rect_i const &);
void UI::ProgressBar::Draw2(Vector_2i const &, Rect_i const &) // 0x67BE37
{
    mangled_assert("?Draw2@ProgressBar@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_67BE37(this, arg, arg);
}

/* ---------- private code */
#endif

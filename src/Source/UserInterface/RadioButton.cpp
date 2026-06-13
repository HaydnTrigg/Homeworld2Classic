#if 0
/* ---------- headers */

#include "decomp.h"
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\objects.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <Render\objects\core.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <memory\memorylib.h>
#include <Mathlib\matvec.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <crtdefs.h>
#include <Engine\region.h>
#include <Engine\prim.h>
#include <Render\gl\lotypes.h>
#include <new>
#include <Render\gl\r_types.h>
#include <xstddef>
#include <type_traits>
#include <Render\objects\cliprect.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Engine\KeyBindings.h>
#include <xutility>
#include <Mathlib\fastmath.h>
#include <Engine\config.h>
#include <utility>
#include <iosfwd>
#include <assist\stlexsmallvector.h>
#include <vector>
#include <xmemory>
#include <localizer\localizer.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\RadioButton.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <map>
#include <platform\platformexports.h>
#include <xtree>
#include <platform\keydefines.h>
#include <UserInterface\NewUIScreen.h>
#include <Engine\task.h>
#include <stack>
#include <deque>
#include <Mathlib\matrix4.h>
#include <cassert>
#include <Mathlib\vector3.h>
#include <assert.h>
#include <util\types.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <assist\typemagic.h>
#include <UserInterface\RadioItem.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <platform\osdef.h>
#include <UserInterface\NewFrame.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_68A97F(UI::RadioButton *const, UI::InterfaceElement *, char const *);
UI::RadioButton::RadioButton(UI::InterfaceElement *, char const *) // 0x68A97F
{
    mangled_assert("??0RadioButton@UI@@QAE@PAVInterfaceElement@1@PBD@Z");
    todo("implement");
    _sub_68A97F(this, arg, arg);
}

_extern _sub_68A9E4(UI::RadioItem *const, UI::RadioItem const &);
_inline UI::RadioItem::RadioItem(UI::RadioItem const &) // 0x68A9E4
{
    mangled_assert("??0RadioItem@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_68A9E4(this, arg);
}

_extern _sub_68A9FF(UI::UISignal *const, UI::UISignal const &);
_inline UI::UISignal::UISignal(UI::UISignal const &) // 0x68A9FF
{
    mangled_assert("??0UISignal@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_68A9FF(this, arg);
}

_extern _sub_68A887(UI::RadioButton *const, LuaConfig &);
UI::RadioButton::RadioButton(LuaConfig &) // 0x68A887
{
    mangled_assert("??0RadioButton@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_68A887(this, arg);
}

_extern _sub_68A901(UI::RadioButton *const, UI::RadioButton const &);
_inline UI::RadioButton::RadioButton(UI::RadioButton const &) // 0x68A901
{
    mangled_assert("??0RadioButton@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_68A901(this, arg);
}

_extern void _sub_68AA11(UI::RadioButton *const);
UI::RadioButton::~RadioButton() // 0x68AA11
{
    mangled_assert("??1RadioButton@UI@@UAE@XZ");
    todo("implement");
    _sub_68AA11(this);
}

_extern void _sub_68AAA9(UI::RadioButton *const, LuaConfig &);
void UI::RadioButton::Load(LuaConfig &) // 0x68AAA9
{
    mangled_assert("?Load@RadioButton@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_68AAA9(this, arg);
}

_extern void _sub_68AAD9(UI::RadioItem * const, bool);
void UI::RadioButton::SetSelected(bool) // 0x68AAD9
{
    mangled_assert("?SetSelected@RadioButton@UI@@UAEX_N@Z");
    // __shifted(UI::RadioButton, 1376);
    todo("implement");
    _sub_68AAD9(this, arg);
}

_extern void _sub_68AAAE(UI::RadioButton *const, Vector_2i const &, UI::MouseButton const &);
void UI::RadioButton::OnMouseClicked(Vector_2i const &, UI::MouseButton const &) // 0x68AAAE
{
    mangled_assert("?OnMouseClicked@RadioButton@UI@@MAEXABUVector_2i@@ABVMouseButton@2@@Z");
    todo("implement");
    _sub_68AAAE(this, arg, arg);
}

/* ---------- private code */
#endif

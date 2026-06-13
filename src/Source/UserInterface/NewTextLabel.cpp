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
#include <UserInterface\NewUIScreenManager.h>
#include <Mathlib\matvec.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <stack>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <memory\memorylib.h>
#include <deque>
#include <crtdefs.h>
#include <Render\gl\lotypes.h>
#include <Render\objects\compiledtext.h>
#include <Render\gl\r_types.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <UserInterface\uiprimitives.h>
#include <utility>
#include <UserInterface\NewText.h>
#include <iosfwd>
#include <vector>
#include <Render\objects\fontsystem.h>
#include <xmemory>
#include <Render\objects\bitmapfont.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\NewTextLabel.h>
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
#include <Engine\task.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <Engine\region.h>
#include <Engine\prim.h>
#include <Render\objects\cliprect.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <localizer\localizer.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <assist\stlexsmallvector.h>
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

_extern _sub_68A3CC(UI::NewTextLabel *const, UI::InterfaceElement *, char const *);
UI::NewTextLabel::NewTextLabel(UI::InterfaceElement *, char const *) // 0x68A3CC
{
    mangled_assert("??0NewTextLabel@UI@@QAE@PAVInterfaceElement@1@PBD@Z");
    todo("implement");
    _sub_68A3CC(this, arg, arg);
}

_extern _sub_68A321(UI::NewTextLabel *const, LuaConfig &);
UI::NewTextLabel::NewTextLabel(LuaConfig &) // 0x68A321
{
    mangled_assert("??0NewTextLabel@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_68A321(this, arg);
}

_extern _sub_68A377(UI::NewTextLabel *const, UI::NewTextLabel const &);
_inline UI::NewTextLabel::NewTextLabel(UI::NewTextLabel const &) // 0x68A377
{
    mangled_assert("??0NewTextLabel@UI@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_68A377(this, arg);
}

_extern void _sub_68A551(UI::NewTextLabel *const, LuaConfig &);
void UI::NewTextLabel::Load(LuaConfig &) // 0x68A551
{
    mangled_assert("?Load@NewTextLabel@UI@@IAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_68A551(this, arg);
}

_extern void _sub_68A417(UI::NewTextLabel *const);
UI::NewTextLabel::~NewTextLabel() // 0x68A417
{
    mangled_assert("??1NewTextLabel@UI@@UAE@XZ");
    todo("implement");
    _sub_68A417(this);
}

_extern void _sub_68A706(UI::NewTextLabel *const, bool);
void UI::NewTextLabel::SetWrapping(bool) // 0x68A706
{
    mangled_assert("?SetWrapping@NewTextLabel@UI@@QAEX_N@Z");
    todo("implement");
    _sub_68A706(this, arg);
}

_extern void _sub_68A4CA(UI::NewTextLabel *const, Vector_2i const &, Rect_i const &);
void UI::NewTextLabel::Draw2(Vector_2i const &, Rect_i const &) // 0x68A4CA
{
    mangled_assert("?Draw2@NewTextLabel@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
    _sub_68A4CA(this, arg, arg);
}

_extern void _sub_68A667(UI::NewTextLabel *const, __int32, __int32);
void UI::NewTextLabel::Resize(__int32, __int32) // 0x68A667
{
    mangled_assert("?Resize@NewTextLabel@UI@@UAEXHH@Z");
    todo("implement");
    _sub_68A667(this, arg, arg);
}

_extern void _sub_68A6CC(UI::NewTextLabel *const, wchar_t const *, bool);
void UI::NewTextLabel::SetText(wchar_t const *, bool) // 0x68A6CC
{
    mangled_assert("?SetText@NewTextLabel@UI@@UAEXPB_W_N@Z");
    todo("implement");
    _sub_68A6CC(this, arg, arg);
}

_extern void _sub_68A471(UI::NewTextLabel *const);
void UI::NewTextLabel::CalcAutoSize() // 0x68A471
{
    mangled_assert("?CalcAutoSize@NewTextLabel@UI@@MAEXXZ");
    todo("implement");
    _sub_68A471(this);
}

/* ---------- private code */
#endif

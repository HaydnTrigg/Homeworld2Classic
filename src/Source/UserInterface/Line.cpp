#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <luaconfig\luaconfig.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <xstring>
#include <UserInterface\pch.h>
#include <Mathlib\matvec.h>
#include <xmemory0>
#include <memory\memorylib.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
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
#include <UserInterface\Line.h>
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

_extern _sub_68C5DB(UI::Line *const);
UI::Line::Line() // 0x68C5DB
{
    mangled_assert("??0Line@UI@@QAE@XZ");
    todo("implement");
    _sub_68C5DB(this);
}

_extern _sub_68C5B2(UI::Line *const, LuaConfig &);
UI::Line::Line(LuaConfig &) // 0x68C5B2
{
    mangled_assert("??0Line@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_68C5B2(this, arg);
}

_extern void _sub_68C5F5(UI::Line *const);
UI::Line::~Line() // 0x68C5F5
{
    mangled_assert("??1Line@UI@@QAE@XZ");
    todo("implement");
    _sub_68C5F5(this);
}

_extern void _sub_68C634(UI::Line *const, LuaConfig &);
void UI::Line::Load(LuaConfig &) // 0x68C634
{
    mangled_assert("?Load@Line@UI@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_68C634(this, arg);
}

_extern void _sub_68C6FC(UI::Line *const, long, long, long, long);
void UI::Line::SetCoords(long, long, long, long) // 0x68C6FC
{
    mangled_assert("?SetCoords@Line@UI@@QAEXJJJJ@Z");
    todo("implement");
    _sub_68C6FC(this, arg, arg, arg, arg);
}

_extern void _sub_68C6DC(UI::Line *const, Vector_2i const &, Vector_2i const &);
void UI::Line::SetCoords(Vector_2i const &, Vector_2i const &) // 0x68C6DC
{
    mangled_assert("?SetCoords@Line@UI@@QAEXABUVector_2i@@0@Z");
    todo("implement");
    _sub_68C6DC(this, arg, arg);
}

_extern void _sub_68C71A(UI::Line *const, long);
void UI::Line::SetLineWidth(long) // 0x68C71A
{
    mangled_assert("?SetLineWidth@Line@UI@@QAEXJ@Z");
    todo("implement");
    _sub_68C71A(this, arg);
}

_extern void _sub_68C6D0(UI::Line *const, Color_4b const &);
void UI::Line::SetColor(Color_4b const &) // 0x68C6D0
{
    mangled_assert("?SetColor@Line@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_68C6D0(this, arg);
}

_extern void _sub_68C6C6(UI::Line *const, bool);
void UI::Line::SetAbove(bool) // 0x68C6C6
{
    mangled_assert("?SetAbove@Line@UI@@QAEX_N@Z");
    todo("implement");
    _sub_68C6C6(this, arg);
}

_extern void _sub_68C5F6(UI::Line const *const, Vector_2i &, Vector_2i &, Color_4b &, long &, bool &);
void UI::Line::Get(Vector_2i &, Vector_2i &, Color_4b &, long &, bool &) const // 0x68C5F6
{
    mangled_assert("?Get@Line@UI@@QBEXAAUVector_2i@@0AAUColor_4b@@AAJAA_N@Z");
    todo("implement");
    _sub_68C5F6(this, arg, arg, arg, arg, arg);
}

/* ---------- private code */
#endif

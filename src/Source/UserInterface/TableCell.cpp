#if 0
/* ---------- headers */

#include "decomp.h"
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <Mathlib\matvec.h>
#include <memory\memorylib.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <crtdefs.h>
#include <Render\gl\lotypes.h>
#include <new>
#include <Render\gl\r_types.h>
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
#include <UserInterface\TextButton.h>
#include <math.h>
#include <UserInterface\NewButton.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\Table.h>
#include <UserInterface\TableCell.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <map>
#include <platform\keydefines.h>
#include <xtree>
#include <Render\objects\cliprect.h>
#include <localizer\localizer.h>
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
#include <Render\objects\compiledtext.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\NewText.h>
#include <string>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <platform\osdef.h>
#include <UserInterface\SharedGraphicFactory.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern UI::TableCell *_sub_68F363(LuaConfig &, UI::Table *);
UI::TableCell *UI::TableCell::Create(LuaConfig &lc, UI::Table *parent) // 0x68F363
{
    mangled_assert("?Create@TableCell@UI@@SGPAV12@AAVLuaConfig@@PAVTable@2@@Z");
    todo("implement");
    UI::TableCell * __result = _sub_68F363(lc, parent);
    return __result;
}

_extern _sub_68F185(UI::TableCell *const, UI::Table *);
UI::TableCell::TableCell(UI::Table *) // 0x68F185
{
    mangled_assert("??0TableCell@UI@@QAE@PAVTable@1@@Z");
    todo("implement");
    _sub_68F185(this, arg);
}

_extern _sub_68F138(UI::TableCell *const, UI::TableCell const &);
UI::TableCell::TableCell(UI::TableCell const &) // 0x68F138
{
    mangled_assert("??0TableCell@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_68F138(this, arg);
}

_extern UI::TableCell const &_sub_68F298(UI::TableCell *const, UI::TableCell const &);
UI::TableCell const &UI::TableCell::operator=(UI::TableCell const &) // 0x68F298
{
    mangled_assert("??4TableCell@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::TableCell const & __result = _sub_68F298(this, arg);
    return __result;
}

_extern void _sub_68F323(UI::TableCell *const, UI::InterfaceElement *);
void UI::TableCell::AddElement(UI::InterfaceElement *) // 0x68F323
{
    mangled_assert("?AddElement@TableCell@UI@@QAEXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_68F323(this, arg);
}

_extern void _sub_68F493(UI::TableCell *const, LuaConfig &);
void UI::TableCell::Load(LuaConfig &) // 0x68F493
{
    mangled_assert("?Load@TableCell@UI@@UAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_68F493(this, arg);
}

_extern void _sub_68F61A(UI::TableCell *const);
void UI::TableCell::ResizeChildren() // 0x68F61A
{
    mangled_assert("?ResizeChildren@TableCell@UI@@QAEXXZ");
    todo("implement");
    _sub_68F61A(this);
}

_extern void _sub_68F609(UI::TableCell *const, __int32, __int32);
void UI::TableCell::OnResize(__int32, __int32) // 0x68F609
{
    mangled_assert("?OnResize@TableCell@UI@@MAEXHH@Z");
    todo("implement");
    _sub_68F609(this, arg, arg);
}

_extern void _sub_68F668(UI::TableCell *const, bool);
void UI::TableCell::SetAutoResizeChildren(bool) // 0x68F668
{
    mangled_assert("?SetAutoResizeChildren@TableCell@UI@@QAEX_N@Z");
    todo("implement");
    _sub_68F668(this, arg);
}

_extern _sub_68F21F(UI::TextTableCell *const, UI::Table *);
UI::TextTableCell::TextTableCell(UI::Table *) // 0x68F21F
{
    mangled_assert("??0TextTableCell@UI@@QAE@PAVTable@1@@Z");
    todo("implement");
    _sub_68F21F(this, arg);
}

_extern _sub_68F1AE(UI::TextTableCell *const, UI::TextTableCell const &);
UI::TextTableCell::TextTableCell(UI::TextTableCell const &) // 0x68F1AE
{
    mangled_assert("??0TextTableCell@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_68F1AE(this, arg);
}

_extern UI::TextTableCell const &_sub_68F2B9(UI::TextTableCell *const, UI::TextTableCell const &);
UI::TextTableCell const &UI::TextTableCell::operator=(UI::TextTableCell const &) // 0x68F2B9
{
    mangled_assert("??4TextTableCell@UI@@QAEABV01@ABV01@@Z");
    todo("implement");
    UI::TextTableCell const & __result = _sub_68F2B9(this, arg);
    return __result;
}

_extern void _sub_68F58A(UI::TextTableCell *const, LuaConfig &);
void UI::TextTableCell::Load(LuaConfig &) // 0x68F58A
{
    mangled_assert("?Load@TextTableCell@UI@@UAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_68F58A(this, arg);
}

/* ---------- private code */
#endif

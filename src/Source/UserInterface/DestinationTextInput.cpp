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
#include <Render\objects\compiledtext.h>
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
#include <UserInterface\NewTextLabel.h>
#include <iosfwd>
#include <vector>
#include <UserInterface\uiprimitives.h>
#include <xmemory>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <boost\detail\lwm_win32.hpp>
#include <list>
#include <UserInterface\DestinationTextInput.h>
#include <UserInterface\NewTextInput.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <map>
#include <platform\keydefines.h>
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
#include <Render\objects\cliprect.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <localizer\localizer.h>
#include <boost\shared_ptr.hpp>
#include <UserInterface\StyleSheet.h>
#include <wchar.h>
#include <swprintf.inl>
#include <platform\osdef.h>
#include <UserInterface\SharedGraphicFactory.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_67EFA4(UI::DestinationTextInput *const, UI::DestinationTextInput const &);
UI::DestinationTextInput::DestinationTextInput(UI::DestinationTextInput const &) // 0x67EFA4
{
    mangled_assert("??0DestinationTextInput@UI@@QAE@ABV01@@Z");
    todo("implement");
    _sub_67EFA4(this, arg);
}

_extern _sub_67EECB(UI::DestinationTextInput *const, LuaConfig &);
UI::DestinationTextInput::DestinationTextInput(LuaConfig &) // 0x67EECB
{
    mangled_assert("??0DestinationTextInput@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
    _sub_67EECB(this, arg);
}

_extern void _sub_67F07D(UI::DestinationTextInput *const);
UI::DestinationTextInput::~DestinationTextInput() // 0x67F07D
{
    mangled_assert("??1DestinationTextInput@UI@@UAE@XZ");
    todo("implement");
    _sub_67F07D(this);
}

_extern void _sub_67F200(UI::DestinationTextInput *const);
void UI::DestinationTextInput::DefaultSettings() // 0x67F200
{
    mangled_assert("?DefaultSettings@DestinationTextInput@UI@@AAEXXZ");
    todo("implement");
    _sub_67F200(this);
}

_extern void _sub_67F115(UI::DestinationTextInput *const);
void UI::DestinationTextInput::ClearNames() // 0x67F115
{
    mangled_assert("?ClearNames@DestinationTextInput@UI@@QAEXXZ");
    todo("implement");
    _sub_67F115(this);
}

_extern void _sub_67F7C6(UI::DestinationTextInput *const, wchar_t const *);
void UI::DestinationTextInput::PushName(wchar_t const *) // 0x67F7C6
{
    mangled_assert("?PushName@DestinationTextInput@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_67F7C6(this, arg);
}

_extern void _sub_67F4FA(UI::InterfaceElement *);
void UI::DestinationTextInput::OnAccept(UI::InterfaceElement *sender) // 0x67F4FA
{
    mangled_assert("?OnAccept@DestinationTextInput@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_67F4FA(sender);
}

_extern void _sub_67F25D(UI::DestinationTextInput *const);
void UI::DestinationTextInput::OnAccept() // 0x67F25D
{
    mangled_assert("?OnAccept@DestinationTextInput@UI@@AAEXXZ");
    todo("implement");
    _sub_67F25D(this);
}

_extern void _sub_67F79E(UI::InterfaceElement *);
void UI::DestinationTextInput::OnType(UI::InterfaceElement *sender) // 0x67F79E
{
    mangled_assert("?OnType@DestinationTextInput@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_67F79E(sender);
}

_extern void _sub_67F61C(UI::DestinationTextInput *const);
void UI::DestinationTextInput::OnType() // 0x67F61C
{
    mangled_assert("?OnType@DestinationTextInput@UI@@AAEXXZ");
    todo("implement");
    _sub_67F61C(this);
}

_extern void _sub_67F5F4(UI::InterfaceElement *);
void UI::DestinationTextInput::OnKeypress(UI::InterfaceElement *sender) // 0x67F5F4
{
    mangled_assert("?OnKeypress@DestinationTextInput@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_67F5F4(sender);
}

_extern void _sub_67F522(UI::DestinationTextInput *const);
void UI::DestinationTextInput::OnKeypress() // 0x67F522
{
    mangled_assert("?OnKeypress@DestinationTextInput@UI@@AAEXXZ");
    todo("implement");
    _sub_67F522(this);
}

/* ---------- private code */
#endif

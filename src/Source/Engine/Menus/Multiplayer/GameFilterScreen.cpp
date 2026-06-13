#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <UserInterface\NewButton.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <Render\objects\cliprect.h>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <localizer\localizer.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <compiler\compilerconfig.h>
#include <FrontEnd\LobbySessionDesc.h>
#include <UserInterface\NewUIScreenManager.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\compiledtext.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <UserInterface\NewTextInput.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\gl\r_types.h>
#include <Render\objects\bitmapfont.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <debug\db.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <Menus\Multiplayer\GameFilter.h>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\Table.h>
#include <UserInterface\TableCell.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <Menus\Multiplayer\GameFilterScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5B3D27(UI::GameFilterScreen::Data *const);
_inline UI::GameFilterScreen::Data::Data() // 0x5B3D27
{
    mangled_assert("??0Data@GameFilterScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B3D27(this);
}

_extern _sub_5B3D41(UI::GameFilterScreen *const, char const *);
UI::GameFilterScreen::GameFilterScreen(char const *) // 0x5B3D41
{
    mangled_assert("??0GameFilterScreen@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_5B3D41(this, arg);
}

_extern void _sub_5B3DCB(UI::GameFilterScreen::Data *const);
_inline UI::GameFilterScreen::Data::~Data() // 0x5B3DCB
{
    mangled_assert("??1Data@GameFilterScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B3DCB(this);
}

_extern void _sub_5B3DDF(UI::GameFilter *const);
_inline UI::GameFilter::~GameFilter() // 0x5B3DDF
{
    mangled_assert("??1GameFilter@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B3DDF(this);
}

_extern void _sub_5B3E07(UI::GameFilterScreen *const);
UI::GameFilterScreen::~GameFilterScreen() // 0x5B3E07
{
    mangled_assert("??1GameFilterScreen@UI@@UAE@XZ");
    todo("implement");
    _sub_5B3E07(this);
}

_extern UI::GameFilter &_sub_5B3E30(UI::GameFilter *const, UI::GameFilter const &);
_inline UI::GameFilter &UI::GameFilter::operator=(UI::GameFilter const &) // 0x5B3E30
{
    mangled_assert("??4GameFilter@UI@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    UI::GameFilter & __result = _sub_5B3E30(this, arg);
    return __result;
}

_extern void _sub_5B3ECB(UI::GameFilterScreen *const);
void UI::GameFilterScreen::DisconnectSlots() // 0x5B3ECB
{
    mangled_assert("?DisconnectSlots@GameFilterScreen@UI@@QAEXXZ");
    todo("implement");
    _sub_5B3ECB(this);
}

_extern void _sub_5B3EAC(UI::GameFilterScreen *const, void (*)(UI::InterfaceElement *));
void UI::GameFilterScreen::ConnectOnAccept(void (*)(UI::InterfaceElement *)) // 0x5B3EAC
{
    mangled_assert("?ConnectOnAccept@GameFilterScreen@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
    _sub_5B3EAC(this, arg);
}

_extern void _sub_5B40D2(UI::GameFilterScreen *const);
void UI::GameFilterScreen::OnPostLoad() // 0x5B40D2
{
    mangled_assert("?OnPostLoad@GameFilterScreen@UI@@MAEXXZ");
    todo("implement");
    _sub_5B40D2(this);
}

_extern void _sub_5B403F(UI::GameFilterScreen *const, bool);
void UI::GameFilterScreen::OnActivate(bool) // 0x5B403F
{
    mangled_assert("?OnActivate@GameFilterScreen@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5B403F(this, arg);
}

_extern void _sub_5B4187(UI::GameFilterScreen *const, UI::GameFilter const &);
void UI::GameFilterScreen::SetGameFilter(UI::GameFilter const &) // 0x5B4187
{
    mangled_assert("?SetGameFilter@GameFilterScreen@UI@@QAEXABVGameFilter@2@@Z");
    todo("implement");
    _sub_5B4187(this, arg);
}

_extern UI::GameFilter const &_sub_5B3EE3(UI::GameFilterScreen const *const);
UI::GameFilter const &UI::GameFilterScreen::GetGameFilter() const // 0x5B3EE3
{
    mangled_assert("?GetGameFilter@GameFilterScreen@UI@@QBEABVGameFilter@2@XZ");
    todo("implement");
    UI::GameFilter const & __result = _sub_5B3EE3(this);
    return __result;
}

_extern void _sub_5B4042(UI::InterfaceElement *);
void UI::GameFilterScreen::OnClearClicked(UI::InterfaceElement *sender) // 0x5B4042
{
    mangled_assert("?OnClearClicked@GameFilterScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B4042(sender);
}

_extern void _sub_5B3F18(UI::InterfaceElement *);
void UI::GameFilterScreen::OnAcceptClicked(UI::InterfaceElement *sender) // 0x5B3F18
{
    mangled_assert("?OnAcceptClicked@GameFilterScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B3F18(sender);
}

/* ---------- private code */
#endif

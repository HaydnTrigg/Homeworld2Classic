#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Render\objects\compiledtext.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <UserInterface\NewTextInput.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
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
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
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
#include <Render\objects\cliprect.h>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\NewButton.h>
#include <boost\detail\lwm_win32.hpp>
#include <localizer\localizer.h>
#include <Menus\WaitMessage.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\NewUIScreenManager.h>
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

UI::WaitMessage::WaitMessage(char const *) // 0x5AFB0B
{
    mangled_assert("??0WaitMessage@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::WaitMessage::~WaitMessage() // 0x5AFB37
{
    mangled_assert("??1WaitMessage@UI@@UAE@XZ");
    todo("implement");
}

void UI::WaitMessage::OnActivate(bool) // 0x5AFC04
{
    mangled_assert("?OnActivate@WaitMessage@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::WaitMessage::OnPostLoad() // 0x5AFC40
{
    mangled_assert("?OnPostLoad@WaitMessage@UI@@MAEXXZ");
    todo("implement");
}

void UI::WaitMessage::Show(wchar_t const *message, bool bCancel) // 0x5AFCB3
{
    mangled_assert("?Show@WaitMessage@UI@@SGXPB_W_N@Z");
    todo("implement");
}

void UI::WaitMessage::Hide() // 0x5AFBCF
{
    mangled_assert("?Hide@WaitMessage@UI@@SGXXZ");
    todo("implement");
}

void UI::WaitMessage::SetMessage(wchar_t const *message) // 0x5AFC88
{
    mangled_assert("?SetMessage@WaitMessage@UI@@SGXPB_W@Z");
    todo("implement");
}

void UI::WaitMessage::ConnectOnCancel(void (*f)(UI::InterfaceElement *)) // 0x5AFB6F
{
    mangled_assert("?ConnectOnCancel@WaitMessage@UI@@SGXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

void UI::WaitMessage::DisconnectSlots() // 0x5AFBA2
{
    mangled_assert("?DisconnectSlots@WaitMessage@UI@@SGXXZ");
    todo("implement");
}

void UI::WaitMessage::OnCancelClicked(UI::InterfaceElement *sender) // 0x5AFC07
{
    mangled_assert("?OnCancelClicked@WaitMessage@UI@@KGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

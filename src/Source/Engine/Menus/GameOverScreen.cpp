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
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <crtdefs.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <compiler\compilerconfig.h>
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
#include <Render\objects\cliprect.h>
#include <Render\gl\r_types.h>
#include <KeyBindings.h>
#include <config.h>
#include <localizer\localizer.h>
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
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <Menus\GameOverScreen.h>
#include <Render\objects\compiledtext.h>
#include <UserInterface\NewUIScreen.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::GameOverScreenData
{
    UI::NewTextLabel *m_lblVictory; // 0x0
    UI::NewTextLabel *m_lblDefeat; // 0x4
    UI::NewTextLabel *m_lblExit; // 0x8
    UI::GameOverScreen::GameOverScreenType m_screenType; // 0xC
};
static_assert(sizeof(UI::GameOverScreenData) == 16, "Invalid UI::GameOverScreenData size");

/* ---------- prototypes */

/* ---------- globals */

extern UI::GameOverScreen *UI::GameOverScreen::ms_screen; // 0x846CC8

/* ---------- private variables */

/* ---------- public code */

UI::GameOverScreen::GameOverScreen(char const *) // 0x5860AB
{
    mangled_assert("??0GameOverScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::GameOverScreen::~GameOverScreen() // 0x5860FC
{
    mangled_assert("??1GameOverScreen@UI@@UAE@XZ");
    todo("implement");
}

void UI::GameOverScreen::OnActivate(bool) // 0x58613F
{
    mangled_assert("?OnActivate@GameOverScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::GameOverScreen::OnPostLoad() // 0x58617E
{
    mangled_assert("?OnPostLoad@GameOverScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::GameOverScreen::Show(UI::GameOverScreen::GameOverScreenType type) // 0x5861BF
{
    mangled_assert("?Show@GameOverScreen@UI@@SGXW4GameOverScreenType@12@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

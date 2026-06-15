#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\cliprect.h>
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
#include <localizer\localizer.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <UserInterface\UICoord.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewButton.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <Render\objects\compiledtext.h>
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
#include <UserInterface\NewTextLabel.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\uiprimitives.h>
#include <boost\cstdint.hpp>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <cassert>
#include <Render\objects\bitmapfont.h>
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
#include <Menus\SubtitleScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > UI::SubtitleScreen::NAME; // 0x83A7F8

/* ---------- private variables */

/* ---------- public code */

_inline UI::SubtitleScreen::Data::Data() // 0x5AD3DA
{
    mangled_assert("??0Data@SubtitleScreen@UI@@QAE@XZ");
    todo("implement");
}

UI::SubtitleScreen::SubtitleScreen(char const *) // 0x5AD3E4
{
    mangled_assert("??0SubtitleScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::SubtitleScreen::~SubtitleScreen() // 0x5AD459
{
    mangled_assert("??1SubtitleScreen@UI@@UAE@XZ");
    todo("implement");
}

bool UI::SubtitleScreen::IsEmpty() const // 0x5AD554
{
    mangled_assert("?IsEmpty@SubtitleScreen@UI@@QBE_NXZ");
    todo("implement");
}

void UI::SubtitleScreen::SetShutdownCallback(void (*)()) // 0x5AD623
{
    mangled_assert("?SetShutdownCallback@SubtitleScreen@UI@@QAEXP6GXXZ@Z");
    todo("implement");
}

void UI::SubtitleScreen::OnActivate(bool) // 0x5AD581
{
    mangled_assert("?OnActivate@SubtitleScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::SubtitleScreen::SetIcon(char const *, Texture *) // 0x5AD58E
{
    mangled_assert("?SetIcon@SubtitleScreen@UI@@QAEXPBDPAVTexture@@@Z");
    todo("implement");
}

void UI::SubtitleScreen::SetText(char const *, wchar_t const *, vector4 const &, float) // 0x5AD632
{
    mangled_assert("?SetText@SubtitleScreen@UI@@QAEXPBDPB_WABVvector4@@M@Z");
    todo("implement");
}

void UI::SubtitleScreen::HideIcon(char const *) // 0x5AD520
{
    mangled_assert("?HideIcon@SubtitleScreen@UI@@QAEXPBD@Z");
    todo("implement");
}

void UI::SubtitleScreen::HideText(char const *) // 0x5AD53A
{
    mangled_assert("?HideText@SubtitleScreen@UI@@QAEXPBD@Z");
    todo("implement");
}

bool UI::SubtitleScreen::IsTextVisible(char const *) // 0x5AD572
{
    mangled_assert("?IsTextVisible@SubtitleScreen@UI@@QAE_NPBD@Z");
    todo("implement");
}

bool UI::SubtitleScreen::IsIconVisible(char const *) // 0x5AD563
{
    mangled_assert("?IsIconVisible@SubtitleScreen@UI@@QAE_NPBD@Z");
    todo("implement");
}

bool UI::SubtitleScreen::TextNeedsScroll(char const *) // 0x5AD71C
{
    mangled_assert("?TextNeedsScroll@SubtitleScreen@UI@@QAE_NPBD@Z");
    todo("implement");
}

void UI::SubtitleScreen::TextSetScroll(char const *, float) // 0x5AD751
{
    mangled_assert("?TextSetScroll@SubtitleScreen@UI@@QAEXPBDM@Z");
    todo("implement");
}

void UI::SubtitleScreen::SetVisible(UI::InterfaceElement *, bool) // 0x5AD6F7
{
    mangled_assert("?SetVisible@SubtitleScreen@UI@@AAEXPAVInterfaceElement@2@_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif

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
#include <Render\objects\cliprect.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <localizer\localizer.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <UserInterface\NewListBox.h>
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
#include <Render\objects\compiledtext.h>
#include <UserInterface\NewTextLabel.h>
#include <util\types.h>
#include <UserInterface\uiprimitives.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <UserInterface\NewText.h>
#include <KeyBindings.h>
#include <Render\objects\fontsystem.h>
#include <config.h>
#include <Render\objects\bitmapfont.h>
#include <assist\typemagic.h>
#include <Menus\MessageUtil.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <debug\db.h>
#include <UserInterface\NewUIScreenManager.h>
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
#include <FrontEnd\LobbySessionDesc.h>
#include <boost\detail\shared_count.hpp>
#include <GameOptions.h>
#include <LevelDesc.h>
#include <boost\detail\lwm_win32.hpp>
#include <Hash.h>
#include <fileio\md5.h>
#include <Menus\Multiplayer\GameInfoScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>

/* ---------- constants */

enum `anonymous-namespace'::LocalizedMessages
{
    LM_GameName = 0,
    LM_Map,
    LM_GameMode,
    LM_MaxPlayers,
    LM_Number,
};

/* ---------- definitions */

typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > FontNameMap;
typedef `anonymous-namespace'::LocalizedMessages ?A0x4d08c6ab::LocalizedMessages;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline UI::GameInfoScreen::Data::Data() // 0x5B427F
{
    mangled_assert("??0Data@GameInfoScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::GameInfoScreen::GameInfoScreen(char const *) // 0x5B429A
{
    mangled_assert("??0GameInfoScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::GameInfoScreen::Data::~Data() // 0x5B4303
{
    mangled_assert("??1Data@GameInfoScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::GameInfoScreen::~GameInfoScreen() // 0x5B4313
{
    mangled_assert("??1GameInfoScreen@UI@@UAE@XZ");
    todo("implement");
}

void UI::GameInfoScreen::OnPreLoadFile(LuaConfig &) // 0x5B44C5
{
    mangled_assert("?OnPreLoadFile@GameInfoScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::GameInfoScreen::OnLoad(LuaConfig &) // 0x5B4458
{
    mangled_assert("?OnLoad@GameInfoScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::GameInfoScreen::OnPostLoad() // 0x5B4471
{
    mangled_assert("?OnPostLoad@GameInfoScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::GameInfoScreen::SetData(LobbySessionDesc const &) // 0x5B4538
{
    mangled_assert("?SetData@GameInfoScreen@UI@@QAEXABVLobbySessionDesc@@@Z");
    todo("implement");
}

void UI::GameInfoScreen::AddInfo(wchar_t const *, wchar_t const *) // 0x5B438F
{
    mangled_assert("?AddInfo@GameInfoScreen@UI@@AAEXPB_W0@Z");
    todo("implement");
}

void UI::GameInfoScreen::OnActivate(bool) // 0x5B4441
{
    mangled_assert("?OnActivate@GameInfoScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::GameInfoScreen::OnBackClicked(UI::InterfaceElement *sender) // 0x5B4444
{
    mangled_assert("?OnBackClicked@GameInfoScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

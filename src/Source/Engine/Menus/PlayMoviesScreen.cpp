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
#include <boost\shared_array.hpp>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <localizer\localizer.h>
#include <crtdefs.h>
#include <seInterface2\sedefinesshared.h>
#include <UserInterface\StringTable.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <UserInterface\NewListBox.h>
#include <new>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <xstddef>
#include <type_traits>
#include <UserInterface\UIDialog.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <compiler\compilerconfig.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <fileio\filepath.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <App\PlayerProfileGameOptions.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Menus\MovieScreen.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <boost\smart_ptr.hpp>
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
#include <UserInterface\NewTextInput.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <Render\gl\lotypes.h>
#include <Render\objects\fontsystem.h>
#include <boost\cstdint.hpp>
#include <Render\objects\bitmapfont.h>
#include <platform\cmdline.h>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <boost\scoped_array.hpp>
#include <SoundManager\SoundManager.h>
#include <UserInterface\NewUIScreenManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <Menus\MenuSupport.h>
#include <seInterface2\SoundParamManager.h>
#include <KeyBindings.h>
#include <assist\gbitset.h>
#include <config.h>
#include <assist\typemagic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <Menus\ErrorMessage.h>
#include <debug\db.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <platform\timer.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <seInterface2\PatchID.h>
#include <boost\detail\lwm_win32.hpp>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <Menus\PlayMoviesScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <UserInterface\ListBoxItem.h>
#include <Render\objects\cliprect.h>
#include <UserInterface\TextButton.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::PlayMoviesScreenData
{
    UI::NewListBox *m_listGames; // 0x0
    UI::TextListBoxItem *m_itemToClone; // 0x4
    UI::NewButton *m_btnPlayMovie; // 0x8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_path; // 0xC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_tempFilename; // 0x24
    PlayMoviesScreenData(UI::PlayMoviesScreenData const &); /* compiler_generated() */
    _inline PlayMoviesScreenData(); /* compiler_generated() */
    _inline ~PlayMoviesScreenData(); /* compiler_generated() */
    UI::PlayMoviesScreenData &operator=(UI::PlayMoviesScreenData const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PlayMoviesScreenData) == 60, "Invalid UI::PlayMoviesScreenData size");

/* ---------- prototypes */

/* ---------- globals */

extern char const *UI::ANIMATICPATH; // 0x83A6CC
extern UI::PlayMoviesScreen *UI::PlayMoviesScreen::ms_playMoviesScreen; // 0x846D18

/* ---------- private variables */

/* ---------- public code */

UI::PlayMoviesScreen::PlayMoviesScreen(char const *) // 0x5A3D3E
{
    mangled_assert("??0PlayMoviesScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::PlayMoviesScreenData::PlayMoviesScreenData() // 0x5A3DA6
{
    mangled_assert("??0PlayMoviesScreenData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::PlayMoviesScreen::~PlayMoviesScreen() // 0x5A3DCE
{
    mangled_assert("??1PlayMoviesScreen@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::PlayMoviesScreenData::~PlayMoviesScreenData() // 0x5A3DF7
{
    mangled_assert("??1PlayMoviesScreenData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::PlayMoviesScreen::OnActivate(bool) // 0x5A4144
{
    mangled_assert("?OnActivate@PlayMoviesScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::PlayMoviesScreen::OnPostLoad() // 0x5A4219
{
    mangled_assert("?OnPostLoad@PlayMoviesScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::PlayMoviesScreen::FillMovieList(char const *) // 0x5A3E51
{
    mangled_assert("?FillMovieList@PlayMoviesScreen@UI@@AAEXPBD@Z");
    todo("implement");
}

void UI::PlayMoviesScreen::OnMovieDone() // 0x5A4180
{
    mangled_assert("?OnMovieDone@PlayMoviesScreen@UI@@CGXXZ");
    todo("implement");
}

void UI::PlayMoviesScreen::OnPlayMovieClicked(UI::InterfaceElement *sender) // 0x5A41B5
{
    mangled_assert("?OnPlayMovieClicked@PlayMoviesScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::PlayMoviesScreen::OnMovieItemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A418C
{
    mangled_assert("?OnMovieItemClicked@PlayMoviesScreen@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::PlayMoviesScreen::OnMovieItemDoubleClicked(UI::InterfaceElement *e, __int32 x, __int32 y, unsigned __int32 bf) // 0x5A41A9
{
    mangled_assert("?OnMovieItemDoubleClicked@PlayMoviesScreen@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

/* ---------- private code */
#endif

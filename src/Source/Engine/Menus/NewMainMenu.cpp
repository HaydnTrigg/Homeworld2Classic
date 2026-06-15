#if 0
/* ---------- headers */

#include "decomp.h"
#include <fileio\filepath.h>
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
#include <Menus\SaveLoadDialog.h>
#include <UserInterface\NewUIScreenManager.h>
#include <boost\static_assert.hpp>
#include <Mathlib\matrix3.h>
#include <isteamscreenshots.h>
#include <new>
#include <isteamfriends.h>
#include <xstddef>
#include <type_traits>
#include <Render\objects\compiledtext.h>
#include <localizer\localizer.h>
#include <xutility>
#include <Menus\MenuSupport.h>
#include <utility>
#include <iosfwd>
#include <GameOptions.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <App\PlayerProfileMan.h>
#include <isteamcontroller.h>
#include <compiler\compilerconfig.h>
#include <steamcontrollerpublic.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <list>
#include <Render\objects\bitmapfont.h>
#include <UserInterface\NewListBox.h>
#include <App\PlayerProfile.h>
#include <App\PlayerProfileGameOptions.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <UserInterface\UIDialog.h>
#include <assist\fixedstring.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <isteammusicremote.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Menus\GameSetup.h>
#include <Render\objects\core.h>
#include <Race.h>
#include <Network\StagingArea.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <gameSettings.h>
#include <UserInterface\ProgressBar.h>
#include <Mathlib\matvec.h>
#include <syncChecking.h>
#include <SteamFuncs.h>
#include <Mathlib\vector2.h>
#include <steam_api.h>
#include <util\types.h>
#include <isteamclient.h>
#include <steamtypes.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\NewDropDownListBox.h>
#include <boost\cstdint.hpp>
#include <isteamuser.h>
#include <UserInterface\ListBoxItem.h>
#include <boost\config.hpp>
#include <cassert>
#include <assert.h>
#include <isteamhtmlsurface.h>
#include <Render\gl\r_types.h>
#include <LevelManager.h>
#include <LevelDesc.h>
#include <App\AppObj.h>
#include <Hash.h>
#include <isteammusic.h>
#include <platform\appinterface.h>
#include <fileio\md5.h>
#include <KeyBindings.h>
#include <config.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <isteamremotestorage.h>
#include <luaconfig\luabinding.h>
#include <assist\typemagic.h>
#include <isteamapplist.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <campaign.h>
#include <platform\keydefines.h>
#include <version.h>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <Menus\SinglePlayer\SPMissionSelect.h>
#include <debug\db.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <steamclientpublic.h>
#include <luaconfig\luaconfig.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <App\CampaignMan.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <Render\objects\cliprect.h>
#include <isteamutils.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <FrontEnd\lobbyevent.h>
#include <FrontEnd\lobbydefines.h>
#include <UserInterface\RadioButton.h>
#include <UserInterface\RadioItem.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <isteammatchmaking.h>
#include <platform\cmdline.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <Menus\NewMainMenu.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <GameRulesLibrary.h>
#include <isteamapps.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>
#include <UserInterface\NewButton.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 UI::NewMainMenu::ms_selectedLevel; // 0x846D00

/* ---------- private variables */

_static
{
    extern char const *QUICKSTART_GAMETYPE; // 0x83A488
}

/* ---------- public code */

UI::NewMainMenu::NewMainMenu(char const *) // 0x594C5F
{
    mangled_assert("??0NewMainMenu@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::NewMainMenu::~NewMainMenu() // 0x594C77
{
    mangled_assert("??1NewMainMenu@UI@@UAE@XZ");
    todo("implement");
}

void UI::NewMainMenu::SetDefaultLevel() // 0x5951DF
{
    mangled_assert("?SetDefaultLevel@NewMainMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewMainMenu::OnActivate(bool) // 0x595017
{
    mangled_assert("?OnActivate@NewMainMenu@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::NewMainMenu::OnPostLoad() // 0x59501A
{
    mangled_assert("?OnPostLoad@NewMainMenu@UI@@MAEXXZ");
    todo("implement");
}

void UI::NewMainMenu::FillLevelListBox() // 0x594E17
{
    mangled_assert("?FillLevelListBox@NewMainMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::NewMainMenu::CampaignClicked(UI::InterfaceElement *sender) // 0x594CA4
{
    mangled_assert("?CampaignClicked@NewMainMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewMainMenu::TutorialClicked(UI::InterfaceElement *sender) // 0x595264
{
    mangled_assert("?TutorialClicked@NewMainMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewMainMenu::PlayerVsCPUClicked(UI::InterfaceElement *sender) // 0x5951AF
{
    mangled_assert("?PlayerVsCPUClicked@NewMainMenu@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::NewMainMenu::LevelSelected(UI::InterfaceElement *sender, __int32 i) // 0x594FCD
{
    mangled_assert("?LevelSelected@NewMainMenu@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

/* ---------- private code */
#endif

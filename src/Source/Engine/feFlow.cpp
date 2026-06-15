#if 0
/* ---------- headers */

#include "decomp.h"
#include <savegame.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Menus\LoadingScreenRenderer.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <luaconfig\luabinding.h>
#include <FrontEnd\ScriptedFE\ScriptedFE.h>
#include <memory\memorylib.h>
#include <luaconfig\luaconfig.h>
#include <crtdefs.h>
#include <SelTarg.h>
#include <mainScreen.h>
#include <UserInterface\StyleSheet.h>
#include <KeyBindings.h>
#include <UserInterface\pch.h>
#include <SoundManager\SoundManager.h>
#include <config.h>
#include <App\PlayerProfileMan.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <App\PlayerProfile.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <UserInterface\uitypes.h>
#include <Mathlib\matrix3.h>
#include <App\PlayerProfileGameOptions.h>
#include <Menus\NewMainMenu.h>
#include <platform\inputinterface.h>
#include <UserInterface\NewUIScreen.h>
#include <seInterface2\PatchID.h>
#include <platform\platformexports.h>
#include <localizer\localizer.h>
#include <UserInterface\NewFrame.h>
#include <seInterface2\PatchBase.h>
#include <platform\keydefines.h>
#include <UserInterface\InterfaceElement.h>
#include <seInterface2\SoundParams.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <new>
#include <UserInterface\Graphic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Render\objects\textureproxy.h>
#include <BuildData.h>
#include <isteamscreenshots.h>
#include <xstddef>
#include <DependencyData.h>
#include <type_traits>
#include <isteamfriends.h>
#include <UserInterface\NewUIScreenManager.h>
#include <hash_map>
#include <LevelDesc.h>
#include <xhash>
#include <Hash.h>
#include <fileio\md5.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Menus\Statistics.h>
#include <Menus\Multiplayer\LobbyScreen.h>
#include <vector>
#include <platform\sysinputinterface.h>
#include <FrontEnd\lobbyevent.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <SquadronList.h>
#include <platform\osdef.h>
#include <Render\objects\compiledtext.h>
#include <compiler\compilerconfig.h>
#include <isteamcontroller.h>
#include <list>
#include <steamcontrollerpublic.h>
#include <Cursor.h>
#include <Render\objects\texture.h>
#include <FrontEnd\Lobby.h>
#include <seInterface2\SampleID.h>
#include <Render\objects\objects.h>
#include <FrontEnd\lobbydefines.h>
#include <assist\fixedstring.h>
#include <seInterface2\SampleBase.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\octree.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector4.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <map>
#include <Collision\intersect.h>
#include <xtree>
#include <UserInterface\NewText.h>
#include <Collision\primitivesfwd.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\static_assert.hpp>
#include <Render\objects\fontsystem.h>
#include <isteammusicremote.h>
#include <Render\gl\lotypes.h>
#include <Render\objects\bitmapfont.h>
#include <recorder.h>
#include <Menus\MenuSupport.h>
#include <orders.h>
#include <UserInterface\signals.h>
#include <Mathlib\vector2.h>
#include <orders_base.h>
#include <util\types.h>
#include <App\AppObj.h>
#include <sobid.h>
#include <Render\gl\r_types.h>
#include <platform\appinterface.h>
#include <Interpolation.h>
#include <LevelManager.h>
#include <SteamFuncs.h>
#include <steam_api.h>
#include <boost\cstdint.hpp>
#include <Menus\NewTaskbar.h>
#include <Collision\Primitives\aabb.h>
#include <isteamclient.h>
#include <boost\config.hpp>
#include <sob.h>
#include <steamtypes.h>
#include <cassert>
#include <sobstatic.h>
#include <campaign.h>
#include <App\CampaignMan.h>
#include <assert.h>
#include <Menus\NewLaunchMenu.h>
#include <Collision\Primitives\sphere.h>
#include <scripting.h>
#include <GameEventSys.h>
#include <scriptaccess.h>
#include <isteamuser.h>
#include <scripttypedef.h>
#include <boost\scoped_array.hpp>
#include <Menus\TransientScreen.h>
#include <Mathlib\quat.h>
#include <Menus\SubtitleScreen.h>
#include <seInterface2\sedefinesshared.h>
#include <isteamhtmlsurface.h>
#include <lua.h>
#include <GameObj.h>
#include <isteammusic.h>
#include <assist\typemagic.h>
#include <util\statmonitor.h>
#include <commandtype.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <isteamremotestorage.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Menus\MovieScreen.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <isteamapplist.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <debug\db.h>
#include <UserInterface\stylemanager.h>
#include <gameSettings.h>
#include <syncChecking.h>
#include <deque>
#include <stack>
#include <Collision\Primitives\obb.h>
#include <Mathlib\mathutil.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <steamclientpublic.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\profiling.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Menus\NewProfile.h>
#include <selection.h>
#include <savegamedef.h>
#include <gamemsg.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <task.h>
#include <profile\profile.h>
#include <isteamutils.h>
#include <iostream>
#include <platform\cmdline.h>
#include <Render\objects\cliprect.h>
#include <Menus\EventsScreen.h>
#include <Menus\ErrorMessage.h>
#include <region.h>
#include <feFlow.h>
#include <prim.h>
#include <Interface.h>
#include <Menus\FinalBuildMenu.h>
#include <Menus\NewResearchMenu.h>
#include <FrontEnd\frontend.h>
#include <wchar.h>
#include <UserInterface\ListBoxItem.h>
#include <ResearchManager.h>
#include <string>
#include <Render\objects\textureregistry.h>
#include <UserInterface\TextButton.h>
#include <swprintf.inl>
#include <UserInterface\NewButton.h>
#include <isteammatchmaking.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <isteamapps.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void Lobby_AutoFillGameSettings();
extern void Lobby_AutoSetRaceFromLevel();

_static void msInGameExitOnOK(UI::InterfaceElement *btn);

/* ---------- globals */

extern bool SpaghettiFrontEnd::g_skipIntroMovie; // 0x8439B0
extern std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > SpaghettiFrontEnd::ms_mapTransScreens; // 0x8439BC
extern std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > SpaghettiFrontEnd::ms_mapAppScreens; // 0x8439B4
extern std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > SpaghettiFrontEnd::ms_mapGameScreens; // 0x8439C4

/* ---------- private variables */

_static
{
    extern char const *CAMPAIGN_STATE; // 0x833F4C
    extern char const *QUICKSTART_GAMETYPE; // 0x833F50
}

/* ---------- public code */

_inline std::_List_buy<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >::~_List_buy<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> >() // 0x45D77A
{
    mangled_assert("??1?$_List_buy@UUIScreenInfo@UI@@V?$allocator@UUIScreenInfo@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>() // 0x45D795
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::UIScreenInfo::~UIScreenInfo() // 0x45D79F
{
    mangled_assert("??1UIScreenInfo@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void Lobby_AutoFillGameSettings() // 0x45DE80
{
    mangled_assert("?Lobby_AutoFillGameSettings@@YGXXZ");
    todo("implement");
}

void Lobby_AutoSetRaceFromLevel() // 0x45DF54
{
    mangled_assert("?Lobby_AutoSetRaceFromLevel@@YGXXZ");
    todo("implement");
}

void SpaghettiFrontEnd::SetDefaultLevel() // 0x45DFD2
{
    mangled_assert("?SetDefaultLevel@SpaghettiFrontEnd@@SGXXZ");
    todo("implement");
}

void SpaghettiFrontEnd::FELogic_AppStart() // 0x45D821
{
    mangled_assert("?FELogic_AppStart@SpaghettiFrontEnd@@CGXXZ");
    todo("implement");
}

void SpaghettiFrontEnd::FELogic_GameMenuExit() // 0x45DC49
{
    mangled_assert("?FELogic_GameMenuExit@SpaghettiFrontEnd@@CGXXZ");
    todo("implement");
}

void SpaghettiFrontEnd::FELogic_GameOver() // 0x45DC98
{
    mangled_assert("?FELogic_GameOver@SpaghettiFrontEnd@@CGXXZ");
    todo("implement");
}

void SpaghettiFrontEnd::StartupFrontend(FrontEnd::FEStartupCode feStartUpCode) // 0x45E14D
{
    mangled_assert("?StartupFrontend@SpaghettiFrontEnd@@SGXW4FEStartupCode@FrontEnd@@@Z");
    todo("implement");
}

void SpaghettiFrontEnd::ShutdownFrontend(FrontEnd::FEShutdownCode fe) // 0x45E0D9
{
    mangled_assert("?ShutdownFrontend@SpaghettiFrontEnd@@SGXW4FEShutdownCode@FrontEnd@@@Z");
    todo("implement");
}

bool SpaghettiFrontEnd::StartupInGameFrontend() // 0x45E24B
{
    mangled_assert("?StartupInGameFrontend@SpaghettiFrontEnd@@SG_NXZ");
    todo("implement");
}

bool SpaghettiFrontEnd::ShutdownInGameFrontend() // 0x45E121
{
    mangled_assert("?ShutdownInGameFrontend@SpaghettiFrontEnd@@SG_NXZ");
    todo("implement");
}

void SpaghettiFrontEnd::AnimaticCallback() // 0x45D815
{
    mangled_assert("?AnimaticCallback@SpaghettiFrontEnd@@SGXXZ");
    todo("implement");
}

void SpaghettiFrontEnd::LoadScreenMaps() // 0x45DDF0
{
    mangled_assert("?LoadScreenMaps@SpaghettiFrontEnd@@SGXXZ");
    todo("implement");
}

void SpaghettiFrontEnd::ShowLoadingScreen(char const *levelFilePath, wchar_t const *title1, wchar_t const *title2) // 0x45E075
{
    mangled_assert("?ShowLoadingScreen@SpaghettiFrontEnd@@SGXPBDPB_W1@Z");
    todo("implement");
}

/* ---------- private code */

_static void msInGameExitOnOK(UI::InterfaceElement *btn) // 0x45E528
{
    mangled_assert("msInGameExitOnOK");
    todo("implement");
}
#endif

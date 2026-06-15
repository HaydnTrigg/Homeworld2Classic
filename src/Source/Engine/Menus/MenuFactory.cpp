#if 0
/* ---------- headers */

#include "decomp.h"
#include <Menus\WaitMessage.h>
#include <assist\stlexsmallvector.h>
#include <Menus\Pointer.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <luaconfig\luabinding.h>
#include <pch.h>
#include <Menus\NewMainMenu.h>
#include <memory\memorylib.h>
#include <Menus\NewResearchMenu.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\NewText.h>
#include <isteamutils.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <crtdefs.h>
#include <Render\objects\fontsystem.h>
#include <Menus\ChatScreen.h>
#include <stack>
#include <UserInterface\pch.h>
#include <Render\objects\bitmapfont.h>
#include <Menus\PlayerLaggingScreen.h>
#include <Collision\Primitives\obb.h>
#include <Menus\GameMenu.h>
#include <Menus\TransientScreen.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <Menus\SinglePlayer\SPMissionSelect.h>
#include <Menus\UnitsMenu.h>
#include <xhash>
#include <new>
#include <isteammatchmaking.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <xstddef>
#include <Menus\FinalBuildMenu.h>
#include <type_traits>
#include <SquadronList.h>
#include <Menus\SubtitleScreen.h>
#include <Menus\Multiplayer\LobbyScreen.h>
#include <isteamapps.h>
#include <FrontEnd\lobbyevent.h>
#include <Network\StagingArea.h>
#include <FrontEnd\lobbydefines.h>
#include <gameSettings.h>
#include <syncChecking.h>
#include <Menus\Multiplayer\ConnectionTypeScreen.h>
#include <Menus\Multiplayer\GameFilterScreen.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Menus\SMFiltersMenu.h>
#include <compiler\compilerconfig.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <list>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Menus\ErrorMessage.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Menus\Multiplayer\LobbyTitleRoom.h>
#include <assist\fixedstring.h>
#include <isteamscreenshots.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <isteamfriends.h>
#include <ResearchManager.h>
#include <Menus\PatchScreen.h>
#include <map>
#include <gslobby\gspatcher.h>
#include <xtree>
#include <gslobby\gslobbyexport.h>
#include <boost\scoped_ptr.hpp>
#include <Interpolation.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <region.h>
#include <Mathlib\vector2.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <Menus\Multiplayer\DirectConnectionScreen.h>
#include <Mathlib\mathutil.h>
#include <Menus\FEGameOptions.h>
#include <Menus\Statistics.h>
#include <App\PlayerProfile.h>
#include <boost\cstdint.hpp>
#include <App\PlayerProfileGameOptions.h>
#include <Menus\PlayMoviesScreen.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <boost\config.hpp>
#include <isteamcontroller.h>
#include <UserInterface\Graphic.h>
#include <cassert>
#include <steamcontrollerpublic.h>
#include <Render\objects\texture.h>
#include <assert.h>
#include <Menus\ObjectivesList.h>
#include <Render\objects\cliprect.h>
#include <Menus\SpeechRecall.h>
#include <Render\objects\objects.h>
#include <GameEventSys.h>
#include <Menus\TutorialScreen.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\quat.h>
#include <Menus\DiplomacyScreen.h>
#include <localizer\localizer.h>
#include <Menus\PatchInfoDialog.h>
#include <Render\gl\lotypes.h>
#include <isteammusicremote.h>
#include <Menus\NewProfile.h>
#include <assist\typemagic.h>
#include <BuildData.h>
#include <gamestructimpl.h>
#include <Menus\GameOverScreen.h>
#include <LevelManager.h>
#include <DependencyData.h>
#include <Badge.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\r_types.h>
#include <LevelDesc.h>
#include <Mathlib\fastmath.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <SteamFuncs.h>
#include <steam_api.h>
#include <KeyBindings.h>
#include <Menus\PlayerSetup.h>
#include <isteamclient.h>
#include <config.h>
#include <Menus\NewLaunchMenu.h>
#include <steamtypes.h>
#include <sobid.h>
#include <UserInterface\ListBoxItem.h>
#include <Collision\Primitives\capsule.h>
#include <debug\db.h>
#include <UserInterface\TextButton.h>
#include <Collision\Primitives\segment.h>
#include <Menus\InGameOptions.h>
#include <UserInterface\NewButton.h>
#include <Collision\BVH\profiling.h>
#include <isteamuser.h>
#include <Menus\GameSetup.h>
#include <isteamhtmlsurface.h>
#include <Menus\BuildQueueMenu.h>
#include <Race.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <platform\keydefines.h>
#include <selection.h>
#include <isteammusic.h>
#include <savegamedef.h>
#include <Menus\RightClickMenu.h>
#include <boost\static_assert.hpp>
#include <boost\detail\shared_count.hpp>
#include <Menus\NewTaskbar.h>
#include <Menus\UserProfile.h>
#include <boost\detail\lwm_win32.hpp>
#include <sob.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <sobstatic.h>
#include <isteamremotestorage.h>
#include <Collision\Primitives\sphere.h>
#include <Menus\EventsScreen.h>
#include <luaconfig\luaconfig.h>
#include <Menus\PlaybackMenu.h>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <Menus\Multiplayer\CreateGameScreen.h>
#include <isteamapplist.h>
#include <platform\inputinterface.h>
#include <Menus\GameTypeInfo.h>
#include <platform\platformexports.h>
#include <GameRulesLibrary.h>
#include <isteamhttp.h>
#include <Render\objects\compiledtext.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <steamhttpenums.h>
#include <Menus\MenuFactory.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <wchar.h>
#include <string>
#include <UserInterface\UIDialog.h>
#include <Menus\EmblemSelect.h>
#include <Menus\SaveLoadDialog.h>
#include <Menus\Multiplayer\GameInfoScreen.h>
#include <steamclientpublic.h>
#include <SelTarg.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *QUICKSTART_GAMETYPE; // 0x83A28C
}

/* ---------- public code */

UI::NewUIScreen *UI::MenuFactory::CreateMenu(char const *filename, char const *sectionName, char const *type, bool callPostLoad) // 0x58DBD1
{
    mangled_assert("?CreateMenu@MenuFactory@UI@@SGPAVNewUIScreen@2@PBD00_N@Z");
    todo("implement");
}

_inline GSPatcher &GSPatcher::operator=(GSPatcher const &) // 0x58DBC4
{
    mangled_assert("??4GSPatcher@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif

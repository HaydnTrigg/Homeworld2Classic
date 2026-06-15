#if 0
/* ---------- headers */

#include "decomp.h"
#include <fileio\md5.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Sob\DustCloud\DustCloudGroupManager.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Collision\Collision.h>
#include <boost\shared_array.hpp>
#include <MainUI.h>
#include <pch.h>
#include <gamestructimpl.h>
#include <Selector.h>
#include <Badge.h>
#include <abilities.h>
#include <GameObj.h>
#include <SensorsBlobs.h>
#include <task.h>
#include <Universe.h>
#include <MetaSelTarg.h>
#include <ITweak.h>
#include <stack>
#include <Waypoint.h>
#include <SelTarg.h>
#include <Tactics.h>
#include <SobUnmoveable.h>
#include <prim.h>
#include <Render\FxGL\FXManager.h>
#include <sob.h>
#include <Objectives.h>
#include <Render\FxGL\VarMulti.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <SoundEventHandler.h>
#include <App\GameLua.h>
#include <BattleChatter\ChatterEvent.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <Collision\Primitives\capsule.h>
#include <new>
#include <Collision\Primitives\segment.h>
#include <Sob\DustCloud\DustCloud.h>
#include <Collision\BVH\profiling.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <exception>
#include <xstddef>
#include <seInterface2\SampleID.h>
#include <OrderFeedback.h>
#include <type_traits>
#include <seInterface2\SampleBase.h>
#include <Ship\FormationTargetInfo.h>
#include <dbdefines.h>
#include <Menus\ShipIcons.h>
#include <UnitCaps\UnitCaps.h>
#include <EngineTrailSystem.h>
#include <boost\static_assert.hpp>
#include <SobZeroMassBody.h>
#include <ReactiveFleet.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <SobWithMeshStatic.h>
#include <UserInterface\Graphic.h>
#include <SobRigidBodyStatic.h>
#include <renderer.h>
#include <sobzeromassbodystatic.h>
#include <TeamColourRegistry.h>
#include <Render\objects\texture.h>
#include <xutility>
#include <SOBGroupManager.h>
#include <Camera\OrbitParameters.h>
#include <Render\gl\types.h>
#include <Render\objects\objects.h>
#include <utility>
#include <iosfwd>
#include <hash_map>
#include <Mathlib\matvec.h>
#include <Render\objects\core.h>
#include <vector>
#include <xhash>
#include <GameEventSys.h>
#include <SimVis\FogOfWarVis.h>
#include <FrontEnd\Lobby.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <FrontEnd\lobbydefines.h>
#include <cstdarg>
#include <debug\ctassert.h>
#include <Render\objects\textureproxy.h>
#include <stdarg.h>
#include <Render\gl\lotypes.h>
#include <DynamicPoint.h>
#include <scripting.h>
#include <BuildManager.h>
#include <scriptaccess.h>
#include <recorder.h>
#include <scripttypedef.h>
#include <syncChecking.h>
#include <list>
#include <Collision\Primitives\obb.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Render\gl\r_types.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <lua.h>
#include <BillboardRender.h>
#include <Scar\Scar.h>
#include <Graphics\meshrenderproxy.h>
#include <assist\fixedstring.h>
#include <Scar\ScarEventSys.h>
#include <Mathlib\vector3.h>
#include <KeyBindings.h>
#include <Mathlib\vector4.h>
#include <LayMinesCommand.h>
#include <command.h>
#include <Viewer.h>
#include <map>
#include <seInterface2\sedefinesshared.h>
#include <Sound\SoundTask.h>
#include <xtree>
#include <gameRandom.h>
#include <CameraCommand.h>
#include <boost\smart_ptr.hpp>
#include <random.h>
#include <CameraHW.h>
#include <boost\scoped_ptr.hpp>
#include <Graphics\BackgroundFX.h>
#include <Camera\CameraOrbitTarget.h>
#include <Avoidance\AvoidanceBoxes.h>
#include <App\PlayerProfileMan.h>
#include <Camera\Camera.h>
#include <playerresourcetype.h>
#include <App\PlayerProfile.h>
#include <Camera\Frustum.h>
#include <gamemsg.h>
#include <Physics\PhysicsEngine.h>
#include <App\PlayerProfileGameOptions.h>
#include <Camera\Plane3.h>
#include <Physics\PhysicsObject.h>
#include <UniverseInterp.h>
#include <SimVis\SimVis.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Mathlib\mathutil.h>
#include <util\statmonitor.h>
#include <savegame.h>
#include <util\utilexports.h>
#include <Race.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <boost\cstdint.hpp>
#include <Player.h>
#include <HyperspaceManager.h>
#include <boost\config.hpp>
#include <ResearchManager.h>
#include <SquadronList.h>
#include <feFlow.h>
#include <Ship\FormationPattern.h>
#include <FrontEnd\frontend.h>
#include <Render\gl\r_defines.h>
#include <region.h>
#include <Scar\LuaRuleSystem.h>
#include <Render\gl\glext.h>
#include <boost\scoped_array.hpp>
#include <platform\sharedlibraryinterface.h>
#include <Mathlib\quat.h>
#include <Stats\StatLogging.h>
#include <init.h>
#include <platform\osdef.h>
#include <fixedpoint.h>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <util\fixed.h>
#include <util\dictionary.h>
#include <Graphics\AutoLOD.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\PatchID.h>
#include <Render\objects\textureregistry.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Render\objects\light.h>
#include <pathpoints.h>
#include <Ship\Formation.h>
#include <BgLightAnim.h>
#include <debug\db.h>
#include <Collision\BVH\octree.h>
#include <SobRigidBody.h>
#include <Collision\BVH\span.h>
#include <gameRender.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <deque>
#include <Collision\intersect.h>
#include <orders.h>
#include <Collision\primitivesfwd.h>
#include <orders_base.h>
#include <commandtype.h>
#include <BattleScar\BattleScarManager.h>
#include <Decal\DecalManager.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <campaign.h>
#include <Decal\VertexPool.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <luaconfig\luabinding.h>
#include <UserInterface\NewUIScreenManager.h>
#include <selection.h>
#include <luaconfig\luaconfig.h>
#include <UserInterface\uitypes.h>
#include <ATITemplate.h>
#include <savegamedef.h>
#include <platform\inputinterface.h>
#include <ATI.h>
#include <boost\detail\shared_count.hpp>
#include <platform\keydefines.h>
#include <bitset>
#include <Interpolation.h>
#include <boost\detail\lwm_win32.hpp>
#include <NIS\NISManager.h>
#include <ResourceGroupManager.h>
#include <Collision\Primitives\aabb.h>
#include <profile\profile.h>
#include <iostream>
#include <SensorsManager.h>
#include <Sob\Nebula\NebulaGroupManager.h>
#include <SoundManager\SoundManager.h>
#include <Scar\LuaFX.h>
#include <sobid.h>
#include <mainScreen.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <config.h>
#include <Ping.h>
#include <GameObjInit.h>
#include <wchar.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\utility.hpp>
#include <Render\objects\debugrender.h>
#include <string>
#include <WeaponFire\WeaponFire.h>
#include <weaponfiretypes.h>
#include <PlayBalanceStats.h>
#include <gameSettings.h>
#include <LevelDesc.h>
#include <Menus\LoadingScreenRenderer.h>
#include <Hash.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void LoadingUpdateCallback(__int32 currentCount, __int32 totalCount, wchar_t const *text);
_static bool GameInit::initLoadLevel();
_static bool GameInit::initRestoreLevel(SaveGameData *saveGameData);
_static bool GameInit::startGameTasksPreInGame();
_static bool GameInit::stopGameTasks();
_static bool GameInit::clearDebugRenderQueue();
_static bool GameInit::soundEnterGame();
_static bool GameInit::soundLeaveGame();
_static bool GameInit::musicStop();
_static bool GameInit::musicStopFE();
_static bool GameInit::musicStartFE();
_static bool GameInit::musicPlayDefault();
_static bool GameInit::AIInit();
_static bool GameInit::AIShutdown();
_static bool GameInit::AIRestore(SaveGameData *savegamedata);
_static bool GameInit::AISave(SaveGameData *saveGameData, SaveType saveType);
_static bool GameInit::StartStatRecording();
_static bool GameInit::StopStatRecording();
_static bool GameInit::StartupBackgroundFX();
_static bool GameInit::ShutdownBackgroundFX();
_static bool GameInit::ApplyProfileGameOptions();
_static bool GameInit::StartupScarScript();
_static bool GameInit::ShutdownScarScript();
_static bool GameInit::RestoreScarScript(SaveGameData *saveGameData);
_static bool GameInit::SaveScarScript(SaveGameData *saveGameData, SaveType saveType);
_static bool GameInit::ResetStateBlockVar();
_static bool GameInit::startSyncChecking();
_static bool GameInit::stopSyncChecking();
_static bool GameInit::RenderPreLevel();

/* ---------- globals */

extern void *GameInit::s_engineInitGameHandle; // 0x8443C8

/* ---------- private variables */

_static
{
    extern InitModule initGameModuleList[65]; // 0x836870
    extern InitList initGameModule; // 0x836D84
    extern float const ViewerUpdateRate; // 0x79B17C
    extern float const ViewerUpdatePeriod; // 0x836D8C
    extern float const CameraDistanceUpdateRate; // 0x79B180
    extern float const CameraDistanceUpdatePeriod; // 0x836D90
}

/* ---------- public code */

char const *GameObjInit::Initialize() // 0x4FBD65
{
    mangled_assert("?Initialize@GameObjInit@@SGPBDXZ");
    todo("implement");
}

char const *GameObjInit::Shutdown() // 0x4FBDCB
{
    mangled_assert("?Shutdown@GameObjInit@@SGPBDXZ");
    todo("implement");
}

char const *GameObjInit::Save(SaveGameData *saveGameData, SaveType saveType) // 0x4FBDB6
{
    mangled_assert("?Save@GameObjInit@@SGPBDPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

char const *GameObjInit::Restore(SaveGameData *saveGameData) // 0x4FBDA0
{
    mangled_assert("?Restore@GameObjInit@@SGPBDPAVSaveGameData@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void LoadingUpdateCallback(__int32 currentCount, __int32 totalCount, wchar_t const *text) // 0x4FBD75
{
    mangled_assert("LoadingUpdateCallback");
    todo("implement");
}

_static bool GameInit::initLoadLevel() // 0x4FBB1B
{
    mangled_assert("GameInit::initLoadLevel");
    todo("implement");
}

_static bool GameInit::initRestoreLevel(SaveGameData *saveGameData) // 0x4FBB27
{
    mangled_assert("GameInit::initRestoreLevel");
    todo("implement");
}

_static bool GameInit::startGameTasksPreInGame() // 0x4FBAF2
{
    mangled_assert("GameInit::startGameTasksPreInGame");
    todo("implement");
}

_static bool GameInit::stopGameTasks() // 0x4FBAF5
{
    mangled_assert("GameInit::stopGameTasks");
    todo("implement");
}

_static bool GameInit::clearDebugRenderQueue() // 0x4FBB36
{
    mangled_assert("GameInit::clearDebugRenderQueue");
    todo("implement");
}

_static bool GameInit::soundEnterGame() // 0x4FBB44
{
    mangled_assert("GameInit::soundEnterGame");
    todo("implement");
}

_static bool GameInit::soundLeaveGame() // 0x4FBB50
{
    mangled_assert("GameInit::soundLeaveGame");
    todo("implement");
}

_static bool GameInit::musicStop() // 0x4FBB5C
{
    mangled_assert("GameInit::musicStop");
    todo("implement");
}

_static bool GameInit::musicStopFE() // 0x4FBB82
{
    mangled_assert("GameInit::musicStopFE");
    todo("implement");
}

_static bool GameInit::musicStartFE() // 0x4FBB73
{
    mangled_assert("GameInit::musicStartFE");
    todo("implement");
}

_static bool GameInit::musicPlayDefault() // 0x4FBB91
{
    mangled_assert("GameInit::musicPlayDefault");
    todo("implement");
}

_static bool GameInit::AIInit() // 0x4FBCA9
{
    mangled_assert("GameInit::AIInit");
    todo("implement");
}

_static bool GameInit::AIShutdown() // 0x4FBCB8
{
    mangled_assert("GameInit::AIShutdown");
    todo("implement");
}

_static bool GameInit::AIRestore(SaveGameData *savegamedata) // 0x4FBCC7
{
    mangled_assert("GameInit::AIRestore");
    todo("implement");
}

_static bool GameInit::AISave(SaveGameData *saveGameData, SaveType saveType) // 0x4FBCDC
{
    mangled_assert("GameInit::AISave");
    todo("implement");
}

_static bool GameInit::StartStatRecording() // 0x4FBBA0
{
    mangled_assert("GameInit::StartStatRecording");
    todo("implement");
}

_static bool GameInit::StopStatRecording() // 0x4FBBB5
{
    mangled_assert("GameInit::StopStatRecording");
    todo("implement");
}

_static bool GameInit::StartupBackgroundFX() // 0x4FBBCA
{
    mangled_assert("GameInit::StartupBackgroundFX");
    todo("implement");
}

_static bool GameInit::ShutdownBackgroundFX() // 0x4FBBF8
{
    mangled_assert("GameInit::ShutdownBackgroundFX");
    todo("implement");
}

_static bool GameInit::ApplyProfileGameOptions() // 0x4FBCF5
{
    mangled_assert("GameInit::ApplyProfileGameOptions");
    todo("implement");
}

_static bool GameInit::StartupScarScript() // 0x4FBC1E
{
    mangled_assert("GameInit::StartupScarScript");
    todo("implement");
}

_static bool GameInit::ShutdownScarScript() // 0x4FBC57
{
    mangled_assert("GameInit::ShutdownScarScript");
    todo("implement");
}

_static bool GameInit::RestoreScarScript(SaveGameData *saveGameData) // 0x4FBC5F
{
    mangled_assert("GameInit::RestoreScarScript");
    todo("implement");
}

_static bool GameInit::SaveScarScript(SaveGameData *saveGameData, SaveType saveType) // 0x4FBC97
{
    mangled_assert("GameInit::SaveScarScript");
    todo("implement");
}

_static bool GameInit::ResetStateBlockVar() // 0x4FBD13
{
    mangled_assert("GameInit::ResetStateBlockVar");
    todo("implement");
}

_static bool GameInit::startSyncChecking() // 0x4FBA95
{
    mangled_assert("GameInit::startSyncChecking");
    todo("implement");
}

_static bool GameInit::stopSyncChecking() // 0x4FBACE
{
    mangled_assert("GameInit::stopSyncChecking");
    todo("implement");
}

_static bool GameInit::RenderPreLevel() // 0x4FBD24
{
    mangled_assert("GameInit::RenderPreLevel");
    todo("implement");
}
#endif

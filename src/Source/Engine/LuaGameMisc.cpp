#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Race.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <assist\stlexsmallvector.h>
#include <playerresourcetype.h>
#include <Collision\Primitives\capsule.h>
#include <xstring>
#include <Collision\Primitives\segment.h>
#include <xmemory0>
#include <Collision\BVH\profiling.h>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <luaconfig\lualibman.h>
#include <Modifiers\ModifierUIInfo.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <SoundManager\SoundEntityHandle.h>
#include <crtdefs.h>
#include <weapon.h>
#include <WeaponFire\WeaponFire.h>
#include <SOBGroup.h>
#include <weaponfiretypes.h>
#include <LevelDesc.h>
#include <ShieldTypes.h>
#include <Ship\FlightManeuverManager.h>
#include <Player.h>
#include <Hash.h>
#include <BuildManager.h>
#include <fileio\md5.h>
#include <DynamicPoint.h>
#include <command.h>
#include <Mathlib\matrix3.h>
#include <sob.h>
#include <Modifiers\ModifierApplier.h>
#include <sobstatic.h>
#include <gamestructimpl.h>
#include <Collision\Primitives\sphere.h>
#include <Badge.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <new>
#include <Subsystems\HardPointStatic.h>
#include <Collision\Collision.h>
#include <weaponTargetInfo.h>
#include <exception>
#include <Subsystems\SubSystemType.h>
#include <xstddef>
#include <DependencyData.h>
#include <shipstatic.h>
#include <type_traits>
#include <weaponstaticinfo.h>
#include <TeamColourRegistry.h>
#include <GunBinding.h>
#include <platform\timer.h>
#include <savegame.h>
#include <platform\platformexports.h>
#include <CameraCommand.h>
#include <Mathlib\mathutil.h>
#include <CameraHW.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Camera\CameraOrbitTarget.h>
#include <ATI.h>
#include <TacticalOverlay.h>
#include <MultiplierTypes.h>
#include <Camera\Camera.h>
#include <xutility>
#include <Collision\BVH\bvh.h>
#include <Camera\Frustum.h>
#include <platform\osdef.h>
#include <utility>
#include <iosfwd>
#include <SobWithMeshStatic.h>
#include <Camera\Plane3.h>
#include <vector>
#include <orders.h>
#include <xmemory>
#include <seInterface2\SampleID.h>
#include <fileio\fileioexports.h>
#include <orders_base.h>
#include <ship.h>
#include <seInterface2\SampleBase.h>
#include <commandtype.h>
#include <SobWithMesh.h>
#include <cstdarg>
#include <dbdefines.h>
#include <SobRigidBody.h>
#include <stdarg.h>
#include <UnitCaps\UnitCaps.h>
#include <UserInterface\signals.h>
#include <luaconfig\luabinding.h>
#include <SobRigidBodyStatic.h>
#include <Render\objects\textureregistry.h>
#include <boost\static_assert.hpp>
#include <luaconfig\luaconfig.h>
#include <compiler\compilerconfig.h>
#include <MetaSelTarg.h>
#include <lua.h>
#include <WeaponClassSpecificInfo.h>
#include <SelTarg.h>
#include <weapontesting.h>
#include <CameraTuning.h>
#include <SobZeroMassBody.h>
#include <list>
#include <Render\objects\cliprect.h>
#include <Sob\Pebble\Pebble.h>
#include <sobzeromassbodystatic.h>
#include <SensorsManager.h>
#include <Sob\Pebble\PebbleStatic.h>
#include <Render\gl\r_types.h>
#include <Scar\Scar.h>
#include <Mathlib\matvec.h>
#include <Scar\ScarEventSys.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <NavLightManager.h>
#include <KeyBindings.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\TextButton.h>
#include <map>
#include <UserInterface\NewButton.h>
#include <xtree>
#include <Render\gl\r_defines.h>
#include <boost\smart_ptr.hpp>
#include <SimVis\LodFX.h>
#include <Render\gl\glext.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <MADState.h>
#include <MeshAnimation.h>
#include <seInterface2\sedefinesshared.h>
#include <BuildQueueStatic.h>
#include <boost\cstdint.hpp>
#include <abilities.h>
#include <boost\config.hpp>
#include <Modifiers\ModifierAbility.h>
#include <SOBGroupManager.h>
#include <Menus\MenuSupport.h>
#include <cassert>
#include <GameObj.h>
#include <hash_map>
#include <UserInterface\uitypes.h>
#include <assert.h>
#include <task.h>
#include <xhash>
#include <platform\inputinterface.h>
#include <Menus\FinalBuildMenu.h>
#include <stack>
#include <platform\keydefines.h>
#include <UserInterface\NewUIScreen.h>
#include <sobid.h>
#include <boost\scoped_array.hpp>
#include <Scar\LuaRuleSystem.h>
#include <region.h>
#include <Mathlib\quat.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <alliance.h>
#include <assist\typemagic.h>
#include <Collision\BVH\proxy.h>
#include <gameSettings.h>
#include <Collision\intersect.h>
#include <config.h>
#include <Collision\primitivesfwd.h>
#include <syncChecking.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\mathlibdll.h>
#include <Graphics\AutoLOD.h>
#include <Mathlib\fastmath.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <pathpoints.h>
#include <Tactics.h>
#include <seInterface2\PatchBase.h>
#include <Render\objects\compiledtext.h>
#include <debug\db.h>
#include <seInterface2\SoundParams.h>
#include <mainuidefines.h>
#include <LuaTools\LuaRulesProfiler.h>
#include <Collision\Primitives\aabb.h>
#include <OrderFeedback.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Menus\NewResearchMenu.h>
#include <deque>
#include <ResearchManager.h>
#include <UserInterface\StyleSheet.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <UserInterface\NewFrame.h>
#include <UserInterface\pch.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <UserInterface\InterfaceElement.h>
#include <selection.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <savegamedef.h>
#include <UserInterface\Graphic.h>
#include <boost\detail\shared_count.hpp>
#include <Render\objects\texture.h>
#include <bitset>
#include <Render\objects\core.h>
#include <boost\detail\lwm_win32.hpp>
#include <Render\objects\textureproxy.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <FamilyListMgr.h>
#include <weaponinfo.h>
#include <Render\objects\bitmapfont.h>
#include <FamilyList.h>
#include <Family.h>
#include <Universe.h>
#include <localizer\localizer.h>
#include <Waypoint.h>
#include <recorder.h>
#include <LuaGameMisc.h>
#include <Camera\OrbitParameters.h>
#include <SobUnmoveable.h>
#include <wchar.h>
#include <Render\objects\light.h>
#include <boost\utility.hpp>
#include <string>
#include <MainUI.h>
#include <Render\objects\objects.h>
#include <Selector.h>
#include <gamemsg.h>
#include <Render\gl\types.h>
#include <prim.h>
#include <Render\gl\lotypes.h>
#include <queue>
#include <util\statmonitor.h>
#include <Avoidance\AvoidanceBoxes.h>
#include <Squadron.h>
#include <util\utilexports.h>
#include <BuildData.h>
#include <ParadeCommand.h>
#include <Parade.h>
#include <SoundManager\SoundManager.h>
#include <gameRender.h>
#include <WeaponStatic.h>

/* ---------- constants */

enum
{
    gr_skirmish = 1, // 0x0001
    gr_campaign = 2, // 0x0002
    gr_multiplayer = 4, // 0x0004
    gr_all = 7, // 0x0007
};

/* ---------- definitions */

class `anonymous-namespace'::LuaGameMiscLib :
    public LuaLibrary
{
public:
    LuaGameMiscLib(`anonymous-namespace'::LuaGameMiscLib const &); /* compiler_generated() */
    LuaGameMiscLib();
    virtual ~LuaGameMiscLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaGameMiscLib &operator=(`anonymous-namespace'::LuaGameMiscLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaGameMiscLib) == 16, "Invalid `anonymous-namespace'::LuaGameMiscLib size");

/* ---------- prototypes */

extern void Sound_Reload();
extern void Sound_ToggleMusic();
extern void Sound_ToggleSpeech();
extern void Scar_Reload();
extern void Scar_ReloadFile(char const *file);
extern void formStrikeGroup(unsigned __int32 strikeID);
extern void leaveStrikeGroup();
extern void showNISDebug(bool on);
extern void goblinAlphaInterp(bool on);
extern void heal();
extern void setHealth(float percentage);
extern void unlock(unsigned __int32 on);
extern void winLose(bool check);
extern void win();
extern void lose();
extern void reloadFlightManeuvers();
extern void StatMonProfiling(bool on);
extern void toggleNavLights(bool on);
extern void maxActiveLights(unsigned __int32 max);
extern void toggleEngineBurns(bool on);
extern void cameraCollision(bool on);
extern void toggleGoblins(bool on);
extern void setGoblinTol(float tmp);
extern void setDetailLevel(float tmp);
extern void setMinLOD(float tmp);
extern void setOutOfSync(__int32 frame);
extern void getSyncCheckingLevel();
extern void statMon(bool on);
extern void statMonLog(bool on);
extern void rulesProfiler(bool on);
extern void debugRegionMode(bool b);
extern void persistentFeedback(bool enable);
extern void proposeAlliance(char const *name);
extern void setAlliance(unsigned __int32 player1, unsigned __int32 player2);
extern void breakAlliance(unsigned __int32 player1, unsigned __int32 player2);
extern void sharedVision(unsigned __int32 player1, unsigned __int32 player2, bool visible);
extern void pause(bool pause);
extern void showSelection();
extern void gamemisc_dumprules();
extern void ShowShipAvoidance(bool enable);
extern void ShowFormationAvoidance(bool enable);
extern void ShowAsteroidAvoidance(bool enable);
extern void SetTOSettings(unsigned __int32 settings);
extern void ClearTOSettings(unsigned __int32 settings);
extern void SelectBuildFacility(char const *facility);
extern void SendBuildOrder(unsigned __int32 slotIndex);
extern void SendCancelShipOrder();
extern void SendCancelSubSystemOrder();
extern void SendPauseShipOrder();
extern void SendPauseSubSystemOrder();
extern void SelectNextIdleHarvester();
extern void UI_ToggleScreenGameRubrick(char const *screenActive, char const *name, __int32 transType, __int32 gameRubrick);
extern void RecorderSwitchPlayer();
extern void RecorderPauseUniverse(bool pause);
extern void RecorderFastForwardToggle();
extern void Camera_PanCmd(__int32 keyState, __int32 panCmd);
extern void Enable_Pebble_Distribution(__int32 nr);
extern void Pebble_Distribute();
extern void ClearSelectedFromControlGroups();
extern void ClearAllControlGroups();

_static void ReloadEffectEvents();
_static void LocalPlayerToCpu(bool disableUI);
_static void ToggleGodMode();
_static void Create360Screenshots();
_static void DestroySelectedAI();
_static void LOD_SetEnabled(bool bEnabled);
_static void LOD_SetDesiredFPS(float fps);
_static void LOD_SetAllowGoblins(bool bAllow);
_static void LODFX_ForceFull(bool bForce);

/* ---------- globals */

extern char const *LUALIB_GAMEMISC; // 0x83ABDC

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5C6A08();
void Sound_Reload() // 0x5C6A08
{
    mangled_assert("?Sound_Reload@@YGXXZ");
    todo("implement");
    _sub_5C6A08();
}

_extern void _sub_5C6A14();
void Sound_ToggleMusic() // 0x5C6A14
{
    mangled_assert("?Sound_ToggleMusic@@YGXXZ");
    todo("implement");
    _sub_5C6A14();
}

_extern void _sub_5C6A20();
void Sound_ToggleSpeech() // 0x5C6A20
{
    mangled_assert("?Sound_ToggleSpeech@@YGXXZ");
    todo("implement");
    _sub_5C6A20();
}

_extern void _sub_5C6698();
void Scar_Reload() // 0x5C6698
{
    mangled_assert("?Scar_Reload@@YGXXZ");
    todo("implement");
    _sub_5C6698();
}

_extern void _sub_5C66B6(char const *);
void Scar_ReloadFile(char const *file) // 0x5C66B6
{
    mangled_assert("?Scar_ReloadFile@@YGXPBD@Z");
    todo("implement");
    _sub_5C66B6(file);
}

_extern void _sub_5C6B69(unsigned __int32);
void formStrikeGroup(unsigned __int32 strikeID) // 0x5C6B69
{
    mangled_assert("?formStrikeGroup@@YGXI@Z");
    todo("implement");
    _sub_5C6B69(strikeID);
}

_extern void _sub_5C6C4F();
void leaveStrikeGroup() // 0x5C6C4F
{
    mangled_assert("?leaveStrikeGroup@@YGXXZ");
    todo("implement");
    _sub_5C6C4F();
}

_extern void _sub_5C6EBD(bool);
void showNISDebug(bool on) // 0x5C6EBD
{
    mangled_assert("?showNISDebug@@YGX_N@Z");
    todo("implement");
    _sub_5C6EBD(on);
}

_extern void _sub_5C6BF4(bool);
void goblinAlphaInterp(bool on) // 0x5C6BF4
{
    mangled_assert("?goblinAlphaInterp@@YGX_N@Z");
    todo("implement");
    _sub_5C6BF4(on);
}

_extern void _sub_5C6BF9();
void heal() // 0x5C6BF9
{
    mangled_assert("?heal@@YGXXZ");
    todo("implement");
    _sub_5C6BF9();
}

_extern void _sub_5C6E11(float);
void setHealth(float percentage) // 0x5C6E11
{
    mangled_assert("?setHealth@@YGXM@Z");
    todo("implement");
    _sub_5C6E11(percentage);
}

_extern void _sub_5C6F04(unsigned __int32);
void unlock(unsigned __int32 on) // 0x5C6F04
{
    mangled_assert("?unlock@@YGXI@Z");
    todo("implement");
    _sub_5C6F04(on);
}

_extern void _sub_5C6F22(bool);
void winLose(bool check) // 0x5C6F22
{
    mangled_assert("?winLose@@YGX_N@Z");
    todo("implement");
    _sub_5C6F22(check);
}

_extern void _sub_5C6F13();
void win() // 0x5C6F13
{
    mangled_assert("?win@@YGXXZ");
    todo("implement");
    _sub_5C6F13();
}

_extern void _sub_5C6CB6();
void lose() // 0x5C6CB6
{
    mangled_assert("?lose@@YGXXZ");
    todo("implement");
    _sub_5C6CB6();
}

_extern void _sub_5C6DA6();
void reloadFlightManeuvers() // 0x5C6DA6
{
    mangled_assert("?reloadFlightManeuvers@@YGXXZ");
    todo("implement");
    _sub_5C6DA6();
}

_extern void _sub_5C6A2C(bool);
void StatMonProfiling(bool on) // 0x5C6A2C
{
    mangled_assert("?StatMonProfiling@@YGX_N@Z");
    todo("implement");
    _sub_5C6A2C(on);
}

_extern void _sub_5C6EF1(bool);
void toggleNavLights(bool on) // 0x5C6EF1
{
    mangled_assert("?toggleNavLights@@YGX_N@Z");
    todo("implement");
    _sub_5C6EF1(on);
}

_extern void _sub_5C6CC5(unsigned __int32);
void maxActiveLights(unsigned __int32 max) // 0x5C6CC5
{
    mangled_assert("?maxActiveLights@@YGXI@Z");
    todo("implement");
    _sub_5C6CC5(max);
}

_extern void _sub_5C6EE7(bool);
void toggleEngineBurns(bool on) // 0x5C6EE7
{
    mangled_assert("?toggleEngineBurns@@YGX_N@Z");
    todo("implement");
    _sub_5C6EE7(on);
}

_extern void _sub_5C6B39(bool);
void cameraCollision(bool on) // 0x5C6B39
{
    mangled_assert("?cameraCollision@@YGX_N@Z");
    todo("implement");
    _sub_5C6B39(on);
}

_extern void _sub_5C6EEC(bool);
void toggleGoblins(bool on) // 0x5C6EEC
{
    mangled_assert("?toggleGoblins@@YGX_N@Z");
    todo("implement");
    _sub_5C6EEC(on);
}

_extern void _sub_5C6DFD(float);
void setGoblinTol(float tmp) // 0x5C6DFD
{
    mangled_assert("?setGoblinTol@@YGXM@Z");
    todo("implement");
    _sub_5C6DFD(tmp);
}

_extern void _sub_5C6DDF(float);
void setDetailLevel(float tmp) // 0x5C6DDF
{
    mangled_assert("?setDetailLevel@@YGXM@Z");
    todo("implement");
    _sub_5C6DDF(tmp);
}

_extern void _sub_5C6E7D(float);
void setMinLOD(float tmp) // 0x5C6E7D
{
    mangled_assert("?setMinLOD@@YGXM@Z");
    todo("implement");
    _sub_5C6E7D(tmp);
}

_extern void _sub_5C6E91(__int32);
void setOutOfSync(__int32 frame) // 0x5C6E91
{
    mangled_assert("?setOutOfSync@@YGXH@Z");
    todo("implement");
    _sub_5C6E91(frame);
}

_extern void _sub_5C6BE9();
void getSyncCheckingLevel() // 0x5C6BE9
{
    mangled_assert("?getSyncCheckingLevel@@YGXXZ");
    todo("implement");
    _sub_5C6BE9();
}

_extern void _sub_5C6ECF(bool);
void statMon(bool on) // 0x5C6ECF
{
    mangled_assert("?statMon@@YGX_N@Z");
    todo("implement");
    _sub_5C6ECF(on);
}

_extern void _sub_5C6EDB(bool);
void statMonLog(bool on) // 0x5C6EDB
{
    mangled_assert("?statMonLog@@YGX_N@Z");
    todo("implement");
    _sub_5C6EDB(on);
}

_extern void _sub_5C6DB2(bool);
void rulesProfiler(bool on) // 0x5C6DB2
{
    mangled_assert("?rulesProfiler@@YGX_N@Z");
    todo("implement");
    _sub_5C6DB2(on);
}

_extern void _sub_5C6B44(bool);
void debugRegionMode(bool b) // 0x5C6B44
{
    mangled_assert("?debugRegionMode@@YGX_N@Z");
    todo("implement");
    _sub_5C6B44(b);
}

_extern void _sub_5C6CFC(bool);
void persistentFeedback(bool enable) // 0x5C6CFC
{
    mangled_assert("?persistentFeedback@@YGX_N@Z");
    todo("implement");
    _sub_5C6CFC(enable);
}

_extern void _sub_5C6D1C(char const *);
void proposeAlliance(char const *name) // 0x5C6D1C
{
    mangled_assert("?proposeAlliance@@YGXPBD@Z");
    todo("implement");
    _sub_5C6D1C(name);
}

_extern void _sub_5C6DBE(unsigned __int32, unsigned __int32);
void setAlliance(unsigned __int32 player1, unsigned __int32 player2) // 0x5C6DBE
{
    mangled_assert("?setAlliance@@YGXII@Z");
    todo("implement");
    _sub_5C6DBE(player1, player2);
}

_extern void _sub_5C6B27(unsigned __int32, unsigned __int32);
void breakAlliance(unsigned __int32 player1, unsigned __int32 player2) // 0x5C6B27
{
    mangled_assert("?breakAlliance@@YGXII@Z");
    todo("implement");
    _sub_5C6B27(player1, player2);
}

_extern void _sub_5C6EA0(unsigned __int32, unsigned __int32, bool);
void sharedVision(unsigned __int32 player1, unsigned __int32 player2, bool visible) // 0x5C6EA0
{
    mangled_assert("?sharedVision@@YGXII_N@Z");
    todo("implement");
    _sub_5C6EA0(player1, player2, visible);
}

_extern void _sub_5C6CDA(bool);
void pause(bool pause) // 0x5C6CDA
{
    mangled_assert("?pause@@YGX_N@Z");
    todo("implement");
    _sub_5C6CDA(pause);
}

_extern void _sub_5C6EC2();
void showSelection() // 0x5C6EC2
{
    mangled_assert("?showSelection@@YGXXZ");
    todo("implement");
    _sub_5C6EC2();
}

_extern void _sub_5C6BD5();
void gamemisc_dumprules() // 0x5C6BD5
{
    mangled_assert("?gamemisc_dumprules@@YGXXZ");
    todo("implement");
    _sub_5C6BD5();
}

_extern void _sub_5C6A03(bool);
void ShowShipAvoidance(bool enable) // 0x5C6A03
{
    mangled_assert("?ShowShipAvoidance@@YGX_N@Z");
    todo("implement");
    _sub_5C6A03(enable);
}

_extern void _sub_5C69FE(bool);
void ShowFormationAvoidance(bool enable) // 0x5C69FE
{
    mangled_assert("?ShowFormationAvoidance@@YGX_N@Z");
    todo("implement");
    _sub_5C69FE(enable);
}

_extern void _sub_5C69F2(bool);
void ShowAsteroidAvoidance(bool enable) // 0x5C69F2
{
    mangled_assert("?ShowAsteroidAvoidance@@YGX_N@Z");
    todo("implement");
    _sub_5C69F2(enable);
}

_extern void _sub_5C69E3(unsigned __int32);
void SetTOSettings(unsigned __int32 settings) // 0x5C69E3
{
    mangled_assert("?SetTOSettings@@YGXI@Z");
    todo("implement");
    _sub_5C69E3(settings);
}

_extern void _sub_5C52D9(unsigned __int32);
void ClearTOSettings(unsigned __int32 settings) // 0x5C52D9
{
    mangled_assert("?ClearTOSettings@@YGXI@Z");
    todo("implement");
    _sub_5C52D9(settings);
}

_extern void _sub_5C66DA(char const *);
void SelectBuildFacility(char const *facility) // 0x5C66DA
{
    mangled_assert("?SelectBuildFacility@@YGXPBD@Z");
    todo("implement");
    _sub_5C66DA(facility);
}

_extern void _sub_5C696C(unsigned __int32);
void SendBuildOrder(unsigned __int32 slotIndex) // 0x5C696C
{
    mangled_assert("?SendBuildOrder@@YGXI@Z");
    todo("implement");
    _sub_5C696C(slotIndex);
}

_extern void _sub_5C6983();
void SendCancelShipOrder() // 0x5C6983
{
    mangled_assert("?SendCancelShipOrder@@YGXXZ");
    todo("implement");
    _sub_5C6983();
}

_extern void _sub_5C6998();
void SendCancelSubSystemOrder() // 0x5C6998
{
    mangled_assert("?SendCancelSubSystemOrder@@YGXXZ");
    todo("implement");
    _sub_5C6998();
}

_extern void _sub_5C69AD();
void SendPauseShipOrder() // 0x5C69AD
{
    mangled_assert("?SendPauseShipOrder@@YGXXZ");
    todo("implement");
    _sub_5C69AD();
}

_extern void _sub_5C69C2();
void SendPauseSubSystemOrder() // 0x5C69C2
{
    mangled_assert("?SendPauseSubSystemOrder@@YGXXZ");
    todo("implement");
    _sub_5C69C2();
}

_extern void _sub_5C6815();
void SelectNextIdleHarvester() // 0x5C6815
{
    mangled_assert("?SelectNextIdleHarvester@@YGXXZ");
    todo("implement");
    _sub_5C6815();
}

_extern void _sub_5C6A45(char const *, char const *, __int32, __int32);
void UI_ToggleScreenGameRubrick(char const *screenActive, char const *name, __int32 transType, __int32 gameRubrick) // 0x5C6A45
{
    mangled_assert("?UI_ToggleScreenGameRubrick@@YGXPBD0HH@Z");
    todo("implement");
    _sub_5C6A45(screenActive, name, transType, gameRubrick);
}

_extern void _sub_5C5110(LuaBinding::ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2Free<unsigned int,unsigned int,void> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2Free<unsigned int,unsigned int,void> >::~ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2Free<unsigned int,unsigned int,void> >() // 0x5C5110
{
    mangled_assert("??1?$ObjInternal2@IIXV?$Functor2Free@IIX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C5110(this);
}

_extern void _sub_5C5116(LuaBinding::ObjInternal3<unsigned int,unsigned int,bool,void,LuaBinding::Functor3Free<unsigned int,unsigned int,bool,void> > *const);
_inline LuaBinding::ObjInternal3<unsigned int,unsigned int,bool,void,LuaBinding::Functor3Free<unsigned int,unsigned int,bool,void> >::~ObjInternal3<unsigned int,unsigned int,bool,void,LuaBinding::Functor3Free<unsigned int,unsigned int,bool,void> >() // 0x5C5116
{
    mangled_assert("??1?$ObjInternal3@II_NXV?$Functor3Free@II_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C5116(this);
}

_extern void _sub_5C511C(LuaBinding::ObjInternal4<char const *,char const *,int,int,void,LuaBinding::Functor4Free<char const *,char const *,int,int,void> > *const);
_inline LuaBinding::ObjInternal4<char const *,char const *,int,int,void,LuaBinding::Functor4Free<char const *,char const *,int,int,void> >::~ObjInternal4<char const *,char const *,int,int,void,LuaBinding::Functor4Free<char const *,char const *,int,int,void> >() // 0x5C511C
{
    mangled_assert("??1?$ObjInternal4@PBDPBDHHXV?$Functor4Free@PBDPBDHHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C511C(this);
}

_extern void _sub_5C56AC();
void RecorderSwitchPlayer() // 0x5C56AC
{
    mangled_assert("?RecorderSwitchPlayer@@YGXXZ");
    todo("implement");
    _sub_5C56AC();
}

_extern void _sub_5C5674(bool);
void RecorderPauseUniverse(bool pause) // 0x5C5674
{
    mangled_assert("?RecorderPauseUniverse@@YGX_N@Z");
    todo("implement");
    _sub_5C5674(pause);
}

_extern void _sub_5C5639();
void RecorderFastForwardToggle() // 0x5C5639
{
    mangled_assert("?RecorderFastForwardToggle@@YGXXZ");
    todo("implement");
    _sub_5C5639();
}

_extern void _sub_5C5250(__int32, __int32);
void Camera_PanCmd(__int32 keyState, __int32 panCmd) // 0x5C5250
{
    mangled_assert("?Camera_PanCmd@@YGXHH@Z");
    todo("implement");
    _sub_5C5250(keyState, panCmd);
}

_extern void _sub_5C556A(__int32);
void Enable_Pebble_Distribution(__int32 nr) // 0x5C556A
{
    mangled_assert("?Enable_Pebble_Distribution@@YGXH@Z");
    todo("implement");
    _sub_5C556A(nr);
}

_extern void _sub_5C5634();
void Pebble_Distribute() // 0x5C5634
{
    mangled_assert("?Pebble_Distribute@@YGXXZ");
    todo("implement");
    _sub_5C5634();
}

_extern void _sub_5C52B5();
void ClearSelectedFromControlGroups() // 0x5C52B5
{
    mangled_assert("?ClearSelectedFromControlGroups@@YGXXZ");
    todo("implement");
    _sub_5C52B5();
}

_extern void _sub_5C527B();
void ClearAllControlGroups() // 0x5C527B
{
    mangled_assert("?ClearAllControlGroups@@YGXXZ");
    todo("implement");
    _sub_5C527B();
}

/* ---------- private code */

_extern void _sub_5C6693();
_static void ReloadEffectEvents() // 0x5C6693
{
    mangled_assert("ReloadEffectEvents");
    todo("implement");
    _sub_5C6693();
}

_extern void _sub_5C55C9(bool);
_static void LocalPlayerToCpu(bool disableUI) // 0x5C55C9
{
    mangled_assert("LocalPlayerToCpu");
    todo("implement");
    _sub_5C55C9(disableUI);
}

_extern void _sub_5C6A36();
_static void ToggleGodMode() // 0x5C6A36
{
    mangled_assert("ToggleGodMode");
    todo("implement");
    _sub_5C6A36();
}

_extern void _sub_5C52F4();
_static void Create360Screenshots() // 0x5C52F4
{
    mangled_assert("Create360Screenshots");
    todo("implement");
    _sub_5C52F4();
}

_extern void _sub_5C5308();
_static void DestroySelectedAI() // 0x5C5308
{
    mangled_assert("DestroySelectedAI");
    todo("implement");
    _sub_5C5308();
}

_extern void _sub_5C55B6(bool);
_static void LOD_SetEnabled(bool bEnabled) // 0x5C55B6
{
    mangled_assert("LOD_SetEnabled");
    todo("implement");
    _sub_5C55B6(bEnabled);
}

_extern void _sub_5C559B(float);
_static void LOD_SetDesiredFPS(float fps) // 0x5C559B
{
    mangled_assert("LOD_SetDesiredFPS");
    todo("implement");
    _sub_5C559B(fps);
}

_extern void _sub_5C5588(bool);
_static void LOD_SetAllowGoblins(bool bAllow) // 0x5C5588
{
    mangled_assert("LOD_SetAllowGoblins");
    todo("implement");
    _sub_5C5588(bAllow);
}

_extern void _sub_5C5575(bool);
_static void LODFX_ForceFull(bool bForce) // 0x5C5575
{
    mangled_assert("LODFX_ForceFull");
    todo("implement");
    _sub_5C5575(bForce);
}
#endif

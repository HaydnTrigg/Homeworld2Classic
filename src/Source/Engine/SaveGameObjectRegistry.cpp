#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <SobZeroMassBody.h>
#include <resourceCommand.h>
#include <shipHold.h>
#include <Missile.h>
#include <xstring>
#include <DynamicPoint.h>
#include <SquadronList.h>
#include <sobzeromassbodystatic.h>
#include <MissileStatic.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <sob.h>
#include <LaunchCommand.h>
#include <memory\memorylib.h>
#include <sobstatic.h>
#include <Modifiers\ModifierAbility.h>
#include <Collision\Primitives\sphere.h>
#include <crtdefs.h>
#include <FormHyperspaceGateCommand.h>
#include <Sob\DustCloud\DustCloudGroup.h>
#include <RetireCommand.h>
#include <gameRandom.h>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <AxisAlignBox.h>
#include <FormationCommands\FormationLatchCommand.h>
#include <weaponinfo.h>
#include <random.h>
#include <MoveToTargetAndShootAttackStyle.h>
#include <Sob\Nebula\NebulaGroup.h>
#include <Mathlib\matrix3.h>
#include <RepairByLatchingCommand.h>
#include <BuildJobType.h>
#include <FormationCommands\FormationCommand.h>
#include <LayMinesCommand.h>
#include <playerresourcetype.h>
#include <Ship\Formation.h>
#include <new>
#include <Ship\FormationPattern.h>
#include <Render\objects\textureregistry.h>
#include <exception>
#include <AttackCommand.h>
#include <xstddef>
#include <TeamColourRegistry.h>
#include <AttackStyle.h>
#include <idlecommand.h>
#include <type_traits>
#include <savegame.h>
#include <DefenseFieldManager.h>
#include <task.h>
#include <WeaponFire\InstantHit.h>
#include <FormationCommands\FormationAttackCommand.h>
#include <stack>
#include <Collision\Primitives\mesh.h>
#include <weaponTargetInfo.h>
#include <Collision\Primitives\triangle.h>
#include <Physics\RigidBody.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Physics\RigidBodyController.h>
#include <KamikazeAttackStyle.h>
#include <Sob\DustCloud\DustCloud.h>
#include <Ship\MissileController.h>
#include <Sob\Resource\ResourceController.h>
#include <ship.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <Parade.h>
#include <Ship\ShipController.h>
#include <xutility>
#include <SobWithMesh.h>
#include <hash_map>
#include <Ship\AdvRigidBodyController.h>
#include <utility>
#include <iosfwd>
#include <SobRigidBody.h>
#include <xhash>
#include <HyperSpaceViaGateCommand.h>
#include <vector>
#include <xmemory>
#include <SobRigidBodyStatic.h>
#include <FormationCommands\FormationLaunchCommand.h>
#include <StrikeGroupFormationNode.h>
#include <LatchManager.h>
#include <StrikeGroup.h>
#include <Sob\Resource\Resource.h>
#include <MeshAnimation.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Collision\Primitives\obb.h>
#include <ShieldTypes.h>
#include <WeaponGimble.h>
#include <compiler\compilerconfig.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <MoveToSobCommand.h>
#include <list>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <DockLaunch.h>
#include <Subsystems\HardPointManager.h>
#include <DockQueue.h>
#include <luaconfig\luabinding.h>
#include <Subsystems\HardPoint.h>
#include <SquadronQueue.h>
#include <luaconfig\luaconfig.h>
#include <CloakManager.h>
#include <Subsystems\HardPointStatic.h>
#include <lua.h>
#include <Race.h>
#include <Mathlib\vector3.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Interpolation.h>
#include <BillboardRender.h>
#include <DockCommand.h>
#include <Graphics\meshrenderproxy.h>
#include <boost\scoped_ptr.hpp>
#include <Sob\Resource\Salvage.h>
#include <DogFightAttackStyle.h>
#include <Collision\Primitives\aabb.h>
#include <Sob\Resource\SalvageStatic.h>
#include <BuildManager.h>
#include <Squadron.h>
#include <SalvageManager.h>
#include <Mathlib\vector2.h>
#include <RallyParadeCommand.h>
#include <OrderFeedback.h>
#include <util\types.h>
#include <Ping.h>
#include <sobid.h>
#include <Waypoint.h>
#include <ResearchData.h>
#include <SobUnmoveable.h>
#include <Sob\DefenseField\DefenseField.h>
#include <platform\osdef.h>
#include <Physics\ZeroMassBody.h>
#include <Sob\DefenseField\DefenseFieldStatic.h>
#include <KeyBindings.h>
#include <Physics\ZeroMassBodyController.h>
#include <Mathlib\mathutil.h>
#include <boost\cstdint.hpp>
#include <abilities.h>
#include <cassert>
#include <UserInterface\SharedGraphicFactory.h>
#include <assert.h>
#include <UserInterface\Graphic.h>
#include <Sob\Nebula\Nebula.h>
#include <Render\objects\texture.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <SubtitleCounter.h>
#include <Render\objects\objects.h>
#include <Modifiers\ModifierMultiplier.h>
#include <subtitle.h>
#include <Render\objects\core.h>
#include <Ship\FormationController.h>
#include <Modifiers\ModifierEffect.h>
#include <RepairManager.h>
#include <Menus\SubtitleScreen.h>
#include <Render\gl\types.h>
#include <Mathlib\quat.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <ParadeCommand.h>
#include <region.h>
#include <commandtype.h>
#include <Graphics\TeamColour.h>
#include <platform\keydefines.h>
#include <DeSpawnCommand.h>
#include <assist\typemagic.h>
#include <Render\gl\lotypes.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <GuardCommand.h>
#include <GameObj.h>
#include <BuildJob.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <TrailTargetCommand.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <UserInterface\StyleSheet.h>
#include <seInterface2\SoundParams.h>
#include <Sphere.h>
#include <UserInterface\pch.h>
#include <Volume.h>
#include <FaceTargetAttackStyle.h>
#include <SOBGroup.h>
#include <Sob\Resource\Asteroid.h>
#include <util\statmonitor.h>
#include <VolumeStatic.h>
#include <Mathlib\mathlibdll.h>
#include <Sob\Resource\AsteroidStatic.h>
#include <util\utilexports.h>
#include <SobUnmoveableStatic.h>
#include <FormationCommands\FormationDockCommand.h>
#include <Mathlib\fastmath.h>
#include <platform\timer.h>
#include <Player.h>
#include <Subsystems\Subsystem.h>
#include <Render\gl\r_types.h>
#include <platform\platformexports.h>
#include <ResearchManager.h>
#include <savegameimpl.h>
#include <Subsystems\SubsystemStatic.h>
#include <Collision\Primitives\capsule.h>
#include <CircleStrafe.h>
#include <Physics\PhysicsObject.h>
#include <weaponstaticinfo.h>
#include <CaptureManager.h>
#include <Collision\Primitives\segment.h>
#include <pathpoints.h>
#include <CircleStrafeBase.h>
#include <GunBinding.h>
#include <LatchPointManager.h>
#include <Collision\BVH\profiling.h>
#include <Render\objects\textureproxy.h>
#include <debug\db.h>
#include <FormationCommands\FormationMoveCommand.h>
#include <MoveCommand.h>
#include <WeaponFire\Bullet.h>
#include <HyperspaceInhibitorManager.h>
#include <command.h>
#include <WeaponFire\WeaponFire.h>
#include <Point.h>
#include <weaponfiretypes.h>
#include <WeaponFixed.h>
#include <deque>
#include <Modifiers\ModifierTargetCache.h>
#include <HyperSpaceCommand.h>
#include <JustShootAttackStyle.h>
#include <HyperSpaceBaseCommand.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <waypointMoveCommand.h>
#include <selection.h>
#include <savegamedef.h>
#include <FlyRoundAttackStyle.h>
#include <boost\detail\shared_count.hpp>
#include <campaign.h>
#include <Collision\Collision.h>
#include <WeaponClassSpecificInfo.h>
#include <boost\detail\lwm_win32.hpp>
#include <scripting.h>
#include <scriptaccess.h>
#include <AttackRun.h>
#include <fixedpoint.h>
#include <scripttypedef.h>
#include <util\fixed.h>
#include <SalvageCommand.h>
#include <WeaponFire\SphereBurst.h>
#include <Ship\MineController.h>
#include <WeaponAnimatedTurret.h>
#include <Render\gl\r_defines.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Ship\FormationTargetInfo.h>
#include <weapon.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\glext.h>
#include <MultiplierTypes.h>
#include <WeaponStatic.h>
#include <UserInterface\InterfaceElement.h>
#include <Collision\BVH\bvh.h>
#include <Physics\PointMass.h>
#include <EventPointerManager.h>
#include <UserInterface\uitypes.h>
#include <SaveGameObjectRegistry.h>
#include <Physics\PointMassController.h>
#include <platform\inputinterface.h>
#include <wchar.h>
#include <string>
#include <BuildQueue.h>
#include <CaptureCommand.h>
#include <queue>
#include <BuildData.h>
#include <DependencyData.h>
#include <sobelem.h>
#include <AttackMoveCommand.h>
#include <WeaponFire\WeaponFireEvent.h>
#include <Family.h>
#include <SensorPingManager.h>

/* ---------- constants */

/* ---------- definitions */

typedef Sob *SobElem;
typedef std::list<SaveObject *,std::allocator<SaveObject *> > SaveObjectList;

/* ---------- prototypes */

extern SaveObject *saveGameConstructSob(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructShip(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructPlayer(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructResource(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructAsteroid(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSalvage(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDustCloud(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructVolume(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructPoint(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSphere(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructAxisAlignBox(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructWeaponFire(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructBullet(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructInstantHit(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSphereBurst(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructMissile(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructMoveCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDockCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructLaunchCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructAttackCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructIdleCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructGuardCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructResourceCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructBuildQueue(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructBuildJob(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructBuildJobType(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructWaypointMoveCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructParadeCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructRallyParadeCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFormHyperspaceGateCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructHyperSpaceViaGateCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructHyperspaceInhibitorManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructHyperSpaceCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructJustShootAttackStyle(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFlyRoundAttackStyle(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFaceTargetAttackStyle(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDogFightAttackStyle(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructAttackRunAttackStyle(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructMoveToTargetAndShootAttackStyle(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructCircleStrafeAttackStyle(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFormationMoveCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFormationAttackCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFormationDockCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFormationLaunchCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructWaypoint(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructWaypointPath(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDockPath(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructShipHold(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructWeaponFixed(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructWeaponGimble(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructWeaponAnimatedTurret(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDockPathPoint(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSquadron(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFormation(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructRigidBody(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructZeroMassBody(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructPointMass(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructShipController(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructMissileController(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructParadeFormation(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFormationController(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructResourceController(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructBuildData(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructResearchData(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructTerm(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructHardPoint(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSubSystem(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructStrikeGroup(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructStrikeGroupFormationNode(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructMoveToSobCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructCaptureCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructCaptureManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructLatchManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructFormationLatchCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSOBGroup(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructRepairManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructRepairByLatchingCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructAttackMoveCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSensorPingManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructTeamColour(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructPingPoint(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructPingOwner(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructPingSelection(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructPingSelectionList(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructCloakManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructNebulaGroup(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructNebulaGroupBase(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructNebula(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructRetireCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDeSpawnCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructLayMinesCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDefenseFieldManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructWeaponFireEvent(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSalvageManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructKamikazeAttackStyle(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructEventPointerManager(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructMineController(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDustCloudGroup(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSalvageCommand(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructDefenseField(SaveGameData *saveGameData);
extern SaveObject *saveGameConstructSubtitleCounter(SaveGameData *saveGameData);
extern unsigned __int32 getSizeOfEngineSaveObjectRegistry();

/* ---------- globals */

extern SaveGameObjectRegistry engineSaveObjectRegistry[101]; // 0x83CC38

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x83CC28
    extern float subtitleTwkScrollDwellEnd; // 0x83CC2C
    extern float subtitleTwkScrollShortest; // 0x83CC30
    extern float subtitleTwkTitleShortest; // 0x83CC34
}

/* ---------- public code */

_extern SaveObject *_sub_62BB38(SaveGameData *);
SaveObject *saveGameConstructSob(SaveGameData *saveGameData) // 0x62BB38
{
    mangled_assert("?saveGameConstructSob@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BB38(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BB3D(SaveGameData *);
SaveObject *saveGameConstructShip(SaveGameData *saveGameData) // 0x62BB3D
{
    mangled_assert("?saveGameConstructShip@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BB3D(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BB77(SaveGameData *);
SaveObject *saveGameConstructPlayer(SaveGameData *saveGameData) // 0x62BB77
{
    mangled_assert("?saveGameConstructPlayer@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BB77(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BBB1(SaveGameData *);
SaveObject *saveGameConstructResource(SaveGameData *saveGameData) // 0x62BBB1
{
    mangled_assert("?saveGameConstructResource@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BBB1(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BBB6(SaveGameData *);
SaveObject *saveGameConstructAsteroid(SaveGameData *saveGameData) // 0x62BBB6
{
    mangled_assert("?saveGameConstructAsteroid@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BBB6(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BBF0(SaveGameData *);
SaveObject *saveGameConstructSalvage(SaveGameData *saveGameData) // 0x62BBF0
{
    mangled_assert("?saveGameConstructSalvage@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BBF0(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BC2A(SaveGameData *);
SaveObject *saveGameConstructDustCloud(SaveGameData *saveGameData) // 0x62BC2A
{
    mangled_assert("?saveGameConstructDustCloud@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BC2A(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BC64(SaveGameData *);
SaveObject *saveGameConstructVolume(SaveGameData *saveGameData) // 0x62BC64
{
    mangled_assert("?saveGameConstructVolume@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BC64(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BC9E(SaveGameData *);
SaveObject *saveGameConstructPoint(SaveGameData *saveGameData) // 0x62BC9E
{
    mangled_assert("?saveGameConstructPoint@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BC9E(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BCD8(SaveGameData *);
SaveObject *saveGameConstructSphere(SaveGameData *saveGameData) // 0x62BCD8
{
    mangled_assert("?saveGameConstructSphere@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BCD8(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BD12(SaveGameData *);
SaveObject *saveGameConstructAxisAlignBox(SaveGameData *saveGameData) // 0x62BD12
{
    mangled_assert("?saveGameConstructAxisAlignBox@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BD12(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BD4C(SaveGameData *);
SaveObject *saveGameConstructWeaponFire(SaveGameData *saveGameData) // 0x62BD4C
{
    mangled_assert("?saveGameConstructWeaponFire@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BD4C(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BD51(SaveGameData *);
SaveObject *saveGameConstructBullet(SaveGameData *saveGameData) // 0x62BD51
{
    mangled_assert("?saveGameConstructBullet@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BD51(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BD8A(SaveGameData *);
SaveObject *saveGameConstructInstantHit(SaveGameData *saveGameData) // 0x62BD8A
{
    mangled_assert("?saveGameConstructInstantHit@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BD8A(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BDC3(SaveGameData *);
SaveObject *saveGameConstructSphereBurst(SaveGameData *saveGameData) // 0x62BDC3
{
    mangled_assert("?saveGameConstructSphereBurst@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BDC3(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BDFC(SaveGameData *);
SaveObject *saveGameConstructMissile(SaveGameData *saveGameData) // 0x62BDFC
{
    mangled_assert("?saveGameConstructMissile@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BDFC(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BE36(SaveGameData *);
SaveObject *saveGameConstructMoveCommand(SaveGameData *saveGameData) // 0x62BE36
{
    mangled_assert("?saveGameConstructMoveCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BE36(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BE6D(SaveGameData *);
SaveObject *saveGameConstructDockCommand(SaveGameData *saveGameData) // 0x62BE6D
{
    mangled_assert("?saveGameConstructDockCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BE6D(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BEA4(SaveGameData *);
SaveObject *saveGameConstructLaunchCommand(SaveGameData *saveGameData) // 0x62BEA4
{
    mangled_assert("?saveGameConstructLaunchCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BEA4(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BEDB(SaveGameData *);
SaveObject *saveGameConstructAttackCommand(SaveGameData *saveGameData) // 0x62BEDB
{
    mangled_assert("?saveGameConstructAttackCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BEDB(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BF15(SaveGameData *);
SaveObject *saveGameConstructIdleCommand(SaveGameData *saveGameData) // 0x62BF15
{
    mangled_assert("?saveGameConstructIdleCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BF15(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BF4C(SaveGameData *);
SaveObject *saveGameConstructGuardCommand(SaveGameData *saveGameData) // 0x62BF4C
{
    mangled_assert("?saveGameConstructGuardCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BF4C(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BF83(SaveGameData *);
SaveObject *saveGameConstructResourceCommand(SaveGameData *saveGameData) // 0x62BF83
{
    mangled_assert("?saveGameConstructResourceCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BF83(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BFBA(SaveGameData *);
SaveObject *saveGameConstructBuildQueue(SaveGameData *saveGameData) // 0x62BFBA
{
    mangled_assert("?saveGameConstructBuildQueue@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BFBA(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BFF1(SaveGameData *);
SaveObject *saveGameConstructBuildJob(SaveGameData *saveGameData) // 0x62BFF1
{
    mangled_assert("?saveGameConstructBuildJob@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BFF1(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62C028(SaveGameData *);
SaveObject *saveGameConstructBuildJobType(SaveGameData *saveGameData) // 0x62C028
{
    mangled_assert("?saveGameConstructBuildJobType@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62C028(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AAB3(SaveGameData *);
SaveObject *saveGameConstructWaypointMoveCommand(SaveGameData *saveGameData) // 0x62AAB3
{
    mangled_assert("?saveGameConstructWaypointMoveCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AAB3(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AAEA(SaveGameData *);
SaveObject *saveGameConstructParadeCommand(SaveGameData *saveGameData) // 0x62AAEA
{
    mangled_assert("?saveGameConstructParadeCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AAEA(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AB24(SaveGameData *);
SaveObject *saveGameConstructRallyParadeCommand(SaveGameData *saveGameData) // 0x62AB24
{
    mangled_assert("?saveGameConstructRallyParadeCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AB24(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AB5E(SaveGameData *);
SaveObject *saveGameConstructFormHyperspaceGateCommand(SaveGameData *saveGameData) // 0x62AB5E
{
    mangled_assert("?saveGameConstructFormHyperspaceGateCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AB5E(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AB95(SaveGameData *);
SaveObject *saveGameConstructHyperSpaceViaGateCommand(SaveGameData *saveGameData) // 0x62AB95
{
    mangled_assert("?saveGameConstructHyperSpaceViaGateCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AB95(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62ABCC(SaveGameData *);
SaveObject *saveGameConstructHyperspaceInhibitorManager(SaveGameData *saveGameData) // 0x62ABCC
{
    mangled_assert("?saveGameConstructHyperspaceInhibitorManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62ABCC(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AC03(SaveGameData *);
SaveObject *saveGameConstructHyperSpaceCommand(SaveGameData *saveGameData) // 0x62AC03
{
    mangled_assert("?saveGameConstructHyperSpaceCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AC03(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AC3A(SaveGameData *);
SaveObject *saveGameConstructJustShootAttackStyle(SaveGameData *saveGameData) // 0x62AC3A
{
    mangled_assert("?saveGameConstructJustShootAttackStyle@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AC3A(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AC74(SaveGameData *);
SaveObject *saveGameConstructFlyRoundAttackStyle(SaveGameData *saveGameData) // 0x62AC74
{
    mangled_assert("?saveGameConstructFlyRoundAttackStyle@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AC74(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62ACAE(SaveGameData *);
SaveObject *saveGameConstructFaceTargetAttackStyle(SaveGameData *saveGameData) // 0x62ACAE
{
    mangled_assert("?saveGameConstructFaceTargetAttackStyle@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62ACAE(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62ACE8(SaveGameData *);
SaveObject *saveGameConstructDogFightAttackStyle(SaveGameData *saveGameData) // 0x62ACE8
{
    mangled_assert("?saveGameConstructDogFightAttackStyle@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62ACE8(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AD22(SaveGameData *);
SaveObject *saveGameConstructAttackRunAttackStyle(SaveGameData *saveGameData) // 0x62AD22
{
    mangled_assert("?saveGameConstructAttackRunAttackStyle@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AD22(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AD5C(SaveGameData *);
SaveObject *saveGameConstructMoveToTargetAndShootAttackStyle(SaveGameData *saveGameData) // 0x62AD5C
{
    mangled_assert("?saveGameConstructMoveToTargetAndShootAttackStyle@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AD5C(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AD96(SaveGameData *);
SaveObject *saveGameConstructCircleStrafeAttackStyle(SaveGameData *saveGameData) // 0x62AD96
{
    mangled_assert("?saveGameConstructCircleStrafeAttackStyle@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AD96(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62ADD0(SaveGameData *);
SaveObject *saveGameConstructFormationMoveCommand(SaveGameData *saveGameData) // 0x62ADD0
{
    mangled_assert("?saveGameConstructFormationMoveCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62ADD0(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AE0A(SaveGameData *);
SaveObject *saveGameConstructFormationAttackCommand(SaveGameData *saveGameData) // 0x62AE0A
{
    mangled_assert("?saveGameConstructFormationAttackCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AE0A(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AE41(SaveGameData *);
SaveObject *saveGameConstructFormationDockCommand(SaveGameData *saveGameData) // 0x62AE41
{
    mangled_assert("?saveGameConstructFormationDockCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AE41(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AE78(SaveGameData *);
SaveObject *saveGameConstructFormationLaunchCommand(SaveGameData *saveGameData) // 0x62AE78
{
    mangled_assert("?saveGameConstructFormationLaunchCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AE78(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AEAF(SaveGameData *);
SaveObject *saveGameConstructWaypoint(SaveGameData *saveGameData) // 0x62AEAF
{
    mangled_assert("?saveGameConstructWaypoint@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AEAF(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AEE9(SaveGameData *);
SaveObject *saveGameConstructWaypointPath(SaveGameData *saveGameData) // 0x62AEE9
{
    mangled_assert("?saveGameConstructWaypointPath@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AEE9(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AF20(SaveGameData *);
SaveObject *saveGameConstructDockPath(SaveGameData *saveGameData) // 0x62AF20
{
    mangled_assert("?saveGameConstructDockPath@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AF20(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AF57(SaveGameData *);
SaveObject *saveGameConstructShipHold(SaveGameData *saveGameData) // 0x62AF57
{
    mangled_assert("?saveGameConstructShipHold@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AF57(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AF91(SaveGameData *);
SaveObject *saveGameConstructWeaponFixed(SaveGameData *saveGameData) // 0x62AF91
{
    mangled_assert("?saveGameConstructWeaponFixed@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AF91(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62AFC8(SaveGameData *);
SaveObject *saveGameConstructWeaponGimble(SaveGameData *saveGameData) // 0x62AFC8
{
    mangled_assert("?saveGameConstructWeaponGimble@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62AFC8(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B002(SaveGameData *);
SaveObject *saveGameConstructWeaponAnimatedTurret(SaveGameData *saveGameData) // 0x62B002
{
    mangled_assert("?saveGameConstructWeaponAnimatedTurret@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B002(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B03C(SaveGameData *);
SaveObject *saveGameConstructDockPathPoint(SaveGameData *saveGameData) // 0x62B03C
{
    mangled_assert("?saveGameConstructDockPathPoint@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B03C(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B073(SaveGameData *);
SaveObject *saveGameConstructSquadron(SaveGameData *saveGameData) // 0x62B073
{
    mangled_assert("?saveGameConstructSquadron@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B073(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B0AD(SaveGameData *);
SaveObject *saveGameConstructFormation(SaveGameData *saveGameData) // 0x62B0AD
{
    mangled_assert("?saveGameConstructFormation@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B0AD(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B0E7(SaveGameData *);
SaveObject *saveGameConstructRigidBody(SaveGameData *saveGameData) // 0x62B0E7
{
    mangled_assert("?saveGameConstructRigidBody@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B0E7(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B121(SaveGameData *);
SaveObject *saveGameConstructZeroMassBody(SaveGameData *saveGameData) // 0x62B121
{
    mangled_assert("?saveGameConstructZeroMassBody@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B121(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B15A(SaveGameData *);
SaveObject *saveGameConstructPointMass(SaveGameData *saveGameData) // 0x62B15A
{
    mangled_assert("?saveGameConstructPointMass@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B15A(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B194(SaveGameData *);
SaveObject *saveGameConstructShipController(SaveGameData *saveGameData) // 0x62B194
{
    mangled_assert("?saveGameConstructShipController@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B194(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B1CE(SaveGameData *);
SaveObject *saveGameConstructMissileController(SaveGameData *saveGameData) // 0x62B1CE
{
    mangled_assert("?saveGameConstructMissileController@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B1CE(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B208(SaveGameData *);
SaveObject *saveGameConstructParadeFormation(SaveGameData *saveGameData) // 0x62B208
{
    mangled_assert("?saveGameConstructParadeFormation@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B208(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B23F(SaveGameData *);
SaveObject *saveGameConstructFormationController(SaveGameData *saveGameData) // 0x62B23F
{
    mangled_assert("?saveGameConstructFormationController@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B23F(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B279(SaveGameData *);
SaveObject *saveGameConstructResourceController(SaveGameData *saveGameData) // 0x62B279
{
    mangled_assert("?saveGameConstructResourceController@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B279(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B2B0(SaveGameData *);
SaveObject *saveGameConstructBuildData(SaveGameData *saveGameData) // 0x62B2B0
{
    mangled_assert("?saveGameConstructBuildData@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B2B0(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B2EA(SaveGameData *);
SaveObject *saveGameConstructResearchData(SaveGameData *saveGameData) // 0x62B2EA
{
    mangled_assert("?saveGameConstructResearchData@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B2EA(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B324(SaveGameData *);
SaveObject *saveGameConstructTerm(SaveGameData *saveGameData) // 0x62B324
{
    mangled_assert("?saveGameConstructTerm@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B324(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B35B(SaveGameData *);
SaveObject *saveGameConstructHardPoint(SaveGameData *saveGameData) // 0x62B35B
{
    mangled_assert("?saveGameConstructHardPoint@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B35B(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B392(SaveGameData *);
SaveObject *saveGameConstructSubSystem(SaveGameData *saveGameData) // 0x62B392
{
    mangled_assert("?saveGameConstructSubSystem@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B392(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B3CC(SaveGameData *);
SaveObject *saveGameConstructStrikeGroup(SaveGameData *saveGameData) // 0x62B3CC
{
    mangled_assert("?saveGameConstructStrikeGroup@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B3CC(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B403(SaveGameData *);
SaveObject *saveGameConstructStrikeGroupFormationNode(SaveGameData *saveGameData) // 0x62B403
{
    mangled_assert("?saveGameConstructStrikeGroupFormationNode@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B403(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B43A(SaveGameData *);
SaveObject *saveGameConstructMoveToSobCommand(SaveGameData *saveGameData) // 0x62B43A
{
    mangled_assert("?saveGameConstructMoveToSobCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B43A(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B471(SaveGameData *);
SaveObject *saveGameConstructCaptureCommand(SaveGameData *saveGameData) // 0x62B471
{
    mangled_assert("?saveGameConstructCaptureCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B471(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B4A8(SaveGameData *);
SaveObject *saveGameConstructCaptureManager(SaveGameData *saveGameData) // 0x62B4A8
{
    mangled_assert("?saveGameConstructCaptureManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B4A8(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B4DF(SaveGameData *);
SaveObject *saveGameConstructLatchManager(SaveGameData *saveGameData) // 0x62B4DF
{
    mangled_assert("?saveGameConstructLatchManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B4DF(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B516(SaveGameData *);
SaveObject *saveGameConstructFormationLatchCommand(SaveGameData *saveGameData) // 0x62B516
{
    mangled_assert("?saveGameConstructFormationLatchCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B516(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B54D(SaveGameData *);
SaveObject *saveGameConstructSOBGroup(SaveGameData *saveGameData) // 0x62B54D
{
    mangled_assert("?saveGameConstructSOBGroup@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B54D(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B584(SaveGameData *);
SaveObject *saveGameConstructRepairManager(SaveGameData *saveGameData) // 0x62B584
{
    mangled_assert("?saveGameConstructRepairManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B584(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B5BE(SaveGameData *);
SaveObject *saveGameConstructRepairByLatchingCommand(SaveGameData *saveGameData) // 0x62B5BE
{
    mangled_assert("?saveGameConstructRepairByLatchingCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B5BE(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B5F5(SaveGameData *);
SaveObject *saveGameConstructAttackMoveCommand(SaveGameData *saveGameData) // 0x62B5F5
{
    mangled_assert("?saveGameConstructAttackMoveCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B5F5(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B62C(SaveGameData *);
SaveObject *saveGameConstructSensorPingManager(SaveGameData *saveGameData) // 0x62B62C
{
    mangled_assert("?saveGameConstructSensorPingManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B62C(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B663(SaveGameData *);
SaveObject *saveGameConstructTeamColour(SaveGameData *saveGameData) // 0x62B663
{
    mangled_assert("?saveGameConstructTeamColour@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B663(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B69D(SaveGameData *);
SaveObject *saveGameConstructPingPoint(SaveGameData *saveGameData) // 0x62B69D
{
    mangled_assert("?saveGameConstructPingPoint@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B69D(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B6D7(SaveGameData *);
SaveObject *saveGameConstructPingOwner(SaveGameData *saveGameData) // 0x62B6D7
{
    mangled_assert("?saveGameConstructPingOwner@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B6D7(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B711(SaveGameData *);
SaveObject *saveGameConstructPingSelection(SaveGameData *saveGameData) // 0x62B711
{
    mangled_assert("?saveGameConstructPingSelection@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B711(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B74B(SaveGameData *);
SaveObject *saveGameConstructPingSelectionList(SaveGameData *saveGameData) // 0x62B74B
{
    mangled_assert("?saveGameConstructPingSelectionList@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B74B(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B785(SaveGameData *);
SaveObject *saveGameConstructCloakManager(SaveGameData *saveGameData) // 0x62B785
{
    mangled_assert("?saveGameConstructCloakManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B785(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B7BC(SaveGameData *);
SaveObject *saveGameConstructNebulaGroup(SaveGameData *saveGameData) // 0x62B7BC
{
    mangled_assert("?saveGameConstructNebulaGroup@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B7BC(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B7F3(SaveGameData *);
SaveObject *saveGameConstructNebulaGroupBase(SaveGameData *saveGameData) // 0x62B7F3
{
    mangled_assert("?saveGameConstructNebulaGroupBase@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B7F3(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B82A(SaveGameData *);
SaveObject *saveGameConstructNebula(SaveGameData *saveGameData) // 0x62B82A
{
    mangled_assert("?saveGameConstructNebula@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B82A(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B864(SaveGameData *);
SaveObject *saveGameConstructRetireCommand(SaveGameData *saveGameData) // 0x62B864
{
    mangled_assert("?saveGameConstructRetireCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B864(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B89B(SaveGameData *);
SaveObject *saveGameConstructDeSpawnCommand(SaveGameData *saveGameData) // 0x62B89B
{
    mangled_assert("?saveGameConstructDeSpawnCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B89B(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B8D2(SaveGameData *);
SaveObject *saveGameConstructLayMinesCommand(SaveGameData *saveGameData) // 0x62B8D2
{
    mangled_assert("?saveGameConstructLayMinesCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B8D2(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B909(SaveGameData *);
SaveObject *saveGameConstructDefenseFieldManager(SaveGameData *saveGameData) // 0x62B909
{
    mangled_assert("?saveGameConstructDefenseFieldManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B909(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B940(SaveGameData *);
SaveObject *saveGameConstructWeaponFireEvent(SaveGameData *saveGameData) // 0x62B940
{
    mangled_assert("?saveGameConstructWeaponFireEvent@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B940(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B977(SaveGameData *);
SaveObject *saveGameConstructSalvageManager(SaveGameData *saveGameData) // 0x62B977
{
    mangled_assert("?saveGameConstructSalvageManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B977(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B9AE(SaveGameData *);
SaveObject *saveGameConstructKamikazeAttackStyle(SaveGameData *saveGameData) // 0x62B9AE
{
    mangled_assert("?saveGameConstructKamikazeAttackStyle@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B9AE(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62B9E8(SaveGameData *);
SaveObject *saveGameConstructEventPointerManager(SaveGameData *saveGameData) // 0x62B9E8
{
    mangled_assert("?saveGameConstructEventPointerManager@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62B9E8(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BA1F(SaveGameData *);
SaveObject *saveGameConstructMineController(SaveGameData *saveGameData) // 0x62BA1F
{
    mangled_assert("?saveGameConstructMineController@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BA1F(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BA59(SaveGameData *);
SaveObject *saveGameConstructDustCloudGroup(SaveGameData *saveGameData) // 0x62BA59
{
    mangled_assert("?saveGameConstructDustCloudGroup@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BA59(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BA90(SaveGameData *);
SaveObject *saveGameConstructSalvageCommand(SaveGameData *saveGameData) // 0x62BA90
{
    mangled_assert("?saveGameConstructSalvageCommand@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BA90(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BAC7(SaveGameData *);
SaveObject *saveGameConstructDefenseField(SaveGameData *saveGameData) // 0x62BAC7
{
    mangled_assert("?saveGameConstructDefenseField@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BAC7(saveGameData);
    return __result;
}

_extern SaveObject *_sub_62BB01(SaveGameData *);
SaveObject *saveGameConstructSubtitleCounter(SaveGameData *saveGameData) // 0x62BB01
{
    mangled_assert("?saveGameConstructSubtitleCounter@@YGPAVSaveObject@@PAVSaveGameData@@@Z");
    todo("implement");
    SaveObject * __result = _sub_62BB01(saveGameData);
    return __result;
}

_extern unsigned __int32 _sub_62C05F();
unsigned __int32 getSizeOfEngineSaveObjectRegistry() // 0x62C05F
{
    mangled_assert("?getSizeOfEngineSaveObjectRegistry@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_62C05F();
    return __result;
}

/* ---------- private code */
#endif

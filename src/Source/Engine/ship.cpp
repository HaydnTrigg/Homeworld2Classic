#if 0
/* ---------- headers */

#include "decomp.h"
#include <xhash>
#include <Render\objects\objects.h>
#include <command.h>
#include <LaunchCommand.h>
#include <RepairManager.h>
#include <set>
#include <assist\stlexsmallvector.h>
#include <BuildQueue.h>
#include <Render\gl\types.h>
#include <Ship\Formation.h>
#include <BuildData.h>
#include <Mathlib\matvec.h>
#include <Ship\FormationPattern.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <xstring>
#include <DependencyData.h>
#include <ITweak.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <playerresourcetype.h>
#include <boost\shared_array.hpp>
#include <Tactics.h>
#include <pch.h>
#include <Render\objects\compiledtext.h>
#include <DefenseFieldShieldStatic.h>
#include <memory\memorylib.h>
#include <Parade.h>
#include <TeamColourRegistry.h>
#include <SobZeroMassBody.h>
#include <savegame.h>
#include <shipHold.h>
#include <Render\gl\lotypes.h>
#include <task.h>
#include <sobzeromassbodystatic.h>
#include <ShaderVariables.h>
#include <stack>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\matrix3.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Render\gl\r_types.h>
#include <RenderAnim\RenderModelInstance.h>
#include <SobRigidBody.h>
#include <resourceCommand.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>
#include <SalvageManager.h>
#include <SobRigidBodyStatic.h>
#include <assist\callback.h>
#include <new>
#include <memory\memorysmall.h>
#include <RetireCommand.h>
#include <exception>
#include <xstddef>
#include <HyperspaceInhibitorManager.h>
#include <type_traits>
#include <MeshAnimation.h>
#include <Collision\Primitives\obb.h>
#include <ShieldTypes.h>
#include <gameRender.h>
#include <SimVis\EmitterContainer.h>
#include <Collision\BVH\octree.h>
#include <EngineTrailSystem.h>
#include <platform\cmdline.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <CaptureManager.h>
#include <Collision\BVH\proxy.h>
#include <Ship\MissileController.h>
#include <LatchPointManager.h>
#include <Collision\intersect.h>
#include <Render\objects\mesh.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <DefenseFieldManager.h>
#include <Render\objects\renderable.h>
#include <utility>
#include <iosfwd>
#include <Subsystems\HardPointManager.h>
#include <vector>
#include <Subsystems\HardPoint.h>
#include <xmemory>
#include <Subsystems\HardPointStatic.h>
#include <HyperSpaceViaGateCommand.h>
#include <fileio\fileioexports.h>
#include <Subsystems\SubSystemType.h>
#include <debug\ctassert.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <EffectCreate.h>
#include <SensorsManager.h>
#include <gameRandom.h>
#include <Interpolation.h>
#include <SoundManager\SoundManager.h>
#include <random.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <SobFactory.h>
#include <math.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Render\gl\r_defines.h>
#include <MADState.h>
#include <Render\gl\glext.h>
#include <MainUI.h>
#include <Selector.h>
#include <HierarchyDynamic.h>
#include <Render\objects\misctextures.h>
#include <MetaSelTarg.h>
#include <FamilyListMgr.h>
#include <HierarchyStatic.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <Universe.h>
#include <platform\timer.h>
#include <FamilyList.h>
#include <Collision\Primitives\mesh.h>
#include <Mathlib\vector4.h>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <alliance.h>
#include <Family.h>
#include <Collision\Primitives\triangle.h>
#include <SobUnmoveable.h>
#include <DynamicPoint.h>
#include <luaconfig\luabinding.h>
#include <SensorPingManager.h>
#include <map>
#include <abilities.h>
#include <luaconfig\luaconfig.h>
#include <xtree>
#include <lua.h>
#include <Squadron.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <Sob\DustCloud\DustCloud.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <DockLaunch.h>
#include <Mathlib\mathutil.h>
#include <DockQueue.h>
#include <Mathlib\vector2.h>
#include <SquadronQueue.h>
#include <util\types.h>
#include <Modifiers\ModifierUIInfo.h>
#include <GameEventDefs.h>
#include <Modifiers\ModifierMultiplier.h>
#include <CloakManager.h>
#include <GameEventSys.h>
#include <Physics\PhysicsEngine.h>
#include <Race.h>
#include <Modifiers\ModifierEffect.h>
#include <Mathlib\LinearInterp.h>
#include <Render\objects\shadowsettings.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <FormationCommands\FormationCommand.h>
#include <Sob\Resource\Salvage.h>
#include <BattleScar\BattleScarStats.h>
#include <seInterface2\SoundParams.h>
#include <Sob\Resource\Resource.h>
#include <BattleScar\BattleScarManager.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Decal\DecalManager.h>
#include <Modifiers\ModifierApplier.h>
#include <seInterface2\SampleID.h>
#include <boost\scoped_array.hpp>
#include <Decal\VertexPool.h>
#include <seInterface2\SampleBase.h>
#include <BuildManager.h>
#include <Camera\OrbitParameters.h>
#include <Mathlib\quat.h>
#include <Render\objects\core.h>
#include <ResearchData.h>
#include <Collision\Primitives\capsule.h>
#include <Subsystems\Subsystem.h>
#include <Graphics\TeamColour.h>
#include <Camera\Camera.h>
#include <Collision\Primitives\segment.h>
#include <Camera\Frustum.h>
#include <Collision\BVH\profiling.h>
#include <Subsystems\SubsystemStatic.h>
#include <shipstatic.h>
#include <Camera\Plane3.h>
#include <weaponstaticinfo.h>
#include <BillboardRender.h>
#include <GunBinding.h>
#include <Graphics\meshrenderproxy.h>
#include <SimVis\ShipVis.h>
#include <SimVis\RenderModelVis.h>
#include <Ship\MineController.h>
#include <Render\objects\cliprect.h>
#include <SimVis\SobVis.h>
#include <Sob\Resource\SalvageStatic.h>
#include <AttackCommand.h>
#include <Render\objects\options.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\mathlibdll.h>
#include <AttackStyle.h>
#include <LevelDesc.h>
#include <Mathlib\fastmath.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Physics\RigidBody.h>
#include <SimVis\RenderModelScars.h>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <Physics\PhysicsObject.h>
#include <pathpoints.h>
#include <fog.h>
#include <gamestructimpl.h>
#include <debug\db.h>
#include <WeaponStatic.h>
#include <gameRenderDebug.h>
#include <Badge.h>
#include <Render\objects\fontsystem.h>
#include <Decal\DecalRefMesh.h>
#include <fixedpoint.h>
#include <WeaponClassSpecificInfo.h>
#include <Render\objects\bitmapfont.h>
#include <util\fixed.h>
#include <deque>
#include <Graphics\AutoLOD.h>
#include <Ship\FormationTargetInfo.h>
#include <OrderFeedback.h>
#include <SimVis\EffectContainer.h>
#include <weapon.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <WeaponFire\WeaponFire.h>
#include <seInterface2\sedefinesshared.h>
#include <App\Hw2Identify.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <weaponfiretypes.h>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <Player.h>
#include <savegamedef.h>
#include <ResearchManager.h>
#include <boost\detail\shared_count.hpp>
#include <Render\FxGL\FXManager.h>
#include <bitset>
#include <Render\FxGL\VarMulti.h>
#include <boost\detail\lwm_win32.hpp>
#include <gameSettings.h>
#include <Ship\ShipController.h>
#include <syncChecking.h>
#include <Ship\AdvRigidBodyController.h>
#include <renderer.h>
#include <Collision\Collision.h>
#include <config.h>
#include <Physics\RigidBodyController.h>
#include <memory\memoryalloc.h>
#include <boost\static_assert.hpp>
#include <weaponTargetInfo.h>
#include <platform\osdef.h>
#include <sob.h>
#include <RenderAnim\MarkerInstance.h>
#include <sobstatic.h>
#include <wchar.h>
#include <string>
#include <Collision\Primitives\sphere.h>
#include <dbdefines.h>
#include <DockCommand.h>
#include <UnitCaps\UnitCaps.h>
#include <Modifiers\ModifierAbility.h>
#include <queue>
#include <HyperSpaceCommand.h>
#include <weaponinfo.h>
#include <SOBGroupManager.h>
#include <NavLights.h>
#include <HyperSpaceBaseCommand.h>
#include <hash_map>
#include <Render\objects\light.h>
#include <MoveCommand.h>

/* ---------- constants */

enum `anonymous-namespace'::MeshInstanceCache
{
    MIC_FogColour = 0,
    MIC_Number,
};

/* ---------- definitions */

typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SubSystem *> > > SubSystemVectorIterator;
typedef `anonymous-namespace'::MeshInstanceCache ?A0x3b013dc1::MeshInstanceCache;
typedef `anonymous-namespace'::TeamColourAdjustPred ?A0x3b013dc1::TeamColourAdjustPred;

class `anonymous-namespace'::TeamColourAdjustPred
{
public:
    TeamColourAdjustPred(unsigned long, unsigned long, unsigned long, unsigned long, vector4 const &, vector4 const &, Texture const *);
    void Do(CompoundStateBlock const *, StateVariableInstance *);
private:
    unsigned long const m_badgeKey1; // 0x0
    unsigned long const m_badgeKey2; // 0x4
    unsigned long const m_baseKey; // 0x8
    unsigned long const m_stripeKey; // 0xC
    vector4 const m_baseColour; // 0x10
    vector4 const m_stripeColour; // 0x20
    Texture const *m_badge; // 0x30
};
static_assert(sizeof(`anonymous-namespace'::TeamColourAdjustPred) == 52, "Invalid `anonymous-namespace'::TeamColourAdjustPred size");

/* ---------- prototypes */

extern bool isEnemySob(Sob const *s, void *data);
extern bool mcIsBetweenInclusive(float test, float highBound, float lowBound);

_static void InitializeMeshInstanceCache(MeshInstance *instance);
_static vector3 generateRandomVector(float radius);
_static void shadowMatrix(float *shadowMat[4], float const *groundplane, float const *lightpos);

/* ---------- globals */

extern char const Ship::m_saveToken[0]; // 0x78CB08
extern bool gSob_PlayerShipsInvincible; // 0x843C44
extern float Ship::ATTACKING_ME_LIST_STALE_TIME; // 0x83524C
extern SaveData const Ship::m_saveData[44]; // 0x78CB10

/* ---------- private variables */

_static
{
    extern char const *specialDeathEffect; // 0x835250
}

/* ---------- public code */

bool Ship::canBeInterrupted(CommandType) const // 0x48B214
{
    mangled_assert("?canBeInterrupted@Ship@@QBE_NW4CommandType@@@Z");
    todo("implement");
}

_inline SobStatic::PatchMarker::PatchMarker(SobStatic::PatchMarker const &) // 0x489C5A
{
    mangled_assert("??0PatchMarker@SobStatic@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

void Ship::resetShaderVars(vector4 const &) // 0x48F336
{
    mangled_assert("?resetShaderVars@Ship@@AAEXABVvector4@@@Z");
    todo("implement");
}

Ship::Ship(char const *, Player *) // 0x489D25
{
    mangled_assert("??0Ship@@QAE@PBDPAVPlayer@@@Z");
    todo("implement");
}

_inline WeaponInfo::WeaponInfo() // 0x48A21F
{
    mangled_assert("??0WeaponInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameEvent_ResourceCollection::~GameEvent_ResourceCollection() // 0x48A231
{
    mangled_assert("??1GameEvent_ResourceCollection@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void Ship::postRestore() // 0x48E762
{
    mangled_assert("?postRestore@Ship@@UAEXXZ");
    todo("implement");
}

void Ship::setupShipController() // 0x48F9B5
{
    mangled_assert("?setupShipController@Ship@@AAEXXZ");
    todo("implement");
}

void Ship::setupWeapons() // 0x48FAF7
{
    mangled_assert("?setupWeapons@Ship@@QAEXXZ");
    todo("implement");
}

void Ship::setupHardPoints() // 0x48F9AA
{
    mangled_assert("?setupHardPoints@Ship@@IAEXXZ");
    todo("implement");
}

Weapon *Ship::getWeaponWithID(__int32) // 0x48D5E5
{
    mangled_assert("?getWeaponWithID@Ship@@QAEPAVWeapon@@H@Z");
    todo("implement");
}

Ship::Ship(SaveGameData *) // 0x489C82
{
    mangled_assert("??0Ship@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void Ship::defaultSettings() // 0x48B4E7
{
    mangled_assert("?defaultSettings@Ship@@QAEXXZ");
    todo("implement");
}

void Ship::onHealthChange(float) // 0x48E567
{
    mangled_assert("?onHealthChange@Ship@@MAEXM@Z");
    todo("implement");
}

bool Ship::availableSpaceForSubSystem(unsigned __int32) // 0x48B198
{
    mangled_assert("?availableSpaceForSubSystem@Ship@@QAE_NI@Z");
    todo("implement");
}

void Ship::getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &) // 0x48C156
{
    mangled_assert("?getFreeHardpoints@Ship@@QAEXAAV?$vector@PAVHardPoint@@V?$allocator@PAVHardPoint@@@std@@@std@@@Z");
    todo("implement");
}

void Ship::shipDidDamage(float) // 0x48FD29
{
    mangled_assert("?shipDidDamage@Ship@@QAEXM@Z");
    todo("implement");
}

void Ship::cleanUpWeapons() // 0x48B396
{
    mangled_assert("?cleanUpWeapons@Ship@@QAEXXZ");
    todo("implement");
}

Ship::~Ship() // 0x48A238
{
    mangled_assert("??1Ship@@UAE@XZ");
    todo("implement");
}

_inline WeaponInfo::~WeaponInfo() // 0x48A2CD
{
    mangled_assert("??1WeaponInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void Ship::sobVisInit() // 0x48FE13
{
    mangled_assert("?sobVisInit@Ship@@UAEXXZ");
    todo("implement");
}

void Ship::RemoveAllSimData() // 0x48A74D
{
    mangled_assert("?RemoveAllSimData@Ship@@IAEXXZ");
    todo("implement");
}

void Ship::RemoveFromSimulation() // 0x48A8C2
{
    mangled_assert("?RemoveFromSimulation@Ship@@MAEXXZ");
    todo("implement");
}

void Ship::addAttacker(Ship *) // 0x48ABC7
{
    mangled_assert("?addAttacker@Ship@@QAEXPAV1@@Z");
    todo("implement");
}

bool isEnemySob(Sob const *s, void *data) // 0x48DE89
{
    mangled_assert("?isEnemySob@@YG_NPBVSob@@PAX@Z");
    todo("implement");
}

void Ship::purgeFriendliesFromAttackingList() // 0x48E860
{
    mangled_assert("?purgeFriendliesFromAttackingList@Ship@@QAEXXZ");
    todo("implement");
}

void Ship::setPlayerOwner(Player *) // 0x48F7B0
{
    mangled_assert("?setPlayerOwner@Ship@@UAEXPAVPlayer@@@Z");
    todo("implement");
}

Command *Ship::getActiveCommand() const // 0x48C060
{
    mangled_assert("?getActiveCommand@Ship@@QBEPAVCommand@@XZ");
    todo("implement");
}

Command *Ship::tryToGetCommand(CommandType) const // 0x490848
{
    mangled_assert("?tryToGetCommand@Ship@@QBEPAVCommand@@W4CommandType@@@Z");
    todo("implement");
}

BaseCommandStaticInfo *Ship::getCommandDataStatic(CommandType) const // 0x48C0F9
{
    mangled_assert("?getCommandDataStatic@Ship@@QBEPAVBaseCommandStaticInfo@@W4CommandType@@@Z");
    todo("implement");
}

BaseCommandStaticInfo *Ship::getActiveCommandDataStatic() // 0x48C071
{
    mangled_assert("?getActiveCommandDataStatic@Ship@@QAEPAVBaseCommandStaticInfo@@XZ");
    todo("implement");
}

void Ship::getShipsInRetaliationRange(Selection &, unsigned __int32) const // 0x48CC5A
{
    mangled_assert("?getShipsInRetaliationRange@Ship@@QBEXAAVSelection@@I@Z");
    todo("implement");
}

bool Ship::canExecuteOrder(OrderType) const // 0x48B230
{
    mangled_assert("?canExecuteOrder@Ship@@QBE_NW4OrderType@@@Z");
    todo("implement");
}

void Ship::reloadStats() // 0x48E9D6
{
    mangled_assert("?reloadStats@Ship@@UAEXXZ");
    todo("implement");
}

void Ship::flyShipToIntersectionPoint(Sob *, float) // 0x48BCD3
{
    mangled_assert("?flyShipToIntersectionPoint@Ship@@QAEXPAVSob@@M@Z");
    todo("implement");
}

void Ship::flyShipToSpaceObject(Sob *, vector3 const &, vector3, vector3, float) // 0x48BEEC
{
    mangled_assert("?flyShipToSpaceObject@Ship@@QAEXPAVSob@@ABVvector3@@V3@2M@Z");
    todo("implement");
}

void Ship::flyShipToSpaceObject(Sob *, vector3 const &, float) // 0x48BE6E
{
    mangled_assert("?flyShipToSpaceObject@Ship@@QAEXPAVSob@@ABVvector3@@M@Z");
    todo("implement");
}

void Ship::flyShipToDynamicPosition(DynamicPoint const &, float const) // 0x48BC8F
{
    mangled_assert("?flyShipToDynamicPosition@Ship@@QAEXABVDynamicPoint@@M@Z");
    todo("implement");
}

void Ship::flyShipToPoint(__int32, vector3 const &, float) // 0x48BD3B
{
    mangled_assert("?flyShipToPoint@Ship@@QAEXHABVvector3@@M@Z");
    todo("implement");
}

void Ship::stopShip() // 0x4907A1
{
    mangled_assert("?stopShip@Ship@@QAEXXZ");
    todo("implement");
}

bool Ship::finishedMovementGoals() // 0x48BA09
{
    mangled_assert("?finishedMovementGoals@Ship@@QAE_NXZ");
    todo("implement");
}

bool Ship::isAttacking() const // 0x48D9E5
{
    mangled_assert("?isAttacking@Ship@@QBE_NXZ");
    todo("implement");
}

bool Ship::isBeingAttacked() const // 0x48DA2B
{
    mangled_assert("?isBeingAttacked@Ship@@QBE_NXZ");
    todo("implement");
}

bool Ship::isInCombat() const // 0x48DEFD
{
    mangled_assert("?isInCombat@Ship@@QBE_NXZ");
    todo("implement");
}

void Ship::clearAttackingMeList() // 0x48B3E2
{
    mangled_assert("?clearAttackingMeList@Ship@@QAEXXZ");
    todo("implement");
}

bool Ship::enemyAttackingUs(Ship const *) const // 0x48B93F
{
    mangled_assert("?enemyAttackingUs@Ship@@QBE_NPBV1@@Z");
    todo("implement");
}

float Ship::getMaxActiveWeaponRange() const // 0x48C585
{
    mangled_assert("?getMaxActiveWeaponRange@Ship@@QBEMXZ");
    todo("implement");
}

SubSystem *Ship::getSubSystem(char const *) const // 0x48CD1C
{
    mangled_assert("?getSubSystem@Ship@@QBEPAVSubSystem@@PBD@Z");
    todo("implement");
}

float Ship::getMinActiveWeaponRange() const // 0x48C786
{
    mangled_assert("?getMinActiveWeaponRange@Ship@@QBEMXZ");
    todo("implement");
}

void Ship::setFormation(Formation *) // 0x48F700
{
    mangled_assert("?setFormation@Ship@@QAEXPAVFormation@@@Z");
    todo("implement");
}

void Ship::setSquadron(Squadron *) // 0x48F99D
{
    mangled_assert("?setSquadron@Ship@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

bool mcIsBetweenInclusive(float test, float highBound, float lowBound) // 0x48E18D
{
    mangled_assert("?mcIsBetweenInclusive@@YG_NMMM@Z");
    todo("implement");
}

bool Ship::IsShipNearPosition(vector3 *, float) // 0x48A6DA
{
    mangled_assert("?IsShipNearPosition@Ship@@QAE_NPAVvector3@@M@Z");
    todo("implement");
}

void Ship::setPointToBehaviour(Ship::PointToBehaviour) // 0x48F8D5
{
    mangled_assert("?setPointToBehaviour@Ship@@QAEXW4PointToBehaviour@1@@Z");
    todo("implement");
}

void Ship::setPointToTarget(DynamicPoint const &, float) // 0x48F91D
{
    mangled_assert("?setPointToTarget@Ship@@QAEXABVDynamicPoint@@M@Z");
    todo("implement");
}

void Ship::fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &) // 0x48BA14
{
    mangled_assert("?fireDroppables@Ship@@QAEXABVvector3@@AAV?$list@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@@Z");
    todo("implement");
}

void Ship::flushWeaponTargets() // 0x48BC23
{
    mangled_assert("?flushWeaponTargets@Ship@@QAEXXZ");
    todo("implement");
}

void Ship::fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &) // 0x48BAAF
{
    mangled_assert("?fireWeaponsAtTarget@Ship@@QAEXABVWeaponTargetInfo@@ABVSelection@@@Z");
    todo("implement");
}

void Ship::setEnableDisableWeapon(char const *, bool) // 0x48F64A
{
    mangled_assert("?setEnableDisableWeapon@Ship@@QAEXPBD_N@Z");
    todo("implement");
}

void Ship::weaponUpdate(float) // 0x49142E
{
    mangled_assert("?weaponUpdate@Ship@@QAEXM@Z");
    todo("implement");
}

void Ship::setEnforceMaximumAngles(bool) // 0x48F6A0
{
    mangled_assert("?setEnforceMaximumAngles@Ship@@QAEX_N@Z");
    todo("implement");
}

void Ship::initialUpdateController() // 0x48D6DE
{
    mangled_assert("?initialUpdateController@Ship@@IAEXXZ");
    todo("implement");
}

void Ship::updateController() // 0x4909E8
{
    mangled_assert("?updateController@Ship@@IAEXXZ");
    todo("implement");
}

void Ship::updateTimers(float) // 0x491161
{
    mangled_assert("?updateTimers@Ship@@QAEXM@Z");
    todo("implement");
}

bool Ship::isAttackingPlayer(unsigned __int32) const // 0x48D9FA
{
    mangled_assert("?isAttackingPlayer@Ship@@QBE_NI@Z");
    todo("implement");
}

void Ship::attackingPlayer(unsigned __int32) // 0x48B12A
{
    mangled_assert("?attackingPlayer@Ship@@QAEXI@Z");
    todo("implement");
}

void Ship::upgradeHealth(float) // 0x4913AD
{
    mangled_assert("?upgradeHealth@Ship@@QAEXM@Z");
    todo("implement");
}

void Ship::updateSounds(float) // 0x490E45
{
    mangled_assert("?updateSounds@Ship@@QAEXM@Z");
    todo("implement");
}

void Ship::enableControllerSteering(bool) // 0x48B8E5
{
    mangled_assert("?enableControllerSteering@Ship@@QAEX_N@Z");
    todo("implement");
}

void Ship::updateShipControllerState(float) // 0x490D7F
{
    mangled_assert("?updateShipControllerState@Ship@@QAEXM@Z");
    todo("implement");
}

void Ship::updateManagers(float) // 0x490C89
{
    mangled_assert("?updateManagers@Ship@@QAEXM@Z");
    todo("implement");
}

void Ship::updateDamageAssesment(float) // 0x490B11
{
    mangled_assert("?updateDamageAssesment@Ship@@QAEXM@Z");
    todo("implement");
}

void Ship::updateBattleTracker(float) // 0x4909C4
{
    mangled_assert("?updateBattleTracker@Ship@@QAEXM@Z");
    todo("implement");
}

bool Ship::update(float) // 0x4908B7
{
    mangled_assert("?update@Ship@@UAE_NM@Z");
    todo("implement");
}

void Ship::setInHyperspace(bool) // 0x48F742
{
    mangled_assert("?setInHyperspace@Ship@@UAEX_N@Z");
    todo("implement");
}

void Ship::regenerateShields(float) // 0x48E8E5
{
    mangled_assert("?regenerateShields@Ship@@AAEXM@Z");
    todo("implement");
}

void Ship::enforceShieldBounds(ShieldType) // 0x48B98D
{
    mangled_assert("?enforceShieldBounds@Ship@@AAEXW4ShieldType@@@Z");
    todo("implement");
}

void Ship::takeDamageToShield(ShieldType, float const) // 0x490809
{
    mangled_assert("?takeDamageToShield@Ship@@QAEXW4ShieldType@@M@Z");
    todo("implement");
}

bool Ship::getRecentDamageToShield(ShieldType) const // 0x48CA26
{
    mangled_assert("?getRecentDamageToShield@Ship@@QBE_NW4ShieldType@@@Z");
    todo("implement");
}

float Ship::getMaxShield(ShieldType) const // 0x48C6F1
{
    mangled_assert("?getMaxShield@Ship@@QBEMW4ShieldType@@@Z");
    todo("implement");
}

float Ship::getShield(ShieldType) const // 0x48CC0C
{
    mangled_assert("?getShield@Ship@@QBEMW4ShieldType@@@Z");
    todo("implement");
}

void Ship::getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const // 0x48CD78
{
    mangled_assert("?getSubSystems@Ship@@QBEXAAV?$vector@PAVSubSystem@@V?$allocator@PAVSubSystem@@@std@@@std@@@Z");
    todo("implement");
}

bool Ship::isSubSystemTypePresentOnShip(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x48E02F
{
    mangled_assert("?isSubSystemTypePresentOnShip@Ship@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool Ship::isSubSystemTypePresentOnShip(unsigned __int32) // 0x48E04B
{
    mangled_assert("?isSubSystemTypePresentOnShip@Ship@@QAE_NI@Z");
    todo("implement");
}

unsigned __int32 Ship::NumberOfSpacesAvailableForSubSystem(unsigned __int32) // 0x48A737
{
    mangled_assert("?NumberOfSpacesAvailableForSubSystem@Ship@@QAEII@Z");
    todo("implement");
}

unsigned __int32 Ship::NumberOfSpacesCompatibleWithSubSystem(unsigned __int32) // 0x48A742
{
    mangled_assert("?NumberOfSpacesCompatibleWithSubSystem@Ship@@QAEII@Z");
    todo("implement");
}

void Ship::updateAnimations(float) // 0x490965
{
    mangled_assert("?updateAnimations@Ship@@QAEXM@Z");
    todo("implement");
}

bool Ship::needsToAvoid(Sob *) const // 0x48E22D
{
    mangled_assert("?needsToAvoid@Ship@@QBE_NPAVSob@@@Z");
    todo("implement");
}

void Ship::avoid(Sob *) // 0x48B1A3
{
    mangled_assert("?avoid@Ship@@QAEXPAVSob@@@Z");
    todo("implement");
}

float Ship::getHyperspaceTransitTime() const // 0x48C394
{
    mangled_assert("?getHyperspaceTransitTime@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getGateTransitTime() const // 0x48C168
{
    mangled_assert("?getGateTransitTime@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getHyperspaceRecoveryTime() const // 0x48C35D
{
    mangled_assert("?getHyperspaceRecoveryTime@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getHyperspaceCost(float) const // 0x48C2D5
{
    mangled_assert("?getHyperspaceCost@Ship@@QBEMM@Z");
    todo("implement");
}

float Ship::getSensorPingCost() const // 0x48CBF9
{
    mangled_assert("?getSensorPingCost@Ship@@QBEMXZ");
    todo("implement");
}

void Ship::takeDamageFromGateAbort() // 0x4907B0
{
    mangled_assert("?takeDamageFromGateAbort@Ship@@QAEXXZ");
    todo("implement");
}

void Ship::increaseResources(Fixed<10> const &, PlayerResourceType) // 0x48D667
{
    mangled_assert("?increaseResources@Ship@@QAEXABV?$Fixed@$09@@W4PlayerResourceType@@@Z");
    todo("implement");
}

void Ship::decreaseResources(Fixed<10> const &) // 0x48B47A
{
    mangled_assert("?decreaseResources@Ship@@QAEXABV?$Fixed@$09@@@Z");
    todo("implement");
}

bool Ship::isSensorsHidden() const // 0x48E013
{
    mangled_assert("?isSensorsHidden@Ship@@QBE_NXZ");
    todo("implement");
}

void Ship::setSensorsHidden() // 0x48F96D
{
    mangled_assert("?setSensorsHidden@Ship@@QAEXXZ");
    todo("implement");
}

bool Ship::isInRadiation() const // 0x48DF55
{
    mangled_assert("?isInRadiation@Ship@@QBE_NXZ");
    todo("implement");
}

void Ship::setInRadiation() // 0x48F771
{
    mangled_assert("?setInRadiation@Ship@@QAEXXZ");
    todo("implement");
}

bool Ship::isInChargedDustCloud() const // 0x48DEE8
{
    mangled_assert("?isInChargedDustCloud@Ship@@QBE_NXZ");
    todo("implement");
}

void Ship::setInChargedDustCloud() // 0x48F70D
{
    mangled_assert("?setInChargedDustCloud@Ship@@QAEXXZ");
    todo("implement");
}

float Ship::getTotalSalvagePercentage() // 0x48D407
{
    mangled_assert("?getTotalSalvagePercentage@Ship@@IAEMXZ");
    todo("implement");
}

void Ship::spawnSalvage() // 0x490202
{
    mangled_assert("?spawnSalvage@Ship@@IAEXXZ");
    todo("implement");
}

void Ship::spawnDustClouds() // 0x48FEE1
{
    mangled_assert("?spawnDustClouds@Ship@@IAEXXZ");
    todo("implement");
}

void Ship::spawnDebris() // 0x48FEA5
{
    mangled_assert("?spawnDebris@Ship@@UAEXXZ");
    todo("implement");
}

void Ship::spawnSkeleton() // 0x49066C
{
    mangled_assert("?spawnSkeleton@Ship@@UAEXXZ");
    todo("implement");
}

void Ship::render(Camera const *) // 0x48EA03
{
    mangled_assert("?render@Ship@@UAEXPBVCamera@@@Z");
    todo("implement");
}

bool Ship::renderHelper(Camera const *, bool const) // 0x48EA28
{
    mangled_assert("?renderHelper@Ship@@AAE_NPBVCamera@@_N@Z");
    todo("implement");
}

void Ship::adjustShader() // 0x48AE12
{
    mangled_assert("?adjustShader@Ship@@QAEXXZ");
    todo("implement");
}

void Ship::renderSMShadow(Camera const *, MeshRenderProxy &) // 0x48EF02
{
    mangled_assert("?renderSMShadow@Ship@@QAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
}

void Ship::renderOnPlane(Camera const *, MeshRenderProxy &, vector3 const &, vector4 const &, bool const, bool const) // 0x48EC96
{
    mangled_assert("?renderOnPlane@Ship@@QAEXPBVCamera@@AAVMeshRenderProxy@@ABVvector3@@ABVvector4@@_N4@Z");
    todo("implement");
}

bool Ship::isPartiallyTransparent() const // 0x48DF9A
{
    mangled_assert("?isPartiallyTransparent@Ship@@QBE_NXZ");
    todo("implement");
}

bool Ship::needsDirectRendering() const // 0x48E1AF
{
    mangled_assert("?needsDirectRendering@Ship@@QBE_NXZ");
    todo("implement");
}

Ship::eShadowType Ship::shouldDrawShadow(Camera const *) const // 0x48FD46
{
    mangled_assert("?shouldDrawShadow@Ship@@QBE?AW4eShadowType@1@PBVCamera@@@Z");
    todo("implement");
}

void Ship::renderSection(Camera const *, Ship::RenderStyle const, MeshRenderProxy &, bool const, __int32) // 0x48F025
{
    mangled_assert("?renderSection@Ship@@QAEXPBVCamera@@W4RenderStyle@1@AAVMeshRenderProxy@@_NH@Z");
    todo("implement");
}

bool Ship::allowPassiveActions() const // 0x48B014
{
    mangled_assert("?allowPassiveActions@Ship@@QBE_NXZ");
    todo("implement");
}

bool Ship::isCurrentAbility(AbilityType) const // 0x48DA37
{
    mangled_assert("?isCurrentAbility@Ship@@QBE_NW4AbilityType@@@Z");
    todo("implement");
}

bool Ship::isCurrentlyAble(AbilityType) const // 0x48DC53
{
    mangled_assert("?isCurrentlyAble@Ship@@QBE_NW4AbilityType@@@Z");
    todo("implement");
}

BuildQueue *Ship::getBuildQueue() const // 0x48C09D
{
    mangled_assert("?getBuildQueue@Ship@@QBEPAVBuildQueue@@XZ");
    todo("implement");
}

bool Ship::doingCloakIncompatibleAction() const // 0x48B871
{
    mangled_assert("?doingCloakIncompatibleAction@Ship@@QBE_NXZ");
    todo("implement");
}

float Ship::getCloakDetectionLevel() const // 0x48C0CD
{
    mangled_assert("?getCloakDetectionLevel@Ship@@QBEMXZ");
    todo("implement");
}

WeaponActivate Ship::getWeaponActivation() const // 0x48D5AE
{
    mangled_assert("?getWeaponActivation@Ship@@QBE?AW4WeaponActivate@@XZ");
    todo("implement");
}

unsigned __int32 Ship::getNumberOfWeaponsWithActivation(WeaponActivate) const // 0x48C8C6
{
    mangled_assert("?getNumberOfWeaponsWithActivation@Ship@@QBEIW4WeaponActivate@@@Z");
    todo("implement");
}

unsigned __int32 Ship::getNumberOfSubSystemsFitted(unsigned __int32) const // 0x48C8BB
{
    mangled_assert("?getNumberOfSubSystemsFitted@Ship@@QBEII@Z");
    todo("implement");
}

unsigned __int32 Ship::getNumberOfSubSystems(unsigned __int32) const // 0x48C8B0
{
    mangled_assert("?getNumberOfSubSystems@Ship@@QBEII@Z");
    todo("implement");
}

unsigned __int32 Ship::getNumberOfFamilyHardpoints(SubSystemFamily) const // 0x48C89A
{
    mangled_assert("?getNumberOfFamilyHardpoints@Ship@@QBEIW4SubSystemFamily@@@Z");
    todo("implement");
}

unsigned __int32 Ship::getNumberOfFreeFamilyHardpoints(SubSystemFamily) const // 0x48C8A5
{
    mangled_assert("?getNumberOfFreeFamilyHardpoints@Ship@@QBEIW4SubSystemFamily@@@Z");
    todo("implement");
}

bool Ship::canRetrofitSubSystem(unsigned __int32) const // 0x48B317
{
    mangled_assert("?canRetrofitSubSystem@Ship@@QBE_NI@Z");
    todo("implement");
}

bool Ship::instantlyBuildSubSystem(unsigned __int32) // 0x48D7A8
{
    mangled_assert("?instantlyBuildSubSystem@Ship@@QAE_NI@Z");
    todo("implement");
}

void Ship::setSleepingFlag(bool) // 0x48F983
{
    mangled_assert("?setSleepingFlag@Ship@@UAEX_N@Z");
    todo("implement");
}

void Ship::tumble(vector3 const &) // 0x49085B
{
    mangled_assert("?tumble@Ship@@AAEXABVvector3@@@Z");
    todo("implement");
}

float Ship::getSobDieTime() // 0x48CCB0
{
    mangled_assert("?getSobDieTime@Ship@@MAEMXZ");
    todo("implement");
}

void Ship::doDeathEffects(char const *) // 0x48B5D5
{
    mangled_assert("?doDeathEffects@Ship@@EAEXPBD@Z");
    todo("implement");
}

float Ship::getMainEngineUsage() // 0x48C4CB
{
    mangled_assert("?getMainEngineUsage@Ship@@UAEMXZ");
    todo("implement");
}

float Ship::getHorizontalRotationalThrusterUsage() // 0x48C1CE
{
    mangled_assert("?getHorizontalRotationalThrusterUsage@Ship@@UAEMXZ");
    todo("implement");
}

float Ship::getVerticalRotationalThrusterUsage() // 0x48D454
{
    mangled_assert("?getVerticalRotationalThrusterUsage@Ship@@UAEMXZ");
    todo("implement");
}

void Ship::getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const // 0x48CD83
{
    mangled_assert("?getTargetOnSob@Ship@@UBEXABVvector3@@AAV2@1M@Z");
    todo("implement");
}

void Ship::setFOWVisible(bool) // 0x48F6D8
{
    mangled_assert("?setFOWVisible@Ship@@QAEX_N@Z");
    todo("implement");
}

bool Ship::isMoving() const // 0x48DF6A
{
    mangled_assert("?isMoving@Ship@@UBE_NXZ");
    todo("implement");
}

bool Ship::isRotating() const // 0x48DFF2
{
    mangled_assert("?isRotating@Ship@@UBE_NXZ");
    todo("implement");
}

void Ship::removeTemporaryAbilities() // 0x48E9DB
{
    mangled_assert("?removeTemporaryAbilities@Ship@@QAEXXZ");
    todo("implement");
}

void Ship::applyMultipliersAndAbilities() // 0x48B037
{
    mangled_assert("?applyMultipliersAndAbilities@Ship@@QAEXXZ");
    todo("implement");
}

unsigned __int32 Ship::getShipTypeId() const // 0x48CC46
{
    mangled_assert("?getShipTypeId@Ship@@QBEIXZ");
    todo("implement");
}

float Ship::getMaxSensorRange() const // 0x48C67D
{
    mangled_assert("?getMaxSensorRange@Ship@@QBEMXZ");
    todo("implement");
}

bool Ship::isVisHyperspacing() const // 0x48E056
{
    mangled_assert("?isVisHyperspacing@Ship@@QBE_NXZ");
    todo("implement");
}

bool Ship::isVisHyperspacingClipped() const // 0x48E084
{
    mangled_assert("?isVisHyperspacingClipped@Ship@@QBE_NXZ");
    todo("implement");
}

bool Ship::inHyperspace() const // 0x48D641
{
    mangled_assert("?inHyperspace@Ship@@QBE_NXZ");
    todo("implement");
}

bool Ship::isDockingOrLaunching() const // 0x48DE43
{
    mangled_assert("?isDockingOrLaunching@Ship@@QBE_NXZ");
    todo("implement");
}

void Ship::clearCloaking() // 0x48B3ED
{
    mangled_assert("?clearCloaking@Ship@@UAEXXZ");
    todo("implement");
}

float Ship::getResourceCollectionRate() const // 0x48CA84
{
    mangled_assert("?getResourceCollectionRate@Ship@@QBEMXZ");
    todo("implement");
}

__int32 Ship::getResourceCapacity() const // 0x48CA50
{
    mangled_assert("?getResourceCapacity@Ship@@QBEHXZ");
    todo("implement");
}

void Ship::getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &) // 0x48C3CF
{
    mangled_assert("?getListOfAllUpgrades@Ship@@QAEXAAV?$list@PAVResearchData@@V?$allocator@PAVResearchData@@@std@@@std@@@Z");
    todo("implement");
}

float Ship::getVisualRange() const // 0x48D55B
{
    mangled_assert("?getVisualRange@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getPrimarySensorsRange() const // 0x48C9CE
{
    mangled_assert("?getPrimarySensorsRange@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getSecondarySensorsRange() const // 0x48CBB6
{
    mangled_assert("?getSecondarySensorsRange@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getMaxHealth() const // 0x48C654
{
    mangled_assert("?getMaxHealth@Ship@@UBEMXZ");
    todo("implement");
}

float Ship::getHealthRegenMultiplier() const // 0x48C1AC
{
    mangled_assert("?getHealthRegenMultiplier@Ship@@UBEMXZ");
    todo("implement");
}

ShipStatic const *Ship::getStatic() const // 0x48CD0D
{
    mangled_assert("?getStatic@Ship@@QBEPBVShipStatic@@XZ");
    todo("implement");
}

float Ship::getMaxSpeedWithFormation() const // 0x48C722
{
    mangled_assert("?getMaxSpeedWithFormation@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getThrusterAccel() const // 0x48D357
{
    mangled_assert("?getThrusterAccel@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getMainEngineAccel() const // 0x48C417
{
    mangled_assert("?getMainEngineAccel@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getRotationAccel() const // 0x48CB02
{
    mangled_assert("?getRotationAccel@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getThrusterBrake() const // 0x48D38F
{
    mangled_assert("?getThrusterBrake@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getMainEngineBrake() const // 0x48C44F
{
    mangled_assert("?getMainEngineBrake@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getRotationBrake() const // 0x48CB3A
{
    mangled_assert("?getRotationBrake@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getThrusterMaxSpeed() const // 0x48D3C7
{
    mangled_assert("?getThrusterMaxSpeed@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getMainEngineMaxSpeed() const // 0x48C48B
{
    mangled_assert("?getMainEngineMaxSpeed@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getRotationMaxSpeed() const // 0x48CB76
{
    mangled_assert("?getRotationMaxSpeed@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getBuildSpeedMultiplier() const // 0x48C0A4
{
    mangled_assert("?getBuildSpeedMultiplier@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getShipHoldRepairSpeedMultiplier() const // 0x48CC21
{
    mangled_assert("?getShipHoldRepairSpeedMultiplier@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getCosAccelerationAngle() const // 0x48C10D
{
    mangled_assert("?getCosAccelerationAngle@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getCosMirrorAngle() const // 0x48C11A
{
    mangled_assert("?getCosMirrorAngle@Ship@@QBEMXZ");
    todo("implement");
}

float Ship::getCosSpecialTurnAngle() const // 0x48C127
{
    mangled_assert("?getCosSpecialTurnAngle@Ship@@QBEMXZ");
    todo("implement");
}

bool Ship::blockedLineOfFire() const // 0x48B1FA
{
    mangled_assert("?blockedLineOfFire@Ship@@QBE_NXZ");
    todo("implement");
}

void Ship::registerBlockedLineOfFire() // 0x48E9C7
{
    mangled_assert("?registerBlockedLineOfFire@Ship@@QAEXXZ");
    todo("implement");
}

void Ship::registerClearLineOfFire() // 0x48E9CE
{
    mangled_assert("?registerClearLineOfFire@Ship@@QAEXXZ");
    todo("implement");
}

__int32 Ship::getSpecialAttackIndex() const // 0x48CCD8
{
    mangled_assert("?getSpecialAttackIndex@Ship@@QBEHXZ");
    todo("implement");
}

float Ship::getResourceDropOffRate() const // 0x48CABB
{
    mangled_assert("?getResourceDropOffRate@Ship@@QBEMXZ");
    todo("implement");
}

std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &Ship::getSpecialAttackName() const // 0x48CCF0
{
    mangled_assert("?getSpecialAttackName@Ship@@QBEABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
}

float Ship::getPerSecondDamageRating() const // 0x48C940
{
    mangled_assert("?getPerSecondDamageRating@Ship@@QBEMXZ");
    todo("implement");
}

SoundEntityHandle Ship::internalShipPlaySound(__int32) // 0x48D7F5
{
    mangled_assert("?internalShipPlaySound@Ship@@AAE?AVSoundEntityHandle@@H@Z");
    todo("implement");
}

void Ship::internalShipStopSound(__int32) // 0x48D977
{
    mangled_assert("?internalShipStopSound@Ship@@AAEXH@Z");
    todo("implement");
}

bool Ship::isInGodMode() // 0x48DF1C
{
    mangled_assert("?isInGodMode@Ship@@UAE_NXZ");
    todo("implement");
}

bool Ship::restore(SaveGameData *) // 0x48F594
{
    mangled_assert("?restore@Ship@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Ship::save(SaveGameData *, SaveType) // 0x48F5E1
{
    mangled_assert("?save@Ship@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void InitializeMeshInstanceCache(MeshInstance *instance) // 0x48A6B8
{
    mangled_assert("InitializeMeshInstanceCache");
    todo("implement");
}

_static vector3 generateRandomVector(float radius) // 0x48BF88
{
    mangled_assert("generateRandomVector");
    todo("implement");
}

_static void shadowMatrix(float *shadowMat[4], float const *groundplane, float const *lightpos) // 0x48FBED
{
    mangled_assert("shadowMatrix");
    todo("implement");
}
#endif

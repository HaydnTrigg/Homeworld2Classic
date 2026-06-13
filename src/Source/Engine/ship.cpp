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

_extern bool _sub_48B214(Ship const *const, CommandType);
bool Ship::canBeInterrupted(CommandType) const // 0x48B214
{
    mangled_assert("?canBeInterrupted@Ship@@QBE_NW4CommandType@@@Z");
    todo("implement");
    bool __result = _sub_48B214(this, arg);
    return __result;
}

_extern _sub_489C5A(SobStatic::PatchMarker *const, SobStatic::PatchMarker const &);
_inline SobStatic::PatchMarker::PatchMarker(SobStatic::PatchMarker const &) // 0x489C5A
{
    mangled_assert("??0PatchMarker@SobStatic@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_489C5A(this, arg);
}

_extern void _sub_48F336(Ship *const, vector4 const &);
void Ship::resetShaderVars(vector4 const &) // 0x48F336
{
    mangled_assert("?resetShaderVars@Ship@@AAEXABVvector4@@@Z");
    todo("implement");
    _sub_48F336(this, arg);
}

_extern _sub_489D25(Ship *const, char const *, Player *);
Ship::Ship(char const *, Player *) // 0x489D25
{
    mangled_assert("??0Ship@@QAE@PBDPAVPlayer@@@Z");
    todo("implement");
    _sub_489D25(this, arg, arg);
}

_extern _sub_48A21F(WeaponInfo *const);
_inline WeaponInfo::WeaponInfo() // 0x48A21F
{
    mangled_assert("??0WeaponInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48A21F(this);
}

_extern void _sub_48A231(GameEvent_ResourceCollection *const);
_inline GameEvent_ResourceCollection::~GameEvent_ResourceCollection() // 0x48A231
{
    mangled_assert("??1GameEvent_ResourceCollection@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48A231(this);
}

_extern void _sub_48E762(Ship *const);
void Ship::postRestore() // 0x48E762
{
    mangled_assert("?postRestore@Ship@@UAEXXZ");
    todo("implement");
    _sub_48E762(this);
}

_extern void _sub_48F9B5(Ship *const);
void Ship::setupShipController() // 0x48F9B5
{
    mangled_assert("?setupShipController@Ship@@AAEXXZ");
    todo("implement");
    _sub_48F9B5(this);
}

_extern void _sub_48FAF7(Ship *const);
void Ship::setupWeapons() // 0x48FAF7
{
    mangled_assert("?setupWeapons@Ship@@QAEXXZ");
    todo("implement");
    _sub_48FAF7(this);
}

_extern void _sub_48F9AA(Ship *const);
void Ship::setupHardPoints() // 0x48F9AA
{
    mangled_assert("?setupHardPoints@Ship@@IAEXXZ");
    todo("implement");
    _sub_48F9AA(this);
}

_extern Weapon *_sub_48D5E5(Ship *const, __int32);
Weapon *Ship::getWeaponWithID(__int32) // 0x48D5E5
{
    mangled_assert("?getWeaponWithID@Ship@@QAEPAVWeapon@@H@Z");
    todo("implement");
    Weapon * __result = _sub_48D5E5(this, arg);
    return __result;
}

_extern _sub_489C82(Ship *const, SaveGameData *);
Ship::Ship(SaveGameData *) // 0x489C82
{
    mangled_assert("??0Ship@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_489C82(this, arg);
}

_extern void _sub_48B4E7(Ship *const);
void Ship::defaultSettings() // 0x48B4E7
{
    mangled_assert("?defaultSettings@Ship@@QAEXXZ");
    todo("implement");
    _sub_48B4E7(this);
}

_extern void _sub_48E567(Ship *const, float);
void Ship::onHealthChange(float) // 0x48E567
{
    mangled_assert("?onHealthChange@Ship@@MAEXM@Z");
    todo("implement");
    _sub_48E567(this, arg);
}

_extern bool _sub_48B198(Ship *const, unsigned __int32);
bool Ship::availableSpaceForSubSystem(unsigned __int32) // 0x48B198
{
    mangled_assert("?availableSpaceForSubSystem@Ship@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_48B198(this, arg);
    return __result;
}

_extern void _sub_48C156(Ship *const, std::vector<HardPoint *,std::allocator<HardPoint *> > &);
void Ship::getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &) // 0x48C156
{
    mangled_assert("?getFreeHardpoints@Ship@@QAEXAAV?$vector@PAVHardPoint@@V?$allocator@PAVHardPoint@@@std@@@std@@@Z");
    todo("implement");
    _sub_48C156(this, arg);
}

_extern void _sub_48FD29(Ship *const, float);
void Ship::shipDidDamage(float) // 0x48FD29
{
    mangled_assert("?shipDidDamage@Ship@@QAEXM@Z");
    todo("implement");
    _sub_48FD29(this, arg);
}

_extern void _sub_48B396(Ship *const);
void Ship::cleanUpWeapons() // 0x48B396
{
    mangled_assert("?cleanUpWeapons@Ship@@QAEXXZ");
    todo("implement");
    _sub_48B396(this);
}

_extern void _sub_48A238(Ship *const);
Ship::~Ship() // 0x48A238
{
    mangled_assert("??1Ship@@UAE@XZ");
    todo("implement");
    _sub_48A238(this);
}

_extern void _sub_48A2CD(WeaponInfo *const);
_inline WeaponInfo::~WeaponInfo() // 0x48A2CD
{
    mangled_assert("??1WeaponInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48A2CD(this);
}

_extern void _sub_48FE13(Ship *const);
void Ship::sobVisInit() // 0x48FE13
{
    mangled_assert("?sobVisInit@Ship@@UAEXXZ");
    todo("implement");
    _sub_48FE13(this);
}

_extern void _sub_48A74D(Ship *const);
void Ship::RemoveAllSimData() // 0x48A74D
{
    mangled_assert("?RemoveAllSimData@Ship@@IAEXXZ");
    todo("implement");
    _sub_48A74D(this);
}

_extern void _sub_48A8C2(Ship *const);
void Ship::RemoveFromSimulation() // 0x48A8C2
{
    mangled_assert("?RemoveFromSimulation@Ship@@MAEXXZ");
    todo("implement");
    _sub_48A8C2(this);
}

_extern void _sub_48ABC7(Ship *const, Ship *);
void Ship::addAttacker(Ship *) // 0x48ABC7
{
    mangled_assert("?addAttacker@Ship@@QAEXPAV1@@Z");
    todo("implement");
    _sub_48ABC7(this, arg);
}

_extern bool _sub_48DE89(Sob const *, void *);
bool isEnemySob(Sob const *s, void *data) // 0x48DE89
{
    mangled_assert("?isEnemySob@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_48DE89(s, data);
    return __result;
}

_extern void _sub_48E860(Ship *const);
void Ship::purgeFriendliesFromAttackingList() // 0x48E860
{
    mangled_assert("?purgeFriendliesFromAttackingList@Ship@@QAEXXZ");
    todo("implement");
    _sub_48E860(this);
}

_extern void _sub_48F7B0(Ship *const, Player *);
void Ship::setPlayerOwner(Player *) // 0x48F7B0
{
    mangled_assert("?setPlayerOwner@Ship@@UAEXPAVPlayer@@@Z");
    todo("implement");
    _sub_48F7B0(this, arg);
}

_extern Command *_sub_48C060(Ship const *const);
Command *Ship::getActiveCommand() const // 0x48C060
{
    mangled_assert("?getActiveCommand@Ship@@QBEPAVCommand@@XZ");
    todo("implement");
    Command * __result = _sub_48C060(this);
    return __result;
}

_extern Command *_sub_490848(Ship const *const, CommandType);
Command *Ship::tryToGetCommand(CommandType) const // 0x490848
{
    mangled_assert("?tryToGetCommand@Ship@@QBEPAVCommand@@W4CommandType@@@Z");
    todo("implement");
    Command * __result = _sub_490848(this, arg);
    return __result;
}

_extern BaseCommandStaticInfo *_sub_48C0F9(Ship const *const, CommandType);
BaseCommandStaticInfo *Ship::getCommandDataStatic(CommandType) const // 0x48C0F9
{
    mangled_assert("?getCommandDataStatic@Ship@@QBEPAVBaseCommandStaticInfo@@W4CommandType@@@Z");
    todo("implement");
    BaseCommandStaticInfo * __result = _sub_48C0F9(this, arg);
    return __result;
}

_extern BaseCommandStaticInfo *_sub_48C071(Ship *const);
BaseCommandStaticInfo *Ship::getActiveCommandDataStatic() // 0x48C071
{
    mangled_assert("?getActiveCommandDataStatic@Ship@@QAEPAVBaseCommandStaticInfo@@XZ");
    todo("implement");
    BaseCommandStaticInfo * __result = _sub_48C071(this);
    return __result;
}

_extern void _sub_48CC5A(Ship const *const, Selection &, unsigned __int32);
void Ship::getShipsInRetaliationRange(Selection &, unsigned __int32) const // 0x48CC5A
{
    mangled_assert("?getShipsInRetaliationRange@Ship@@QBEXAAVSelection@@I@Z");
    todo("implement");
    _sub_48CC5A(this, arg, arg);
}

_extern bool _sub_48B230(Ship const *const, OrderType);
bool Ship::canExecuteOrder(OrderType) const // 0x48B230
{
    mangled_assert("?canExecuteOrder@Ship@@QBE_NW4OrderType@@@Z");
    todo("implement");
    bool __result = _sub_48B230(this, arg);
    return __result;
}

_extern void _sub_48E9D6(Ship *const);
void Ship::reloadStats() // 0x48E9D6
{
    mangled_assert("?reloadStats@Ship@@UAEXXZ");
    todo("implement");
    _sub_48E9D6(this);
}

_extern void _sub_48BCD3(Ship *const, Sob *, float);
void Ship::flyShipToIntersectionPoint(Sob *, float) // 0x48BCD3
{
    mangled_assert("?flyShipToIntersectionPoint@Ship@@QAEXPAVSob@@M@Z");
    todo("implement");
    _sub_48BCD3(this, arg, arg);
}

_extern void _sub_48BEEC(Ship *const, Sob *, vector3 const &, vector3, vector3, float);
void Ship::flyShipToSpaceObject(Sob *, vector3 const &, vector3, vector3, float) // 0x48BEEC
{
    mangled_assert("?flyShipToSpaceObject@Ship@@QAEXPAVSob@@ABVvector3@@V3@2M@Z");
    todo("implement");
    _sub_48BEEC(this, arg, arg, arg, arg, arg);
}

_extern void _sub_48BE6E(Ship *const, Sob *, vector3 const &, float);
void Ship::flyShipToSpaceObject(Sob *, vector3 const &, float) // 0x48BE6E
{
    mangled_assert("?flyShipToSpaceObject@Ship@@QAEXPAVSob@@ABVvector3@@M@Z");
    todo("implement");
    _sub_48BE6E(this, arg, arg, arg);
}

_extern void _sub_48BC8F(Ship *const, DynamicPoint const &, float const);
void Ship::flyShipToDynamicPosition(DynamicPoint const &, float const) // 0x48BC8F
{
    mangled_assert("?flyShipToDynamicPosition@Ship@@QAEXABVDynamicPoint@@M@Z");
    todo("implement");
    _sub_48BC8F(this, arg, arg);
}

_extern void _sub_48BD3B(Ship *const, __int32, vector3 const &, float);
void Ship::flyShipToPoint(__int32, vector3 const &, float) // 0x48BD3B
{
    mangled_assert("?flyShipToPoint@Ship@@QAEXHABVvector3@@M@Z");
    todo("implement");
    _sub_48BD3B(this, arg, arg, arg);
}

_extern void _sub_4907A1(Ship *const);
void Ship::stopShip() // 0x4907A1
{
    mangled_assert("?stopShip@Ship@@QAEXXZ");
    todo("implement");
    _sub_4907A1(this);
}

_extern bool _sub_48BA09(Ship *const);
bool Ship::finishedMovementGoals() // 0x48BA09
{
    mangled_assert("?finishedMovementGoals@Ship@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_48BA09(this);
    return __result;
}

_extern bool _sub_48D9E5(Ship const *const);
bool Ship::isAttacking() const // 0x48D9E5
{
    mangled_assert("?isAttacking@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48D9E5(this);
    return __result;
}

_extern bool _sub_48DA2B(Ship const *const);
bool Ship::isBeingAttacked() const // 0x48DA2B
{
    mangled_assert("?isBeingAttacked@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48DA2B(this);
    return __result;
}

_extern bool _sub_48DEFD(Ship const *const);
bool Ship::isInCombat() const // 0x48DEFD
{
    mangled_assert("?isInCombat@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48DEFD(this);
    return __result;
}

_extern void _sub_48B3E2(Ship *const);
void Ship::clearAttackingMeList() // 0x48B3E2
{
    mangled_assert("?clearAttackingMeList@Ship@@QAEXXZ");
    todo("implement");
    _sub_48B3E2(this);
}

_extern bool _sub_48B93F(Ship const *const, Ship const *);
bool Ship::enemyAttackingUs(Ship const *) const // 0x48B93F
{
    mangled_assert("?enemyAttackingUs@Ship@@QBE_NPBV1@@Z");
    todo("implement");
    bool __result = _sub_48B93F(this, arg);
    return __result;
}

_extern float _sub_48C585(Ship const *const);
float Ship::getMaxActiveWeaponRange() const // 0x48C585
{
    mangled_assert("?getMaxActiveWeaponRange@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C585(this);
    return __result;
}

_extern SubSystem *_sub_48CD1C(Ship const *const, char const *);
SubSystem *Ship::getSubSystem(char const *) const // 0x48CD1C
{
    mangled_assert("?getSubSystem@Ship@@QBEPAVSubSystem@@PBD@Z");
    todo("implement");
    SubSystem * __result = _sub_48CD1C(this, arg);
    return __result;
}

_extern float _sub_48C786(Ship const *const);
float Ship::getMinActiveWeaponRange() const // 0x48C786
{
    mangled_assert("?getMinActiveWeaponRange@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C786(this);
    return __result;
}

_extern void _sub_48F700(Ship *const, Formation *);
void Ship::setFormation(Formation *) // 0x48F700
{
    mangled_assert("?setFormation@Ship@@QAEXPAVFormation@@@Z");
    todo("implement");
    _sub_48F700(this, arg);
}

_extern void _sub_48F99D(Ship *const, Squadron *);
void Ship::setSquadron(Squadron *) // 0x48F99D
{
    mangled_assert("?setSquadron@Ship@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_48F99D(this, arg);
}

_extern bool _sub_48E18D(float, float, float);
bool mcIsBetweenInclusive(float test, float highBound, float lowBound) // 0x48E18D
{
    mangled_assert("?mcIsBetweenInclusive@@YG_NMMM@Z");
    todo("implement");
    bool __result = _sub_48E18D(test, highBound, lowBound);
    return __result;
}

_extern bool _sub_48A6DA(Ship *const, vector3 *, float);
bool Ship::IsShipNearPosition(vector3 *, float) // 0x48A6DA
{
    mangled_assert("?IsShipNearPosition@Ship@@QAE_NPAVvector3@@M@Z");
    todo("implement");
    bool __result = _sub_48A6DA(this, arg, arg);
    return __result;
}

_extern void _sub_48F8D5(Ship *const, Ship::PointToBehaviour);
void Ship::setPointToBehaviour(Ship::PointToBehaviour) // 0x48F8D5
{
    mangled_assert("?setPointToBehaviour@Ship@@QAEXW4PointToBehaviour@1@@Z");
    todo("implement");
    _sub_48F8D5(this, arg);
}

_extern void _sub_48F91D(Ship *const, DynamicPoint const &, float);
void Ship::setPointToTarget(DynamicPoint const &, float) // 0x48F91D
{
    mangled_assert("?setPointToTarget@Ship@@QAEXABVDynamicPoint@@M@Z");
    todo("implement");
    _sub_48F91D(this, arg, arg);
}

_extern void _sub_48BA14(Ship *const, vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
void Ship::fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &) // 0x48BA14
{
    mangled_assert("?fireDroppables@Ship@@QAEXABVvector3@@AAV?$list@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@@Z");
    todo("implement");
    _sub_48BA14(this, arg, arg);
}

_extern void _sub_48BC23(Ship *const);
void Ship::flushWeaponTargets() // 0x48BC23
{
    mangled_assert("?flushWeaponTargets@Ship@@QAEXXZ");
    todo("implement");
    _sub_48BC23(this);
}

_extern void _sub_48BAAF(Ship *const, WeaponTargetInfo const &, Selection const &);
void Ship::fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &) // 0x48BAAF
{
    mangled_assert("?fireWeaponsAtTarget@Ship@@QAEXABVWeaponTargetInfo@@ABVSelection@@@Z");
    todo("implement");
    _sub_48BAAF(this, arg, arg);
}

_extern void _sub_48F64A(Ship *const, char const *, bool);
void Ship::setEnableDisableWeapon(char const *, bool) // 0x48F64A
{
    mangled_assert("?setEnableDisableWeapon@Ship@@QAEXPBD_N@Z");
    todo("implement");
    _sub_48F64A(this, arg, arg);
}

_extern void _sub_49142E(Ship *const, float);
void Ship::weaponUpdate(float) // 0x49142E
{
    mangled_assert("?weaponUpdate@Ship@@QAEXM@Z");
    todo("implement");
    _sub_49142E(this, arg);
}

_extern void _sub_48F6A0(Ship *const, bool);
void Ship::setEnforceMaximumAngles(bool) // 0x48F6A0
{
    mangled_assert("?setEnforceMaximumAngles@Ship@@QAEX_N@Z");
    todo("implement");
    _sub_48F6A0(this, arg);
}

_extern void _sub_48D6DE(Ship *const);
void Ship::initialUpdateController() // 0x48D6DE
{
    mangled_assert("?initialUpdateController@Ship@@IAEXXZ");
    todo("implement");
    _sub_48D6DE(this);
}

_extern void _sub_4909E8(Ship *const);
void Ship::updateController() // 0x4909E8
{
    mangled_assert("?updateController@Ship@@IAEXXZ");
    todo("implement");
    _sub_4909E8(this);
}

_extern void _sub_491161(Ship *const, float);
void Ship::updateTimers(float) // 0x491161
{
    mangled_assert("?updateTimers@Ship@@QAEXM@Z");
    todo("implement");
    _sub_491161(this, arg);
}

_extern bool _sub_48D9FA(Ship const *const, unsigned __int32);
bool Ship::isAttackingPlayer(unsigned __int32) const // 0x48D9FA
{
    mangled_assert("?isAttackingPlayer@Ship@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_48D9FA(this, arg);
    return __result;
}

_extern void _sub_48B12A(Ship *const, unsigned __int32);
void Ship::attackingPlayer(unsigned __int32) // 0x48B12A
{
    mangled_assert("?attackingPlayer@Ship@@QAEXI@Z");
    todo("implement");
    _sub_48B12A(this, arg);
}

_extern void _sub_4913AD(Ship *const, float);
void Ship::upgradeHealth(float) // 0x4913AD
{
    mangled_assert("?upgradeHealth@Ship@@QAEXM@Z");
    todo("implement");
    _sub_4913AD(this, arg);
}

_extern void _sub_490E45(Ship *const, float);
void Ship::updateSounds(float) // 0x490E45
{
    mangled_assert("?updateSounds@Ship@@QAEXM@Z");
    todo("implement");
    _sub_490E45(this, arg);
}

_extern void _sub_48B8E5(Ship *const, bool);
void Ship::enableControllerSteering(bool) // 0x48B8E5
{
    mangled_assert("?enableControllerSteering@Ship@@QAEX_N@Z");
    todo("implement");
    _sub_48B8E5(this, arg);
}

_extern void _sub_490D7F(Ship *const, float);
void Ship::updateShipControllerState(float) // 0x490D7F
{
    mangled_assert("?updateShipControllerState@Ship@@QAEXM@Z");
    todo("implement");
    _sub_490D7F(this, arg);
}

_extern void _sub_490C89(Ship *const, float);
void Ship::updateManagers(float) // 0x490C89
{
    mangled_assert("?updateManagers@Ship@@QAEXM@Z");
    todo("implement");
    _sub_490C89(this, arg);
}

_extern void _sub_490B11(Ship *const, float);
void Ship::updateDamageAssesment(float) // 0x490B11
{
    mangled_assert("?updateDamageAssesment@Ship@@QAEXM@Z");
    todo("implement");
    _sub_490B11(this, arg);
}

_extern void _sub_4909C4(Ship *const, float);
void Ship::updateBattleTracker(float) // 0x4909C4
{
    mangled_assert("?updateBattleTracker@Ship@@QAEXM@Z");
    todo("implement");
    _sub_4909C4(this, arg);
}

_extern bool _sub_4908B7(Ship *const, float);
bool Ship::update(float) // 0x4908B7
{
    mangled_assert("?update@Ship@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4908B7(this, arg);
    return __result;
}

_extern void _sub_48F742(Ship *const, bool);
void Ship::setInHyperspace(bool) // 0x48F742
{
    mangled_assert("?setInHyperspace@Ship@@UAEX_N@Z");
    todo("implement");
    _sub_48F742(this, arg);
}

_extern void _sub_48E8E5(Ship *const, float);
void Ship::regenerateShields(float) // 0x48E8E5
{
    mangled_assert("?regenerateShields@Ship@@AAEXM@Z");
    todo("implement");
    _sub_48E8E5(this, arg);
}

_extern void _sub_48B98D(Ship *const, ShieldType);
void Ship::enforceShieldBounds(ShieldType) // 0x48B98D
{
    mangled_assert("?enforceShieldBounds@Ship@@AAEXW4ShieldType@@@Z");
    todo("implement");
    _sub_48B98D(this, arg);
}

_extern void _sub_490809(Ship *const, ShieldType, float const);
void Ship::takeDamageToShield(ShieldType, float const) // 0x490809
{
    mangled_assert("?takeDamageToShield@Ship@@QAEXW4ShieldType@@M@Z");
    todo("implement");
    _sub_490809(this, arg, arg);
}

_extern bool _sub_48CA26(Ship const *const, ShieldType);
bool Ship::getRecentDamageToShield(ShieldType) const // 0x48CA26
{
    mangled_assert("?getRecentDamageToShield@Ship@@QBE_NW4ShieldType@@@Z");
    todo("implement");
    bool __result = _sub_48CA26(this, arg);
    return __result;
}

_extern float _sub_48C6F1(Ship const *const, ShieldType);
float Ship::getMaxShield(ShieldType) const // 0x48C6F1
{
    mangled_assert("?getMaxShield@Ship@@QBEMW4ShieldType@@@Z");
    todo("implement");
    float __result = _sub_48C6F1(this, arg);
    return __result;
}

_extern float _sub_48CC0C(Ship const *const, ShieldType);
float Ship::getShield(ShieldType) const // 0x48CC0C
{
    mangled_assert("?getShield@Ship@@QBEMW4ShieldType@@@Z");
    todo("implement");
    float __result = _sub_48CC0C(this, arg);
    return __result;
}

_extern void _sub_48CD78(Ship const *const, std::vector<SubSystem *,std::allocator<SubSystem *> > &);
void Ship::getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const // 0x48CD78
{
    mangled_assert("?getSubSystems@Ship@@QBEXAAV?$vector@PAVSubSystem@@V?$allocator@PAVSubSystem@@@std@@@std@@@Z");
    todo("implement");
    _sub_48CD78(this, arg);
}

_extern bool _sub_48E02F(Ship *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool Ship::isSubSystemTypePresentOnShip(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x48E02F
{
    mangled_assert("?isSubSystemTypePresentOnShip@Ship@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_48E02F(this, arg);
    return __result;
}

_extern bool _sub_48E04B(Ship *const, unsigned __int32);
bool Ship::isSubSystemTypePresentOnShip(unsigned __int32) // 0x48E04B
{
    mangled_assert("?isSubSystemTypePresentOnShip@Ship@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_48E04B(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_48A737(Ship *const, unsigned __int32);
unsigned __int32 Ship::NumberOfSpacesAvailableForSubSystem(unsigned __int32) // 0x48A737
{
    mangled_assert("?NumberOfSpacesAvailableForSubSystem@Ship@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_48A737(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_48A742(Ship *const, unsigned __int32);
unsigned __int32 Ship::NumberOfSpacesCompatibleWithSubSystem(unsigned __int32) // 0x48A742
{
    mangled_assert("?NumberOfSpacesCompatibleWithSubSystem@Ship@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_48A742(this, arg);
    return __result;
}

_extern void _sub_490965(Ship *const, float);
void Ship::updateAnimations(float) // 0x490965
{
    mangled_assert("?updateAnimations@Ship@@QAEXM@Z");
    todo("implement");
    _sub_490965(this, arg);
}

_extern bool _sub_48E22D(Ship const *const, Sob *);
bool Ship::needsToAvoid(Sob *) const // 0x48E22D
{
    mangled_assert("?needsToAvoid@Ship@@QBE_NPAVSob@@@Z");
    todo("implement");
    bool __result = _sub_48E22D(this, arg);
    return __result;
}

_extern void _sub_48B1A3(Ship *const, Sob *);
void Ship::avoid(Sob *) // 0x48B1A3
{
    mangled_assert("?avoid@Ship@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_48B1A3(this, arg);
}

_extern float _sub_48C394(Ship const *const);
float Ship::getHyperspaceTransitTime() const // 0x48C394
{
    mangled_assert("?getHyperspaceTransitTime@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C394(this);
    return __result;
}

_extern float _sub_48C168(Ship const *const);
float Ship::getGateTransitTime() const // 0x48C168
{
    mangled_assert("?getGateTransitTime@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C168(this);
    return __result;
}

_extern float _sub_48C35D(Ship const *const);
float Ship::getHyperspaceRecoveryTime() const // 0x48C35D
{
    mangled_assert("?getHyperspaceRecoveryTime@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C35D(this);
    return __result;
}

_extern float _sub_48C2D5(Ship const *const, float);
float Ship::getHyperspaceCost(float) const // 0x48C2D5
{
    mangled_assert("?getHyperspaceCost@Ship@@QBEMM@Z");
    todo("implement");
    float __result = _sub_48C2D5(this, arg);
    return __result;
}

_extern float _sub_48CBF9(Ship const *const);
float Ship::getSensorPingCost() const // 0x48CBF9
{
    mangled_assert("?getSensorPingCost@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CBF9(this);
    return __result;
}

_extern void _sub_4907B0(Ship *const);
void Ship::takeDamageFromGateAbort() // 0x4907B0
{
    mangled_assert("?takeDamageFromGateAbort@Ship@@QAEXXZ");
    todo("implement");
    _sub_4907B0(this);
}

_extern void _sub_48D667(Ship *const, Fixed<10> const &, PlayerResourceType);
void Ship::increaseResources(Fixed<10> const &, PlayerResourceType) // 0x48D667
{
    mangled_assert("?increaseResources@Ship@@QAEXABV?$Fixed@$09@@W4PlayerResourceType@@@Z");
    todo("implement");
    _sub_48D667(this, arg, arg);
}

_extern void _sub_48B47A(Ship *const, Fixed<10> const &);
void Ship::decreaseResources(Fixed<10> const &) // 0x48B47A
{
    mangled_assert("?decreaseResources@Ship@@QAEXABV?$Fixed@$09@@@Z");
    todo("implement");
    _sub_48B47A(this, arg);
}

_extern bool _sub_48E013(Ship const *const);
bool Ship::isSensorsHidden() const // 0x48E013
{
    mangled_assert("?isSensorsHidden@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48E013(this);
    return __result;
}

_extern void _sub_48F96D(Ship *const);
void Ship::setSensorsHidden() // 0x48F96D
{
    mangled_assert("?setSensorsHidden@Ship@@QAEXXZ");
    todo("implement");
    _sub_48F96D(this);
}

_extern bool _sub_48DF55(Ship const *const);
bool Ship::isInRadiation() const // 0x48DF55
{
    mangled_assert("?isInRadiation@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48DF55(this);
    return __result;
}

_extern void _sub_48F771(Ship *const);
void Ship::setInRadiation() // 0x48F771
{
    mangled_assert("?setInRadiation@Ship@@QAEXXZ");
    todo("implement");
    _sub_48F771(this);
}

_extern bool _sub_48DEE8(Ship const *const);
bool Ship::isInChargedDustCloud() const // 0x48DEE8
{
    mangled_assert("?isInChargedDustCloud@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48DEE8(this);
    return __result;
}

_extern void _sub_48F70D(Ship *const);
void Ship::setInChargedDustCloud() // 0x48F70D
{
    mangled_assert("?setInChargedDustCloud@Ship@@QAEXXZ");
    todo("implement");
    _sub_48F70D(this);
}

_extern float _sub_48D407(Ship *const);
float Ship::getTotalSalvagePercentage() // 0x48D407
{
    mangled_assert("?getTotalSalvagePercentage@Ship@@IAEMXZ");
    todo("implement");
    float __result = _sub_48D407(this);
    return __result;
}

_extern void _sub_490202(Ship *const);
void Ship::spawnSalvage() // 0x490202
{
    mangled_assert("?spawnSalvage@Ship@@IAEXXZ");
    todo("implement");
    _sub_490202(this);
}

_extern void _sub_48FEE1(Ship *const);
void Ship::spawnDustClouds() // 0x48FEE1
{
    mangled_assert("?spawnDustClouds@Ship@@IAEXXZ");
    todo("implement");
    _sub_48FEE1(this);
}

_extern void _sub_48FEA5(Ship *const);
void Ship::spawnDebris() // 0x48FEA5
{
    mangled_assert("?spawnDebris@Ship@@UAEXXZ");
    todo("implement");
    _sub_48FEA5(this);
}

_extern void _sub_49066C(Ship *const);
void Ship::spawnSkeleton() // 0x49066C
{
    mangled_assert("?spawnSkeleton@Ship@@UAEXXZ");
    todo("implement");
    _sub_49066C(this);
}

_extern void _sub_48EA03(Ship *const, Camera const *);
void Ship::render(Camera const *) // 0x48EA03
{
    mangled_assert("?render@Ship@@UAEXPBVCamera@@@Z");
    todo("implement");
    _sub_48EA03(this, arg);
}

_extern bool _sub_48EA28(Ship *const, Camera const *, bool const);
bool Ship::renderHelper(Camera const *, bool const) // 0x48EA28
{
    mangled_assert("?renderHelper@Ship@@AAE_NPBVCamera@@_N@Z");
    todo("implement");
    bool __result = _sub_48EA28(this, arg, arg);
    return __result;
}

_extern void _sub_48AE12(Ship *const);
void Ship::adjustShader() // 0x48AE12
{
    mangled_assert("?adjustShader@Ship@@QAEXXZ");
    todo("implement");
    _sub_48AE12(this);
}

_extern void _sub_48EF02(Ship *const, Camera const *, MeshRenderProxy &);
void Ship::renderSMShadow(Camera const *, MeshRenderProxy &) // 0x48EF02
{
    mangled_assert("?renderSMShadow@Ship@@QAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
    _sub_48EF02(this, arg, arg);
}

_extern void _sub_48EC96(Ship *const, Camera const *, MeshRenderProxy &, vector3 const &, vector4 const &, bool const, bool const);
void Ship::renderOnPlane(Camera const *, MeshRenderProxy &, vector3 const &, vector4 const &, bool const, bool const) // 0x48EC96
{
    mangled_assert("?renderOnPlane@Ship@@QAEXPBVCamera@@AAVMeshRenderProxy@@ABVvector3@@ABVvector4@@_N4@Z");
    todo("implement");
    _sub_48EC96(this, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_48DF9A(Ship const *const);
bool Ship::isPartiallyTransparent() const // 0x48DF9A
{
    mangled_assert("?isPartiallyTransparent@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48DF9A(this);
    return __result;
}

_extern bool _sub_48E1AF(Ship const *const);
bool Ship::needsDirectRendering() const // 0x48E1AF
{
    mangled_assert("?needsDirectRendering@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48E1AF(this);
    return __result;
}

_extern Ship::eShadowType _sub_48FD46(Ship const *const, Camera const *);
Ship::eShadowType Ship::shouldDrawShadow(Camera const *) const // 0x48FD46
{
    mangled_assert("?shouldDrawShadow@Ship@@QBE?AW4eShadowType@1@PBVCamera@@@Z");
    todo("implement");
    Ship::eShadowType __result = _sub_48FD46(this, arg);
    return __result;
}

_extern void _sub_48F025(Ship *const, Camera const *, Ship::RenderStyle const, MeshRenderProxy &, bool const, __int32);
void Ship::renderSection(Camera const *, Ship::RenderStyle const, MeshRenderProxy &, bool const, __int32) // 0x48F025
{
    mangled_assert("?renderSection@Ship@@QAEXPBVCamera@@W4RenderStyle@1@AAVMeshRenderProxy@@_NH@Z");
    todo("implement");
    _sub_48F025(this, arg, arg, arg, arg, arg);
}

_extern bool _sub_48B014(Ship const *const);
bool Ship::allowPassiveActions() const // 0x48B014
{
    mangled_assert("?allowPassiveActions@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48B014(this);
    return __result;
}

_extern bool _sub_48DA37(Ship const *const, AbilityType);
bool Ship::isCurrentAbility(AbilityType) const // 0x48DA37
{
    mangled_assert("?isCurrentAbility@Ship@@QBE_NW4AbilityType@@@Z");
    todo("implement");
    bool __result = _sub_48DA37(this, arg);
    return __result;
}

_extern bool _sub_48DC53(Ship const *const, AbilityType);
bool Ship::isCurrentlyAble(AbilityType) const // 0x48DC53
{
    mangled_assert("?isCurrentlyAble@Ship@@QBE_NW4AbilityType@@@Z");
    todo("implement");
    bool __result = _sub_48DC53(this, arg);
    return __result;
}

_extern BuildQueue *_sub_48C09D(Ship const *const);
BuildQueue *Ship::getBuildQueue() const // 0x48C09D
{
    mangled_assert("?getBuildQueue@Ship@@QBEPAVBuildQueue@@XZ");
    todo("implement");
    BuildQueue * __result = _sub_48C09D(this);
    return __result;
}

_extern bool _sub_48B871(Ship const *const);
bool Ship::doingCloakIncompatibleAction() const // 0x48B871
{
    mangled_assert("?doingCloakIncompatibleAction@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48B871(this);
    return __result;
}

_extern float _sub_48C0CD(Ship const *const);
float Ship::getCloakDetectionLevel() const // 0x48C0CD
{
    mangled_assert("?getCloakDetectionLevel@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C0CD(this);
    return __result;
}

_extern WeaponActivate _sub_48D5AE(Ship const *const);
WeaponActivate Ship::getWeaponActivation() const // 0x48D5AE
{
    mangled_assert("?getWeaponActivation@Ship@@QBE?AW4WeaponActivate@@XZ");
    todo("implement");
    WeaponActivate __result = _sub_48D5AE(this);
    return __result;
}

_extern unsigned __int32 _sub_48C8C6(Ship const *const, WeaponActivate);
unsigned __int32 Ship::getNumberOfWeaponsWithActivation(WeaponActivate) const // 0x48C8C6
{
    mangled_assert("?getNumberOfWeaponsWithActivation@Ship@@QBEIW4WeaponActivate@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_48C8C6(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_48C8BB(Ship const *const, unsigned __int32);
unsigned __int32 Ship::getNumberOfSubSystemsFitted(unsigned __int32) const // 0x48C8BB
{
    mangled_assert("?getNumberOfSubSystemsFitted@Ship@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_48C8BB(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_48C8B0(Ship const *const, unsigned __int32);
unsigned __int32 Ship::getNumberOfSubSystems(unsigned __int32) const // 0x48C8B0
{
    mangled_assert("?getNumberOfSubSystems@Ship@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_48C8B0(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_48C89A(Ship const *const, SubSystemFamily);
unsigned __int32 Ship::getNumberOfFamilyHardpoints(SubSystemFamily) const // 0x48C89A
{
    mangled_assert("?getNumberOfFamilyHardpoints@Ship@@QBEIW4SubSystemFamily@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_48C89A(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_48C8A5(Ship const *const, SubSystemFamily);
unsigned __int32 Ship::getNumberOfFreeFamilyHardpoints(SubSystemFamily) const // 0x48C8A5
{
    mangled_assert("?getNumberOfFreeFamilyHardpoints@Ship@@QBEIW4SubSystemFamily@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_48C8A5(this, arg);
    return __result;
}

_extern bool _sub_48B317(Ship const *const, unsigned __int32);
bool Ship::canRetrofitSubSystem(unsigned __int32) const // 0x48B317
{
    mangled_assert("?canRetrofitSubSystem@Ship@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_48B317(this, arg);
    return __result;
}

_extern bool _sub_48D7A8(Ship *const, unsigned __int32);
bool Ship::instantlyBuildSubSystem(unsigned __int32) // 0x48D7A8
{
    mangled_assert("?instantlyBuildSubSystem@Ship@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_48D7A8(this, arg);
    return __result;
}

_extern void _sub_48F983(Ship *const, bool);
void Ship::setSleepingFlag(bool) // 0x48F983
{
    mangled_assert("?setSleepingFlag@Ship@@UAEX_N@Z");
    todo("implement");
    _sub_48F983(this, arg);
}

_extern void _sub_49085B(Ship *const, vector3 const &);
void Ship::tumble(vector3 const &) // 0x49085B
{
    mangled_assert("?tumble@Ship@@AAEXABVvector3@@@Z");
    todo("implement");
    _sub_49085B(this, arg);
}

_extern float _sub_48CCB0(Ship *const);
float Ship::getSobDieTime() // 0x48CCB0
{
    mangled_assert("?getSobDieTime@Ship@@MAEMXZ");
    todo("implement");
    float __result = _sub_48CCB0(this);
    return __result;
}

_extern void _sub_48B5D5(Ship *const, char const *);
void Ship::doDeathEffects(char const *) // 0x48B5D5
{
    mangled_assert("?doDeathEffects@Ship@@EAEXPBD@Z");
    todo("implement");
    _sub_48B5D5(this, arg);
}

_extern float _sub_48C4CB(Ship *const);
float Ship::getMainEngineUsage() // 0x48C4CB
{
    mangled_assert("?getMainEngineUsage@Ship@@UAEMXZ");
    todo("implement");
    float __result = _sub_48C4CB(this);
    return __result;
}

_extern float _sub_48C1CE(Ship *const);
float Ship::getHorizontalRotationalThrusterUsage() // 0x48C1CE
{
    mangled_assert("?getHorizontalRotationalThrusterUsage@Ship@@UAEMXZ");
    todo("implement");
    float __result = _sub_48C1CE(this);
    return __result;
}

_extern float _sub_48D454(Ship *const);
float Ship::getVerticalRotationalThrusterUsage() // 0x48D454
{
    mangled_assert("?getVerticalRotationalThrusterUsage@Ship@@UAEMXZ");
    todo("implement");
    float __result = _sub_48D454(this);
    return __result;
}

_extern void _sub_48CD83(Ship const *const, vector3 const &, vector3 &, vector3 &, float);
void Ship::getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const // 0x48CD83
{
    mangled_assert("?getTargetOnSob@Ship@@UBEXABVvector3@@AAV2@1M@Z");
    todo("implement");
    _sub_48CD83(this, arg, arg, arg, arg);
}

_extern void _sub_48F6D8(Ship *const, bool);
void Ship::setFOWVisible(bool) // 0x48F6D8
{
    mangled_assert("?setFOWVisible@Ship@@QAEX_N@Z");
    todo("implement");
    _sub_48F6D8(this, arg);
}

_extern bool _sub_48DF6A(Ship const *const);
bool Ship::isMoving() const // 0x48DF6A
{
    mangled_assert("?isMoving@Ship@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_48DF6A(this);
    return __result;
}

_extern bool _sub_48DFF2(Ship const *const);
bool Ship::isRotating() const // 0x48DFF2
{
    mangled_assert("?isRotating@Ship@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_48DFF2(this);
    return __result;
}

_extern void _sub_48E9DB(Ship *const);
void Ship::removeTemporaryAbilities() // 0x48E9DB
{
    mangled_assert("?removeTemporaryAbilities@Ship@@QAEXXZ");
    todo("implement");
    _sub_48E9DB(this);
}

_extern void _sub_48B037(Ship *const);
void Ship::applyMultipliersAndAbilities() // 0x48B037
{
    mangled_assert("?applyMultipliersAndAbilities@Ship@@QAEXXZ");
    todo("implement");
    _sub_48B037(this);
}

_extern unsigned __int32 _sub_48CC46(Ship const *const);
unsigned __int32 Ship::getShipTypeId() const // 0x48CC46
{
    mangled_assert("?getShipTypeId@Ship@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_48CC46(this);
    return __result;
}

_extern float _sub_48C67D(Ship const *const);
float Ship::getMaxSensorRange() const // 0x48C67D
{
    mangled_assert("?getMaxSensorRange@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C67D(this);
    return __result;
}

_extern bool _sub_48E056(Ship const *const);
bool Ship::isVisHyperspacing() const // 0x48E056
{
    mangled_assert("?isVisHyperspacing@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48E056(this);
    return __result;
}

_extern bool _sub_48E084(Ship const *const);
bool Ship::isVisHyperspacingClipped() const // 0x48E084
{
    mangled_assert("?isVisHyperspacingClipped@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48E084(this);
    return __result;
}

_extern bool _sub_48D641(Ship const *const);
bool Ship::inHyperspace() const // 0x48D641
{
    mangled_assert("?inHyperspace@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48D641(this);
    return __result;
}

_extern bool _sub_48DE43(Ship const *const);
bool Ship::isDockingOrLaunching() const // 0x48DE43
{
    mangled_assert("?isDockingOrLaunching@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48DE43(this);
    return __result;
}

_extern void _sub_48B3ED(Ship *const);
void Ship::clearCloaking() // 0x48B3ED
{
    mangled_assert("?clearCloaking@Ship@@UAEXXZ");
    todo("implement");
    _sub_48B3ED(this);
}

_extern float _sub_48CA84(Ship const *const);
float Ship::getResourceCollectionRate() const // 0x48CA84
{
    mangled_assert("?getResourceCollectionRate@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CA84(this);
    return __result;
}

_extern __int32 _sub_48CA50(Ship const *const);
__int32 Ship::getResourceCapacity() const // 0x48CA50
{
    mangled_assert("?getResourceCapacity@Ship@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_48CA50(this);
    return __result;
}

_extern void _sub_48C3CF(Ship *const, std::list<ResearchData *,std::allocator<ResearchData *> > &);
void Ship::getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &) // 0x48C3CF
{
    mangled_assert("?getListOfAllUpgrades@Ship@@QAEXAAV?$list@PAVResearchData@@V?$allocator@PAVResearchData@@@std@@@std@@@Z");
    todo("implement");
    _sub_48C3CF(this, arg);
}

_extern float _sub_48D55B(Ship const *const);
float Ship::getVisualRange() const // 0x48D55B
{
    mangled_assert("?getVisualRange@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48D55B(this);
    return __result;
}

_extern float _sub_48C9CE(Ship const *const);
float Ship::getPrimarySensorsRange() const // 0x48C9CE
{
    mangled_assert("?getPrimarySensorsRange@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C9CE(this);
    return __result;
}

_extern float _sub_48CBB6(Ship const *const);
float Ship::getSecondarySensorsRange() const // 0x48CBB6
{
    mangled_assert("?getSecondarySensorsRange@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CBB6(this);
    return __result;
}

_extern float _sub_48C654(Ship const *const);
float Ship::getMaxHealth() const // 0x48C654
{
    mangled_assert("?getMaxHealth@Ship@@UBEMXZ");
    todo("implement");
    float __result = _sub_48C654(this);
    return __result;
}

_extern float _sub_48C1AC(Ship const *const);
float Ship::getHealthRegenMultiplier() const // 0x48C1AC
{
    mangled_assert("?getHealthRegenMultiplier@Ship@@UBEMXZ");
    todo("implement");
    float __result = _sub_48C1AC(this);
    return __result;
}

_extern ShipStatic const *_sub_48CD0D(Ship const *const);
ShipStatic const *Ship::getStatic() const // 0x48CD0D
{
    mangled_assert("?getStatic@Ship@@QBEPBVShipStatic@@XZ");
    todo("implement");
    ShipStatic const * __result = _sub_48CD0D(this);
    return __result;
}

_extern float _sub_48C722(Ship const *const);
float Ship::getMaxSpeedWithFormation() const // 0x48C722
{
    mangled_assert("?getMaxSpeedWithFormation@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C722(this);
    return __result;
}

_extern float _sub_48D357(Ship const *const);
float Ship::getThrusterAccel() const // 0x48D357
{
    mangled_assert("?getThrusterAccel@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48D357(this);
    return __result;
}

_extern float _sub_48C417(Ship const *const);
float Ship::getMainEngineAccel() const // 0x48C417
{
    mangled_assert("?getMainEngineAccel@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C417(this);
    return __result;
}

_extern float _sub_48CB02(Ship const *const);
float Ship::getRotationAccel() const // 0x48CB02
{
    mangled_assert("?getRotationAccel@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CB02(this);
    return __result;
}

_extern float _sub_48D38F(Ship const *const);
float Ship::getThrusterBrake() const // 0x48D38F
{
    mangled_assert("?getThrusterBrake@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48D38F(this);
    return __result;
}

_extern float _sub_48C44F(Ship const *const);
float Ship::getMainEngineBrake() const // 0x48C44F
{
    mangled_assert("?getMainEngineBrake@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C44F(this);
    return __result;
}

_extern float _sub_48CB3A(Ship const *const);
float Ship::getRotationBrake() const // 0x48CB3A
{
    mangled_assert("?getRotationBrake@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CB3A(this);
    return __result;
}

_extern float _sub_48D3C7(Ship const *const);
float Ship::getThrusterMaxSpeed() const // 0x48D3C7
{
    mangled_assert("?getThrusterMaxSpeed@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48D3C7(this);
    return __result;
}

_extern float _sub_48C48B(Ship const *const);
float Ship::getMainEngineMaxSpeed() const // 0x48C48B
{
    mangled_assert("?getMainEngineMaxSpeed@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C48B(this);
    return __result;
}

_extern float _sub_48CB76(Ship const *const);
float Ship::getRotationMaxSpeed() const // 0x48CB76
{
    mangled_assert("?getRotationMaxSpeed@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CB76(this);
    return __result;
}

_extern float _sub_48C0A4(Ship const *const);
float Ship::getBuildSpeedMultiplier() const // 0x48C0A4
{
    mangled_assert("?getBuildSpeedMultiplier@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C0A4(this);
    return __result;
}

_extern float _sub_48CC21(Ship const *const);
float Ship::getShipHoldRepairSpeedMultiplier() const // 0x48CC21
{
    mangled_assert("?getShipHoldRepairSpeedMultiplier@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CC21(this);
    return __result;
}

_extern float _sub_48C10D(Ship const *const);
float Ship::getCosAccelerationAngle() const // 0x48C10D
{
    mangled_assert("?getCosAccelerationAngle@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C10D(this);
    return __result;
}

_extern float _sub_48C11A(Ship const *const);
float Ship::getCosMirrorAngle() const // 0x48C11A
{
    mangled_assert("?getCosMirrorAngle@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C11A(this);
    return __result;
}

_extern float _sub_48C127(Ship const *const);
float Ship::getCosSpecialTurnAngle() const // 0x48C127
{
    mangled_assert("?getCosSpecialTurnAngle@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C127(this);
    return __result;
}

_extern bool _sub_48B1FA(Ship const *const);
bool Ship::blockedLineOfFire() const // 0x48B1FA
{
    mangled_assert("?blockedLineOfFire@Ship@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48B1FA(this);
    return __result;
}

_extern void _sub_48E9C7(Ship *const);
void Ship::registerBlockedLineOfFire() // 0x48E9C7
{
    mangled_assert("?registerBlockedLineOfFire@Ship@@QAEXXZ");
    todo("implement");
    _sub_48E9C7(this);
}

_extern void _sub_48E9CE(Ship *const);
void Ship::registerClearLineOfFire() // 0x48E9CE
{
    mangled_assert("?registerClearLineOfFire@Ship@@QAEXXZ");
    todo("implement");
    _sub_48E9CE(this);
}

_extern __int32 _sub_48CCD8(Ship const *const);
__int32 Ship::getSpecialAttackIndex() const // 0x48CCD8
{
    mangled_assert("?getSpecialAttackIndex@Ship@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_48CCD8(this);
    return __result;
}

_extern float _sub_48CABB(Ship const *const);
float Ship::getResourceDropOffRate() const // 0x48CABB
{
    mangled_assert("?getResourceDropOffRate@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48CABB(this);
    return __result;
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &_sub_48CCF0(Ship const *const);
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &Ship::getSpecialAttackName() const // 0x48CCF0
{
    mangled_assert("?getSpecialAttackName@Ship@@QBEABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const & __result = _sub_48CCF0(this);
    return __result;
}

_extern float _sub_48C940(Ship const *const);
float Ship::getPerSecondDamageRating() const // 0x48C940
{
    mangled_assert("?getPerSecondDamageRating@Ship@@QBEMXZ");
    todo("implement");
    float __result = _sub_48C940(this);
    return __result;
}

_extern SoundEntityHandle _sub_48D7F5(Ship *const, __int32);
SoundEntityHandle Ship::internalShipPlaySound(__int32) // 0x48D7F5
{
    mangled_assert("?internalShipPlaySound@Ship@@AAE?AVSoundEntityHandle@@H@Z");
    todo("implement");
    SoundEntityHandle __result = _sub_48D7F5(this, arg);
    return __result;
}

_extern void _sub_48D977(Ship *const, __int32);
void Ship::internalShipStopSound(__int32) // 0x48D977
{
    mangled_assert("?internalShipStopSound@Ship@@AAEXH@Z");
    todo("implement");
    _sub_48D977(this, arg);
}

_extern bool _sub_48DF1C(Ship *const);
bool Ship::isInGodMode() // 0x48DF1C
{
    mangled_assert("?isInGodMode@Ship@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_48DF1C(this);
    return __result;
}

_extern bool _sub_48F594(Ship *const, SaveGameData *);
bool Ship::restore(SaveGameData *) // 0x48F594
{
    mangled_assert("?restore@Ship@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_48F594(this, arg);
    return __result;
}

_extern bool _sub_48F5E1(Ship *const, SaveGameData *, SaveType);
bool Ship::save(SaveGameData *, SaveType) // 0x48F5E1
{
    mangled_assert("?save@Ship@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_48F5E1(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_48A6B8(MeshInstance *);
_static void InitializeMeshInstanceCache(MeshInstance *instance) // 0x48A6B8
{
    mangled_assert("InitializeMeshInstanceCache");
    todo("implement");
    _sub_48A6B8(instance);
}

_extern vector3 _sub_48BF88(float);
_static vector3 generateRandomVector(float radius) // 0x48BF88
{
    mangled_assert("generateRandomVector");
    todo("implement");
    vector3 __result = _sub_48BF88(radius);
    return __result;
}

_extern void _sub_48FBED(float *[4], float const *, float const *);
_static void shadowMatrix(float *shadowMat[4], float const *groundplane, float const *lightpos) // 0x48FBED
{
    mangled_assert("shadowMatrix");
    todo("implement");
    _sub_48FBED(shadowMat, groundplane, lightpos);
}
#endif

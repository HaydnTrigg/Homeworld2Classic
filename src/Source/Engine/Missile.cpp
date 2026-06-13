#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\triangle.h>
#include <assist\stlexsmallvector.h>
#include <WeaponStatic.h>
#include <Render\objects\stateblock\stateblock.h>
#include <xstring>
#include <weaponfiretypes.h>
#include <SoundManager\SoundManager.h>
#include <Render\objects\texture.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\shared_array.hpp>
#include <Render\objects\textureregistry.h>
#include <pch.h>
#include <weaponinfo.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Mathlib\mathutil.h>
#include <playerresourcetype.h>
#include <SobWithMeshStatic.h>
#include <Ship\MineController.h>
#include <dbdefines.h>
#include <Graphics\DirectMeshRender.h>
#include <Modifiers\ModifierAbility.h>
#include <Mathlib\matrix3.h>
#include <UnitCaps\UnitCaps.h>
#include <Graphics\meshrenderproxy.h>
#include <gameSettings.h>
#include <syncChecking.h>
#include <SobRigidBodyStatic.h>
#include <SOBGroupManager.h>
#include <new>
#include <SoundManager\SoundEntityHandle.h>
#include <hash_map>
#include <Collision\Collision.h>
#include <exception>
#include <xhash>
#include <xstddef>
#include <Player.h>
#include <type_traits>
#include <MeshAnimation.h>
#include <ResearchManager.h>
#include <MissileStatic.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <ship.h>
#include <Camera\Camera.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <ShieldTypes.h>
#include <Camera\Frustum.h>
#include <vector>
#include <Collision\intersect.h>
#include <fileio\bytestream.h>
#include <fog.h>
#include <Camera\Plane3.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <fileio\fileioexports.h>
#include <Render\gl\types.h>
#include <debug\ctassert.h>
#include <Render\gl\lotypes.h>
#include <seInterface2\SampleID.h>
#include <Subsystems\HardPointManager.h>
#include <seInterface2\SampleBase.h>
#include <Ship\ShipController.h>
#include <Subsystems\HardPoint.h>
#include <Camera\OrbitParameters.h>
#include <Ship\AdvRigidBodyController.h>
#include <Subsystems\HardPointStatic.h>
#include <weapon.h>
#include <math.h>
#include <Physics\RigidBodyController.h>
#include <Subsystems\SubSystemType.h>
#include <WeaponFire\WeaponFire.h>
#include <Interpolation.h>
#include <SobZeroMassBody.h>
#include <list>
#include <MADState.h>
#include <sobzeromassbodystatic.h>
#include <LevelDesc.h>
#include <luaconfig\luabinding.h>
#include <Hash.h>
#include <luaconfig\luaconfig.h>
#include <Render\objects\mesh.h>
#include <Collision\Primitives\aabb.h>
#include <fileio\md5.h>
#include <lua.h>
#include <Render\objects\core.h>
#include <commandtype.h>
#include <Decal\DecalRefMesh.h>
#include <Render\objects\objects.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <SensorsManager.h>
#include <GameEventDefs.h>
#include <Render\gl\r_types.h>
#include <sobid.h>
#include <random.h>
#include <GameEventSys.h>
#include <gamestructimpl.h>
#include <Mathlib\matvec.h>
#include <BattleScar\BattleScarManager.h>
#include <EffectCreate.h>
#include <map>
#include <Badge.h>
#include <Decal\DecalManager.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <Decal\VertexPool.h>
#include <boost\scoped_ptr.hpp>
#include <HyperspaceManager.h>
#include <Physics\RigidBody.h>
#include <SquadronList.h>
#include <Graphics\TeamColour.h>
#include <MainUI.h>
#include <Physics\PhysicsObject.h>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <abilities.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <WeaponResult.h>
#include <boost\cstdint.hpp>
#include <weaponTargetInfo.h>
#include <boost\config.hpp>
#include <seInterface2\sedefinesshared.h>
#include <Universe.h>
#include <platform\timer.h>
#include <platform\osdef.h>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <SobUnmoveable.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <AttackStyle.h>
#include <boost\static_assert.hpp>
#include <boost\scoped_array.hpp>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <AttackCommand.h>
#include <command.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Collision\Primitives\capsule.h>
#include <savestream.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Collision\Primitives\segment.h>
#include <Modifiers\ModifierEffect.h>
#include <Collision\BVH\profiling.h>
#include <ShaderVariables.h>
#include <Ship\MissileController.h>
#include <util\dictionary.h>
#include <Mathlib\mathlibdll.h>
#include <util\utilexports.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <profile\profile.h>
#include <Render\FxGL\FXManager.h>
#include <iostream>
#include <Render\FxGL\VarMulti.h>
#include <Modifiers\ModifierApplier.h>
#include <pathpoints.h>
#include <Modifiers\ModifierTargetCache.h>
#include <debug\db.h>
#include <Subsystems\Subsystem.h>
#include <Subsystems\SubsystemStatic.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <fixedpoint.h>
#include <selection.h>
#include <util\fixed.h>
#include <Render\objects\renderable.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <DynamicPoint.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Collision\BVH\bvh.h>
#include <boost\detail\lwm_win32.hpp>
#include <Race.h>
#include <WeaponClassSpecificInfo.h>
#include <Missile.h>
#include <BuildManager.h>
#include <SobWithMesh.h>
#include <wchar.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <EngineTrailSystem.h>
#include <Collision\Primitives\sphere.h>
#include <config.h>
#include <HierarchyStatic.h>
#include <gameRandom.h>
#include <Collision\Primitives\mesh.h>

/* ---------- constants */

enum `anonymous-namespace'::MeshInstanceCache
{
    MIC_FogColour = 0,
    MIC_Number,
};

/* ---------- definitions */

typedef `anonymous-namespace'::TeamColourAdjustPred ?A0x3cea0f85::TeamColourAdjustPred;
typedef `anonymous-namespace'::MeshInstanceCache ?A0x3cea0f85::MeshInstanceCache;

class `anonymous-namespace'::TeamColourAdjustPred
{
public:
    TeamColourAdjustPred(unsigned long, unsigned long, vector4 const &, vector4 const &);
    void Do(CompoundStateBlock const *, StateVariableInstance *);
private:
    unsigned long const m_baseKey; // 0x0
    unsigned long const m_stripeKey; // 0x4
    vector4 const m_baseColour; // 0x8
    vector4 const m_stripeColour; // 0x18
};
static_assert(sizeof(`anonymous-namespace'::TeamColourAdjustPred) == 40, "Invalid `anonymous-namespace'::TeamColourAdjustPred size");

class CompareShipsByMissilePriority :
    public Selection::MinElementCompare
{
public:
    CompareShipsByMissilePriority(CompareShipsByMissilePriority const &); /* compiler_generated() */
    _inline CompareShipsByMissilePriority(Missile *);
    virtual bool Compare(Sob const &, Sob const &) const override;
private:
    Missile *m_missile; // 0x4
public:
    CompareShipsByMissilePriority &operator=(CompareShipsByMissilePriority const &); /* compiler_generated() */
};
static_assert(sizeof(CompareShipsByMissilePriority) == 8, "Invalid CompareShipsByMissilePriority size");

/* ---------- prototypes */

extern bool accurate(Sob const *sob, void *vData);

_static void InitializeMeshInstanceCache(MeshInstance *instance);

/* ---------- globals */

extern char const Missile::m_saveToken[0]; // 0x78C3F0
extern SaveData const Missile::m_saveData[13]; // 0x78C3F8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_486976(Missile *const, char const *, SobWithMesh *, WeaponStatic const *, WeaponTargetInfo const &, Player *);
Missile::Missile(char const *, SobWithMesh *, WeaponStatic const *, WeaponTargetInfo const &, Player *) // 0x486976
{
    mangled_assert("??0Missile@@QAE@PBDPAVSobWithMesh@@PBVWeaponStatic@@ABVWeaponTargetInfo@@PAVPlayer@@@Z");
    todo("implement");
    _sub_486976(this, arg, arg, arg, arg, arg);
}

_extern void _sub_486E8C(GameEvent_Combat *const);
_inline GameEvent_Combat::~GameEvent_Combat() // 0x486E8C
{
    mangled_assert("??1GameEvent_Combat@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_486E8C(this);
}

_extern void _sub_486E93(Missile *const);
Missile::~Missile() // 0x486E93
{
    mangled_assert("??1Missile@@UAE@XZ");
    todo("implement");
    _sub_486E93(this);
}

_extern void _sub_486F1D(WeaponTargetInfo *const);
_inline WeaponTargetInfo::~WeaponTargetInfo() // 0x486F1D
{
    mangled_assert("??1WeaponTargetInfo@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_486F1D(this);
}

_extern void _sub_487C7D(Missile *const, WeaponTargetInfo &);
void Missile::findNewPointOnTarget(WeaponTargetInfo &) // 0x487C7D
{
    mangled_assert("?findNewPointOnTarget@Missile@@AAEXAAVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_487C7D(this, arg);
}

_extern void _sub_48722C(Missile *const);
void Missile::RemoveAllSimData() // 0x48722C
{
    mangled_assert("?RemoveAllSimData@Missile@@IAEXXZ");
    todo("implement");
    _sub_48722C(this);
}

_extern void _sub_487268(Missile *const);
void Missile::RemoveFromSimulation() // 0x487268
{
    mangled_assert("?RemoveFromSimulation@Missile@@MAEXXZ");
    todo("implement");
    _sub_487268(this);
}

_extern void _sub_487278(Missile *const, vector3 const);
void Missile::SetInitialGoal(vector3 const) // 0x487278
{
    mangled_assert("?SetInitialGoal@Missile@@QAEXVvector3@@@Z");
    todo("implement");
    _sub_487278(this, arg);
}

_extern _sub_48689B(CompareShipsByMissilePriority *const, Missile *);
_inline CompareShipsByMissilePriority::CompareShipsByMissilePriority(Missile *) // 0x48689B
{
    mangled_assert("??0CompareShipsByMissilePriority@@QAE@PAVMissile@@@Z");
    todo("implement");
    _sub_48689B(this, arg);
}

_extern _sub_4868ED(Selection::MinElementCompare *const);
_inline Selection::MinElementCompare::MinElementCompare() // 0x4868ED
{
    mangled_assert("??0MinElementCompare@Selection@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4868ED(this);
}

_extern bool _sub_487096(CompareShipsByMissilePriority const *const, Sob const &, Sob const &);
bool CompareShipsByMissilePriority::Compare(Sob const &, Sob const &) const // 0x487096
{
    mangled_assert("?Compare@CompareShipsByMissilePriority@@UBE_NABVSob@@0@Z");
    todo("implement");
    bool __result = _sub_487096(this, arg, arg);
    return __result;
}

_extern bool _sub_488BA3(Missile *const, float);
bool Missile::update(float) // 0x488BA3
{
    mangled_assert("?update@Missile@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_488BA3(this, arg);
    return __result;
}

_extern bool _sub_4873B3(Sob const *, void *);
bool accurate(Sob const *sob, void *vData) // 0x4873B3
{
    mangled_assert("?accurate@@YG_NPBVSob@@PAX@Z");
    todo("implement");
    bool __result = _sub_4873B3(sob, vData);
    return __result;
}

_extern bool _sub_48819F(Missile *const, float);
bool Missile::mineUpdate(float) // 0x48819F
{
    mangled_assert("?mineUpdate@Missile@@AAE_NM@Z");
    todo("implement");
    bool __result = _sub_48819F(this, arg);
    return __result;
}

_extern bool _sub_488494(Missile *const, float);
bool Missile::missileUpdate(float) // 0x488494
{
    mangled_assert("?missileUpdate@Missile@@AAE_NM@Z");
    todo("implement");
    bool __result = _sub_488494(this, arg);
    return __result;
}

_extern void _sub_48741A(Missile *const, Sob *);
void Missile::checkSpawnWeaponFire(Sob *) // 0x48741A
{
    mangled_assert("?checkSpawnWeaponFire@Missile@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_48741A(this, arg);
}

_extern void _sub_48768A(Missile *const, Sob *);
void Missile::checkSubMunitions(Sob *) // 0x48768A
{
    mangled_assert("?checkSubMunitions@Missile@@AAEXPAVSob@@@Z");
    todo("implement");
    _sub_48768A(this, arg);
}

_extern void _sub_488AF5(Missile *const);
void Missile::stop() // 0x488AF5
{
    mangled_assert("?stop@Missile@@AAEXXZ");
    todo("implement");
    _sub_488AF5(this);
}

_extern Sob *_sub_487E7F(Missile *const, Selection const &);
Sob *Missile::getBestTarget(Selection const &) // 0x487E7F
{
    mangled_assert("?getBestTarget@Missile@@AAEPAVSob@@ABVSelection@@@Z");
    todo("implement");
    Sob * __result = _sub_487E7F(this, arg);
    return __result;
}

_extern void _sub_487CDE(Missile *const);
void Missile::flyStraight() // 0x487CDE
{
    mangled_assert("?flyStraight@Missile@@AAEXXZ");
    todo("implement");
    _sub_487CDE(this);
}

_extern void _sub_487DB7(Missile *const, WeaponTargetInfo const &);
void Missile::flyToTarget(WeaponTargetInfo const &) // 0x487DB7
{
    mangled_assert("?flyToTarget@Missile@@AAEXABVWeaponTargetInfo@@@Z");
    todo("implement");
    _sub_487DB7(this, arg);
}

_extern Missile *_sub_487F01(Missile *const);
Missile *Missile::getMissilePtr() // 0x487F01
{
    mangled_assert("?getMissilePtr@Missile@@QAEPAV1@XZ");
    todo("implement");
    Missile * __result = _sub_487F01(this);
    return __result;
}

_extern float _sub_487F3F(Missile *const);
float Missile::getSobDieTime() // 0x487F3F
{
    mangled_assert("?getSobDieTime@Missile@@UAEMXZ");
    todo("implement");
    float __result = _sub_487F3F(this);
    return __result;
}

_extern bool _sub_488E41(Missile *const, float);
bool Missile::updateTimeOfDeath(float) // 0x488E41
{
    mangled_assert("?updateTimeOfDeath@Missile@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_488E41(this, arg);
    return __result;
}

_extern void _sub_488745(Missile *const, Camera const *);
void Missile::render(Camera const *) // 0x488745
{
    mangled_assert("?render@Missile@@UAEXPBVCamera@@@Z");
    todo("implement");
    _sub_488745(this, arg);
}

_extern void _sub_48876A(Missile *const, Camera const *, MeshRenderProxy &);
void Missile::render(Camera const *, MeshRenderProxy &) // 0x48876A
{
    mangled_assert("?render@Missile@@UAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
    _sub_48876A(this, arg, arg);
}

_extern float _sub_487EF7(Missile *const);
float Missile::getMainEngineUsage() // 0x487EF7
{
    mangled_assert("?getMainEngineUsage@Missile@@UAEMXZ");
    todo("implement");
    float __result = _sub_487EF7(this);
    return __result;
}

_extern bool _sub_487F7C(Missile *const, Sob *, vector3 const &, vector3 const &);
bool Missile::hitsSob(Sob *, vector3 const &, vector3 const &) // 0x487F7C
{
    mangled_assert("?hitsSob@Missile@@QAE_NPAVSob@@ABVvector3@@1@Z");
    todo("implement");
    bool __result = _sub_487F7C(this, arg, arg, arg);
    return __result;
}

_extern Ship *_sub_487F04(Missile const *const);
Ship *Missile::getOwnerShip() const // 0x487F04
{
    mangled_assert("?getOwnerShip@Missile@@QBEPAVShip@@XZ");
    todo("implement");
    Ship * __result = _sub_487F04(this);
    return __result;
}

_extern _sub_4868F6(Missile *const, SaveGameData *);
Missile::Missile(SaveGameData *) // 0x4868F6
{
    mangled_assert("??0Missile@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4868F6(this, arg);
}

_extern void _sub_487C28(Missile *const);
void Missile::defaultSettings() // 0x487C28
{
    mangled_assert("?defaultSettings@Missile@@QAEXXZ");
    todo("implement");
    _sub_487C28(this);
}

_extern void _sub_4886C6(Missile *const);
void Missile::postRestore() // 0x4886C6
{
    mangled_assert("?postRestore@Missile@@UAEXXZ");
    todo("implement");
    _sub_4886C6(this);
}

_extern void _sub_486825(void *, SaveGameData *, SaveType);
void Missile::saveWeaponStatic(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x486825
{
    mangled_assert("?saveWeaponStatic@Missile@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_486825(objectPtr, saveGameData, savetype);
}

_extern void _sub_486828(void *, SaveGameData *);
void Missile::loadWeaponStatic(void *objectPtr, SaveGameData *saveGameData) // 0x486828
{
    mangled_assert("?loadWeaponStatic@Missile@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_486828(objectPtr, saveGameData);
}

_extern bool _sub_48893E(Missile *const, SaveGameData *);
bool Missile::restore(SaveGameData *) // 0x48893E
{
    mangled_assert("?restore@Missile@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_48893E(this, arg);
    return __result;
}

_extern bool _sub_48898B(Missile *const, SaveGameData *, SaveType);
bool Missile::save(SaveGameData *, SaveType) // 0x48898B
{
    mangled_assert("?save@Missile@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_48898B(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_48720A(MeshInstance *);
_static void InitializeMeshInstanceCache(MeshInstance *instance) // 0x48720A
{
    mangled_assert("InitializeMeshInstanceCache");
    todo("implement");
    _sub_48720A(instance);
}
#endif

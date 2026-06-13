#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Race.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Modifiers\ModifierTargetCache.h>
#include <DynamicPoint.h>
#include <BuildManager.h>
#include <resourceCommand.h>
#include <command.h>
#include <Mathlib\matrix3.h>
#include <SoundManager\SoundEntityHandle.h>
#include <HyperspaceManager.h>
#include <EffectCreate.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <SquadronList.h>
#include <Collision\Collision.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Sob\DustCloud\DustCloudGroupManager.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <gameSettings.h>
#include <MainUI.h>
#include <syncChecking.h>
#include <Collision\Primitives\obb.h>
#include <Selector.h>
#include <Collision\BVH\octree.h>
#include <MetaSelTarg.h>
#include <Collision\BVH\span.h>
#include <config.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Modifiers\ModifierApplier.h>
#include <Universe.h>
#include <Collision\BVH\proxy.h>
#include <Waypoint.h>
#include <xutility>
#include <Collision\intersect.h>
#include <SobUnmoveable.h>
#include <profile\profile.h>
#include <utility>
#include <iosfwd>
#include <Collision\primitivesfwd.h>
#include <iostream>
#include <vector>
#include <platform\timer.h>
#include <xmemory>
#include <platform\platformexports.h>
#include <fileio\fileioexports.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <Interpolation.h>
#include <BillboardRender.h>
#include <seInterface2\SampleID.h>
#include <math.h>
#include <Graphics\meshrenderproxy.h>
#include <seInterface2\SampleBase.h>
#include <Player.h>
#include <list>
#include <ResearchManager.h>
#include <Collision\Primitives\aabb.h>
#include <Physics\PhysicsObject.h>
#include <Mathlib\vector3.h>
#include <sobid.h>
#include <Mathlib\vector4.h>
#include <WeaponClassSpecificInfo.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <map>
#include <SensorsManager.h>
#include <fileio\md5.h>
#include <xtree>
#include <Render\gl\r_types.h>
#include <boost\smart_ptr.hpp>
#include <fixedpoint.h>
#include <Mathlib\matvec.h>
#include <boost\scoped_ptr.hpp>
#include <util\fixed.h>
#include <playerresourcetype.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <Mathlib\vector2.h>
#include <Render\gl\r_defines.h>
#include <util\types.h>
#include <Render\gl\glext.h>
#include <GameEventDefs.h>
#include <GameEventSys.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <Sob\DustCloud\DustCloudGroup.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\sedefinesshared.h>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_array.hpp>
#include <abilities.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <boost\static_assert.hpp>
#include <Collision\Primitives\segment.h>
#include <Modifiers\ModifierAbility.h>
#include <Collision\BVH\profiling.h>
#include <shipstatic.h>
#include <commandtype.h>
#include <weaponinfo.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <dbdefines.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <SobWithMesh.h>
#include <UnitCaps\UnitCaps.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <SobRigidBody.h>
#include <MultiplierTypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <SobRigidBodyStatic.h>
#include <boost\detail\shared_count.hpp>
#include <SOBGroupManager.h>
#include <Physics\RigidBody.h>
#include <bitset>
#include <hash_map>
#include <Physics\RigidBodyController.h>
#include <boost\detail\lwm_win32.hpp>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <xhash>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <gameRandom.h>
#include <Subsystems\HardPointStatic.h>
#include <random.h>
#include <Subsystems\SubSystemType.h>
#include <Sob\DustCloud\DustCloud.h>
#include <sob.h>
#include <wchar.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\mathutil.h>
#include <ITweak.h>
#include <Camera\OrbitParameters.h>
#include <Tactics.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const DustCloud::m_saveToken[0]; // 0x792A30
extern bool DustCloud::s_bOverrideLevelLighting; // 0x843F89
extern vector4 DustCloud::s_ambientColour; // 0x836158
extern SaveData const DustCloud::m_saveData[12]; // 0x792A40

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4C47B1(DustCloud *const, char const *, char const *);
DustCloud::DustCloud(char const *, char const *) // 0x4C47B1
{
    mangled_assert("??0DustCloud@@QAE@PBD0@Z");
    todo("implement");
    _sub_4C47B1(this, arg, arg);
}

_extern void _sub_4C4874(DustCloud *const);
_inline DustCloud::~DustCloud() // 0x4C4874
{
    mangled_assert("??1DustCloud@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C4874(this);
}

_extern _sub_4C472F(DustCloud *const, SaveGameData *);
DustCloud::DustCloud(SaveGameData *) // 0x4C472F
{
    mangled_assert("??0DustCloud@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4C472F(this, arg);
}

_extern void _sub_4C48CB(bool, vector4 const &);
void DustCloud::SetAmbientOverride(bool bOverride, vector4 const &col) // 0x4C48CB
{
    mangled_assert("?SetAmbientOverride@DustCloud@@SGX_NABVvector4@@@Z");
    todo("implement");
    _sub_4C48CB(bOverride, col);
}

_extern bool _sub_4C48A9(vector4 &);
bool DustCloud::GetAmbientOverride(vector4 &ambient) // 0x4C48A9
{
    mangled_assert("?GetAmbientOverride@DustCloud@@SG_NAAVvector4@@@Z");
    todo("implement");
    bool __result = _sub_4C48A9(ambient);
    return __result;
}

_extern void _sub_4C5604(DustCloud *const, Camera const *, MeshRenderProxy &);
void DustCloud::render(Camera const *, MeshRenderProxy &) // 0x4C5604
{
    mangled_assert("?render@DustCloud@@UAEXPBVCamera@@AAVMeshRenderProxy@@@Z");
    todo("implement");
    _sub_4C5604(this, arg, arg);
}

_extern void _sub_4C49AB(DustCloud *const);
void DustCloud::UpdateCollisionProxies() // 0x4C49AB
{
    mangled_assert("?UpdateCollisionProxies@DustCloud@@MAEXXZ");
    todo("implement");
    _sub_4C49AB(this);
}

_extern bool _sub_4C58CC(DustCloud *const, float);
bool DustCloud::update(float) // 0x4C58CC
{
    mangled_assert("?update@DustCloud@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4C58CC(this, arg);
    return __result;
}

_extern void _sub_4C5911(DustCloud *const, float);
void DustCloud::updateCharging(float) // 0x4C5911
{
    mangled_assert("?updateCharging@DustCloud@@IAEXM@Z");
    todo("implement");
    _sub_4C5911(this, arg);
}

_extern void _sub_4C521A(DustCloud *const, float);
void DustCloud::jumpCharge(float) // 0x4C521A
{
    mangled_assert("?jumpCharge@DustCloud@@IAEXM@Z");
    todo("implement");
    _sub_4C521A(this, arg);
}

_extern void _sub_4C587F(DustCloud *const, float);
void DustCloud::setRadius(float) // 0x4C587F
{
    mangled_assert("?setRadius@DustCloud@@QAEXM@Z");
    todo("implement");
    _sub_4C587F(this, arg);
}

_extern bool _sub_4C5311(DustCloud *const, float, bool);
bool DustCloud::jumpChargeToNeighbours(float, bool) // 0x4C5311
{
    mangled_assert("?jumpChargeToNeighbours@DustCloud@@IAE_NM_N@Z");
    todo("implement");
    bool __result = _sub_4C5311(this, arg, arg);
    return __result;
}

_extern bool _sub_4C51D7(DustCloud const *const);
bool DustCloud::isCharged() const // 0x4C51D7
{
    mangled_assert("?isCharged@DustCloud@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4C51D7(this);
    return __result;
}

_extern void _sub_4C49E6(DustCloud *const, float);
void DustCloud::charge(float) // 0x4C49E6
{
    mangled_assert("?charge@DustCloud@@QAEXM@Z");
    todo("implement");
    _sub_4C49E6(this, arg);
}

_extern void _sub_4C581B(DustCloud *const, float, bool);
void DustCloud::setCharge(float, bool) // 0x4C581B
{
    mangled_assert("?setCharge@DustCloud@@QAEXM_N@Z");
    todo("implement");
    _sub_4C581B(this, arg, arg);
}

_extern void _sub_4C4DAE(DustCloud *const);
void DustCloud::enforceBounds() // 0x4C4DAE
{
    mangled_assert("?enforceBounds@DustCloud@@IAEXXZ");
    todo("implement");
    _sub_4C4DAE(this);
}

_extern vector4 _sub_4C50CF(DustCloud const *const);
vector4 DustCloud::getColour() const // 0x4C50CF
{
    mangled_assert("?getColour@DustCloud@@QBE?AVvector4@@XZ");
    todo("implement");
    vector4 __result = _sub_4C50CF(this);
    return __result;
}

_extern float _sub_4C5037(DustCloud const *const);
float DustCloud::getChargedFactor() const // 0x4C5037
{
    mangled_assert("?getChargedFactor@DustCloud@@QBEMXZ");
    todo("implement");
    float __result = _sub_4C5037(this);
    return __result;
}

_extern void _sub_4C5561(DustCloud *const);
void DustCloud::postRestore() // 0x4C5561
{
    mangled_assert("?postRestore@DustCloud@@UAEXXZ");
    todo("implement");
    _sub_4C5561(this);
}

_extern void _sub_4C4B74(DustCloud *const, Sob *);
void DustCloud::doCollision(Sob *) // 0x4C4B74
{
    mangled_assert("?doCollision@DustCloud@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_4C4B74(this, arg);
}

_extern void _sub_4C4EBB(DustCloud *const, DustCloud *, bool);
void DustCloud::generateNonDeterministicLightning(DustCloud *, bool) // 0x4C4EBB
{
    mangled_assert("?generateNonDeterministicLightning@DustCloud@@IAEXPAV1@_N@Z");
    todo("implement");
    _sub_4C4EBB(this, arg, arg);
}

_extern vector3 _sub_4C4F15(DustCloud *const);
vector3 DustCloud::generateRandomPointInside() // 0x4C4F15
{
    mangled_assert("?generateRandomPointInside@DustCloud@@IAE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_4C4F15(this);
    return __result;
}

_extern void _sub_4C4E0E(DustCloud *const, float);
void DustCloud::generateNonDeterministicEffects(float) // 0x4C4E0E
{
    mangled_assert("?generateNonDeterministicEffects@DustCloud@@IAEXM@Z");
    todo("implement");
    _sub_4C4E0E(this, arg);
}

_extern vector3 const &_sub_4C4DE9(DustCloud *const);
vector3 const &DustCloud::generateLightningPoint() // 0x4C4DE9
{
    mangled_assert("?generateLightningPoint@DustCloud@@IAEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4C4DE9(this);
    return __result;
}

_extern void _sub_4C5580(DustCloud *const);
void DustCloud::randomizeVisual() // 0x4C5580
{
    mangled_assert("?randomizeVisual@DustCloud@@IAEXXZ");
    todo("implement");
    _sub_4C5580(this);
}

_extern void _sub_4C58BB(DustCloud *const, float);
void DustCloud::setRotation(float) // 0x4C58BB
{
    mangled_assert("?setRotation@DustCloud@@QAEXM@Z");
    todo("implement");
    _sub_4C58BB(this, arg);
}

_extern vector4 _sub_4C515D(DustCloud const *const);
vector4 DustCloud::getEmissiveColour() const // 0x4C515D
{
    mangled_assert("?getEmissiveColour@DustCloud@@QBE?AVvector4@@XZ");
    todo("implement");
    vector4 __result = _sub_4C515D(this);
    return __result;
}

_extern void _sub_4C5863(DustCloud *const, vector3 const &);
void DustCloud::setPosition(vector3 const &) // 0x4C5863
{
    mangled_assert("?setPosition@DustCloud@@MAEXABVvector3@@@Z");
    todo("implement");
    _sub_4C5863(this, arg);
}

_extern void _sub_4C4AF8(DustCloud *const);
void DustCloud::defaultSettings() // 0x4C4AF8
{
    mangled_assert("?defaultSettings@DustCloud@@QAEXXZ");
    todo("implement");
    _sub_4C4AF8(this);
}

_extern bool _sub_4C5781(DustCloud *const, SaveGameData *);
bool DustCloud::restore(SaveGameData *) // 0x4C5781
{
    mangled_assert("?restore@DustCloud@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4C5781(this, arg);
    return __result;
}

_extern bool _sub_4C57CE(DustCloud *const, SaveGameData *, SaveType);
bool DustCloud::save(SaveGameData *, SaveType) // 0x4C57CE
{
    mangled_assert("?save@DustCloud@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4C57CE(this, arg, arg);
    return __result;
}

_extern DustCloud *_sub_4C48E8(char const *, char const *, vector3 const &, vector3 const &, vector4 const &, float, float);
DustCloud *DustCloud::Spawn(char const *dustcloudGroupName, char const *resourcename, vector3 const &position, vector3 const &speed, vector4 const &color, float rotationDegrees, float radius) // 0x4C48E8
{
    mangled_assert("?Spawn@DustCloud@@SGPAV1@PBD0ABVvector3@@1ABVvector4@@MM@Z");
    todo("implement");
    DustCloud * __result = _sub_4C48E8(dustcloudGroupName, resourcename, position, speed, color, rotationDegrees, radius);
    return __result;
}

_extern void _sub_4C4A15(DustCloud *const, Camera const *);
void DustCloud::computeSelTarg(Camera const *) // 0x4C4A15
{
    mangled_assert("?computeSelTarg@DustCloud@@UAEXPBVCamera@@@Z");
    todo("implement");
    _sub_4C4A15(this, arg);
}

/* ---------- private code */
#endif

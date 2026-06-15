#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <WeaponStatic.h>
#include <Subsystems\Subsystem.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\matrix3.h>
#include <Subsystems\SubsystemStatic.h>
#include <weaponfiretypes.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <new>
#include <Modifiers\ModifierEffect.h>
#include <exception>
#include <gameSettings.h>
#include <xstddef>
#include <syncChecking.h>
#include <type_traits>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\Collision.h>
#include <Collision\BVH\span.h>
#include <Modifiers\ModifierApplier.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <vector>
#include <Collision\intersect.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <fileio\fileioexports.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <math.h>
#include <Interpolation.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <SobZeroMassBody.h>
#include <sobid.h>
#include <map>
#include <sobzeromassbodystatic.h>
#include <xtree>
#include <WeaponClassSpecificInfo.h>
#include <boost\smart_ptr.hpp>
#include <weaponinfo.h>
#include <boost\scoped_ptr.hpp>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Mathlib\vector2.h>
#include <playerresourcetype.h>
#include <util\types.h>
#include <platform\timer.h>
#include <boost\cstdint.hpp>
#include <TeamColourRegistry.h>
#include <platform\platformexports.h>
#include <config.h>
#include <savegame.h>
#include <boost\config.hpp>
#include <task.h>
#include <stack>
#include <weaponTargetInfo.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <SobWithMeshStatic.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <weapontesting.h>
#include <boost\scoped_array.hpp>
#include <seInterface2\SoundParams.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Mathlib\quat.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <ShieldTypes.h>
#include <fileio\md5.h>
#include <Collision\Primitives\capsule.h>
#include <Modifiers\ModifierAbility.h>
#include <Collision\Primitives\segment.h>
#include <MeshAnimation.h>
#include <Collision\BVH\profiling.h>
#include <shipstatic.h>
#include <gamestructimpl.h>
#include <commandtype.h>
#include <Badge.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Mathlib\fastmath.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\mathutil.h>
#include <SoundManager\SoundEntityHandle.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Tactics.h>
#include <boost\static_assert.hpp>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Collision\BVH\bvh.h>
#include <abilities.h>
#include <boost\detail\lwm_win32.hpp>
#include <profile\profile.h>
#include <iostream>
#include <WeaponAnimatedTurret.h>
#include <weapon.h>
#include <wchar.h>
#include <seInterface2\sedefinesshared.h>
#include <WeaponFire\WeaponFire.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const WeaponAnimatedTurret::m_saveToken[0]; // 0x78E6B8
extern SaveData const WeaponAnimatedTurret::m_saveData[3]; // 0x78E658

/* ---------- private variables */

/* ---------- public code */

WeaponAnimatedTurret::WeaponAnimatedTurret(Sob *) // 0x49EB73
{
    mangled_assert("??0WeaponAnimatedTurret@@QAE@PAVSob@@@Z");
    todo("implement");
}

WeaponAnimatedTurret::WeaponAnimatedTurret(SaveGameData *) // 0x49EB30
{
    mangled_assert("??0WeaponAnimatedTurret@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void WeaponAnimatedTurret::defaultSettings() // 0x49F468
{
    mangled_assert("?defaultSettings@WeaponAnimatedTurret@@QAEXXZ");
    todo("implement");
}

void WeaponAnimatedTurret::postRestore() // 0x4A04F2
{
    mangled_assert("?postRestore@WeaponAnimatedTurret@@UAEXXZ");
    todo("implement");
}

void WeaponAnimatedTurret::bindStatics(WeaponStatic *, WeaponClassSpecificInfo *) // 0x49F366
{
    mangled_assert("?bindStatics@WeaponAnimatedTurret@@UAEXPAVWeaponStatic@@PAVWeaponClassSpecificInfo@@@Z");
    todo("implement");
}

bool WeaponAnimatedTurret::restore(SaveGameData *) // 0x4A04F7
{
    mangled_assert("?restore@WeaponAnimatedTurret@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool WeaponAnimatedTurret::save(SaveGameData *, SaveType) // 0x4A0544
{
    mangled_assert("?save@WeaponAnimatedTurret@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

WeaponAnimatedTurret::~WeaponAnimatedTurret() // 0x49EBB6
{
    mangled_assert("??1WeaponAnimatedTurret@@UAE@XZ");
    todo("implement");
}

void WeaponAnimatedTurret::MoveToHomePosition() // 0x49EC38
{
    mangled_assert("?MoveToHomePosition@WeaponAnimatedTurret@@MAEXXZ");
    todo("implement");
}

void WeaponAnimatedTurret::getAnglesToTarget(WeaponTargetInfo const &, float &, float &) const // 0x49F4EC
{
    mangled_assert("?getAnglesToTarget@WeaponAnimatedTurret@@ABEXABVWeaponTargetInfo@@AAM1@Z");
    todo("implement");
}

bool WeaponAnimatedTurret::interpolateNewAngle(float &, float, float) // 0x4A02E4
{
    mangled_assert("?interpolateNewAngle@WeaponAnimatedTurret@@AAE_NAAMMM@Z");
    todo("implement");
}

bool WeaponAnimatedTurret::moveAzimuthTo(float, float) // 0x4A034B
{
    mangled_assert("?moveAzimuthTo@WeaponAnimatedTurret@@AAE_NMM@Z");
    todo("implement");
}

bool WeaponAnimatedTurret::moveDeclinationTo(float, float) // 0x4A042C
{
    mangled_assert("?moveDeclinationTo@WeaponAnimatedTurret@@AAE_NMM@Z");
    todo("implement");
}

bool WeaponAnimatedTurret::moveTurretTo(float, float, float) // 0x4A0484
{
    mangled_assert("?moveTurretTo@WeaponAnimatedTurret@@AAE_NMMM@Z");
    todo("implement");
}

void WeaponAnimatedTurret::aimAtCurrentTarget() // 0x49ECB1
{
    mangled_assert("?aimAtCurrentTarget@WeaponAnimatedTurret@@MAEXXZ");
    todo("implement");
}

bool WeaponAnimatedTurret::canReachTarget(WeaponTargetInfo const &) // 0x49F36B
{
    mangled_assert("?canReachTarget@WeaponAnimatedTurret@@MAE_NABVWeaponTargetInfo@@@Z");
    todo("implement");
}

bool WeaponAnimatedTurret::slave() // 0x4A0591
{
    mangled_assert("?slave@WeaponAnimatedTurret@@UAE_NXZ");
    todo("implement");
}

void WeaponAnimatedTurret::getWorldSpaceMuzzle(vector3 &, vector3 &) // 0x49FDC8
{
    mangled_assert("?getWorldSpaceMuzzle@WeaponAnimatedTurret@@UAEXAAVvector3@@0@Z");
    todo("implement");
}

void WeaponAnimatedTurret::getWorldSpaceMuzzle(vector3 &, vector3 &, vector3 &) // 0x49F6CD
{
    mangled_assert("?getWorldSpaceMuzzle@WeaponAnimatedTurret@@UAEXAAVvector3@@00@Z");
    todo("implement");
}

void WeaponAnimatedTurret::findNewPointOnTarget(WeaponTargetInfo &) // 0x49F48B
{
    mangled_assert("?findNewPointOnTarget@WeaponAnimatedTurret@@MAEXAAVWeaponTargetInfo@@@Z");
    todo("implement");
}

void WeaponAnimatedTurret::bindData(WeaponStatic *, WeaponClassSpecificInfo *) // 0x49F133
{
    mangled_assert("?bindData@WeaponAnimatedTurret@@UAEXPAVWeaponStatic@@PAVWeaponClassSpecificInfo@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

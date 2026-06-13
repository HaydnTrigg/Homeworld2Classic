#if 0
/* ---------- headers */

#include "decomp.h"
#include <abilities.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <new>
#include <Collision\BVH\profiling.h>
#include <exception>
#include <Tactics.h>
#include <xstddef>
#include <type_traits>
#include <seInterface2\PatchID.h>
#include <xutility>
#include <seInterface2\PatchBase.h>
#include <utility>
#include <seInterface2\SoundParams.h>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Modifiers\ModifierTargetCache.h>
#include <list>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <fixedpoint.h>
#include <Mathlib\vector3.h>
#include <util\fixed.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\vector2.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <boost\cstdint.hpp>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <TeamColourRegistry.h>
#include <Mathlib\quat.h>
#include <ship.h>
#include <weaponinfo.h>
#include <SobWithMesh.h>
#include <SobWithMeshStatic.h>
#include <weaponstaticinfo.h>
#include <SobRigidBody.h>
#include <GunBinding.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <playerresourcetype.h>
#include <SobRigidBodyStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Collision\BVH\octree.h>
#include <debug\db.h>
#include <Collision\BVH\span.h>
#include <WeaponClassSpecificInfo.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <MeshAnimation.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <ShieldTypes.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <sobid.h>
#include <Interpolation.h>
#include <boost\detail\lwm_win32.hpp>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Collision\Primitives\aabb.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\Primitives\obb.h>
#include <Subsystems\SubSystemType.h>
#include <SensorPingManager.h>
#include <savegame.h>
#include <wchar.h>
#include <task.h>
#include <stack>
#include <Modifiers\ModifierAbility.h>
#include <shipstatic.h>
#include <commandtype.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const SensorPingManager::m_saveToken[0]; // 0x78C9F0
extern SaveData const SensorPingManager::m_saveData[4]; // 0x78CA08

/* ---------- private variables */

/* ---------- public code */

_extern _sub_489579(SensorPingManager *const, Ship *);
SensorPingManager::SensorPingManager(Ship *) // 0x489579
{
    mangled_assert("??0SensorPingManager@@QAE@PAVShip@@@Z");
    todo("implement");
    _sub_489579(this, arg);
}

_extern void _sub_4895D9(SensorPingManager *const);
SensorPingManager::~SensorPingManager() // 0x4895D9
{
    mangled_assert("??1SensorPingManager@@UAE@XZ");
    todo("implement");
    _sub_4895D9(this);
}

_extern void _sub_48973E(SensorPingManager *const, float);
void SensorPingManager::update(float) // 0x48973E
{
    mangled_assert("?update@SensorPingManager@@QAEXM@Z");
    todo("implement");
    _sub_48973E(this, arg);
}

_extern void _sub_48967D(SensorPingManager *const);
void SensorPingManager::onPing() // 0x48967D
{
    mangled_assert("?onPing@SensorPingManager@@QAEXXZ");
    todo("implement");
    _sub_48967D(this);
}

_extern bool _sub_48966B(SensorPingManager const *const);
bool SensorPingManager::isPinging() const // 0x48966B
{
    mangled_assert("?isPinging@SensorPingManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48966B(this);
    return __result;
}

_extern float _sub_489649(SensorPingManager const *const);
float SensorPingManager::getPingRadius() const // 0x489649
{
    mangled_assert("?getPingRadius@SensorPingManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_489649(this);
    return __result;
}

_extern SensorPingStatic const *_sub_48964D(SensorPingManager const *const);
SensorPingStatic const *SensorPingManager::getStatic() const // 0x48964D
{
    mangled_assert("?getStatic@SensorPingManager@@ABEPBVSensorPingStatic@@XZ");
    todo("implement");
    SensorPingStatic const * __result = _sub_48964D(this);
    return __result;
}

_extern _sub_489530(SensorPingManager *const, SaveGameData *);
SensorPingManager::SensorPingManager(SaveGameData *) // 0x489530
{
    mangled_assert("??0SensorPingManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_489530(this, arg);
}

_extern void _sub_489634(SensorPingManager *const);
void SensorPingManager::defaultSettings() // 0x489634
{
    mangled_assert("?defaultSettings@SensorPingManager@@QAEXXZ");
    todo("implement");
    _sub_489634(this);
}

_extern void _sub_4896C4(SensorPingManager *const);
void SensorPingManager::postRestore() // 0x4896C4
{
    mangled_assert("?postRestore@SensorPingManager@@UAEXXZ");
    todo("implement");
    _sub_4896C4(this);
}

_extern bool _sub_4896C5(SensorPingManager *const, SaveGameData *);
bool SensorPingManager::restore(SaveGameData *) // 0x4896C5
{
    mangled_assert("?restore@SensorPingManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4896C5(this, arg);
    return __result;
}

_extern bool _sub_489703(SensorPingManager *const, SaveGameData *, SaveType);
bool SensorPingManager::save(SaveGameData *, SaveType) // 0x489703
{
    mangled_assert("?save@SensorPingManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_489703(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

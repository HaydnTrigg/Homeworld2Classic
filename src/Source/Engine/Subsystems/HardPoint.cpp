#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Universe.h>
#include <xstring>
#include <Waypoint.h>
#include <xmemory0>
#include <sobid.h>
#include <SobUnmoveable.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <sob.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SelTarg.h>
#include <visibility.h>
#include <prim.h>
#include <Collision\BVH\bvh.h>
#include <Modifiers\ModifierAbility.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\matrix3.h>
#include <fileio\filestream.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\Subsystem.h>
#include <platform\timer.h>
#include <MultiplierContainer.h>
#include <platform\platformexports.h>
#include <list>
#include <abilities.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <xtree>
#include <MultiplierTypes.h>
#include <boost\scoped_ptr.hpp>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Collision\BVH\octree.h>
#include <task.h>
#include <seInterface2\PatchID.h>
#include <Collision\BVH\span.h>
#include <stack>
#include <seInterface2\PatchBase.h>
#include <Collision\BVH\Internal\span_i.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector2.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <util\types.h>
#include <Collision\primitivesfwd.h>
#include <boost\cstdint.hpp>
#include <ShieldTypes.h>
#include <MeshAnimation.h>
#include <SobFactory.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\aabb.h>
#include <weaponinfo.h>
#include <Subsystems\HardPointManager.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Modifiers\ModifierTargetCache.h>
#include <App\Hw2Identify.h>
#include <SobRigidBody.h>
#include <Modifiers\ModifierApplier.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <savegameimpl.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <Interpolation.h>
#include <WeaponClassSpecificInfo.h>
#include <boost\detail\shared_count.hpp>
#include <fixedpoint.h>
#include <boost\detail\lwm_win32.hpp>
#include <util\fixed.h>
#include <Subsystems\SubsystemStatic.h>
#include <Collision\Primitives\capsule.h>
#include <sobstatic.h>
#include <Collision\Primitives\segment.h>
#include <Collision\Primitives\sphere.h>
#include <Collision\BVH\profiling.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <Subsystems\HardPoint.h>
#include <xhash>
#include <Subsystems\HardPointStatic.h>
#include <wchar.h>
#include <Subsystems\SubSystemType.h>
#include <playerresourcetype.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const HardPoint::m_saveToken[0]; // 0x798D4C
extern SaveData const HardPoint::m_saveData[1]; // 0x798D58

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4EEDC3(HardPoint *const);
HardPoint::HardPoint() // 0x4EEDC3
{
    mangled_assert("??0HardPoint@@QAE@XZ");
    todo("implement");
    _sub_4EEDC3(this);
}

_extern _sub_4EED7B(HardPoint *const, SaveGameData *);
HardPoint::HardPoint(SaveGameData *) // 0x4EED7B
{
    mangled_assert("??0HardPoint@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4EED7B(this, arg);
}

_extern void _sub_4EEE09(HardPoint *const);
HardPoint::~HardPoint() // 0x4EEE09
{
    mangled_assert("??1HardPoint@@UAE@XZ");
    todo("implement");
    _sub_4EEE09(this);
}

_extern void _sub_4EEFB3(HardPoint *const);
void HardPoint::defaultSettings() // 0x4EEFB3
{
    mangled_assert("?defaultSettings@HardPoint@@QAEXXZ");
    todo("implement");
    _sub_4EEFB3(this);
}

_extern void _sub_4EF18F(HardPoint *const);
void HardPoint::postRestore() // 0x4EF18F
{
    mangled_assert("?postRestore@HardPoint@@UAEXXZ");
    todo("implement");
    _sub_4EF18F(this);
}

_extern bool _sub_4EF1BF(HardPoint *const, SaveGameData *);
bool HardPoint::restore(SaveGameData *) // 0x4EF1BF
{
    mangled_assert("?restore@HardPoint@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4EF1BF(this, arg);
    return __result;
}

_extern bool _sub_4EF1FD(HardPoint *const, SaveGameData *, SaveType);
bool HardPoint::save(SaveGameData *, SaveType) // 0x4EF1FD
{
    mangled_assert("?save@HardPoint@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4EF1FD(this, arg, arg);
    return __result;
}

_extern void _sub_4EF180(HardPoint *const);
void HardPoint::init() // 0x4EF180
{
    mangled_assert("?init@HardPoint@@QAEXXZ");
    todo("implement");
    _sub_4EF180(this);
}

_extern SubSystem *_sub_4EEE70(HardPoint *const, unsigned __int32);
SubSystem *HardPoint::addSubSystem(unsigned __int32) // 0x4EEE70
{
    mangled_assert("?addSubSystem@HardPoint@@IAEPAVSubSystem@@I@Z");
    todo("implement");
    SubSystem * __result = _sub_4EEE70(this, arg);
    return __result;
}

_extern Ship *_sub_4EF03A(HardPoint const *const);
Ship *HardPoint::getShip() const // 0x4EF03A
{
    mangled_assert("?getShip@HardPoint@@QBEPAVShip@@XZ");
    todo("implement");
    Ship * __result = _sub_4EF03A(this);
    return __result;
}

_extern void _sub_4EF06E(HardPoint *const, vector3 &, matrix3 &);
void HardPoint::getWorldCoords(vector3 &, matrix3 &) // 0x4EF06E
{
    mangled_assert("?getWorldCoords@HardPoint@@QAEXAAVvector3@@AAVmatrix3@@@Z");
    todo("implement");
    _sub_4EF06E(this, arg, arg);
}

_extern SubSystem *_sub_4EEF77(HardPoint *const, unsigned __int32);
SubSystem *HardPoint::createSubSystem(unsigned __int32) // 0x4EEF77
{
    mangled_assert("?createSubSystem@HardPoint@@QAEPAVSubSystem@@I@Z");
    todo("implement");
    SubSystem * __result = _sub_4EEF77(this, arg);
    return __result;
}

_extern void _sub_4EEFC6(HardPoint *const, bool);
void HardPoint::destroySubSystem(bool) // 0x4EEFC6
{
    mangled_assert("?destroySubSystem@HardPoint@@QAEX_N@Z");
    todo("implement");
    _sub_4EEFC6(this, arg);
}

_extern void _sub_4EF190(HardPoint *const);
void HardPoint::removeSubSystem() // 0x4EF190
{
    mangled_assert("?removeSubSystem@HardPoint@@QAEXXZ");
    todo("implement");
    _sub_4EF190(this);
}

_extern SubSystem *_sub_4EF048(HardPoint *const);
SubSystem *HardPoint::getSubSystem() // 0x4EF048
{
    mangled_assert("?getSubSystem@HardPoint@@QAEPAVSubSystem@@XZ");
    todo("implement");
    SubSystem * __result = _sub_4EF048(this);
    return __result;
}

_extern void _sub_4EF25C(HardPoint *const, float);
void HardPoint::update(float) // 0x4EF25C
{
    mangled_assert("?update@HardPoint@@QAEXM@Z");
    todo("implement");
    _sub_4EF25C(this, arg);
}

_extern void _sub_4EF238(HardPoint *const, SubSystem *);
void HardPoint::setSubSystem(SubSystem *) // 0x4EF238
{
    mangled_assert("?setSubSystem@HardPoint@@QAEXPAVSubSystem@@@Z");
    todo("implement");
    _sub_4EF238(this, arg);
}

/* ---------- private code */
#endif

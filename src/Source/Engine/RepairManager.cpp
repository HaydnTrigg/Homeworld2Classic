#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <DynamicPoint.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Tactics.h>
#include <new>
#include <exception>
#include <xstddef>
#include <SobWithMeshStatic.h>
#include <type_traits>
#include <ship.h>
#include <Subsystems\HardPointManager.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPoint.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPointStatic.h>
#include <sob.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <sobstatic.h>
#include <xutility>
#include <Collision\Primitives\sphere.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\BVH\octree.h>
#include <Ship\ShipController.h>
#include <Collision\BVH\span.h>
#include <Ship\AdvRigidBodyController.h>
#include <list>
#include <Collision\BVH\Internal\span_i.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Physics\RigidBodyController.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector3.h>
#include <Player.h>
#include <Mathlib\vector4.h>
#include <SquadronList.h>
#include <map>
#include <Squadron.h>
#include <xtree>
#include <ParadeCommand.h>
#include <Parade.h>
#include <boost\scoped_ptr.hpp>
#include <Interpolation.h>
#include <hash_map>
#include <xhash>
#include <Collision\Primitives\aabb.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\vector2.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <ITweak.h>
#include <LatchManager.h>
#include <Race.h>
#include <boost\cstdint.hpp>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <TeamColourRegistry.h>
#include <Mathlib\quat.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <CaptureCommand.h>
#include <command.h>
#include <BuildManager.h>
#include <SelTarg.h>
#include <prim.h>
#include <abilities.h>
#include <profile\profile.h>
#include <iostream>
#include <WeaponClassSpecificInfo.h>
#include <Collision\Primitives\capsule.h>
#include <debug\db.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <RepairByLatchingCommand.h>
#include <TrailTargetCommand.h>
#include <deque>
#include <playerresourcetype.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <OrderFeedback.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <seInterface2\PatchID.h>
#include <savegamedef.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <boost\detail\shared_count.hpp>
#include <sobid.h>
#include <fixedpoint.h>
#include <boost\detail\lwm_win32.hpp>
#include <util\fixed.h>
#include <ResearchManager.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <RepairManager.h>
#include <MultiplierTypes.h>
#include <savegame.h>
#include <wchar.h>
#include <Collision\BVH\bvh.h>
#include <weaponinfo.h>
#include <task.h>
#include <Modifiers\ModifierAbility.h>
#include <stack>
#include <shipstatic.h>
#include <queue>
#include <Modifiers\ModifierTargetCache.h>
#include <commandtype.h>
#include <LatchPointManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const RepairManager::m_saveToken[0]; // 0x78C890
extern SaveData const RepairManager::m_saveData[1]; // 0x78C8A0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_48905B(RepairManager *const, Ship *);
RepairManager::RepairManager(Ship *) // 0x48905B
{
    mangled_assert("??0RepairManager@@QAE@PAVShip@@@Z");
    todo("implement");
    _sub_48905B(this, arg);
}

_extern void _sub_4890C0(RepairManager *const);
RepairManager::~RepairManager() // 0x4890C0
{
    mangled_assert("??1RepairManager@@UAE@XZ");
    todo("implement");
    _sub_4890C0(this);
}

_extern void _sub_489130(RepairManager *const);
void RepairManager::applySlowDown() // 0x489130
{
    mangled_assert("?applySlowDown@RepairManager@@QAEXXZ");
    todo("implement");
    _sub_489130(this);
}

_extern void _sub_48926F(RepairManager *const, float);
void RepairManager::update(float) // 0x48926F
{
    mangled_assert("?update@RepairManager@@UAEXM@Z");
    todo("implement");
    _sub_48926F(this, arg);
}

_extern void _sub_4891BB(RepairManager *const, Ship *);
void RepairManager::registerInterestedShip(Ship *) // 0x4891BB
{
    mangled_assert("?registerInterestedShip@RepairManager@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4891BB(this, arg);
}

_extern void _sub_48925D(RepairManager *const, Ship *);
void RepairManager::unRegisterInterestedShip(Ship *) // 0x48925D
{
    mangled_assert("?unRegisterInterestedShip@RepairManager@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_48925D(this, arg);
}

_extern LatchPointManagerStatic *_sub_48919D(RepairManager *const);
LatchPointManagerStatic *RepairManager::getStaticData() // 0x48919D
{
    mangled_assert("?getStaticData@RepairManager@@MAEPAVLatchPointManagerStatic@@XZ");
    todo("implement");
    LatchPointManagerStatic * __result = _sub_48919D(this);
    return __result;
}

_extern _sub_489018(RepairManager *const, SaveGameData *);
RepairManager::RepairManager(SaveGameData *) // 0x489018
{
    mangled_assert("??0RepairManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_489018(this, arg);
}

_extern void _sub_489196(RepairManager *const);
void RepairManager::defaultSettings() // 0x489196
{
    mangled_assert("?defaultSettings@RepairManager@@QAEXXZ");
    todo("implement");
    _sub_489196(this);
}

_extern void _sub_4891B6(RepairManager *const);
void RepairManager::postRestore() // 0x4891B6
{
    mangled_assert("?postRestore@RepairManager@@UAEXXZ");
    todo("implement");
    _sub_4891B6(this);
}

_extern bool _sub_4891C3(RepairManager *const, SaveGameData *);
bool RepairManager::restore(SaveGameData *) // 0x4891C3
{
    mangled_assert("?restore@RepairManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4891C3(this, arg);
    return __result;
}

_extern bool _sub_489210(RepairManager *const, SaveGameData *, SaveType);
bool RepairManager::save(SaveGameData *, SaveType) // 0x489210
{
    mangled_assert("?save@RepairManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_489210(this, arg, arg);
    return __result;
}

_extern _sub_4890AE(RepairManagerStatic *const);
RepairManagerStatic::RepairManagerStatic() // 0x4890AE
{
    mangled_assert("??0RepairManagerStatic@@QAE@XZ");
    todo("implement");
    _sub_4890AE(this);
}

_extern void _sub_489102(RepairManagerStatic *const);
RepairManagerStatic::~RepairManagerStatic() // 0x489102
{
    mangled_assert("??1RepairManagerStatic@@QAE@XZ");
    todo("implement");
    _sub_489102(this);
}

/* ---------- private code */
#endif

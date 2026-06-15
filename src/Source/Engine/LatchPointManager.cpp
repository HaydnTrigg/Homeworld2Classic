#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <xstring>
#include <Collision\BVH\Internal\span_i.h>
#include <xmemory0>
#include <Collision\BVH\proxy.h>
#include <Mathlib\matrix4.h>
#include <Ship\ShipController.h>
#include <pch.h>
#include <Collision\intersect.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Ship\AdvRigidBodyController.h>
#include <Collision\primitivesfwd.h>
#include <Physics\RigidBodyController.h>
#include <Player.h>
#include <SquadronList.h>
#include <Mathlib\matrix3.h>
#include <Interpolation.h>
#include <ParadeCommand.h>
#include <Parade.h>
#include <new>
#include <Collision\Primitives\aabb.h>
#include <hash_map>
#include <Collision\Primitives\obb.h>
#include <exception>
#include <xhash>
#include <xstddef>
#include <Squadron.h>
#include <type_traits>
#include <command.h>
#include <Race.h>
#include <Modifiers\ModifierUIInfo.h>
#include <LatchManager.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <xutility>
#include <Ship\FormationTargetInfo.h>
#include <utility>
#include <iosfwd>
#include <FormationCommands\FormationCommand.h>
#include <vector>
#include <xmemory>
#include <TeamColourRegistry.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <list>
#include <BuildManager.h>
#include <weaponstaticinfo.h>
#include <SelTarg.h>
#include <GunBinding.h>
#include <prim.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <abilities.h>
#include <Collision\Primitives\capsule.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector2.h>
#include <WeaponClassSpecificInfo.h>
#include <Ship\Formation.h>
#include <playerresourcetype.h>
#include <Ship\FormationPattern.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <boost\cstdint.hpp>
#include <seInterface2\SoundParams.h>
#include <OrderFeedback.h>
#include <fixedpoint.h>
#include <ResearchManager.h>
#include <util\fixed.h>
#include <Mathlib\quat.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <weaponinfo.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Modifiers\ModifierAbility.h>
#include <shipstatic.h>
#include <commandtype.h>
#include <debug\db.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <FormationCommands\FormationLatchCommand.h>
#include <sobid.h>
#include <MeshAnimation.h>
#include <DynamicPoint.h>
#include <boost\detail\lwm_win32.hpp>
#include <ShieldTypes.h>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Tactics.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPointManager.h>
#include <sob.h>
#include <Subsystems\HardPoint.h>
#include <sobstatic.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <LatchPointManager.h>
#include <savegame.h>
#include <wchar.h>
#include <task.h>
#include <stack>
#include <queue>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const LatchPointManager::m_saveToken[18]; // 0x78C328
extern SaveData const LatchPointManager::m_saveData[3]; // 0x78C340

/* ---------- private variables */

/* ---------- public code */

LatchPointManager::LatchPointManager(Ship *, LatchPointManagerStatic *) // 0x48603B
{
    mangled_assert("??0LatchPointManager@@QAE@PAVShip@@PAVLatchPointManagerStatic@@@Z");
    todo("implement");
}

LatchPointManager::~LatchPointManager() // 0x48610A
{
    mangled_assert("??1LatchPointManager@@UAE@XZ");
    todo("implement");
}

void LatchPointManager::update(float) // 0x486779
{
    mangled_assert("?update@LatchPointManager@@UAEXM@Z");
    todo("implement");
}

bool LatchPointManager::registerShip(Ship *) // 0x486587
{
    mangled_assert("?registerShip@LatchPointManager@@QAE_NPAVShip@@@Z");
    todo("implement");
}

void LatchPointManager::unRegisterShip(Ship *) // 0x486722
{
    mangled_assert("?unRegisterShip@LatchPointManager@@QAEXPAVShip@@@Z");
    todo("implement");
}

std::pair<vector3,matrix3> *LatchPointManager::getPointFor(Ship *) // 0x4864BF
{
    mangled_assert("?getPointFor@LatchPointManager@@QAEPAU?$pair@Vvector3@@Vmatrix3@@@std@@PAVShip@@@Z");
    todo("implement");
}

void LatchPointManager::updateList() // 0x48679F
{
    mangled_assert("?updateList@LatchPointManager@@EAEXXZ");
    todo("implement");
}

void LatchPointManager::detatchAll() // 0x486431
{
    mangled_assert("?detatchAll@LatchPointManager@@IAEXXZ");
    todo("implement");
}

void LatchPointManager::Notify_Insertion(Sob *) // 0x486239
{
    mangled_assert("?Notify_Insertion@LatchPointManager@@EAEXPAVSob@@@Z");
    // __shifted(LatchPointManager, 12);
    todo("implement");
}

void LatchPointManager::Notify_Removal(Sob *) // 0x48623C
{
    mangled_assert("?Notify_Removal@LatchPointManager@@EAEXPAVSob@@@Z");
    // __shifted(LatchPointManager, 12);
    todo("implement");
}

LatchPointManager::LatchPointManager(SaveGameData *) // 0x485FC9
{
    mangled_assert("??0LatchPointManager@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void LatchPointManager::defaultSettings() // 0x486430
{
    mangled_assert("?defaultSettings@LatchPointManager@@QAEXXZ");
    todo("implement");
}

void LatchPointManager::postRestore() // 0x486534
{
    mangled_assert("?postRestore@LatchPointManager@@UAEXXZ");
    todo("implement");
}

bool LatchPointManager::restore(SaveGameData *) // 0x486697
{
    mangled_assert("?restore@LatchPointManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool LatchPointManager::save(SaveGameData *, SaveType) // 0x4866D5
{
    mangled_assert("?save@LatchPointManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

LatchPointManagerStatic::LatchPointManagerStatic() // 0x4860EC
{
    mangled_assert("??0LatchPointManagerStatic@@QAE@XZ");
    todo("implement");
}

LatchPointManagerStatic::~LatchPointManagerStatic() // 0x48617C
{
    mangled_assert("??1LatchPointManagerStatic@@QAE@XZ");
    todo("implement");
}

bool LatchPointManagerStatic::loadLatchPoints(ShipStatic *) // 0x4864F9
{
    mangled_assert("?loadLatchPoints@LatchPointManagerStatic@@QAE_NPAVShipStatic@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

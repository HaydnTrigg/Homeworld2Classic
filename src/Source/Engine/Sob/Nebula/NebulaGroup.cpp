#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierAbility.h>
#include <Collision\Primitives\aabb.h>
#include <assist\stlexsmallvector.h>
#include <ship.h>
#include <shipstatic.h>
#include <SobWithMesh.h>
#include <xstring>
#include <commandtype.h>
#include <SobRigidBody.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <sob.h>
#include <HyperspaceManager.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <abilities.h>
#include <BuildManager.h>
#include <Sob\Nebula\Nebula.h>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <DynamicPoint.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Tactics.h>
#include <SelTarg.h>
#include <prim.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <dbdefines.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <UnitCaps\UnitCaps.h>
#include <BillboardRender.h>
#include <Collision\Primitives\capsule.h>
#include <Graphics\meshrenderproxy.h>
#include <Collision\Primitives\segment.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\profiling.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Modifiers\ModifierTargetCache.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <fixedpoint.h>
#include <xtree>
#include <util\fixed.h>
#include <boost\scoped_ptr.hpp>
#include <ParadeCommand.h>
#include <Parade.h>
#include <Mathlib\vector2.h>
#include <hash_map>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <xhash>
#include <util\types.h>
#include <MultiplierTypes.h>
#include <Squadron.h>
#include <Collision\BVH\bvh.h>
#include <command.h>
#include <boost\cstdint.hpp>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <SOBGroupManager.h>
#include <Modifiers\ModifierEffect.h>
#include <Mathlib\quat.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <seInterface2\PatchID.h>
#include <weaponinfo.h>
#include <seInterface2\PatchBase.h>
#include <weaponstaticinfo.h>
#include <savestream.h>
#include <seInterface2\SoundParams.h>
#include <GunBinding.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <playerresourcetype.h>
#include <savegameimpl.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <pathpoints.h>
#include <task.h>
#include <debug\db.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <deque>
#include <WeaponClassSpecificInfo.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <SobRigidBodyStatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <OrderFeedback.h>
#include <boost\detail\lwm_win32.hpp>
#include <SquadronList.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPoint.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointStatic.h>
#include <Universe.h>
#include <Subsystems\SubSystemType.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <Sob\Nebula\NebulaGroup.h>
#include <sobid.h>
#include <wchar.h>
#include <queue>
#include <Interpolation.h>
#include <Race.h>
#include <SOBGroup.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const NebulaGroup::m_saveToken[0]; // 0x792418
extern SaveData const NebulaGroup::m_saveData[5]; // 0x792378

/* ---------- private variables */

/* ---------- public code */

NebulaGroup::NebulaGroup(char const *) // 0x4C11FF
{
    mangled_assert("??0NebulaGroup@@AAE@PBD@Z");
    todo("implement");
}

NebulaGroup::NebulaGroup(SaveGameData *) // 0x4C1270
{
    mangled_assert("??0NebulaGroup@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

_inline NebulaGroup::~NebulaGroup() // 0x4C12C9
{
    mangled_assert("??1NebulaGroup@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NebulaGroupBase::~NebulaGroupBase() // 0x4C1311
{
    mangled_assert("??1NebulaGroupBase@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void NebulaGroup::defaultSettings() // 0x4C13C8
{
    mangled_assert("?defaultSettings@NebulaGroup@@QAEXXZ");
    todo("implement");
}

void NebulaGroup::postRestore() // 0x4C13F6
{
    mangled_assert("?postRestore@NebulaGroup@@UAEXXZ");
    todo("implement");
}

void NebulaGroup::addNebula(Nebula *) // 0x4C1352
{
    mangled_assert("?addNebula@NebulaGroup@@AAEXPAVNebula@@@Z");
    todo("implement");
}

char const *NebulaGroup::getName() // 0x4C13E7
{
    mangled_assert("?getName@NebulaGroup@@QAEPBDXZ");
    todo("implement");
}

bool NebulaGroup::update(float) // 0x4C14A2
{
    mangled_assert("?update@NebulaGroup@@UAE_NM@Z");
    todo("implement");
}

void NebulaGroup::updateDamaging(float) // 0x4C14E8
{
    mangled_assert("?updateDamaging@NebulaGroup@@AAEXM@Z");
    todo("implement");
}

void NebulaGroup::updateFading(float) // 0x4C1635
{
    mangled_assert("?updateFading@NebulaGroup@@AAEXM@Z");
    todo("implement");
}

void NebulaGroup::fadeNebula(float) // 0x4C13D5
{
    mangled_assert("?fadeNebula@NebulaGroup@@QAEXM@Z");
    todo("implement");
}

void NebulaGroup::applyMultipliersAndAbilities() // 0x4C135A
{
    mangled_assert("?applyMultipliersAndAbilities@NebulaGroup@@QAEXXZ");
    todo("implement");
}

bool NebulaGroup::restore(SaveGameData *) // 0x4C13F7
{
    mangled_assert("?restore@NebulaGroup@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool NebulaGroup::save(SaveGameData *, SaveType) // 0x4C1444
{
    mangled_assert("?save@NebulaGroup@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

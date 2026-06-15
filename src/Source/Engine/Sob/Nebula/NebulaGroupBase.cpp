#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Player.h>
#include <pch.h>
#include <ResearchManager.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Parade.h>
#include <hash_map>
#include <xhash>
#include <weaponinfo.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <xutility>
#include <seInterface2\SoundParams.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <playerresourcetype.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <SOBGroupManager.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <list>
#include <SobRigidBodyStatic.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <map>
#include <platform\timer.h>
#include <xtree>
#include <platform\platformexports.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Mathlib\vector2.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <util\types.h>
#include <Collision\primitivesfwd.h>
#include <boost\cstdint.hpp>
#include <ParadeCommand.h>
#include <Interpolation.h>
#include <commandtype.h>
#include <OrderFeedback.h>
#include <Squadron.h>
#include <SquadronList.h>
#include <command.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\aabb.h>
#include <ship.h>
#include <profile\profile.h>
#include <SobWithMesh.h>
#include <iostream>
#include <SobRigidBody.h>
#include <sob.h>
#include <abilities.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <Race.h>
#include <SOBGroup.h>
#include <debug\db.h>
#include <deque>
#include <HyperspaceManager.h>
#include <SelTarg.h>
#include <prim.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <BuildManager.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <savestream.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <sobid.h>
#include <wchar.h>
#include <fixedpoint.h>
#include <queue>
#include <util\fixed.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > SquadronInsideMapIterator;

/* ---------- prototypes */

/* ---------- globals */

extern char const NebulaGroupBase::m_saveToken[0]; // 0x792470
extern SaveData const NebulaGroupBase::m_saveData[1]; // 0x792450

/* ---------- private variables */

_static
{
    extern float const nebulaResetTime; // 0x792480
}

/* ---------- public code */

NebulaGroupBase::NebulaGroupBase() // 0x4C1C46
{
    mangled_assert("??0NebulaGroupBase@@QAE@XZ");
    todo("implement");
}

NebulaGroupBase::NebulaGroupBase(SaveGameData *) // 0x4C1BFF
{
    mangled_assert("??0NebulaGroupBase@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void NebulaGroupBase::addCollidingSquadron(Squadron *) // 0x4C1E30
{
    mangled_assert("?addCollidingSquadron@NebulaGroupBase@@QAEXPAVSquadron@@@Z");
    todo("implement");
}

bool NebulaGroupBase::update(float) // 0x4C2087
{
    mangled_assert("?update@NebulaGroupBase@@UAE_NM@Z");
    todo("implement");
}

void NebulaGroupBase::updateSquadronsInside(float) // 0x4C209D
{
    mangled_assert("?updateSquadronsInside@NebulaGroupBase@@IAEXM@Z");
    todo("implement");
}

void NebulaGroupBase::getSquadronsInside(SOBGroup &, unsigned __int32) const // 0x4C1EFC
{
    mangled_assert("?getSquadronsInside@NebulaGroupBase@@QBEXAAVSOBGroup@@I@Z");
    todo("implement");
}

bool NebulaGroupBase::areAnySquadronsInside(SOBGroup const &) const // 0x4C1E55
{
    mangled_assert("?areAnySquadronsInside@NebulaGroupBase@@QBE_NABVSOBGroup@@@Z");
    todo("implement");
}

void NebulaGroupBase::removeSquadronsInside(SquadronList &) const // 0x4C1FB3
{
    mangled_assert("?removeSquadronsInside@NebulaGroupBase@@QBEXAAVSquadronList@@@Z");
    todo("implement");
}

bool NebulaGroupBase::areAnySquadronsOutside(SOBGroup const &) const // 0x4C1E93
{
    mangled_assert("?areAnySquadronsOutside@NebulaGroupBase@@QBE_NABVSOBGroup@@@Z");
    todo("implement");
}

void NebulaGroupBase::saveSquadronsInside(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x4C16CA
{
    mangled_assert("?saveSquadronsInside@NebulaGroupBase@@KGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void NebulaGroupBase::restoreSquadronsInside(void *objectPtr, SaveGameData *saveGameData) // 0x4C1720
{
    mangled_assert("?restoreSquadronsInside@NebulaGroupBase@@KGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

void NebulaGroupBase::postRestore() // 0x4C1FB2
{
    mangled_assert("?postRestore@NebulaGroupBase@@UAEXXZ");
    todo("implement");
}

bool NebulaGroupBase::restore(SaveGameData *) // 0x4C200A
{
    mangled_assert("?restore@NebulaGroupBase@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool NebulaGroupBase::save(SaveGameData *, SaveType) // 0x4C2048
{
    mangled_assert("?save@NebulaGroupBase@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

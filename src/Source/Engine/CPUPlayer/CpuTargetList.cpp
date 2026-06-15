#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <weaponinfo.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <Mathlib\matrix3.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <new>
#include <sob.h>
#include <exception>
#include <sobstatic.h>
#include <xstddef>
#include <Collision\Primitives\sphere.h>
#include <type_traits>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\primitivesfwd.h>
#include <list>
#include <assist\stlexvector.h>
#include <ParadeCommand.h>
#include <Interpolation.h>
#include <Mathlib\vector3.h>
#include <commandtype.h>
#include <Mathlib\vector4.h>
#include <OrderFeedback.h>
#include <SquadronList.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <boost\scoped_ptr.hpp>
#include <abilities.h>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <ShipQuery.h>
#include <Mathlib\quat.h>
#include <savestream.h>
#include <SelTarg.h>
#include <prim.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <Modifiers\ModifierTargetCache.h>
#include <debug\db.h>
#include <seInterface2\PatchID.h>
#include <deque>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <CPUPlayer\CpuTargetList.h>
#include <CPUPlayer\CpuTarget.h>
#include <wchar.h>
#include <Squadron.h>
#include <command.h>
#include <sobid.h>
#include <queue>
#include <Parade.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

TargetList::~TargetList() // 0x540968
{
    mangled_assert("??1TargetList@@QAE@XZ");
    todo("implement");
}

void TargetList::clear() // 0x540A4D
{
    mangled_assert("?clear@TargetList@@QAEXXZ");
    todo("implement");
}

BaseTarget *TargetList::find(unsigned __int32) const // 0x540AC2
{
    mangled_assert("?find@TargetList@@QBEPAVBaseTarget@@I@Z");
    todo("implement");
}

BaseTarget *TargetList::find(Squadron const *) const // 0x540AEB
{
    mangled_assert("?find@TargetList@@QBEPAVBaseTarget@@PBVSquadron@@@Z");
    todo("implement");
}

void TargetList::change_priority(TargetType, __int32) // 0x540A13
{
    mangled_assert("?change_priority@TargetList@@QAEXW4TargetType@@H@Z");
    todo("implement");
}

bool TargetList::exist(BaseTarget *) const // 0x540AA1
{
    mangled_assert("?exist@TargetList@@QBE_NPAVBaseTarget@@@Z");
    todo("implement");
}

void TargetList::remove(unsigned __int32) // 0x540BBE
{
    mangled_assert("?remove@TargetList@@QAEXI@Z");
    todo("implement");
}

void TargetList::remove(Squadron const *) // 0x540C06
{
    mangled_assert("?remove@TargetList@@QAEXPBVSquadron@@@Z");
    todo("implement");
}

void TargetList::removedead() // 0x540C5B
{
    mangled_assert("?removedead@TargetList@@QAEXXZ");
    todo("implement");
}

BaseTarget *TargetList::findclosest(vector3 const &) const // 0x540B21
{
    mangled_assert("?findclosest@TargetList@@QBEPAVBaseTarget@@ABVvector3@@@Z");
    todo("implement");
}

void TargetList::save(SaveStream *) // 0x540D54
{
    mangled_assert("?save@TargetList@@QAEXPAVSaveStream@@@Z");
    todo("implement");
}

void TargetList::restore(SaveStream *, TargetBaseType) // 0x540CB8
{
    mangled_assert("?restore@TargetList@@QAEXPAVSaveStream@@W4TargetBaseType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

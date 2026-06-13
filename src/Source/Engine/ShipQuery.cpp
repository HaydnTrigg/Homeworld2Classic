#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <OrderFeedback.h>
#include <xstring>
#include <SquadronList.h>
#include <Collision\Primitives\obb.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Subsystems\HardPointManager.h>
#include <MeshAnimation.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\matrix3.h>
#include <WeaponClassSpecificInfo.h>
#include <Modifiers\ModifierUIInfo.h>
#include <new>
#include <Modifiers\ModifierMultiplier.h>
#include <exception>
#include <xstddef>
#include <Modifiers\ModifierEffect.h>
#include <type_traits>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <fixedpoint.h>
#include <list>
#include <commandtype.h>
#include <Collision\primitivesfwd.h>
#include <util\fixed.h>
#include <DynamicPoint.h>
#include <playerresourcetype.h>
#include <Mathlib\vector3.h>
#include <seInterface2\PatchID.h>
#include <Mathlib\vector4.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\aabb.h>
#include <Squadron.h>
#include <command.h>
#include <Mathlib\vector2.h>
#include <sobid.h>
#include <boost\cstdint.hpp>
#include <weaponinfo.h>
#include <Mathlib\quat.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <ParadeCommand.h>
#include <SelTarg.h>
#include <Parade.h>
#include <Modifiers\ModifierAbility.h>
#include <prim.h>
#include <hash_map>
#include <xhash>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <debug\db.h>
#include <deque>
#include <shipstatic.h>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <ShieldTypes.h>
#include <boost\detail\lwm_win32.hpp>
#include <Tactics.h>
#include <visibility.h>
#include <MultiplierContainer.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <ShipQuery.h>
#include <abilities.h>
#include <wchar.h>
#include <queue>
#include <weaponstaticinfo.h>
#include <TeamColourRegistry.h>
#include <GunBinding.h>
#include <savegame.h>
#include <Modifiers\ModifierTargetCache.h>
#include <task.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void CalcSquadronValue(Squadron const &squad, CounterValue &outVal);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_637A4A(Squadron const &, CounterValue &);
void CalcSquadronValue(Squadron const &squad, CounterValue &outVal) // 0x637A4A
{
    mangled_assert("?CalcSquadronValue@@YGXABVSquadron@@AAVCounterValue@@@Z");
    todo("implement");
    _sub_637A4A(squad, outVal);
}

/* ---------- private code */
#endif

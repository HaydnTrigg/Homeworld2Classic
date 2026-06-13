#if 0
/* ---------- headers */

#include "decomp.h"
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <xstring>
#include <weaponinfo.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Mathlib\matrix3.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPoint.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\SubSystemType.h>
#include <list>
#include <Interpolation.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <Collision\Primitives\aabb.h>
#include <xtree>
#include <profile\profile.h>
#include <iostream>
#include <boost\scoped_ptr.hpp>
#include <sobid.h>
#include <abilities.h>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <debug\db.h>
#include <fixedpoint.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <util\fixed.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Collision\Avoidance.h>
#include <wchar.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void AvoidanceCallback(Sob *sobA, Sob *sobB, Collision::Point const &hitPoint);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_4E2D3E(Sob *, Sob *, Collision::Point const &);
void AvoidanceCallback(Sob *sobA, Sob *sobB, Collision::Point const &hitPoint) // 0x4E2D3E
{
    mangled_assert("?AvoidanceCallback@@YGXPAVSob@@0ABUPoint@Collision@@@Z");
    todo("implement");
    _sub_4E2D3E(sobA, sobB, hitPoint);
}

/* ---------- private code */
#endif

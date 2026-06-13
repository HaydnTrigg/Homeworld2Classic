#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <playerresourcetype.h>
#include <pch.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\matrix3.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointManager.h>
#include <vector>
#include <Collision\intersect.h>
#include <Subsystems\HardPoint.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Mathlib\vector4.h>
#include <Modifiers\ModifierEffect.h>
#include <sobid.h>
#include <abilities.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <debug\db.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <boost\detail\lwm_win32.hpp>
#include <Modifiers\ModifierActivityRelation.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <wchar.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <weaponinfo.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_56EA28(ModifierMultiplier *const, MultiplierType, InfluenceType, ActivityRelation, float, float, float);
ModifierMultiplier::ModifierMultiplier(MultiplierType, InfluenceType, ActivityRelation, float, float, float) // 0x56EA28
{
    mangled_assert("??0ModifierMultiplier@@QAE@W4MultiplierType@@W4InfluenceType@@W4ActivityRelation@@MMM@Z");
    todo("implement");
    _sub_56EA28(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_56EA6E(ModifierMultiplier *const);
ModifierMultiplier::~ModifierMultiplier() // 0x56EA6E
{
    mangled_assert("??1ModifierMultiplier@@UAE@XZ");
    todo("implement");
    _sub_56EA6E(this);
}

_extern void _sub_56EA9B(ModifierMultiplier const *const, Ship *, float);
void ModifierMultiplier::applyEffectTo(Ship *, float) const // 0x56EA9B
{
    mangled_assert("?applyEffectTo@ModifierMultiplier@@MBEXPAVShip@@M@Z");
    todo("implement");
    _sub_56EA9B(this, arg, arg);
}

/* ---------- private code */
#endif

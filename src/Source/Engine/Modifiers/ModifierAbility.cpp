#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\matrix3.h>
#include <Modifiers\ModifierTargetCache.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\sphere.h>
#include <weaponinfo.h>
#include <Mathlib\vector2.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <boost\cstdint.hpp>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\quat.h>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
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
#include <debug\db.h>
#include <Interpolation.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\Primitives\aabb.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <sobid.h>
#include <abilities.h>
#include <Modifiers\ModifierAbility.h>
#include <Modifiers\ModifierEffect.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

ModifierAbility::ModifierAbility(AbilityType, InfluenceType, float, bool) // 0x56DF1D
{
    mangled_assert("??0ModifierAbility@@QAE@W4AbilityType@@W4InfluenceType@@M_N@Z");
    todo("implement");
}

ModifierAbility::~ModifierAbility() // 0x56DF4F
{
    mangled_assert("??1ModifierAbility@@UAE@XZ");
    todo("implement");
}

void ModifierAbility::applyEffectTo(Ship *, float) const // 0x56DF7C
{
    mangled_assert("?applyEffectTo@ModifierAbility@@MBEXPAVShip@@M@Z");
    todo("implement");
}

/* ---------- private code */
#endif

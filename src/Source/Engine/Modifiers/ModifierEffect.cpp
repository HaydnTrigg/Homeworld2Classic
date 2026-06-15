#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <playerresourcetype.h>
#include <pch.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Race.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\matrix3.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <BuildManager.h>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <ITweak.h>
#include <Tactics.h>
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
#include <list>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Modifiers\ModifierEffect.h>
#include <SOBGroupManager.h>
#include <Mathlib\vector4.h>
#include <hash_map>
#include <xhash>
#include <sobid.h>
#include <Player.h>
#include <abilities.h>
#include <ResearchManager.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Modifiers\ModifierInfluenceType.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Modifiers\ModifierActivityRelation.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Universe.h>
#include <platform\timer.h>
#include <Waypoint.h>
#include <platform\platformexports.h>
#include <SobUnmoveable.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <boost\detail\lwm_win32.hpp>
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

ModifierEffect::ModifierEffect(InfluenceType, float) // 0x56E44F
{
    mangled_assert("??0ModifierEffect@@QAE@W4InfluenceType@@M@Z");
    todo("implement");
}

ModifierEffect::~ModifierEffect() // 0x56E46C
{
    mangled_assert("??1ModifierEffect@@UAE@XZ");
    todo("implement");
}

void ModifierEffect::apply(Ship *, vector3 const &, float, Selection *) const // 0x56E497
{
    mangled_assert("?apply@ModifierEffect@@QBEXPAVShip@@ABVvector3@@MPAVSelection@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <xhash>
#include <weaponinfo.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Ship\Formation.h>
#include <task.h>
#include <Ship\FormationPattern.h>
#include <stack>
#include <SOBGroupManager.h>
#include <Mathlib\matrix3.h>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <new>
#include <sobstatic.h>
#include <exception>
#include <Collision\Primitives\sphere.h>
#include <xstddef>
#include <SobRigidBodyStatic.h>
#include <type_traits>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\BVH\octree.h>
#include <fileio\fileioexports.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <CPUPlayer\CpuBlobs.h>
#include <platform\timer.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <platform\platformexports.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\primitivesfwd.h>
#include <list>
#include <ParadeCommand.h>
#include <assist\fixedstring.h>
#include <Interpolation.h>
#include <commandtype.h>
#include <Mathlib\vector3.h>
#include <OrderFeedback.h>
#include <Mathlib\vector4.h>
#include <SquadronList.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <xtree>
#include <CPUPlayer\CpuCommon.h>
#include <fileio\logfile.h>
#include <boost\scoped_ptr.hpp>
#include <abilities.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <boost\cstdint.hpp>
#include <ShipQuery.h>
#include <Mathlib\quat.h>
#include <SelTarg.h>
#include <prim.h>
#include <HyperspaceManager.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>
#include <Modifiers\ModifierTargetCache.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <deque>
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
#include <dbdefines.h>
#include <Ship\FormationTargetInfo.h>
#include <UnitCaps\UnitCaps.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <savestream.h>
#include <CPUPlayer\CpuTarget.h>
#include <Squadron.h>
#include <wchar.h>
#include <command.h>
#include <sobid.h>
#include <queue>
#include <Parade.h>
#include <hash_map>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

BaseTarget::~BaseTarget() // 0x540644
{
    mangled_assert("??1BaseTarget@@QAE@XZ");
    todo("implement");
}

void BaseTarget::Analyze(Player *) // 0x54067F
{
    mangled_assert("?Analyze@BaseTarget@@QAEXPAVPlayer@@@Z");
    todo("implement");
}

vector3 const &BaseTarget::getPosition() const // 0x5407AA
{
    mangled_assert("?getPosition@BaseTarget@@QBEABVvector3@@XZ");
    todo("implement");
}

BaseTarget::BaseTarget(unsigned __int32, vector3 const &, unsigned __int32, TargetType, float, float) // 0x540300
{
    mangled_assert("??0BaseTarget@@IAE@IABVvector3@@IW4TargetType@@MM@Z");
    todo("implement");
}

BaseTarget::BaseTarget(unsigned __int32, Squadron *, unsigned __int32, TargetType, float, float) // 0x5403D9
{
    mangled_assert("??0BaseTarget@@IAE@IPAVSquadron@@IW4TargetType@@MM@Z");
    todo("implement");
}

BaseTarget::BaseTarget(SaveStream *) // 0x5404DF
{
    mangled_assert("??0BaseTarget@@IAE@PAVSaveStream@@@Z");
    todo("implement");
}

void BaseTarget::setRadius(float) // 0x540864
{
    mangled_assert("?setRadius@BaseTarget@@QAEXM@Z");
    todo("implement");
}

void BaseTarget::save(SaveStream *) // 0x5407D8
{
    mangled_assert("?save@BaseTarget@@QAEXPAVSaveStream@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

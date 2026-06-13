#if 0
/* ---------- headers */

#include "decomp.h"
#include <SobRigidBody.h>
#include <luaconfig\luaconfig.h>
#include <sob.h>
#include <lua.h>
#include <assist\stlexsmallvector.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <xstring>
#include <SobRigidBodyStatic.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <MeshAnimation.h>
#include <HyperspaceManager.h>
#include <ShieldTypes.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <new>
#include <Collision\primitivesfwd.h>
#include <exception>
#include <xstddef>
#include <CPUPlayer\CpuBlobs.h>
#include <type_traits>
#include <ParadeCommand.h>
#include <SquadronList.h>
#include <Interpolation.h>
#include <Parade.h>
#include <xutility>
#include <hash_map>
#include <utility>
#include <CPUPlayer\CpuAttackState.h>
#include <iosfwd>
#include <xhash>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\Primitives\aabb.h>
#include <fileio\fileioexports.h>
#include <Collision\Primitives\obb.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <abilities.h>
#include <orders.h>
#include <orders_base.h>
#include <fileio\logfile.h>
#include <list>
#include <ShipQuery.h>
#include <assist\fixedstring.h>
#include <CPUPlayer\CpuFleetCommand.h>
#include <CPUPlayer\CpuHelpers.h>
#include <Mathlib\vector3.h>
#include <gamemsg.h>
#include <Mathlib\vector4.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Ship\FormationTargetInfo.h>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <CPUPlayer\CpuSquadGroup.h>
#include <Collision\Primitives\capsule.h>
#include <SOBGroupManager.h>
#include <CPUPlayer\CpuScoutState.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\quat.h>
#include <Race.h>
#include <seInterface2\PatchID.h>
#include <OrderFeedback.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <BuildManager.h>
#include <Ship\Formation.h>
#include <platform\timer.h>
#include <Ship\FormationPattern.h>
#include <commandtype.h>
#include <platform\platformexports.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <gameRandom.h>
#include <pathpoints.h>
#include <MultiplierTypes.h>
#include <random.h>
#include <debug\db.h>
#include <Collision\BVH\bvh.h>
#include <deque>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <CPUPlayer\CpuCommon.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <CPUPlayer\CpuTarget.h>
#include <selection.h>
#include <savegamedef.h>
#include <Squadron.h>
#include <command.h>
#include <boost\detail\shared_count.hpp>
#include <sobid.h>
#include <boost\detail\lwm_win32.hpp>
#include <weaponinfo.h>
#include <CPUPlayer\CpuDefendState.h>
#include <Universe.h>
#include <CPUPlayer\CpuOneShotState.h>
#include <playerresourcetype.h>
#include <Player.h>
#include <Waypoint.h>
#include <DynamicPoint.h>
#include <ResearchManager.h>
#include <SobUnmoveable.h>
#include <CPUPlayer\CpuIdleState.h>
#include <CPUPlayer\cpustate.h>
#include <wchar.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <queue>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <CPUPlayer\CpuClassifier.h>
#include <SobWithMesh.h>
#include <luaconfig\luabinding.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5356C4(IdleState *const);
void IdleState::Enter() // 0x5356C4
{
    mangled_assert("?Enter@IdleState@@QAEXXZ");
    todo("implement");
    _sub_5356C4(this);
}

_extern bool _sub_5356C9(IdleState *const);
bool IdleState::HandleTacticalCombat() // 0x5356C9
{
    mangled_assert("?HandleTacticalCombat@IdleState@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_5356C9(this);
    return __result;
}

_extern bool _sub_5357F5(IdleState *const);
bool IdleState::Update() // 0x5357F5
{
    mangled_assert("?Update@IdleState@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5357F5(this);
    return __result;
}

/* ---------- private code */
#endif

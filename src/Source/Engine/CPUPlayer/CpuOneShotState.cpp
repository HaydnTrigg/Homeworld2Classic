#if 0
/* ---------- headers */

#include "decomp.h"
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <xstring>
#include <SobRigidBodyStatic.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <MeshAnimation.h>
#include <Player.h>
#include <ShieldTypes.h>
#include <ResearchManager.h>
#include <gameRandom.h>
#include <random.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPoint.h>
#include <CPUPlayer\CpuHelpers.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointStatic.h>
#include <CPUPlayer\CpuClassifier.h>
#include <Collision\intersect.h>
#include <Subsystems\SubSystemType.h>
#include <new>
#include <Collision\primitivesfwd.h>
#include <exception>
#include <xstddef>
#include <CPUPlayer\CpuFleetCommand.h>
#include <type_traits>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <ParadeCommand.h>
#include <CPUPlayer\CpuAttackState.h>
#include <SquadronList.h>
#include <Interpolation.h>
#include <Parade.h>
#include <xutility>
#include <hash_map>
#include <utility>
#include <iosfwd>
#include <xhash>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\Primitives\aabb.h>
#include <fileio\fileioexports.h>
#include <Collision\Primitives\obb.h>
#include <abilities.h>
#include <orders.h>
#include <orders_base.h>
#include <fileio\logfile.h>
#include <list>
#include <ShipQuery.h>
#include <gamemsg.h>
#include <assist\fixedstring.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <Ship\FormationTargetInfo.h>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\vector2.h>
#include <CPUPlayer\CpuSquadGroup.h>
#include <CPUPlayer\CpuScoutState.h>
#include <boost\cstdint.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\quat.h>
#include <seInterface2\PatchID.h>
#include <OrderFeedback.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Ship\Formation.h>
#include <Ship\FormationPattern.h>
#include <commandtype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <debug\db.h>
#include <Collision\BVH\bvh.h>
#include <Race.h>
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
#include <BuildManager.h>
#include <command.h>
#include <boost\detail\shared_count.hpp>
#include <sobid.h>
#include <boost\detail\lwm_win32.hpp>
#include <weaponinfo.h>
#include <CPUPlayer\CpuDefendState.h>
#include <CPUPlayer\CpuIdleState.h>
#include <playerresourcetype.h>
#include <DynamicPoint.h>
#include <CPUPlayer\CpuOneShotState.h>
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
#include <SobWithMesh.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_5359D0(OneShotState *const);
void OneShotState::Enter() // 0x5359D0
{
    mangled_assert("?Enter@OneShotState@@QAEXXZ");
    todo("implement");
    _sub_5359D0(this);
}

_extern bool _sub_5359D9(OneShotState *const);
bool OneShotState::Update() // 0x5359D9
{
    mangled_assert("?Update@OneShotState@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5359D9(this);
    return __result;
}

/* ---------- private code */
#endif

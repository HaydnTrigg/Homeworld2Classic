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
#include <ShieldTypes.h>
#include <Universe.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\octree.h>
#include <Waypoint.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointManager.h>
#include <SobUnmoveable.h>
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
#include <Race.h>
#include <ParadeCommand.h>
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
#include <HyperspaceManager.h>
#include <Collision\Primitives\obb.h>
#include <BuildManager.h>
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
#include <SelTarg.h>
#include <prim.h>
#include <dbdefines.h>
#include <Mathlib\vector2.h>
#include <UnitCaps\UnitCaps.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Player.h>
#include <Collision\Primitives\capsule.h>
#include <ResearchManager.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <CPUPlayer\CpuSquadGroup.h>
#include <CPUPlayer\CpuDefendState.h>
#include <Mathlib\quat.h>
#include <CPUPlayer\CpuIdleState.h>
#include <seInterface2\PatchID.h>
#include <OrderFeedback.h>
#include <seInterface2\PatchBase.h>
#include <Ship\FormationTargetInfo.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Tactics.h>
#include <Mathlib\fastmath.h>
#include <commandtype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <pathpoints.h>
#include <SOBGroupManager.h>
#include <MultiplierTypes.h>
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
#include <Ship\Formation.h>
#include <Ship\FormationPattern.h>
#include <weaponinfo.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <CPUPlayer\CpuAttackState.h>
#include <CPUPlayer\CpuOneShotState.h>
#include <playerresourcetype.h>
#include <gameRandom.h>
#include <DynamicPoint.h>
#include <random.h>
#include <CPUPlayer\CpuScoutState.h>
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


_static float AverageDistFromPoint(std::vector<Squadron *,std::allocator<Squadron *> > const &squadList, vector3 const &pos, vector3 &avgPos);
_static __int32 ThreatLevelWithinRadius(std::vector<Squadron *,std::allocator<Squadron *> > const &squadList, vector3 const &pos, float radius);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_53F423(ScoutState *const);
void ScoutState::Enter() // 0x53F423
{
    mangled_assert("?Enter@ScoutState@@QAEXXZ");
    todo("implement");
    _sub_53F423(this);
}

_extern bool _sub_53F42C(ScoutState *const, Ship *, CpuBlob *);
bool ScoutState::HandleUnderAttack(Ship *, CpuBlob *) // 0x53F42C
{
    mangled_assert("?HandleUnderAttack@ScoutState@@AAE_NPAVShip@@PAVCpuBlob@@@Z");
    todo("implement");
    bool __result = _sub_53F42C(this, arg, arg);
    return __result;
}

_extern bool _sub_53F86F(ScoutState *const);
bool ScoutState::Update() // 0x53F86F
{
    mangled_assert("?Update@ScoutState@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_53F86F(this);
    return __result;
}

/* ---------- private code */

_extern float _sub_53F2EA(std::vector<Squadron *,std::allocator<Squadron *> > const &, vector3 const &, vector3 &);
_static float AverageDistFromPoint(std::vector<Squadron *,std::allocator<Squadron *> > const &squadList, vector3 const &pos, vector3 &avgPos) // 0x53F2EA
{
    mangled_assert("AverageDistFromPoint");
    todo("implement");
    float __result = _sub_53F2EA(squadList, pos, avgPos);
    return __result;
}

_extern __int32 _sub_53F790(std::vector<Squadron *,std::allocator<Squadron *> > const &, vector3 const &, float);
_static __int32 ThreatLevelWithinRadius(std::vector<Squadron *,std::allocator<Squadron *> > const &squadList, vector3 const &pos, float radius) // 0x53F790
{
    mangled_assert("ThreatLevelWithinRadius");
    todo("implement");
    __int32 __result = _sub_53F790(squadList, pos, radius);
    return __result;
}
#endif

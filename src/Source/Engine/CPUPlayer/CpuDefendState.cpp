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
#include <platform\timer.h>
#include <MeshAnimation.h>
#include <platform\platformexports.h>
#include <ShieldTypes.h>
#include <gameRandom.h>
#include <random.h>
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
#include <iosfwd>
#include <xhash>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\Primitives\aabb.h>
#include <fileio\fileioexports.h>
#include <Collision\Primitives\obb.h>
#include <Universe.h>
#include <Waypoint.h>
#include <abilities.h>
#include <SobUnmoveable.h>
#include <math.h>
#include <fileio\logfile.h>
#include <list>
#include <ShipQuery.h>
#include <assist\fixedstring.h>
#include <CPUPlayer\CpuFleetCommand.h>
#include <CPUPlayer\CpuTargetList.h>
#include <Race.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <HyperspaceManager.h>
#include <BuildManager.h>
#include <SelTarg.h>
#include <prim.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <orders.h>
#include <orders_base.h>
#include <boost\cstdint.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <CPUPlayer\CpuHelpers.h>
#include <Collision\BVH\profiling.h>
#include <gamemsg.h>
#include <CPUPlayer\CpuSquadGroup.h>
#include <CPUPlayer\CpuScoutState.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\quat.h>
#include <CPUPlayer\CpuIdleState.h>
#include <seInterface2\PatchID.h>
#include <OrderFeedback.h>
#include <Ship\FormationTargetInfo.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <dbdefines.h>
#include <fixedpoint.h>
#include <UnitCaps\UnitCaps.h>
#include <util\fixed.h>
#include <Player.h>
#include <ResearchManager.h>
#include <commandtype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <pathpoints.h>
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
#include <SOBGroupManager.h>
#include <CPUPlayer\CpuAttackState.h>
#include <CPUPlayer\CpuOneShotState.h>
#include <playerresourcetype.h>
#include <DynamicPoint.h>
#include <CPUPlayer\CpuDefendState.h>
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

struct BestDefendScore
{
    _inline BestDefendScore(vector3 const &, SquadronList const &, CpuCommon &);
    float operator()(BaseTarget *);
    vector3 const &m_frompos; // 0x0
    SquadronList const &m_defendGroup; // 0x4
    CpuCommon &m_common; // 0x8
};
static_assert(sizeof(BestDefendScore) == 12, "Invalid BestDefendScore size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline BestDefendScore::BestDefendScore(vector3 const &, SquadronList const &, CpuCommon &) // 0x52E036
{
    mangled_assert("??0BestDefendScore@@QAE@ABVvector3@@ABVSquadronList@@AAVCpuCommon@@@Z");
    todo("implement");
}

_inline float BestDefendScore::operator()(BaseTarget *) // 0x52E081
{
    mangled_assert("??RBestDefendScore@@QAEMPAVBaseTarget@@@Z");
    todo("implement");
}

void DefendState::Enter() // 0x52E1CA
{
    mangled_assert("?Enter@DefendState@@QAEXXZ");
    todo("implement");
}

bool DefendState::ProcessHyperspace(vector3 const &) // 0x52E1D3
{
    mangled_assert("?ProcessHyperspace@DefendState@@AAE_NABVvector3@@@Z");
    todo("implement");
}

bool DefendState::Update() // 0x52E420
{
    mangled_assert("?Update@DefendState@@UAE_NXZ");
    todo("implement");
}

void DefendState::ReIssue(SquadronList &) // 0x52E368
{
    mangled_assert("?ReIssue@DefendState@@UAEXAAVSquadronList@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

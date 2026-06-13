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
#include <CPUPlayer\CpuDefendState.h>
#include <fileio\bytestream.h>
#include <AttackCommand.h>
#include <xmemory>
#include <Collision\Primitives\aabb.h>
#include <fileio\fileioexports.h>
#include <AttackStyle.h>
#include <Collision\Primitives\obb.h>
#include <Universe.h>
#include <Waypoint.h>
#include <weaponTargetInfo.h>
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
#include <CPUPlayer\CpuSquadGroup.h>
#include <CPUPlayer\CpuScoutState.h>
#include <SOBGroupManager.h>
#include <CPUPlayer\CpuOneShotState.h>
#include <playerresourcetype.h>
#include <DynamicPoint.h>
#include <CPUPlayer\CpuAttackState.h>
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

typedef std::vector<`anonymous namespace'::GatherSiteEntity,std::allocator<`anonymous namespace'::GatherSiteEntity> > GatherSiteEntityList;
typedef `anonymous-namespace'::SobInGroup ?A0xf6ba56fb::SobInGroup;
typedef `anonymous-namespace'::GatherSiteEntity ?A0xf6ba56fb::GatherSiteEntity;
typedef `anonymous-namespace'::GatherSiteEntity first_argument_type;

/* ---------- prototypes */


_static void FindEngagePos(vector3 const &startPos, vector3 const &endPos, vector3 &outRVPos);
_static bool FindNextRendezVousPos(vector3 const &startPos, vector3 const &endPos, vector3 &outRVPos);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const kRendezVousNearDist; // 0x79D130
    extern float const kRendezVousJumpDist; // 0x79D134
    extern float const kNearGoalPositionDist; // 0x79D138
    extern float const kCloseEnoughToGoalPositionDist; // 0x79D13C
}

/* ---------- public code */

_extern void _sub_524672(AttackState *const);
void AttackState::Enter() // 0x524672
{
    mangled_assert("?Enter@AttackState@@QAEXXZ");
    todo("implement");
    _sub_524672(this);
}

_extern bool _sub_524AF2(AttackState *const, vector3 const &);
bool AttackState::ProcessHyperspace(vector3 const &) // 0x524AF2
{
    mangled_assert("?ProcessHyperspace@AttackState@@AAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_524AF2(this, arg);
    return __result;
}

_extern bool _sub_52492D(AttackState *const);
bool AttackState::HandleTacticalCombat() // 0x52492D
{
    mangled_assert("?HandleTacticalCombat@AttackState@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_52492D(this);
    return __result;
}

_extern void _sub_5253EA(AttackState *const);
void AttackState::SubState_MovingToRendezVous() // 0x5253EA
{
    mangled_assert("?SubState_MovingToRendezVous@AttackState@@AAEXXZ");
    todo("implement");
    _sub_5253EA(this);
}

_extern bool _sub_524813(AttackState *const);
bool AttackState::HandleDefendDecision() // 0x524813
{
    mangled_assert("?HandleDefendDecision@AttackState@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_524813(this);
    return __result;
}

_extern bool _sub_5244DD(AttackState *const);
bool AttackState::CheckToSeeIfGroupShouldFlee() // 0x5244DD
{
    mangled_assert("?CheckToSeeIfGroupShouldFlee@AttackState@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_5244DD(this);
    return __result;
}

_extern void _sub_524481(AttackState *const, bool);
void AttackState::CalcRetreatPos(bool) // 0x524481
{
    mangled_assert("?CalcRetreatPos@AttackState@@AAEX_N@Z");
    todo("implement");
    _sub_524481(this, arg);
}

_extern void _sub_524D8E(AttackState *const, bool);
void AttackState::RetreatBackToSafeSpot(bool) // 0x524D8E
{
    mangled_assert("?RetreatBackToSafeSpot@AttackState@@AAEX_N@Z");
    todo("implement");
    _sub_524D8E(this, arg);
}

_extern bool _sub_524E8F(AttackState *const, AttackTarget *);
bool AttackState::ShouldGroupAttack(AttackTarget *) // 0x524E8F
{
    mangled_assert("?ShouldGroupAttack@AttackState@@AAE_NPAVAttackTarget@@@Z");
    todo("implement");
    bool __result = _sub_524E8F(this, arg);
    return __result;
}

_extern bool _sub_524FBB(AttackState *const);
bool AttackState::SubState_Init() // 0x524FBB
{
    mangled_assert("?SubState_Init@AttackState@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_524FBB(this);
    return __result;
}

_extern void _sub_525660(AttackState *const);
void AttackState::SubState_ReadyToEngage() // 0x525660
{
    mangled_assert("?SubState_ReadyToEngage@AttackState@@AAEXXZ");
    todo("implement");
    _sub_525660(this);
}

_extern bool _sub_525902(AttackState *const);
bool AttackState::Update() // 0x525902
{
    mangled_assert("?Update@AttackState@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_525902(this);
    return __result;
}

_extern void _sub_524C62(AttackState *const, SquadronList &);
void AttackState::ReIssue(SquadronList &) // 0x524C62
{
    mangled_assert("?ReIssue@AttackState@@UAEXAAVSquadronList@@@Z");
    todo("implement");
    _sub_524C62(this, arg);
}

/* ---------- private code */

_extern void _sub_524677(vector3 const &, vector3 const &, vector3 &);
_static void FindEngagePos(vector3 const &startPos, vector3 const &endPos, vector3 &outRVPos) // 0x524677
{
    mangled_assert("FindEngagePos");
    todo("implement");
    _sub_524677(startPos, endPos, outRVPos);
}

_extern bool _sub_524713(vector3 const &, vector3 const &, vector3 &);
_static bool FindNextRendezVousPos(vector3 const &startPos, vector3 const &endPos, vector3 &outRVPos) // 0x524713
{
    mangled_assert("FindNextRendezVousPos");
    todo("implement");
    bool __result = _sub_524713(startPos, endPos, outRVPos);
    return __result;
}
#endif

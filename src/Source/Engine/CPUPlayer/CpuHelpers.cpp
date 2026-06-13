#if 0
/* ---------- headers */

#include "decomp.h"
#include <CPUPlayer\CpuDefendState.h>
#include <xhash>
#include <CPUPlayer\CpuIdleState.h>
#include <assist\stlexsmallvector.h>
#include <seInterface2\PatchID.h>
#include <xstring>
#include <seInterface2\PatchBase.h>
#include <xmemory0>
#include <seInterface2\SoundParams.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <abilities.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <HyperSpaceViaGateCommand.h>
#include <fileio\logfile.h>
#include <HyperSpaceBaseCommand.h>
#include <commandtype.h>
#include <Mathlib\matrix3.h>
#include <orders.h>
#include <orders_base.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <gamemsg.h>
#include <Modifiers\ModifierAbility.h>
#include <AttackCommand.h>
#include <AttackStyle.h>
#include <CPUPlayer\CpuCommon.h>
#include <CPUPlayer\CpuTarget.h>
#include <xutility>
#include <Squadron.h>
#include <weaponTargetInfo.h>
#include <utility>
#include <iosfwd>
#include <command.h>
#include <vector>
#include <sobid.h>
#include <fileio\bytestream.h>
#include <Ship\FormationTargetInfo.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <AttackMoveCommand.h>
#include <math.h>
#include <Modifiers\ModifierTargetCache.h>
#include <SOBGroupManager.h>
#include <list>
#include <CPUPlayer\CpuOneShotState.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <CPUPlayer\CpuAttackState.h>
#include <task.h>
#include <stack>
#include <assist\fixedstring.h>
#include <Mathlib\vector3.h>
#include <SobWithMeshStatic.h>
#include <OrderFeedback.h>
#include <CPUPlayer\CpuSquadGroup.h>
#include <Mathlib\vector4.h>
#include <Tactics.h>
#include <CPUPlayer\CpuScoutState.h>
#include <CPUPlayer\CpuBlobs.h>
#include <CPUPlayer\cpustate.h>
#include <ship.h>
#include <fixedpoint.h>
#include <SobWithMesh.h>
#include <util\fixed.h>
#include <xtree>
#include <SobRigidBody.h>
#include <boost\scoped_ptr.hpp>
#include <sob.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Ship\Formation.h>
#include <platform\timer.h>
#include <Ship\FormationPattern.h>
#include <platform\platformexports.h>
#include <Subsystems\HardPointManager.h>
#include <boost\cstdint.hpp>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\BVH\span.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Subsystems\Subsystem.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\SubsystemStatic.h>
#include <Mathlib\quat.h>
#include <Race.h>
#include <MoveCommand.h>
#include <App\Hw2Identify.h>
#include <Interpolation.h>
#include <weaponinfo.h>
#include <SquadronList.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <BuildManager.h>
#include <playerresourcetype.h>
#include <DynamicPoint.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Universe.h>
#include <Modifiers\ModifierEffect.h>
#include <Waypoint.h>
#include <pathpoints.h>
#include <SobUnmoveable.h>
#include <debug\db.h>
#include <SoundManager\SoundEntityHandle.h>
#include <deque>
#include <CPUPlayer\CpuClassifier.h>
#include <config.h>
#include <luaconfig\luabinding.h>
#include <Modifiers\ModifierApplier.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <shipstatic.h>
#include <boost\detail\shared_count.hpp>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <boost\detail\lwm_win32.hpp>
#include <SelTarg.h>
#include <HyperspaceManager.h>
#include <prim.h>
#include <CaptureManager.h>
#include <LatchPointManager.h>
#include <Player.h>
#include <ResearchManager.h>
#include <CPUPlayer\CpuHelpers.h>
#include <Collision\Primitives\capsule.h>
#include <ShipQuery.h>
#include <wchar.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <WeaponClassSpecificInfo.h>
#include <queue>
#include <algorithm>
#include <ParadeCommand.h>
#include <Parade.h>
#include <hash_map>

/* ---------- constants */

/* ---------- definitions */

struct CompareSpeed
{
    bool operator()(Squadron const *, Squadron const *);
};
static_assert(sizeof(CompareSpeed) == 1, "Invalid CompareSpeed size");

class SortCaptureTargets
{
public:
    _inline SortCaptureTargets(vector3 const &);
    bool operator()(Sob const *, Sob const *) const;
private:
    vector3 m_position; // 0x0
};
static_assert(sizeof(SortCaptureTargets) == 12, "Invalid SortCaptureTargets size");

/* ---------- prototypes */

extern _inline float getsquadspeed(Squadron const *s);
extern float CpuHelper::ClosestToPos(CpuSquadGroup &squadGroup, vector3 const &pos);
extern float CpuHelper::FurthestToPos(CpuSquadGroup &squadGroup, vector3 const &pos);
extern void CpuHelper::AveragePos(SquadronList &sqList, vector3 &avgPos);
extern Squadron *CpuHelper::AnyUnderAttack(CpuSquadGroup &squadGroup);
extern Squadron *CpuHelper::AnyUnderAttackOrAttacking(CpuSquadGroup &squadGroup);
extern bool CpuHelper::CanSeeEnemy(CpuSquadGroup &squadGroup);
extern Squadron *CpuHelper::ClosestShipInList(SquadronList const &checkShips, vector3 const &nearPoint);
extern float CpuHelper::CalcETA(SquadronList const &sqList, vector3 const &targetpos);
extern float CpuHelper::MinSpeedOfGroup(SquadronList const &sqList);
extern float CpuHelper::AvgSpeedOfGroup(SquadronList const &sqList);
extern Squadron *CpuHelper::SlowestSquadron(SquadronList const &sqList);
extern bool CpuHelper::AttackEnemyAtDefendTarget(CpuSquadGroup &squadGroup, DefendTarget *dfTarget, CpuCommon &common, bool bAttackSubs, bool bGoHardOnCaptureShips, Selection *debugCopy);
extern void CpuHelper::GetVisibleSelection(unsigned __int32 playerIndex, vector3 const &pos, SquadronList const &sqList, Selection &visibleSel, float speedChk, float radiusSq);
extern bool CpuHelper::AttackAllNearby(CpuSquadGroup &squadGroup, CpuCommon &common, bool bAttackSubs, Selection *debugCopy);
extern __int32 CpuHelper::CostToUseHyperspaceGate(SquadronList const &sqList, Squadron const &pGate);
extern Squadron *CpuHelper::CanGroupHyperspace_Special(SquadronList const &sqList, vector3 const &dest, float costMax);
extern void CpuHelper::GetSquadronsOutsideSphere(SquadronList const &sqList, vector3 const &pos, float dist, SquadronList &outList);
extern void CpuHelper::GetSquadronsOutsideSphereOrInAttackState(SquadronList const &sqList, vector3 const &pos, float dist, SquadronList &outList);

_static void InitEvilSubSystems();
_static __int32 SubSystemRating(SubSystem *pSubSys);
_static void AttackSubSystems(SquadronList &goodSSAttackers, SquadronList &ordinaryAttackers, Selection const &visibleSel);
_static void CaptureTargets(SquadronList &capturers, SquadronList &ordinaryAttackers, Selection const &visibleSel);
_static void PositionDefenseFields(SquadronList &defenseFields, SquadronList &ordinaryAttackers);
_static bool AttackCaptureShipsFirst(SquadronList &ordinaryAttackers, Selection const &visibleSel);
_static bool AttackRepairShips(SquadronList &ordinaryAttackers, Selection const &visibleSel, CpuClassifier &classifier);
_static void DoSpecialAttackOrder(unsigned __int32 playerIndex, SquadronList const &attackers, Selection const &toBeAttacked, CpuCommon &common, bool bAttackSubs);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool s_bEvilSubSystemsInit; // 0x844920
    extern std::vector<unsigned int,std::allocator<unsigned int> > s_subSystemsToAttack; // 0x844924
}

/* ---------- public code */

_extern float _sub_53569E(Squadron const *);
_inline float getsquadspeed(Squadron const *s) // 0x53569E
{
    mangled_assert("?getsquadspeed@@YGMPBVSquadron@@@Z");
    todo("implement");
    float __result = _sub_53569E(s);
    return __result;
}

_extern float _sub_534D1D(CpuSquadGroup &, vector3 const &);
float CpuHelper::ClosestToPos(CpuSquadGroup &squadGroup, vector3 const &pos) // 0x534D1D
{
    mangled_assert("?ClosestToPos@CpuHelper@@YGMAAVCpuSquadGroup@@ABVvector3@@@Z");
    todo("implement");
    float __result = _sub_534D1D(squadGroup, pos);
    return __result;
}

_extern float _sub_534FC5(CpuSquadGroup &, vector3 const &);
float CpuHelper::FurthestToPos(CpuSquadGroup &squadGroup, vector3 const &pos) // 0x534FC5
{
    mangled_assert("?FurthestToPos@CpuHelper@@YGMAAVCpuSquadGroup@@ABVvector3@@@Z");
    todo("implement");
    float __result = _sub_534FC5(squadGroup, pos);
    return __result;
}

_extern void _sub_5347F9(SquadronList &, vector3 &);
void CpuHelper::AveragePos(SquadronList &sqList, vector3 &avgPos) // 0x5347F9
{
    mangled_assert("?AveragePos@CpuHelper@@YGXAAVSquadronList@@AAVvector3@@@Z");
    todo("implement");
    _sub_5347F9(sqList, avgPos);
}

_extern Squadron *_sub_534050(CpuSquadGroup &);
Squadron *CpuHelper::AnyUnderAttack(CpuSquadGroup &squadGroup) // 0x534050
{
    mangled_assert("?AnyUnderAttack@CpuHelper@@YGPAVSquadron@@AAVCpuSquadGroup@@@Z");
    todo("implement");
    Squadron * __result = _sub_534050(squadGroup);
    return __result;
}

_extern Squadron *_sub_53408B(CpuSquadGroup &);
Squadron *CpuHelper::AnyUnderAttackOrAttacking(CpuSquadGroup &squadGroup) // 0x53408B
{
    mangled_assert("?AnyUnderAttackOrAttacking@CpuHelper@@YGPAVSquadron@@AAVCpuSquadGroup@@@Z");
    todo("implement");
    Squadron * __result = _sub_53408B(squadGroup);
    return __result;
}

_extern bool _sub_534AC5(CpuSquadGroup &);
bool CpuHelper::CanSeeEnemy(CpuSquadGroup &squadGroup) // 0x534AC5
{
    mangled_assert("?CanSeeEnemy@CpuHelper@@YG_NAAVCpuSquadGroup@@@Z");
    todo("implement");
    bool __result = _sub_534AC5(squadGroup);
    return __result;
}

_extern Squadron *_sub_534C89(SquadronList const &, vector3 const &);
Squadron *CpuHelper::ClosestShipInList(SquadronList const &checkShips, vector3 const &nearPoint) // 0x534C89
{
    mangled_assert("?ClosestShipInList@CpuHelper@@YGPAVSquadron@@ABVSquadronList@@ABVvector3@@@Z");
    todo("implement");
    Squadron * __result = _sub_534C89(checkShips, nearPoint);
    return __result;
}

_extern bool _sub_533F81(CompareSpeed *const, Squadron const *, Squadron const *);
_inline bool CompareSpeed::operator()(Squadron const *, Squadron const *) // 0x533F81
{
    mangled_assert("??RCompareSpeed@@QAE_NPBVSquadron@@0@Z");
    todo("implement");
    bool __result = _sub_533F81(this, arg, arg);
    return __result;
}

_extern float _sub_534948(SquadronList const &, vector3 const &);
float CpuHelper::CalcETA(SquadronList const &sqList, vector3 const &targetpos) // 0x534948
{
    mangled_assert("?CalcETA@CpuHelper@@YGMABVSquadronList@@ABVvector3@@@Z");
    todo("implement");
    float __result = _sub_534948(sqList, targetpos);
    return __result;
}

_extern float _sub_53550D(SquadronList const &);
float CpuHelper::MinSpeedOfGroup(SquadronList const &sqList) // 0x53550D
{
    mangled_assert("?MinSpeedOfGroup@CpuHelper@@YGMABVSquadronList@@@Z");
    todo("implement");
    float __result = _sub_53550D(sqList);
    return __result;
}

_extern float _sub_5348C8(SquadronList const &);
float CpuHelper::AvgSpeedOfGroup(SquadronList const &sqList) // 0x5348C8
{
    mangled_assert("?AvgSpeedOfGroup@CpuHelper@@YGMABVSquadronList@@@Z");
    todo("implement");
    float __result = _sub_5348C8(sqList);
    return __result;
}

_extern Squadron *_sub_5355D5(SquadronList const &);
Squadron *CpuHelper::SlowestSquadron(SquadronList const &sqList) // 0x5355D5
{
    mangled_assert("?SlowestSquadron@CpuHelper@@YGPAVSquadron@@ABVSquadronList@@@Z");
    todo("implement");
    Squadron * __result = _sub_5355D5(sqList);
    return __result;
}

_extern _sub_533F6F(SortCaptureTargets *const, vector3 const &);
_inline SortCaptureTargets::SortCaptureTargets(vector3 const &) // 0x533F6F
{
    mangled_assert("??0SortCaptureTargets@@QAE@ABVvector3@@@Z");
    todo("implement");
    _sub_533F6F(this, arg);
}

_extern bool _sub_533FAD(SortCaptureTargets const *const, Sob const *, Sob const *);
_inline bool SortCaptureTargets::operator()(Sob const *, Sob const *) const // 0x533FAD
{
    mangled_assert("??RSortCaptureTargets@@QBE_NPBVSob@@0@Z");
    todo("implement");
    bool __result = _sub_533FAD(this, arg, arg);
    return __result;
}

_extern bool _sub_5342AA(CpuSquadGroup &, DefendTarget *, CpuCommon &, bool, bool, Selection *);
bool CpuHelper::AttackEnemyAtDefendTarget(CpuSquadGroup &squadGroup, DefendTarget *dfTarget, CpuCommon &common, bool bAttackSubs, bool bGoHardOnCaptureShips, Selection *debugCopy) // 0x5342AA
{
    mangled_assert("?AttackEnemyAtDefendTarget@CpuHelper@@YG_NAAVCpuSquadGroup@@PAVDefendTarget@@AAVCpuCommon@@_N3PAVSelection@@@Z");
    todo("implement");
    bool __result = _sub_5342AA(squadGroup, dfTarget, common, bAttackSubs, bGoHardOnCaptureShips, debugCopy);
    return __result;
}

_extern void _sub_535325(unsigned __int32, vector3 const &, SquadronList const &, Selection &, float, float);
void CpuHelper::GetVisibleSelection(unsigned __int32 playerIndex, vector3 const &pos, SquadronList const &sqList, Selection &visibleSel, float speedChk, float radiusSq) // 0x535325
{
    mangled_assert("?GetVisibleSelection@CpuHelper@@YGXIABVvector3@@ABVSquadronList@@AAVSelection@@MM@Z");
    todo("implement");
    _sub_535325(playerIndex, pos, sqList, visibleSel, speedChk, radiusSq);
}

_extern bool _sub_5340D1(CpuSquadGroup &, CpuCommon &, bool, Selection *);
bool CpuHelper::AttackAllNearby(CpuSquadGroup &squadGroup, CpuCommon &common, bool bAttackSubs, Selection *debugCopy) // 0x5340D1
{
    mangled_assert("?AttackAllNearby@CpuHelper@@YG_NAAVCpuSquadGroup@@AAVCpuCommon@@_NPAVSelection@@@Z");
    todo("implement");
    bool __result = _sub_5340D1(squadGroup, common, bAttackSubs, debugCopy);
    return __result;
}

_extern __int32 _sub_534DB9(SquadronList const &, Squadron const &);
__int32 CpuHelper::CostToUseHyperspaceGate(SquadronList const &sqList, Squadron const &pGate) // 0x534DB9
{
    mangled_assert("?CostToUseHyperspaceGate@CpuHelper@@YGHABVSquadronList@@ABVSquadron@@@Z");
    todo("implement");
    __int32 __result = _sub_534DB9(sqList, pGate);
    return __result;
}

_extern Squadron *_sub_5349EF(SquadronList const &, vector3 const &, float);
Squadron *CpuHelper::CanGroupHyperspace_Special(SquadronList const &sqList, vector3 const &dest, float costMax) // 0x5349EF
{
    mangled_assert("?CanGroupHyperspace_Special@CpuHelper@@YGPAVSquadron@@ABVSquadronList@@ABVvector3@@M@Z");
    todo("implement");
    Squadron * __result = _sub_5349EF(sqList, dest, costMax);
    return __result;
}

_extern void _sub_53505D(SquadronList const &, vector3 const &, float, SquadronList &);
void CpuHelper::GetSquadronsOutsideSphere(SquadronList const &sqList, vector3 const &pos, float dist, SquadronList &outList) // 0x53505D
{
    mangled_assert("?GetSquadronsOutsideSphere@CpuHelper@@YGXABVSquadronList@@ABVvector3@@MAAV2@@Z");
    todo("implement");
    _sub_53505D(sqList, pos, dist, outList);
}

_extern void _sub_5351AF(SquadronList const &, vector3 const &, float, SquadronList &);
void CpuHelper::GetSquadronsOutsideSphereOrInAttackState(SquadronList const &sqList, vector3 const &pos, float dist, SquadronList &outList) // 0x5351AF
{
    mangled_assert("?GetSquadronsOutsideSphereOrInAttackState@CpuHelper@@YGXABVSquadronList@@ABVvector3@@MAAV2@@Z");
    todo("implement");
    _sub_5351AF(sqList, pos, dist, outList);
}

/* ---------- private code */

_extern void _sub_535418();
_static void InitEvilSubSystems() // 0x535418
{
    mangled_assert("InitEvilSubSystems");
    todo("implement");
    _sub_535418();
}

_extern __int32 _sub_535638(SubSystem *);
_static __int32 SubSystemRating(SubSystem *pSubSys) // 0x535638
{
    mangled_assert("SubSystemRating");
    todo("implement");
    __int32 __result = _sub_535638(pSubSys);
    return __result;
}

_extern void _sub_5346A2(SquadronList &, SquadronList &, Selection const &);
_static void AttackSubSystems(SquadronList &goodSSAttackers, SquadronList &ordinaryAttackers, Selection const &visibleSel) // 0x5346A2
{
    mangled_assert("AttackSubSystems");
    todo("implement");
    _sub_5346A2(goodSSAttackers, ordinaryAttackers, visibleSel);
}

_extern void _sub_534B02(SquadronList &, SquadronList &, Selection const &);
_static void CaptureTargets(SquadronList &capturers, SquadronList &ordinaryAttackers, Selection const &visibleSel) // 0x534B02
{
    mangled_assert("CaptureTargets");
    todo("implement");
    _sub_534B02(capturers, ordinaryAttackers, visibleSel);
}

_extern void _sub_53553A(SquadronList &, SquadronList &);
_static void PositionDefenseFields(SquadronList &defenseFields, SquadronList &ordinaryAttackers) // 0x53553A
{
    mangled_assert("PositionDefenseFields");
    todo("implement");
    _sub_53553A(defenseFields, ordinaryAttackers);
}

_extern bool _sub_534206(SquadronList &, Selection const &);
_static bool AttackCaptureShipsFirst(SquadronList &ordinaryAttackers, Selection const &visibleSel) // 0x534206
{
    mangled_assert("AttackCaptureShipsFirst");
    todo("implement");
    bool __result = _sub_534206(ordinaryAttackers, visibleSel);
    return __result;
}

_extern bool _sub_53457A(SquadronList &, Selection const &, CpuClassifier &);
_static bool AttackRepairShips(SquadronList &ordinaryAttackers, Selection const &visibleSel, CpuClassifier &classifier) // 0x53457A
{
    mangled_assert("AttackRepairShips");
    todo("implement");
    bool __result = _sub_53457A(ordinaryAttackers, visibleSel, classifier);
    return __result;
}

_extern void _sub_534DF1(unsigned __int32, SquadronList const &, Selection const &, CpuCommon &, bool);
_static void DoSpecialAttackOrder(unsigned __int32 playerIndex, SquadronList const &attackers, Selection const &toBeAttacked, CpuCommon &common, bool bAttackSubs) // 0x534DF1
{
    mangled_assert("DoSpecialAttackOrder");
    todo("implement");
    _sub_534DF1(playerIndex, attackers, toBeAttacked, common, bAttackSubs);
}
#endif

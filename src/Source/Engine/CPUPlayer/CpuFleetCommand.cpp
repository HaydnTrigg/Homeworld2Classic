#if 0
/* ---------- headers */

#include "decomp.h"
#include <OrderFeedback.h>
#include <ResearchManager.h>
#include <set>
#include <Interpolation.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <CPUPlayer\CpuDefendState.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <CPUPlayer\CpuIdleState.h>
#include <pch.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <abilities.h>
#include <CPUPlayer\CpuPlayerQuery.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <Modifiers\ModifierAbility.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <SOBGroupManager.h>
#include <Ship\Formation.h>
#include <xutility>
#include <Ship\FormationPattern.h>
#include <utility>
#include <iosfwd>
#include <SelTarg.h>
#include <vector>
#include <prim.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <SquadronList.h>
#include <CPUPlayer\CpuClassifier.h>
#include <Collision\Primitives\capsule.h>
#include <math.h>
#include <Collision\Primitives\segment.h>
#include <DynamicPoint.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <list>
#include <Tactics.h>
#include <CPUPlayer\CpuOneShotState.h>
#include <assist\fixedstring.h>
#include <CPUPlayer\CpuHelpers.h>
#include <platform\timer.h>
#include <Mathlib\vector3.h>
#include <CPUPlayer\CpuAttackState.h>
#include <platform\platformexports.h>
#include <Mathlib\vector4.h>
#include <seInterface2\PatchID.h>
#include <orders.h>
#include <seInterface2\PatchBase.h>
#include <fixedpoint.h>
#include <orders_base.h>
#include <xtree>
#include <seInterface2\SoundParams.h>
#include <util\fixed.h>
#include <CPUPlayer\CpuSquadGroup.h>
#include <boost\scoped_ptr.hpp>
#include <CPUPlayer\CpuScoutState.h>
#include <CPUPlayer\cpustate.h>
#include <gamemsg.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\bvh.h>
#include <assist\stlexvector.h>
#include <CPUPlayer\CpuBlobs.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <CPUPlayer\CpuTarget.h>
#include <Mathlib\quat.h>
#include <Universe.h>
#include <Mathlib\matvec.h>
#include <Squadron.h>
#include <Waypoint.h>
#include <command.h>
#include <SobUnmoveable.h>
#include <alliance.h>
#include <sobid.h>
#include <Mathlib\mathutil.h>
#include <Parade.h>
#include <hash_map>
#include <LevelDesc.h>
#include <assist\typemagic.h>
#include <xhash>
#include <Hash.h>
#include <Render\gl\lotypes.h>
#include <weaponinfo.h>
#include <fileio\md5.h>
#include <App\Hw2Identify.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Mathlib\mathlibdll.h>
#include <Race.h>
#include <Modifiers\ModifierEffect.h>
#include <FormHyperspaceGateCommand.h>
#include <Mathlib\fastmath.h>
#include <playerresourcetype.h>
#include <Render\gl\r_types.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <TeamColourRegistry.h>
#include <CPUPlayer\CpuCommon.h>
#include <pathpoints.h>
#include <savegame.h>
#include <fileio\logfile.h>
#include <debug\db.h>
#include <task.h>
#include <HyperspaceManager.h>
#include <stack>
#include <config.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Modifiers\ModifierApplier.h>
#include <ShipQuery.h>
#include <SobWithMeshStatic.h>
#include <BuildManager.h>
#include <savestream.h>
#include <deque>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <shipstatic.h>
#include <boost\shared_ptr.hpp>
#include <sob.h>
#include <util\colour.h>
#include <weaponstaticinfo.h>
#include <sobtypes.h>
#include <sobstatic.h>
#include <boost\throw_exception.hpp>
#include <SobRigidBodyStatic.h>
#include <GunBinding.h>
#include <selection.h>
#include <Collision\Primitives\sphere.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <boost\detail\lwm_win32.hpp>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPoint.h>
#include <Render\gl\r_defines.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointStatic.h>
#include <Render\gl\glext.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\SubSystemType.h>
#include <CPUPlayer\CpuTargetList.h>
#include <Collision\BVH\proxy.h>
#include <WeaponClassSpecificInfo.h>
#include <CPUPlayer\CpuFleetCommand.h>
#include <Collision\intersect.h>
#include <luaconfig\luabinding.h>
#include <wchar.h>
#include <Collision\primitivesfwd.h>
#include <dbdefines.h>
#include <luaconfig\luaconfig.h>
#include <UnitCaps\UnitCaps.h>
#include <lua.h>
#include <queue>
#include <ParadeCommand.h>
#include <Ship\FormationTargetInfo.h>
#include <commandtype.h>
#include <Player.h>

/* ---------- constants */

/* ---------- definitions */

struct SafeDefendTargetScore
{
    _inline SafeDefendTargetScore(vector3 const &);
    float operator()(BaseTarget *);
    vector3 const &m_frompos; // 0x0
};
static_assert(sizeof(SafeDefendTargetScore) == 4, "Invalid SafeDefendTargetScore size");

struct HighThreatAndPriorityScore
{
    _inline HighThreatAndPriorityScore(vector3 const &, SquadronList const &, CpuCommon &);
    float operator()(BaseTarget *);
    vector3 const &m_frompos; // 0x0
    SquadronList const &m_defendGroup; // 0x4
    CpuCommon &m_common; // 0x8
};
static_assert(sizeof(HighThreatAndPriorityScore) == 12, "Invalid HighThreatAndPriorityScore size");

typedef std::vector<BaseTarget *,std::allocator<BaseTarget *> > BTVector;

/* ---------- prototypes */

extern _inline float pointDistToLine(vector3 const &v, float vlength, vector3 const &p, vector3 const &test);

/* ---------- globals */

extern char const CpuFleetCommand::m_saveToken[16]; // 0x79D9E0
extern SaveData const CpuFleetCommand::m_saveData[16]; // 0x79D9F0

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x84491C
}

/* ---------- public code */

CpuFleetCommand::CpuFleetCommand(CpuCommon &) // 0x52F735
{
    mangled_assert("??0CpuFleetCommand@@QAE@AAVCpuCommon@@@Z");
    todo("implement");
}

_inline CpuFleetCommand::Data::Data() // 0x52F877
{
    mangled_assert("??0Data@CpuFleetCommand@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

CpuFleetCommand::~CpuFleetCommand() // 0x52F9D4
{
    mangled_assert("??1CpuFleetCommand@@UAE@XZ");
    todo("implement");
}

_inline CpuFleetCommand::Data::~Data() // 0x52FA81
{
    mangled_assert("??1Data@CpuFleetCommand@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void CpuFleetCommand::Initialize() // 0x531DE2
{
    mangled_assert("?Initialize@CpuFleetCommand@@QAEXXZ");
    todo("implement");
}

void CpuFleetCommand::BindToLua(LuaConfig &) // 0x53044A
{
    mangled_assert("?BindToLua@CpuFleetCommand@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
}

CounterValue const &CpuFleetCommand::GetPlayerCounterValue(unsigned __int32) const // 0x531BB0
{
    mangled_assert("?GetPlayerCounterValue@CpuFleetCommand@@QBEABVCounterValue@@I@Z");
    todo("implement");
}

float CpuFleetCommand::MinETAToTarget(unsigned __int32, CpuSquadGroup &) // 0x5320C9
{
    mangled_assert("?MinETAToTarget@CpuFleetCommand@@QAEMIAAVCpuSquadGroup@@@Z");
    todo("implement");
}

Squadron *CpuFleetCommand::FindHyperspaceGateForPath(vector3 const &, vector3 const &, float) // 0x5313F4
{
    mangled_assert("?FindHyperspaceGateForPath@CpuFleetCommand@@QAEPAVSquadron@@ABVvector3@@0M@Z");
    todo("implement");
}

void CpuFleetCommand::UpdateHyperspaceGateInfo() // 0x5328A6
{
    mangled_assert("?UpdateHyperspaceGateInfo@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

TargetList &CpuFleetCommand::GetAttackTargetList() // 0x53174E
{
    mangled_assert("?GetAttackTargetList@CpuFleetCommand@@QAEAAVTargetList@@XZ");
    todo("implement");
}

TargetList const &CpuFleetCommand::GetAttackTargetList() const // 0x531758
{
    mangled_assert("?GetAttackTargetList@CpuFleetCommand@@QBEABVTargetList@@XZ");
    todo("implement");
}

TargetList &CpuFleetCommand::GetDefendTargetList() // 0x5319DB
{
    mangled_assert("?GetDefendTargetList@CpuFleetCommand@@QAEAAVTargetList@@XZ");
    todo("implement");
}

TargetList const &CpuFleetCommand::GetDefendTargetList() const // 0x5319E2
{
    mangled_assert("?GetDefendTargetList@CpuFleetCommand@@QBEABVTargetList@@XZ");
    todo("implement");
}

void CpuFleetCommand::ClearAttackTarget() // 0x530BB8
{
    mangled_assert("?ClearAttackTarget@CpuFleetCommand@@QAEXXZ");
    todo("implement");
}

DefendTarget *CpuFleetCommand::GetMarineDefendTarget() const // 0x531A03
{
    mangled_assert("?GetMarineDefendTarget@CpuFleetCommand@@QBEPAVDefendTarget@@XZ");
    todo("implement");
}

void CpuFleetCommand::SetMarineDefendTarget(unsigned __int32) // 0x532797
{
    mangled_assert("?SetMarineDefendTarget@CpuFleetCommand@@QAEXI@Z");
    todo("implement");
}

void CpuFleetCommand::SetDefendTargetRadius(unsigned __int32, float) // 0x53276E
{
    mangled_assert("?SetDefendTargetRadius@CpuFleetCommand@@QAEXIM@Z");
    todo("implement");
}

void CpuFleetCommand::FriendlyValueToDefendTarget(unsigned __int32, CounterValue &, CpuSquadGroup &) // 0x5316D6
{
    mangled_assert("?FriendlyValueToDefendTarget@CpuFleetCommand@@QAEXIAAVCounterValue@@AAVCpuSquadGroup@@@Z");
    todo("implement");
}

void CpuFleetCommand::FriendlyValueToAttackTarget(unsigned __int32, CounterValue &) // 0x53167C
{
    mangled_assert("?FriendlyValueToAttackTarget@CpuFleetCommand@@QAEXIAAVCounterValue@@@Z");
    todo("implement");
}

void CpuFleetCommand::FriendlyValueReadyToEngageAttackTarget(unsigned __int32, CounterValue &) // 0x531612
{
    mangled_assert("?FriendlyValueReadyToEngageAttackTarget@CpuFleetCommand@@QAEXIAAVCounterValue@@@Z");
    todo("implement");
}

void CpuFleetCommand::RemoveAttackTarget(Squadron const &) // 0x53252A
{
    mangled_assert("?RemoveAttackTarget@CpuFleetCommand@@QAEXABVSquadron@@@Z");
    todo("implement");
}

void CpuFleetCommand::IfDefendTargetThenAdd(Squadron &) // 0x531D85
{
    mangled_assert("?IfDefendTargetThenAdd@CpuFleetCommand@@AAEXAAVSquadron@@@Z");
    todo("implement");
}

void CpuFleetCommand::AddSquadronToCpuGroupList(Squadron &, bool) // 0x5300FE
{
    mangled_assert("?AddSquadronToCpuGroupList@CpuFleetCommand@@AAEXAAVSquadron@@_N@Z");
    todo("implement");
}

void CpuFleetCommand::AddSquadron(Squadron &) // 0x5300C0
{
    mangled_assert("?AddSquadron@CpuFleetCommand@@QAEXAAVSquadron@@@Z");
    todo("implement");
}

void CpuFleetCommand::HyperspaceSquadron(Squadron &, bool) // 0x531CDB
{
    mangled_assert("?HyperspaceSquadron@CpuFleetCommand@@QAEXAAVSquadron@@_N@Z");
    todo("implement");
}

void CpuFleetCommand::RemoveSquadron(Squadron const &) // 0x5326DF
{
    mangled_assert("?RemoveSquadron@CpuFleetCommand@@QAEXABVSquadron@@@Z");
    todo("implement");
}

void CpuFleetCommand::CreateCpuSquadGroup(Squadron &, unsigned __int32) // 0x530DA0
{
    mangled_assert("?CreateCpuSquadGroup@CpuFleetCommand@@AAEXAAVSquadron@@I@Z");
    todo("implement");
}

void CpuFleetCommand::CalcCounterValuesForEachSquadGroup() // 0x530926
{
    mangled_assert("?CalcCounterValuesForEachSquadGroup@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

void CpuFleetCommand::CalcAllPlayersFleetValues() // 0x530803
{
    mangled_assert("?CalcAllPlayersFleetValues@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

void CpuFleetCommand::RemoveDeadSquadGroups() // 0x5325CC
{
    mangled_assert("?RemoveDeadSquadGroups@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

unsigned __int32 CpuFleetCommand::AddAttackTarget(Squadron *, __int32, TargetType) // 0x530023
{
    mangled_assert("?AddAttackTarget@CpuFleetCommand@@QAEIPAVSquadron@@HW4TargetType@@@Z");
    todo("implement");
}

void CpuFleetCommand::ChangeAttackTargetPriority(TargetType, __int32) // 0x530B63
{
    mangled_assert("?ChangeAttackTargetPriority@CpuFleetCommand@@QAEXW4TargetType@@H@Z");
    todo("implement");
}

unsigned __int32 CpuFleetCommand::AddDefendTarget(vector3 const &, __int32, TargetType) // 0x53004D
{
    mangled_assert("?AddDefendTarget@CpuFleetCommand@@QAEIABVvector3@@HW4TargetType@@@Z");
    todo("implement");
}

unsigned __int32 CpuFleetCommand::AddDefendTarget(Squadron *, __int32, TargetType) // 0x530077
{
    mangled_assert("?AddDefendTarget@CpuFleetCommand@@QAEIPAVSquadron@@HW4TargetType@@@Z");
    todo("implement");
}

void CpuFleetCommand::ChangeDefendTargetPriority(TargetType, __int32) // 0x530B71
{
    mangled_assert("?ChangeDefendTargetPriority@CpuFleetCommand@@QAEXW4TargetType@@H@Z");
    todo("implement");
}

void CpuFleetCommand::RemoveDefendTarget(unsigned __int32) // 0x5326A7
{
    mangled_assert("?RemoveDefendTarget@CpuFleetCommand@@QAEXI@Z");
    todo("implement");
}

void CpuFleetCommand::RemoveAttackTarget(unsigned __int32) // 0x53257B
{
    mangled_assert("?RemoveAttackTarget@CpuFleetCommand@@QAEXI@Z");
    todo("implement");
}

void CpuFleetCommand::RemoveDeadTargets() // 0x53261F
{
    mangled_assert("?RemoveDeadTargets@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

void CpuFleetCommand::IfAttackTargetThenAdd(Squadron &) // 0x531D21
{
    mangled_assert("?IfAttackTargetThenAdd@CpuFleetCommand@@AAEXAAVSquadron@@@Z");
    todo("implement");
}

DefendTarget *CpuFleetCommand::RetrieveDefendTarget(unsigned __int32) // 0x532763
{
    mangled_assert("?RetrieveDefendTarget@CpuFleetCommand@@QAEPAVDefendTarget@@I@Z");
    todo("implement");
}

AttackTarget *CpuFleetCommand::RetrieveAttackTarget(unsigned __int32) // 0x532755
{
    mangled_assert("?RetrieveAttackTarget@CpuFleetCommand@@QAEPAVAttackTarget@@I@Z");
    todo("implement");
}

AttackTarget *CpuFleetCommand::GetCurrentAttackTarget(CpuSquadGroup &) // 0x5319C2
{
    mangled_assert("?GetCurrentAttackTarget@CpuFleetCommand@@QAEPAVAttackTarget@@AAVCpuSquadGroup@@@Z");
    todo("implement");
}

void CpuFleetCommand::AddEnemySquadron(Squadron &) // 0x5300A1
{
    mangled_assert("?AddEnemySquadron@CpuFleetCommand@@QAEXAAVSquadron@@@Z");
    todo("implement");
}

bool CpuFleetCommand::FindGoodIdleScoutPosition(vector3 const &, vector3 &) // 0x5311D6
{
    mangled_assert("?FindGoodIdleScoutPosition@CpuFleetCommand@@QAE_NABVvector3@@AAV2@@Z");
    todo("implement");
}

bool CpuFleetCommand::MergeSingleSquadGroup(CpuSquadGroup *) // 0x531E6C
{
    mangled_assert("?MergeSingleSquadGroup@CpuFleetCommand@@AAE_NPAVCpuSquadGroup@@@Z");
    todo("implement");
}

void CpuFleetCommand::MergeNearbySquadGroups() // 0x531E35
{
    mangled_assert("?MergeNearbySquadGroups@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

bool CpuFleetCommand::ShouldActivateSquadGroup(CpuSquadGroup *) // 0x5327B6
{
    mangled_assert("?ShouldActivateSquadGroup@CpuFleetCommand@@AAE_NPAVCpuSquadGroup@@@Z");
    todo("implement");
}

void CpuFleetCommand::ConvertSquadGroupsToAttackGroups(__int32) // 0x530CE0
{
    mangled_assert("?ConvertSquadGroupsToAttackGroups@CpuFleetCommand@@AAEXH@Z");
    todo("implement");
}

_inline SafeDefendTargetScore::SafeDefendTargetScore(vector3 const &) // 0x52F94D
{
    mangled_assert("??0SafeDefendTargetScore@@QAE@ABVvector3@@@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal0<int,LuaBinding::Functor0MemberConst<int,CpuFleetCommand> >::~ObjInternal0<int,LuaBinding::Functor0MemberConst<int,CpuFleetCommand> >() // 0x52F96C
{
    mangled_assert("??1?$ObjInternal0@HV?$Functor0MemberConst@HVCpuFleetCommand@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal0<float,LuaBinding::Functor0MemberConst<float,CpuFleetCommand> >::~ObjInternal0<float,LuaBinding::Functor0MemberConst<float,CpuFleetCommand> >() // 0x52F972
{
    mangled_assert("??1?$ObjInternal0@MV?$Functor0MemberConst@MVCpuFleetCommand@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuFleetCommand> >::~ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuFleetCommand> >() // 0x52F978
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0MemberNonConst@XVCpuFleetCommand@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline float SafeDefendTargetScore::operator()(BaseTarget *) // 0x52FE31
{
    mangled_assert("??RSafeDefendTargetScore@@QAEMPAVBaseTarget@@@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal0<bool,LuaBinding::Functor0MemberConst<bool,CpuFleetCommand> >::~ObjInternal0<bool,LuaBinding::Functor0MemberConst<bool,CpuFleetCommand> >() // 0x52F97E
{
    mangled_assert("??1?$ObjInternal0@_NV?$Functor0MemberConst@_NVCpuFleetCommand@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<Squadron *,std::allocator<Squadron *> >::~_Tree_buy<Squadron *,std::allocator<Squadron *> >() // 0x52F9AB
{
    mangled_assert("??1?$_Tree_buy@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tset_traits<Squadron *,std::less<Squadron *>,std::allocator<Squadron *>,0> >::~_Tree_comp<0,std::_Tset_traits<Squadron *,std::less<Squadron *>,std::allocator<Squadron *>,0> >() // 0x52F9B4
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@PAVSquadron@@U?$less@PAVSquadron@@@std@@V?$allocator@PAVSquadron@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::set<Squadron *,std::less<Squadron *>,std::allocator<Squadron *> >::~set<Squadron *,std::less<Squadron *>,std::allocator<Squadron *> >() // 0x52F9C5
{
    mangled_assert("??1?$set@PAVSquadron@@U?$less@PAVSquadron@@@std@@V?$allocator@PAVSquadron@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool CpuFleetCommand::GetSafeRetreatPos(vector3 const &, vector3 &) // 0x531BC5
{
    mangled_assert("?GetSafeRetreatPos@CpuFleetCommand@@QAE_NABVvector3@@AAV2@@Z");
    todo("implement");
}

bool CpuFleetCommand::GetBestDefendPosition(vector3 const &, vector3 &, float) // 0x531762
{
    mangled_assert("?GetBestDefendPosition@CpuFleetCommand@@QAE_NABVvector3@@AAV2@M@Z");
    todo("implement");
}

void CpuFleetCommand::ProcessAttackGroups() // 0x5321E9
{
    mangled_assert("?ProcessAttackGroups@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

void CpuFleetCommand::BreakGroupByDistance(CpuSquadGroup &) // 0x5306AF
{
    mangled_assert("?BreakGroupByDistance@CpuFleetCommand@@AAEXAAVCpuSquadGroup@@@Z");
    todo("implement");
}

void CpuFleetCommand::CleanUp() // 0x530B7C
{
    mangled_assert("?CleanUp@CpuFleetCommand@@QAEXXZ");
    todo("implement");
}

void CpuFleetCommand::CleanupAndDataCollectionPhase() // 0x530B8C
{
    mangled_assert("?CleanupAndDataCollectionPhase@CpuFleetCommand@@QAEXXZ");
    todo("implement");
}

void CpuFleetCommand::Update() // 0x5327E9
{
    mangled_assert("?Update@CpuFleetCommand@@QAEXXZ");
    todo("implement");
}

void CpuFleetCommand::UpdatePassiveAbilities() // 0x532902
{
    mangled_assert("?UpdatePassiveAbilities@CpuFleetCommand@@QAEXXZ");
    todo("implement");
}

unsigned __int32 CpuFleetCommand::NumAssignedToDefendTarget(unsigned __int32) // 0x532193
{
    mangled_assert("?NumAssignedToDefendTarget@CpuFleetCommand@@QAEII@Z");
    todo("implement");
}

void CpuFleetCommand::ValueAssignedToDefendTarget(unsigned __int32, CounterValue &) // 0x532B2E
{
    mangled_assert("?ValueAssignedToDefendTarget@CpuFleetCommand@@QAEXIAAVCounterValue@@@Z");
    todo("implement");
}

void CpuFleetCommand::AttackNow() // 0x530320
{
    mangled_assert("?AttackNow@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

bool CpuFleetCommand::IsAttackTargetHaveScout(unsigned __int32) // 0x531DE3
{
    mangled_assert("?IsAttackTargetHaveScout@CpuFleetCommand@@QAE_NI@Z");
    todo("implement");
}

AttackTarget *CpuFleetCommand::GetNextScoutTarget(CpuSquadGroup &) // 0x531A0D
{
    mangled_assert("?GetNextScoutTarget@CpuFleetCommand@@QAEPAVAttackTarget@@AAVCpuSquadGroup@@@Z");
    todo("implement");
}

void CpuFleetCommand::AnalyzeAttackTargets() // 0x530211
{
    mangled_assert("?AnalyzeAttackTargets@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

void CpuFleetCommand::AnalyzeDefendTargets() // 0x53024B
{
    mangled_assert("?AnalyzeDefendTargets@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

_inline HighThreatAndPriorityScore::HighThreatAndPriorityScore(vector3 const &, SquadronList const &, CpuCommon &) // 0x52F934
{
    mangled_assert("??0HighThreatAndPriorityScore@@QAE@ABVvector3@@ABVSquadronList@@AAVCpuCommon@@@Z");
    todo("implement");
}

_inline float HighThreatAndPriorityScore::operator()(BaseTarget *) // 0x52FC88
{
    mangled_assert("??RHighThreatAndPriorityScore@@QAEMPAVBaseTarget@@@Z");
    todo("implement");
}

DefendTarget *CpuFleetCommand::FindBestDefendTargetForAttackers(CpuSquadGroup &) // 0x530ECA
{
    mangled_assert("?FindBestDefendTargetForAttackers@CpuFleetCommand@@QAEPAVDefendTarget@@AAVCpuSquadGroup@@@Z");
    todo("implement");
}

DefendTarget *CpuFleetCommand::FindClosestThreatenedDefendTarget(vector3 const &, float) // 0x53110F
{
    mangled_assert("?FindClosestThreatenedDefendTarget@CpuFleetCommand@@QAEPAVDefendTarget@@ABVvector3@@M@Z");
    todo("implement");
}

CpuSquadGroup *CpuFleetCommand::FindBestGroup(CpuSquadGroup &, float, unsigned __int32) // 0x530F3C
{
    mangled_assert("?FindBestGroup@CpuFleetCommand@@AAEPAVCpuSquadGroup@@AAV2@MI@Z");
    todo("implement");
}

__int32 CpuFleetCommand::GetChosenEnemy() const // 0x5319A0
{
    mangled_assert("?GetChosenEnemy@CpuFleetCommand@@QBEHXZ");
    todo("implement");
}

CpuSquadGroup *CpuFleetCommand::ClosestGroupToTarget(AttackTarget *) // 0x530BCF
{
    mangled_assert("?ClosestGroupToTarget@CpuFleetCommand@@QAEPAVCpuSquadGroup@@PAVAttackTarget@@@Z");
    todo("implement");
}

__int32 CpuFleetCommand::AttackTargetScore(AttackTarget *, vector3 const &) // 0x53033C
{
    mangled_assert("?AttackTargetScore@CpuFleetCommand@@QAEHPAVAttackTarget@@ABVvector3@@@Z");
    todo("implement");
}

void CpuFleetCommand::RecalcGoalTarget(CpuSquadGroup const &) // 0x5322F6
{
    mangled_assert("?RecalcGoalTarget@CpuFleetCommand@@AAEXABVCpuSquadGroup@@@Z");
    todo("implement");
}

_inline float pointDistToLine(vector3 const &v, float vlength, vector3 const &p, vector3 const &test) // 0x5334C0
{
    mangled_assert("?pointDistToLine@@YGMABVvector3@@M00@Z");
    todo("implement");
}

void CpuFleetCommand::CalcThreatToTarget(vector3 const &, vector3 const &, CounterValue &) // 0x530970
{
    mangled_assert("?CalcThreatToTarget@CpuFleetCommand@@QAEXABVvector3@@0AAVCounterValue@@@Z");
    todo("implement");
}

void CpuFleetCommand::Debug_RenderSquadGroups() // 0x530E11
{
    mangled_assert("?Debug_RenderSquadGroups@CpuFleetCommand@@AAEXXZ");
    todo("implement");
}

void CpuFleetCommand::Debug_Targets() // 0x530E12
{
    mangled_assert("?Debug_Targets@CpuFleetCommand@@QAEXXZ");
    todo("implement");
}

void CpuFleetCommand::Debug() // 0x530E0D
{
    mangled_assert("?Debug@CpuFleetCommand@@QAEXXZ");
    todo("implement");
}

void CpuFleetCommand::DebugStats(float) // 0x530E0E
{
    mangled_assert("?DebugStats@CpuFleetCommand@@QAEXM@Z");
    todo("implement");
}

void CpuFleetCommand::postRestore() // 0x533579
{
    mangled_assert("?postRestore@CpuFleetCommand@@UAEXXZ");
    todo("implement");
}

void CpuFleetCommand::saveStateMachines(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x52E747
{
    mangled_assert("?saveStateMachines@CpuFleetCommand@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void CpuFleetCommand::loadStateMachines(void *objectPtr, SaveGameData *saveGameData) // 0x52E812
{
    mangled_assert("?loadStateMachines@CpuFleetCommand@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

bool CpuFleetCommand::restore(SaveGameData *) // 0x533670
{
    mangled_assert("?restore@CpuFleetCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool CpuFleetCommand::save(SaveGameData *, SaveType) // 0x5336AE
{
    mangled_assert("?save@CpuFleetCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

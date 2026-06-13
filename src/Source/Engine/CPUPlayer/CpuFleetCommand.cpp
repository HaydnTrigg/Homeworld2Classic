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

_extern _sub_52F735(CpuFleetCommand *const, CpuCommon &);
CpuFleetCommand::CpuFleetCommand(CpuCommon &) // 0x52F735
{
    mangled_assert("??0CpuFleetCommand@@QAE@AAVCpuCommon@@@Z");
    todo("implement");
    _sub_52F735(this, arg);
}

_extern _sub_52F877(CpuFleetCommand::Data *const);
_inline CpuFleetCommand::Data::Data() // 0x52F877
{
    mangled_assert("??0Data@CpuFleetCommand@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52F877(this);
}

_extern void _sub_52F9D4(CpuFleetCommand *const);
CpuFleetCommand::~CpuFleetCommand() // 0x52F9D4
{
    mangled_assert("??1CpuFleetCommand@@UAE@XZ");
    todo("implement");
    _sub_52F9D4(this);
}

_extern void _sub_52FA81(CpuFleetCommand::Data *const);
_inline CpuFleetCommand::Data::~Data() // 0x52FA81
{
    mangled_assert("??1Data@CpuFleetCommand@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52FA81(this);
}

_extern void _sub_531DE2(CpuFleetCommand *const);
void CpuFleetCommand::Initialize() // 0x531DE2
{
    mangled_assert("?Initialize@CpuFleetCommand@@QAEXXZ");
    todo("implement");
    _sub_531DE2(this);
}

_extern void _sub_53044A(CpuFleetCommand *const, LuaConfig &);
void CpuFleetCommand::BindToLua(LuaConfig &) // 0x53044A
{
    mangled_assert("?BindToLua@CpuFleetCommand@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_53044A(this, arg);
}

_extern CounterValue const &_sub_531BB0(CpuFleetCommand const *const, unsigned __int32);
CounterValue const &CpuFleetCommand::GetPlayerCounterValue(unsigned __int32) const // 0x531BB0
{
    mangled_assert("?GetPlayerCounterValue@CpuFleetCommand@@QBEABVCounterValue@@I@Z");
    todo("implement");
    CounterValue const & __result = _sub_531BB0(this, arg);
    return __result;
}

_extern float _sub_5320C9(CpuFleetCommand *const, unsigned __int32, CpuSquadGroup &);
float CpuFleetCommand::MinETAToTarget(unsigned __int32, CpuSquadGroup &) // 0x5320C9
{
    mangled_assert("?MinETAToTarget@CpuFleetCommand@@QAEMIAAVCpuSquadGroup@@@Z");
    todo("implement");
    float __result = _sub_5320C9(this, arg, arg);
    return __result;
}

_extern Squadron *_sub_5313F4(CpuFleetCommand *const, vector3 const &, vector3 const &, float);
Squadron *CpuFleetCommand::FindHyperspaceGateForPath(vector3 const &, vector3 const &, float) // 0x5313F4
{
    mangled_assert("?FindHyperspaceGateForPath@CpuFleetCommand@@QAEPAVSquadron@@ABVvector3@@0M@Z");
    todo("implement");
    Squadron * __result = _sub_5313F4(this, arg, arg, arg);
    return __result;
}

_extern void _sub_5328A6(CpuFleetCommand *const);
void CpuFleetCommand::UpdateHyperspaceGateInfo() // 0x5328A6
{
    mangled_assert("?UpdateHyperspaceGateInfo@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_5328A6(this);
}

_extern TargetList &_sub_53174E(CpuFleetCommand *const);
TargetList &CpuFleetCommand::GetAttackTargetList() // 0x53174E
{
    mangled_assert("?GetAttackTargetList@CpuFleetCommand@@QAEAAVTargetList@@XZ");
    todo("implement");
    TargetList & __result = _sub_53174E(this);
    return __result;
}

_extern TargetList const &_sub_531758(CpuFleetCommand const *const);
TargetList const &CpuFleetCommand::GetAttackTargetList() const // 0x531758
{
    mangled_assert("?GetAttackTargetList@CpuFleetCommand@@QBEABVTargetList@@XZ");
    todo("implement");
    TargetList const & __result = _sub_531758(this);
    return __result;
}

_extern TargetList &_sub_5319DB(CpuFleetCommand *const);
TargetList &CpuFleetCommand::GetDefendTargetList() // 0x5319DB
{
    mangled_assert("?GetDefendTargetList@CpuFleetCommand@@QAEAAVTargetList@@XZ");
    todo("implement");
    TargetList & __result = _sub_5319DB(this);
    return __result;
}

_extern TargetList const &_sub_5319E2(CpuFleetCommand const *const);
TargetList const &CpuFleetCommand::GetDefendTargetList() const // 0x5319E2
{
    mangled_assert("?GetDefendTargetList@CpuFleetCommand@@QBEABVTargetList@@XZ");
    todo("implement");
    TargetList const & __result = _sub_5319E2(this);
    return __result;
}

_extern void _sub_530BB8(CpuFleetCommand *const);
void CpuFleetCommand::ClearAttackTarget() // 0x530BB8
{
    mangled_assert("?ClearAttackTarget@CpuFleetCommand@@QAEXXZ");
    todo("implement");
    _sub_530BB8(this);
}

_extern DefendTarget *_sub_531A03(CpuFleetCommand const *const);
DefendTarget *CpuFleetCommand::GetMarineDefendTarget() const // 0x531A03
{
    mangled_assert("?GetMarineDefendTarget@CpuFleetCommand@@QBEPAVDefendTarget@@XZ");
    todo("implement");
    DefendTarget * __result = _sub_531A03(this);
    return __result;
}

_extern void _sub_532797(CpuFleetCommand *const, unsigned __int32);
void CpuFleetCommand::SetMarineDefendTarget(unsigned __int32) // 0x532797
{
    mangled_assert("?SetMarineDefendTarget@CpuFleetCommand@@QAEXI@Z");
    todo("implement");
    _sub_532797(this, arg);
}

_extern void _sub_53276E(CpuFleetCommand *const, unsigned __int32, float);
void CpuFleetCommand::SetDefendTargetRadius(unsigned __int32, float) // 0x53276E
{
    mangled_assert("?SetDefendTargetRadius@CpuFleetCommand@@QAEXIM@Z");
    todo("implement");
    _sub_53276E(this, arg, arg);
}

_extern void _sub_5316D6(CpuFleetCommand *const, unsigned __int32, CounterValue &, CpuSquadGroup &);
void CpuFleetCommand::FriendlyValueToDefendTarget(unsigned __int32, CounterValue &, CpuSquadGroup &) // 0x5316D6
{
    mangled_assert("?FriendlyValueToDefendTarget@CpuFleetCommand@@QAEXIAAVCounterValue@@AAVCpuSquadGroup@@@Z");
    todo("implement");
    _sub_5316D6(this, arg, arg, arg);
}

_extern void _sub_53167C(CpuFleetCommand *const, unsigned __int32, CounterValue &);
void CpuFleetCommand::FriendlyValueToAttackTarget(unsigned __int32, CounterValue &) // 0x53167C
{
    mangled_assert("?FriendlyValueToAttackTarget@CpuFleetCommand@@QAEXIAAVCounterValue@@@Z");
    todo("implement");
    _sub_53167C(this, arg, arg);
}

_extern void _sub_531612(CpuFleetCommand *const, unsigned __int32, CounterValue &);
void CpuFleetCommand::FriendlyValueReadyToEngageAttackTarget(unsigned __int32, CounterValue &) // 0x531612
{
    mangled_assert("?FriendlyValueReadyToEngageAttackTarget@CpuFleetCommand@@QAEXIAAVCounterValue@@@Z");
    todo("implement");
    _sub_531612(this, arg, arg);
}

_extern void _sub_53252A(CpuFleetCommand *const, Squadron const &);
void CpuFleetCommand::RemoveAttackTarget(Squadron const &) // 0x53252A
{
    mangled_assert("?RemoveAttackTarget@CpuFleetCommand@@QAEXABVSquadron@@@Z");
    todo("implement");
    _sub_53252A(this, arg);
}

_extern void _sub_531D85(CpuFleetCommand *const, Squadron &);
void CpuFleetCommand::IfDefendTargetThenAdd(Squadron &) // 0x531D85
{
    mangled_assert("?IfDefendTargetThenAdd@CpuFleetCommand@@AAEXAAVSquadron@@@Z");
    todo("implement");
    _sub_531D85(this, arg);
}

_extern void _sub_5300FE(CpuFleetCommand *const, Squadron &, bool);
void CpuFleetCommand::AddSquadronToCpuGroupList(Squadron &, bool) // 0x5300FE
{
    mangled_assert("?AddSquadronToCpuGroupList@CpuFleetCommand@@AAEXAAVSquadron@@_N@Z");
    todo("implement");
    _sub_5300FE(this, arg, arg);
}

_extern void _sub_5300C0(CpuFleetCommand *const, Squadron &);
void CpuFleetCommand::AddSquadron(Squadron &) // 0x5300C0
{
    mangled_assert("?AddSquadron@CpuFleetCommand@@QAEXAAVSquadron@@@Z");
    todo("implement");
    _sub_5300C0(this, arg);
}

_extern void _sub_531CDB(CpuFleetCommand *const, Squadron &, bool);
void CpuFleetCommand::HyperspaceSquadron(Squadron &, bool) // 0x531CDB
{
    mangled_assert("?HyperspaceSquadron@CpuFleetCommand@@QAEXAAVSquadron@@_N@Z");
    todo("implement");
    _sub_531CDB(this, arg, arg);
}

_extern void _sub_5326DF(CpuFleetCommand *const, Squadron const &);
void CpuFleetCommand::RemoveSquadron(Squadron const &) // 0x5326DF
{
    mangled_assert("?RemoveSquadron@CpuFleetCommand@@QAEXABVSquadron@@@Z");
    todo("implement");
    _sub_5326DF(this, arg);
}

_extern void _sub_530DA0(CpuFleetCommand *const, Squadron &, unsigned __int32);
void CpuFleetCommand::CreateCpuSquadGroup(Squadron &, unsigned __int32) // 0x530DA0
{
    mangled_assert("?CreateCpuSquadGroup@CpuFleetCommand@@AAEXAAVSquadron@@I@Z");
    todo("implement");
    _sub_530DA0(this, arg, arg);
}

_extern void _sub_530926(CpuFleetCommand *const);
void CpuFleetCommand::CalcCounterValuesForEachSquadGroup() // 0x530926
{
    mangled_assert("?CalcCounterValuesForEachSquadGroup@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_530926(this);
}

_extern void _sub_530803(CpuFleetCommand *const);
void CpuFleetCommand::CalcAllPlayersFleetValues() // 0x530803
{
    mangled_assert("?CalcAllPlayersFleetValues@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_530803(this);
}

_extern void _sub_5325CC(CpuFleetCommand *const);
void CpuFleetCommand::RemoveDeadSquadGroups() // 0x5325CC
{
    mangled_assert("?RemoveDeadSquadGroups@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_5325CC(this);
}

_extern unsigned __int32 _sub_530023(CpuFleetCommand *const, Squadron *, __int32, TargetType);
unsigned __int32 CpuFleetCommand::AddAttackTarget(Squadron *, __int32, TargetType) // 0x530023
{
    mangled_assert("?AddAttackTarget@CpuFleetCommand@@QAEIPAVSquadron@@HW4TargetType@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_530023(this, arg, arg, arg);
    return __result;
}

_extern void _sub_530B63(CpuFleetCommand *const, TargetType, __int32);
void CpuFleetCommand::ChangeAttackTargetPriority(TargetType, __int32) // 0x530B63
{
    mangled_assert("?ChangeAttackTargetPriority@CpuFleetCommand@@QAEXW4TargetType@@H@Z");
    todo("implement");
    _sub_530B63(this, arg, arg);
}

_extern unsigned __int32 _sub_53004D(CpuFleetCommand *const, vector3 const &, __int32, TargetType);
unsigned __int32 CpuFleetCommand::AddDefendTarget(vector3 const &, __int32, TargetType) // 0x53004D
{
    mangled_assert("?AddDefendTarget@CpuFleetCommand@@QAEIABVvector3@@HW4TargetType@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_53004D(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_530077(CpuFleetCommand *const, Squadron *, __int32, TargetType);
unsigned __int32 CpuFleetCommand::AddDefendTarget(Squadron *, __int32, TargetType) // 0x530077
{
    mangled_assert("?AddDefendTarget@CpuFleetCommand@@QAEIPAVSquadron@@HW4TargetType@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_530077(this, arg, arg, arg);
    return __result;
}

_extern void _sub_530B71(CpuFleetCommand *const, TargetType, __int32);
void CpuFleetCommand::ChangeDefendTargetPriority(TargetType, __int32) // 0x530B71
{
    mangled_assert("?ChangeDefendTargetPriority@CpuFleetCommand@@QAEXW4TargetType@@H@Z");
    todo("implement");
    _sub_530B71(this, arg, arg);
}

_extern void _sub_5326A7(CpuFleetCommand *const, unsigned __int32);
void CpuFleetCommand::RemoveDefendTarget(unsigned __int32) // 0x5326A7
{
    mangled_assert("?RemoveDefendTarget@CpuFleetCommand@@QAEXI@Z");
    todo("implement");
    _sub_5326A7(this, arg);
}

_extern void _sub_53257B(CpuFleetCommand *const, unsigned __int32);
void CpuFleetCommand::RemoveAttackTarget(unsigned __int32) // 0x53257B
{
    mangled_assert("?RemoveAttackTarget@CpuFleetCommand@@QAEXI@Z");
    todo("implement");
    _sub_53257B(this, arg);
}

_extern void _sub_53261F(CpuFleetCommand *const);
void CpuFleetCommand::RemoveDeadTargets() // 0x53261F
{
    mangled_assert("?RemoveDeadTargets@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_53261F(this);
}

_extern void _sub_531D21(CpuFleetCommand *const, Squadron &);
void CpuFleetCommand::IfAttackTargetThenAdd(Squadron &) // 0x531D21
{
    mangled_assert("?IfAttackTargetThenAdd@CpuFleetCommand@@AAEXAAVSquadron@@@Z");
    todo("implement");
    _sub_531D21(this, arg);
}

_extern DefendTarget *_sub_532763(CpuFleetCommand *const, unsigned __int32);
DefendTarget *CpuFleetCommand::RetrieveDefendTarget(unsigned __int32) // 0x532763
{
    mangled_assert("?RetrieveDefendTarget@CpuFleetCommand@@QAEPAVDefendTarget@@I@Z");
    todo("implement");
    DefendTarget * __result = _sub_532763(this, arg);
    return __result;
}

_extern AttackTarget *_sub_532755(CpuFleetCommand *const, unsigned __int32);
AttackTarget *CpuFleetCommand::RetrieveAttackTarget(unsigned __int32) // 0x532755
{
    mangled_assert("?RetrieveAttackTarget@CpuFleetCommand@@QAEPAVAttackTarget@@I@Z");
    todo("implement");
    AttackTarget * __result = _sub_532755(this, arg);
    return __result;
}

_extern AttackTarget *_sub_5319C2(CpuFleetCommand *const, CpuSquadGroup &);
AttackTarget *CpuFleetCommand::GetCurrentAttackTarget(CpuSquadGroup &) // 0x5319C2
{
    mangled_assert("?GetCurrentAttackTarget@CpuFleetCommand@@QAEPAVAttackTarget@@AAVCpuSquadGroup@@@Z");
    todo("implement");
    AttackTarget * __result = _sub_5319C2(this, arg);
    return __result;
}

_extern void _sub_5300A1(CpuFleetCommand *const, Squadron &);
void CpuFleetCommand::AddEnemySquadron(Squadron &) // 0x5300A1
{
    mangled_assert("?AddEnemySquadron@CpuFleetCommand@@QAEXAAVSquadron@@@Z");
    todo("implement");
    _sub_5300A1(this, arg);
}

_extern bool _sub_5311D6(CpuFleetCommand *const, vector3 const &, vector3 &);
bool CpuFleetCommand::FindGoodIdleScoutPosition(vector3 const &, vector3 &) // 0x5311D6
{
    mangled_assert("?FindGoodIdleScoutPosition@CpuFleetCommand@@QAE_NABVvector3@@AAV2@@Z");
    todo("implement");
    bool __result = _sub_5311D6(this, arg, arg);
    return __result;
}

_extern bool _sub_531E6C(CpuFleetCommand *const, CpuSquadGroup *);
bool CpuFleetCommand::MergeSingleSquadGroup(CpuSquadGroup *) // 0x531E6C
{
    mangled_assert("?MergeSingleSquadGroup@CpuFleetCommand@@AAE_NPAVCpuSquadGroup@@@Z");
    todo("implement");
    bool __result = _sub_531E6C(this, arg);
    return __result;
}

_extern void _sub_531E35(CpuFleetCommand *const);
void CpuFleetCommand::MergeNearbySquadGroups() // 0x531E35
{
    mangled_assert("?MergeNearbySquadGroups@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_531E35(this);
}

_extern bool _sub_5327B6(CpuFleetCommand *const, CpuSquadGroup *);
bool CpuFleetCommand::ShouldActivateSquadGroup(CpuSquadGroup *) // 0x5327B6
{
    mangled_assert("?ShouldActivateSquadGroup@CpuFleetCommand@@AAE_NPAVCpuSquadGroup@@@Z");
    todo("implement");
    bool __result = _sub_5327B6(this, arg);
    return __result;
}

_extern void _sub_530CE0(CpuFleetCommand *const, __int32);
void CpuFleetCommand::ConvertSquadGroupsToAttackGroups(__int32) // 0x530CE0
{
    mangled_assert("?ConvertSquadGroupsToAttackGroups@CpuFleetCommand@@AAEXH@Z");
    todo("implement");
    _sub_530CE0(this, arg);
}

_extern _sub_52F94D(SafeDefendTargetScore *const, vector3 const &);
_inline SafeDefendTargetScore::SafeDefendTargetScore(vector3 const &) // 0x52F94D
{
    mangled_assert("??0SafeDefendTargetScore@@QAE@ABVvector3@@@Z");
    todo("implement");
    _sub_52F94D(this, arg);
}

_extern void _sub_52F96C(LuaBinding::ObjInternal0<int,LuaBinding::Functor0MemberConst<int,CpuFleetCommand> > *const);
_inline LuaBinding::ObjInternal0<int,LuaBinding::Functor0MemberConst<int,CpuFleetCommand> >::~ObjInternal0<int,LuaBinding::Functor0MemberConst<int,CpuFleetCommand> >() // 0x52F96C
{
    mangled_assert("??1?$ObjInternal0@HV?$Functor0MemberConst@HVCpuFleetCommand@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52F96C(this);
}

_extern void _sub_52F972(LuaBinding::ObjInternal0<float,LuaBinding::Functor0MemberConst<float,CpuFleetCommand> > *const);
_inline LuaBinding::ObjInternal0<float,LuaBinding::Functor0MemberConst<float,CpuFleetCommand> >::~ObjInternal0<float,LuaBinding::Functor0MemberConst<float,CpuFleetCommand> >() // 0x52F972
{
    mangled_assert("??1?$ObjInternal0@MV?$Functor0MemberConst@MVCpuFleetCommand@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52F972(this);
}

_extern void _sub_52F978(LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuFleetCommand> > *const);
_inline LuaBinding::ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuFleetCommand> >::~ObjInternal0<void,LuaBinding::Functor0MemberNonConst<void,CpuFleetCommand> >() // 0x52F978
{
    mangled_assert("??1?$ObjInternal0@XV?$Functor0MemberNonConst@XVCpuFleetCommand@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52F978(this);
}

_extern float _sub_52FE31(SafeDefendTargetScore *const, BaseTarget *);
_inline float SafeDefendTargetScore::operator()(BaseTarget *) // 0x52FE31
{
    mangled_assert("??RSafeDefendTargetScore@@QAEMPAVBaseTarget@@@Z");
    todo("implement");
    float __result = _sub_52FE31(this, arg);
    return __result;
}

_extern void _sub_52F97E(LuaBinding::ObjInternal0<bool,LuaBinding::Functor0MemberConst<bool,CpuFleetCommand> > *const);
_inline LuaBinding::ObjInternal0<bool,LuaBinding::Functor0MemberConst<bool,CpuFleetCommand> >::~ObjInternal0<bool,LuaBinding::Functor0MemberConst<bool,CpuFleetCommand> >() // 0x52F97E
{
    mangled_assert("??1?$ObjInternal0@_NV?$Functor0MemberConst@_NVCpuFleetCommand@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52F97E(this);
}

_extern void _sub_52F9AB(std::_Tree_buy<Squadron *,std::allocator<Squadron *> > *const);
_inline std::_Tree_buy<Squadron *,std::allocator<Squadron *> >::~_Tree_buy<Squadron *,std::allocator<Squadron *> >() // 0x52F9AB
{
    mangled_assert("??1?$_Tree_buy@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52F9AB(this);
}

_extern void _sub_52F9B4(std::_Tree_comp<0,std::_Tset_traits<Squadron *,std::less<Squadron *>,std::allocator<Squadron *>,0> > *const);
_inline std::_Tree_comp<0,std::_Tset_traits<Squadron *,std::less<Squadron *>,std::allocator<Squadron *>,0> >::~_Tree_comp<0,std::_Tset_traits<Squadron *,std::less<Squadron *>,std::allocator<Squadron *>,0> >() // 0x52F9B4
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@PAVSquadron@@U?$less@PAVSquadron@@@std@@V?$allocator@PAVSquadron@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52F9B4(this);
}

_extern void _sub_52F9C5(std::set<Squadron *,std::less<Squadron *>,std::allocator<Squadron *> > *const);
_inline std::set<Squadron *,std::less<Squadron *>,std::allocator<Squadron *> >::~set<Squadron *,std::less<Squadron *>,std::allocator<Squadron *> >() // 0x52F9C5
{
    mangled_assert("??1?$set@PAVSquadron@@U?$less@PAVSquadron@@@std@@V?$allocator@PAVSquadron@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52F9C5(this);
}

_extern bool _sub_531BC5(CpuFleetCommand *const, vector3 const &, vector3 &);
bool CpuFleetCommand::GetSafeRetreatPos(vector3 const &, vector3 &) // 0x531BC5
{
    mangled_assert("?GetSafeRetreatPos@CpuFleetCommand@@QAE_NABVvector3@@AAV2@@Z");
    todo("implement");
    bool __result = _sub_531BC5(this, arg, arg);
    return __result;
}

_extern bool _sub_531762(CpuFleetCommand *const, vector3 const &, vector3 &, float);
bool CpuFleetCommand::GetBestDefendPosition(vector3 const &, vector3 &, float) // 0x531762
{
    mangled_assert("?GetBestDefendPosition@CpuFleetCommand@@QAE_NABVvector3@@AAV2@M@Z");
    todo("implement");
    bool __result = _sub_531762(this, arg, arg, arg);
    return __result;
}

_extern void _sub_5321E9(CpuFleetCommand *const);
void CpuFleetCommand::ProcessAttackGroups() // 0x5321E9
{
    mangled_assert("?ProcessAttackGroups@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_5321E9(this);
}

_extern void _sub_5306AF(CpuFleetCommand *const, CpuSquadGroup &);
void CpuFleetCommand::BreakGroupByDistance(CpuSquadGroup &) // 0x5306AF
{
    mangled_assert("?BreakGroupByDistance@CpuFleetCommand@@AAEXAAVCpuSquadGroup@@@Z");
    todo("implement");
    _sub_5306AF(this, arg);
}

_extern void _sub_530B7C(CpuFleetCommand *const);
void CpuFleetCommand::CleanUp() // 0x530B7C
{
    mangled_assert("?CleanUp@CpuFleetCommand@@QAEXXZ");
    todo("implement");
    _sub_530B7C(this);
}

_extern void _sub_530B8C(CpuFleetCommand *const);
void CpuFleetCommand::CleanupAndDataCollectionPhase() // 0x530B8C
{
    mangled_assert("?CleanupAndDataCollectionPhase@CpuFleetCommand@@QAEXXZ");
    todo("implement");
    _sub_530B8C(this);
}

_extern void _sub_5327E9(CpuFleetCommand *const);
void CpuFleetCommand::Update() // 0x5327E9
{
    mangled_assert("?Update@CpuFleetCommand@@QAEXXZ");
    todo("implement");
    _sub_5327E9(this);
}

_extern void _sub_532902(CpuFleetCommand *const);
void CpuFleetCommand::UpdatePassiveAbilities() // 0x532902
{
    mangled_assert("?UpdatePassiveAbilities@CpuFleetCommand@@QAEXXZ");
    todo("implement");
    _sub_532902(this);
}

_extern unsigned __int32 _sub_532193(CpuFleetCommand *const, unsigned __int32);
unsigned __int32 CpuFleetCommand::NumAssignedToDefendTarget(unsigned __int32) // 0x532193
{
    mangled_assert("?NumAssignedToDefendTarget@CpuFleetCommand@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_532193(this, arg);
    return __result;
}

_extern void _sub_532B2E(CpuFleetCommand *const, unsigned __int32, CounterValue &);
void CpuFleetCommand::ValueAssignedToDefendTarget(unsigned __int32, CounterValue &) // 0x532B2E
{
    mangled_assert("?ValueAssignedToDefendTarget@CpuFleetCommand@@QAEXIAAVCounterValue@@@Z");
    todo("implement");
    _sub_532B2E(this, arg, arg);
}

_extern void _sub_530320(CpuFleetCommand *const);
void CpuFleetCommand::AttackNow() // 0x530320
{
    mangled_assert("?AttackNow@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_530320(this);
}

_extern bool _sub_531DE3(CpuFleetCommand *const, unsigned __int32);
bool CpuFleetCommand::IsAttackTargetHaveScout(unsigned __int32) // 0x531DE3
{
    mangled_assert("?IsAttackTargetHaveScout@CpuFleetCommand@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_531DE3(this, arg);
    return __result;
}

_extern AttackTarget *_sub_531A0D(CpuFleetCommand *const, CpuSquadGroup &);
AttackTarget *CpuFleetCommand::GetNextScoutTarget(CpuSquadGroup &) // 0x531A0D
{
    mangled_assert("?GetNextScoutTarget@CpuFleetCommand@@QAEPAVAttackTarget@@AAVCpuSquadGroup@@@Z");
    todo("implement");
    AttackTarget * __result = _sub_531A0D(this, arg);
    return __result;
}

_extern void _sub_530211(CpuFleetCommand *const);
void CpuFleetCommand::AnalyzeAttackTargets() // 0x530211
{
    mangled_assert("?AnalyzeAttackTargets@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_530211(this);
}

_extern void _sub_53024B(CpuFleetCommand *const);
void CpuFleetCommand::AnalyzeDefendTargets() // 0x53024B
{
    mangled_assert("?AnalyzeDefendTargets@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_53024B(this);
}

_extern _sub_52F934(HighThreatAndPriorityScore *const, vector3 const &, SquadronList const &, CpuCommon &);
_inline HighThreatAndPriorityScore::HighThreatAndPriorityScore(vector3 const &, SquadronList const &, CpuCommon &) // 0x52F934
{
    mangled_assert("??0HighThreatAndPriorityScore@@QAE@ABVvector3@@ABVSquadronList@@AAVCpuCommon@@@Z");
    todo("implement");
    _sub_52F934(this, arg, arg, arg);
}

_extern float _sub_52FC88(HighThreatAndPriorityScore *const, BaseTarget *);
_inline float HighThreatAndPriorityScore::operator()(BaseTarget *) // 0x52FC88
{
    mangled_assert("??RHighThreatAndPriorityScore@@QAEMPAVBaseTarget@@@Z");
    todo("implement");
    float __result = _sub_52FC88(this, arg);
    return __result;
}

_extern DefendTarget *_sub_530ECA(CpuFleetCommand *const, CpuSquadGroup &);
DefendTarget *CpuFleetCommand::FindBestDefendTargetForAttackers(CpuSquadGroup &) // 0x530ECA
{
    mangled_assert("?FindBestDefendTargetForAttackers@CpuFleetCommand@@QAEPAVDefendTarget@@AAVCpuSquadGroup@@@Z");
    todo("implement");
    DefendTarget * __result = _sub_530ECA(this, arg);
    return __result;
}

_extern DefendTarget *_sub_53110F(CpuFleetCommand *const, vector3 const &, float);
DefendTarget *CpuFleetCommand::FindClosestThreatenedDefendTarget(vector3 const &, float) // 0x53110F
{
    mangled_assert("?FindClosestThreatenedDefendTarget@CpuFleetCommand@@QAEPAVDefendTarget@@ABVvector3@@M@Z");
    todo("implement");
    DefendTarget * __result = _sub_53110F(this, arg, arg);
    return __result;
}

_extern CpuSquadGroup *_sub_530F3C(CpuFleetCommand *const, CpuSquadGroup &, float, unsigned __int32);
CpuSquadGroup *CpuFleetCommand::FindBestGroup(CpuSquadGroup &, float, unsigned __int32) // 0x530F3C
{
    mangled_assert("?FindBestGroup@CpuFleetCommand@@AAEPAVCpuSquadGroup@@AAV2@MI@Z");
    todo("implement");
    CpuSquadGroup * __result = _sub_530F3C(this, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_5319A0(CpuFleetCommand const *const);
__int32 CpuFleetCommand::GetChosenEnemy() const // 0x5319A0
{
    mangled_assert("?GetChosenEnemy@CpuFleetCommand@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5319A0(this);
    return __result;
}

_extern CpuSquadGroup *_sub_530BCF(CpuFleetCommand *const, AttackTarget *);
CpuSquadGroup *CpuFleetCommand::ClosestGroupToTarget(AttackTarget *) // 0x530BCF
{
    mangled_assert("?ClosestGroupToTarget@CpuFleetCommand@@QAEPAVCpuSquadGroup@@PAVAttackTarget@@@Z");
    todo("implement");
    CpuSquadGroup * __result = _sub_530BCF(this, arg);
    return __result;
}

_extern __int32 _sub_53033C(CpuFleetCommand *const, AttackTarget *, vector3 const &);
__int32 CpuFleetCommand::AttackTargetScore(AttackTarget *, vector3 const &) // 0x53033C
{
    mangled_assert("?AttackTargetScore@CpuFleetCommand@@QAEHPAVAttackTarget@@ABVvector3@@@Z");
    todo("implement");
    __int32 __result = _sub_53033C(this, arg, arg);
    return __result;
}

_extern void _sub_5322F6(CpuFleetCommand *const, CpuSquadGroup const &);
void CpuFleetCommand::RecalcGoalTarget(CpuSquadGroup const &) // 0x5322F6
{
    mangled_assert("?RecalcGoalTarget@CpuFleetCommand@@AAEXABVCpuSquadGroup@@@Z");
    todo("implement");
    _sub_5322F6(this, arg);
}

_extern float _sub_5334C0(vector3 const &, float, vector3 const &, vector3 const &);
_inline float pointDistToLine(vector3 const &v, float vlength, vector3 const &p, vector3 const &test) // 0x5334C0
{
    mangled_assert("?pointDistToLine@@YGMABVvector3@@M00@Z");
    todo("implement");
    float __result = _sub_5334C0(v, vlength, p, test);
    return __result;
}

_extern void _sub_530970(CpuFleetCommand *const, vector3 const &, vector3 const &, CounterValue &);
void CpuFleetCommand::CalcThreatToTarget(vector3 const &, vector3 const &, CounterValue &) // 0x530970
{
    mangled_assert("?CalcThreatToTarget@CpuFleetCommand@@QAEXABVvector3@@0AAVCounterValue@@@Z");
    todo("implement");
    _sub_530970(this, arg, arg, arg);
}

_extern void _sub_530E11(CpuFleetCommand *const);
void CpuFleetCommand::Debug_RenderSquadGroups() // 0x530E11
{
    mangled_assert("?Debug_RenderSquadGroups@CpuFleetCommand@@AAEXXZ");
    todo("implement");
    _sub_530E11(this);
}

_extern void _sub_530E12(CpuFleetCommand *const);
void CpuFleetCommand::Debug_Targets() // 0x530E12
{
    mangled_assert("?Debug_Targets@CpuFleetCommand@@QAEXXZ");
    todo("implement");
    _sub_530E12(this);
}

_extern void _sub_530E0D(CpuFleetCommand *const);
void CpuFleetCommand::Debug() // 0x530E0D
{
    mangled_assert("?Debug@CpuFleetCommand@@QAEXXZ");
    todo("implement");
    _sub_530E0D(this);
}

_extern void _sub_530E0E(CpuFleetCommand *const, float);
void CpuFleetCommand::DebugStats(float) // 0x530E0E
{
    mangled_assert("?DebugStats@CpuFleetCommand@@QAEXM@Z");
    todo("implement");
    _sub_530E0E(this, arg);
}

_extern void _sub_533579(CpuFleetCommand *const);
void CpuFleetCommand::postRestore() // 0x533579
{
    mangled_assert("?postRestore@CpuFleetCommand@@UAEXXZ");
    todo("implement");
    _sub_533579(this);
}

_extern void _sub_52E747(void *, SaveGameData *, SaveType);
void CpuFleetCommand::saveStateMachines(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x52E747
{
    mangled_assert("?saveStateMachines@CpuFleetCommand@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_52E747(objectPtr, saveGameData, savetype);
}

_extern void _sub_52E812(void *, SaveGameData *);
void CpuFleetCommand::loadStateMachines(void *objectPtr, SaveGameData *saveGameData) // 0x52E812
{
    mangled_assert("?loadStateMachines@CpuFleetCommand@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_52E812(objectPtr, saveGameData);
}

_extern bool _sub_533670(CpuFleetCommand *const, SaveGameData *);
bool CpuFleetCommand::restore(SaveGameData *) // 0x533670
{
    mangled_assert("?restore@CpuFleetCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_533670(this, arg);
    return __result;
}

_extern bool _sub_5336AE(CpuFleetCommand *const, SaveGameData *, SaveType);
bool CpuFleetCommand::save(SaveGameData *, SaveType) // 0x5336AE
{
    mangled_assert("?save@CpuFleetCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_5336AE(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <Engine\GuardCommand.h>
#include <Engine\CaptureManager.h>
#include <Engine\TrailTargetCommand.h>
#include <xstring>
#include <boost\utility.hpp>
#include <xmemory0>
#include <xfunctional>
#include <Scar\pch.h>
#include <boost\utility\addressof.hpp>
#include <Engine\TeamColourRegistry.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\savegame.h>
#include <boost\utility\base_from_member.hpp>
#include <Engine\sob.h>
#include <Engine\task.h>
#include <Engine\sobstatic.h>
#include <boost\utility_fwd.hpp>
#include <bitset>
#include <stack>
#include <luaconfig\luabinding.h>
#include <numeric>
#include <Mathlib\matrix4.h>
#include <Engine\BuildManager.h>
#include <Engine\HyperSpaceBaseCommand.h>
#include <Engine\MultiplierContainer.h>
#include <Engine\visibility.h>
#include <new>
#include <Engine\MultiplierTypes.h>
#include <exception>
#include <xstddef>
#include <Engine\playerresourcetype.h>
#include <Engine\BuildJobType.h>
#include <type_traits>
#include <Engine\Sob\Nebula\NebulaGroupManager.h>
#include <Engine\ResearchData.h>
#include <Engine\DependencyData.h>
#include <boost\next_prior.hpp>
#include <Engine\weaponinfo.h>
#include <Mathlib\matrix3.h>
#include <queue>
#include <algorithm>
#include <xutility>
#include <Engine\OrderFeedback.h>
#include <Engine\Race.h>
#include <boost\scoped_array.hpp>
#include <utility>
#include <boost\config.hpp>
#include <Engine\Selector.h>
#include <iosfwd>
#include <map>
#include <boost\noncopyable.hpp>
#include <Engine\MetaSelTarg.h>
#include <xtree>
#include <xmemory>
#include <platform\timer.h>
#include <Engine\FormHyperspaceGateCommand.h>
#include <Engine\ProfileSystem.h>
#include <Scar\LuaSobGroupQuery.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\FamilyListMgr.h>
#include <Scar\GameQuery.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Engine\FamilyList.h>
#include <Engine\Family.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SoundManager\SoundManager.h>
#include <Engine\Player.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Engine\ResearchManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <boost\cstdint.hpp>
#include <vector>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\MeshAnimation.h>
#include <Engine\ShieldTypes.h>
#include <Engine\Sob\DustCloud\DustCloudGroup.h>
#include <Engine\SquadronList.h>
#include <boost\detail\workaround.hpp>
#include <Engine\Subsystems\Subsystem.h>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\Subsystems\SubsystemStatic.h>
#include <Engine\Squadron.h>
#include <Mathlib\quat.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\command.h>
#include <Engine\ship.h>
#include <Engine\GunBinding.h>
#include <cstdarg>
#include <Engine\SobWithMesh.h>
#include <Engine\Subsystems\HardPointManager.h>
#include <Engine\shipHold.h>
#include <stdarg.h>
#include <Engine\SobRigidBody.h>
#include <Engine\Subsystems\HardPoint.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Engine\SobRigidBodyStatic.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <Engine\SalvageManager.h>
#include <util\colour.h>
#include <Engine\LatchPointManager.h>
#include <Engine\sobid.h>
#include <Engine\Sob\Nebula\NebulaGroup.h>
#include <Engine\Sob\Nebula\NebulaGroupBase.h>
#include <Engine\DynamicPoint.h>
#include <Mathlib\vector2.h>
#include <Scar\Scar.h>
#include <Engine\sobtypes.h>
#include <util\types.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Scar\ScarEventSys.h>
#include <Engine\Parade.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Camera\OrbitParameters.h>
#include <Engine\abilities.h>
#include <Engine\SelTarg.h>
#include <seInterface2\PatchID.h>
#include <Engine\prim.h>
#include <seInterface2\SoundParams.h>
#include <Engine\BuildQueue.h>
#include <Engine\BuildJob.h>
#include <Engine\Universe.h>
#include <Engine\savegamedef.h>
#include <Engine\MainUI.h>
#include <Engine\BuildData.h>
#include <boost\shared_ptr.hpp>
#include <Engine\SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\App\Hw2Identify.h>
#include <Scar\LuaRuleSystem.h>
#include <Render\gl\r_defines.h>
#include <boost\smart_ptr.hpp>
#include <Engine\RepairManager.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\glext.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Mathlib\fastmath.h>
#include <Engine\fixedpoint.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <util\fixed.h>
#include <Engine\Volume.h>
#include <Engine\VolumeStatic.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Engine\Sphere.h>
#include <seInterface2\sedefinesshared.h>
#include <assist\stlexsmallvector.h>
#include <Engine\shipstatic.h>
#include <Engine\Sob\DustCloud\DustCloudGroupManager.h>
#include <Engine\config.h>
#include <set>
#include <Engine\Tactics.h>
#include <Engine\SOBGroup.h>
#include <Engine\DockCommand.h>
#include <Mathlib\luamathbinding.h>
#include <list>
#include <boost\shared_array.hpp>
#include <wchar.h>
#include <string>
#include <profile\profile.h>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <Engine\ParadeCommand.h>
#include <iostream>
#include <Engine\commandtype.h>
#include <Engine\WeaponFire\WeaponFireEvent.h>

/* ---------- constants */

enum `anonymous-namespace'::ManagerTypeToQuery
{
    Salvage = 0,
    Capture,
    Repair,
};

/* ---------- definitions */

class `anonymous-namespace'::LuaTeamQueryLib :
    public LuaLibrary
{
public:
    LuaTeamQueryLib(`anonymous-namespace'::LuaTeamQueryLib const &); /* compiler_generated() */
    LuaTeamQueryLib();
    virtual ~LuaTeamQueryLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaTeamQueryLib &operator=(`anonymous-namespace'::LuaTeamQueryLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaTeamQueryLib) == 16, "Invalid `anonymous-namespace'::LuaTeamQueryLib size");

typedef `anonymous-namespace'::ManagerTypeToQuery ?A0x6f87c159::ManagerTypeToQuery;
typedef `anonymous-namespace'::LuaTeamQueryLib ?A0x6f87c159::LuaTeamQueryLib;

/* ---------- prototypes */

extern __int32 luateamquery::Count(__int32 result, Squadron const *pSquad);
extern __int32 luateamquery::CountByPlayer(__int32 result, Squadron const *pSquad);
extern bool SobGroup_Empty(char const *sobGroupName);
extern unsigned __int32 SobGroup_Count(char const *sobGroupName);
extern unsigned __int32 SobGroup_CountByPlayer(char const *sobGroupName, unsigned __int32 playerIndex);
extern unsigned __int32 SobGroup_GetPlayerOwner(char const *sobGroupName);
extern bool SobGroup_IsInVolume(char const *sobGroupName, char const *volumeName);
extern bool SobGroup_OnScreen(char const *sobGroupName);
extern bool SobGroup_IsShipNearPoint(char const *sobGroupName, char const *volumeName, float distance);
extern bool SobGroup_IsDockedSobGroup(char const *sobGroupName, char const *sobGroupNameDockedWith);
extern bool SobGroup_IsDocked(char const *sobGroupName);
extern bool SobGroup_InStrikeGroup(char const *sobGroupName);
extern bool SobGroup_IsGateDeployed(char const *gateStartName, char const *gateEndName);
extern float SobGroup_HealthPercentage(char const *sobGroupName);
extern void SobGroup_SetSpeed(char const *sobGroupName, float speed);
extern void SobGroup_SetMaxSpeedMultiplier(char const *sobGroupName, float speed);
extern vector3 SobGroup_GetCentrePosition(char const *sobGroupName);
extern vector3 SobGroup_GetPosition(char const *sobGroupName);
extern float SobGroup_GetSpeed(char const *sobGroupName);
extern float SobGroup_GetActualSpeed(char const *sobGroupName);
extern bool SobGroup_FillSobGroupInVolume(char const *sobGroupOutName, char const *sobGroupName, char const *volumeName);
extern bool SobGroup_FillProximitySobGroup(char const *sobGroupNameOut, char const *sobGroupNameToCheck, char const *sobGroupName, float distance);
extern DustCloudGroup *findGroup<DustCloudGroup,DustCloudGroupManager>(char const *startName, unsigned __int32 str_len, char const *funcname, DustCloudGroupManager const &manager);
extern NebulaGroup *findGroup<NebulaGroup,NebulaGroupManager>(char const *startName, unsigned __int32 str_len, char const *funcname, NebulaGroupManager const &manager);
extern void tokenizeGroups<DustCloudGroup,DustCloudGroupManager>(char const *nebulaName, std::vector<DustCloudGroup *,std::allocator<DustCloudGroup *> > &groups, char const *funcname, DustCloudGroupManager const &manager);
extern void tokenizeGroups<NebulaGroup,NebulaGroupManager>(char const *nebulaName, std::vector<NebulaGroup *,std::allocator<NebulaGroup *> > &groups, char const *funcname, NebulaGroupManager const &manager);
extern void SobGroup_GetSquadronsInsideNebula(char const *sobGroupName, char const *nebulaName, unsigned __int32 PlayerIndex);
extern bool SobGroup_AreAnySquadronsInsideNebula(char const *sobGroupName, char const *nebulaName);
extern bool SobGroup_AreAnySquadronsOutsideNebula(char const *sobGroupName, char const *nebulaName);
extern void SobGroup_GetSquadronsInsideDustCloud(char const *sobGroupName, char const *DustCloudName, unsigned __int32 PlayerIndex);
extern bool SobGroup_AreAnySquadronsInsideDustCloud(char const *sobGroupName, char const *DustCloudName);
extern bool SobGroup_AreAnySquadronsOutsideDustCloud(char const *sobGroupName, char const *DustCloudName);
extern bool SobGroup_GroupInGroup(char const *sobGroupName, char const *sobGroupNameToFind);
extern void FOW_RevealGroup(char const *sobGroupName, bool revealGroup);
extern bool SobGroup_Selected(char const *sobGroupName);
extern bool SobGroup_IsCloaked(char const *sobGroupName);
extern bool SobGroup_HasFiredAtSobGroup(char const *sobGroupFiringName, char const *sobGroupBeingShotName, char const *weaponBeingFiredName);
extern bool SobGroup_PlayerIsInSensorRange(char const *sobGroupName, unsigned __int32 playerID);
extern bool SobGroup_SalvagedByPlayer(char const *sobGroupName, unsigned __int32 playerID);
extern void SobGroup_GetSobGroupDockedWithGroup(char const *dockedWithName, char const *outputName);
extern bool SobGroup_SubSystemSelected(char const *sobGroupName);
extern __int32 SobGroup_ResearchModuleExistOrSelected(char const *sobGroupName);
extern bool SobGroup_AssignedToGroup(char const *sobGroupName, unsigned __int32 group);
extern unsigned __int32 SobGroup_GetTactics(char const *sobGroupName);
extern bool SobGroup_IsGuardingSobGroup(char const *guardingSobGroupName, char const *targetSobGroupName);
extern bool SobGroup_IsDoingAbility(char const *sobGroupName, unsigned __int32 ability);
extern bool SobGroup_CanDoAbility(char const *sobGroupName, unsigned __int32 ability);
extern bool SobGroup_HasUpgrade(char const *sobGroupName, char const *upgradeName);
extern bool SobGroup_IsInControlGroup(unsigned __int32 ctrlGroup, char const *sobGroupName);
extern bool SobGroup_IsBuilding(char const *sobGroupName, char const *sobName);
extern bool SobGroup_UnderAttack(char const *sobGroupName);
extern void SobGroup_GetAttackers(char const *sobGroupName, char const *outputSobGroupName);
extern bool SobGroup_AreAllInHyperspace(char const *sobGroupName);
extern bool SobGroup_AreAllInRealSpace(char const *sobGroupName);
extern void SobGroup_GetSobGroupSalvagingGroup(char const *sobGroupName, char const *outputSobGroupName);
extern void SobGroup_GetSobGroupCapturingGroup(char const *sobGroupName, char const *outputSobGroupName);
extern void SobGroup_GetSobGroupRepairingGroup(char const *sobGroupName, char const *outputSobGroupName);
extern void SobGroup_GetSobGroupBeingCapturedGroup(char const *sobGroupName, char const *outputSobGroupName);
extern bool SobGroup_AreAnyFromTheseAttackFamilies(char const *sobGroupName, char const *families);
extern bool SobGroup_AreAnyOfTheseTypes(char const *sobGroupName, char const *shipNames);

/* ---------- globals */

extern char const *LUALIB_TEAMQUERY; // 0x84278C

/* ---------- private variables */

_static
{
    extern __int32 s_playerIndexToCountBy; // 0x86128C
}

/* ---------- public code */

_extern __int32 _sub_718772(__int32, Squadron const *);
__int32 luateamquery::Count(__int32 result, Squadron const *pSquad) // 0x718772
{
    mangled_assert("?Count@luateamquery@@YGHHPBVSquadron@@@Z");
    todo("implement");
    __int32 __result = _sub_718772(result, pSquad);
    return __result;
}

_extern __int32 _sub_718780(__int32, Squadron const *);
__int32 luateamquery::CountByPlayer(__int32 result, Squadron const *pSquad) // 0x718780
{
    mangled_assert("?CountByPlayer@luateamquery@@YGHHPBVSquadron@@@Z");
    todo("implement");
    __int32 __result = _sub_718780(result, pSquad);
    return __result;
}

_extern bool _sub_71A3DF(char const *);
bool SobGroup_Empty(char const *sobGroupName) // 0x71A3DF
{
    mangled_assert("?SobGroup_Empty@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71A3DF(sobGroupName);
    return __result;
}

_extern unsigned __int32 _sub_71A305(char const *);
unsigned __int32 SobGroup_Count(char const *sobGroupName) // 0x71A305
{
    mangled_assert("?SobGroup_Count@@YGIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_71A305(sobGroupName);
    return __result;
}

_extern unsigned __int32 _sub_71A36A(char const *, unsigned __int32);
unsigned __int32 SobGroup_CountByPlayer(char const *sobGroupName, unsigned __int32 playerIndex) // 0x71A36A
{
    mangled_assert("?SobGroup_CountByPlayer@@YGIPBDI@Z");
    todo("implement");
    unsigned __int32 __result = _sub_71A36A(sobGroupName, playerIndex);
    return __result;
}

_extern unsigned __int32 _sub_71AB8B(char const *);
unsigned __int32 SobGroup_GetPlayerOwner(char const *sobGroupName) // 0x71AB8B
{
    mangled_assert("?SobGroup_GetPlayerOwner@@YGIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_71AB8B(sobGroupName);
    return __result;
}

_extern bool _sub_71BE5D(char const *, char const *);
bool SobGroup_IsInVolume(char const *sobGroupName, char const *volumeName) // 0x71BE5D
{
    mangled_assert("?SobGroup_IsInVolume@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71BE5D(sobGroupName, volumeName);
    return __result;
}

_extern bool _sub_71C067(char const *);
bool SobGroup_OnScreen(char const *sobGroupName) // 0x71C067
{
    mangled_assert("?SobGroup_OnScreen@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71C067(sobGroupName);
    return __result;
}

_extern bool _sub_71BF1C(char const *, char const *, float);
bool SobGroup_IsShipNearPoint(char const *sobGroupName, char const *volumeName, float distance) // 0x71BF1C
{
    mangled_assert("?SobGroup_IsShipNearPoint@@YG_NPBD0M@Z");
    todo("implement");
    bool __result = _sub_71BF1C(sobGroupName, volumeName, distance);
    return __result;
}

_extern bool _sub_71BA19(char const *, char const *);
bool SobGroup_IsDockedSobGroup(char const *sobGroupName, char const *sobGroupNameDockedWith) // 0x71BA19
{
    mangled_assert("?SobGroup_IsDockedSobGroup@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71BA19(sobGroupName, sobGroupNameDockedWith);
    return __result;
}

_extern bool _sub_71B9A1(char const *);
bool SobGroup_IsDocked(char const *sobGroupName) // 0x71B9A1
{
    mangled_assert("?SobGroup_IsDocked@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71B9A1(sobGroupName);
    return __result;
}

_extern bool _sub_71B647(char const *);
bool SobGroup_InStrikeGroup(char const *sobGroupName) // 0x71B647
{
    mangled_assert("?SobGroup_InStrikeGroup@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71B647(sobGroupName);
    return __result;
}

_extern bool _sub_71BB8D(char const *, char const *);
bool SobGroup_IsGateDeployed(char const *gateStartName, char const *gateEndName) // 0x71BB8D
{
    mangled_assert("?SobGroup_IsGateDeployed@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71BB8D(gateStartName, gateEndName);
    return __result;
}

_extern float _sub_71B581(char const *);
float SobGroup_HealthPercentage(char const *sobGroupName) // 0x71B581
{
    mangled_assert("?SobGroup_HealthPercentage@@YGMPBD@Z");
    todo("implement");
    float __result = _sub_71B581(sobGroupName);
    return __result;
}

_extern void _sub_71C5BE(char const *, float);
void SobGroup_SetSpeed(char const *sobGroupName, float speed) // 0x71C5BE
{
    mangled_assert("?SobGroup_SetSpeed@@YGXPBDM@Z");
    todo("implement");
    _sub_71C5BE(sobGroupName, speed);
}

_extern void _sub_71C507(char const *, float);
void SobGroup_SetMaxSpeedMultiplier(char const *sobGroupName, float speed) // 0x71C507
{
    mangled_assert("?SobGroup_SetMaxSpeedMultiplier@@YGXPBDM@Z");
    todo("implement");
    _sub_71C507(sobGroupName, speed);
}

_extern vector3 _sub_71AA1B(char const *);
vector3 SobGroup_GetCentrePosition(char const *sobGroupName) // 0x71AA1B
{
    mangled_assert("?SobGroup_GetCentrePosition@@YG?AVvector3@@PBD@Z");
    todo("implement");
    vector3 __result = _sub_71AA1B(sobGroupName);
    return __result;
}

_extern vector3 _sub_71ABD8(char const *);
vector3 SobGroup_GetPosition(char const *sobGroupName) // 0x71ABD8
{
    mangled_assert("?SobGroup_GetPosition@@YG?AVvector3@@PBD@Z");
    todo("implement");
    vector3 __result = _sub_71ABD8(sobGroupName);
    return __result;
}

_extern float _sub_71B087(char const *);
float SobGroup_GetSpeed(char const *sobGroupName) // 0x71B087
{
    mangled_assert("?SobGroup_GetSpeed@@YGMPBD@Z");
    todo("implement");
    float __result = _sub_71B087(sobGroupName);
    return __result;
}

_extern float _sub_71A83F(char const *);
float SobGroup_GetActualSpeed(char const *sobGroupName) // 0x71A83F
{
    mangled_assert("?SobGroup_GetActualSpeed@@YGMPBD@Z");
    todo("implement");
    float __result = _sub_71A83F(sobGroupName);
    return __result;
}

_extern bool _sub_71A673(char const *, char const *, char const *);
bool SobGroup_FillSobGroupInVolume(char const *sobGroupOutName, char const *sobGroupName, char const *volumeName) // 0x71A673
{
    mangled_assert("?SobGroup_FillSobGroupInVolume@@YG_NPBD00@Z");
    todo("implement");
    bool __result = _sub_71A673(sobGroupOutName, sobGroupName, volumeName);
    return __result;
}

_extern bool _sub_71A433(char const *, char const *, char const *, float);
bool SobGroup_FillProximitySobGroup(char const *sobGroupNameOut, char const *sobGroupNameToCheck, char const *sobGroupName, float distance) // 0x71A433
{
    mangled_assert("?SobGroup_FillProximitySobGroup@@YG_NPBD00M@Z");
    todo("implement");
    bool __result = _sub_71A433(sobGroupNameOut, sobGroupNameToCheck, sobGroupName, distance);
    return __result;
}

_extern DustCloudGroup *_sub_717ED9(char const *, unsigned __int32, char const *, DustCloudGroupManager const &);
DustCloudGroup *findGroup<DustCloudGroup,DustCloudGroupManager>(char const *startName, unsigned __int32 str_len, char const *funcname, DustCloudGroupManager const &manager) // 0x717ED9
{
    mangled_assert("??$findGroup@VDustCloudGroup@@VDustCloudGroupManager@@@@YGPAVDustCloudGroup@@PBDI0ABVDustCloudGroupManager@@@Z");
    todo("implement");
    DustCloudGroup * __result = _sub_717ED9(startName, str_len, funcname, manager);
    return __result;
}

_extern NebulaGroup *_sub_717F91(char const *, unsigned __int32, char const *, NebulaGroupManager const &);
NebulaGroup *findGroup<NebulaGroup,NebulaGroupManager>(char const *startName, unsigned __int32 str_len, char const *funcname, NebulaGroupManager const &manager) // 0x717F91
{
    mangled_assert("??$findGroup@VNebulaGroup@@VNebulaGroupManager@@@@YGPAVNebulaGroup@@PBDI0ABVNebulaGroupManager@@@Z");
    todo("implement");
    NebulaGroup * __result = _sub_717F91(startName, str_len, funcname, manager);
    return __result;
}

_extern void _sub_7180E7(char const *, std::vector<DustCloudGroup *,std::allocator<DustCloudGroup *> > &, char const *, DustCloudGroupManager const &);
void tokenizeGroups<DustCloudGroup,DustCloudGroupManager>(char const *nebulaName, std::vector<DustCloudGroup *,std::allocator<DustCloudGroup *> > &groups, char const *funcname, DustCloudGroupManager const &manager) // 0x7180E7
{
    mangled_assert("??$tokenizeGroups@VDustCloudGroup@@VDustCloudGroupManager@@@@YGXPBDAAV?$vector@PAVDustCloudGroup@@V?$allocator@PAVDustCloudGroup@@@std@@@std@@0ABVDustCloudGroupManager@@@Z");
    todo("implement");
    _sub_7180E7(nebulaName, groups, funcname, manager);
}

_extern void _sub_718162(char const *, std::vector<NebulaGroup *,std::allocator<NebulaGroup *> > &, char const *, NebulaGroupManager const &);
void tokenizeGroups<NebulaGroup,NebulaGroupManager>(char const *nebulaName, std::vector<NebulaGroup *,std::allocator<NebulaGroup *> > &groups, char const *funcname, NebulaGroupManager const &manager) // 0x718162
{
    mangled_assert("??$tokenizeGroups@VNebulaGroup@@VNebulaGroupManager@@@@YGXPBDAAV?$vector@PAVNebulaGroup@@V?$allocator@PAVNebulaGroup@@@std@@@std@@0ABVNebulaGroupManager@@@Z");
    todo("implement");
    _sub_718162(nebulaName, groups, funcname, manager);
}

_extern void _sub_71844D(LuaBinding::ObjInternal1<char const *,int,LuaBinding::Functor1Free<char const *,int> > *const);
_inline LuaBinding::ObjInternal1<char const *,int,LuaBinding::Functor1Free<char const *,int> >::~ObjInternal1<char const *,int,LuaBinding::Functor1Free<char const *,int> >() // 0x71844D
{
    mangled_assert("??1?$ObjInternal1@PBDHV?$Functor1Free@PBDH@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71844D(this);
}

_extern void _sub_718453(LuaBinding::ObjInternal1<char const *,vector3,LuaBinding::Functor1Free<char const *,vector3> > *const);
_inline LuaBinding::ObjInternal1<char const *,vector3,LuaBinding::Functor1Free<char const *,vector3> >::~ObjInternal1<char const *,vector3,LuaBinding::Functor1Free<char const *,vector3> >() // 0x718453
{
    mangled_assert("??1?$ObjInternal1@PBDVvector3@@V?$Functor1Free@PBDVvector3@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_718453(this);
}

_extern void _sub_718459(LuaBinding::ObjInternal2<char const *,unsigned int,bool,LuaBinding::Functor2Free<char const *,unsigned int,bool> > *const);
_inline LuaBinding::ObjInternal2<char const *,unsigned int,bool,LuaBinding::Functor2Free<char const *,unsigned int,bool> >::~ObjInternal2<char const *,unsigned int,bool,LuaBinding::Functor2Free<char const *,unsigned int,bool> >() // 0x718459
{
    mangled_assert("??1?$ObjInternal2@PBDI_NV?$Functor2Free@PBDI_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_718459(this);
}

_extern void _sub_71845F(LuaBinding::ObjInternal3<char const *,char const *,unsigned int,void,LuaBinding::Functor3Free<char const *,char const *,unsigned int,void> > *const);
_inline LuaBinding::ObjInternal3<char const *,char const *,unsigned int,void,LuaBinding::Functor3Free<char const *,char const *,unsigned int,void> >::~ObjInternal3<char const *,char const *,unsigned int,void,LuaBinding::Functor3Free<char const *,char const *,unsigned int,void> >() // 0x71845F
{
    mangled_assert("??1?$ObjInternal3@PBDPBDIXV?$Functor3Free@PBDPBDIX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71845F(this);
}

_extern void _sub_718465(LuaBinding::ObjInternal3<char const *,char const *,float,bool,LuaBinding::Functor3Free<char const *,char const *,float,bool> > *const);
_inline LuaBinding::ObjInternal3<char const *,char const *,float,bool,LuaBinding::Functor3Free<char const *,char const *,float,bool> >::~ObjInternal3<char const *,char const *,float,bool,LuaBinding::Functor3Free<char const *,char const *,float,bool> >() // 0x718465
{
    mangled_assert("??1?$ObjInternal3@PBDPBDM_NV?$Functor3Free@PBDPBDM_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_718465(this);
}

_extern void _sub_71846B(LuaBinding::ObjInternal4<char const *,char const *,char const *,float,bool,LuaBinding::Functor4Free<char const *,char const *,char const *,float,bool> > *const);
_inline LuaBinding::ObjInternal4<char const *,char const *,char const *,float,bool,LuaBinding::Functor4Free<char const *,char const *,char const *,float,bool> >::~ObjInternal4<char const *,char const *,char const *,float,bool,LuaBinding::Functor4Free<char const *,char const *,char const *,float,bool> >() // 0x71846B
{
    mangled_assert("??1?$ObjInternal4@PBDPBDPBDM_NV?$Functor4Free@PBDPBDPBDM_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71846B(this);
}

_extern void _sub_71B16B(char const *, char const *, unsigned __int32);
void SobGroup_GetSquadronsInsideNebula(char const *sobGroupName, char const *nebulaName, unsigned __int32 PlayerIndex) // 0x71B16B
{
    mangled_assert("?SobGroup_GetSquadronsInsideNebula@@YGXPBD0I@Z");
    todo("implement");
    _sub_71B16B(sobGroupName, nebulaName, PlayerIndex);
}

_extern bool _sub_719F1C(char const *, char const *);
bool SobGroup_AreAnySquadronsInsideNebula(char const *sobGroupName, char const *nebulaName) // 0x719F1C
{
    mangled_assert("?SobGroup_AreAnySquadronsInsideNebula@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_719F1C(sobGroupName, nebulaName);
    return __result;
}

_extern bool _sub_71A0BF(char const *, char const *);
bool SobGroup_AreAnySquadronsOutsideNebula(char const *sobGroupName, char const *nebulaName) // 0x71A0BF
{
    mangled_assert("?SobGroup_AreAnySquadronsOutsideNebula@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71A0BF(sobGroupName, nebulaName);
    return __result;
}

_extern void _sub_71B0E3(char const *, char const *, unsigned __int32);
void SobGroup_GetSquadronsInsideDustCloud(char const *sobGroupName, char const *DustCloudName, unsigned __int32 PlayerIndex) // 0x71B0E3
{
    mangled_assert("?SobGroup_GetSquadronsInsideDustCloud@@YGXPBD0I@Z");
    todo("implement");
    _sub_71B0E3(sobGroupName, DustCloudName, PlayerIndex);
}

_extern bool _sub_719E57(char const *, char const *);
bool SobGroup_AreAnySquadronsInsideDustCloud(char const *sobGroupName, char const *DustCloudName) // 0x719E57
{
    mangled_assert("?SobGroup_AreAnySquadronsInsideDustCloud@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_719E57(sobGroupName, DustCloudName);
    return __result;
}

_extern bool _sub_719FE1(char const *, char const *);
bool SobGroup_AreAnySquadronsOutsideDustCloud(char const *sobGroupName, char const *DustCloudName) // 0x719FE1
{
    mangled_assert("?SobGroup_AreAnySquadronsOutsideDustCloud@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_719FE1(sobGroupName, DustCloudName);
    return __result;
}

_extern bool _sub_71B264(char const *, char const *);
bool SobGroup_GroupInGroup(char const *sobGroupName, char const *sobGroupNameToFind) // 0x71B264
{
    mangled_assert("?SobGroup_GroupInGroup@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71B264(sobGroupName, sobGroupNameToFind);
    return __result;
}

_extern void _sub_718AA1(char const *, bool);
void FOW_RevealGroup(char const *sobGroupName, bool revealGroup) // 0x718AA1
{
    mangled_assert("?FOW_RevealGroup@@YGXPBD_N@Z");
    todo("implement");
    _sub_718AA1(sobGroupName, revealGroup);
}

_extern bool _sub_71C46E(char const *);
bool SobGroup_Selected(char const *sobGroupName) // 0x71C46E
{
    mangled_assert("?SobGroup_Selected@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71C46E(sobGroupName);
    return __result;
}

_extern bool _sub_71B901(char const *);
bool SobGroup_IsCloaked(char const *sobGroupName) // 0x71B901
{
    mangled_assert("?SobGroup_IsCloaked@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71B901(sobGroupName);
    return __result;
}

_extern bool _sub_71B317(char const *, char const *, char const *);
bool SobGroup_HasFiredAtSobGroup(char const *sobGroupFiringName, char const *sobGroupBeingShotName, char const *weaponBeingFiredName) // 0x71B317
{
    mangled_assert("?SobGroup_HasFiredAtSobGroup@@YG_NPBD00@Z");
    todo("implement");
    bool __result = _sub_71B317(sobGroupFiringName, sobGroupBeingShotName, weaponBeingFiredName);
    return __result;
}

_extern bool _sub_71C118(char const *, unsigned __int32);
bool SobGroup_PlayerIsInSensorRange(char const *sobGroupName, unsigned __int32 playerID) // 0x71C118
{
    mangled_assert("?SobGroup_PlayerIsInSensorRange@@YG_NPBDI@Z");
    todo("implement");
    bool __result = _sub_71C118(sobGroupName, playerID);
    return __result;
}

_extern bool _sub_71C3E3(char const *, unsigned __int32);
bool SobGroup_SalvagedByPlayer(char const *sobGroupName, unsigned __int32 playerID) // 0x71C3E3
{
    mangled_assert("?SobGroup_SalvagedByPlayer@@YG_NPBDI@Z");
    todo("implement");
    bool __result = _sub_71C3E3(sobGroupName, playerID);
    return __result;
}

_extern void _sub_71AE16(char const *, char const *);
void SobGroup_GetSobGroupDockedWithGroup(char const *dockedWithName, char const *outputName) // 0x71AE16
{
    mangled_assert("?SobGroup_GetSobGroupDockedWithGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_71AE16(dockedWithName, outputName);
}

_extern bool _sub_71C675(char const *);
bool SobGroup_SubSystemSelected(char const *sobGroupName) // 0x71C675
{
    mangled_assert("?SobGroup_SubSystemSelected@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71C675(sobGroupName);
    return __result;
}

_extern __int32 _sub_71C26A(char const *);
__int32 SobGroup_ResearchModuleExistOrSelected(char const *sobGroupName) // 0x71C26A
{
    mangled_assert("?SobGroup_ResearchModuleExistOrSelected@@YGHPBD@Z");
    todo("implement");
    __int32 __result = _sub_71C26A(sobGroupName);
    return __result;
}

_extern bool _sub_71A19D(char const *, unsigned __int32);
bool SobGroup_AssignedToGroup(char const *sobGroupName, unsigned __int32 group) // 0x71A19D
{
    mangled_assert("?SobGroup_AssignedToGroup@@YG_NPBDI@Z");
    todo("implement");
    bool __result = _sub_71A19D(sobGroupName, group);
    return __result;
}

_extern unsigned __int32 _sub_71B1F3(char const *);
unsigned __int32 SobGroup_GetTactics(char const *sobGroupName) // 0x71B1F3
{
    mangled_assert("?SobGroup_GetTactics@@YGIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_71B1F3(sobGroupName);
    return __result;
}

_extern bool _sub_71BC8E(char const *, char const *);
bool SobGroup_IsGuardingSobGroup(char const *guardingSobGroupName, char const *targetSobGroupName) // 0x71BC8E
{
    mangled_assert("?SobGroup_IsGuardingSobGroup@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71BC8E(guardingSobGroupName, targetSobGroupName);
    return __result;
}

_extern bool _sub_71BAF7(char const *, unsigned __int32);
bool SobGroup_IsDoingAbility(char const *sobGroupName, unsigned __int32 ability) // 0x71BAF7
{
    mangled_assert("?SobGroup_IsDoingAbility@@YG_NPBDI@Z");
    todo("implement");
    bool __result = _sub_71BAF7(sobGroupName, ability);
    return __result;
}

_extern bool _sub_71A26F(char const *, unsigned __int32);
bool SobGroup_CanDoAbility(char const *sobGroupName, unsigned __int32 ability) // 0x71A26F
{
    mangled_assert("?SobGroup_CanDoAbility@@YG_NPBDI@Z");
    todo("implement");
    bool __result = _sub_71A26F(sobGroupName, ability);
    return __result;
}

_extern bool _sub_71B46C(char const *, char const *);
bool SobGroup_HasUpgrade(char const *sobGroupName, char const *upgradeName) // 0x71B46C
{
    mangled_assert("?SobGroup_HasUpgrade@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71B46C(sobGroupName, upgradeName);
    return __result;
}

_extern bool _sub_71BDCD(unsigned __int32, char const *);
bool SobGroup_IsInControlGroup(unsigned __int32 ctrlGroup, char const *sobGroupName) // 0x71BDCD
{
    mangled_assert("?SobGroup_IsInControlGroup@@YG_NIPBD@Z");
    todo("implement");
    bool __result = _sub_71BDCD(ctrlGroup, sobGroupName);
    return __result;
}

_extern bool _sub_71B6BA(char const *, char const *);
bool SobGroup_IsBuilding(char const *sobGroupName, char const *sobName) // 0x71B6BA
{
    mangled_assert("?SobGroup_IsBuilding@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71B6BA(sobGroupName, sobName);
    return __result;
}

_extern bool _sub_71C7BF(char const *);
bool SobGroup_UnderAttack(char const *sobGroupName) // 0x71C7BF
{
    mangled_assert("?SobGroup_UnderAttack@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_71C7BF(sobGroupName);
    return __result;
}

_extern void _sub_71A8D2(char const *, char const *);
void SobGroup_GetAttackers(char const *sobGroupName, char const *outputSobGroupName) // 0x71A8D2
{
    mangled_assert("?SobGroup_GetAttackers@@YGXPBD0@Z");
    todo("implement");
    _sub_71A8D2(sobGroupName, outputSobGroupName);
}

_extern bool _sub_7199E7(char const *);
bool SobGroup_AreAllInHyperspace(char const *sobGroupName) // 0x7199E7
{
    mangled_assert("?SobGroup_AreAllInHyperspace@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_7199E7(sobGroupName);
    return __result;
}

_extern bool _sub_719A6B(char const *);
bool SobGroup_AreAllInRealSpace(char const *sobGroupName) // 0x719A6B
{
    mangled_assert("?SobGroup_AreAllInRealSpace@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_719A6B(sobGroupName);
    return __result;
}

_extern void _sub_71AFDF(char const *, char const *);
void SobGroup_GetSobGroupSalvagingGroup(char const *sobGroupName, char const *outputSobGroupName) // 0x71AFDF
{
    mangled_assert("?SobGroup_GetSobGroupSalvagingGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_71AFDF(sobGroupName, outputSobGroupName);
}

_extern void _sub_71AD6E(char const *, char const *);
void SobGroup_GetSobGroupCapturingGroup(char const *sobGroupName, char const *outputSobGroupName) // 0x71AD6E
{
    mangled_assert("?SobGroup_GetSobGroupCapturingGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_71AD6E(sobGroupName, outputSobGroupName);
}

_extern void _sub_71AF37(char const *, char const *);
void SobGroup_GetSobGroupRepairingGroup(char const *sobGroupName, char const *outputSobGroupName) // 0x71AF37
{
    mangled_assert("?SobGroup_GetSobGroupRepairingGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_71AF37(sobGroupName, outputSobGroupName);
}

_extern void _sub_71AC53(char const *, char const *);
void SobGroup_GetSobGroupBeingCapturedGroup(char const *sobGroupName, char const *outputSobGroupName) // 0x71AC53
{
    mangled_assert("?SobGroup_GetSobGroupBeingCapturedGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_71AC53(sobGroupName, outputSobGroupName);
}

_extern bool _sub_719AF7(char const *, char const *);
bool SobGroup_AreAnyFromTheseAttackFamilies(char const *sobGroupName, char const *families) // 0x719AF7
{
    mangled_assert("?SobGroup_AreAnyFromTheseAttackFamilies@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_719AF7(sobGroupName, families);
    return __result;
}

_extern bool _sub_719C7B(char const *, char const *);
bool SobGroup_AreAnyOfTheseTypes(char const *sobGroupName, char const *shipNames) // 0x719C7B
{
    mangled_assert("?SobGroup_AreAnyOfTheseTypes@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_719C7B(sobGroupName, shipNames);
    return __result;
}

/* ---------- private code */
#endif

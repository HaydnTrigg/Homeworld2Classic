#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\noncopyable.hpp>
#include <deque>
#include <Engine\weaponTargetInfo.h>
#include <xstring>
#include <Engine\SobFactory.h>
#include <xmemory0>
#include <Engine\CaptureManager.h>
#include <seInterface2\SampleID.h>
#include <xfunctional>
#include <Scar\pch.h>
#include <Engine\LatchPointManager.h>
#include <seInterface2\SampleBase.h>
#include <memory\memorylib.h>
#include <Engine\Waypoint.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <Engine\RenderAnim\RenderModelInstance.h>
#include <Mathlib\luamathbinding.h>
#include <bitset>
#include <Engine\RenderAnim\EffectAnimationList.h>
#include <Collision\Primitives\sphere.h>
#include <Engine\RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <Engine\FamilyListMgr.h>
#include <Camera\OrbitParameters.h>
#include <Engine\App\Hw2Identify.h>
#include <luaconfig\luabinding.h>
#include <memory\memorysmall.h>
#include <Engine\FamilyList.h>
#include <Engine\Family.h>
#include <localizer\localizer.h>
#include <Mathlib\matrix4.h>
#include <Engine\SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Engine\MultiplierContainer.h>
#include <Mathlib\matvec.h>
#include <Engine\visibility.h>
#include <Engine\MeshAnimation.h>
#include <new>
#include <Engine\MultiplierTypes.h>
#include <Engine\campaign.h>
#include <exception>
#include <Engine\ShieldTypes.h>
#include <Engine\scripting.h>
#include <xstddef>
#include <Engine\scriptaccess.h>
#include <type_traits>
#include <Engine\scripttypedef.h>
#include <Engine\MainUI.h>
#include <Engine\gamemsg.h>
#include <Engine\Selector.h>
#include <Render\gl\r_defines.h>
#include <Engine\MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <queue>
#include <Engine\Subsystems\HardPointManager.h>
#include <algorithm>
#include <xutility>
#include <Engine\Subsystems\HardPoint.h>
#include <Engine\FormHyperspaceGateCommand.h>
#include <Engine\Graphics\TeamColour.h>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Engine\DynamicPoint.h>
#include <boost\scoped_array.hpp>
#include <utility>
#include <Engine\Subsystems\SubSystemType.h>
#include <iosfwd>
#include <boost\config.hpp>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <map>
#include <Engine\Race.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <xtree>
#include <Engine\Modifiers\ModifierEffect.h>
#include <xmemory>
#include <platform\timer.h>
#include <seInterface2\sedefinesshared.h>
#include <cstdarg>
#include <Engine\Parade.h>
#include <stdarg.h>
#include <Engine\CameraCommand.h>
#include <Engine\CameraHW.h>
#include <Scar\LuaSobGroupActions.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <math.h>
#include <Scar\GameQuery.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Engine\BuildManager.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <debug\ctassert.h>
#include <Scar\GameUtility.h>
#include <Engine\playerresourcetype.h>
#include <Engine\Subsystems\Subsystem.h>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\BuildQueue.h>
#include <Engine\Subsystems\SubsystemStatic.h>
#include <Engine\BuildData.h>
#include <boost\cstdint.hpp>
#include <Engine\SOBGroup.h>
#include <vector>
#include <Engine\weaponstaticinfo.h>
#include <Engine\DependencyData.h>
#include <Scar\Scar.h>
#include <Engine\GunBinding.h>
#include <lua\lua.h>
#include <Scar\ScarEventSys.h>
#include <Engine\SquadronList.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\detail\workaround.hpp>
#include <Engine\Collision\Collision.h>
#include <Mathlib\quat.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Mathlib\LinearInterp.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\BattleScar\BattleScarStats.h>
#include <Engine\Squadron.h>
#include <util\colour.h>
#include <Engine\DockCommand.h>
#include <Engine\BattleScar\BattleScarManager.h>
#include <Engine\ProfileSystem.h>
#include <Engine\sobid.h>
#include <Engine\command.h>
#include <Engine\ship.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\Decal\DecalManager.h>
#include <Engine\SobWithMesh.h>
#include <Engine\Decal\VertexPool.h>
#include <Engine\SobRigidBody.h>
#include <Engine\MoveCommand.h>
#include <Engine\SobRigidBodyStatic.h>
#include <Engine\MADState.h>
#include <Engine\orders.h>
#include <Engine\orders_base.h>
#include <Engine\Player.h>
#include <Mathlib\vector2.h>
#include <Engine\sobtypes.h>
#include <Engine\Volume.h>
#include <Engine\ResearchManager.h>
#include <util\types.h>
#include <Scar\LuaRuleSystem.h>
#include <Engine\VolumeStatic.h>
#include <Collision\primitivesfwd.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Engine\Sphere.h>
#include <Engine\Ship\Formation.h>
#include <Engine\SimVis\RenderModelVis.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\SimVis\SobVis.h>
#include <Engine\ParadeCommand.h>
#include <Engine\commandtype.h>
#include <Engine\SelTarg.h>
#include <seInterface2\PatchID.h>
#include <Engine\prim.h>
#include <seInterface2\SoundParams.h>
#include <Engine\Universe.h>
#include <Engine\savegamedef.h>
#include <Engine\shipHold.h>
#include <boost\shared_ptr.hpp>
#include <assist\typemagic.h>
#include <boost\throw_exception.hpp>
#include <Engine\shipstatic.h>
#include <Engine\WeaponFire\WeaponFireEvent.h>
#include <Engine\config.h>
#include <boost\detail\shared_count.hpp>
#include <Engine\abilities.h>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Engine\StrikeGroup.h>
#include <boost\detail\lwm_win32.hpp>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\mathlibdll.h>
#include <Engine\selection.h>
#include <Mathlib\fastmath.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <profile\profile.h>
#include <Engine\fixedpoint.h>
#include <boost\utility.hpp>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <iostream>
#include <boost\utility\addressof.hpp>
#include <Render\FxGL\FXManager.h>
#include <util\fixed.h>
#include <Render\FxGL\VarMulti.h>
#include <boost\utility\base_from_member.hpp>
#include <boost\utility_fwd.hpp>
#include <memory\memoryalloc.h>
#include <Engine\SimVis\RenderModelScars.h>
#include <assist\stlexsmallvector.h>
#include <Engine\Tactics.h>
#include <Engine\task.h>
#include <stack>
#include <Engine\OrderFeedback.h>
#include <Engine\RenderAnim\MarkerInstance.h>
#include <set>
#include <Mathlib\mathutil.h>
#include <Engine\EngineTrailSystem.h>
#include <list>
#include <Engine\DeSpawnCommand.h>
#include <wchar.h>
#include <boost\shared_array.hpp>
#include <string>
#include <Engine\HyperSpaceCommand.h>
#include <Engine\AutoFormation\DestinationFormation.h>
#include <Engine\HyperSpaceBaseCommand.h>
#include <Engine\weaponinfo.h>
#include <boost\next_prior.hpp>
#include <debug\db.h>
#include <Engine\AttackCommand.h>
#include <Engine\LayMinesCommand.h>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <Engine\AxisAlignBox.h>
#include <Engine\AttackStyle.h>

/* ---------- constants */

enum SobGroup_FillShipsByFamily::__l8::FamilyToSearch
{
    F2S_NoFamily = 0,
    F2S_AttackFamily,
    F2S_BuildFamily,
};

/* ---------- definitions */

class luasobgroupaction::EnterHyperSpace
{
public:
    _inline EnterHyperSpace(bool);
    void operator()(Squadron *) const;
private:
    bool m_useHyperspaceLogic; // 0x0
};
static_assert(sizeof(luasobgroupaction::EnterHyperSpace) == 1, "Invalid luasobgroupaction::EnterHyperSpace size");

class luasobgroupaction::SetHealth :
    public std::binary_function<Squadron *,float const ,void>
{
public:
    void operator()(Squadron *, float const) const;
};
static_assert(sizeof(luasobgroupaction::SetHealth) == 1, "Invalid luasobgroupaction::SetHealth size");

class luasobgroupaction::TakeDamage :
    public std::binary_function<Squadron *,float const ,void>
{
public:
    void operator()(Squadron *, float const) const;
};
static_assert(sizeof(luasobgroupaction::TakeDamage) == 1, "Invalid luasobgroupaction::TakeDamage size");

class luasobgroupaction::FillBattleScar :
    public std::binary_function<Squadron *,std::pair<char const *,int> const ,void>
{
public:
    void operator()(Squadron *, std::pair<char const *,int> const) const;
};
static_assert(sizeof(luasobgroupaction::FillBattleScar) == 1, "Invalid luasobgroupaction::FillBattleScar size");

class luasobgroupaction::SetHidden :
    public std::binary_function<Squadron *,bool,void>
{
public:
    void operator()(Squadron *, bool) const;
};
static_assert(sizeof(luasobgroupaction::SetHidden) == 1, "Invalid luasobgroupaction::SetHidden size");

typedef `anonymous-namespace'::LuaTeamActionsLib ?A0x1e352320::LuaTeamActionsLib;

class `anonymous-namespace'::LuaTeamActionsLib :
    public LuaLibrary
{
public:
    LuaTeamActionsLib(`anonymous-namespace'::LuaTeamActionsLib const &); /* compiler_generated() */
    LuaTeamActionsLib();
    virtual ~LuaTeamActionsLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaTeamActionsLib &operator=(`anonymous-namespace'::LuaTeamActionsLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaTeamActionsLib) == 16, "Invalid `anonymous-namespace'::LuaTeamActionsLib size");

/* ---------- prototypes */

extern void SobGroup_AvoidanceIgnore(char const *sobGroupName, char const *ignoreGroupName);
extern void SobGroup_ResetAvoidanceIgnore(char const *sobGroupName);
extern void SobGroup_Move(unsigned __int32 playerIndex, char const *sobGroupName, char const *ptName);
extern void SobGroup_MoveToSobGroup(char const *sobGroupNameBeingMove, char const *sobGroupNameMovingTo);
extern void SobGroup_Resource(unsigned __int32 playerIndex, char const *sobGroupName);
extern void SobGroup_Stop(unsigned __int32 playerIndex, char const *sobGroupName);
extern void SobGroup_Attack(unsigned __int32 playerIndex, char const *sobGroupAttackersName, char const *sobGroupTargetName);
extern void SobGroup_AttackPlayer(char const *sobGroupName, unsigned __int32 playerIndex);
extern void SobGroup_SwitchOwner(char const *sobGroupName, unsigned __int32 playerIndex);
extern void DockHelper(char const *sobGroupName, char const *sobDockToGroundName, bool stayDocked);
extern void SobGroup_DockSobGroup(char const *sobGroupName, char const *sobDockToGroundName);
extern void SobGroup_DockSobGroupAndStayDocked(char const *sobGroupName, char const *sobDockToGroundName);
extern void SobGroup_ParadeSobGroup(char const *sobGroupName, char const *sobParadeRoundName, unsigned __int32 paradeMode);
extern void SobGroup_ChangePower(char const *sobGroupName, char const *weaponName, bool weaponPower);
extern void SobGroup_Launch(char const *sobGroupNameToLaunch, char const *sobGroupNameToLaunchFrom);
extern void SobGroup_SetAutoLaunch(char const *sobGroupName, unsigned __int32 launchSetting);
extern __int32 SobGroup_OwnedBy(char const *sobGroupName);
extern void SobGroup_AttackSobGroupHardPoint(char const *sobGroupName, char const *sobGroupTargetName, char const *targetHardPoint);
extern void SobGroup_CaptureSobGroup(char const *sobGroupName, char const *sobGroupTargetName);
extern void SobGroup_GuardSobGroup(char const *sobGroupName, char const *sobGroupNameToGuard);
extern float SobGroup_GetHardPointHealth(char const *sobGroupName, char const *hardPointName);
extern void SobGroup_SetHardPointHealth(char const *sobGroupName, char const *hardPointName, float newHealth);
extern bool SobGroup_CreateSubSystem(char const *sobGroupName, char const *subSystemName);
extern void SobGroup_ExitHyperSpace(char const *sobGroupName, char const *volumeName);
extern void SobGroup_ExitHyperSpaceSobGroup(char const *sobGroupNameToExit, char const *sobGroupNameExitCloseTo, float proximity);
extern void SobGroup_EnterHyperSpaceOffMap(char const *sobGroupName);
extern void SobGroup_Despawn(char const *sobGroupName);
extern void SobGroup_Spawn(char const *sobGroupName, char const *volumeName);
extern char const *SobGroup_CreateShip(char const *sobGroupName, char const *shipName);
extern void SobGroup_DockSobGroupInstant(char const *sobGroupNameDocking, char const *sobGroupNameDockWith);
extern void SobGroup_Clear(char const *sobGroupName);
extern void SobGroup_DoDamageProximitySobGroup(char const *sobGroupName, unsigned __int32 playerIndex, float damage, float proximity);
extern void SobGroup_UseHyperspaceGate(char const *sobGroupName, char const *hyperspaceGateName);
extern void SobGroup_FormHyperspaceGate(char const *sobGroupStartName, char const *sobGroupEndName);
extern void SobGroup_Create(char const *sobGroupName);
extern void SobGroup_FillShipsByType(char const *sobGroupNameToFill, char const *sobGroupName, char const *shipTypeName);
extern void SobGroup_FillShipsByFamily(char const *sobGroupNameToFill, char const *sobGroupName, char const *familyName, char const *familyMemberName);
extern void SobGroup_RemoveType(char const *sobGroupName, char const *shipTypeName);
extern void SobGroup_FillUnion(char const *sobGroupOutName, char const *sobGroupName1, char const *sobGroupName2);
extern void SobGroup_FillSubstract(char const *sobGroupNameReturn, char const *sobGroupName1, char const *sobGroupName2);
extern void SobGroup_SobGroupAdd(char const *sobGroupName1, char const *sobGroupName2);
extern void SobGroup_FillCompare(char const *sobGroupOutName, char const *sobGroupName1, char const *sobGroupName2);
extern void SobGroup_FollowPath(char const *sobGroupName, char const *pathName, bool forward, bool loop, bool attackMove);
extern void SobGroup_SetCaptureState(char const *sobGroupName, unsigned __int32 state);
extern void SobGroup_SetTactics(char const *sobGroupName, unsigned __int32 tactics);
extern void SobGroup_SpawnNewShipInSobGroup(__int32 playerIndex, char const *shipType, char const *squadronName, char const *sobGroupToAddToName, char const *volumeName);
extern void SobGroup_DeployMines(char const *sobGroupName, char const *volumeName, float density);
extern void SobGroup_RestrictBuildOption(char const *sobGroupName, char const *buildTypeName);
extern void SobGroup_UnRestrictBuildOption(char const *sobGroupName, char const *buildTypeName);
extern void SobGroup_FormStrikeGroup(char const *sobGroupName, char const *strikeGroupFormationName);
extern bool SobGroup_SetFiredAtSobGroup(char const *sobGroupFiringName, char const *sobGroupBeingShotName, char const *weaponBeingFiredName);
extern void SobGroup_SetHealth(char const *sobGroupName, float healthPercentage);
extern void SobGroup_SetHidden(char const *sobGroupName, __int32 bHidden);
extern void SobGroup_TakeDamage(char const *sobGroupName, float damagePercentage);
extern void SobGroup_FillBattleScar(char const *sobGroupName, char const *scarTypeName);
extern void SobGroup_FillBattleScar_Debug(char const *sobGroupName, char const *scarTypeName, __int32 maxNumScars);
extern void SobGroup_SalvageSobGroup(char const *sobGroupName, char const *targetSobGroupName);
extern void SobGroup_RepairSobGroup(char const *repairingSobGroupName, char const *targetName);
extern void SobGroup_SelectSobGroup(char const *sobGroupName);
extern void SobGroup_DeSelectAll();
extern void SobGroup_ForceStayDockedIfDocking(char const *sobGroupName);
extern void SobGroup_AbilityActivate(char const *sobGroupName, unsigned __int32 ability, bool activate);
extern void SobGroup_LoadPersistantData(char const *ShipToParadeRoundTypeName);
extern void dummyAnimCallback(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event);
extern void SobGroup_SetMadState(char const *sobGroupName, char const *stateName);
extern void SobGroup_ManualEngineGlow(char const *sobGroupName, float thrust);
extern void SobGroup_AutoEngineGlow(char const *sobGroupName);
extern void SobGroup_AllowPassiveActionsAlways(char const *sobGroupName, bool set);
extern void SobGroup_SetInvulnerability(char const *sobGroupName, bool on);
extern void SobGroup_SetInvulnerabilityOfHardPoint(char const *sobGroupName, char const *hardPointName, bool on);
extern void SobGroup_Kamikaze(char const *sobGroupName, char const *targetGroupName);
extern void SobGroup_SetSwitchOwnerFlag(char const *sobGroupName, bool flag);
extern float SobGroup_SetBuildSpeedMultiplier(char const *sobGroupName, float newMult);
extern void SobGroup_SetAsDeployed(char const *sobGroupName);
extern void SobGroup_SetTeamColours(char const *sobGroupName, vector3 baseColour, vector3 stripeColour, char const *badgeName);
extern void SobGroup_SetCaptureAlwaysDisables(char const *sobGroupName, bool alwaysDisable);
extern void SobGroup_SetDisplayedRestrictedHardpoint(char const *sobGroupName, unsigned __int32 nbSlot);
extern void SobGroup_MakeSelectable(char const *sobGroupName, bool bSelectable);
extern bool SobGroup_IsSelectable(char const *sobGroupName);
extern void SobGroup_MakeUntargeted(char const *sobGroupName);
extern bool SobGroup_InWorldBound(char const *sobGroupName, bool bInner);

_static void exitHyperspace(SquadronList const &list, vector3 const &destination, bool useEffects);

/* ---------- globals */

extern char const *LUALIB_TEAMACTIONS; // 0x8429D8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_71D871(luasobgroupaction::EnterHyperSpace *const, bool);
_inline luasobgroupaction::EnterHyperSpace::EnterHyperSpace(bool) // 0x71D871
{
    mangled_assert("??0EnterHyperSpace@luasobgroupaction@@QAE@_N@Z");
    todo("implement");
    _sub_71D871(this, arg);
}

_extern void _sub_71D8BD(LuaBinding::ObjInternal2<char const *,unsigned int,void,LuaBinding::Functor2Free<char const *,unsigned int,void> > *const);
_inline LuaBinding::ObjInternal2<char const *,unsigned int,void,LuaBinding::Functor2Free<char const *,unsigned int,void> >::~ObjInternal2<char const *,unsigned int,void,LuaBinding::Functor2Free<char const *,unsigned int,void> >() // 0x71D8BD
{
    mangled_assert("??1?$ObjInternal2@PBDIXV?$Functor2Free@PBDIX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8BD(this);
}

_extern void _sub_71D8C3(LuaBinding::ObjInternal2<char const *,float,float,LuaBinding::Functor2Free<char const *,float,float> > *const);
_inline LuaBinding::ObjInternal2<char const *,float,float,LuaBinding::Functor2Free<char const *,float,float> >::~ObjInternal2<char const *,float,float,LuaBinding::Functor2Free<char const *,float,float> >() // 0x71D8C3
{
    mangled_assert("??1?$ObjInternal2@PBDMMV?$Functor2Free@PBDMM@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8C3(this);
}

_extern void _sub_71DB5F(luasobgroupaction::EnterHyperSpace const *const, Squadron *);
_inline void luasobgroupaction::EnterHyperSpace::operator()(Squadron *) const // 0x71DB5F
{
    mangled_assert("??REnterHyperSpace@luasobgroupaction@@QBEXPAVSquadron@@@Z");
    todo("implement");
    _sub_71DB5F(this, arg);
}

_extern void _sub_71D8C9(LuaBinding::ObjInternal2<char const *,char const *,float,LuaBinding::Functor2Free<char const *,char const *,float> > *const);
_inline LuaBinding::ObjInternal2<char const *,char const *,float,LuaBinding::Functor2Free<char const *,char const *,float> >::~ObjInternal2<char const *,char const *,float,LuaBinding::Functor2Free<char const *,char const *,float> >() // 0x71D8C9
{
    mangled_assert("??1?$ObjInternal2@PBDPBDMV?$Functor2Free@PBDPBDM@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8C9(this);
}

_extern void _sub_71D8CF(LuaBinding::ObjInternal2<char const *,char const *,char const *,LuaBinding::Functor2Free<char const *,char const *,char const *> > *const);
_inline LuaBinding::ObjInternal2<char const *,char const *,char const *,LuaBinding::Functor2Free<char const *,char const *,char const *> >::~ObjInternal2<char const *,char const *,char const *,LuaBinding::Functor2Free<char const *,char const *,char const *> >() // 0x71D8CF
{
    mangled_assert("??1?$ObjInternal2@PBDPBDPBDV?$Functor2Free@PBDPBDPBD@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8CF(this);
}

_extern void _sub_71D8D5(LuaBinding::ObjInternal3<unsigned int,char const *,char const *,void,LuaBinding::Functor3Free<unsigned int,char const *,char const *,void> > *const);
_inline LuaBinding::ObjInternal3<unsigned int,char const *,char const *,void,LuaBinding::Functor3Free<unsigned int,char const *,char const *,void> >::~ObjInternal3<unsigned int,char const *,char const *,void,LuaBinding::Functor3Free<unsigned int,char const *,char const *,void> >() // 0x71D8D5
{
    mangled_assert("??1?$ObjInternal3@IPBDPBDXV?$Functor3Free@IPBDPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8D5(this);
}

_extern void _sub_71D8DB(LuaBinding::ObjInternal3<char const *,unsigned int,bool,void,LuaBinding::Functor3Free<char const *,unsigned int,bool,void> > *const);
_inline LuaBinding::ObjInternal3<char const *,unsigned int,bool,void,LuaBinding::Functor3Free<char const *,unsigned int,bool,void> >::~ObjInternal3<char const *,unsigned int,bool,void,LuaBinding::Functor3Free<char const *,unsigned int,bool,void> >() // 0x71D8DB
{
    mangled_assert("??1?$ObjInternal3@PBDI_NXV?$Functor3Free@PBDI_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8DB(this);
}

_extern void _sub_71D8E1(LuaBinding::ObjInternal3<char const *,char const *,int,void,LuaBinding::Functor3Free<char const *,char const *,int,void> > *const);
_inline LuaBinding::ObjInternal3<char const *,char const *,int,void,LuaBinding::Functor3Free<char const *,char const *,int,void> >::~ObjInternal3<char const *,char const *,int,void,LuaBinding::Functor3Free<char const *,char const *,int,void> >() // 0x71D8E1
{
    mangled_assert("??1?$ObjInternal3@PBDPBDHXV?$Functor3Free@PBDPBDHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8E1(this);
}

_extern void _sub_71D8E7(LuaBinding::ObjInternal3<char const *,char const *,float,void,LuaBinding::Functor3Free<char const *,char const *,float,void> > *const);
_inline LuaBinding::ObjInternal3<char const *,char const *,float,void,LuaBinding::Functor3Free<char const *,char const *,float,void> >::~ObjInternal3<char const *,char const *,float,void,LuaBinding::Functor3Free<char const *,char const *,float,void> >() // 0x71D8E7
{
    mangled_assert("??1?$ObjInternal3@PBDPBDMXV?$Functor3Free@PBDPBDMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8E7(this);
}

_extern void _sub_71D8ED(LuaBinding::ObjInternal3<char const *,char const *,char const *,void,LuaBinding::Functor3Free<char const *,char const *,char const *,void> > *const);
_inline LuaBinding::ObjInternal3<char const *,char const *,char const *,void,LuaBinding::Functor3Free<char const *,char const *,char const *,void> >::~ObjInternal3<char const *,char const *,char const *,void,LuaBinding::Functor3Free<char const *,char const *,char const *,void> >() // 0x71D8ED
{
    mangled_assert("??1?$ObjInternal3@PBDPBDPBDXV?$Functor3Free@PBDPBDPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8ED(this);
}

_extern void _sub_71D8F3(LuaBinding::ObjInternal4<char const *,unsigned int,float,float,void,LuaBinding::Functor4Free<char const *,unsigned int,float,float,void> > *const);
_inline LuaBinding::ObjInternal4<char const *,unsigned int,float,float,void,LuaBinding::Functor4Free<char const *,unsigned int,float,float,void> >::~ObjInternal4<char const *,unsigned int,float,float,void,LuaBinding::Functor4Free<char const *,unsigned int,float,float,void> >() // 0x71D8F3
{
    mangled_assert("??1?$ObjInternal4@PBDIMMXV?$Functor4Free@PBDIMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8F3(this);
}

_extern void _sub_71D8F9(LuaBinding::ObjInternal4<char const *,char const *,char const *,char const *,void,LuaBinding::Functor4Free<char const *,char const *,char const *,char const *,void> > *const);
_inline LuaBinding::ObjInternal4<char const *,char const *,char const *,char const *,void,LuaBinding::Functor4Free<char const *,char const *,char const *,char const *,void> >::~ObjInternal4<char const *,char const *,char const *,char const *,void,LuaBinding::Functor4Free<char const *,char const *,char const *,char const *,void> >() // 0x71D8F9
{
    mangled_assert("??1?$ObjInternal4@PBDPBDPBDPBDXV?$Functor4Free@PBDPBDPBDPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8F9(this);
}

_extern void _sub_71D8FF(LuaBinding::ObjInternal4<char const *,vector3,vector3,char const *,void,LuaBinding::Functor4Free<char const *,vector3,vector3,char const *,void> > *const);
_inline LuaBinding::ObjInternal4<char const *,vector3,vector3,char const *,void,LuaBinding::Functor4Free<char const *,vector3,vector3,char const *,void> >::~ObjInternal4<char const *,vector3,vector3,char const *,void,LuaBinding::Functor4Free<char const *,vector3,vector3,char const *,void> >() // 0x71D8FF
{
    mangled_assert("??1?$ObjInternal4@PBDVvector3@@V1@PBDXV?$Functor4Free@PBDVvector3@@V1@PBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D8FF(this);
}

_extern void _sub_71D905(LuaBinding::ObjInternal5<int,char const *,char const *,char const *,char const *,void,LuaBinding::Functor5Free<int,char const *,char const *,char const *,char const *,void> > *const);
_inline LuaBinding::ObjInternal5<int,char const *,char const *,char const *,char const *,void,LuaBinding::Functor5Free<int,char const *,char const *,char const *,char const *,void> >::~ObjInternal5<int,char const *,char const *,char const *,char const *,void,LuaBinding::Functor5Free<int,char const *,char const *,char const *,char const *,void> >() // 0x71D905
{
    mangled_assert("??1?$ObjInternal5@HPBDPBDPBDPBDXV?$Functor5Free@HPBDPBDPBDPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D905(this);
}

_extern void _sub_71D90B(LuaBinding::ObjInternal5<char const *,char const *,bool,bool,bool,void,LuaBinding::Functor5Free<char const *,char const *,bool,bool,bool,void> > *const);
_inline LuaBinding::ObjInternal5<char const *,char const *,bool,bool,bool,void,LuaBinding::Functor5Free<char const *,char const *,bool,bool,bool,void> >::~ObjInternal5<char const *,char const *,bool,bool,bool,void,LuaBinding::Functor5Free<char const *,char const *,bool,bool,bool,void> >() // 0x71D90B
{
    mangled_assert("??1?$ObjInternal5@PBDPBD_N_N_NXV?$Functor5Free@PBDPBD_N_N_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_71D90B(this);
}

_extern void _sub_71DBC2(luasobgroupaction::SetHealth const *const, Squadron *, float const);
_inline void luasobgroupaction::SetHealth::operator()(Squadron *, float const) const // 0x71DBC2
{
    mangled_assert("??RSetHealth@luasobgroupaction@@QBEXPAVSquadron@@M@Z");
    todo("implement");
    _sub_71DBC2(this, arg, arg);
}

_extern void _sub_71DBFD(luasobgroupaction::TakeDamage const *const, Squadron *, float const);
_inline void luasobgroupaction::TakeDamage::operator()(Squadron *, float const) const // 0x71DBFD
{
    mangled_assert("??RTakeDamage@luasobgroupaction@@QBEXPAVSquadron@@M@Z");
    todo("implement");
    _sub_71DBFD(this, arg, arg);
}

_extern void _sub_71DB81(luasobgroupaction::FillBattleScar const *const, Squadron *, std::pair<char const *,int> const);
_inline void luasobgroupaction::FillBattleScar::operator()(Squadron *, std::pair<char const *,int> const) const // 0x71DB81
{
    mangled_assert("??RFillBattleScar@luasobgroupaction@@QBEXPAVSquadron@@U?$pair@PBDH@std@@@Z");
    todo("implement");
    _sub_71DB81(this, arg, arg);
}

_extern void _sub_71DBED(luasobgroupaction::SetHidden const *const, Squadron *, bool);
_inline void luasobgroupaction::SetHidden::operator()(Squadron *, bool) const // 0x71DBED
{
    mangled_assert("??RSetHidden@luasobgroupaction@@QBEXPAVSquadron@@_N@Z");
    todo("implement");
    _sub_71DBED(this, arg, arg);
}

_extern void _sub_71FBBF(char const *, char const *);
void SobGroup_AvoidanceIgnore(char const *sobGroupName, char const *ignoreGroupName) // 0x71FBBF
{
    mangled_assert("?SobGroup_AvoidanceIgnore@@YGXPBD0@Z");
    todo("implement");
    _sub_71FBBF(sobGroupName, ignoreGroupName);
}

_extern void _sub_7221D9(char const *);
void SobGroup_ResetAvoidanceIgnore(char const *sobGroupName) // 0x7221D9
{
    mangled_assert("?SobGroup_ResetAvoidanceIgnore@@YGXPBD@Z");
    todo("implement");
    _sub_7221D9(sobGroupName);
}

_extern void _sub_721B66(unsigned __int32, char const *, char const *);
void SobGroup_Move(unsigned __int32 playerIndex, char const *sobGroupName, char const *ptName) // 0x721B66
{
    mangled_assert("?SobGroup_Move@@YGXIPBD0@Z");
    todo("implement");
    _sub_721B66(playerIndex, sobGroupName, ptName);
}

_extern void _sub_721C57(char const *, char const *);
void SobGroup_MoveToSobGroup(char const *sobGroupNameBeingMove, char const *sobGroupNameMovingTo) // 0x721C57
{
    mangled_assert("?SobGroup_MoveToSobGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_721C57(sobGroupNameBeingMove, sobGroupNameMovingTo);
}

_extern void _sub_722238(unsigned __int32, char const *);
void SobGroup_Resource(unsigned __int32 playerIndex, char const *sobGroupName) // 0x722238
{
    mangled_assert("?SobGroup_Resource@@YGXIPBD@Z");
    todo("implement");
    _sub_722238(playerIndex, sobGroupName);
}

_extern void _sub_72336C(unsigned __int32, char const *);
void SobGroup_Stop(unsigned __int32 playerIndex, char const *sobGroupName) // 0x72336C
{
    mangled_assert("?SobGroup_Stop@@YGXIPBD@Z");
    todo("implement");
    _sub_72336C(playerIndex, sobGroupName);
}

_extern void _sub_71F78B(unsigned __int32, char const *, char const *);
void SobGroup_Attack(unsigned __int32 playerIndex, char const *sobGroupAttackersName, char const *sobGroupTargetName) // 0x71F78B
{
    mangled_assert("?SobGroup_Attack@@YGXIPBD0@Z");
    todo("implement");
    _sub_71F78B(playerIndex, sobGroupAttackersName, sobGroupTargetName);
}

_extern void _sub_71F8DA(char const *, unsigned __int32);
void SobGroup_AttackPlayer(char const *sobGroupName, unsigned __int32 playerIndex) // 0x71F8DA
{
    mangled_assert("?SobGroup_AttackPlayer@@YGXPBDI@Z");
    todo("implement");
    _sub_71F8DA(sobGroupName, playerIndex);
}

_extern void _sub_723408(char const *, unsigned __int32);
void SobGroup_SwitchOwner(char const *sobGroupName, unsigned __int32 playerIndex) // 0x723408
{
    mangled_assert("?SobGroup_SwitchOwner@@YGXPBDI@Z");
    todo("implement");
    _sub_723408(sobGroupName, playerIndex);
}

_extern void _sub_71E52A(char const *, char const *, bool);
void DockHelper(char const *sobGroupName, char const *sobDockToGroundName, bool stayDocked) // 0x71E52A
{
    mangled_assert("?DockHelper@@YGXPBD0_N@Z");
    todo("implement");
    _sub_71E52A(sobGroupName, sobDockToGroundName, stayDocked);
}

_extern void _sub_72050A(char const *, char const *);
void SobGroup_DockSobGroup(char const *sobGroupName, char const *sobDockToGroundName) // 0x72050A
{
    mangled_assert("?SobGroup_DockSobGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_72050A(sobGroupName, sobDockToGroundName);
}

_extern void _sub_72051C(char const *, char const *);
void SobGroup_DockSobGroupAndStayDocked(char const *sobGroupName, char const *sobDockToGroundName) // 0x72051C
{
    mangled_assert("?SobGroup_DockSobGroupAndStayDocked@@YGXPBD0@Z");
    todo("implement");
    _sub_72051C(sobGroupName, sobDockToGroundName);
}

_extern void _sub_721EA9(char const *, char const *, unsigned __int32);
void SobGroup_ParadeSobGroup(char const *sobGroupName, char const *sobParadeRoundName, unsigned __int32 paradeMode) // 0x721EA9
{
    mangled_assert("?SobGroup_ParadeSobGroup@@YGXPBD0I@Z");
    todo("implement");
    _sub_721EA9(sobGroupName, sobParadeRoundName, paradeMode);
}

_extern void _sub_71FD42(char const *, char const *, bool);
void SobGroup_ChangePower(char const *sobGroupName, char const *weaponName, bool weaponPower) // 0x71FD42
{
    mangled_assert("?SobGroup_ChangePower@@YGXPBD0_N@Z");
    todo("implement");
    _sub_71FD42(sobGroupName, weaponName, weaponPower);
}

_extern void _sub_7217E7(char const *, char const *);
void SobGroup_Launch(char const *sobGroupNameToLaunch, char const *sobGroupNameToLaunchFrom) // 0x7217E7
{
    mangled_assert("?SobGroup_Launch@@YGXPBD0@Z");
    todo("implement");
    _sub_7217E7(sobGroupNameToLaunch, sobGroupNameToLaunchFrom);
}

_extern void _sub_72273B(char const *, unsigned __int32);
void SobGroup_SetAutoLaunch(char const *sobGroupName, unsigned __int32 launchSetting) // 0x72273B
{
    mangled_assert("?SobGroup_SetAutoLaunch@@YGXPBDI@Z");
    todo("implement");
    _sub_72273B(sobGroupName, launchSetting);
}

_extern __int32 _sub_721E33(char const *);
__int32 SobGroup_OwnedBy(char const *sobGroupName) // 0x721E33
{
    mangled_assert("?SobGroup_OwnedBy@@YGHPBD@Z");
    todo("implement");
    __int32 __result = _sub_721E33(sobGroupName);
    return __result;
}

_extern void _sub_71F9DF(char const *, char const *, char const *);
void SobGroup_AttackSobGroupHardPoint(char const *sobGroupName, char const *sobGroupTargetName, char const *targetHardPoint) // 0x71F9DF
{
    mangled_assert("?SobGroup_AttackSobGroupHardPoint@@YGXPBD00@Z");
    todo("implement");
    _sub_71F9DF(sobGroupName, sobGroupTargetName, targetHardPoint);
}

_extern void _sub_71FC6C(char const *, char const *);
void SobGroup_CaptureSobGroup(char const *sobGroupName, char const *sobGroupTargetName) // 0x71FC6C
{
    mangled_assert("?SobGroup_CaptureSobGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_71FC6C(sobGroupName, sobGroupTargetName);
}

_extern void _sub_7214E7(char const *, char const *);
void SobGroup_GuardSobGroup(char const *sobGroupName, char const *sobGroupNameToGuard) // 0x7214E7
{
    mangled_assert("?SobGroup_GuardSobGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_7214E7(sobGroupName, sobGroupNameToGuard);
}

_extern float _sub_72144A(char const *, char const *);
float SobGroup_GetHardPointHealth(char const *sobGroupName, char const *hardPointName) // 0x72144A
{
    mangled_assert("?SobGroup_GetHardPointHealth@@YGMPBD0@Z");
    todo("implement");
    float __result = _sub_72144A(sobGroupName, hardPointName);
    return __result;
}

_extern void _sub_722B76(char const *, char const *, float);
void SobGroup_SetHardPointHealth(char const *sobGroupName, char const *hardPointName, float newHealth) // 0x722B76
{
    mangled_assert("?SobGroup_SetHardPointHealth@@YGXPBD0M@Z");
    todo("implement");
    _sub_722B76(sobGroupName, hardPointName, newHealth);
}

_extern bool _sub_71FED3(char const *, char const *);
bool SobGroup_CreateSubSystem(char const *sobGroupName, char const *subSystemName) // 0x71FED3
{
    mangled_assert("?SobGroup_CreateSubSystem@@YG_NPBD0@Z");
    todo("implement");
    bool __result = _sub_71FED3(sobGroupName, subSystemName);
    return __result;
}

_extern void _sub_720720(char const *, char const *);
void SobGroup_ExitHyperSpace(char const *sobGroupName, char const *volumeName) // 0x720720
{
    mangled_assert("?SobGroup_ExitHyperSpace@@YGXPBD0@Z");
    todo("implement");
    _sub_720720(sobGroupName, volumeName);
}

_extern void _sub_72080F(char const *, char const *, float);
void SobGroup_ExitHyperSpaceSobGroup(char const *sobGroupNameToExit, char const *sobGroupNameExitCloseTo, float proximity) // 0x72080F
{
    mangled_assert("?SobGroup_ExitHyperSpaceSobGroup@@YGXPBD0M@Z");
    todo("implement");
    _sub_72080F(sobGroupNameToExit, sobGroupNameExitCloseTo, proximity);
}

_extern void _sub_7206C4(char const *);
void SobGroup_EnterHyperSpaceOffMap(char const *sobGroupName) // 0x7206C4
{
    mangled_assert("?SobGroup_EnterHyperSpaceOffMap@@YGXPBD@Z");
    todo("implement");
    _sub_7206C4(sobGroupName);
}

_extern void _sub_720328(char const *);
void SobGroup_Despawn(char const *sobGroupName) // 0x720328
{
    mangled_assert("?SobGroup_Despawn@@YGXPBD@Z");
    todo("implement");
    _sub_720328(sobGroupName);
}

_extern void _sub_7231D7(char const *, char const *);
void SobGroup_Spawn(char const *sobGroupName, char const *volumeName) // 0x7231D7
{
    mangled_assert("?SobGroup_Spawn@@YGXPBD0@Z");
    todo("implement");
    _sub_7231D7(sobGroupName, volumeName);
}

_extern char const *_sub_71FE08(char const *, char const *);
char const *SobGroup_CreateShip(char const *sobGroupName, char const *shipName) // 0x71FE08
{
    mangled_assert("?SobGroup_CreateShip@@YGPBDPBD0@Z");
    todo("implement");
    char const * __result = _sub_71FE08(sobGroupName, shipName);
    return __result;
}

_extern void _sub_72052E(char const *, char const *);
void SobGroup_DockSobGroupInstant(char const *sobGroupNameDocking, char const *sobGroupNameDockWith) // 0x72052E
{
    mangled_assert("?SobGroup_DockSobGroupInstant@@YGXPBD0@Z");
    todo("implement");
    _sub_72052E(sobGroupNameDocking, sobGroupNameDockWith);
}

_extern void _sub_71FDAB(char const *);
void SobGroup_Clear(char const *sobGroupName) // 0x71FDAB
{
    mangled_assert("?SobGroup_Clear@@YGXPBD@Z");
    todo("implement");
    _sub_71FDAB(sobGroupName);
}

_extern void _sub_720397(char const *, unsigned __int32, float, float);
void SobGroup_DoDamageProximitySobGroup(char const *sobGroupName, unsigned __int32 playerIndex, float damage, float proximity) // 0x720397
{
    mangled_assert("?SobGroup_DoDamageProximitySobGroup@@YGXPBDIMM@Z");
    todo("implement");
    _sub_720397(sobGroupName, playerIndex, damage, proximity);
}

_extern void _sub_72374E(char const *, char const *);
void SobGroup_UseHyperspaceGate(char const *sobGroupName, char const *hyperspaceGateName) // 0x72374E
{
    mangled_assert("?SobGroup_UseHyperspaceGate@@YGXPBD0@Z");
    todo("implement");
    _sub_72374E(sobGroupName, hyperspaceGateName);
}

_extern void _sub_721281(char const *, char const *);
void SobGroup_FormHyperspaceGate(char const *sobGroupStartName, char const *sobGroupEndName) // 0x721281
{
    mangled_assert("?SobGroup_FormHyperspaceGate@@YGXPBD0@Z");
    todo("implement");
    _sub_721281(sobGroupStartName, sobGroupEndName);
}

_extern void _sub_71FDF7(char const *);
void SobGroup_Create(char const *sobGroupName) // 0x71FDF7
{
    mangled_assert("?SobGroup_Create@@YGXPBD@Z");
    todo("implement");
    _sub_71FDF7(sobGroupName);
}

_extern void _sub_720D8E(char const *, char const *, char const *);
void SobGroup_FillShipsByType(char const *sobGroupNameToFill, char const *sobGroupName, char const *shipTypeName) // 0x720D8E
{
    mangled_assert("?SobGroup_FillShipsByType@@YGXPBD00@Z");
    todo("implement");
    _sub_720D8E(sobGroupNameToFill, sobGroupName, shipTypeName);
}

_extern void _sub_720B94(char const *, char const *, char const *, char const *);
void SobGroup_FillShipsByFamily(char const *sobGroupNameToFill, char const *sobGroupName, char const *familyName, char const *familyMemberName) // 0x720B94
{
    mangled_assert("?SobGroup_FillShipsByFamily@@YGXPBD000@Z");
    todo("implement");
    _sub_720B94(sobGroupNameToFill, sobGroupName, familyName, familyMemberName);
}

_extern void _sub_72200C(char const *, char const *);
void SobGroup_RemoveType(char const *sobGroupName, char const *shipTypeName) // 0x72200C
{
    mangled_assert("?SobGroup_RemoveType@@YGXPBD0@Z");
    todo("implement");
    _sub_72200C(sobGroupName, shipTypeName);
}

_extern void _sub_720FDD(char const *, char const *, char const *);
void SobGroup_FillUnion(char const *sobGroupOutName, char const *sobGroupName1, char const *sobGroupName2) // 0x720FDD
{
    mangled_assert("?SobGroup_FillUnion@@YGXPBD00@Z");
    todo("implement");
    _sub_720FDD(sobGroupOutName, sobGroupName1, sobGroupName2);
}

_extern void _sub_720E5D(char const *, char const *, char const *);
void SobGroup_FillSubstract(char const *sobGroupNameReturn, char const *sobGroupName1, char const *sobGroupName2) // 0x720E5D
{
    mangled_assert("?SobGroup_FillSubstract@@YGXPBD00@Z");
    todo("implement");
    _sub_720E5D(sobGroupNameReturn, sobGroupName1, sobGroupName2);
}

_extern void _sub_723152(char const *, char const *);
void SobGroup_SobGroupAdd(char const *sobGroupName1, char const *sobGroupName2) // 0x723152
{
    mangled_assert("?SobGroup_SobGroupAdd@@YGXPBD0@Z");
    todo("implement");
    _sub_723152(sobGroupName1, sobGroupName2);
}

_extern void _sub_720A8D(char const *, char const *, char const *);
void SobGroup_FillCompare(char const *sobGroupOutName, char const *sobGroupName1, char const *sobGroupName2) // 0x720A8D
{
    mangled_assert("?SobGroup_FillCompare@@YGXPBD00@Z");
    todo("implement");
    _sub_720A8D(sobGroupOutName, sobGroupName1, sobGroupName2);
}

_extern void _sub_7210C8(char const *, char const *, bool, bool, bool);
void SobGroup_FollowPath(char const *sobGroupName, char const *pathName, bool forward, bool loop, bool attackMove) // 0x7210C8
{
    mangled_assert("?SobGroup_FollowPath@@YGXPBD0_N11@Z");
    todo("implement");
    _sub_7210C8(sobGroupName, pathName, forward, loop, attackMove);
}

_extern void _sub_7228E8(char const *, unsigned __int32);
void SobGroup_SetCaptureState(char const *sobGroupName, unsigned __int32 state) // 0x7228E8
{
    mangled_assert("?SobGroup_SetCaptureState@@YGXPBDI@Z");
    todo("implement");
    _sub_7228E8(sobGroupName, state);
}

_extern void _sub_722F41(char const *, unsigned __int32);
void SobGroup_SetTactics(char const *sobGroupName, unsigned __int32 tactics) // 0x722F41
{
    mangled_assert("?SobGroup_SetTactics@@YGXPBDI@Z");
    todo("implement");
    _sub_722F41(sobGroupName, tactics);
}

_extern void _sub_723261(__int32, char const *, char const *, char const *, char const *);
void SobGroup_SpawnNewShipInSobGroup(__int32 playerIndex, char const *shipType, char const *squadronName, char const *sobGroupToAddToName, char const *volumeName) // 0x723261
{
    mangled_assert("?SobGroup_SpawnNewShipInSobGroup@@YGXHPBD000@Z");
    todo("implement");
    _sub_723261(playerIndex, shipType, squadronName, sobGroupToAddToName, volumeName);
}

_extern void _sub_7200C6(char const *, char const *, float);
void SobGroup_DeployMines(char const *sobGroupName, char const *volumeName, float density) // 0x7200C6
{
    mangled_assert("?SobGroup_DeployMines@@YGXPBD0M@Z");
    todo("implement");
    _sub_7200C6(sobGroupName, volumeName, density);
}

_extern void _sub_722303(char const *, char const *);
void SobGroup_RestrictBuildOption(char const *sobGroupName, char const *buildTypeName) // 0x722303
{
    mangled_assert("?SobGroup_RestrictBuildOption@@YGXPBD0@Z");
    todo("implement");
    _sub_722303(sobGroupName, buildTypeName);
}

_extern void _sub_72353A(char const *, char const *);
void SobGroup_UnRestrictBuildOption(char const *sobGroupName, char const *buildTypeName) // 0x72353A
{
    mangled_assert("?SobGroup_UnRestrictBuildOption@@YGXPBD0@Z");
    todo("implement");
    _sub_72353A(sobGroupName, buildTypeName);
}

_extern void _sub_72135A(char const *, char const *);
void SobGroup_FormStrikeGroup(char const *sobGroupName, char const *strikeGroupFormationName) // 0x72135A
{
    mangled_assert("?SobGroup_FormStrikeGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_72135A(sobGroupName, strikeGroupFormationName);
}

_extern bool _sub_722A14(char const *, char const *, char const *);
bool SobGroup_SetFiredAtSobGroup(char const *sobGroupFiringName, char const *sobGroupBeingShotName, char const *weaponBeingFiredName) // 0x722A14
{
    mangled_assert("?SobGroup_SetFiredAtSobGroup@@YG_NPBD00@Z");
    todo("implement");
    bool __result = _sub_722A14(sobGroupFiringName, sobGroupBeingShotName, weaponBeingFiredName);
    return __result;
}

_extern void _sub_722C52(char const *, float);
void SobGroup_SetHealth(char const *sobGroupName, float healthPercentage) // 0x722C52
{
    mangled_assert("?SobGroup_SetHealth@@YGXPBDM@Z");
    todo("implement");
    _sub_722C52(sobGroupName, healthPercentage);
}

_extern void _sub_722CD7(char const *, __int32);
void SobGroup_SetHidden(char const *sobGroupName, __int32 bHidden) // 0x722CD7
{
    mangled_assert("?SobGroup_SetHidden@@YGXPBDH@Z");
    todo("implement");
    _sub_722CD7(sobGroupName, bHidden);
}

_extern void _sub_7234B5(char const *, float);
void SobGroup_TakeDamage(char const *sobGroupName, float damagePercentage) // 0x7234B5
{
    mangled_assert("?SobGroup_TakeDamage@@YGXPBDM@Z");
    todo("implement");
    _sub_7234B5(sobGroupName, damagePercentage);
}

_extern void _sub_72099C(char const *, char const *);
void SobGroup_FillBattleScar(char const *sobGroupName, char const *scarTypeName) // 0x72099C
{
    mangled_assert("?SobGroup_FillBattleScar@@YGXPBD0@Z");
    todo("implement");
    _sub_72099C(sobGroupName, scarTypeName);
}

_extern void _sub_720A15(char const *, char const *, __int32);
void SobGroup_FillBattleScar_Debug(char const *sobGroupName, char const *scarTypeName, __int32 maxNumScars) // 0x720A15
{
    mangled_assert("?SobGroup_FillBattleScar_Debug@@YGXPBD0H@Z");
    todo("implement");
    _sub_720A15(sobGroupName, scarTypeName, maxNumScars);
}

_extern void _sub_722517(char const *, char const *);
void SobGroup_SalvageSobGroup(char const *sobGroupName, char const *targetSobGroupName) // 0x722517
{
    mangled_assert("?SobGroup_SalvageSobGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_722517(sobGroupName, targetSobGroupName);
}

_extern void _sub_7220A5(char const *, char const *);
void SobGroup_RepairSobGroup(char const *repairingSobGroupName, char const *targetName) // 0x7220A5
{
    mangled_assert("?SobGroup_RepairSobGroup@@YGXPBD0@Z");
    todo("implement");
    _sub_7220A5(repairingSobGroupName, targetName);
}

_extern void _sub_72260F(char const *);
void SobGroup_SelectSobGroup(char const *sobGroupName) // 0x72260F
{
    mangled_assert("?SobGroup_SelectSobGroup@@YGXPBD@Z");
    todo("implement");
    _sub_72260F(sobGroupName);
}

_extern void _sub_7200B9();
void SobGroup_DeSelectAll() // 0x7200B9
{
    mangled_assert("?SobGroup_DeSelectAll@@YGXXZ");
    todo("implement");
    _sub_7200B9();
}

_extern void _sub_721216(char const *);
void SobGroup_ForceStayDockedIfDocking(char const *sobGroupName) // 0x721216
{
    mangled_assert("?SobGroup_ForceStayDockedIfDocking@@YGXPBD@Z");
    todo("implement");
    _sub_721216(sobGroupName);
}

_extern void _sub_71F6A0(char const *, unsigned __int32, bool);
void SobGroup_AbilityActivate(char const *sobGroupName, unsigned __int32 ability, bool activate) // 0x71F6A0
{
    mangled_assert("?SobGroup_AbilityActivate@@YGXPBDI_N@Z");
    todo("implement");
    _sub_71F6A0(sobGroupName, ability, activate);
}

_extern void _sub_7218DC(char const *);
void SobGroup_LoadPersistantData(char const *ShipToParadeRoundTypeName) // 0x7218DC
{
    mangled_assert("?SobGroup_LoadPersistantData@@YGXPBD@Z");
    todo("implement");
    _sub_7218DC(ShipToParadeRoundTypeName);
}

_extern void _sub_7238CA(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent);
void dummyAnimCallback(SobWithMesh *ship, AnimatorMad *animator, AnimatorMad::CallbackEvent event) // 0x7238CA
{
    mangled_assert("?dummyAnimCallback@@YGXPAVSobWithMesh@@PAVAnimatorMad@@W4CallbackEvent@2@@Z");
    todo("implement");
    _sub_7238CA(ship, animator, event);
}

_extern void _sub_722E4E(char const *, char const *);
void SobGroup_SetMadState(char const *sobGroupName, char const *stateName) // 0x722E4E
{
    mangled_assert("?SobGroup_SetMadState@@YGXPBD0@Z");
    todo("implement");
    _sub_722E4E(sobGroupName, stateName);
}

_extern void _sub_721A90(char const *, float);
void SobGroup_ManualEngineGlow(char const *sobGroupName, float thrust) // 0x721A90
{
    mangled_assert("?SobGroup_ManualEngineGlow@@YGXPBDM@Z");
    todo("implement");
    _sub_721A90(sobGroupName, thrust);
}

_extern void _sub_71FB38(char const *);
void SobGroup_AutoEngineGlow(char const *sobGroupName) // 0x71FB38
{
    mangled_assert("?SobGroup_AutoEngineGlow@@YGXPBD@Z");
    todo("implement");
    _sub_71FB38(sobGroupName);
}

_extern void _sub_71F725(char const *, bool);
void SobGroup_AllowPassiveActionsAlways(char const *sobGroupName, bool set) // 0x71F725
{
    mangled_assert("?SobGroup_AllowPassiveActionsAlways@@YGXPBD_N@Z");
    todo("implement");
    _sub_71F725(sobGroupName, set);
}

_extern void _sub_722D41(char const *, bool);
void SobGroup_SetInvulnerability(char const *sobGroupName, bool on) // 0x722D41
{
    mangled_assert("?SobGroup_SetInvulnerability@@YGXPBD_N@Z");
    todo("implement");
    _sub_722D41(sobGroupName, on);
}

_extern void _sub_722DC0(char const *, char const *, bool);
void SobGroup_SetInvulnerabilityOfHardPoint(char const *sobGroupName, char const *hardPointName, bool on) // 0x722DC0
{
    mangled_assert("?SobGroup_SetInvulnerabilityOfHardPoint@@YGXPBD0_N@Z");
    todo("implement");
    _sub_722DC0(sobGroupName, hardPointName, on);
}

_extern void _sub_7216AA(char const *, char const *);
void SobGroup_Kamikaze(char const *sobGroupName, char const *targetGroupName) // 0x7216AA
{
    mangled_assert("?SobGroup_Kamikaze@@YGXPBD0@Z");
    todo("implement");
    _sub_7216AA(sobGroupName, targetGroupName);
}

_extern void _sub_722EF4(char const *, bool);
void SobGroup_SetSwitchOwnerFlag(char const *sobGroupName, bool flag) // 0x722EF4
{
    mangled_assert("?SobGroup_SetSwitchOwnerFlag@@YGXPBD_N@Z");
    todo("implement");
    _sub_722EF4(sobGroupName, flag);
}

_extern float _sub_7227A0(char const *, float);
float SobGroup_SetBuildSpeedMultiplier(char const *sobGroupName, float newMult) // 0x7227A0
{
    mangled_assert("?SobGroup_SetBuildSpeedMultiplier@@YGMPBDM@Z");
    todo("implement");
    float __result = _sub_7227A0(sobGroupName, newMult);
    return __result;
}

_extern void _sub_7226BC(char const *);
void SobGroup_SetAsDeployed(char const *sobGroupName) // 0x7226BC
{
    mangled_assert("?SobGroup_SetAsDeployed@@YGXPBD@Z");
    todo("implement");
    _sub_7226BC(sobGroupName);
}

_extern void _sub_722FE0(char const *, vector3, vector3, char const *);
void SobGroup_SetTeamColours(char const *sobGroupName, vector3 baseColour, vector3 stripeColour, char const *badgeName) // 0x722FE0
{
    mangled_assert("?SobGroup_SetTeamColours@@YGXPBDVvector3@@10@Z");
    todo("implement");
    _sub_722FE0(sobGroupName, baseColour, stripeColour, badgeName);
}

_extern void _sub_72285D(char const *, bool);
void SobGroup_SetCaptureAlwaysDisables(char const *sobGroupName, bool alwaysDisable) // 0x72285D
{
    mangled_assert("?SobGroup_SetCaptureAlwaysDisables@@YGXPBD_N@Z");
    todo("implement");
    _sub_72285D(sobGroupName, alwaysDisable);
}

_extern void _sub_722990(char const *, unsigned __int32);
void SobGroup_SetDisplayedRestrictedHardpoint(char const *sobGroupName, unsigned __int32 nbSlot) // 0x722990
{
    mangled_assert("?SobGroup_SetDisplayedRestrictedHardpoint@@YGXPBDI@Z");
    todo("implement");
    _sub_722990(sobGroupName, nbSlot);
}

_extern void _sub_72192C(char const *, bool);
void SobGroup_MakeSelectable(char const *sobGroupName, bool bSelectable) // 0x72192C
{
    mangled_assert("?SobGroup_MakeSelectable@@YGXPBD_N@Z");
    todo("implement");
    _sub_72192C(sobGroupName, bSelectable);
}

_extern bool _sub_721635(char const *);
bool SobGroup_IsSelectable(char const *sobGroupName) // 0x721635
{
    mangled_assert("?SobGroup_IsSelectable@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_721635(sobGroupName);
    return __result;
}

_extern void _sub_7219BF(char const *);
void SobGroup_MakeUntargeted(char const *sobGroupName) // 0x7219BF
{
    mangled_assert("?SobGroup_MakeUntargeted@@YGXPBD@Z");
    todo("implement");
    _sub_7219BF(sobGroupName);
}

_extern bool _sub_7215B5(char const *, bool);
bool SobGroup_InWorldBound(char const *sobGroupName, bool bInner) // 0x7215B5
{
    mangled_assert("?SobGroup_InWorldBound@@YG_NPBD_N@Z");
    todo("implement");
    bool __result = _sub_7215B5(sobGroupName, bInner);
    return __result;
}

/* ---------- private code */

_extern void _sub_7238E4(SquadronList const &, vector3 const &, bool);
_static void exitHyperspace(SquadronList const &list, vector3 const &destination, bool useEffects) // 0x7238E4
{
    mangled_assert("exitHyperspace");
    todo("implement");
    _sub_7238E4(list, destination, useEffects);
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\types.h>
#include <TeamColourRegistry.h>
#include <GunBinding.h>
#include <set>
#include <Render\gl\lotypes.h>
#include <savegame.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <resourceCommand.h>
#include <pch.h>
#include <CameraCommand.h>
#include <SobWithMeshStatic.h>
#include <Interpolation.h>
#include <CameraHW.h>
#include <CloakManager.h>
#include <Pieplate.h>
#include <Camera\CameraOrbitTarget.h>
#include <ship.h>
#include <fixedpoint.h>
#include <Camera\Camera.h>
#include <SobWithMesh.h>
#include <util\fixed.h>
#include <Camera\Frustum.h>
#include <SensorsBlobs.h>
#include <SobRigidBody.h>
#include <Collision\Primitives\aabb.h>
#include <Camera\Plane3.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <SobRigidBodyStatic.h>
#include <xhash>
#include <Mathlib\matrix3.h>
#include <WeaponClassSpecificInfo.h>
#include <Squadron.h>
#include <new>
#include <scripting.h>
#include <ParadeCommand.h>
#include <scriptaccess.h>
#include <exception>
#include <commandtype.h>
#include <xstddef>
#include <scripttypedef.h>
#include <type_traits>
#include <mainuidefines.h>
#include <Player.h>
#include <ResearchManager.h>
#include <lua.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Camera\OrbitParameters.h>
#include <fileio\fileioexports.h>
#include <waypointMoveCommand.h>
#include <Modifiers\ModifierTargetCache.h>
#include <GameObj.h>
#include <platform\osdef.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <math.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Universe.h>
#include <list>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <StrikeGroup.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <SoundManager\SoundEntityHandle.h>
#include <gameSettings.h>
#include <config.h>
#include <syncChecking.h>
#include <AttackCommand.h>
#include <map>
#include <AttackStyle.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <DynamicPoint.h>
#include <boost\scoped_ptr.hpp>
#include <sobid.h>
#include <weaponTargetInfo.h>
#include <Modifiers\ModifierAbility.h>
#include <MainUI.h>
#include <Selector.h>
#include <prim.h>
#include <HyperspaceManager.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <weaponinfo.h>
#include <boost\cstdint.hpp>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <boost\config.hpp>
#include <shipHold.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\scoped_array.hpp>
#include <seInterface2\SampleID.h>
#include <Mathlib\quat.h>
#include <seInterface2\SampleBase.h>
#include <MainUIImpl.h>
#include <LevelDesc.h>
#include <sob.h>
#include <stack>
#include <Cursor.h>
#include <Hash.h>
#include <sobstatic.h>
#include <Render\objects\texture.h>
#include <fileio\md5.h>
#include <Collision\Primitives\sphere.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <playerresourcetype.h>
#include <platform\inputinterface.h>
#include <gamestructimpl.h>
#include <platform\keydefines.h>
#include <Badge.h>
#include <dbdefines.h>
#include <SensorsManager.h>
#include <Mathlib\mathlibdll.h>
#include <UnitCaps\UnitCaps.h>
#include <Render\gl\r_types.h>
#include <Mathlib\fastmath.h>
#include <Mathlib\matvec.h>
#include <MoveCommand.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <orders.h>
#include <orders_base.h>
#include <pathpoints.h>
#include <task.h>
#include <debug\db.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Subsystems\HardPointManager.h>
#include <gamemsg.h>
#include <deque>
#include <Subsystems\HardPoint.h>
#include <Sob\Resource\Resource.h>
#include <Subsystems\HardPointStatic.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Parade.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <MetaSelTarg.h>
#include <DefenseFieldManager.h>
#include <sobtypes.h>
#include <SelTarg.h>
#include <boost\throw_exception.hpp>
#include <Modifiers\ModifierApplier.h>
#include <selection.h>
#include <seInterface2\sedefinesshared.h>
#include <savegamedef.h>
#include <boost\static_assert.hpp>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <abilities.h>
#include <Collision\Primitives\obb.h>
#include <Race.h>
#include <SOBGroupManager.h>
#include <OrderFeedback.h>
#include <SquadronList.h>
#include <wchar.h>
#include <Collision\BVH\octree.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Collision\BVH\span.h>
#include <BuildManager.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Modifiers\ModifierEffect.h>
#include <Collision\BVH\proxy.h>
#include <DockCommand.h>
#include <queue>
#include <Collision\intersect.h>
#include <command.h>
#include <Subsystems\Subsystem.h>
#include <Collision\primitivesfwd.h>
#include <groupinglogic.h>
#include <Subsystems\SubsystemStatic.h>
#include <renderer.h>
#include <weaponstaticinfo.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void muiMoveRegisterTweaks();

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_459A7F(MainUIImpl *const, Selection *, unsigned __int32);
void MainUIImpl::issueHotkeyGroupCommand(Selection *, unsigned __int32) // 0x459A7F
{
    mangled_assert("?issueHotkeyGroupCommand@MainUIImpl@@QAEXPAVSelection@@I@Z");
    todo("implement");
    _sub_459A7F(this, arg, arg);
}

_extern void _sub_459D4D(MainUIImpl *const, Selection const &, vector3 const &, vector3 const &, vector3 const *);
void MainUIImpl::issueMoveCommand(Selection const &, vector3 const &, vector3 const &, vector3 const *) // 0x459D4D
{
    mangled_assert("?issueMoveCommand@MainUIImpl@@QAEXABVSelection@@ABVvector3@@1PBV3@@Z");
    todo("implement");
    _sub_459D4D(this, arg, arg, arg, arg);
}

_extern void _sub_459E12(MainUIImpl *const, Selection const &, std::vector<vector3,std::allocator<vector3> > &, SobID const &);
void MainUIImpl::issueMoveWaypointCommand(Selection const &, std::vector<vector3,std::allocator<vector3> > &, SobID const &) // 0x459E12
{
    mangled_assert("?issueMoveWaypointCommand@MainUIImpl@@QAEXABVSelection@@AAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@ABVSobID@@@Z");
    todo("implement");
    _sub_459E12(this, arg, arg, arg);
}

_extern void _sub_459C87(MainUIImpl *const, Selection const &, vector3 const &, vector3 const &, vector3 const *);
void MainUIImpl::issueMoveAttackCommand(Selection const &, vector3 const &, vector3 const &, vector3 const *) // 0x459C87
{
    mangled_assert("?issueMoveAttackCommand@MainUIImpl@@QAEXABVSelection@@ABVvector3@@1PBV3@@Z");
    todo("implement");
    _sub_459C87(this, arg, arg, arg, arg);
}

_extern void _sub_4587F6(MainUIImpl *const, Selection const &);
void MainUIImpl::IssueHyperspaceCommand(Selection const &) // 0x4587F6
{
    mangled_assert("?IssueHyperspaceCommand@MainUIImpl@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_4587F6(this, arg);
}

_extern void _sub_459472(MainUIImpl *const, Selection const &, Selection const &);
void MainUIImpl::issueFormHyperspaceGateCommand(Selection const &, Selection const &) // 0x459472
{
    mangled_assert("?issueFormHyperspaceGateCommand@MainUIImpl@@QAEXABVSelection@@0@Z");
    todo("implement");
    _sub_459472(this, arg, arg);
}

_extern void _sub_459C29(MainUIImpl *const, Selection const &);
void MainUIImpl::issueLeaveStrikeGroupCommand(Selection const &) // 0x459C29
{
    mangled_assert("?issueLeaveStrikeGroupCommand@MainUIImpl@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_459C29(this, arg);
}

_extern void _sub_45A4E7(MainUIImpl *const, Selection const &, vector3 const &, vector3 const &);
void MainUIImpl::setRallyPoint(Selection const &, vector3 const &, vector3 const &) // 0x45A4E7
{
    mangled_assert("?setRallyPoint@MainUIImpl@@QAEXABVSelection@@ABVvector3@@1@Z");
    todo("implement");
    _sub_45A4E7(this, arg, arg, arg);
}

_extern void _sub_45A449(MainUIImpl *const, Selection const &, SobID const &);
void MainUIImpl::setRallyPoint(Selection const &, SobID const &) // 0x45A449
{
    mangled_assert("?setRallyPoint@MainUIImpl@@QAEXABVSelection@@ABVSobID@@@Z");
    todo("implement");
    _sub_45A449(this, arg, arg);
}

_extern void _sub_459A84(MainUIImpl *const, Selection const &, vector3 const &, vector3 const &);
void MainUIImpl::issueHyperspaceCommand(Selection const &, vector3 const &, vector3 const &) // 0x459A84
{
    mangled_assert("?issueHyperspaceCommand@MainUIImpl@@QAEXABVSelection@@ABVvector3@@1@Z");
    todo("implement");
    _sub_459A84(this, arg, arg, arg);
}

_extern void _sub_459B62(MainUIImpl *const, Selection const &, SobID const &);
void MainUIImpl::issueHyperspaceViaGateCommand(Selection const &, SobID const &) // 0x459B62
{
    mangled_assert("?issueHyperspaceViaGateCommand@MainUIImpl@@QAEXABVSelection@@ABVSobID@@@Z");
    todo("implement");
    _sub_459B62(this, arg, arg);
}

_extern void _sub_459FC6(MainUIImpl *const, Selection const &, SobID const &);
void MainUIImpl::issueRelativeMoveCommand(Selection const &, SobID const &) // 0x459FC6
{
    mangled_assert("?issueRelativeMoveCommand@MainUIImpl@@QAEXABVSelection@@ABVSobID@@@Z");
    todo("implement");
    _sub_459FC6(this, arg, arg);
}

_extern void _sub_4586C9(MainUIImpl *const, Selection const &);
void MainUIImpl::IssueForceAttackCommand(Selection const &) // 0x4586C9
{
    mangled_assert("?IssueForceAttackCommand@MainUIImpl@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_4586C9(this, arg);
}

_extern void _sub_458534(MainUIImpl *const, Selection const &);
void MainUIImpl::IssueAttackCommand(Selection const &) // 0x458534
{
    mangled_assert("?IssueAttackCommand@MainUIImpl@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_458534(this, arg);
}

_extern void _sub_458DF8(MainUIImpl *const, Selection const &, Selection const &, bool);
void MainUIImpl::issueAttackCommand(Selection const &, Selection const &, bool) // 0x458DF8
{
    mangled_assert("?issueAttackCommand@MainUIImpl@@QAEXABVSelection@@0_N@Z");
    todo("implement");
    _sub_458DF8(this, arg, arg, arg);
}

_extern void _sub_458792(MainUIImpl *const, Selection const &);
void MainUIImpl::IssueGuardCommand(Selection const &) // 0x458792
{
    mangled_assert("?IssueGuardCommand@MainUIImpl@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_458792(this, arg);
}

_extern void _sub_459570(MainUIImpl *const, Selection const &, Selection const &);
void MainUIImpl::issueGuardCommand(Selection const &, Selection const &) // 0x459570
{
    mangled_assert("?issueGuardCommand@MainUIImpl@@QAEXABVSelection@@0@Z");
    todo("implement");
    _sub_459570(this, arg, arg);
}

_extern void _sub_45861A(MainUIImpl *const, Selection const &);
void MainUIImpl::IssueDockCommand(Selection const &) // 0x45861A
{
    mangled_assert("?IssueDockCommand@MainUIImpl@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_45861A(this, arg);
}

_extern void _sub_4590D6(MainUIImpl *const, Selection const &, Selection const &);
void MainUIImpl::issueDockCommand(Selection const &, Selection const &) // 0x4590D6
{
    mangled_assert("?issueDockCommand@MainUIImpl@@QAEXABVSelection@@0@Z");
    todo("implement");
    _sub_4590D6(this, arg, arg);
}

_extern void _sub_4592FB(MainUIImpl *const, Selection const &);
void MainUIImpl::issueDockCommand(Selection const &) // 0x4592FB
{
    mangled_assert("?issueDockCommand@MainUIImpl@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_4592FB(this, arg);
}

_extern void _sub_4593BE(MainUIImpl *const, Selection const &, vector3 const &, vector3 const &, vector3 const &);
void MainUIImpl::issueDropMinesCommand(Selection const &, vector3 const &, vector3 const &, vector3 const &) // 0x4593BE
{
    mangled_assert("?issueDropMinesCommand@MainUIImpl@@QAEXABVSelection@@ABVvector3@@11@Z");
    todo("implement");
    _sub_4593BE(this, arg, arg, arg, arg);
}

_extern void _sub_45A174(MainUIImpl *const, Selection const &);
void MainUIImpl::issueRetireCommand(Selection const &) // 0x45A174
{
    mangled_assert("?issueRetireCommand@MainUIImpl@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_45A174(this, arg);
}

_extern void _sub_45A364(MainUIImpl *const, Selection const &, std::vector<vector3,std::allocator<vector3> > *, vector3 const &, __int32, bool, bool);
void MainUIImpl::issueWaypointMoveCommand(Selection const &, std::vector<vector3,std::allocator<vector3> > *, vector3 const &, __int32, bool, bool) // 0x45A364
{
    mangled_assert("?issueWaypointMoveCommand@MainUIImpl@@QAEXABVSelection@@PAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@ABVvector3@@H_N3@Z");
    todo("implement");
    _sub_45A364(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_459EE4(MainUIImpl *const, Selection const &);
void MainUIImpl::issueParadeCommand(Selection const &) // 0x459EE4
{
    mangled_assert("?issueParadeCommand@MainUIImpl@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_459EE4(this, arg);
}

_extern void _sub_458861(MainUIImpl *const, Selection const &);
void MainUIImpl::IssueRepairCommand(Selection const &) // 0x458861
{
    mangled_assert("?IssueRepairCommand@MainUIImpl@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_458861(this, arg);
}

_extern void _sub_45A076(MainUIImpl *const, Selection const &, Selection const &);
void MainUIImpl::issueRepairCommand(Selection const &, Selection const &) // 0x45A076
{
    mangled_assert("?issueRepairCommand@MainUIImpl@@QAEXABVSelection@@0@Z");
    todo("implement");
    _sub_45A076(this, arg, arg);
}

_extern void _sub_4596F8(MainUIImpl *const, Selection const &, Selection const &);
void MainUIImpl::issueHarvestCommand(Selection const &, Selection const &) // 0x4596F8
{
    mangled_assert("?issueHarvestCommand@MainUIImpl@@QAEXABVSelection@@0@Z");
    todo("implement");
    _sub_4596F8(this, arg, arg);
}

_extern void _sub_459994(MainUIImpl *const, Selection const &);
void MainUIImpl::issueHarvestCommand(Selection const &) // 0x459994
{
    mangled_assert("?issueHarvestCommand@MainUIImpl@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_459994(this, arg);
}

_extern void _sub_45859A(MainUIImpl *const, Selection const &);
void MainUIImpl::IssueCaptureCommand(Selection const &) // 0x45859A
{
    mangled_assert("?IssueCaptureCommand@MainUIImpl@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_45859A(this, arg);
}

_extern void _sub_458E31(MainUIImpl *const, Selection const &, Ship *);
void MainUIImpl::issueCaptureCommand(Selection const &, Ship *) // 0x458E31
{
    mangled_assert("?issueCaptureCommand@MainUIImpl@@QAEXABVSelection@@PAVShip@@@Z");
    todo("implement");
    _sub_458E31(this, arg, arg);
}

_extern void _sub_45A253(MainUIImpl *const, Selection const &, Ship *);
void MainUIImpl::issueSalvageCommand(Selection const &, Ship *) // 0x45A253
{
    mangled_assert("?issueSalvageCommand@MainUIImpl@@QAEXABVSelection@@PAVShip@@@Z");
    todo("implement");
    _sub_45A253(this, arg, arg);
}

_extern void _sub_459649(MainUIImpl *const, Selection const &);
void MainUIImpl::issueHaltCommand(Selection const &) // 0x459649
{
    mangled_assert("?issueHaltCommand@MainUIImpl@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_459649(this, arg);
}

_extern void _sub_458F42(MainUIImpl *const, Selection const &);
void MainUIImpl::issueCloakCommand(Selection const &) // 0x458F42
{
    mangled_assert("?issueCloakCommand@MainUIImpl@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_458F42(this, arg);
}

_extern void _sub_45900C(MainUIImpl *const, Selection const &);
void MainUIImpl::issueDefenseFieldCommand(Selection const &) // 0x45900C
{
    mangled_assert("?issueDefenseFieldCommand@MainUIImpl@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_45900C(this, arg);
}

_extern void _sub_458AF9(MainUIImpl *const, Selection const &, AbilityType, Selection const &, bool);
void MainUIImpl::doAttackForNonAble(Selection const &, AbilityType, Selection const &, bool) // 0x458AF9
{
    mangled_assert("?doAttackForNonAble@MainUIImpl@@AAEXABVSelection@@W4AbilityType@@0_N@Z");
    todo("implement");
    _sub_458AF9(this, arg, arg, arg, arg);
}

_extern void _sub_458D45(MainUIImpl *const, Selection const &, AbilityType, Selection const &, bool);
void MainUIImpl::doRelativeMoveForNonAble(Selection const &, AbilityType, Selection const &, bool) // 0x458D45
{
    mangled_assert("?doRelativeMoveForNonAble@MainUIImpl@@AAEXABVSelection@@W4AbilityType@@0_N@Z");
    todo("implement");
    _sub_458D45(this, arg, arg, arg, arg);
}

_extern void _sub_458B70(MainUIImpl *const, Selection const &, Selection const &, bool);
void MainUIImpl::doRelativeMove(Selection const &, Selection const &, bool) // 0x458B70
{
    mangled_assert("?doRelativeMove@MainUIImpl@@AAEXABVSelection@@0_N@Z");
    todo("implement");
    _sub_458B70(this, arg, arg, arg);
}

_extern void _sub_458A2F(MainUIImpl *const, Selection const &, Selection const &, bool, bool);
void MainUIImpl::doAttackCommand(Selection const &, Selection const &, bool, bool) // 0x458A2F
{
    mangled_assert("?doAttackCommand@MainUIImpl@@AAEXABVSelection@@0_N1@Z");
    todo("implement");
    _sub_458A2F(this, arg, arg, arg, arg);
}

_extern void _sub_4588C5(MainUIImpl *const, Selection const &);
void MainUIImpl::IssueSpecialAttackCommand(Selection const &) // 0x4588C5
{
    mangled_assert("?IssueSpecialAttackCommand@MainUIImpl@@AAEXABVSelection@@@Z");
    todo("implement");
    _sub_4588C5(this, arg);
}

_extern void _sub_45A448();
void muiMoveRegisterTweaks() // 0x45A448
{
    mangled_assert("?muiMoveRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_45A448();
}

/* ---------- private code */
#endif

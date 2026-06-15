#if 0
/* ---------- headers */

#include "decomp.h"
#include <abilities.h>
#include <SensorsManager.h>
#include <Camera\OrbitParameters.h>
#include <assist\stlexsmallvector.h>
#include <TeamColourRegistry.h>
#include <AttackStyle.h>
#include <savegame.h>
#include <xstring>
#include <Interpolation.h>
#include <AttackCommand.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <command.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <SobWithMeshStatic.h>
#include <Collision\Primitives\aabb.h>
#include <alliance.h>
#include <crtdefs.h>
#include <MetaSelTarg.h>
#include <ship.h>
#include <Render\gl\r_defines.h>
#include <Universe.h>
#include <SobWithMesh.h>
#include <Render\gl\glext.h>
#include <Waypoint.h>
#include <OrderFeedback.h>
#include <SobRigidBody.h>
#include <SobUnmoveable.h>
#include <DynamicPoint.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\matrix3.h>
#include <orders.h>
#include <orders_base.h>
#include <new>
#include <exception>
#include <xstddef>
#include <gamemsg.h>
#include <type_traits>
#include <SoundManager\SoundManager.h>
#include <Interface.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <platform\inputinterface.h>
#include <seInterface2\SoundParamManager.h>
#include <assist\gbitset.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <KeyBindings.h>
#include <fileio\fileioexports.h>
#include <config.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Pieplate.h>
#include <platform\keydefines.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Render\objects\simplemesh.h>
#include <Render\objects\textureproxy.h>
#include <compiler\compilerconfig.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Render\objects\textureregistry.h>
#include <Collision\Primitives\capsule.h>
#include <list>
#include <hash_map>
#include <Collision\Primitives\segment.h>
#include <xhash>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector3.h>
#include <LevelDesc.h>
#include <Mathlib\vector4.h>
#include <ITweak.h>
#include <Hash.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Tactics.h>
#include <fileio\md5.h>
#include <UserInterface\uitypes.h>
#include <Parade.h>
#include <Mathlib\mathutil.h>
#include <map>
#include <CameraCommand.h>
#include <UserInterface\StyleSheet.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <CameraHW.h>
#include <UserInterface\pch.h>
#include <boost\scoped_ptr.hpp>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <gamestructimpl.h>
#include <Camera\Frustum.h>
#include <Badge.h>
#include <Camera\Plane3.h>
#include <seInterface2\PatchID.h>
#include <sob.h>
#include <recorder.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <sobstatic.h>
#include <WeaponStatic.h>
#include <Mathlib\vector2.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <Collision\Primitives\sphere.h>
#include <gameRandom.h>
#include <util\types.h>
#include <random.h>
#include <region.h>
#include <weapon.h>
#include <WeaponFire\WeaponFire.h>
#include <weaponfiretypes.h>
#include <weaponinfo.h>
#include <boost\cstdint.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\config.hpp>
#include <MultiplierTypes.h>
#include <cassert>
#include <Collision\BVH\bvh.h>
#include <assert.h>
#include <boost\scoped_array.hpp>
#include <gameSettings.h>
#include <Race.h>
#include <syncChecking.h>
#include <Mathlib\quat.h>
#include <Collision\Collision.h>
#include <boost\static_assert.hpp>
#include <SensorsBlobs.h>
#include <assist\typemagic.h>
#include <SelTarg.h>
#include <weaponTargetInfo.h>
#include <playerresourcetype.h>
#include <BuildManager.h>
#include <prim.h>
#include <platform\timer.h>
#include <GameEventDefs.h>
#include <platform\osdef.h>
#include <platform\platformexports.h>
#include <GameEventSys.h>
#include <Mathlib\mathlibdll.h>
#include <SOBGroupManager.h>
#include <Sob\Resource\Resource.h>
#include <Mathlib\fastmath.h>
#include <Sob\Resource\ResourceStatic.h>
#include <GameObj.h>
#include <seInterface2\sedefinesshared.h>
#include <Collision\Primitives\obb.h>
#include <ShieldTypes.h>
#include <util\statmonitor.h>
#include <MainUIImpl.h>
#include <renderer.h>
#include <MeshAnimation.h>
#include <util\utilexports.h>
#include <Cursor.h>
#include <pathpoints.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <debug\db.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <mainuidefines.h>
#include <SobZeroMassBody.h>
#include <Subsystems\HardPointManager.h>
#include <Squadron.h>
#include <deque>
#include <Subsystems\HardPoint.h>
#include <ParadeCommand.h>
#include <sobzeromassbodystatic.h>
#include <Subsystems\HardPointStatic.h>
#include <commandtype.h>
#include <platform\sysinputinterface.h>
#include <mainScreen.h>
#include <Subsystems\SubSystemType.h>
#include <scripting.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <scriptaccess.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Render\gl\lotypes.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <scripttypedef.h>
#include <UserInterface\Graphic.h>
#include <selection.h>
#include <luaconfig\luaconfig.h>
#include <savegamedef.h>
#include <UserInterface\NewUIScreen.h>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\NewFrame.h>
#include <bitset>
#include <lua.h>
#include <UserInterface\InterfaceElement.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\signals.h>
#include <Render\gl\r_types.h>
#include <sobid.h>
#include <Player.h>
#include <dbdefines.h>
#include <ResearchManager.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <MainUICommands.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Viewer.h>
#include <wchar.h>
#include <Collision\BVH\proxy.h>
#include <task.h>
#include <Collision\intersect.h>
#include <stack>
#include <Collision\primitivesfwd.h>
#include <queue>
#include <NIS\NISManager.h>
#include <Selector.h>
#include <MainUI.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void muiCmd::OrderFeedbackCommand(MainUIImpl *p);
extern void muiCmd::CancelCommand(MainUIImpl *p);
extern void muiCmd::TempWaypointCommand(MainUIImpl *p);
extern void muiCmd::EndTempWaypointCommand(MainUIImpl *p, bool bTransition);
extern void muiCmd::WaypointCommand(MainUIImpl *p);
extern void muiCmd::EndWaypointCommand(MainUIImpl *p);
extern void muiCmd::WaypointModeCommand(MainUIImpl *p);
extern void muiCmd::DeleteCommand(MainUIImpl *p);
extern void muiCmd::FocusCommand(MainUIImpl *p);
extern void muiCmd::DockCommand(MainUIImpl *p);
extern void muiCmd::RetireCommand(MainUIImpl *p);
extern void muiCmd::GuardCommand(MainUIImpl *p);
extern void muiCmd::RallyObjectCommand(MainUIImpl *p);
extern void muiCmd::RepairCommand(MainUIImpl *p);
extern void muiCmd::ParadeCommand(MainUIImpl *p);
extern void muiCmd::SpecialAttackCommand(MainUIImpl *p);
extern void muiCmd::HarvestCommand(MainUIImpl *p);
extern void muiCmd::SelectAllVisibleCommand(MainUIImpl *p);
extern void muiCmd::FocusHomeCommand(MainUIImpl *p);
extern void muiCmd::NextFocusCommand(MainUIImpl *p);
extern void muiCmd::PreviousFocusCommand(MainUIImpl *p);
extern void muiCmd::AttackCommand(MainUIImpl *p);
extern void muiCmd::HyperspaceCommand(MainUIImpl *p);
extern void muiCmd::MoveCommand(MainUIImpl *p);
extern void muiCmd::MoveAttackCommand(MainUIImpl *p);
extern void muiCmd::MilitaryCommand(MainUIImpl *p);
extern void muiCmd::SetRallyPoint(MainUIImpl *p);
extern void muiCmd::DropMinesCommand(MainUIImpl *p);
extern void muiCmd::StopCommand(MainUIImpl *p);
extern void muiCmd::CreateGroupCommand(MainUIImpl *p);
extern void muiCmd::SelectGroupCommand(MainUIImpl *p);
extern void muiCmd::SetSelectionCommand(MainUIImpl *p);
extern void muiCmd::ShiftModifierCommand(MainUIImpl *p);
extern void muiCmd::ControlModifierCommand(MainUIImpl *p);
extern void muiCmd::FocusModifierCommand(MainUIImpl *p);
extern void muiCmd::ZoomCommand(MainUIImpl *p);
extern void muiCmd::SensorsManagerToggle(MainUIImpl *p);
extern void muiCmd::DefenseFieldCommand(MainUIImpl *p);
extern void muiCmd::CloakCommand(MainUIImpl *p);
extern void muiCmd::CaptureCommand(MainUIImpl *p);
extern void muiCmd::SensorPingCommand(MainUIImpl *p);
extern void muiCmd::EMPCommand(MainUIImpl *p);
extern void muiCmd::AttackBomberCommand(MainUIImpl *p);
extern void muiCmd::TorpedoCommand(MainUIImpl *p);
extern void muiCmd::DeployMinesCommand(MainUIImpl *p);
extern void muiCmd::ScuttleCommand(MainUIImpl *p);

/* ---------- globals */

extern bool FORCE_ATTACK_ENABLED; // 0x8339B8

/* ---------- private variables */

_static
{
    extern float const twkDoublePressSpeed; // 0x760310
    extern char const *g_hideScreens[14]; // 0x8339BC
    extern float const ViewerUpdateRate; // 0x760314
    extern float const ViewerUpdatePeriod; // 0x8339F4
    extern float const CameraDistanceUpdateRate; // 0x760318
    extern float const CameraDistanceUpdatePeriod; // 0x8339F8
}

/* ---------- public code */

_inline boost::shared_ptr<SobIDShared>::~shared_ptr<SobIDShared>() // 0x451BDE
{
    mangled_assert("??1?$shared_ptr@VSobIDShared@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NDGameEvent_HotkeyGroupSelected::~NDGameEvent_HotkeyGroupSelected() // 0x451BF1
{
    mangled_assert("??1NDGameEvent_HotkeyGroupSelected@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SobID::~SobID() // 0x451BF8
{
    mangled_assert("??1SobID@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void muiCmd::OrderFeedbackCommand(MainUIImpl *p) // 0x45322D
{
    mangled_assert("?OrderFeedbackCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::CancelCommand(MainUIImpl *p) // 0x451E37
{
    mangled_assert("?CancelCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::TempWaypointCommand(MainUIImpl *p) // 0x453BF5
{
    mangled_assert("?TempWaypointCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::EndTempWaypointCommand(MainUIImpl *p, bool bTransition) // 0x45278D
{
    mangled_assert("?EndTempWaypointCommand@muiCmd@@YGXPAVMainUIImpl@@_N@Z");
    todo("implement");
}

void muiCmd::WaypointCommand(MainUIImpl *p) // 0x453D60
{
    mangled_assert("?WaypointCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::EndWaypointCommand(MainUIImpl *p) // 0x4528A0
{
    mangled_assert("?EndWaypointCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::WaypointModeCommand(MainUIImpl *p) // 0x453E9E
{
    mangled_assert("?WaypointModeCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::DeleteCommand(MainUIImpl *p) // 0x45246C
{
    mangled_assert("?DeleteCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::FocusCommand(MainUIImpl *p) // 0x4528E5
{
    mangled_assert("?FocusCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::DockCommand(MainUIImpl *p) // 0x4524C5
{
    mangled_assert("?DockCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::RetireCommand(MainUIImpl *p) // 0x45340A
{
    mangled_assert("?RetireCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::GuardCommand(MainUIImpl *p) // 0x452AE9
{
    mangled_assert("?GuardCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::RallyObjectCommand(MainUIImpl *p) // 0x4532D3
{
    mangled_assert("?RallyObjectCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::RepairCommand(MainUIImpl *p) // 0x45336B
{
    mangled_assert("?RepairCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::ParadeCommand(MainUIImpl *p) // 0x453247
{
    mangled_assert("?ParadeCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::SpecialAttackCommand(MainUIImpl *p) // 0x45398C
{
    mangled_assert("?SpecialAttackCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::HarvestCommand(MainUIImpl *p) // 0x452C5D
{
    mangled_assert("?HarvestCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::SelectAllVisibleCommand(MainUIImpl *p) // 0x4534FD
{
    mangled_assert("?SelectAllVisibleCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::FocusHomeCommand(MainUIImpl *p) // 0x4528F1
{
    mangled_assert("?FocusHomeCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::NextFocusCommand(MainUIImpl *p) // 0x45321F
{
    mangled_assert("?NextFocusCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::PreviousFocusCommand(MainUIImpl *p) // 0x4532C5
{
    mangled_assert("?PreviousFocusCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::AttackCommand(MainUIImpl *p) // 0x451D1A
{
    mangled_assert("?AttackCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::HyperspaceCommand(MainUIImpl *p) // 0x452DFE
{
    mangled_assert("?HyperspaceCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::MoveCommand(MainUIImpl *p) // 0x453090
{
    mangled_assert("?MoveCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::MoveAttackCommand(MainUIImpl *p) // 0x452F79
{
    mangled_assert("?MoveAttackCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::MilitaryCommand(MainUIImpl *p) // 0x452F2B
{
    mangled_assert("?MilitaryCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::SetRallyPoint(MainUIImpl *p) // 0x45373D
{
    mangled_assert("?SetRallyPoint@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::DropMinesCommand(MainUIImpl *p) // 0x4525B8
{
    mangled_assert("?DropMinesCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::StopCommand(MainUIImpl *p) // 0x453BB8
{
    mangled_assert("?StopCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::CreateGroupCommand(MainUIImpl *p) // 0x4522E1
{
    mangled_assert("?CreateGroupCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::SelectGroupCommand(MainUIImpl *p) // 0x45355E
{
    mangled_assert("?SelectGroupCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::SetSelectionCommand(MainUIImpl *p) // 0x45384F
{
    mangled_assert("?SetSelectionCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::ShiftModifierCommand(MainUIImpl *p) // 0x453889
{
    mangled_assert("?ShiftModifierCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::ControlModifierCommand(MainUIImpl *p) // 0x4521C1
{
    mangled_assert("?ControlModifierCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::FocusModifierCommand(MainUIImpl *p) // 0x452A36
{
    mangled_assert("?FocusModifierCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::ZoomCommand(MainUIImpl *p) // 0x453EF0
{
    mangled_assert("?ZoomCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::SensorsManagerToggle(MainUIImpl *p) // 0x45370B
{
    mangled_assert("?SensorsManagerToggle@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::DefenseFieldCommand(MainUIImpl *p) // 0x4523FA
{
    mangled_assert("?DefenseFieldCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::CloakCommand(MainUIImpl *p) // 0x45214F
{
    mangled_assert("?CloakCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::CaptureCommand(MainUIImpl *p) // 0x452084
{
    mangled_assert("?CaptureCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::SensorPingCommand(MainUIImpl *p) // 0x453684
{
    mangled_assert("?SensorPingCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::EMPCommand(MainUIImpl *p) // 0x4526E3
{
    mangled_assert("?EMPCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::AttackBomberCommand(MainUIImpl *p) // 0x451C70
{
    mangled_assert("?AttackBomberCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::TorpedoCommand(MainUIImpl *p) // 0x453CB6
{
    mangled_assert("?TorpedoCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::DeployMinesCommand(MainUIImpl *p) // 0x452489
{
    mangled_assert("?DeployMinesCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

void muiCmd::ScuttleCommand(MainUIImpl *p) // 0x45344D
{
    mangled_assert("?ScuttleCommand@muiCmd@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

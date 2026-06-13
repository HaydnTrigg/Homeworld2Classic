#if 0
/* ---------- headers */

#include "decomp.h"
#include <LevelDesc.h>
#include <MainUICommands.h>
#include <Hash.h>
#include <assist\stlexsmallvector.h>
#include <fileio\md5.h>
#include <UserInterface\signals.h>
#include <Render\gl\lotypes.h>
#include <xstring>
#include <Parade.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SobZeroMassBody.h>
#include <memory\memorylib.h>
#include <gamestructimpl.h>
#include <malloc.h>
#include <Badge.h>
#include <sobzeromassbodystatic.h>
#include <crtdefs.h>
#include <scripting.h>
#include <Render\gl\r_types.h>
#include <scriptaccess.h>
#include <sobid.h>
#include <Universe.h>
#include <scripttypedef.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <OrderFeedback.h>
#include <Mathlib\matrix3.h>
#include <DynamicPoint.h>
#include <lua.h>
#include <Collision\BVH\octree.h>
#include <weaponinfo.h>
#include <Collision\BVH\span.h>
#include <new>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <exception>
#include <xstddef>
#include <Collision\intersect.h>
#include <type_traits>
#include <Collision\primitivesfwd.h>
#include <Race.h>
#include <Interface.h>
#include <boost\static_assert.hpp>
#include <Selector.h>
#include <MainUI.h>
#include <xutility>
#include <abilities.h>
#include <SensorsManager.h>
#include <HyperspaceManager.h>
#include <utility>
#include <iosfwd>
#include <Camera\OrbitParameters.h>
#include <SquadronList.h>
#include <vector>
#include <Interpolation.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <playerresourcetype.h>
#include <Collision\Primitives\aabb.h>
#include <KeyBindings.h>
#include <BuildManager.h>
#include <MetaSelTarg.h>
#include <platform\keydefines.h>
#include <Render\gl\r_defines.h>
#include <Pieplate.h>
#include <compiler\compilerconfig.h>
#include <Render\gl\glext.h>
#include <Sob\Resource\Resource.h>
#include <Sob\Resource\ResourceStatic.h>
#include <GameObj.h>
#include <math.h>
#include <fixedpoint.h>
#include <list>
#include <util\fixed.h>
#include <ShieldTypes.h>
#include <util\statmonitor.h>
#include <MeshAnimation.h>
#include <util\utilexports.h>
#include <UserInterface\NewFrame.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Subsystems\HardPointManager.h>
#include <Squadron.h>
#include <Subsystems\HardPoint.h>
#include <ParadeCommand.h>
#include <platform\windowinterface.h>
#include <map>
#include <SoundManager\SoundManager.h>
#include <Subsystems\HardPointStatic.h>
#include <commandtype.h>
#include <xtree>
#include <seInterface2\SEInterface.h>
#include <boost\smart_ptr.hpp>
#include <Subsystems\SubSystemType.h>
#include <seInterface2\seinterfacefunc.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\SoundParamManager.h>
#include <CameraCommand.h>
#include <assist\gbitset.h>
#include <CameraHW.h>
#include <luaconfig\luaconfig.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Mathlib\vector2.h>
#include <Camera\Plane3.h>
#include <util\types.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Menus\NewTaskbar.h>
#include <UserInterface\StyleSheet.h>
#include <boost\cstdint.hpp>
#include <Player.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\pch.h>
#include <boost\config.hpp>
#include <ResearchManager.h>
#include <region.h>
#include <cassert>
#include <assert.h>
#include <Render\objects\textureregistry.h>
#include <Collision\Primitives\capsule.h>
#include <hash_map>
#include <Collision\Primitives\segment.h>
#include <xhash>
#include <boost\scoped_array.hpp>
#include <Collision\BVH\profiling.h>
#include <Render\objects\simplemesh.h>
#include <Render\objects\textureproxy.h>
#include <Mathlib\quat.h>
#include <NIS\NISManager.h>
#include <assist\typemagic.h>
#include <TeamColourRegistry.h>
#include <AttackStyle.h>
#include <savegame.h>
#include <AttackCommand.h>
#include <ITweak.h>
#include <command.h>
#include <Tactics.h>
#include <Mathlib\mathlibdll.h>
#include <seInterface2\PatchID.h>
#include <sob.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <sobstatic.h>
#include <SobWithMeshStatic.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <Collision\Primitives\sphere.h>
#include <SOBGroupManager.h>
#include <alliance.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <pathpoints.h>
#include <SobRigidBodyStatic.h>
#include <debug\db.h>
#include <renderer.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <WeaponStatic.h>
#include <gameRandom.h>
#include <MultiplierTypes.h>
#include <random.h>
#include <Collision\BVH\bvh.h>
#include <deque>
#include <weapon.h>
#include <gameSettings.h>
#include <WeaponFire\WeaponFire.h>
#include <config.h>
#include <weaponfiretypes.h>
#include <platform\sysinputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <syncChecking.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <profile\profile.h>
#include <SensorsBlobs.h>
#include <boost\detail\lwm_win32.hpp>
#include <iostream>
#include <SelTarg.h>
#include <Collision\Collision.h>
#include <prim.h>
#include <platform\timer.h>
#include <platform\osdef.h>
#include <platform\platformexports.h>
#include <Modifiers\ModifierTargetCache.h>
#include <seInterface2\sedefinesshared.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <weaponTargetInfo.h>
#include <Collision\Primitives\obb.h>
#include <MainUIImpl.h>
#include <GameEventDefs.h>
#include <Cursor.h>
#include <wchar.h>
#include <GameEventSys.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Viewer.h>
#include <Render\objects\core.h>
#include <task.h>
#include <queue>
#include <Render\gl\types.h>
#include <stack>
#include <UserInterface\SharedGraphicFactory.h>
#include <Mathlib\matvec.h>
#include <mainuidefines.h>
#include <UserInterface\Graphic.h>
#include <UserInterface\NewUIScreenManager.h>

/* ---------- constants */

/* ---------- definitions */

struct MainUIImpl::parseSelectionPriorities::__l2::<unnamed-type-tablesToRead>
{
    char *tableName; // 0x0
    Selector::PriorityModifiers *array; // 0x4
};
static_assert(sizeof(MainUIImpl::parseSelectionPriorities::__l2::<unnamed-type-tablesToRead>) == 8, "Invalid MainUIImpl::parseSelectionPriorities::__l2::<unnamed-type-tablesToRead> size");

/* ---------- prototypes */

extern void muiImplRegisterTweaks();

_static float muiBlobSensorsEquipped(Sob *obj);
_static float muiBlobResource(Sob *obj);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x7603F0
    extern float const ViewerUpdatePeriod; // 0x833CB8
    extern float const CameraDistanceUpdateRate; // 0x7603F4
    extern float const CameraDistanceUpdatePeriod; // 0x833CBC
    extern CommandType commandModeToCommandType[25]; // 0x833A50
    extern char twkSensorsSphereTexture[256]; // 0x833AB8
    extern char twkSensorsSphereMesh[256]; // 0x833BB8
}

/* ---------- public code */

_extern _sub_4541D6(MainUIImpl *const, Pieplate *, Selector *, SensorsManager *);
MainUIImpl::MainUIImpl(Pieplate *, Selector *, SensorsManager *) // 0x4541D6
{
    mangled_assert("??0MainUIImpl@@QAE@PAVPieplate@@PAVSelector@@PAVSensorsManager@@@Z");
    todo("implement");
    _sub_4541D6(this, arg, arg, arg);
}

_extern _sub_45453F(Selection::Observer *const);
_inline Selection::Observer::Observer() // 0x45453F
{
    mangled_assert("??0Observer@Selection@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_45453F(this);
}

_extern void _sub_45454D(MainUIImpl *const);
MainUIImpl::~MainUIImpl() // 0x45454D
{
    mangled_assert("??1MainUIImpl@@QAE@XZ");
    todo("implement");
    _sub_45454D(this);
}

_extern void _sub_454DD4(MainUIImpl *const);
void MainUIImpl::parseSelectionPriorities() // 0x454DD4
{
    mangled_assert("?parseSelectionPriorities@MainUIImpl@@AAEXXZ");
    todo("implement");
    _sub_454DD4(this);
}

_extern void _sub_455894(MainUIImpl *const, MUI_States);
void MainUIImpl::setUIState(MUI_States) // 0x455894
{
    mangled_assert("?setUIState@MainUIImpl@@QAEXW4MUI_States@@@Z");
    todo("implement");
    _sub_455894(this, arg);
}

_extern void _sub_4559AB(MainUIImpl *const);
void MainUIImpl::updateSelTargs() // 0x4559AB
{
    mangled_assert("?updateSelTargs@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4559AB(this);
}

_extern void _sub_4547B8(MainUIImpl *const, Player *);
void MainUIImpl::attachCurrentPlayer(Player *) // 0x4547B8
{
    mangled_assert("?attachCurrentPlayer@MainUIImpl@@QAEXPAVPlayer@@@Z");
    todo("implement");
    _sub_4547B8(this, arg);
}

_extern bool _sub_4547D9(MainUIImpl *const, unsigned __int32, bool, bool);
bool MainUIImpl::commandModeTransition(unsigned __int32, bool, bool) // 0x4547D9
{
    mangled_assert("?commandModeTransition@MainUIImpl@@QAE_NI_N0@Z");
    todo("implement");
    bool __result = _sub_4547D9(this, arg, arg, arg);
    return __result;
}

_extern void _sub_455CD4(MainUIImpl *const, float, float);
void MainUIImpl::wideScreenInWithSound(float, float) // 0x455CD4
{
    mangled_assert("?wideScreenInWithSound@MainUIImpl@@QAEXMM@Z");
    todo("implement");
    _sub_455CD4(this, arg, arg);
}

_extern void _sub_455B71(MainUIImpl *const, float);
void MainUIImpl::wideScreenIn(float) // 0x455B71
{
    mangled_assert("?wideScreenIn@MainUIImpl@@QAEXM@Z");
    todo("implement");
    _sub_455B71(this, arg);
}

_extern void _sub_455B96(MainUIImpl *const, float, float, bool);
void MainUIImpl::wideScreenIn(float, float, bool) // 0x455B96
{
    mangled_assert("?wideScreenIn@MainUIImpl@@QAEXMM_N@Z");
    todo("implement");
    _sub_455B96(this, arg, arg, arg);
}

_extern void _sub_455D52(MainUIImpl *const, float);
void MainUIImpl::wideScreenOutWithSound(float) // 0x455D52
{
    mangled_assert("?wideScreenOutWithSound@MainUIImpl@@QAEXM@Z");
    todo("implement");
    _sub_455D52(this, arg);
}

_extern void _sub_455D1B(MainUIImpl *const, float);
void MainUIImpl::wideScreenOut(float) // 0x455D1B
{
    mangled_assert("?wideScreenOut@MainUIImpl@@QAEXM@Z");
    todo("implement");
    _sub_455D1B(this, arg);
}

_extern bool _sub_455D8A(MainUIImpl *const, float);
bool MainUIImpl::wideScreenUpdate(float) // 0x455D8A
{
    mangled_assert("?wideScreenUpdate@MainUIImpl@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_455D8A(this, arg);
    return __result;
}

_extern void _sub_4549C2(MainUIImpl *const, float, float);
void MainUIImpl::fadeOut(float, float) // 0x4549C2
{
    mangled_assert("?fadeOut@MainUIImpl@@QAEXMM@Z");
    todo("implement");
    _sub_4549C2(this, arg, arg);
}

_extern void _sub_454A07(MainUIImpl *const, float);
void MainUIImpl::fadeSet(float) // 0x454A07
{
    mangled_assert("?fadeSet@MainUIImpl@@QAEXM@Z");
    todo("implement");
    _sub_454A07(this, arg);
}

_extern bool _sub_454A3B(MainUIImpl *const, float);
bool MainUIImpl::fadeUpdate(float) // 0x454A3B
{
    mangled_assert("?fadeUpdate@MainUIImpl@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_454A3B(this, arg);
    return __result;
}

_extern void _sub_4549AD(MainUIImpl *const, vector4 const &);
void MainUIImpl::fadeColour(vector4 const &) // 0x4549AD
{
    mangled_assert("?fadeColour@MainUIImpl@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_4549AD(this, arg);
}

_extern void _sub_454900(MainUIImpl *const);
void MainUIImpl::enterPieplateHeightMode() // 0x454900
{
    mangled_assert("?enterPieplateHeightMode@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_454900(this);
}

_extern void _sub_4559A3(MainUIImpl *const);
void MainUIImpl::tryToSnapToSquadFoot() // 0x4559A3
{
    mangled_assert("?tryToSnapToSquadFoot@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4559A3(this);
}

_extern bool _sub_454C12(MainUIImpl *const);
bool MainUIImpl::leavePieplateHeightMode() // 0x454C12
{
    mangled_assert("?leavePieplateHeightMode@MainUIImpl@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_454C12(this);
    return __result;
}

_extern void _sub_454857(MainUIImpl *const);
void MainUIImpl::enterCameraMode() // 0x454857
{
    mangled_assert("?enterCameraMode@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_454857(this);
}

_extern void _sub_454B2F(MainUIImpl *const);
void MainUIImpl::leaveCameraMode() // 0x454B2F
{
    mangled_assert("?leaveCameraMode@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_454B2F(this);
}

_extern void _sub_454D66();
void muiImplRegisterTweaks() // 0x454D66
{
    mangled_assert("?muiImplRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_454D66();
}

_extern void _sub_45460E(MainUIImpl *const, Sob *);
void MainUIImpl::Notify_Insertion(Sob *) // 0x45460E
{
    mangled_assert("?Notify_Insertion@MainUIImpl@@EAEXPAVSob@@@Z");
    todo("implement");
    _sub_45460E(this, arg);
}

_extern void _sub_454616(MainUIImpl *const, Sob *);
void MainUIImpl::Notify_Removal(Sob *) // 0x454616
{
    mangled_assert("?Notify_Removal@MainUIImpl@@EAEXPAVSob@@@Z");
    todo("implement");
    _sub_454616(this, arg);
}

_extern void _sub_455A10(MainUIImpl *const, bool);
void MainUIImpl::updateSensorsBlobs(bool) // 0x455A10
{
    mangled_assert("?updateSensorsBlobs@MainUIImpl@@QAEX_N@Z");
    todo("implement");
    _sub_455A10(this, arg);
}

_extern CommandType _sub_4545F3(MainUIImpl *const);
CommandType MainUIImpl::CommandModeToCommand() // 0x4545F3
{
    mangled_assert("?CommandModeToCommand@MainUIImpl@@QAE?AW4CommandType@@XZ");
    todo("implement");
    CommandType __result = _sub_4545F3(this);
    return __result;
}

/* ---------- private code */

_extern float _sub_454CD7(Sob *);
_static float muiBlobSensorsEquipped(Sob *obj) // 0x454CD7
{
    mangled_assert("muiBlobSensorsEquipped");
    todo("implement");
    float __result = _sub_454CD7(obj);
    return __result;
}

_extern float _sub_454CCB(Sob *);
_static float muiBlobResource(Sob *obj) // 0x454CCB
{
    mangled_assert("muiBlobResource");
    todo("implement");
    float __result = _sub_454CCB(obj);
    return __result;
}
#endif

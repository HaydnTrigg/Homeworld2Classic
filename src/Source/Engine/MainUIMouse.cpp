#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\capsule.h>
#include <Render\objects\objects.h>
#include <Collision\Primitives\segment.h>
#include <assist\stlexsmallvector.h>
#include <Render\objects\core.h>
#include <Collision\BVH\profiling.h>
#include <OrderFeedback.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <HyperspaceManager.h>
#include <pch.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SquadronList.h>
#include <weaponinfo.h>
#include <Player.h>
#include <ResearchManager.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <sob.h>
#include <fileio\md5.h>
#include <sobstatic.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\sphere.h>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\uitypes.h>
#include <gamestructimpl.h>
#include <platform\inputinterface.h>
#include <new>
#include <Badge.h>
#include <platform\keydefines.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <platform\timer.h>
#include <task.h>
#include <platform\platformexports.h>
#include <stack>
#include <playerresourcetype.h>
#include <FormHyperspaceGateCommand.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <seInterface2\SampleID.h>
#include <vector>
#include <seInterface2\SampleBase.h>
#include <ship.h>
#include <xmemory>
#include <ShieldTypes.h>
#include <fileio\fileioexports.h>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <Subsystems\HardPointManager.h>
#include <boost\static_assert.hpp>
#include <math.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <list>
#include <SensorsManager.h>
#include <Subsystems\SubSystemType.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <DynamicPoint.h>
#include <Mathlib\vector3.h>
#include <Waypoint.h>
#include <Mathlib\vector4.h>
#include <SobUnmoveable.h>
#include <Render\gl\r_defines.h>
#include <map>
#include <Render\gl\glext.h>
#include <renderer.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <Render\gl\types.h>
#include <Parade.h>
#include <boost\scoped_ptr.hpp>
#include <Render\gl\lotypes.h>
#include <Ship\FormationTargetInfo.h>
#include <SensorsBlobs.h>
#include <DockCommand.h>
#include <Render\objects\textureregistry.h>
#include <Mathlib\vector2.h>
#include <hash_map>
#include <util\types.h>
#include <seInterface2\sedefinesshared.h>
#include <xhash>
#include <Universe.h>
#include <CameraCommand.h>
#include <SOBGroupManager.h>
#include <CameraHW.h>
#include <abilities.h>
#include <Camera\CameraOrbitTarget.h>
#include <boost\cstdint.hpp>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <MeshAnimation.h>
#include <boost\config.hpp>
#include <Camera\Plane3.h>
#include <Sob\Resource\ResourceStatic.h>
#include <sobid.h>
#include <mainuidefines.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <platform\sysinputinterface.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Ship\Formation.h>
#include <platform\osdef.h>
#include <StrikeGroup.h>
#include <Ship\FormationPattern.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <KeyBindings.h>
#include <seInterface2\PatchBase.h>
#include <dbdefines.h>
#include <seInterface2\SoundParams.h>
#include <MainUICommands.h>
#include <pathpoints.h>
#include <UnitCaps\UnitCaps.h>
#include <debug\db.h>
#include <Collision\Primitives\aabb.h>
#include <Viewer.h>
#include <deque>
#include <Race.h>
#include <Squadron.h>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Mathlib\mathutil.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Interface.h>
#include <command.h>
#include <selection.h>
#include <Pieplate.h>
#include <savegamedef.h>
#include <fixedpoint.h>
#include <TeamColourRegistry.h>
#include <Modifiers\ModifierTargetCache.h>
#include <boost\detail\shared_count.hpp>
#include <util\fixed.h>
#include <savegame.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <BuildManager.h>
#include <SobWithMeshStatic.h>
#include <gameSettings.h>
#include <Sob\Resource\Resource.h>
#include <config.h>
#include <region.h>
#include <SobWithMesh.h>
#include <syncChecking.h>
#include <SobRigidBody.h>
#include <resourceCommand.h>
#include <scripting.h>
#include <SobRigidBodyStatic.h>
#include <Camera\OrbitParameters.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <MainUI.h>
#include <Selector.h>
#include <wchar.h>
#include <prim.h>
#include <lua.h>
#include <queue>
#include <SoundManager\SoundManager.h>
#include <MainUIImpl.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Cursor.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Render\objects\texture.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void uiNULL(MainUIImpl *pMainUI);
extern void uiSelectHold(MainUIImpl *pMainUI);
extern void uiMoveHold(MainUIImpl *pMainUI);
extern void uiCameraMotion(MainUIImpl *pMainUI);
extern void muiMouseRegisterTweaks();

/* ---------- globals */

extern float muiTwkBandBoxThreshold; // 0x833D00
extern float muiTwkCameraDragThreshold; // 0x833D04
extern float muiTwkMouseClickSpeed; // 0x833D08
extern float muiTwkMaxDistanceForGroupSelection; // 0x833D10

/* ---------- private variables */

_static
{
    extern bool muiTwkLeftClickCancels; // 0x843998
    extern bool muiTwkLeftClickAcknowledges; // 0x833D0C
    extern bool muiTwkLeftClickSnaps; // 0x833D0D
    extern bool bPressedSingleForDouble; // 0x843999
    extern float const ViewerUpdateRate; // 0x760B90
    extern float const ViewerUpdatePeriod; // 0x833D14
    extern float const CameraDistanceUpdateRate; // 0x760B94
    extern float const CameraDistanceUpdatePeriod; // 0x833D18
}

/* ---------- public code */

_extern void _sub_45808A(MainUIImpl *const);
void MainUIImpl::pressLeft() // 0x45808A
{
    mangled_assert("?pressLeft@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45808A(this);
}

_extern void _sub_4565BB(MainUIImpl *const);
void MainUIImpl::doublePressLeft() // 0x4565BB
{
    mangled_assert("?doublePressLeft@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4565BB(this);
}

_extern void _sub_4565ED(MainUIImpl *const);
void MainUIImpl::doubleReleaseLeft() // 0x4565ED
{
    mangled_assert("?doubleReleaseLeft@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4565ED(this);
}

_extern void _sub_456C6E(MainUIImpl *const);
void MainUIImpl::holdLeft() // 0x456C6E
{
    mangled_assert("?holdLeft@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_456C6E(this);
}

_extern void _sub_45829F(MainUIImpl *const);
void MainUIImpl::releaseLeft() // 0x45829F
{
    mangled_assert("?releaseLeft@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45829F(this);
}

_extern void _sub_4581CB(MainUIImpl *const);
void MainUIImpl::pressRight() // 0x4581CB
{
    mangled_assert("?pressRight@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4581CB(this);
}

_extern void _sub_456D2F(MainUIImpl *const);
void MainUIImpl::holdRight() // 0x456D2F
{
    mangled_assert("?holdRight@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_456D2F(this);
}

_extern void _sub_45836F(MainUIImpl *const);
void MainUIImpl::releaseRight() // 0x45836F
{
    mangled_assert("?releaseRight@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45836F(this);
}

_extern void _sub_45816C(MainUIImpl *const);
void MainUIImpl::pressMiddle() // 0x45816C
{
    mangled_assert("?pressMiddle@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45816C(this);
}

_extern void _sub_456FE8(MainUIImpl *const);
void MainUIImpl::onClickLeft() // 0x456FE8
{
    mangled_assert("?onClickLeft@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_456FE8(this);
}

_extern void _sub_457FC6(MainUIImpl *const);
void MainUIImpl::onDragStartLeft() // 0x457FC6
{
    mangled_assert("?onDragStartLeft@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457FC6(this);
}

_extern void _sub_457DE1(MainUIImpl *const, bool);
void MainUIImpl::onDragEndLeft(bool) // 0x457DE1
{
    mangled_assert("?onDragEndLeft@MainUIImpl@@QAEX_N@Z");
    todo("implement");
    _sub_457DE1(this, arg);
}

_extern void _sub_457FB5(MainUIImpl *const);
void MainUIImpl::onDragLeft() // 0x457FB5
{
    mangled_assert("?onDragLeft@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457FB5(this);
}

_extern void _sub_457743(MainUIImpl *const);
void MainUIImpl::onClickRight() // 0x457743
{
    mangled_assert("?onClickRight@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457743(this);
}

_extern void _sub_458050(MainUIImpl *const);
void MainUIImpl::onDragStartRight() // 0x458050
{
    mangled_assert("?onDragStartRight@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_458050(this);
}

_extern void _sub_457EB8(MainUIImpl *const, bool);
void MainUIImpl::onDragEndRight(bool) // 0x457EB8
{
    mangled_assert("?onDragEndRight@MainUIImpl@@QAEX_N@Z");
    todo("implement");
    _sub_457EB8(this, arg);
}

_extern void _sub_457FBE(MainUIImpl *const);
void MainUIImpl::onDragRight() // 0x457FBE
{
    mangled_assert("?onDragRight@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457FBE(this);
}

_extern void _sub_457742(MainUIImpl *const);
void MainUIImpl::onClickMiddle() // 0x457742
{
    mangled_assert("?onClickMiddle@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457742(this);
}

_extern void _sub_45804F(MainUIImpl *const);
void MainUIImpl::onDragStartMiddle() // 0x45804F
{
    mangled_assert("?onDragStartMiddle@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45804F(this);
}

_extern void _sub_457EB5(MainUIImpl *const, bool);
void MainUIImpl::onDragEndMiddle(bool) // 0x457EB5
{
    mangled_assert("?onDragEndMiddle@MainUIImpl@@QAEX_N@Z");
    todo("implement");
    _sub_457EB5(this, arg);
}

_extern void _sub_457FBD(MainUIImpl *const);
void MainUIImpl::onDragMiddle() // 0x457FBD
{
    mangled_assert("?onDragMiddle@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457FBD(this);
}

_extern void _sub_4571D8(MainUIImpl *const);
void MainUIImpl::onClickLeft_SELECTION() // 0x4571D8
{
    mangled_assert("?onClickLeft_SELECTION@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4571D8(this);
}

_extern void _sub_45746C(MainUIImpl *const);
void MainUIImpl::onClickLeft_SELECTION_ADD() // 0x45746C
{
    mangled_assert("?onClickLeft_SELECTION_ADD@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45746C(this);
}

_extern void _sub_457661(MainUIImpl *const);
void MainUIImpl::onClickLeft_SELECTION_EYE() // 0x457661
{
    mangled_assert("?onClickLeft_SELECTION_EYE@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457661(this);
}

_extern void _sub_457130(MainUIImpl *const);
void MainUIImpl::onClickLeft_MOVE() // 0x457130
{
    mangled_assert("?onClickLeft_MOVE@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457130(this);
}

_extern void _sub_457168(MainUIImpl *const);
void MainUIImpl::onClickLeft_MOVEATTACK() // 0x457168
{
    mangled_assert("?onClickLeft_MOVEATTACK@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457168(this);
}

_extern void _sub_4570C0(MainUIImpl *const);
void MainUIImpl::onClickLeft_HYPERSPACE() // 0x4570C0
{
    mangled_assert("?onClickLeft_HYPERSPACE@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4570C0(this);
}

_extern void _sub_4571A0(MainUIImpl *const);
void MainUIImpl::onClickLeft_RALLYPOINT() // 0x4571A0
{
    mangled_assert("?onClickLeft_RALLYPOINT@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4571A0(this);
}

_extern void _sub_4570F8(MainUIImpl *const);
void MainUIImpl::onClickLeft_MINERADIUS() // 0x4570F8
{
    mangled_assert("?onClickLeft_MINERADIUS@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4570F8(this);
}

_extern void _sub_4576E9(MainUIImpl *const);
void MainUIImpl::onClickLeft_WAYPOINT() // 0x4576E9
{
    mangled_assert("?onClickLeft_WAYPOINT@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4576E9(this);
}

_extern void _sub_457707(MainUIImpl *const);
void MainUIImpl::onClickLeft_WAYPOINT_MOVE() // 0x457707
{
    mangled_assert("?onClickLeft_WAYPOINT_MOVE@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457707(this);
}

_extern void _sub_4576CB(MainUIImpl *const);
void MainUIImpl::onClickLeft_TEMP_WAYPOINT() // 0x4576CB
{
    mangled_assert("?onClickLeft_TEMP_WAYPOINT@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4576CB(this);
}

_extern void _sub_457AB2(MainUIImpl *const);
void MainUIImpl::onClickRight_SELECTION() // 0x457AB2
{
    mangled_assert("?onClickRight_SELECTION@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457AB2(this);
}

_extern void _sub_457934(MainUIImpl *const);
void MainUIImpl::onClickRight_MOVE() // 0x457934
{
    mangled_assert("?onClickRight_MOVE@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457934(this);
}

_extern void _sub_4579FE(MainUIImpl *const);
void MainUIImpl::onClickRight_MOVEATTACK() // 0x4579FE
{
    mangled_assert("?onClickRight_MOVEATTACK@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4579FE(this);
}

_extern void _sub_45781B(MainUIImpl *const);
void MainUIImpl::onClickRight_HYPERSPACE() // 0x45781B
{
    mangled_assert("?onClickRight_HYPERSPACE@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_45781B(this);
}

_extern void _sub_457A59(MainUIImpl *const);
void MainUIImpl::onClickRight_RALLYPOINT() // 0x457A59
{
    mangled_assert("?onClickRight_RALLYPOINT@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457A59(this);
}

_extern void _sub_4578C7(MainUIImpl *const);
void MainUIImpl::onClickRight_MINERADIUS() // 0x4578C7
{
    mangled_assert("?onClickRight_MINERADIUS@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4578C7(this);
}

_extern void _sub_457C90(MainUIImpl *const);
void MainUIImpl::onClickRight_WAYPOINT() // 0x457C90
{
    mangled_assert("?onClickRight_WAYPOINT@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457C90(this);
}

_extern void _sub_457D0D(MainUIImpl *const, bool);
void MainUIImpl::onClickRight_WAYPOINT_MOVE(bool) // 0x457D0D
{
    mangled_assert("?onClickRight_WAYPOINT_MOVE@MainUIImpl@@QAEX_N@Z");
    todo("implement");
    _sub_457D0D(this, arg);
}

_extern void _sub_457BD7(MainUIImpl *const);
void MainUIImpl::onClickRight_TEMP_WAYPOINT() // 0x457BD7
{
    mangled_assert("?onClickRight_TEMP_WAYPOINT@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_457BD7(this);
}

_extern void _sub_456390(MainUIImpl *const, float, float);
void MainUIImpl::detectMouseOver(float, float) // 0x456390
{
    mangled_assert("?detectMouseOver@MainUIImpl@@QAEXMM@Z");
    todo("implement");
    _sub_456390(this, arg, arg);
}

_extern MUI_CommandModes _sub_456015(MainUIImpl *const, Selection const &, float, float);
MUI_CommandModes MainUIImpl::bestCommandMode(Selection const &, float, float) // 0x456015
{
    mangled_assert("?bestCommandMode@MainUIImpl@@QAE?AW4MUI_CommandModes@@ABVSelection@@MM@Z");
    todo("implement");
    MUI_CommandModes __result = _sub_456015(this, arg, arg, arg);
    return __result;
}

_extern MUI_CommandModes _sub_456121(MainUIImpl *const, Ship const *, Selection const &, bool, bool);
MUI_CommandModes MainUIImpl::bestCommandModeForShip(Ship const *, Selection const &, bool, bool) // 0x456121
{
    mangled_assert("?bestCommandModeForShip@MainUIImpl@@QAE?AW4MUI_CommandModes@@PBVShip@@ABVSelection@@_N2@Z");
    todo("implement");
    MUI_CommandModes __result = _sub_456121(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_456613(MainUIImpl *const, float, float);
void MainUIImpl::evaluateMouseOver(float, float) // 0x456613
{
    mangled_assert("?evaluateMouseOver@MainUIImpl@@QAEXMM@Z");
    todo("implement");
    _sub_456613(this, arg, arg);
}

_extern void _sub_455F27(MainUIImpl const *const, Sob *, Selection &);
void MainUIImpl::appendShipGroup(Sob *, Selection &) const // 0x455F27
{
    mangled_assert("?appendShipGroup@MainUIImpl@@ABEXPAVSob@@AAVSelection@@@Z");
    todo("implement");
    _sub_455F27(this, arg, arg);
}

_extern void _sub_456ABC(MainUIImpl *const);
void MainUIImpl::groupifyMouseOver() // 0x456ABC
{
    mangled_assert("?groupifyMouseOver@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_456ABC(this);
}

_extern void _sub_4564D0(MainUIImpl *const);
void MainUIImpl::doBandbox() // 0x4564D0
{
    mangled_assert("?doBandbox@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_4564D0(this);
}

_extern bool _sub_456DE6(MainUIImpl *const, float, float, vector3 *, std::vector<vector3,std::allocator<vector3> > **);
bool MainUIImpl::isCursorOverWaypointPath(float, float, vector3 *, std::vector<vector3,std::allocator<vector3> > **) // 0x456DE6
{
    mangled_assert("?isCursorOverWaypointPath@MainUIImpl@@QAE_NMMPAVvector3@@PAPAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_456DE6(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_458444(MainUIImpl *const);
void MainUIImpl::resetKeys() // 0x458444
{
    mangled_assert("?resetKeys@MainUIImpl@@QAEXXZ");
    todo("implement");
    _sub_458444(this);
}

_extern void _sub_4584FA(MainUIImpl *);
void uiNULL(MainUIImpl *pMainUI) // 0x4584FA
{
    mangled_assert("?uiNULL@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_4584FA(pMainUI);
}

_extern void _sub_4584FD(MainUIImpl *);
void uiSelectHold(MainUIImpl *pMainUI) // 0x4584FD
{
    mangled_assert("?uiSelectHold@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_4584FD(pMainUI);
}

_extern void _sub_4584F7(MainUIImpl *);
void uiMoveHold(MainUIImpl *pMainUI) // 0x4584F7
{
    mangled_assert("?uiMoveHold@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_4584F7(pMainUI);
}

_extern void _sub_4584B7(MainUIImpl *);
void uiCameraMotion(MainUIImpl *pMainUI) // 0x4584B7
{
    mangled_assert("?uiCameraMotion@@YGXPAVMainUIImpl@@@Z");
    todo("implement");
    _sub_4584B7(pMainUI);
}

_extern void _sub_456E7E();
void muiMouseRegisterTweaks() // 0x456E7E
{
    mangled_assert("?muiMouseRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_456E7E();
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <assist\stlexsmallvector.h>
#include <Collision\BVH\profiling.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Render\objects\textureregistry.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <MainUIImpl.h>
#include <Cursor.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <sob.h>
#include <Render\gl\types.h>
#include <sobstatic.h>
#include <Mathlib\matrix3.h>
#include <HyperspaceManager.h>
#include <Render\gl\lotypes.h>
#include <profile\profile.h>
#include <Collision\Primitives\sphere.h>
#include <iostream>
#include <new>
#include <ParadeCommand.h>
#include <exception>
#include <commandtype.h>
#include <xstddef>
#include <type_traits>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <KeyBindings.h>
#include <MultiplierTypes.h>
#include <config.h>
#include <Collision\BVH\bvh.h>
#include <Universe.h>
#include <Waypoint.h>
#include <xutility>
#include <SobUnmoveable.h>
#include <utility>
#include <iosfwd>
#include <seInterface2\SampleID.h>
#include <vector>
#include <seInterface2\SampleBase.h>
#include <xmemory>
#include <SensorsBlobs.h>
#include <subtitle.h>
#include <luaconfig\luaconfig.h>
#include <Menus\SubtitleScreen.h>
#include <lua.h>
#include <MetaSelTarg.h>
#include <UserInterface\NewUIScreen.h>
#include <SelTarg.h>
#include <region.h>
#include <compiler\compilerconfig.h>
#include <platform\keydefines.h>
#include <Modifiers\ModifierTargetCache.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <playerresourcetype.h>
#include <list>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <UserInterface\NewFrame.h>
#include <Mathlib\vector3.h>
#include <mainuidefines.h>
#include <UserInterface\InterfaceElement.h>
#include <Mathlib\vector4.h>
#include <platform\osdef.h>
#include <UserInterface\uitypes.h>
#include <Race.h>
#include <platform\inputinterface.h>
#include <Render\gl\r_defines.h>
#include <SobWithMeshStatic.h>
#include <map>
#include <Render\gl\glext.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <Squadron.h>
#include <ship.h>
#include <boost\scoped_ptr.hpp>
#include <command.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <seInterface2\sedefinesshared.h>
#include <OrderFeedback.h>
#include <SquadronList.h>
#include <abilities.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <sobid.h>
#include <weaponinfo.h>
#include <boost\scoped_array.hpp>
#include <TacticalOverlay.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <task.h>
#include <Collision\BVH\proxy.h>
#include <stack>
#include <Collision\intersect.h>
#include <TeamColourRegistry.h>
#include <assist\typemagic.h>
#include <Collision\primitivesfwd.h>
#include <savegame.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <BuildManager.h>
#include <seInterface2\PatchBase.h>
#include <ProfileSystem.h>
#include <seInterface2\SoundParams.h>
#include <MainUICommands.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Collision\Primitives\aabb.h>
#include <ProfilePerFrame.h>
#include <deque>
#include <Parade.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Pieplate.h>
#include <SOBGroupManager.h>
#include <bitset>
#include <fixedpoint.h>
#include <hash_map>
#include <boost\detail\lwm_win32.hpp>
#include <util\fixed.h>
#include <xhash>
#include <gameRender.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Viewer.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\textureproxy.h>
#include <UserInterface\signals.h>
#include <Camera\OrbitParameters.h>
#include <Player.h>
#include <CameraCommand.h>
#include <ResearchManager.h>
#include <MainUI.h>
#include <CameraHW.h>
#include <Selector.h>
#include <wchar.h>
#include <Camera\CameraOrbitTarget.h>
#include <prim.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Mathlib\mathutil.h>
#include <queue>
#include <SoundManager\SoundManager.h>
#include <DynamicPoint.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>

/* ---------- constants */

/* ---------- definitions */

struct CommandCallback
{
    unsigned __int32 command; // 0x0
    void (*callback)(MainUIImpl *); // 0x4
};
static_assert(sizeof(CommandCallback) == 8, "Invalid CommandCallback size");

typedef void (*MUI_CommandCallback)(MainUIImpl *);

/* ---------- prototypes */

extern bool muiStartup();
extern bool muiShutdown();
extern void muiRegisterTweaks();
extern bool muiSavePrepare(SaveGameData *saveGameData, SaveType saveType);
extern bool muiRestorePrepare(SaveGameData *saveGameData);

_static void (*muiFindCommandCallback(unsigned __int32 command))(MainUIImpl *);

/* ---------- globals */

extern MainUI *MainUI::s_instance; // 0x843994

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x833850
    extern float subtitleTwkScrollDwellEnd; // 0x833854
    extern float subtitleTwkScrollShortest; // 0x833858
    extern float subtitleTwkTitleShortest; // 0x83385C
    extern float const ViewerUpdateRate; // 0x7602E8
    extern float const ViewerUpdatePeriod; // 0x8339B0
    extern float const CameraDistanceUpdateRate; // 0x7602EC
    extern float const CameraDistanceUpdatePeriod; // 0x8339B4
    extern CommandCallback g_commandCallbacks[42]; // 0x833860
}

/* ---------- public code */

_extern bool _sub_451666();
bool muiStartup() // 0x451666
{
    mangled_assert("?muiStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_451666();
    return __result;
}

_extern bool _sub_45165E();
bool muiShutdown() // 0x45165E
{
    mangled_assert("?muiShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_45165E();
    return __result;
}

_extern _sub_450D09(MainUI *const);
MainUI::MainUI() // 0x450D09
{
    mangled_assert("??0MainUI@@QAE@XZ");
    todo("implement");
    _sub_450D09(this);
}

_extern void _sub_450E40(MainUI *const);
MainUI::~MainUI() // 0x450E40
{
    mangled_assert("??1MainUI@@QAE@XZ");
    todo("implement");
    _sub_450E40(this);
}

_extern void _sub_450ECB(Selector *const);
_inline Selector::~Selector() // 0x450ECB
{
    mangled_assert("??1Selector@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_450ECB(this);
}

_extern MainUI *_sub_45151A();
MainUI *MainUI::i() // 0x45151A
{
    mangled_assert("?i@MainUI@@SGPAV1@XZ");
    todo("implement");
    MainUI * __result = _sub_45151A();
    return __result;
}

_extern MainUI *_sub_451087();
MainUI *MainUI::create() // 0x451087
{
    mangled_assert("?create@MainUI@@KGPAV1@XZ");
    todo("implement");
    MainUI * __result = _sub_451087();
    return __result;
}

_extern bool _sub_4516B2();
bool MainUI::release() // 0x4516B2
{
    mangled_assert("?release@MainUI@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4516B2();
    return __result;
}

_extern bool _sub_45156A();
bool MainUI::isCreated() // 0x45156A
{
    mangled_assert("?isCreated@MainUI@@SG_NXZ");
    todo("implement");
    bool __result = _sub_45156A();
    return __result;
}

_extern void _sub_4516ED(MainUI *const, float);
void MainUI::renderTimeUpdate(float) // 0x4516ED
{
    mangled_assert("?renderTimeUpdate@MainUI@@QAEXM@Z");
    todo("implement");
    _sub_4516ED(this, arg);
}

_extern void _sub_451062(MainUI *const, Player *);
void MainUI::attachCurrentPlayer(Player *) // 0x451062
{
    mangled_assert("?attachCurrentPlayer@MainUI@@QAEXPAVPlayer@@@Z");
    todo("implement");
    _sub_451062(this, arg);
}

_extern bool _sub_4515D1(MainUI *const);
bool MainUI::isWaypointVisible() // 0x4515D1
{
    mangled_assert("?isWaypointVisible@MainUI@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4515D1(this);
    return __result;
}

_extern bool _sub_4515AF(MainUI *const);
bool MainUI::isWaypointMode() // 0x4515AF
{
    mangled_assert("?isWaypointMode@MainUI@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4515AF(this);
    return __result;
}

_extern bool _sub_451583(MainUI *const);
bool MainUI::isMoveMode() // 0x451583
{
    mangled_assert("?isMoveMode@MainUI@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_451583(this);
    return __result;
}

_extern vector3 const &_sub_4514B8(MainUI *const);
vector3 const &MainUI::getMoveOrigin() // 0x4514B8
{
    mangled_assert("?getMoveOrigin@MainUI@@QAEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4514B8(this);
    return __result;
}

_extern vector3 const &_sub_4514B0(MainUI *const);
vector3 const &MainUI::getModeDest() // 0x4514B0
{
    mangled_assert("?getModeDest@MainUI@@QAEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4514B0(this);
    return __result;
}

_extern void _sub_451047(MainUI *const, vector3 &, float);
void MainUI::addFoot(vector3 &, float) // 0x451047
{
    mangled_assert("?addFoot@MainUI@@QAEXAAVvector3@@M@Z");
    todo("implement");
    _sub_451047(this, arg, arg);
}

_extern bool _sub_451559(MainUI *const, unsigned __int32);
bool MainUI::isCommandEnabled(unsigned __int32) // 0x451559
{
    mangled_assert("?isCommandEnabled@MainUI@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_451559(this, arg);
    return __result;
}

_extern bool _sub_451576(MainUI *const);
bool MainUI::isDrawGUIEnabled() // 0x451576
{
    mangled_assert("?isDrawGUIEnabled@MainUI@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_451576(this);
    return __result;
}

_extern SensorsBlobArray const *_sub_4514CD(MainUI *const);
SensorsBlobArray const *MainUI::getSensorsBlobs() // 0x4514CD
{
    mangled_assert("?getSensorsBlobs@MainUI@@QAEPBVSensorsBlobArray@@XZ");
    todo("implement");
    SensorsBlobArray const * __result = _sub_4514CD(this);
    return __result;
}

_extern void _sub_4519BF(MainUI *const, unsigned __int32, __int32, __int32);
void MainUI::uiCommand(unsigned __int32, __int32, __int32) // 0x4519BF
{
    mangled_assert("?uiCommand@MainUI@@QAEXIHH@Z");
    todo("implement");
    _sub_4519BF(this, arg, arg, arg);
}

_extern void _sub_4512C1(MainUI *const, bool);
void MainUI::enableMainUI(bool) // 0x4512C1
{
    mangled_assert("?enableMainUI@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_4512C1(this, arg);
}

_extern void _sub_451158(MainUI *const, unsigned __int32);
void MainUI::disableCommand(unsigned __int32) // 0x451158
{
    mangled_assert("?disableCommand@MainUI@@QAEXI@Z");
    todo("implement");
    _sub_451158(this, arg);
}

_extern void _sub_451250(MainUI *const, unsigned __int32);
void MainUI::enableCommand(unsigned __int32) // 0x451250
{
    mangled_assert("?enableCommand@MainUI@@QAEXI@Z");
    todo("implement");
    _sub_451250(this, arg);
}

_extern void _sub_4510D6(MainUI *const);
void MainUI::disableAllCommands() // 0x4510D6
{
    mangled_assert("?disableAllCommands@MainUI@@QAEXXZ");
    todo("implement");
    _sub_4510D6(this);
}

_extern void _sub_4511CA(MainUI *const);
void MainUI::enableAllCommands() // 0x4511CA
{
    mangled_assert("?enableAllCommands@MainUI@@QAEXXZ");
    todo("implement");
    _sub_4511CA(this);
}

_extern void _sub_451720(MainUI *const);
void MainUI::resetCommand() // 0x451720
{
    mangled_assert("?resetCommand@MainUI@@QAEXXZ");
    todo("implement");
    _sub_451720(this);
}

_extern void _sub_4511F4(MainUI *const);
void MainUI::enableAllRightClickCommands() // 0x4511F4
{
    mangled_assert("?enableAllRightClickCommands@MainUI@@QAEXXZ");
    todo("implement");
    _sub_4511F4(this);
}

_extern void _sub_451124(MainUI *const);
void MainUI::disableAllRightClickCommands() // 0x451124
{
    mangled_assert("?disableAllRightClickCommands@MainUI@@QAEXXZ");
    todo("implement");
    _sub_451124(this);
}

_extern void _sub_4513CA(MainUI *const, unsigned __int32);
void MainUI::enableRightClickCommand(unsigned __int32) // 0x4513CA
{
    mangled_assert("?enableRightClickCommand@MainUI@@QAEXI@Z");
    todo("implement");
    _sub_4513CA(this, arg);
}

_extern void _sub_451172(MainUI *const, unsigned __int32);
void MainUI::disableRightClickCommand(unsigned __int32) // 0x451172
{
    mangled_assert("?disableRightClickCommand@MainUI@@QAEXI@Z");
    todo("implement");
    _sub_451172(this, arg);
}

_extern bool _sub_45138B(MainUI *const, bool);
bool MainUI::enableMouseSelection(bool) // 0x45138B
{
    mangled_assert("?enableMouseSelection@MainUI@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_45138B(this, arg);
    return __result;
}

_extern bool _sub_4513A4(MainUI *const, bool);
bool MainUI::enablePanning(bool) // 0x4513A4
{
    mangled_assert("?enablePanning@MainUI@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_4513A4(this, arg);
    return __result;
}

_extern bool _sub_451372(MainUI *const, bool);
bool MainUI::enableMousePanning(bool) // 0x451372
{
    mangled_assert("?enableMousePanning@MainUI@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_451372(this, arg);
    return __result;
}

_extern bool _sub_4514C0(MainUI const *const);
bool MainUI::getSavedPanningFlag() const // 0x4514C0
{
    mangled_assert("?getSavedPanningFlag@MainUI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4514C0(this);
    return __result;
}

_extern void _sub_451866(MainUI *const, bool);
void MainUI::setSavedPanningFlag(bool) // 0x451866
{
    mangled_assert("?setSavedPanningFlag@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_451866(this, arg);
}

_extern bool _sub_451359(MainUI *const, bool);
bool MainUI::enableMouseOver(bool) // 0x451359
{
    mangled_assert("?enableMouseOver@MainUI@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_451359(this, arg);
    return __result;
}

_extern bool _sub_4513E4(MainUI *const, bool);
bool MainUI::enableRightClickMenu(bool) // 0x4513E4
{
    mangled_assert("?enableRightClickMenu@MainUI@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_4513E4(this, arg);
    return __result;
}

_extern void _sub_451217(MainUI *const, bool);
void MainUI::enableClickLeft(bool) // 0x451217
{
    mangled_assert("?enableClickLeft@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_451217(this, arg);
}

_extern void _sub_45123D(MainUI *const, bool);
void MainUI::enableClickRight(bool) // 0x45123D
{
    mangled_assert("?enableClickRight@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_45123D(this, arg);
}

_extern void _sub_45122A(MainUI *const, bool);
void MainUI::enableClickMiddle(bool) // 0x45122A
{
    mangled_assert("?enableClickMiddle@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_45122A(this, arg);
}

_extern void _sub_451275(MainUI *const, bool);
void MainUI::enableDragLeft(bool) // 0x451275
{
    mangled_assert("?enableDragLeft@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_451275(this, arg);
}

_extern void _sub_45129B(MainUI *const, bool);
void MainUI::enableDragRight(bool) // 0x45129B
{
    mangled_assert("?enableDragRight@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_45129B(this, arg);
}

_extern void _sub_451288(MainUI *const, bool);
void MainUI::enableDragMiddle(bool) // 0x451288
{
    mangled_assert("?enableDragMiddle@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_451288(this, arg);
}

_extern void _sub_4513BD(MainUI *const, bool);
void MainUI::enableRender(bool) // 0x4513BD
{
    mangled_assert("?enableRender@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_4513BD(this, arg);
}

_extern void _sub_451691(MainUI *const);
void MainUI::pressLeft() // 0x451691
{
    mangled_assert("?pressLeft@MainUI@@QAEXXZ");
    todo("implement");
    _sub_451691(this);
}

_extern void _sub_45118C(MainUI *const);
void MainUI::doublePressLeft() // 0x45118C
{
    mangled_assert("?doublePressLeft@MainUI@@QAEXXZ");
    todo("implement");
    _sub_45118C(this);
}

_extern void _sub_451197(MainUI *const);
void MainUI::doubleReleaseLeft() // 0x451197
{
    mangled_assert("?doubleReleaseLeft@MainUI@@QAEXXZ");
    todo("implement");
    _sub_451197(this);
}

_extern void _sub_451503(MainUI *const);
void MainUI::holdLeft() // 0x451503
{
    mangled_assert("?holdLeft@MainUI@@QAEXXZ");
    todo("implement");
    _sub_451503(this);
}

_extern void _sub_4516D6(MainUI *const);
void MainUI::releaseLeft() // 0x4516D6
{
    mangled_assert("?releaseLeft@MainUI@@QAEXXZ");
    todo("implement");
    _sub_4516D6(this);
}

_extern void _sub_4516A7(MainUI *const);
void MainUI::pressRight() // 0x4516A7
{
    mangled_assert("?pressRight@MainUI@@QAEXXZ");
    todo("implement");
    _sub_4516A7(this);
}

_extern void _sub_45150F(MainUI *const);
void MainUI::holdRight() // 0x45150F
{
    mangled_assert("?holdRight@MainUI@@QAEXXZ");
    todo("implement");
    _sub_45150F(this);
}

_extern void _sub_4516E2(MainUI *const);
void MainUI::releaseRight() // 0x4516E2
{
    mangled_assert("?releaseRight@MainUI@@QAEXXZ");
    todo("implement");
    _sub_4516E2(this);
}

_extern void _sub_45169C(MainUI *const);
void MainUI::pressMiddle() // 0x45169C
{
    mangled_assert("?pressMiddle@MainUI@@QAEXXZ");
    todo("implement");
    _sub_45169C(this);
}

_extern void _sub_45150E(MainUI *const);
void MainUI::holdMiddle() // 0x45150E
{
    mangled_assert("?holdMiddle@MainUI@@QAEXXZ");
    todo("implement");
    _sub_45150E(this);
}

_extern void _sub_4516E1(MainUI *const);
void MainUI::releaseMiddle() // 0x4516E1
{
    mangled_assert("?releaseMiddle@MainUI@@QAEXXZ");
    todo("implement");
    _sub_4516E1(this);
}

_extern void _sub_451731(MainUI *const);
void MainUI::resetKeys() // 0x451731
{
    mangled_assert("?resetKeys@MainUI@@QAEXXZ");
    todo("implement");
    _sub_451731(this);
}

_extern void _sub_4511A2(MainUI *const);
void MainUI::drawMainScreen() // 0x4511A2
{
    mangled_assert("?drawMainScreen@MainUI@@QAEXXZ");
    todo("implement");
    _sub_4511A2(this);
}

_extern void _sub_4518F9(MainUI *const, float);
void MainUI::setWidescreenValue(float) // 0x4518F9
{
    mangled_assert("?setWidescreenValue@MainUI@@QAEXM@Z");
    todo("implement");
    _sub_4518F9(this, arg);
}

_extern void _sub_45184B(MainUI *const, vector4 const &);
void MainUI::setLetterboxColour(vector4 const &) // 0x45184B
{
    mangled_assert("?setLetterboxColour@MainUI@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_45184B(this, arg);
}

_extern void _sub_451A32(MainUI *const, float);
void MainUI::wideScreenIn(float) // 0x451A32
{
    mangled_assert("?wideScreenIn@MainUI@@QAEXM@Z");
    todo("implement");
    _sub_451A32(this, arg);
}

_extern void _sub_451A5B(MainUI *const, float, float, bool);
void MainUI::wideScreenInNoSound(float, float, bool) // 0x451A5B
{
    mangled_assert("?wideScreenInNoSound@MainUI@@QAEXMM_N@Z");
    todo("implement");
    _sub_451A5B(this, arg, arg, arg);
}

_extern void _sub_451A86(MainUI *const, float);
void MainUI::wideScreenOut(float) // 0x451A86
{
    mangled_assert("?wideScreenOut@MainUI@@QAEXM@Z");
    todo("implement");
    _sub_451A86(this, arg);
}

_extern bool _sub_4515F6(MainUI *const);
bool MainUI::isWideScreenOn() // 0x4515F6
{
    mangled_assert("?isWideScreenOn@MainUI@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4515F6(this);
    return __result;
}

_extern void _sub_451A22(MainUI *const, bool);
void MainUI::wideScreenDisable(bool) // 0x451A22
{
    mangled_assert("?wideScreenDisable@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_451A22(this, arg);
}

_extern void _sub_451462(MainUI *const, float, float);
void MainUI::fadeOut(float, float) // 0x451462
{
    mangled_assert("?fadeOut@MainUI@@QAEXMM@Z");
    todo("implement");
    _sub_451462(this, arg, arg);
}

_extern void _sub_451489(MainUI *const, float);
void MainUI::fadeSet(float) // 0x451489
{
    mangled_assert("?fadeSet@MainUI@@QAEXM@Z");
    todo("implement");
    _sub_451489(this, arg);
}

_extern void _sub_45144D(MainUI *const, vector4 const &);
void MainUI::fadeColour(vector4 const &) // 0x45144D
{
    mangled_assert("?fadeColour@MainUI@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_45144D(this, arg);
}

_extern float _sub_451458(MainUI const *const);
float MainUI::fadeGetTime() const // 0x451458
{
    mangled_assert("?fadeGetTime@MainUI@@QBEMXZ");
    todo("implement");
    float __result = _sub_451458(this);
    return __result;
}

_extern bool _sub_451415(MainUI *const);
bool MainUI::fadeBack() // 0x451415
{
    mangled_assert("?fadeBack@MainUI@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_451415(this);
    return __result;
}

_extern void _sub_4512AE(MainUI *const, bool);
void MainUI::enableDrawGUI(bool) // 0x4512AE
{
    mangled_assert("?enableDrawGUI@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_4512AE(this, arg);
}

_extern void _sub_4514E6(MainUI *const, bool);
void MainUI::hideCursor(bool) // 0x4514E6
{
    mangled_assert("?hideCursor@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_4514E6(this, arg);
}

_extern void _sub_451951(MainUI *const, bool);
void MainUI::showCursor(bool) // 0x451951
{
    mangled_assert("?showCursor@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_451951(this, arg);
}

_extern void _sub_4511B7(MainUI *const, bool);
void MainUI::enableATIDisplay(bool) // 0x4511B7
{
    mangled_assert("?enableATIDisplay@MainUI@@QAEX_N@Z");
    todo("implement");
    _sub_4511B7(this, arg);
}

_extern void _sub_451879(MainUI *const, float, float, float);
void MainUI::setSensorsThreshold(float, float, float) // 0x451879
{
    mangled_assert("?setSensorsThreshold@MainUI@@QAEXMMM@Z");
    todo("implement");
    _sub_451879(this, arg, arg, arg);
}

_extern void _sub_45173C(MainUI *const);
void MainUI::restoreLocalPlayerHotkeys() // 0x45173C
{
    mangled_assert("?restoreLocalPlayerHotkeys@MainUI@@QAEXXZ");
    todo("implement");
    _sub_45173C(this);
}

_extern bool _sub_451533(MainUI const *const);
bool MainUI::inCameraMotion() const // 0x451533
{
    mangled_assert("?inCameraMotion@MainUI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_451533(this);
    return __result;
}

_extern void _sub_45162E();
void muiRegisterTweaks() // 0x45162E
{
    mangled_assert("?muiRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_45162E();
}

_extern bool _sub_45164C(SaveGameData *, SaveType);
bool muiSavePrepare(SaveGameData *saveGameData, SaveType saveType) // 0x45164C
{
    mangled_assert("?muiSavePrepare@@YG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_45164C(saveGameData, saveType);
    return __result;
}

_extern bool _sub_451647(SaveGameData *);
bool muiRestorePrepare(SaveGameData *saveGameData) // 0x451647
{
    mangled_assert("?muiRestorePrepare@@YG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_451647(saveGameData);
    return __result;
}

/* ---------- private code */

_extern void (*_sub_451605(unsigned __int32))(MainUIImpl *);
_static void (*muiFindCommandCallback(unsigned __int32 command))(MainUIImpl *) // 0x451605
{
    mangled_assert("muiFindCommandCallback");
    todo("implement");
    void (*)(MainUIImpl *) __result = _sub_451605(command);
    return __result;
}
#endif

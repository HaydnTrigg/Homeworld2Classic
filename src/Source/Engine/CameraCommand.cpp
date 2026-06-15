#if 0
/* ---------- headers */

#include "decomp.h"
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <SoundManager\SoundManager.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Camera\CameraInterpolation.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <CameraList.h>
#include <task.h>
#include <stack>
#include <Collision\BVH\octree.h>
#include <Player.h>
#include <Collision\BVH\span.h>
#include <ResearchManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <SoundManager\SoundEntityHandle.h>
#include <TimerMap.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Mathlib\matrix3.h>
#include <Collision\primitivesfwd.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <xutility>
#include <Collision\Primitives\obb.h>
#include <Selector.h>
#include <utility>
#include <iosfwd>
#include <MetaSelTarg.h>
#include <vector>
#include <Camera\CameraControl.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <seInterface2\SampleID.h>
#include <Camera\OrbitParameters.h>
#include <seInterface2\SampleBase.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <math.h>
#include <list>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <CameraTuning.h>
#include <Mathlib\vector3.h>
#include <MainUI.h>
#include <LevelDesc.h>
#include <Mathlib\vector4.h>
#include <SensorsManager.h>
#include <Hash.h>
#include <Render\gl\r_types.h>
#include <fileio\md5.h>
#include <Mathlib\matvec.h>
#include <map>
#include <Collision\Collision.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <SelTarg.h>
#include <gamestructimpl.h>
#include <prim.h>
#include <Badge.h>
#include <scripting.h>
#include <scriptaccess.h>
#include <Render\gl\r_defines.h>
#include <scripttypedef.h>
#include <Render\gl\glext.h>
#include <CameraCommand.h>
#include <Mathlib\vector2.h>
#include <CameraHW.h>
#include <sobid.h>
#include <util\types.h>
#include <Camera\CameraOrbitTarget.h>
#include <Collision\Primitives\capsule.h>
#include <lua.h>
#include <Camera\Camera.h>
#include <Collision\Primitives\segment.h>
#include <playerresourcetype.h>
#include <Camera\Frustum.h>
#include <Collision\BVH\profiling.h>
#include <Camera\Plane3.h>
#include <boost\cstdint.hpp>
#include <Mathlib\mathutil.h>
#include <boost\config.hpp>
#include <seInterface2\sedefinesshared.h>
#include <Race.h>
#include <boost\scoped_array.hpp>
#include <seInterface2\PatchID.h>
#include <profile\profile.h>
#include <seInterface2\PatchBase.h>
#include <Mathlib\quat.h>
#include <iostream>
#include <boost\static_assert.hpp>
#include <seInterface2\SoundParams.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <abilities.h>
#include <xhash>
#include <platform\cmdline.h>
#include <HyperspaceManager.h>
#include <Mathlib\mathlibdll.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <SquadronList.h>
#include <Mathlib\fastmath.h>
#include <MultiplierTypes.h>
#include <FocalPoint.h>
#include <Collision\BVH\bvh.h>
#include <Camera\FocusPoint.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <cameracommandextupdate.h>
#include <BuildManager.h>
#include <platform\inputinterface.h>
#include <gameSettings.h>
#include <GameObj.h>
#include <platform\keydefines.h>
#include <config.h>
#include <wchar.h>
#include <syncChecking.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Universe.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool ccStartup();
extern bool ccShutdown();
extern bool isSobMoving(Sob const *elem);
extern __int32 ccFocusCullRadiusMean(Selection &selection, float radiusSqr, vector3 *centreDest);
extern bool isLegalToFocusOn(Selection const &focus);
extern void preserveCameraOrientation(OrbitParameters &newParams, OrbitParameters const &oldParams);
extern void cameraCommandScriptRegister();

_static bool intersectLineWithShipOBB(vector3 const &start, vector3 const &end, Sob *pSob, vector3 &hitPosition);
_static void clampFocal(CameraOrbitTarget const &camera, OrbitParameters &focal);
_static bool ccShouldCameraBeLocked(Selection const &focus);
_static bool ccIsSobOnscreen(Sob const *s);
_static __int32 ccFocusCullRadiusGeneral(Selection &out, Selection &in, float const radiusSqr, vector3 const &center);
_static unsigned __int32 ccCountSobsNearPoint(Selection const &sel, float radiusSqr, vector3 const &center);

/* ---------- globals */

extern CameraCommand *g_pCameraCommand; // 0x844054
extern Sob *g_pCameraSobCollider; // 0x844050

/* ---------- private variables */

_static
{
    extern float twkCollapseTimeDelay; // 0x8362CC
}

/* ---------- public code */

bool ccStartup() // 0x4DDE61
{
    mangled_assert("?ccStartup@@YG_NXZ");
    todo("implement");
}

bool ccShutdown() // 0x4DDE47
{
    mangled_assert("?ccShutdown@@YG_NXZ");
    todo("implement");
}

bool isSobMoving(Sob const *elem) // 0x4DF6CB
{
    mangled_assert("?isSobMoving@@YG_NPBVSob@@@Z");
    todo("implement");
}

CameraCommand::CameraCommand() // 0x4DCCAC
{
    mangled_assert("??0CameraCommand@@QAE@XZ");
    todo("implement");
}

_inline CameraCommand::FocusDistance::FocusDistance() // 0x4DCDFF
{
    mangled_assert("??0FocusDistance@CameraCommand@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<CameraCommandExtUpdate *,std::allocator<CameraCommandExtUpdate *> >::~_List_buy<CameraCommandExtUpdate *,std::allocator<CameraCommandExtUpdate *> >() // 0x4DCE16
{
    mangled_assert("??1?$_List_buy@PAVCameraCommandExtUpdate@@V?$allocator@PAVCameraCommandExtUpdate@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

CameraCommand::~CameraCommand() // 0x4DCE3F
{
    mangled_assert("??1CameraCommand@@UAE@XZ");
    todo("implement");
}

_inline CameraCommand::FocusDistance::~FocusDistance() // 0x4DCEFB
{
    mangled_assert("??1FocusDistance@CameraCommand@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void CameraCommand::purge() // 0x4DF773
{
    mangled_assert("?purge@CameraCommand@@IAEXXZ");
    todo("implement");
}

void CameraCommand::startup() // 0x4DFC41
{
    mangled_assert("?startup@CameraCommand@@QAEXXZ");
    todo("implement");
}

void CameraCommand::useInterpolation(bool) // 0x4E03D0
{
    mangled_assert("?useInterpolation@CameraCommand@@QAEX_N@Z");
    todo("implement");
}

void CameraCommand::allowControl(bool) // 0x4DD1C3
{
    mangled_assert("?allowControl@CameraCommand@@QAEX_N@Z");
    todo("implement");
}

void CameraCommand::manualOverride(bool) // 0x4DF728
{
    mangled_assert("?manualOverride@CameraCommand@@QAEX_N@Z");
    todo("implement");
}

void CameraCommand::mustFocusOnSobs(bool) // 0x4DF74F
{
    mangled_assert("?mustFocusOnSobs@CameraCommand@@QAEX_N@Z");
    todo("implement");
}

bool CameraCommand::useShipCollision(bool) // 0x4E03DD
{
    mangled_assert("?useShipCollision@CameraCommand@@QAE_N_N@Z");
    todo("implement");
}

OrbitParameters &CameraCommand::getFocalParam() // 0x4DF2EE
{
    mangled_assert("?getFocalParam@CameraCommand@@QAEAAVOrbitParameters@@XZ");
    todo("implement");
}

OrbitParameters const &CameraCommand::getFocalParam() const // 0x4DF2F8
{
    mangled_assert("?getFocalParam@CameraCommand@@QBEABVOrbitParameters@@XZ");
    todo("implement");
}

bool CameraCommand::focusedOnShips() // 0x4DF019
{
    mangled_assert("?focusedOnShips@CameraCommand@@QAE_NXZ");
    todo("implement");
}

Selection *CameraCommand::getFocusSelection() // 0x4DF324
{
    mangled_assert("?getFocusSelection@CameraCommand@@QAEPAVSelection@@XZ");
    todo("implement");
}

bool CameraCommand::getFocusLocation(vector3 &) // 0x4DF302
{
    mangled_assert("?getFocusLocation@CameraCommand@@QAE_NAAVvector3@@@Z");
    todo("implement");
}

float CameraCommand::getLastZoomAmount() // 0x4DF337
{
    mangled_assert("?getLastZoomAmount@CameraCommand@@QAEMXZ");
    todo("implement");
}

void CameraCommand::setupCamera(float, float, float, float) // 0x4DFBB4
{
    mangled_assert("?setupCamera@CameraCommand@@QAEXMMMM@Z");
    todo("implement");
}

void CameraCommand::cameraMouseMoved(float, float) // 0x4DD466
{
    mangled_assert("?cameraMouseMoved@CameraCommand@@QAEXMM@Z");
    todo("implement");
}

void CameraCommand::cameraZoom(bool) // 0x4DD99D
{
    mangled_assert("?cameraZoom@CameraCommand@@QAEX_N@Z");
    todo("implement");
}

void CameraCommand::deceleratePanning(float) // 0x4DE52E
{
    mangled_assert("?deceleratePanning@CameraCommand@@AAEXM@Z");
    todo("implement");
}

void CameraCommand::cameraPan(float, float, float) // 0x4DD48A
{
    mangled_assert("?cameraPan@CameraCommand@@QAEXMMM@Z");
    todo("implement");
}

void CameraCommand::setZoomFactor(float) // 0x4DFB9D
{
    mangled_assert("?setZoomFactor@CameraCommand@@QAEXM@Z");
    todo("implement");
}

void CameraCommand::ensureValidFocus(float) // 0x4DE5AF
{
    mangled_assert("?ensureValidFocus@CameraCommand@@AAEXM@Z");
    todo("implement");
}

Sob *CameraCommand::getCollidingObject(vector3 const &) const // 0x4DF07B
{
    mangled_assert("?getCollidingObject@CameraCommand@@ABEPAVSob@@ABVvector3@@@Z");
    todo("implement");
}

void CameraCommand::collideWithShips() // 0x4DE007
{
    mangled_assert("?collideWithShips@CameraCommand@@AAEXXZ");
    todo("implement");
}

void CameraCommand::calculatePan(float const, vector3 &) // 0x4DD1FB
{
    mangled_assert("?calculatePan@CameraCommand@@AAEXMAAVvector3@@@Z");
    todo("implement");
}

void CameraCommand::clampToWorldBounds(vector3 &) const // 0x4DDEF9
{
    mangled_assert("?clampToWorldBounds@CameraCommand@@ABEXAAVvector3@@@Z");
    todo("implement");
}

__int32 CameraCommand::taskFunction(float) // 0x4DFCE0
{
    mangled_assert("?taskFunction@CameraCommand@@UAEHM@Z");
    todo("implement");
}

bool CameraCommand::isFocussed(Selection const &) const // 0x4DF5A8
{
    mangled_assert("?isFocussed@CameraCommand@@QBE_NABVSelection@@@Z");
    todo("implement");
}

void CameraCommand::resetCameraList() // 0x4DF7D6
{
    mangled_assert("?resetCameraList@CameraCommand@@QAEXXZ");
    todo("implement");
}

bool CameraCommand::hasFocussed(Sob *) const // 0x4DF390
{
    mangled_assert("?hasFocussed@CameraCommand@@QBE_NPAVSob@@@Z");
    todo("implement");
}

void CameraCommand::focus(Sob *, bool, bool) // 0x4DE6DF
{
    mangled_assert("?focus@CameraCommand@@QAEXPAVSob@@_N1@Z");
    todo("implement");
}

void CameraCommand::focus(Selection const &, bool, bool, bool) // 0x4DE638
{
    mangled_assert("?focus@CameraCommand@@QAEXABVSelection@@_N11@Z");
    todo("implement");
}

void CameraCommand::focusOnSelection(Selection const &, bool, bool) // 0x4DEC23
{
    mangled_assert("?focusOnSelection@CameraCommand@@AAEXABVSelection@@_N1@Z");
    todo("implement");
}

void CameraCommand::focusOnPoint(vector3 const &) // 0x4DEAC1
{
    mangled_assert("?focusOnPoint@CameraCommand@@QAEXABVvector3@@@Z");
    todo("implement");
}

void CameraCommand::focusSave() // 0x4DEE30
{
    mangled_assert("?focusSave@CameraCommand@@QAEXXZ");
    todo("implement");
}

void CameraCommand::focusRestore() // 0x4DEDEA
{
    mangled_assert("?focusRestore@CameraCommand@@QAEXXZ");
    todo("implement");
}

void CameraCommand::focusReset() // 0x4DEDD8
{
    mangled_assert("?focusReset@CameraCommand@@QAEXXZ");
    todo("implement");
}

void CameraCommand::focusOnPointKeepingEyePosition(vector3 const &) // 0x4DEBA7
{
    mangled_assert("?focusOnPointKeepingEyePosition@CameraCommand@@QAEXABVvector3@@@Z");
    todo("implement");
}

void CameraCommand::focusGivenEyePosition(Selection const &, vector3 const &) // 0x4DE8A8
{
    mangled_assert("?focusGivenEyePosition@CameraCommand@@QAEXABVSelection@@ABVvector3@@@Z");
    todo("implement");
}

void CameraCommand::focusOnPointGivenEye(vector3 const &, vector3 const &, bool, bool) // 0x4DEB27
{
    mangled_assert("?focusOnPointGivenEye@CameraCommand@@QAEXABVvector3@@0_N1@Z");
    todo("implement");
}

bool CameraCommand::focusOnFleet() // 0x4DE950
{
    mangled_assert("?focusOnFleet@CameraCommand@@QAE_NXZ");
    todo("implement");
}

void CameraCommand::focusForward() // 0x4DE802
{
    mangled_assert("?focusForward@CameraCommand@@QAEXXZ");
    todo("implement");
}

void CameraCommand::focusBack() // 0x4DE75C
{
    mangled_assert("?focusBack@CameraCommand@@QAEXXZ");
    todo("implement");
}

void CameraCommand::adjustFocusKeepingEyePosition(Selection const &) // 0x4DD139
{
    mangled_assert("?adjustFocusKeepingEyePosition@CameraCommand@@QAEXABVSelection@@@Z");
    todo("implement");
}

void CameraCommand::interpolate(vector3 const &, vector3 const &, vector3 const &, vector3 const &, float) // 0x4DF3EC
{
    mangled_assert("?interpolate@CameraCommand@@QAEXABVvector3@@000M@Z");
    todo("implement");
}

void CameraCommand::cameraChase(float) // 0x4DD384
{
    mangled_assert("?cameraChase@CameraCommand@@AAEXM@Z");
    todo("implement");
}

void CameraCommand::setFarFocus() // 0x4DF835
{
    mangled_assert("?setFarFocus@CameraCommand@@QAEXXZ");
    todo("implement");
}

void CameraCommand::viewEntireMissionSphere() // 0x4E03F0
{
    mangled_assert("?viewEntireMissionSphere@CameraCommand@@QAEXXZ");
    todo("implement");
}

void CameraCommand::debugNewFocusMessage() // 0x4DE52D
{
    mangled_assert("?debugNewFocusMessage@CameraCommand@@AAEXXZ");
    todo("implement");
}

__int32 ccFocusCullRadiusMean(Selection &selection, float radiusSqr, vector3 *centreDest) // 0x4DDAFD
{
    mangled_assert("?ccFocusCullRadiusMean@@YGHAAVSelection@@MPAVvector3@@@Z");
    todo("implement");
}

bool isLegalToFocusOn(Selection const &focus) // 0x4DF64F
{
    mangled_assert("?isLegalToFocusOn@@YG_NABVSelection@@@Z");
    todo("implement");
}

void preserveCameraOrientation(OrbitParameters &newParams, OrbitParameters const &oldParams) // 0x4DF75C
{
    mangled_assert("?preserveCameraOrientation@@YGXAAVOrbitParameters@@ABV1@@Z");
    todo("implement");
}

vector3 CameraCommand::getCameraAxis() // 0x4DF030
{
    mangled_assert("?getCameraAxis@CameraCommand@@QAE?AVvector3@@XZ");
    todo("implement");
}

void CameraCommand::focusToDistanceWithTime(float, float, float, Sob const &) // 0x4DEFC3
{
    mangled_assert("?focusToDistanceWithTime@CameraCommand@@QAEXMMMABVSob@@@Z");
    todo("implement");
}

void CameraCommand::focusToDistanceWithSpeed(float, float, float, Sob const &, bool) // 0x4DEE7E
{
    mangled_assert("?focusToDistanceWithSpeed@CameraCommand@@QAEXMMMABVSob@@_N@Z");
    todo("implement");
}

void CameraCommand::setFocusDistance(vector3 const &, float, float, float const, SobID const &, bool) // 0x4DF85C
{
    mangled_assert("?setFocusDistance@CameraCommand@@QAEXABVvector3@@MMMABVSobID@@_N@Z");
    todo("implement");
}

bool CameraCommand::updateFocusDistance(float) // 0x4E00B5
{
    mangled_assert("?updateFocusDistance@CameraCommand@@AAE_NM@Z");
    todo("implement");
}

void CameraCommand::addExtUpdate(CameraCommandExtUpdate *) // 0x4DD124
{
    mangled_assert("?addExtUpdate@CameraCommand@@QAEXPAVCameraCommandExtUpdate@@@Z");
    todo("implement");
}

void CameraCommand::removeExtUpdate(CameraCommandExtUpdate *) // 0x4DF789
{
    mangled_assert("?removeExtUpdate@CameraCommand@@QAEXPAVCameraCommandExtUpdate@@@Z");
    todo("implement");
}

bool CameraCommand::loadTuning(char const *) // 0x4DF705
{
    mangled_assert("?loadTuning@CameraCommand@@QAE_NPBD@Z");
    todo("implement");
}

void cameraCommandScriptRegister() // 0x4DD451
{
    mangled_assert("?cameraCommandScriptRegister@@YGXXZ");
    todo("implement");
}

/* ---------- private code */

_static bool intersectLineWithShipOBB(vector3 const &start, vector3 const &end, Sob *pSob, vector3 &hitPosition) // 0x4DF45C
{
    mangled_assert("intersectLineWithShipOBB");
    todo("implement");
}

_static void clampFocal(CameraOrbitTarget const &camera, OrbitParameters &focal) // 0x4DDEB0
{
    mangled_assert("clampFocal");
    todo("implement");
}

_static bool ccShouldCameraBeLocked(Selection const &focus) // 0x4DDE0C
{
    mangled_assert("ccShouldCameraBeLocked");
    todo("implement");
}

_static bool ccIsSobOnscreen(Sob const *s) // 0x4DDDF2
{
    mangled_assert("ccIsSobOnscreen");
    todo("implement");
}

_static __int32 ccFocusCullRadiusGeneral(Selection &out, Selection &in, float const radiusSqr, vector3 const &center) // 0x4DDA52
{
    mangled_assert("ccFocusCullRadiusGeneral");
    todo("implement");
}

_static unsigned __int32 ccCountSobsNearPoint(Selection const &sel, float radiusSqr, vector3 const &center) // 0x4DD9B4
{
    mangled_assert("ccCountSobsNearPoint");
    todo("implement");
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <task.h>
#include <assist\stlexsmallvector.h>
#include <stack>
#include <boost\static_assert.hpp>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <platform\cmdline.h>
#include <pch.h>
#include <malloc.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Collision\Primitives\capsule.h>
#include <Sob\DustCloud\DustCloudGroupManager.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <weaponinfo.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\lotypes.h>
#include <Modifiers\ModifierTargetCache.h>
#include <SensorsBlobs.h>
#include <dbdefines.h>
#include <Render\objects\compiledtext.h>
#include <MetaSelTarg.h>
#include <UnitCaps\UnitCaps.h>
#include <TeamColourRegistry.h>
#include <new>
#include <savegame.h>
#include <SOBGroupManager.h>
#include <exception>
#include <xstddef>
#include <hash_map>
#include <Render\gl\r_types.h>
#include <type_traits>
#include <xhash>
#include <SobWithMeshStatic.h>
#include <Render\objects\debugrender.h>
#include <Sob\Resource\Resource.h>
#include <SobWithMesh.h>
#include <ParadeCommand.h>
#include <SobRigidBody.h>
#include <commandtype.h>
#include <ITweak.h>
#include <xutility>
#include <SobRigidBodyStatic.h>
#include <SensorsManager.h>
#include <Tactics.h>
#include <utility>
#include <Camera\OrbitParameters.h>
#include <iosfwd>
#include <SoundManager\SoundManager.h>
#include <vector>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <platform\windowinterface.h>
#include <Universe.h>
#include <Waypoint.h>
#include <math.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <list>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <platform\inputinterface.h>
#include <Render\gl\r_defines.h>
#include <platform\keydefines.h>
#include <Render\gl\glext.h>
#include <Sob\DustCloud\DustCloudGroup.h>
#include <map>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <Mathlib\mathutil.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <CameraCommand.h>
#include <sobid.h>
#include <boost\scoped_ptr.hpp>
#include <CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <OrderFeedback.h>
#include <Camera\Frustum.h>
#include <HyperspaceManager.h>
#include <Camera\Plane3.h>
#include <SquadronList.h>
#include <CameraTuning.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <playerresourcetype.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <platform\timer.h>
#include <Render\objects\draw.h>
#include <platform\platformexports.h>
#include <boost\scoped_array.hpp>
#include <Render\objects\material.h>
#include <Collision\Primitives\obb.h>
#include <gameSettings.h>
#include <Mathlib\quat.h>
#include <config.h>
#include <syncChecking.h>
#include <assist\typemagic.h>
#include <SelTarg.h>
#include <Collision\BVH\octree.h>
#include <luaconfig\luabinding.h>
#include <prim.h>
#include <Collision\BVH\span.h>
#include <luaconfig\luaconfig.h>
#include <Mathlib\mathlibdll.h>
#include <Collision\BVH\Internal\span_i.h>
#include <MainUI.h>
#include <Mathlib\fastmath.h>
#include <Collision\BVH\proxy.h>
#include <Render\objects\core.h>
#include <Selector.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Render\objects\cliprect.h>
#include <seInterface2\sedefinesshared.h>
#include <deque>
#include <Interpolation.h>
#include <DynamicPoint.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\Primitives\aabb.h>
#include <LevelDesc.h>
#include <sobtypes.h>
#include <scripting.h>
#include <boost\throw_exception.hpp>
#include <Hash.h>
#include <scriptaccess.h>
#include <selection.h>
#include <command.h>
#include <gameRenderDebug.h>
#include <fileio\md5.h>
#include <scripttypedef.h>
#include <savegamedef.h>
#include <Render\objects\fontsystem.h>
#include <boost\detail\shared_count.hpp>
#include <Render\objects\objects.h>
#include <bitset>
#include <Render\objects\bitmapfont.h>
#include <Parade.h>
#include <boost\detail\lwm_win32.hpp>
#include <lua.h>
#include <MeshAnimation.h>
#include <gamestructimpl.h>
#include <abilities.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Badge.h>
#include <localizer\localizer.h>
#include <Squadron.h>
#include <ship.h>
#include <ShieldTypes.h>
#include <seInterface2\PatchID.h>
#include <Pieplate.h>
#include <seInterface2\PatchBase.h>
#include <fixedpoint.h>
#include <seInterface2\SoundParams.h>
#include <wchar.h>
#include <util\fixed.h>
#include <swprintf.inl>
#include <Subsystems\HardPointManager.h>
#include <queue>
#include <platform\osdef.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>

/* ---------- constants */

enum `anonymous-namespace'::EffectState
{
    ES_On = 0,
    ES_Off,
    ES_Done,
};

/* ---------- definitions */

struct pieplateOption
{
    vector4 innerPieColour; // 0x0
    vector4 rangePieColour; // 0x10
    vector4 outerPieColour; // 0x20
    _inline pieplateOption(); /* compiler_generated() */
};
static_assert(sizeof(pieplateOption) == 48, "Invalid pieplateOption size");

typedef `anonymous-namespace'::EffectState ?A0x15f9cf6c::EffectState;

/* ---------- prototypes */

extern void pieCalcCirclePointsInXZ(vector3 const &origin, float const radius, FatVertex *fat, __int32 const numfats, float const angledir);
extern void pieCalcRadialTicksInXZ(FatVertex *fat, vector3 const &origin, float radiusInner, float radiusOuter, float angleInc, float angleStart, __int32 nTicks);
extern void pieDrawCircleInXZ(vector3 const &origin, float const radius, __int32 const segments, vector4 const &col);
extern void pieCalcCirclePoints(vector3 const &origin, matrix3 const &orientation, float const radius, FatVertex *fat, __int32 const numfats, float const angledir);
extern void pieDrawCircle(vector3 const &origin, matrix3 const &orientation, float const radius, __int32 const segments, vector4 const &col);
extern void transformProjectPoint(vector3 const &point, matrix4 const &modelview, matrix4 const &projection, float &outX, float &outY, float &outZ, float &outW);
extern float pieFindMaxSobRadius(Selection const &sel);
extern void pieDetermineDiscConnectionInXZ(vector3 const &start, vector3 const &circlePos, float circleRadius, vector3 &connectionPoint);
extern void pieDetermineDiscConnection(vector3 const &start, vector3 const &circlePos, float circleRadius, matrix3 const &circleOrientation, vector3 &connectionPoint);
extern void pieScreenSizeOfCircleComputeMinMax(vector3 const &position, float minSize, float maxSize, float inRadius, float &outRadius, __int32 &nSegments, matrix4 const &modelView, matrix4 const &projection);
extern void pieScreenSizeOfCircleCompute(vector3 const &position, float inRadius, float &outRadius, __int32 &nSegments, matrix4 const &modelView, matrix4 const &projection);
extern bool convert3dCoordsTo2d(vector3 const &in, matrix4 const &modelviewMatrix, matrix4 const &projectionMatrix, float *outmousex, float *outmousey);

/* ---------- globals */

extern __int32 pieTwkPiePieces; // 0x83C788
extern __int32 pieTwkHorizonPieces; // 0x83C78C
extern float pieTwkMinimumMoveToDiscSize; // 0x83C790
extern float pieTwkPieClosestDistance; // 0x83C794
extern float pieTwkMaxMovementDist; // 0x83C798
extern float pieTwkHorizontalHashMarkLength; // 0x83C79C
extern float pieTwkVerticalHashMarkLength; // 0x83C7A0
extern float pieTwkHeightSnap; // 0x83C7A4
extern float pieTwkShipCloseToPlaneDistance; // 0x83C7A8
extern float pieTwkPieCircleSizeMax; // 0x83C7AC
extern float pieTwkPieCircleSizeMin; // 0x83C7B0
extern float pieTwkHeightFactor; // 0x83C7B4
extern float pieTwkBoxAngleFactor; // 0x83C7B8
extern float pieTwkScaleUpTime; // 0x83C7BC
extern float pieTwkScaleDownTime; // 0x83C7C0
extern bool pieTwkSeperateDiscs; // 0x849EB8
extern float pieTwkBlobThreshold; // 0x83C7C4
extern vector4 pieTwkMoveToDiscColour; // 0x83C7D0
extern vector4 pieTwkMoveToPlanarDiscColour; // 0x83C7E0
extern vector4 pieTwkMoveToDiscColourInvalid; // 0x83C7F0
extern vector4 pieTwkMoveToPlanarDiscColourInvalid; // 0x83C800
extern vector4 pieTwkShipOnPlaneColour; // 0x83C810
extern vector4 pieTwkClosestShipOnPlaneColour; // 0x83C820
extern vector4 pieTwkMovementDistanceReadout; // 0x83C830
extern vector4 pieTwkInvalidDestinationColour; // 0x83C840
extern char pieTwkMoveDistanceFont[8]; // 0x83C7C8
extern pieplateOption pieplateOptions[52]; // 0x849EC0

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_619927(Pieplate::Data *const, vector3 const &);
_inline void Pieplate::Data::setOrigin(vector3 const &) // 0x619927
{
    mangled_assert("?setOrigin@Data@Pieplate@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_619927(this, arg);
}

_extern void _sub_619915(Pieplate::Data *const, Selection const &);
_inline void Pieplate::Data::setOrigin(Selection const &) // 0x619915
{
    mangled_assert("?setOrigin@Data@Pieplate@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_619915(this, arg);
}

_extern void _sub_619818(Pieplate::Data *const);
_inline void Pieplate::Data::resetOrigin() // 0x619818
{
    mangled_assert("?resetOrigin@Data@Pieplate@@QAEXXZ");
    todo("implement");
    _sub_619818(this);
}

_extern _sub_615D2D(Pieplate *const);
Pieplate::Pieplate() // 0x615D2D
{
    mangled_assert("??0Pieplate@@QAE@XZ");
    todo("implement");
    _sub_615D2D(this);
}

_extern void _sub_61628B(Pieplate *const);
Pieplate::~Pieplate() // 0x61628B
{
    mangled_assert("??1Pieplate@@QAE@XZ");
    todo("implement");
    _sub_61628B(this);
}

_extern void _sub_61997D(Pieplate *const, Selection const &);
void Pieplate::setSelection(Selection const &) // 0x61997D
{
    mangled_assert("?setSelection@Pieplate@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_61997D(this, arg);
}

_extern void _sub_61993F(Pieplate *const, Selection const &);
void Pieplate::setOrigin(Selection const &) // 0x61993F
{
    mangled_assert("?setOrigin@Pieplate@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_61993F(this, arg);
}

_extern void _sub_6198B1(Pieplate *const, Pieplate::Mode);
void Pieplate::setMode(Pieplate::Mode) // 0x6198B1
{
    mangled_assert("?setMode@Pieplate@@QAEXW4Mode@1@@Z");
    todo("implement");
    _sub_6198B1(this, arg);
}

_extern void _sub_619881(Pieplate *const, bool);
void Pieplate::setHeightMode(bool) // 0x619881
{
    mangled_assert("?setHeightMode@Pieplate@@QAEX_N@Z");
    todo("implement");
    _sub_619881(this, arg);
}

_extern void _sub_619866(Pieplate *const, bool);
void Pieplate::setDepthMode(bool) // 0x619866
{
    mangled_assert("?setDepthMode@Pieplate@@QAEX_N@Z");
    todo("implement");
    _sub_619866(this, arg);
}

_extern void _sub_6198BD(Pieplate *const, bool);
void Pieplate::setOffsetFromOriginMode(bool) // 0x6198BD
{
    mangled_assert("?setOffsetFromOriginMode@Pieplate@@QAEX_N@Z");
    todo("implement");
    _sub_6198BD(this, arg);
}

_extern void _sub_61984B(Pieplate *const, bool);
void Pieplate::setCloseToPath(bool) // 0x61984B
{
    mangled_assert("?setCloseToPath@Pieplate@@QAEX_N@Z");
    todo("implement");
    _sub_61984B(this, arg);
}

_extern void _sub_61996A(Pieplate *const, vector3 const &);
void Pieplate::setPathPoint(vector3 const &) // 0x61996A
{
    mangled_assert("?setPathPoint@Pieplate@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_61996A(this, arg);
}

_extern void _sub_61983C(Pieplate *const, bool);
void Pieplate::setAllowMouseOver(bool) // 0x61983C
{
    mangled_assert("?setAllowMouseOver@Pieplate@@QAEX_N@Z");
    todo("implement");
    _sub_61983C(this, arg);
}

_extern void _sub_619872(Pieplate *const, bool);
void Pieplate::setFocused(bool) // 0x619872
{
    mangled_assert("?setFocused@Pieplate@@QAEX_N@Z");
    todo("implement");
    _sub_619872(this, arg);
}

_extern void _sub_619984(Pieplate *const, Pieplate::Shape);
void Pieplate::setShape(Pieplate::Shape) // 0x619984
{
    mangled_assert("?setShape@Pieplate@@QAEXW4Shape@1@@Z");
    todo("implement");
    _sub_619984(this, arg);
}

_extern void _sub_61989E(Pieplate *const, float);
void Pieplate::setMaxMovementDistance(float) // 0x61989E
{
    mangled_assert("?setMaxMovementDistance@Pieplate@@QAEXM@Z");
    todo("implement");
    _sub_61989E(this, arg);
}

_extern void _sub_619857(Pieplate *const, OrderType);
void Pieplate::setCommand(OrderType) // 0x619857
{
    mangled_assert("?setCommand@Pieplate@@QAEXW4OrderType@@@Z");
    todo("implement");
    _sub_619857(this, arg);
}

_extern OrderType _sub_618D70(Pieplate const *const);
OrderType Pieplate::getCommand() const // 0x618D70
{
    mangled_assert("?getCommand@Pieplate@@QBE?AW4OrderType@@XZ");
    todo("implement");
    OrderType __result = _sub_618D70(this);
    return __result;
}

_extern void _sub_61988D(Pieplate *const, Fixed<10> const &);
void Pieplate::setHyperspaceCost(Fixed<10> const &) // 0x61988D
{
    mangled_assert("?setHyperspaceCost@Pieplate@@QAEXABV?$Fixed@$09@@@Z");
    todo("implement");
    _sub_61988D(this, arg);
}

_extern bool _sub_619C31(Pieplate *const);
bool Pieplate::toggleHeightMode() // 0x619C31
{
    mangled_assert("?toggleHeightMode@Pieplate@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_619C31(this);
    return __result;
}

_extern bool _sub_619C19(Pieplate *const);
bool Pieplate::toggleDepthMode() // 0x619C19
{
    mangled_assert("?toggleDepthMode@Pieplate@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_619C19(this);
    return __result;
}

_extern void _sub_618AE8(Pieplate *const, bool);
void Pieplate::enableEffect(bool) // 0x618AE8
{
    mangled_assert("?enableEffect@Pieplate@@QAEX_N@Z");
    todo("implement");
    _sub_618AE8(this, arg);
}

_extern void _sub_618B10(Pieplate *const, bool, float, float);
void Pieplate::enableLock(bool, float, float) // 0x618B10
{
    mangled_assert("?enableLock@Pieplate@@QAEX_NMM@Z");
    todo("implement");
    _sub_618B10(this, arg, arg, arg);
}

_extern vector3 const &_sub_618D99(Pieplate const *const);
vector3 const &Pieplate::getMoveTo() const // 0x618D99
{
    mangled_assert("?getMoveTo@Pieplate@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_618D99(this);
    return __result;
}

_extern vector3 _sub_618B7B(Pieplate const *const);
vector3 Pieplate::getBoxCorner() const // 0x618B7B
{
    mangled_assert("?getBoxCorner@Pieplate@@QBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_618B7B(this);
    return __result;
}

_extern Selection const &_sub_618DC6(Pieplate const *const);
Selection const &Pieplate::getSelection() const // 0x618DC6
{
    mangled_assert("?getSelection@Pieplate@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_618DC6(this);
    return __result;
}

_extern vector3 const &_sub_618DB1(Pieplate const *const);
vector3 const &Pieplate::getOrigin() const // 0x618DB1
{
    mangled_assert("?getOrigin@Pieplate@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_618DB1(this);
    return __result;
}

_extern Pieplate::Mode _sub_618D93(Pieplate const *const);
Pieplate::Mode Pieplate::getMode() const // 0x618D93
{
    mangled_assert("?getMode@Pieplate@@QBE?AW4Mode@1@XZ");
    todo("implement");
    Pieplate::Mode __result = _sub_618D93(this);
    return __result;
}

_extern float _sub_618D8A(Pieplate const *const);
float Pieplate::getMaxMovementDistance() const // 0x618D8A
{
    mangled_assert("?getMaxMovementDistance@Pieplate@@QBEMXZ");
    todo("implement");
    float __result = _sub_618D8A(this);
    return __result;
}

_extern bool _sub_618B72(Pieplate const *const);
bool Pieplate::getAllowMouseOver() const // 0x618B72
{
    mangled_assert("?getAllowMouseOver@Pieplate@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_618B72(this);
    return __result;
}

_extern bool _sub_618D7D(Pieplate const *const);
bool Pieplate::getFocused() const // 0x618D7D
{
    mangled_assert("?getFocused@Pieplate@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_618D7D(this);
    return __result;
}

_extern bool _sub_618E0A(Pieplate const *const);
bool Pieplate::isOn() const // 0x618E0A
{
    mangled_assert("?isOn@Pieplate@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_618E0A(this);
    return __result;
}

_extern bool _sub_618DF3(Pieplate const *const, Pieplate::Mode);
bool Pieplate::isMode(Pieplate::Mode) const // 0x618DF3
{
    mangled_assert("?isMode@Pieplate@@QBE_NW4Mode@1@@Z");
    todo("implement");
    bool __result = _sub_618DF3(this, arg);
    return __result;
}

_extern bool _sub_618DED(Pieplate const *const);
bool Pieplate::isHeightMode() const // 0x618DED
{
    mangled_assert("?isHeightMode@Pieplate@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_618DED(this);
    return __result;
}

_extern bool _sub_618DE7(Pieplate const *const);
bool Pieplate::isDepthMode() const // 0x618DE7
{
    mangled_assert("?isDepthMode@Pieplate@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_618DE7(this);
    return __result;
}

_extern bool _sub_618E04(Pieplate const *const);
bool Pieplate::isOffsetFromOriginMode() const // 0x618E04
{
    mangled_assert("?isOffsetFromOriginMode@Pieplate@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_618E04(this);
    return __result;
}

_extern void _sub_619811(Pieplate *const);
void Pieplate::resetHeight() // 0x619811
{
    mangled_assert("?resetHeight@Pieplate@@QAEXXZ");
    todo("implement");
    _sub_619811(this);
}

_extern void _sub_6197B9(Pieplate *const);
void Pieplate::reset() // 0x6197B9
{
    mangled_assert("?reset@Pieplate@@QAEXXZ");
    todo("implement");
    _sub_6197B9(this);
}

_extern void _sub_619DEB(Pieplate *const);
void Pieplate::tryToSnapToSquadFoot() // 0x619DEB
{
    mangled_assert("?tryToSnapToSquadFoot@Pieplate@@QAEXXZ");
    todo("implement");
    _sub_619DEB(this);
}

_extern void _sub_618DC9(Pieplate *const, float);
void Pieplate::incHeight(float) // 0x618DC9
{
    mangled_assert("?incHeight@Pieplate@@QAEXM@Z");
    todo("implement");
    _sub_618DC9(this, arg);
}

_extern void _sub_619950(Pieplate *const, vector3 const &);
void Pieplate::setOrigin(vector3 const &) // 0x619950
{
    mangled_assert("?setOrigin@Pieplate@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_619950(this, arg);
}

_extern void _sub_619835(Pieplate *const);
void Pieplate::resetOrigin() // 0x619835
{
    mangled_assert("?resetOrigin@Pieplate@@QAEXXZ");
    todo("implement");
    _sub_619835(this);
}

_extern bool _sub_619C2B(Pieplate *const);
bool Pieplate::toggleFocusMode() // 0x619C2B
{
    mangled_assert("?toggleFocusMode@Pieplate@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_619C2B(this);
    return __result;
}

_extern void _sub_616DC6(Pieplate *const, float, float, Camera *);
void Pieplate::calculateMoveTo(float, float, Camera *) // 0x616DC6
{
    mangled_assert("?calculateMoveTo@Pieplate@@QAEXMMPAVCamera@@@Z");
    todo("implement");
    _sub_616DC6(this, arg, arg, arg);
}

_extern void _sub_6169B2(Pieplate *const, float &, float &, matrix4 const &, matrix4 const &);
void Pieplate::calculateMousePos(float &, float &, matrix4 const &, matrix4 const &) // 0x6169B2
{
    mangled_assert("?calculateMousePos@Pieplate@@QAEXAAM0ABVmatrix4@@1@Z");
    todo("implement");
    _sub_6169B2(this, arg, arg, arg, arg);
}

_extern void _sub_619E2D(Pieplate *const);
void Pieplate::update() // 0x619E2D
{
    mangled_assert("?update@Pieplate@@QAEXXZ");
    todo("implement");
    _sub_619E2D(this);
}

_extern void _sub_618FA1(vector3 const &, float const, FatVertex *, __int32 const, float const);
void pieCalcCirclePointsInXZ(vector3 const &origin, float const radius, FatVertex *fat, __int32 const numfats, float const angledir) // 0x618FA1
{
    mangled_assert("?pieCalcCirclePointsInXZ@@YGXABVvector3@@MPAUFatVertex@@HM@Z");
    todo("implement");
    _sub_618FA1(origin, radius, fat, numfats, angledir);
}

_extern void _sub_619079(FatVertex *, vector3 const &, float, float, float, float, __int32);
void pieCalcRadialTicksInXZ(FatVertex *fat, vector3 const &origin, float radiusInner, float radiusOuter, float angleInc, float angleStart, __int32 nTicks) // 0x619079
{
    mangled_assert("?pieCalcRadialTicksInXZ@@YGXPAUFatVertex@@ABVvector3@@MMMMH@Z");
    todo("implement");
    _sub_619079(fat, origin, radiusInner, radiusOuter, angleInc, angleStart, nTicks);
}

_extern void _sub_6193AC(vector3 const &, float const, __int32 const, vector4 const &);
void pieDrawCircleInXZ(vector3 const &origin, float const radius, __int32 const segments, vector4 const &col) // 0x6193AC
{
    mangled_assert("?pieDrawCircleInXZ@@YGXABVvector3@@MHABVvector4@@@Z");
    todo("implement");
    _sub_6193AC(origin, radius, segments, col);
}

_extern void _sub_618E30(vector3 const &, matrix3 const &, float const, FatVertex *, __int32 const, float const);
void pieCalcCirclePoints(vector3 const &origin, matrix3 const &orientation, float const radius, FatVertex *fat, __int32 const numfats, float const angledir) // 0x618E30
{
    mangled_assert("?pieCalcCirclePoints@@YGXABVvector3@@ABVmatrix3@@MPAUFatVertex@@HM@Z");
    todo("implement");
    _sub_618E30(origin, orientation, radius, fat, numfats, angledir);
}

_extern void _sub_6192F1(vector3 const &, matrix3 const &, float const, __int32 const, vector4 const &);
void pieDrawCircle(vector3 const &origin, matrix3 const &orientation, float const radius, __int32 const segments, vector4 const &col) // 0x6192F1
{
    mangled_assert("?pieDrawCircle@@YGXABVvector3@@ABVmatrix3@@MHABVvector4@@@Z");
    todo("implement");
    _sub_6192F1(origin, orientation, radius, segments, col);
}

_extern void _sub_619C43(vector3 const &, matrix4 const &, matrix4 const &, float &, float &, float &, float &);
void transformProjectPoint(vector3 const &point, matrix4 const &modelview, matrix4 const &projection, float &outX, float &outY, float &outZ, float &outW) // 0x619C43
{
    mangled_assert("?transformProjectPoint@@YGXABVvector3@@ABVmatrix4@@1AAM222@Z");
    todo("implement");
    _sub_619C43(point, modelview, projection, outX, outY, outZ, outW);
}

_extern float _sub_619464(Selection const &);
float pieFindMaxSobRadius(Selection const &sel) // 0x619464
{
    mangled_assert("?pieFindMaxSobRadius@@YGMABVSelection@@@Z");
    todo("implement");
    float __result = _sub_619464(sel);
    return __result;
}

_extern void _sub_61703C(Pieplate *const, Camera const *, matrix4 const &, Selection const &, bool);
void Pieplate::draw(Camera const *, matrix4 const &, Selection const &, bool) // 0x61703C
{
    mangled_assert("?draw@Pieplate@@QAEXPBVCamera@@ABVmatrix4@@ABVSelection@@_N@Z");
    todo("implement");
    _sub_61703C(this, arg, arg, arg, arg);
}

_extern void _sub_619265(vector3 const &, vector3 const &, float, vector3 &);
void pieDetermineDiscConnectionInXZ(vector3 const &start, vector3 const &circlePos, float circleRadius, vector3 &connectionPoint) // 0x619265
{
    mangled_assert("?pieDetermineDiscConnectionInXZ@@YGXABVvector3@@0MAAV1@@Z");
    todo("implement");
    _sub_619265(start, circlePos, circleRadius, connectionPoint);
}

_extern void _sub_61914B(vector3 const &, vector3 const &, float, matrix3 const &, vector3 &);
void pieDetermineDiscConnection(vector3 const &start, vector3 const &circlePos, float circleRadius, matrix3 const &circleOrientation, vector3 &connectionPoint) // 0x61914B
{
    mangled_assert("?pieDetermineDiscConnection@@YGXABVvector3@@0MABVmatrix3@@AAV1@@Z");
    todo("implement");
    _sub_61914B(start, circlePos, circleRadius, circleOrientation, connectionPoint);
}

_extern void _sub_6194EA(vector3 const &, float, float, float, float &, __int32 &, matrix4 const &, matrix4 const &);
void pieScreenSizeOfCircleComputeMinMax(vector3 const &position, float minSize, float maxSize, float inRadius, float &outRadius, __int32 &nSegments, matrix4 const &modelView, matrix4 const &projection) // 0x6194EA
{
    mangled_assert("?pieScreenSizeOfCircleComputeMinMax@@YGXABVvector3@@MMMAAMAAHABVmatrix4@@3@Z");
    todo("implement");
    _sub_6194EA(position, minSize, maxSize, inRadius, outRadius, nSegments, modelView, projection);
}

_extern void _sub_6194A6(vector3 const &, float, float &, __int32 &, matrix4 const &, matrix4 const &);
void pieScreenSizeOfCircleCompute(vector3 const &position, float inRadius, float &outRadius, __int32 &nSegments, matrix4 const &modelView, matrix4 const &projection) // 0x6194A6
{
    mangled_assert("?pieScreenSizeOfCircleCompute@@YGXABVvector3@@MAAMAAHABVmatrix4@@3@Z");
    todo("implement");
    _sub_6194A6(position, inRadius, outRadius, nSegments, modelView, projection);
}

_extern bool _sub_616E3D(vector3 const &, matrix4 const &, matrix4 const &, float *, float *);
bool convert3dCoordsTo2d(vector3 const &in, matrix4 const &modelviewMatrix, matrix4 const &projectionMatrix, float *outmousex, float *outmousey) // 0x616E3D
{
    mangled_assert("?convert3dCoordsTo2d@@YG_NABVvector3@@ABVmatrix4@@1PAM2@Z");
    todo("implement");
    bool __result = _sub_616E3D(in, modelviewMatrix, projectionMatrix, outmousex, outmousey);
    return __result;
}

_extern _sub_615C3C(Pieplate::Data *const);
Pieplate::Data::Data() // 0x615C3C
{
    mangled_assert("??0Data@Pieplate@@QAE@XZ");
    todo("implement");
    _sub_615C3C(this);
}

_extern _sub_615D2A(Pieplate::Data::FootInfo *const);
_inline Pieplate::Data::FootInfo::FootInfo() // 0x615D2A
{
    mangled_assert("??0FootInfo@Data@Pieplate@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_615D2A(this);
}

_extern void _sub_61622A(Pieplate::Data *const);
Pieplate::Data::~Data() // 0x61622A
{
    mangled_assert("??1Data@Pieplate@@QAE@XZ");
    todo("implement");
    _sub_61622A(this);
}

_extern bool _sub_619BF3(Pieplate::Data *const);
bool Pieplate::Data::startup() // 0x619BF3
{
    mangled_assert("?startup@Data@Pieplate@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_619BF3(this);
    return __result;
}

_extern bool _sub_619993(Pieplate::Data *const);
bool Pieplate::Data::shutdown() // 0x619993
{
    mangled_assert("?shutdown@Data@Pieplate@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_619993(this);
    return __result;
}

_extern void _sub_616DED(Pieplate::Data *const);
void Pieplate::Data::calculateOrigin() // 0x616DED
{
    mangled_assert("?calculateOrigin@Data@Pieplate@@QAEXXZ");
    todo("implement");
    _sub_616DED(this);
}

_extern void _sub_6169B9(Pieplate::Data *const, float, float, Camera *);
void Pieplate::Data::calculateMoveTo(float, float, Camera *) // 0x6169B9
{
    mangled_assert("?calculateMoveTo@Data@Pieplate@@QAEXMMPAVCamera@@@Z");
    todo("implement");
    _sub_6169B9(this, arg, arg, arg);
}

_extern bool _sub_618DDE(Pieplate const *const);
bool Pieplate::invalidDestination() const // 0x618DDE
{
    mangled_assert("?invalidDestination@Pieplate@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_618DDE(this);
    return __result;
}

_extern void _sub_61681D(Pieplate::Data *const, float &, float &, matrix4 const &, matrix4 const &);
void Pieplate::Data::calculateMousePos(float &, float &, matrix4 const &, matrix4 const &) // 0x61681D
{
    mangled_assert("?calculateMousePos@Data@Pieplate@@QAEXAAM0ABVmatrix4@@1@Z");
    todo("implement");
    _sub_61681D(this, arg, arg, arg, arg);
}

_extern _sub_616091(Pieplate::Renderer *const, Pieplate::Data *);
Pieplate::Renderer::Renderer(Pieplate::Data *) // 0x616091
{
    mangled_assert("??0Renderer@Pieplate@@QAE@PAVData@1@@Z");
    todo("implement");
    _sub_616091(this, arg);
}

_extern _sub_616203(pieplateOption *const);
_inline pieplateOption::pieplateOption() // 0x616203
{
    mangled_assert("??0pieplateOption@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_616203(this);
}

_extern void _sub_61620F(std::_List_buy<Pieplate::Data::FootInfo,std::allocator<Pieplate::Data::FootInfo> > *const);
_inline std::_List_buy<Pieplate::Data::FootInfo,std::allocator<Pieplate::Data::FootInfo> >::~_List_buy<Pieplate::Data::FootInfo,std::allocator<Pieplate::Data::FootInfo> >() // 0x61620F
{
    mangled_assert("??1?$_List_buy@UFootInfo@Data@Pieplate@@V?$allocator@UFootInfo@Data@Pieplate@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_61620F(this);
}

_extern void _sub_6162C2(Pieplate::Renderer *const);
Pieplate::Renderer::~Renderer() // 0x6162C2
{
    mangled_assert("??1Renderer@Pieplate@@QAE@XZ");
    todo("implement");
    _sub_6162C2(this);
}

_extern void _sub_6172FF(Pieplate::Renderer *const, matrix4 const &, matrix4 const &);
void Pieplate::Renderer::drawHorizonDisc(matrix4 const &, matrix4 const &) // 0x6172FF
{
    mangled_assert("?drawHorizonDisc@Renderer@Pieplate@@QAEXABVmatrix4@@0@Z");
    todo("implement");
    _sub_6172FF(this, arg, arg);
}

_extern void _sub_617542(Pieplate::Renderer *const, float, bool);
void Pieplate::Renderer::drawInnerDisc(float, bool) // 0x617542
{
    mangled_assert("?drawInnerDisc@Renderer@Pieplate@@QAEXM_N@Z");
    todo("implement");
    _sub_617542(this, arg, arg);
}

_extern void _sub_617C8E(Pieplate::Renderer *const, __int32, bool, bool, Camera const *);
void Pieplate::Renderer::drawRangeDisc(__int32, bool, bool, Camera const *) // 0x617C8E
{
    mangled_assert("?drawRangeDisc@Renderer@Pieplate@@QAEXH_N0PBVCamera@@@Z");
    todo("implement");
    _sub_617C8E(this, arg, arg, arg, arg);
}

_extern void _sub_6177A6(Pieplate::Renderer *const, matrix4 const &, matrix4 const &);
void Pieplate::Renderer::drawMoveTo(matrix4 const &, matrix4 const &) // 0x6177A6
{
    mangled_assert("?drawMoveTo@Renderer@Pieplate@@QAEXABVmatrix4@@0@Z");
    todo("implement");
    _sub_6177A6(this, arg, arg);
}

_extern void _sub_619996(Pieplate::Renderer *const, vector3 const &, float, Sob const *, matrix4 const &, matrix4 const &, bool);
void Pieplate::Renderer::singleFootCompute(vector3 const &, float, Sob const *, matrix4 const &, matrix4 const &, bool) // 0x619996
{
    mangled_assert("?singleFootCompute@Renderer@Pieplate@@QAEXABVvector3@@MPBVSob@@ABVmatrix4@@2_N@Z");
    todo("implement");
    _sub_619996(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_619577(Pieplate::Renderer *const);
void Pieplate::Renderer::renderFootList() // 0x619577
{
    mangled_assert("?renderFootList@Renderer@Pieplate@@QAEXXZ");
    todo("implement");
    _sub_619577(this);
}

_extern void _sub_61646B(Pieplate::Renderer *const, Selection const &, Camera const *, bool);
void Pieplate::Renderer::allSquadsFeetCompute(Selection const &, Camera const *, bool) // 0x61646B
{
    mangled_assert("?allSquadsFeetCompute@Renderer@Pieplate@@QAEXABVSelection@@PBVCamera@@_N@Z");
    todo("implement");
    _sub_61646B(this, arg, arg, arg);
}

_extern void _sub_61642E(Pieplate *const, vector3 &, float);
void Pieplate::addFoot(vector3 &, float) // 0x61642E
{
    mangled_assert("?addFoot@Pieplate@@QAEXAAVvector3@@M@Z");
    todo("implement");
    _sub_61642E(this, arg, arg);
}

/* ---------- private code */
#endif

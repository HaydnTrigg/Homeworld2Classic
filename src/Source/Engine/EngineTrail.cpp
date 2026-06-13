#if 0
/* ---------- headers */

#include "decomp.h"
#include <renderer.h>
#include <platform\platformexports.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\mathutil.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Camera\Camera.h>
#include <profile\profile.h>
#include <pch.h>
#include <Camera\Frustum.h>
#include <iostream>
#include <Camera\Plane3.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\matrix3.h>
#include <EngineTrailManager.h>
#include <Render\gl\r_types.h>
#include <Render\objects\core.h>
#include <new>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <exception>
#include <xstddef>
#include <MultiplierTypes.h>
#include <Render\objects\texture.h>
#include <type_traits>
#include <Collision\BVH\bvh.h>
#include <Render\objects\cliprect.h>
#include <Render\objects\textureregistry.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <sob.h>
#include <math.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <list>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <TeamColourRegistry.h>
#include <xtree>
#include <savegame.h>
#include <task.h>
#include <boost\scoped_ptr.hpp>
#include <stack>
#include <SobWithMeshStatic.h>
#include <Mathlib\vector2.h>
#include <SobWithMesh.h>
#include <util\types.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <boost\cstdint.hpp>
#include <MeshAnimation.h>
#include <Render\objects\fontsystem.h>
#include <EngineTrailSystem.h>
#include <Render\objects\objects.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <Collision\BVH\octree.h>
#include <xhash>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\span.h>
#include <boost\scoped_array.hpp>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\quat.h>
#include <Collision\intersect.h>
#include <EngineTrailUtil.h>
#include <Collision\primitivesfwd.h>
#include <gameRandom.h>
#include <random.h>
#include <Interpolation.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\aabb.h>
#include <debug\db.h>
#include <EngineTrailFrame.h>
#include <sobid.h>
#include <fileio\iff.h>
#include <ITweak.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Tactics.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <Camera\CameraUtil.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <SelTarg.h>
#include <seInterface2\PatchID.h>
#include <prim.h>
#include <seInterface2\PatchBase.h>
#include <platform\osdef.h>
#include <seInterface2\SoundParams.h>
#include <EngineTrail.h>
#include <EngineTrailFrameList.h>
#include <wchar.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <gameRenderDebug.h>
#include <platform\timer.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern float calculateSpeedGap(float currentSpeed, float maxSpeed, float maxGap);
extern _inline float calculateAge(EngineTrailFrame const *pFrame, float lifespan, float ooLifespan);
extern _inline void calculateSegmentPosition(vector3 const &origin, vector3 const &framePosition, matrix3 const &frameOrientation, float scale, vector3 &outPos);
extern _inline void calculateVCross(vector3 const &cameraPos, vector3 const &nextPos, vector3 const &prevPos, vector3 const &direction, vector3 &vcross);
extern _inline void addRibbonSegment(FatVertex *fat, unsigned __int32 &fatCount, vector3 const &position, vector3 const &vcross, bool bStretch, EngineTrailStatic::Tweaks const *tweaks, float totalDistance, float age, float shipSpeed, float uscrollStart);

_static void expandBoundingBox(vector3 const &point, vector3 &min, vector3 &max);
_static void createFrameOrientation3(vector3 const &prevPosition, vector3 const &prevUp, vector3 const &thisPosition, vector3 const &thisUp, vector3 const &nextPosition, vector3 const &nextUp, matrix3 &output);
_static void createFrameOrientation2(vector3 const &prevPosition, vector3 const &prevUp, vector3 const &thisPosition, vector3 const &thisUp, matrix3 &output);
_static float CalculateFade(Camera const *pCamera, vector3 const &boxmin, vector3 const &boxmax);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const ETM_MinSegmentLength; // 0x75F838
    extern float const ETM_MinSegmentLengthSqr; // 0x833018
    extern float const ETM_MaxSegmentLength; // 0x75F83C
    extern float const ETM_MaxSegmentLengthSqr; // 0x83301C
    extern float const k_TrailBoxUpdatePeriod; // 0x75F840
    extern float curveFactor; // 0x83300C
    extern float g_maxSpeed; // 0x833010
    extern float g_maxGap; // 0x833014
}

/* ---------- public code */

_extern _sub_443F17(EngineTrail *const, unsigned __int32, EngineTrailStatic const *);
EngineTrail::EngineTrail(unsigned __int32, EngineTrailStatic const *) // 0x443F17
{
    mangled_assert("??0EngineTrail@@QAE@IPBVEngineTrailStatic@@@Z");
    todo("implement");
    _sub_443F17(this, arg, arg);
}

_extern void _sub_443F6E(EngineTrail *const);
EngineTrail::~EngineTrail() // 0x443F6E
{
    mangled_assert("??1EngineTrail@@QAE@XZ");
    todo("implement");
    _sub_443F6E(this);
}

_extern EngineTrailFrame *_sub_446080(EngineTrail *const);
EngineTrailFrame *EngineTrail::getHead() // 0x446080
{
    mangled_assert("?getHead@EngineTrail@@QAEPAVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame * __result = _sub_446080(this);
    return __result;
}

_extern EngineTrailFrame const *_sub_446088(EngineTrail const *const);
EngineTrailFrame const *EngineTrail::getHead() const // 0x446088
{
    mangled_assert("?getHead@EngineTrail@@QBEPBVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame const * __result = _sub_446088(this);
    return __result;
}

_extern unsigned __int32 _sub_445EFF(EngineTrail *const, float);
unsigned __int32 EngineTrail::expireFrames(float) // 0x445EFF
{
    mangled_assert("?expireFrames@EngineTrail@@QAEIM@Z");
    todo("implement");
    unsigned __int32 __result = _sub_445EFF(this, arg);
    return __result;
}

_extern void _sub_446509(EngineTrail *const);
void EngineTrail::setZero() // 0x446509
{
    mangled_assert("?setZero@EngineTrail@@QAEXXZ");
    todo("implement");
    _sub_446509(this);
}

_extern void _sub_446176(EngineTrail *const, vector3 const &);
void EngineTrail::offset(vector3 const &) // 0x446176
{
    mangled_assert("?offset@EngineTrail@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_446176(this, arg);
}

_extern void _sub_444B80(EngineTrail *const, vector3 const &, float);
void EngineTrail::computeBoundingBox(vector3 const &, float) // 0x444B80
{
    mangled_assert("?computeBoundingBox@EngineTrail@@AAEXABVvector3@@M@Z");
    todo("implement");
    _sub_444B80(this, arg, arg);
}

_extern float _sub_4449C1(float, float, float);
float calculateSpeedGap(float currentSpeed, float maxSpeed, float maxGap) // 0x4449C1
{
    mangled_assert("?calculateSpeedGap@@YGMMMM@Z");
    todo("implement");
    float __result = _sub_4449C1(currentSpeed, maxSpeed, maxGap);
    return __result;
}

_extern void _sub_446547(EngineTrail *const, float, matrix3 const &, vector3 const &, vector3 const &, vector3 const &, float);
void EngineTrail::update(float, matrix3 const &, vector3 const &, vector3 const &, vector3 const &, float) // 0x446547
{
    mangled_assert("?update@EngineTrail@@QAEXMABVmatrix3@@ABVvector3@@11M@Z");
    todo("implement");
    _sub_446547(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_4461C6(EngineTrail *const, Camera const *, SobWithMesh *, vector3 const *, unsigned __int32, float, float, unsigned __int32);
void EngineTrail::render(Camera const *, SobWithMesh *, vector3 const *, unsigned __int32, float, float, unsigned __int32) // 0x4461C6
{
    mangled_assert("?render@EngineTrail@@QAEXPBVCamera@@PAVSobWithMesh@@PBVvector3@@IMMI@Z");
    todo("implement");
    _sub_4461C6(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern float _sub_44480B(EngineTrailFrame const *, float, float);
_inline float calculateAge(EngineTrailFrame const *pFrame, float lifespan, float ooLifespan) // 0x44480B
{
    mangled_assert("?calculateAge@@YGMPBVEngineTrailFrame@@MM@Z");
    todo("implement");
    float __result = _sub_44480B(pFrame, lifespan, ooLifespan);
    return __result;
}

_extern void _sub_4448F3(vector3 const &, vector3 const &, matrix3 const &, float, vector3 &);
_inline void calculateSegmentPosition(vector3 const &origin, vector3 const &framePosition, matrix3 const &frameOrientation, float scale, vector3 &outPos) // 0x4448F3
{
    mangled_assert("?calculateSegmentPosition@@YGXABVvector3@@0ABVmatrix3@@MAAV1@@Z");
    todo("implement");
    _sub_4448F3(origin, framePosition, frameOrientation, scale, outPos);
}

_extern void _sub_4449EF(vector3 const &, vector3 const &, vector3 const &, vector3 const &, vector3 &);
_inline void calculateVCross(vector3 const &cameraPos, vector3 const &nextPos, vector3 const &prevPos, vector3 const &direction, vector3 &vcross) // 0x4449EF
{
    mangled_assert("?calculateVCross@@YGXABVvector3@@000AAV1@@Z");
    todo("implement");
    _sub_4449EF(cameraPos, nextPos, prevPos, direction, vcross);
}

_extern void _sub_44467C(FatVertex *, unsigned __int32 &, vector3 const &, vector3 const &, bool, EngineTrailStatic::Tweaks const *, float, float, float, float);
_inline void addRibbonSegment(FatVertex *fat, unsigned __int32 &fatCount, vector3 const &position, vector3 const &vcross, bool bStretch, EngineTrailStatic::Tweaks const *tweaks, float totalDistance, float age, float shipSpeed, float uscrollStart) // 0x44467C
{
    mangled_assert("?addRibbonSegment@@YGXPAUFatVertex@@AAIABVvector3@@2_NPBVTweaks@EngineTrailStatic@@MMMM@Z");
    todo("implement");
    _sub_44467C(fat, fatCount, position, vcross, bStretch, tweaks, totalDistance, age, shipSpeed, uscrollStart);
}

_extern void _sub_444F10(EngineTrail *const, Camera const *, float, float, matrix3 const *, vector3 const *, vector3 const *, unsigned __int32, float, unsigned __int32);
void EngineTrail::drawRibbon(Camera const *, float, float, matrix3 const *, vector3 const *, vector3 const *, unsigned __int32, float, unsigned __int32) // 0x444F10
{
    mangled_assert("?drawRibbon@EngineTrail@@AAEXPBVCamera@@MMPBVmatrix3@@PBVvector3@@2IMI@Z");
    todo("implement");
    _sub_444F10(this, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_445A00(EngineTrail *const, float, matrix3 const *, vector3 const *, vector3 const *, float const, unsigned __int32);
void EngineTrail::drawSimpleLine(float, matrix3 const *, vector3 const *, vector3 const *, float const, unsigned __int32) // 0x445A00
{
    mangled_assert("?drawSimpleLine@EngineTrail@@AAEXMPBVmatrix3@@PBVvector3@@1MI@Z");
    todo("implement");
    _sub_445A00(this, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_444840(EngineTrail *const, float, vector3 &);
bool EngineTrail::calculatePosition(float, vector3 &) // 0x444840
{
    mangled_assert("?calculatePosition@EngineTrail@@AAE_NMAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_444840(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_445EBF(vector3 const &, vector3 &, vector3 &);
_static void expandBoundingBox(vector3 const &point, vector3 &min, vector3 &max) // 0x445EBF
{
    mangled_assert("expandBoundingBox");
    todo("implement");
    _sub_445EBF(point, min, max);
}

_extern void _sub_444D2A(vector3 const &, vector3 const &, vector3 const &, vector3 const &, vector3 const &, vector3 const &, matrix3 &);
_static void createFrameOrientation3(vector3 const &prevPosition, vector3 const &prevUp, vector3 const &thisPosition, vector3 const &thisUp, vector3 const &nextPosition, vector3 const &nextUp, matrix3 &output) // 0x444D2A
{
    mangled_assert("createFrameOrientation3");
    todo("implement");
    _sub_444D2A(prevPosition, prevUp, thisPosition, thisUp, nextPosition, nextUp, output);
}

_extern void _sub_444C63(vector3 const &, vector3 const &, vector3 const &, vector3 const &, matrix3 &);
_static void createFrameOrientation2(vector3 const &prevPosition, vector3 const &prevUp, vector3 const &thisPosition, vector3 const &thisUp, matrix3 &output) // 0x444C63
{
    mangled_assert("createFrameOrientation2");
    todo("implement");
    _sub_444C63(prevPosition, prevUp, thisPosition, thisUp, output);
}

_extern float _sub_444114(Camera const *, vector3 const &, vector3 const &);
_static float CalculateFade(Camera const *pCamera, vector3 const &boxmin, vector3 const &boxmax) // 0x444114
{
    mangled_assert("CalculateFade");
    todo("implement");
    float __result = _sub_444114(pCamera, boxmin, boxmax);
    return __result;
}
#endif

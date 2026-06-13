#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\SampleID.h>
#include <assist\stlexsmallvector.h>
#include <seInterface2\SampleBase.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SelTarg.h>
#include <prim.h>
#include <SensorsManager.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <new>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <exception>
#include <xstddef>
#include <Collision\BVH\profiling.h>
#include <Render\gl\r_defines.h>
#include <type_traits>
#include <Render\gl\glext.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <task.h>
#include <seInterface2\sedefinesshared.h>
#include <xmemory>
#include <stack>
#include <debug\ctassert.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <abilities.h>
#include <math.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <NIS\NISManager.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <AnimCurve.h>
#include <Mathlib\vector2.h>
#include <Camera\OrbitParameters.h>
#include <util\types.h>
#include <Collision\Primitives\obb.h>
#include <boost\cstdint.hpp>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <CoordSysUtilities.h>
#include <NIS\NISMotion.h>
#include <sobid.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <Mathlib\mathlibdll.h>
#include <Camera\CameraOrbitTarget.h>
#include <Mathlib\fastmath.h>
#include <Mathlib\mathutil.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <debug\db.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <SoundManager\SoundManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Collision\BVH\proxy.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Render\FxGL\FXManager.h>
#include <savegamedef.h>
#include <Render\FxGL\VarMulti.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <Interpolation.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <MainUI.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <NIS\NISTransition.h>
#include <wchar.h>
#include <platform\timer.h>
#include <platform\platformexports.h>

/* ---------- constants */

/* ---------- definitions */

class BlendTransition
{
public:
    BlendTransition(BlendTransition const &); /* compiler_generated() */
    _inline BlendTransition(float, float);
    virtual _inline ~BlendTransition();
    virtual _inline void update(float);
    _inline float getFOV() const;
    virtual void getCamera(vector3 &, matrix3 &) = 0;
private:
    float m_startFOV; // 0x4
    float m_endFOV; // 0x8
    float m_currentFOV; // 0xC
public:
    BlendTransition &operator=(BlendTransition const &); /* compiler_generated() */
};
static_assert(sizeof(BlendTransition) == 16, "Invalid BlendTransition size");

class OneNodeBlendTransition :
    public BlendTransition
{
public:
    OneNodeBlendTransition(OneNodeBlendTransition const &); /* compiler_generated() */
    _inline OneNodeBlendTransition(float, float, vector3 const &, matrix3 const &, vector3 const &, matrix3 const &);
    virtual _inline ~OneNodeBlendTransition() override;
    virtual _inline void update(float) override;
    virtual _inline void getCamera(vector3 &, matrix3 &) override;
private:
    _inline void computeTarget(vector3 const &, quat const &, vector3 &);
    vector3 const m_eyeStart; // 0x10
    vector3 const m_eyeEnd; // 0x1C
    quat const m_quatStart; // 0x28
    quat const m_quatEnd; // 0x38
    quat m_quat; // 0x48
    vector3 m_eyePosition; // 0x58
    vector3 m_targetPosition; // 0x64
};
static_assert(sizeof(OneNodeBlendTransition) == 112, "Invalid OneNodeBlendTransition size");

class TwoNodeBlendTransition :
    public BlendTransition
{
public:
    TwoNodeBlendTransition(TwoNodeBlendTransition const &); /* compiler_generated() */
    _inline TwoNodeBlendTransition(float, float, vector3 const &, vector3 const &, vector3 const &, vector3 const &);
    virtual _inline ~TwoNodeBlendTransition() override;
    virtual _inline void update(float) override;
    virtual _inline void getCamera(vector3 &, matrix3 &) override;
private:
    vector3 const m_eyeStart; // 0x10
    vector3 const m_eyeEnd; // 0x1C
    vector3 const m_targetStart; // 0x28
    vector3 const m_targetEnd; // 0x34
    vector3 m_eyePosition; // 0x40
    vector3 m_targetPosition; // 0x4C
};
static_assert(sizeof(TwoNodeBlendTransition) == 88, "Invalid TwoNodeBlendTransition size");

class StaticBlendTransition :
    public BlendTransition
{
public:
    StaticBlendTransition(StaticBlendTransition const &); /* compiler_generated() */
    _inline StaticBlendTransition(float, float, vector3 const &, vector3 const &);
    virtual _inline ~StaticBlendTransition() override;
    virtual _inline void update(float) override;
    virtual _inline void getCamera(vector3 &, matrix3 &) override;
private:
    vector3 const m_eyeEnd; // 0x10
    vector3 const m_targetEnd; // 0x1C
};
static_assert(sizeof(StaticBlendTransition) == 40, "Invalid StaticBlendTransition size");

/* ---------- prototypes */


_static void MakeCameraMatrix(vector3 const &position, matrix3 const &orientation, matrix4 &output);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const ZERO_Epsilon; // 0x79F924
}

/* ---------- public code */

_extern _sub_557C24(BlendTransition *const, float, float);
_inline BlendTransition::BlendTransition(float, float) // 0x557C24
{
    mangled_assert("??0BlendTransition@@QAE@MM@Z");
    todo("implement");
    _sub_557C24(this, arg, arg);
}

_extern void _sub_557D91(BlendTransition *const);
_inline BlendTransition::~BlendTransition() // 0x557D91
{
    mangled_assert("??1BlendTransition@@UAE@XZ");
    todo("implement");
    _sub_557D91(this);
}

_extern void _sub_558887(BlendTransition *const, float);
_inline void BlendTransition::update(float) // 0x558887
{
    mangled_assert("?update@BlendTransition@@UAEXM@Z");
    todo("implement");
    _sub_558887(this, arg);
}

_extern float _sub_558661(BlendTransition const *const);
_inline float BlendTransition::getFOV() const // 0x558661
{
    mangled_assert("?getFOV@BlendTransition@@QBEMXZ");
    todo("implement");
    float __result = _sub_558661(this);
    return __result;
}

_extern _sub_557C7D(OneNodeBlendTransition *const, float, float, vector3 const &, matrix3 const &, vector3 const &, matrix3 const &);
_inline OneNodeBlendTransition::OneNodeBlendTransition(float, float, vector3 const &, matrix3 const &, vector3 const &, matrix3 const &) // 0x557C7D
{
    mangled_assert("??0OneNodeBlendTransition@@QAE@MMABVvector3@@ABVmatrix3@@01@Z");
    todo("implement");
    _sub_557C7D(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_557DF2(OneNodeBlendTransition *const);
_inline OneNodeBlendTransition::~OneNodeBlendTransition() // 0x557DF2
{
    mangled_assert("??1OneNodeBlendTransition@@UAE@XZ");
    todo("implement");
    _sub_557DF2(this);
}

_extern void _sub_5588C6(OneNodeBlendTransition *const, float);
_inline void OneNodeBlendTransition::update(float) // 0x5588C6
{
    mangled_assert("?update@OneNodeBlendTransition@@UAEXM@Z");
    todo("implement");
    _sub_5588C6(this, arg);
}

_extern void _sub_5584C1(OneNodeBlendTransition *const, vector3 &, matrix3 &);
_inline void OneNodeBlendTransition::getCamera(vector3 &, matrix3 &) // 0x5584C1
{
    mangled_assert("?getCamera@OneNodeBlendTransition@@UAEXAAVvector3@@AAVmatrix3@@@Z");
    todo("implement");
    _sub_5584C1(this, arg, arg);
}

_extern void _sub_55841C(OneNodeBlendTransition *const, vector3 const &, quat const &, vector3 &);
_inline void OneNodeBlendTransition::computeTarget(vector3 const &, quat const &, vector3 &) // 0x55841C
{
    mangled_assert("?computeTarget@OneNodeBlendTransition@@AAEXABVvector3@@ABVquat@@AAV2@@Z");
    todo("implement");
    _sub_55841C(this, arg, arg, arg);
}

_extern _sub_557D34(TwoNodeBlendTransition *const, float, float, vector3 const &, vector3 const &, vector3 const &, vector3 const &);
_inline TwoNodeBlendTransition::TwoNodeBlendTransition(float, float, vector3 const &, vector3 const &, vector3 const &, vector3 const &) // 0x557D34
{
    mangled_assert("??0TwoNodeBlendTransition@@QAE@MMABVvector3@@000@Z");
    todo("implement");
    _sub_557D34(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_557E00(TwoNodeBlendTransition *const);
_inline TwoNodeBlendTransition::~TwoNodeBlendTransition() // 0x557E00
{
    mangled_assert("??1TwoNodeBlendTransition@@UAE@XZ");
    todo("implement");
    _sub_557E00(this);
}

_extern void _sub_5589EE(TwoNodeBlendTransition *const, float);
_inline void TwoNodeBlendTransition::update(float) // 0x5589EE
{
    mangled_assert("?update@TwoNodeBlendTransition@@UAEXM@Z");
    todo("implement");
    _sub_5589EE(this, arg);
}

_extern void _sub_558536(TwoNodeBlendTransition *const, vector3 &, matrix3 &);
_inline void TwoNodeBlendTransition::getCamera(vector3 &, matrix3 &) // 0x558536
{
    mangled_assert("?getCamera@TwoNodeBlendTransition@@UAEXAAVvector3@@AAVmatrix3@@@Z");
    todo("implement");
    _sub_558536(this, arg, arg);
}

_extern _sub_557CFB(StaticBlendTransition *const, float, float, vector3 const &, vector3 const &);
_inline StaticBlendTransition::StaticBlendTransition(float, float, vector3 const &, vector3 const &) // 0x557CFB
{
    mangled_assert("??0StaticBlendTransition@@QAE@MMABVvector3@@0@Z");
    todo("implement");
    _sub_557CFB(this, arg, arg, arg, arg);
}

_extern void _sub_557DF9(StaticBlendTransition *const);
_inline StaticBlendTransition::~StaticBlendTransition() // 0x557DF9
{
    mangled_assert("??1StaticBlendTransition@@UAE@XZ");
    todo("implement");
    _sub_557DF9(this);
}

_extern void _sub_5589B5(StaticBlendTransition *const, float);
_inline void StaticBlendTransition::update(float) // 0x5589B5
{
    mangled_assert("?update@StaticBlendTransition@@UAEXM@Z");
    todo("implement");
    _sub_5589B5(this, arg);
}

_extern void _sub_5584DE(StaticBlendTransition *const, vector3 &, matrix3 &);
_inline void StaticBlendTransition::getCamera(vector3 &, matrix3 &) // 0x5584DE
{
    mangled_assert("?getCamera@StaticBlendTransition@@UAEXAAVvector3@@AAVmatrix3@@@Z");
    todo("implement");
    _sub_5584DE(this, arg, arg);
}

_extern _sub_557C45(NISTransition *const, NIS &);
NISTransition::NISTransition(NIS &) // 0x557C45
{
    mangled_assert("??0NISTransition@@QAE@AAVNIS@@@Z");
    todo("implement");
    _sub_557C45(this, arg);
}

_extern void _sub_557D98(NISTransition *const);
NISTransition::~NISTransition() // 0x557D98
{
    mangled_assert("??1NISTransition@@QAE@XZ");
    todo("implement");
    _sub_557D98(this);
}

_extern void _sub_558827(NISTransition *const, MotionCamera *);
void NISTransition::setCurrentCamera(MotionCamera *) // 0x558827
{
    mangled_assert("?setCurrentCamera@NISTransition@@QAEXPAVMotionCamera@@@Z");
    todo("implement");
    _sub_558827(this, arg);
}

_extern void _sub_5587B8(NISTransition *const, MotionCamera *, float);
void NISTransition::setCameraBlendIn(MotionCamera *, float) // 0x5587B8
{
    mangled_assert("?setCameraBlendIn@NISTransition@@QAEXPAVMotionCamera@@M@Z");
    todo("implement");
    _sub_5587B8(this, arg, arg);
}

_extern void _sub_5587D7(NISTransition *const, MotionCamera *, float, float, float);
void NISTransition::setCameraFadeIn(MotionCamera *, float, float, float) // 0x5587D7
{
    mangled_assert("?setCameraFadeIn@NISTransition@@QAEXPAVMotionCamera@@MMM@Z");
    todo("implement");
    _sub_5587D7(this, arg, arg, arg, arg);
}

_extern void _sub_558843(NISTransition *const, Selection const &);
void NISTransition::setEndFocus(Selection const &) // 0x558843
{
    mangled_assert("?setEndFocus@NISTransition@@QAEXABVSelection@@@Z");
    todo("implement");
    _sub_558843(this, arg);
}

_extern void _sub_558866(NISTransition *const, vector3 const &);
void NISTransition::setEndFocus(vector3 const &) // 0x558866
{
    mangled_assert("?setEndFocus@NISTransition@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_558866(this, arg);
}

_extern void _sub_55881F(NISTransition *const);
void NISTransition::setCameraLeave() // 0x55881F
{
    mangled_assert("?setCameraLeave@NISTransition@@QAEXXZ");
    todo("implement");
    _sub_55881F(this);
}

_extern bool _sub_5588C0(NISTransition *const, float);
bool NISTransition::update(float) // 0x5588C0
{
    mangled_assert("?update@NISTransition@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_5588C0(this, arg);
    return __result;
}

_extern bool _sub_558766(NISTransition *const, float);
bool NISTransition::renderTimeUpdate(float) // 0x558766
{
    mangled_assert("?renderTimeUpdate@NISTransition@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_558766(this, arg);
    return __result;
}

_extern void _sub_557F9A(NISTransition *const);
void NISTransition::cameraBlendInSetup() // 0x557F9A
{
    mangled_assert("?cameraBlendInSetup@NISTransition@@AAEXXZ");
    todo("implement");
    _sub_557F9A(this);
}

_extern void _sub_5582AB(NISTransition *const);
void NISTransition::cameraFadeInSetup() // 0x5582AB
{
    mangled_assert("?cameraFadeInSetup@NISTransition@@AAEXXZ");
    todo("implement");
    _sub_5582AB(this);
}

_extern void _sub_5583FA(NISTransition *const);
void NISTransition::cameraTransitionInSetup() // 0x5583FA
{
    mangled_assert("?cameraTransitionInSetup@NISTransition@@QAEXXZ");
    todo("implement");
    _sub_5583FA(this);
}

_extern bool _sub_557F2F(NISTransition *const);
bool NISTransition::cameraBlendInEnd() // 0x557F2F
{
    mangled_assert("?cameraBlendInEnd@NISTransition@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_557F2F(this);
    return __result;
}

_extern bool _sub_557F36(NISTransition *const, float);
bool NISTransition::cameraBlendInRun(float) // 0x557F36
{
    mangled_assert("?cameraBlendInRun@NISTransition@@AAE_NM@Z");
    todo("implement");
    bool __result = _sub_557F36(this, arg);
    return __result;
}

_extern bool _sub_558229(NISTransition *const, float);
bool NISTransition::cameraFadeInRun(float) // 0x558229
{
    mangled_assert("?cameraFadeInRun@NISTransition@@AAE_NM@Z");
    todo("implement");
    bool __result = _sub_558229(this, arg);
    return __result;
}

_extern bool _sub_5583C1(NISTransition *const, float);
bool NISTransition::cameraTransitionInRun(float) // 0x5583C1
{
    mangled_assert("?cameraTransitionInRun@NISTransition@@AAE_NM@Z");
    todo("implement");
    bool __result = _sub_5583C1(this, arg);
    return __result;
}

_extern bool _sub_5585BE(NISTransition *const, float &, matrix4 &);
bool NISTransition::getCameraTransitionBlend(float &, matrix4 &) // 0x5585BE
{
    mangled_assert("?getCameraTransitionBlend@NISTransition@@AAE_NAAMAAVmatrix4@@@Z");
    todo("implement");
    bool __result = _sub_5585BE(this, arg, arg);
    return __result;
}

_extern bool _sub_5585F9(NISTransition *const, float &, matrix4 &);
bool NISTransition::getCameraTransitionFade(float &, matrix4 &) // 0x5585F9
{
    mangled_assert("?getCameraTransitionFade@NISTransition@@AAE_NAAMAAVmatrix4@@@Z");
    todo("implement");
    bool __result = _sub_5585F9(this, arg, arg);
    return __result;
}

_extern bool _sub_55858E(NISTransition *const, float &, matrix4 &);
bool NISTransition::getCameraTransition(float &, matrix4 &) // 0x55858E
{
    mangled_assert("?getCameraTransition@NISTransition@@QAE_NAAMAAVmatrix4@@@Z");
    todo("implement");
    bool __result = _sub_55858E(this, arg, arg);
    return __result;
}

_extern void _sub_558728(NISTransition *const, MotionCamera *);
void NISTransition::previousFocusTransition(MotionCamera *) // 0x558728
{
    mangled_assert("?previousFocusTransition@NISTransition@@AAEXPAVMotionCamera@@@Z");
    todo("implement");
    _sub_558728(this, arg);
}

_extern void _sub_558665(NISTransition *const, MotionCamera *);
void NISTransition::leaveCameraTransition(MotionCamera *) // 0x558665
{
    mangled_assert("?leaveCameraTransition@NISTransition@@AAEXPAVMotionCamera@@@Z");
    todo("implement");
    _sub_558665(this, arg);
}

_extern void _sub_5584A9(NISTransition *const, MotionCamera *);
void NISTransition::executeOutTransition(MotionCamera *) // 0x5584A9
{
    mangled_assert("?executeOutTransition@NISTransition@@QAEXPAVMotionCamera@@@Z");
    todo("implement");
    _sub_5584A9(this, arg);
}

/* ---------- private code */

_extern void _sub_557E7B(vector3 const &, matrix3 const &, matrix4 &);
_static void MakeCameraMatrix(vector3 const &position, matrix3 const &orientation, matrix4 &output) // 0x557E7B
{
    mangled_assert("MakeCameraMatrix");
    todo("implement");
    _sub_557E7B(position, orientation, output);
}
#endif

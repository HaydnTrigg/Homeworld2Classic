#if 0
/* ---------- headers */

#include "decomp.h"
#include <Camera\pch.h>
#include <crtdefs.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <exception>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector4.h>
#include <math.h>
#include <Camera\CameraUtil.h>
#include <Camera\Camera.pch>
#include <Camera\Camera.h>
#include <Mathlib\mathutil.h>
#include <Camera\Frustum.h>
#include <cfloat>
#include <Camera\Plane3.h>
#include <float.h>
#include <crtwrn.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const k_defaultVertFOV; // 0x7B34A8
    extern float const k_defaultNearClip; // 0x7B34AC
    extern float const k_defaultFarClip; // 0x7B34B0
    extern float const k_defaultAspectRatio; // 0x7B34B4
}

/* ---------- public code */

_extern _sub_6669EE(Camera *const);
Camera::Camera() // 0x6669EE
{
    mangled_assert("??0Camera@@QAE@XZ");
    todo("implement");
    _sub_6669EE(this);
}

_extern void _sub_666A7E(Camera *const);
Camera::~Camera() // 0x666A7E
{
    mangled_assert("??1Camera@@UAE@XZ");
    todo("implement");
    _sub_666A7E(this);
}

_extern Camera &_sub_666A85(Camera *const, Camera const &);
Camera &Camera::operator=(Camera const &) // 0x666A85
{
    mangled_assert("??4Camera@@QAEAAV0@ABV0@@Z");
    todo("implement");
    Camera & __result = _sub_666A85(this, arg);
    return __result;
}

_extern void _sub_666DF4(Camera *const, bool);
void Camera::setUseInputMatrix(bool) // 0x666DF4
{
    mangled_assert("?setUseInputMatrix@Camera@@QAEX_N@Z");
    todo("implement");
    _sub_666DF4(this, arg);
}

_extern void _sub_666DCD(Camera *const, matrix4 const &);
void Camera::setInputMatrix(matrix4 const &) // 0x666DCD
{
    mangled_assert("?setInputMatrix@Camera@@QAEXABVmatrix4@@@Z");
    todo("implement");
    _sub_666DCD(this, arg);
}

_extern void _sub_666E01(Camera *const, float);
void Camera::setVerticalFOV(float) // 0x666E01
{
    mangled_assert("?setVerticalFOV@Camera@@UAEXM@Z");
    todo("implement");
    _sub_666E01(this, arg);
}

_extern void _sub_666DE3(Camera *const, float);
void Camera::setNearClip(float) // 0x666DE3
{
    mangled_assert("?setNearClip@Camera@@UAEXM@Z");
    todo("implement");
    _sub_666DE3(this, arg);
}

_extern void _sub_666DBC(Camera *const, float);
void Camera::setFarClip(float) // 0x666DBC
{
    mangled_assert("?setFarClip@Camera@@UAEXM@Z");
    todo("implement");
    _sub_666DBC(this, arg);
}

_extern void _sub_666DAB(Camera *const, float);
void Camera::setAspectRatio(float) // 0x666DAB
{
    mangled_assert("?setAspectRatio@Camera@@UAEXM@Z");
    todo("implement");
    _sub_666DAB(this, arg);
}

_extern void _sub_666E12(Camera *const, vector4 &);
void Camera::setWindow(vector4 &) // 0x666E12
{
    mangled_assert("?setWindow@Camera@@UAEXAAVvector4@@@Z");
    todo("implement");
    _sub_666E12(this, arg);
}

_extern vector4 &_sub_666DA4(Camera *const);
vector4 &Camera::getWindow() // 0x666DA4
{
    mangled_assert("?getWindow@Camera@@UAEAAVvector4@@XZ");
    todo("implement");
    vector4 & __result = _sub_666DA4(this);
    return __result;
}

_extern float const _sub_666D9D(Camera const *const);
float const Camera::getVerticalFOV() const // 0x666D9D
{
    mangled_assert("?getVerticalFOV@Camera@@UBE?BMXZ");
    todo("implement");
    float const __result = _sub_666D9D(this);
    return __result;
}

_extern float const _sub_666BA2(Camera const *const);
float const Camera::getHorizontalFOV() const // 0x666BA2
{
    mangled_assert("?getHorizontalFOV@Camera@@UBE?BMXZ");
    todo("implement");
    float const __result = _sub_666BA2(this);
    return __result;
}

_extern vector3 const &_sub_666D2C(Camera const *const);
vector3 const &Camera::getPosition() const // 0x666D2C
{
    mangled_assert("?getPosition@Camera@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_666D2C(this);
    return __result;
}

_extern void _sub_666D68(Camera const *const, vector3 &);
void Camera::getUpVector(vector3 &) const // 0x666D68
{
    mangled_assert("?getUpVector@Camera@@UBEXAAVvector3@@@Z");
    todo("implement");
    _sub_666D68(this, arg);
}

_extern void _sub_666D33(Camera const *const, vector3 &);
void Camera::getRightVector(vector3 &) const // 0x666D33
{
    mangled_assert("?getRightVector@Camera@@UBEXAAVvector3@@@Z");
    todo("implement");
    _sub_666D33(this, arg);
}

_extern void _sub_666CE2(Camera const *const, vector3 &);
void Camera::getNormalVector(vector3 &) const // 0x666CE2
{
    mangled_assert("?getNormalVector@Camera@@UBEXAAVvector3@@@Z");
    todo("implement");
    _sub_666CE2(this, arg);
}

_extern void _sub_666AF9(Camera *const, Frustum &);
void Camera::createFrustum(Frustum &) // 0x666AF9
{
    mangled_assert("?createFrustum@Camera@@QAEXAAVFrustum@@@Z");
    todo("implement");
    _sub_666AF9(this, arg);
}

_extern Frustum const &_sub_666B9B(Camera const *const);
Frustum const &Camera::getFrustum() const // 0x666B9B
{
    mangled_assert("?getFrustum@Camera@@QBEABVFrustum@@XZ");
    todo("implement");
    Frustum const & __result = _sub_666B9B(this);
    return __result;
}

_extern void _sub_666E79(Camera *const);
void Camera::updateProjectionMatrix() // 0x666E79
{
    mangled_assert("?updateProjectionMatrix@Camera@@IAEXXZ");
    todo("implement");
    _sub_666E79(this);
}

_extern void _sub_666E27(Camera *const);
void Camera::update() // 0x666E27
{
    mangled_assert("?update@Camera@@UAEXXZ");
    todo("implement");
    _sub_666E27(this);
}

_extern void _sub_666BC0(Camera const *const, float const, float const, vector3 &);
void Camera::getMouseRay(float const, float const, vector3 &) const // 0x666BC0
{
    mangled_assert("?getMouseRay@Camera@@QBEXMMAAVvector3@@@Z");
    todo("implement");
    _sub_666BC0(this, arg, arg, arg);
}

/* ---------- private code */
#endif

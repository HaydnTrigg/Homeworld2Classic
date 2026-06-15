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

Camera::Camera() // 0x6669EE
{
    mangled_assert("??0Camera@@QAE@XZ");
    todo("implement");
}

Camera::~Camera() // 0x666A7E
{
    mangled_assert("??1Camera@@UAE@XZ");
    todo("implement");
}

Camera &Camera::operator=(Camera const &) // 0x666A85
{
    mangled_assert("??4Camera@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

void Camera::setUseInputMatrix(bool) // 0x666DF4
{
    mangled_assert("?setUseInputMatrix@Camera@@QAEX_N@Z");
    todo("implement");
}

void Camera::setInputMatrix(matrix4 const &) // 0x666DCD
{
    mangled_assert("?setInputMatrix@Camera@@QAEXABVmatrix4@@@Z");
    todo("implement");
}

void Camera::setVerticalFOV(float) // 0x666E01
{
    mangled_assert("?setVerticalFOV@Camera@@UAEXM@Z");
    todo("implement");
}

void Camera::setNearClip(float) // 0x666DE3
{
    mangled_assert("?setNearClip@Camera@@UAEXM@Z");
    todo("implement");
}

void Camera::setFarClip(float) // 0x666DBC
{
    mangled_assert("?setFarClip@Camera@@UAEXM@Z");
    todo("implement");
}

void Camera::setAspectRatio(float) // 0x666DAB
{
    mangled_assert("?setAspectRatio@Camera@@UAEXM@Z");
    todo("implement");
}

void Camera::setWindow(vector4 &) // 0x666E12
{
    mangled_assert("?setWindow@Camera@@UAEXAAVvector4@@@Z");
    todo("implement");
}

vector4 &Camera::getWindow() // 0x666DA4
{
    mangled_assert("?getWindow@Camera@@UAEAAVvector4@@XZ");
    todo("implement");
}

float const Camera::getVerticalFOV() const // 0x666D9D
{
    mangled_assert("?getVerticalFOV@Camera@@UBE?BMXZ");
    todo("implement");
}

float const Camera::getHorizontalFOV() const // 0x666BA2
{
    mangled_assert("?getHorizontalFOV@Camera@@UBE?BMXZ");
    todo("implement");
}

vector3 const &Camera::getPosition() const // 0x666D2C
{
    mangled_assert("?getPosition@Camera@@UBEABVvector3@@XZ");
    todo("implement");
}

void Camera::getUpVector(vector3 &) const // 0x666D68
{
    mangled_assert("?getUpVector@Camera@@UBEXAAVvector3@@@Z");
    todo("implement");
}

void Camera::getRightVector(vector3 &) const // 0x666D33
{
    mangled_assert("?getRightVector@Camera@@UBEXAAVvector3@@@Z");
    todo("implement");
}

void Camera::getNormalVector(vector3 &) const // 0x666CE2
{
    mangled_assert("?getNormalVector@Camera@@UBEXAAVvector3@@@Z");
    todo("implement");
}

void Camera::createFrustum(Frustum &) // 0x666AF9
{
    mangled_assert("?createFrustum@Camera@@QAEXAAVFrustum@@@Z");
    todo("implement");
}

Frustum const &Camera::getFrustum() const // 0x666B9B
{
    mangled_assert("?getFrustum@Camera@@QBEABVFrustum@@XZ");
    todo("implement");
}

void Camera::updateProjectionMatrix() // 0x666E79
{
    mangled_assert("?updateProjectionMatrix@Camera@@IAEXXZ");
    todo("implement");
}

void Camera::update() // 0x666E27
{
    mangled_assert("?update@Camera@@UAEXXZ");
    todo("implement");
}

void Camera::getMouseRay(float const, float const, vector3 &) const // 0x666BC0
{
    mangled_assert("?getMouseRay@Camera@@QBEXMMAAVvector3@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

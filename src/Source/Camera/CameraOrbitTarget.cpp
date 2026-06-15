#if 0
/* ---------- headers */

#include "decomp.h"
#include <Camera\pch.h>
#include <crtdefs.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <exception>
#include <Camera\CameraUtil.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\mathutil.h>
#include <cfloat>
#include <float.h>
#include <crtwrn.h>
#include <Mathlib\vector4.h>
#include <Camera\OrbitParameters.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void matrixRotate(char axis, matrix4 &out, float deg);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const k_maxDeclination; // 0x7B3504
    extern float const k_minDeclination; // 0x7B3508
}

/* ---------- public code */

CameraOrbitTarget::CameraOrbitTarget() // 0x667703
{
    mangled_assert("??0CameraOrbitTarget@@QAE@XZ");
    todo("implement");
}

CameraOrbitTarget::~CameraOrbitTarget() // 0x667738
{
    mangled_assert("??1CameraOrbitTarget@@UAE@XZ");
    todo("implement");
}

void CameraOrbitTarget::setParam(OrbitParameters const &) // 0x667966
{
    mangled_assert("?setParam@CameraOrbitTarget@@QAEXABVOrbitParameters@@@Z");
    todo("implement");
}

void CameraOrbitTarget::setTarget(vector3 const &) // 0x667982
{
    mangled_assert("?setTarget@CameraOrbitTarget@@UAEXABVvector3@@@Z");
    todo("implement");
}

void CameraOrbitTarget::setMinDistance(float const) // 0x66791F
{
    mangled_assert("?setMinDistance@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

void CameraOrbitTarget::setMaxDistance(float const) // 0x66790E
{
    mangled_assert("?setMaxDistance@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

void CameraOrbitTarget::setDistance(float const) // 0x6678D5
{
    mangled_assert("?setDistance@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

void CameraOrbitTarget::setOrientation(vector3 const &) // 0x667941
{
    mangled_assert("?setOrientation@CameraOrbitTarget@@UAEXABVvector3@@@Z");
    todo("implement");
}

void CameraOrbitTarget::setOrbit(float const) // 0x667930
{
    mangled_assert("?setOrbit@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

void CameraOrbitTarget::setDeclination(float const) // 0x6678C4
{
    mangled_assert("?setDeclination@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

void CameraOrbitTarget::setRoll(float const) // 0x667971
{
    mangled_assert("?setRoll@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

OrbitParameters const &CameraOrbitTarget::getParam() const // 0x667793
{
    mangled_assert("?getParam@CameraOrbitTarget@@QBEABVOrbitParameters@@XZ");
    todo("implement");
}

vector3 const &CameraOrbitTarget::getTarget() const // 0x6677A1
{
    mangled_assert("?getTarget@CameraOrbitTarget@@UBEABVvector3@@XZ");
    todo("implement");
}

float const CameraOrbitTarget::getMinDistance() const // 0x66777A
{
    mangled_assert("?getMinDistance@CameraOrbitTarget@@UBE?BMXZ");
    todo("implement");
}

float const CameraOrbitTarget::getMaxDistance() const // 0x667773
{
    mangled_assert("?getMaxDistance@CameraOrbitTarget@@UBE?BMXZ");
    todo("implement");
}

float const CameraOrbitTarget::getDistance() const // 0x66776C
{
    mangled_assert("?getDistance@CameraOrbitTarget@@UBE?BMXZ");
    todo("implement");
}

vector3 const &CameraOrbitTarget::getOrientation() const // 0x667788
{
    mangled_assert("?getOrientation@CameraOrbitTarget@@UBEABVvector3@@XZ");
    todo("implement");
}

float const CameraOrbitTarget::getOrbit() const // 0x667781
{
    mangled_assert("?getOrbit@CameraOrbitTarget@@UBE?BMXZ");
    todo("implement");
}

float const CameraOrbitTarget::getDeclination() const // 0x667765
{
    mangled_assert("?getDeclination@CameraOrbitTarget@@UBE?BMXZ");
    todo("implement");
}

float const CameraOrbitTarget::getRoll() const // 0x66779A
{
    mangled_assert("?getRoll@CameraOrbitTarget@@UBE?BMXZ");
    todo("implement");
}

void CameraOrbitTarget::incDistance(float const) // 0x6677DE
{
    mangled_assert("?incDistance@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

void CameraOrbitTarget::incOrbit(float const) // 0x667829
{
    mangled_assert("?incOrbit@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

void CameraOrbitTarget::incDeclination(float const) // 0x6677A8
{
    mangled_assert("?incDeclination@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

void CameraOrbitTarget::incRoll(float const) // 0x667842
{
    mangled_assert("?incRoll@CameraOrbitTarget@@UAEXM@Z");
    todo("implement");
}

vector3 CameraOrbitTarget::updateGetTarget() // 0x667B8C
{
    mangled_assert("?updateGetTarget@CameraOrbitTarget@@MAE?AVvector3@@XZ");
    todo("implement");
}

void CameraOrbitTarget::update() // 0x66799A
{
    mangled_assert("?update@CameraOrbitTarget@@UAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static void matrixRotate(char axis, matrix4 &out, float deg) // 0x66785B
{
    mangled_assert("matrixRotate");
    todo("implement");
}
#endif

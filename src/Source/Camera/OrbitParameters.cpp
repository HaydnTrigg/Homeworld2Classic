#if 0
/* ---------- headers */

#include "decomp.h"
#include <Camera\pch.h>
#include <crtdefs.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <exception>
#include <math.h>
#include <Mathlib\mathutil.h>
#include <cfloat>
#include <float.h>
#include <crtwrn.h>
#include <Camera\OrbitParameters.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_6675D3(OrbitParameters *const, vector3 const &, vector3 const &);
bool OrbitParameters::setDistanceAngleDeclination(vector3 const &, vector3 const &) // 0x6675D3
{
    mangled_assert("?setDistanceAngleDeclination@OrbitParameters@@QAE_NABVvector3@@0@Z");
    todo("implement");
    bool __result = _sub_6675D3(this, arg, arg);
    return __result;
}

_extern vector3 _sub_6674F7(OrbitParameters const *const);
vector3 OrbitParameters::getEye() const // 0x6674F7
{
    mangled_assert("?getEye@OrbitParameters@@QBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_6674F7(this);
    return __result;
}

/* ---------- private code */
#endif

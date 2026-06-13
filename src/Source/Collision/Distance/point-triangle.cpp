#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\pch.h>
#include <math.h>
#include <Collision\Primitives\segment.h>
#include <Collision\Primitives\triangle.h>
#include <Mathlib\matrix3.h>
#include <Collision\distance.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern float Collision::DistanceSqr(vector3 const &rkPoint, Collision::Triangle const &rkTri, float *pfSParam, float *pfTParam);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern float _sub_66497F(vector3 const &, Collision::Triangle const &, float *, float *);
float Collision::DistanceSqr(vector3 const &rkPoint, Collision::Triangle const &rkTri, float *pfSParam, float *pfTParam) // 0x66497F
{
    mangled_assert("?DistanceSqr@Collision@@YGMABVvector3@@ABVTriangle@1@PAM2@Z");
    todo("implement");
    float __result = _sub_66497F(rkPoint, rkTri, pfSParam, pfTParam);
    return __result;
}

/* ---------- private code */
#endif

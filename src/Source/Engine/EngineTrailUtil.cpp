#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <EngineTrailUtil.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern float _sub_44A4CB(vector3 const &, vector3 const &, vector3 const &, vector3 *);
float EngineTrailUtil::SqrDistance(vector3 const &rkPoint, vector3 const &boxMin, vector3 const &boxMax, vector3 *pkClosest) // 0x44A4CB
{
    mangled_assert("?SqrDistance@EngineTrailUtil@@SGMABVvector3@@00PAV2@@Z");
    todo("implement");
    float __result = _sub_44A4CB(rkPoint, boxMin, boxMax, pkClosest);
    return __result;
}

_extern float _sub_44A3C2(float, float, float, float, float, matrix4 const &);
float EngineTrailUtil::SimpleScreenSpaceSize(float distance, float width, float nearPlane, float fovy, float aspect, matrix4 const &projectionMatrix) // 0x44A3C2
{
    mangled_assert("?SimpleScreenSpaceSize@EngineTrailUtil@@SGMMMMMMABVmatrix4@@@Z");
    todo("implement");
    float __result = _sub_44A3C2(distance, width, nearPlane, fovy, aspect, projectionMatrix);
    return __result;
}

/* ---------- private code */
#endif

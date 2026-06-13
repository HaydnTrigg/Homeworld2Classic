#if 0
#ifndef __ENGINETRAILUTIL_H__
#define __ENGINETRAILUTIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EngineTrailUtil
{
public:
    static float SqrDistance(vector3 const &rkPoint, vector3 const &boxMin, vector3 const &boxMax, vector3 *pkClosest);
    static float SimpleScreenSpaceSize(float distance, float width, float nearPlane, float fovy, float aspect, matrix4 const &projectionMatrix);
};
static_assert(sizeof(EngineTrailUtil) == 1, "Invalid EngineTrailUtil size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ENGINETRAILUTIL_H__
#endif

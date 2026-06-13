#if 0
#ifndef __FRUSTUM_H__
#define __FRUSTUM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Frustum
{
public:
    enum Intersection
    {
        INT_Outside = 0,
        INT_Inside,
        INT_Intersecting,
    };
    Frustum();
    void setPerspective(float const, float const, float const, float const);
    bool intersectLineSeg(vector3 const &, vector3 const &, vector3 &) const;
    bool insideFrustum(vector3 const &) const;
    bool isSphereInside(vector3 const &, float const) const;
    Frustum::Intersection AABBIntersection(vector3 const &, vector3 const &) const;
    void transform(vector3 const &, vector3 const &, vector3 const &, vector3 const &);
    void calculateCorners(vector3 *, vector3 *) const;
    enum ClipPlanes
    {
        TOP_PLANE = 0,
        LEFT_PLANE,
        BOTTOM_PLANE,
        RIGHT_PLANE,
        NEAR_PLANE,
        NUM_PLANES,
    };
private:
    vector3 m_origin; // 0x0
    Plane3 m_planes[5]; // 0xC
};
static_assert(sizeof(Frustum) == 92, "Invalid Frustum size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FRUSTUM_H__
#endif

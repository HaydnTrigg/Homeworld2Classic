#if 0
/* ---------- headers */

#include "decomp.h"
#include <Camera\pch.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <exception>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector4.h>
#include <math.h>
#include <Camera\Plane3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

Plane3 Plane3::operator*(matrix3 const &) const // 0x666ED4
{
    mangled_assert("??DPlane3@@QBE?AV0@ABVmatrix3@@@Z");
    todo("implement");
}

Plane3 &Plane3::operator*=(matrix3 const &) // 0x66712B
{
    mangled_assert("??XPlane3@@QAEAAV0@ABVmatrix3@@@Z");
    todo("implement");
}

Plane3 Plane3::operator*(matrix4 const &) const // 0x666F73
{
    mangled_assert("??DPlane3@@QBE?AV0@ABVmatrix4@@@Z");
    todo("implement");
}

Plane3 &Plane3::operator*=(matrix4 const &) // 0x6671E3
{
    mangled_assert("??XPlane3@@QAEAAV0@ABVmatrix4@@@Z");
    todo("implement");
}

bool Plane3::intersectRay(vector3 const &, vector3 const &, vector3 &) const // 0x66738A
{
    mangled_assert("?intersectRay@Plane3@@QBE_NABVvector3@@0AAV2@@Z");
    todo("implement");
}

void Plane3::snapPointToPlane(vector3 &) const // 0x66748B
{
    mangled_assert("?snapPointToPlane@Plane3@@QBEXAAVvector3@@@Z");
    todo("implement");
}

bool Plane3::intersectLineSeg(vector3 const &, vector3 const &, vector3 &) const // 0x667217
{
    mangled_assert("?intersectLineSeg@Plane3@@QBE_NABVvector3@@0AAV2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

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

_extern Plane3 _sub_666ED4(Plane3 const *const, matrix3 const &);
Plane3 Plane3::operator*(matrix3 const &) const // 0x666ED4
{
    mangled_assert("??DPlane3@@QBE?AV0@ABVmatrix3@@@Z");
    todo("implement");
    Plane3 __result = _sub_666ED4(this, arg);
    return __result;
}

_extern Plane3 &_sub_66712B(Plane3 *const, matrix3 const &);
Plane3 &Plane3::operator*=(matrix3 const &) // 0x66712B
{
    mangled_assert("??XPlane3@@QAEAAV0@ABVmatrix3@@@Z");
    todo("implement");
    Plane3 & __result = _sub_66712B(this, arg);
    return __result;
}

_extern Plane3 _sub_666F73(Plane3 const *const, matrix4 const &);
Plane3 Plane3::operator*(matrix4 const &) const // 0x666F73
{
    mangled_assert("??DPlane3@@QBE?AV0@ABVmatrix4@@@Z");
    todo("implement");
    Plane3 __result = _sub_666F73(this, arg);
    return __result;
}

_extern Plane3 &_sub_6671E3(Plane3 *const, matrix4 const &);
Plane3 &Plane3::operator*=(matrix4 const &) // 0x6671E3
{
    mangled_assert("??XPlane3@@QAEAAV0@ABVmatrix4@@@Z");
    todo("implement");
    Plane3 & __result = _sub_6671E3(this, arg);
    return __result;
}

_extern bool _sub_66738A(Plane3 const *const, vector3 const &, vector3 const &, vector3 &);
bool Plane3::intersectRay(vector3 const &, vector3 const &, vector3 &) const // 0x66738A
{
    mangled_assert("?intersectRay@Plane3@@QBE_NABVvector3@@0AAV2@@Z");
    todo("implement");
    bool __result = _sub_66738A(this, arg, arg, arg);
    return __result;
}

_extern void _sub_66748B(Plane3 const *const, vector3 &);
void Plane3::snapPointToPlane(vector3 &) const // 0x66748B
{
    mangled_assert("?snapPointToPlane@Plane3@@QBEXAAVvector3@@@Z");
    todo("implement");
    _sub_66748B(this, arg);
}

_extern bool _sub_667217(Plane3 const *const, vector3 const &, vector3 const &, vector3 &);
bool Plane3::intersectLineSeg(vector3 const &, vector3 const &, vector3 &) const // 0x667217
{
    mangled_assert("?intersectLineSeg@Plane3@@QBE_NABVvector3@@0AAV2@@Z");
    todo("implement");
    bool __result = _sub_667217(this, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

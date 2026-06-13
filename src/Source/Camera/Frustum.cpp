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
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static bool intersection3Planes(Plane3 const &p1, Plane3 const &p2, Plane3 const &p3, vector3 &result);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6661D7(Frustum *const);
Frustum::Frustum() // 0x6661D7
{
    mangled_assert("??0Frustum@@QAE@XZ");
    todo("implement");
    _sub_6661D7(this);
}

_extern void _sub_6667A5(Frustum *const, float const, float const, float const, float const);
void Frustum::setPerspective(float const, float const, float const, float const) // 0x6667A5
{
    mangled_assert("?setPerspective@Frustum@@QAEXMMMM@Z");
    todo("implement");
    _sub_6667A5(this, arg, arg, arg, arg);
}

_extern void _sub_6668FE(Frustum *const, vector3 const &, vector3 const &, vector3 const &, vector3 const &);
void Frustum::transform(vector3 const &, vector3 const &, vector3 const &, vector3 const &) // 0x6668FE
{
    mangled_assert("?transform@Frustum@@QAEXABVvector3@@000@Z");
    todo("implement");
    _sub_6668FE(this, arg, arg, arg, arg);
}

_extern bool _sub_6664D8(Frustum const *const, vector3 const &, vector3 const &, vector3 &);
bool Frustum::intersectLineSeg(vector3 const &, vector3 const &, vector3 &) const // 0x6664D8
{
    mangled_assert("?intersectLineSeg@Frustum@@QBE_NABVvector3@@0AAV2@@Z");
    todo("implement");
    bool __result = _sub_6664D8(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_66648B(Frustum const *const, vector3 const &);
bool Frustum::insideFrustum(vector3 const &) const // 0x66648B
{
    mangled_assert("?insideFrustum@Frustum@@QBE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_66648B(this, arg);
    return __result;
}

_extern bool _sub_666703(Frustum const *const, vector3 const &, float const);
bool Frustum::isSphereInside(vector3 const &, float const) const // 0x666703
{
    mangled_assert("?isSphereInside@Frustum@@QBE_NABVvector3@@M@Z");
    todo("implement");
    bool __result = _sub_666703(this, arg, arg);
    return __result;
}

_extern Frustum::Intersection _sub_6661DD(Frustum const *const, vector3 const &, vector3 const &);
Frustum::Intersection Frustum::AABBIntersection(vector3 const &, vector3 const &) const // 0x6661DD
{
    mangled_assert("?AABBIntersection@Frustum@@QBE?AW4Intersection@1@ABVvector3@@0@Z");
    todo("implement");
    Frustum::Intersection __result = _sub_6661DD(this, arg, arg);
    return __result;
}

_extern void _sub_6662E0(Frustum const *const, vector3 *, vector3 *);
void Frustum::calculateCorners(vector3 *, vector3 *) const // 0x6662E0
{
    mangled_assert("?calculateCorners@Frustum@@QBEXPAVvector3@@0@Z");
    todo("implement");
    _sub_6662E0(this, arg, arg);
}

/* ---------- private code */

_extern bool _sub_66654E(Plane3 const &, Plane3 const &, Plane3 const &, vector3 &);
_static bool intersection3Planes(Plane3 const &p1, Plane3 const &p2, Plane3 const &p3, vector3 &result) // 0x66654E
{
    mangled_assert("intersection3Planes");
    todo("implement");
    bool __result = _sub_66654E(p1, p2, p3, result);
    return __result;
}
#endif

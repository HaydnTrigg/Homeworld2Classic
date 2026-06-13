#if 0
#ifndef __SPHERE_H__
#define __SPHERE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::Sphere
{
public:
    Sphere(vector3 const &, float);
    _inline vector3 const &GetCenter() const;
    _inline float GetRadius() const;
    _inline void SetCenter(vector3 const &);
    _inline void SetRadius(float);
    void ComputeAABB(Collision::AABB &) const;
private:
    vector3 m_center; // 0x0
    float m_radius; // 0xC
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Collision::Sphere) == 16, "Invalid Collision::Sphere size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern vector3 const &_sub_477C05(Collision::Sphere const *const);
_inline vector3 const &Collision::Sphere::GetCenter() const // 0x477C05
{
    mangled_assert("?GetCenter@Sphere@Collision@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_477C05(this);
    return __result;
}

_extern float _sub_458530(Collision::Sphere const *const);
_inline float Collision::Sphere::GetRadius() const // 0x458530
{
    mangled_assert("?GetRadius@Sphere@Collision@@QBEMXZ");
    todo("implement");
    float __result = _sub_458530(this);
    return __result;
}

_extern void _sub_477C9F(Collision::Sphere *const, vector3 const &);
_inline void Collision::Sphere::SetCenter(vector3 const &) // 0x477C9F
{
    mangled_assert("?SetCenter@Sphere@Collision@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_477C9F(this, arg);
}

_extern void _sub_477CE4(Collision::Sphere *const, float);
_inline void Collision::Sphere::SetRadius(float) // 0x477CE4
{
    mangled_assert("?SetRadius@Sphere@Collision@@QAEXM@Z");
    todo("implement");
    _sub_477CE4(this, arg);
}

/* ---------- private code */

#endif // __SPHERE_H__
#endif

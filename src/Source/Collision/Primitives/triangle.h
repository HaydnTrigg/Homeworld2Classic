#if 0
#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::Triangle
{
public:
    Triangle(vector3 const &, vector3 const &, vector3 const &);
    _inline vector3 const &GetOrigin() const;
    _inline vector3 const &GetEdge0() const;
    _inline vector3 const &GetEdge1() const;
    void ComputeAABB(Collision::AABB &) const;
private:
    vector3 m_origin; // 0x0
    vector3 m_edge0; // 0xC
    vector3 m_edge1; // 0x18
};
static_assert(sizeof(Collision::Triangle) == 36, "Invalid Collision::Triangle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern vector3 const &_sub_6648A6(Collision::Triangle const *const);
_inline vector3 const &Collision::Triangle::GetOrigin() const // 0x6648A6
{
    mangled_assert("?GetOrigin@Triangle@Collision@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6648A6(this);
    return __result;
}

_extern vector3 const &_sub_6622D4(Collision::Triangle const *const);
_inline vector3 const &Collision::Triangle::GetEdge0() const // 0x6622D4
{
    mangled_assert("?GetEdge0@Triangle@Collision@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6622D4(this);
    return __result;
}

_extern vector3 const &_sub_6622D8(Collision::Triangle const *const);
_inline vector3 const &Collision::Triangle::GetEdge1() const // 0x6622D8
{
    mangled_assert("?GetEdge1@Triangle@Collision@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6622D8(this);
    return __result;
}

/* ---------- private code */

#endif // __TRIANGLE_H__
#endif

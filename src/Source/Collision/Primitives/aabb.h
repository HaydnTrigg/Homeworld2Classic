#if 0
#ifndef __AABB_H__
#define __AABB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::AABB
{
private:
    AABB(Collision::AABB::EnumEmpty);
public:
    AABB(vector3 const &, vector3 const &);
    AABB();
    _inline vector3 const &GetMin() const;
    _inline vector3 const &GetMax() const;
    void Add(Collision::AABB const &);
    _inline void Set(vector3 const &, vector3 const &);
    static Collision::AABB const EMPTY;
    enum EnumEmpty
    {
        TagEmpty = 0,
    };
private:
    vector3 m_min; // 0x0
    vector3 m_max; // 0xC
};
static_assert(sizeof(Collision::AABB) == 24, "Invalid Collision::AABB size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline vector3 const &Collision::AABB::GetMin() const // 0x477C17
{
    mangled_assert("?GetMin@AABB@Collision@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &Collision::AABB::GetMax() const // 0x477C13
{
    mangled_assert("?GetMax@AABB@Collision@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline void Collision::AABB::Set(vector3 const &, vector3 const &) // 0x6609D3
{
    mangled_assert("?Set@AABB@Collision@@QAEXABVvector3@@0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __AABB_H__
#endif

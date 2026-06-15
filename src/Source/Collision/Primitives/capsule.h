#if 0
#ifndef __CAPSULE_H__
#define __CAPSULE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::Capsule
{
public:
    Capsule(Collision::Sphere const &, vector3 const &);
    Capsule(Collision::Segment const &, float);
    vector3 const &GetOrigin() const;
    vector3 const &GetDirection() const;
    _inline float GetRadius() const;
    _inline Collision::Segment const &GetSegment() const;
    void SetOrigin(vector3 const &);
    void SetDirection(vector3 const &);
    _inline void SetRadius(float);
    _inline void SetSegment(Collision::Segment const &);
    void ComputeAABB(Collision::AABB &) const;
private:
    Collision::Segment m_segment; // 0x0
    float m_radius; // 0x18
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Collision::Capsule) == 28, "Invalid Collision::Capsule size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float Collision::Capsule::GetRadius() const // 0x66356E
{
    mangled_assert("?GetRadius@Capsule@Collision@@QBEMXZ");
    todo("implement");
}

_inline Collision::Segment const &Collision::Capsule::GetSegment() const // 0x663572
{
    mangled_assert("?GetSegment@Capsule@Collision@@QBEABVSegment@2@XZ");
    todo("implement");
}

_inline void Collision::Capsule::SetRadius(float) // 0x477CD6
{
    mangled_assert("?SetRadius@Capsule@Collision@@QAEXM@Z");
    todo("implement");
}

_inline void Collision::Capsule::SetSegment(Collision::Segment const &) // 0x477CF2
{
    mangled_assert("?SetSegment@Capsule@Collision@@QAEXABVSegment@2@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __CAPSULE_H__
#endif

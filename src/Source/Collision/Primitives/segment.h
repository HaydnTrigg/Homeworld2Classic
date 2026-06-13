#if 0
#ifndef __SEGMENT_H__
#define __SEGMENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::Segment
{
public:
    Segment(vector3 const &, vector3 const &);
    _inline vector3 const &GetOrigin() const;
    _inline vector3 const &GetDirection() const;
    void SetOrigin(vector3 const &);
    void SetDirection(vector3 const &);
    void ComputeAABB(Collision::AABB &) const;
private:
    vector3 m_origin; // 0x0
    vector3 m_direction; // 0xC
};
static_assert(sizeof(Collision::Segment) == 24, "Invalid Collision::Segment size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern vector3 const &_sub_4A542B(Collision::Segment const *const);
_inline vector3 const &Collision::Segment::GetOrigin() const // 0x4A542B
{
    mangled_assert("?GetOrigin@Segment@Collision@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4A542B(this);
    return __result;
}

_extern vector3 const &_sub_4A5427(Collision::Segment const *const);
_inline vector3 const &Collision::Segment::GetDirection() const // 0x4A5427
{
    mangled_assert("?GetDirection@Segment@Collision@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4A5427(this);
    return __result;
}

/* ---------- private code */

#endif // __SEGMENT_H__
#endif

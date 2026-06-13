#if 0
#ifndef __OBB_H__
#define __OBB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::OBB
{
public:
    OBB(vector3 const &, vector3 const &);
    OBB();
    _inline vector3 const &GetCenter() const;
    _inline vector3 const &GetExtents() const;
    _inline matrix3 const &GetOrientation() const;
    void Set(vector3 const &, vector3 const &);
    _inline void SetCenter(vector3 const &);
    _inline void SetExtents(vector3 const &);
    _inline void SetOrientation(matrix3 const &);
    void ComputeAABB(Collision::AABB &) const;
    void ComputeVertices(vector3 *) const;
private:
    vector3 m_center; // 0x0
    matrix3 m_orientation; // 0xC
    vector3 m_extents; // 0x30
};
static_assert(sizeof(Collision::OBB) == 60, "Invalid Collision::OBB size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern vector3 const &_sub_477C02(Collision::OBB const *const);
_inline vector3 const &Collision::OBB::GetCenter() const // 0x477C02
{
    mangled_assert("?GetCenter@OBB@Collision@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_477C02(this);
    return __result;
}

_extern vector3 const &_sub_477C0F(Collision::OBB const *const);
_inline vector3 const &Collision::OBB::GetExtents() const // 0x477C0F
{
    mangled_assert("?GetExtents@OBB@Collision@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_477C0F(this);
    return __result;
}

_extern matrix3 const &_sub_4BE41A(Collision::OBB const *const);
_inline matrix3 const &Collision::OBB::GetOrientation() const // 0x4BE41A
{
    mangled_assert("?GetOrientation@OBB@Collision@@QBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_4BE41A(this);
    return __result;
}

_extern void _sub_477C8F(Collision::OBB *const, vector3 const &);
_inline void Collision::OBB::SetCenter(vector3 const &) // 0x477C8F
{
    mangled_assert("?SetCenter@OBB@Collision@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_477C8F(this, arg);
}

_extern void _sub_477CC3(Collision::OBB *const, matrix3 const &);
_inline void Collision::OBB::SetOrientation(matrix3 const &) // 0x477CC3
{
    mangled_assert("?SetOrientation@OBB@Collision@@QAEXABVmatrix3@@@Z");
    todo("implement");
    _sub_477CC3(this, arg);
}

_extern void _sub_49ECA0(Collision::OBB *const, vector3 const &);
_inline void Collision::OBB::SetExtents(vector3 const &) // 0x49ECA0
{
    mangled_assert("?SetExtents@OBB@Collision@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_49ECA0(this, arg);
}

/* ---------- private code */

#endif // __OBB_H__
#endif

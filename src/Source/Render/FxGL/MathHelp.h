#if 0
#ifndef __MATHHELP_H__
#define __MATHHELP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline void SetForwardAxis(vector3 const &forward, matrix4 &transform);
extern _inline void SetUpAxis(vector3 const &up, matrix4 &transform);
extern _inline void SetRightAxis(vector3 const &right, matrix4 &transform);
extern _inline void Matrix4RotateForward(matrix4 &m, float const rads);
extern _inline vector3 GetForwardAxis(matrix4 const &m);
extern _inline vector3 GetUpAxis(matrix4 const &m);
extern _inline vector3 GetRightAxis(matrix4 const &m);
extern _inline void MakeAlignForwardAxis(matrix4 &m, vector3 const &fAxis, vector3 const &position);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6E733B(vector3 const &, matrix4 &);
_inline void SetForwardAxis(vector3 const &forward, matrix4 &transform) // 0x6E733B
{
    mangled_assert("?SetForwardAxis@@YGXABVvector3@@AAVmatrix4@@@Z");
    todo("implement");
    _sub_6E733B(forward, transform);
}

_extern void _sub_6E7B6E(vector3 const &, matrix4 &);
_inline void SetUpAxis(vector3 const &up, matrix4 &transform) // 0x6E7B6E
{
    mangled_assert("?SetUpAxis@@YGXABVvector3@@AAVmatrix4@@@Z");
    todo("implement");
    _sub_6E7B6E(up, transform);
}

_extern void _sub_6E7B24(vector3 const &, matrix4 &);
_inline void SetRightAxis(vector3 const &right, matrix4 &transform) // 0x6E7B24
{
    mangled_assert("?SetRightAxis@@YGXABVvector3@@AAVmatrix4@@@Z");
    todo("implement");
    _sub_6E7B24(right, transform);
}

_extern void _sub_6E644A(matrix4 &, float const);
_inline void Matrix4RotateForward(matrix4 &m, float const rads) // 0x6E644A
{
    mangled_assert("?Matrix4RotateForward@@YGXAAVmatrix4@@M@Z");
    todo("implement");
    _sub_6E644A(m, rads);
}

_extern vector3 _sub_6E969A(matrix4 const &);
_inline vector3 GetForwardAxis(matrix4 const &m) // 0x6E969A
{
    mangled_assert("?GetForwardAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
    vector3 __result = _sub_6E969A(m);
    return __result;
}

_extern vector3 _sub_6E6314(matrix4 const &);
_inline vector3 GetUpAxis(matrix4 const &m) // 0x6E6314
{
    mangled_assert("?GetUpAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
    vector3 __result = _sub_6E6314(m);
    return __result;
}

_extern vector3 _sub_6E62F0(matrix4 const &);
_inline vector3 GetRightAxis(matrix4 const &m) // 0x6E62F0
{
    mangled_assert("?GetRightAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
    vector3 __result = _sub_6E62F0(m);
    return __result;
}

_extern void _sub_6E1507(matrix4 &, vector3 const &, vector3 const &);
_inline void MakeAlignForwardAxis(matrix4 &m, vector3 const &fAxis, vector3 const &position) // 0x6E1507
{
    mangled_assert("?MakeAlignForwardAxis@@YGXAAVmatrix4@@ABVvector3@@1@Z");
    todo("implement");
    _sub_6E1507(m, fAxis, position);
}

/* ---------- private code */

#endif // __MATHHELP_H__
#endif

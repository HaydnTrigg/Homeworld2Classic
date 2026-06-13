#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\FxGL\pch.h>
#include <exception>
#include <Mathlib\matrix4.h>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\fastmath.h>
#include <Render\FxGL\MathHelp.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void TranslateSelf(matrix4 &m, vector3 const &offset);
extern vector3 GetTranslation(matrix4 const &m);
extern void SetTranslation(matrix4 &m, vector3 const &offset);
extern void AddTranslation(matrix4 &m, vector3 const &offset);
extern void SetXAxis(matrix3 &m, vector3 const &xAxis);
extern void SetYAxis(matrix3 &m, vector3 const &yAxis);
extern void SetZAxis(matrix3 &m, vector3 const &zAxis);
extern void SetXAxis(matrix4 &m, vector3 const &xAxis);
extern void SetYAxis(matrix4 &m, vector3 const &yAxis);
extern void SetZAxis(matrix4 &m, vector3 const &zAxis);
extern vector3 GetXAxis(matrix3 const &m);
extern vector3 GetYAxis(matrix3 const &m);
extern vector3 GetZAxis(matrix3 const &m);
extern vector3 GetXAxis(matrix4 const &m);
extern vector3 GetYAxis(matrix4 const &m);
extern vector3 GetZAxis(matrix4 const &m);
extern void MakeAlignYAxis(matrix3 &m, vector3 const &yAxis);
extern void MakeAlignYAxis(matrix4 &m, vector3 const &yAxis, vector3 const &translation);
extern void MakeAlignZAxis(matrix3 &m, vector3 const &zAxis);
extern void MakeAlignZAxis(matrix4 &m, vector3 const &zAxis, vector3 const &translation);
extern void MakeRotateX(matrix4 &m, float const rads);
extern void MakeRotateY(matrix4 &m, float const rads);
extern void MakeRotateZ(matrix4 &m, float const rads);
extern void MakeRotateXYZ(matrix4 &m, vector3 const &rads);
extern void MakeTranslate(matrix4 &m, vector3 const &offset);
extern void Matrix4RotateX(matrix4 &m, float const rads);
extern void Matrix4RotateY(matrix4 &m, float const rads);
extern void Matrix4RotateZ(matrix4 &m, float const rads);
extern void Matrix4RotateXYZ(matrix4 &m, vector3 const &rads);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_6F8682(matrix4 &, vector3 const &);
void TranslateSelf(matrix4 &m, vector3 const &offset) // 0x6F8682
{
    mangled_assert("?TranslateSelf@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F8682(m, offset);
}

_extern vector3 _sub_6F7708(matrix4 const &);
vector3 GetTranslation(matrix4 const &m) // 0x6F7708
{
    mangled_assert("?GetTranslation@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
    vector3 __result = _sub_6F7708(m);
    return __result;
}

_extern void _sub_6F8562(matrix4 &, vector3 const &);
void SetTranslation(matrix4 &m, vector3 const &offset) // 0x6F8562
{
    mangled_assert("?SetTranslation@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F8562(m, offset);
}

_extern void _sub_6F76D1(matrix4 &, vector3 const &);
void AddTranslation(matrix4 &m, vector3 const &offset) // 0x6F76D1
{
    mangled_assert("?AddTranslation@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F76D1(m, offset);
}

_extern void _sub_6F8574(matrix3 &, vector3 const &);
void SetXAxis(matrix3 &m, vector3 const &xAxis) // 0x6F8574
{
    mangled_assert("?SetXAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F8574(m, xAxis);
}

_extern void _sub_6F85CE(matrix3 &, vector3 const &);
void SetYAxis(matrix3 &m, vector3 const &yAxis) // 0x6F85CE
{
    mangled_assert("?SetYAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F85CE(m, yAxis);
}

_extern void _sub_6F8628(matrix3 &, vector3 const &);
void SetZAxis(matrix3 &m, vector3 const &zAxis) // 0x6F8628
{
    mangled_assert("?SetZAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F8628(m, zAxis);
}

_extern void _sub_6F85A1(matrix4 &, vector3 const &);
void SetXAxis(matrix4 &m, vector3 const &xAxis) // 0x6F85A1
{
    mangled_assert("?SetXAxis@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F85A1(m, xAxis);
}

_extern void _sub_6F85FB(matrix4 &, vector3 const &);
void SetYAxis(matrix4 &m, vector3 const &yAxis) // 0x6F85FB
{
    mangled_assert("?SetYAxis@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F85FB(m, yAxis);
}

_extern void _sub_6F8655(matrix4 &, vector3 const &);
void SetZAxis(matrix4 &m, vector3 const &zAxis) // 0x6F8655
{
    mangled_assert("?SetZAxis@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F8655(m, zAxis);
}

_extern vector3 _sub_6F7724(matrix3 const &);
vector3 GetXAxis(matrix3 const &m) // 0x6F7724
{
    mangled_assert("?GetXAxis@@YG?AVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    vector3 __result = _sub_6F7724(m);
    return __result;
}

_extern vector3 _sub_6F775A(matrix3 const &);
vector3 GetYAxis(matrix3 const &m) // 0x6F775A
{
    mangled_assert("?GetYAxis@@YG?AVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    vector3 __result = _sub_6F775A(m);
    return __result;
}

_extern vector3 _sub_6F7792(matrix3 const &);
vector3 GetZAxis(matrix3 const &m) // 0x6F7792
{
    mangled_assert("?GetZAxis@@YG?AVvector3@@ABVmatrix3@@@Z");
    todo("implement");
    vector3 __result = _sub_6F7792(m);
    return __result;
}

_extern vector3 _sub_6F773F(matrix4 const &);
vector3 GetXAxis(matrix4 const &m) // 0x6F773F
{
    mangled_assert("?GetXAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
    vector3 __result = _sub_6F773F(m);
    return __result;
}

_extern vector3 _sub_6F7776(matrix4 const &);
vector3 GetYAxis(matrix4 const &m) // 0x6F7776
{
    mangled_assert("?GetYAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
    vector3 __result = _sub_6F7776(m);
    return __result;
}

_extern vector3 _sub_6F77AE(matrix4 const &);
vector3 GetZAxis(matrix4 const &m) // 0x6F77AE
{
    mangled_assert("?GetZAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
    vector3 __result = _sub_6F77AE(m);
    return __result;
}

_extern void _sub_6F77CA(matrix3 &, vector3 const &);
void MakeAlignYAxis(matrix3 &m, vector3 const &yAxis) // 0x6F77CA
{
    mangled_assert("?MakeAlignYAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F77CA(m, yAxis);
}

_extern void _sub_6F7B1A(matrix4 &, vector3 const &, vector3 const &);
void MakeAlignYAxis(matrix4 &m, vector3 const &yAxis, vector3 const &translation) // 0x6F7B1A
{
    mangled_assert("?MakeAlignYAxis@@YGXAAVmatrix4@@ABVvector3@@1@Z");
    todo("implement");
    _sub_6F7B1A(m, yAxis, translation);
}

_extern void _sub_6F7E7F(matrix3 &, vector3 const &);
void MakeAlignZAxis(matrix3 &m, vector3 const &zAxis) // 0x6F7E7F
{
    mangled_assert("?MakeAlignZAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F7E7F(m, zAxis);
}

_extern void _sub_6F803C(matrix4 &, vector3 const &, vector3 const &);
void MakeAlignZAxis(matrix4 &m, vector3 const &zAxis, vector3 const &translation) // 0x6F803C
{
    mangled_assert("?MakeAlignZAxis@@YGXAAVmatrix4@@ABVvector3@@1@Z");
    todo("implement");
    _sub_6F803C(m, zAxis, translation);
}

_extern void _sub_6F839E(matrix4 &, float const);
void MakeRotateX(matrix4 &m, float const rads) // 0x6F839E
{
    mangled_assert("?MakeRotateX@@YGXAAVmatrix4@@M@Z");
    todo("implement");
    _sub_6F839E(m, rads);
}

_extern void _sub_6F8436(matrix4 &, float const);
void MakeRotateY(matrix4 &m, float const rads) // 0x6F8436
{
    mangled_assert("?MakeRotateY@@YGXAAVmatrix4@@M@Z");
    todo("implement");
    _sub_6F8436(m, rads);
}

_extern void _sub_6F8475(matrix4 &, float const);
void MakeRotateZ(matrix4 &m, float const rads) // 0x6F8475
{
    mangled_assert("?MakeRotateZ@@YGXAAVmatrix4@@M@Z");
    todo("implement");
    _sub_6F8475(m, rads);
}

_extern void _sub_6F83DD(matrix4 &, vector3 const &);
void MakeRotateXYZ(matrix4 &m, vector3 const &rads) // 0x6F83DD
{
    mangled_assert("?MakeRotateXYZ@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F83DD(m, rads);
}

_extern void _sub_6F84B4(matrix4 &, vector3 const &);
void MakeTranslate(matrix4 &m, vector3 const &offset) // 0x6F84B4
{
    mangled_assert("?MakeTranslate@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F84B4(m, offset);
}

_extern void _sub_6F84C2(matrix4 &, float const);
void Matrix4RotateX(matrix4 &m, float const rads) // 0x6F84C2
{
    mangled_assert("?Matrix4RotateX@@YGXAAVmatrix4@@M@Z");
    todo("implement");
    _sub_6F84C2(m, rads);
}

_extern void _sub_6F850E(matrix4 &, float const);
void Matrix4RotateY(matrix4 &m, float const rads) // 0x6F850E
{
    mangled_assert("?Matrix4RotateY@@YGXAAVmatrix4@@M@Z");
    todo("implement");
    _sub_6F850E(m, rads);
}

_extern void _sub_6F8538(matrix4 &, float const);
void Matrix4RotateZ(matrix4 &m, float const rads) // 0x6F8538
{
    mangled_assert("?Matrix4RotateZ@@YGXAAVmatrix4@@M@Z");
    todo("implement");
    _sub_6F8538(m, rads);
}

_extern void _sub_6F84EC(matrix4 &, vector3 const &);
void Matrix4RotateXYZ(matrix4 &m, vector3 const &rads) // 0x6F84EC
{
    mangled_assert("?Matrix4RotateXYZ@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
    _sub_6F84EC(m, rads);
}

/* ---------- private code */
#endif

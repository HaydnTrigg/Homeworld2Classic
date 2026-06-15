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

void TranslateSelf(matrix4 &m, vector3 const &offset) // 0x6F8682
{
    mangled_assert("?TranslateSelf@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

vector3 GetTranslation(matrix4 const &m) // 0x6F7708
{
    mangled_assert("?GetTranslation@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
}

void SetTranslation(matrix4 &m, vector3 const &offset) // 0x6F8562
{
    mangled_assert("?SetTranslation@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

void AddTranslation(matrix4 &m, vector3 const &offset) // 0x6F76D1
{
    mangled_assert("?AddTranslation@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

void SetXAxis(matrix3 &m, vector3 const &xAxis) // 0x6F8574
{
    mangled_assert("?SetXAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

void SetYAxis(matrix3 &m, vector3 const &yAxis) // 0x6F85CE
{
    mangled_assert("?SetYAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

void SetZAxis(matrix3 &m, vector3 const &zAxis) // 0x6F8628
{
    mangled_assert("?SetZAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

void SetXAxis(matrix4 &m, vector3 const &xAxis) // 0x6F85A1
{
    mangled_assert("?SetXAxis@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

void SetYAxis(matrix4 &m, vector3 const &yAxis) // 0x6F85FB
{
    mangled_assert("?SetYAxis@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

void SetZAxis(matrix4 &m, vector3 const &zAxis) // 0x6F8655
{
    mangled_assert("?SetZAxis@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

vector3 GetXAxis(matrix3 const &m) // 0x6F7724
{
    mangled_assert("?GetXAxis@@YG?AVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

vector3 GetYAxis(matrix3 const &m) // 0x6F775A
{
    mangled_assert("?GetYAxis@@YG?AVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

vector3 GetZAxis(matrix3 const &m) // 0x6F7792
{
    mangled_assert("?GetZAxis@@YG?AVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

vector3 GetXAxis(matrix4 const &m) // 0x6F773F
{
    mangled_assert("?GetXAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
}

vector3 GetYAxis(matrix4 const &m) // 0x6F7776
{
    mangled_assert("?GetYAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
}

vector3 GetZAxis(matrix4 const &m) // 0x6F77AE
{
    mangled_assert("?GetZAxis@@YG?AVvector3@@ABVmatrix4@@@Z");
    todo("implement");
}

void MakeAlignYAxis(matrix3 &m, vector3 const &yAxis) // 0x6F77CA
{
    mangled_assert("?MakeAlignYAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

void MakeAlignYAxis(matrix4 &m, vector3 const &yAxis, vector3 const &translation) // 0x6F7B1A
{
    mangled_assert("?MakeAlignYAxis@@YGXAAVmatrix4@@ABVvector3@@1@Z");
    todo("implement");
}

void MakeAlignZAxis(matrix3 &m, vector3 const &zAxis) // 0x6F7E7F
{
    mangled_assert("?MakeAlignZAxis@@YGXAAVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

void MakeAlignZAxis(matrix4 &m, vector3 const &zAxis, vector3 const &translation) // 0x6F803C
{
    mangled_assert("?MakeAlignZAxis@@YGXAAVmatrix4@@ABVvector3@@1@Z");
    todo("implement");
}

void MakeRotateX(matrix4 &m, float const rads) // 0x6F839E
{
    mangled_assert("?MakeRotateX@@YGXAAVmatrix4@@M@Z");
    todo("implement");
}

void MakeRotateY(matrix4 &m, float const rads) // 0x6F8436
{
    mangled_assert("?MakeRotateY@@YGXAAVmatrix4@@M@Z");
    todo("implement");
}

void MakeRotateZ(matrix4 &m, float const rads) // 0x6F8475
{
    mangled_assert("?MakeRotateZ@@YGXAAVmatrix4@@M@Z");
    todo("implement");
}

void MakeRotateXYZ(matrix4 &m, vector3 const &rads) // 0x6F83DD
{
    mangled_assert("?MakeRotateXYZ@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

void MakeTranslate(matrix4 &m, vector3 const &offset) // 0x6F84B4
{
    mangled_assert("?MakeTranslate@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

void Matrix4RotateX(matrix4 &m, float const rads) // 0x6F84C2
{
    mangled_assert("?Matrix4RotateX@@YGXAAVmatrix4@@M@Z");
    todo("implement");
}

void Matrix4RotateY(matrix4 &m, float const rads) // 0x6F850E
{
    mangled_assert("?Matrix4RotateY@@YGXAAVmatrix4@@M@Z");
    todo("implement");
}

void Matrix4RotateZ(matrix4 &m, float const rads) // 0x6F8538
{
    mangled_assert("?Matrix4RotateZ@@YGXAAVmatrix4@@M@Z");
    todo("implement");
}

void Matrix4RotateXYZ(matrix4 &m, vector3 const &rads) // 0x6F84EC
{
    mangled_assert("?Matrix4RotateXYZ@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

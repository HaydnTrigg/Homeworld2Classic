#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix3.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern matrix3 matrix3::ident; // 0x83DAB8
extern matrix3 matrix3::zero; // 0x84B8E8

/* ---------- private variables */

/* ---------- public code */

_extern matrix3 &_sub_65E478(matrix3 *const);
matrix3 &matrix3::NormalizeColumns() // 0x65E478
{
    mangled_assert("?NormalizeColumns@matrix3@@QAEAAV1@XZ");
    todo("implement");
    matrix3 & __result = _sub_65E478(this);
    return __result;
}

_extern matrix3 &_sub_65E528(matrix3 *const);
matrix3 &matrix3::NormalizeRows() // 0x65E528
{
    mangled_assert("?NormalizeRows@matrix3@@QAEAAV1@XZ");
    todo("implement");
    matrix3 & __result = _sub_65E528(this);
    return __result;
}

_extern matrix3 &_sub_65E145(matrix3 *const, float);
matrix3 &matrix3::MakeRotateX(float) // 0x65E145
{
    mangled_assert("?MakeRotateX@matrix3@@QAEAAV1@M@Z");
    todo("implement");
    matrix3 & __result = _sub_65E145(this, arg);
    return __result;
}

_extern matrix3 &_sub_65E24C(matrix3 *const, float);
matrix3 &matrix3::MakeRotateY(float) // 0x65E24C
{
    mangled_assert("?MakeRotateY@matrix3@@QAEAAV1@M@Z");
    todo("implement");
    matrix3 & __result = _sub_65E24C(this, arg);
    return __result;
}

_extern matrix3 &_sub_65E2D2(matrix3 *const, float);
matrix3 &matrix3::MakeRotateZ(float) // 0x65E2D2
{
    mangled_assert("?MakeRotateZ@matrix3@@QAEAAV1@M@Z");
    todo("implement");
    matrix3 & __result = _sub_65E2D2(this, arg);
    return __result;
}

_extern matrix3 &_sub_65E1CE(matrix3 *const, float, float, float);
matrix3 &matrix3::MakeRotateXYZ(float, float, float) // 0x65E1CE
{
    mangled_assert("?MakeRotateXYZ@matrix3@@QAEAAV1@MMM@Z");
    todo("implement");
    matrix3 & __result = _sub_65E1CE(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_65E633(matrix3 const *const, float &, float &, float &);
bool matrix3::ToEulerAnglesXYZ(float &, float &, float &) const // 0x65E633
{
    mangled_assert("?ToEulerAnglesXYZ@matrix3@@QBE_NAAM00@Z");
    todo("implement");
    bool __result = _sub_65E633(this, arg, arg, arg);
    return __result;
}

_extern matrix3 &_sub_65DFA2(matrix3 *const, vector3 const &, float);
matrix3 &matrix3::MakeGenRotate(vector3 const &, float) // 0x65DFA2
{
    mangled_assert("?MakeGenRotate@matrix3@@QAEAAV1@ABVvector3@@M@Z");
    todo("implement");
    matrix3 & __result = _sub_65DFA2(this, arg, arg);
    return __result;
}

_extern matrix3 &_sub_65E616(matrix3 *const, float);
matrix3 &matrix3::Scale(float) // 0x65E616
{
    mangled_assert("?Scale@matrix3@@QAEAAV1@M@Z");
    todo("implement");
    matrix3 & __result = _sub_65E616(this, arg);
    return __result;
}

_extern matrix3 &_sub_65E58B(matrix3 *const, vector3 &);
matrix3 &matrix3::Scale(vector3 &) // 0x65E58B
{
    mangled_assert("?Scale@matrix3@@QAEAAV1@AAVvector3@@@Z");
    todo("implement");
    matrix3 & __result = _sub_65E58B(this, arg);
    return __result;
}

_extern matrix3 &_sub_65E566(matrix3 *const, __int32, vector3 const &);
matrix3 &matrix3::PutVector3InRow(__int32, vector3 const &) // 0x65E566
{
    mangled_assert("?PutVector3InRow@matrix3@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix3 & __result = _sub_65E566(this, arg, arg);
    return __result;
}

_extern matrix3 &_sub_65E544(matrix3 *const, __int32, vector3 const &);
matrix3 &matrix3::PutVector3InCol(__int32, vector3 const &) // 0x65E544
{
    mangled_assert("?PutVector3InCol@matrix3@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix3 & __result = _sub_65E544(this, arg, arg);
    return __result;
}

_extern matrix3 &_sub_65E74C(matrix3 *const);
matrix3 &matrix3::Transpose() // 0x65E74C
{
    mangled_assert("?Transpose@matrix3@@QAEAAV1@XZ");
    todo("implement");
    matrix3 & __result = _sub_65E74C(this);
    return __result;
}

_extern float _sub_65E7BD(matrix3 *const);
float matrix3::determinant() // 0x65E7BD
{
    mangled_assert("?determinant@matrix3@@QAEMXZ");
    todo("implement");
    float __result = _sub_65E7BD(this);
    return __result;
}

_extern void _sub_65E825(matrix3 *const);
void matrix3::invert() // 0x65E825
{
    mangled_assert("?invert@matrix3@@QAEXXZ");
    todo("implement");
    _sub_65E825(this);
}

_extern matrix3 &_sub_65E35B(matrix3 *const, vector3 const &, vector3 const &);
matrix3 &matrix3::MakeRotationToFace(vector3 const &, vector3 const &) // 0x65E35B
{
    mangled_assert("?MakeRotationToFace@matrix3@@QAEAAV1@ABVvector3@@0@Z");
    todo("implement");
    matrix3 & __result = _sub_65E35B(this, arg, arg);
    return __result;
}

/* ---------- private code */
/* combined */
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix3.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern matrix3 matrix3::zero; // 0x101A56A8
extern matrix3 matrix3::ident; // 0x1011215C

/* ---------- private variables */

/* ---------- public code */

_extern matrix3 &_sub_100C3331(matrix3 *const);
matrix3 &matrix3::NormalizeColumns() // 0x100C3331
{
    mangled_assert("?NormalizeColumns@matrix3@@QAEAAV1@XZ");
    todo("implement");
    matrix3 & __result = _sub_100C3331(this);
    return __result;
}

_extern matrix3 &_sub_100C33E1(matrix3 *const);
matrix3 &matrix3::NormalizeRows() // 0x100C33E1
{
    mangled_assert("?NormalizeRows@matrix3@@QAEAAV1@XZ");
    todo("implement");
    matrix3 & __result = _sub_100C33E1(this);
    return __result;
}

_extern matrix3 &_sub_100C2FFE(matrix3 *const, float);
matrix3 &matrix3::MakeRotateX(float) // 0x100C2FFE
{
    mangled_assert("?MakeRotateX@matrix3@@QAEAAV1@M@Z");
    todo("implement");
    matrix3 & __result = _sub_100C2FFE(this, arg);
    return __result;
}

_extern matrix3 &_sub_100C3105(matrix3 *const, float);
matrix3 &matrix3::MakeRotateY(float) // 0x100C3105
{
    mangled_assert("?MakeRotateY@matrix3@@QAEAAV1@M@Z");
    todo("implement");
    matrix3 & __result = _sub_100C3105(this, arg);
    return __result;
}

_extern matrix3 &_sub_100C318B(matrix3 *const, float);
matrix3 &matrix3::MakeRotateZ(float) // 0x100C318B
{
    mangled_assert("?MakeRotateZ@matrix3@@QAEAAV1@M@Z");
    todo("implement");
    matrix3 & __result = _sub_100C318B(this, arg);
    return __result;
}

_extern matrix3 &_sub_100C3087(matrix3 *const, float, float, float);
matrix3 &matrix3::MakeRotateXYZ(float, float, float) // 0x100C3087
{
    mangled_assert("?MakeRotateXYZ@matrix3@@QAEAAV1@MMM@Z");
    todo("implement");
    matrix3 & __result = _sub_100C3087(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_100C34EC(matrix3 const *const, float &, float &, float &);
bool matrix3::ToEulerAnglesXYZ(float &, float &, float &) const // 0x100C34EC
{
    mangled_assert("?ToEulerAnglesXYZ@matrix3@@QBE_NAAM00@Z");
    todo("implement");
    bool __result = _sub_100C34EC(this, arg, arg, arg);
    return __result;
}

_extern matrix3 &_sub_100C2E5B(matrix3 *const, vector3 const &, float);
matrix3 &matrix3::MakeGenRotate(vector3 const &, float) // 0x100C2E5B
{
    mangled_assert("?MakeGenRotate@matrix3@@QAEAAV1@ABVvector3@@M@Z");
    todo("implement");
    matrix3 & __result = _sub_100C2E5B(this, arg, arg);
    return __result;
}

_extern matrix3 &_sub_100C34CF(matrix3 *const, float);
matrix3 &matrix3::Scale(float) // 0x100C34CF
{
    mangled_assert("?Scale@matrix3@@QAEAAV1@M@Z");
    todo("implement");
    matrix3 & __result = _sub_100C34CF(this, arg);
    return __result;
}

_extern matrix3 &_sub_100C3444(matrix3 *const, vector3 &);
matrix3 &matrix3::Scale(vector3 &) // 0x100C3444
{
    mangled_assert("?Scale@matrix3@@QAEAAV1@AAVvector3@@@Z");
    todo("implement");
    matrix3 & __result = _sub_100C3444(this, arg);
    return __result;
}

_extern matrix3 &_sub_100C341F(matrix3 *const, __int32, vector3 const &);
matrix3 &matrix3::PutVector3InRow(__int32, vector3 const &) // 0x100C341F
{
    mangled_assert("?PutVector3InRow@matrix3@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix3 & __result = _sub_100C341F(this, arg, arg);
    return __result;
}

_extern matrix3 &_sub_100C33FD(matrix3 *const, __int32, vector3 const &);
matrix3 &matrix3::PutVector3InCol(__int32, vector3 const &) // 0x100C33FD
{
    mangled_assert("?PutVector3InCol@matrix3@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix3 & __result = _sub_100C33FD(this, arg, arg);
    return __result;
}

_extern matrix3 &_sub_100C3605(matrix3 *const);
matrix3 &matrix3::Transpose() // 0x100C3605
{
    mangled_assert("?Transpose@matrix3@@QAEAAV1@XZ");
    todo("implement");
    matrix3 & __result = _sub_100C3605(this);
    return __result;
}

_extern float _sub_100C3676(matrix3 *const);
float matrix3::determinant() // 0x100C3676
{
    mangled_assert("?determinant@matrix3@@QAEMXZ");
    todo("implement");
    float __result = _sub_100C3676(this);
    return __result;
}

_extern void _sub_100C370B(matrix3 *const);
void matrix3::invert() // 0x100C370B
{
    mangled_assert("?invert@matrix3@@QAEXXZ");
    todo("implement");
    _sub_100C370B(this);
}

_extern matrix3 &_sub_100C3214(matrix3 *const, vector3 const &, vector3 const &);
matrix3 &matrix3::MakeRotationToFace(vector3 const &, vector3 const &) // 0x100C3214
{
    mangled_assert("?MakeRotationToFace@matrix3@@QAEAAV1@ABVvector3@@0@Z");
    todo("implement");
    matrix3 & __result = _sub_100C3214(this, arg, arg);
    return __result;
}

/* ---------- private code */
/* combined */
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix3.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern matrix3 matrix3::zero; // 0x100072CC
extern matrix3 matrix3::ident; // 0x10006034

/* ---------- private variables */

/* ---------- public code */

_extern matrix3 &_sub_1000334E(matrix3 *const, __int32, vector3 const &);
matrix3 &matrix3::PutVector3InCol(__int32, vector3 const &) // 0x1000334E
{
    mangled_assert("?PutVector3InCol@matrix3@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix3 & __result = _sub_1000334E(this, arg, arg);
    return __result;
}

/* ---------- private code */
/* combined */
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix3.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern matrix3 matrix3::zero; // 0x1000F994
extern matrix3 matrix3::ident; // 0x1000A0C0

/* ---------- private variables */

/* ---------- public code */

_extern matrix3 &_sub_100068F2(matrix3 *const, __int32, vector3 const &);
matrix3 &matrix3::PutVector3InCol(__int32, vector3 const &) // 0x100068F2
{
    mangled_assert("?PutVector3InCol@matrix3@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix3 & __result = _sub_100068F2(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

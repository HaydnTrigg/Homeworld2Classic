#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

enum
{
    M00 = 0, // 0x0000
    M01 = 4, // 0x0004
    M02 = 8, // 0x0008
    M03 = 12, // 0x000C
    M10 = 1, // 0x0001
    M11 = 5, // 0x0005
    M12 = 9, // 0x0009
    M13 = 13, // 0x000D
    M20 = 2, // 0x0002
    M21 = 6, // 0x0006
    M22 = 10, // 0x000A
    M23 = 14, // 0x000E
    M30 = 3, // 0x0003
    M31 = 7, // 0x0007
    M32 = 11, // 0x000B
    M33 = 15, // 0x000F
};

/* ---------- definitions */

typedef float Mat2[2][2];

/* ---------- prototypes */

extern void invertGeneral(matrix4 const &m, matrix4 &out);
extern void invertMatrix(matrix4 const &m, matrix4 &out);

/* ---------- globals */

extern matrix4 matrix4::zero; // 0x10021FD8
extern matrix4 matrix4::ident; // 0x100206D0

/* ---------- private variables */

/* ---------- public code */

_extern matrix4 &_sub_10015EF8(matrix4 *const);
matrix4 &matrix4::NormalizeColumns4() // 0x10015EF8
{
    mangled_assert("?NormalizeColumns4@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_10015EF8(this);
    return __result;
}

_extern matrix4 &_sub_10015FDF(matrix4 *const);
matrix4 &matrix4::NormalizeRows4() // 0x10015FDF
{
    mangled_assert("?NormalizeRows4@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_10015FDF(this);
    return __result;
}

_extern matrix4 &_sub_10015E48(matrix4 *const);
matrix4 &matrix4::NormalizeColumns3() // 0x10015E48
{
    mangled_assert("?NormalizeColumns3@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_10015E48(this);
    return __result;
}

_extern matrix4 &_sub_10015FC3(matrix4 *const);
matrix4 &matrix4::NormalizeRows3() // 0x10015FC3
{
    mangled_assert("?NormalizeRows3@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_10015FC3(this);
    return __result;
}

_extern matrix4 &_sub_1001624D(matrix4 *const, float);
matrix4 &matrix4::Scale(float) // 0x1001624D
{
    mangled_assert("?Scale@matrix4@@QAEAAV1@M@Z");
    todo("implement");
    matrix4 & __result = _sub_1001624D(this, arg);
    return __result;
}

_extern matrix4 &_sub_100161C2(matrix4 *const, vector3 const &);
matrix4 &matrix4::Scale(vector3 const &) // 0x100161C2
{
    mangled_assert("?Scale@matrix4@@QAEAAV1@ABVvector3@@@Z");
    todo("implement");
    matrix4 & __result = _sub_100161C2(this, arg);
    return __result;
}

_extern matrix4 &_sub_100161A5(matrix4 *const, float);
matrix4 &matrix4::Scale4x4(float) // 0x100161A5
{
    mangled_assert("?Scale4x4@matrix4@@QAEAAV1@M@Z");
    todo("implement");
    matrix4 & __result = _sub_100161A5(this, arg);
    return __result;
}

_extern matrix4 &_sub_10016179(matrix4 *const, __int32, vector4 const &);
matrix4 &matrix4::PutVector4InRow(__int32, vector4 const &) // 0x10016179
{
    mangled_assert("?PutVector4InRow@matrix4@@QAEAAV1@HABVvector4@@@Z");
    todo("implement");
    matrix4 & __result = _sub_10016179(this, arg, arg);
    return __result;
}

_extern matrix4 &_sub_10016150(matrix4 *const, __int32, vector4 const &);
matrix4 &matrix4::PutVector4InCol(__int32, vector4 const &) // 0x10016150
{
    mangled_assert("?PutVector4InCol@matrix4@@QAEAAV1@HABVvector4@@@Z");
    todo("implement");
    matrix4 & __result = _sub_10016150(this, arg, arg);
    return __result;
}

_extern matrix4 &_sub_1001612B(matrix4 *const, __int32, vector3 const &);
matrix4 &matrix4::PutVector3InRow(__int32, vector3 const &) // 0x1001612B
{
    mangled_assert("?PutVector3InRow@matrix4@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix4 & __result = _sub_1001612B(this, arg, arg);
    return __result;
}

_extern matrix4 &_sub_10016109(matrix4 *const, __int32, vector3 const &);
matrix4 &matrix4::PutVector3InCol(__int32, vector3 const &) // 0x10016109
{
    mangled_assert("?PutVector3InCol@matrix4@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix4 & __result = _sub_10016109(this, arg, arg);
    return __result;
}

_extern matrix4 &_sub_1001626A(matrix4 *const);
matrix4 &matrix4::Transpose() // 0x1001626A
{
    mangled_assert("?Transpose@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_1001626A(this);
    return __result;
}

_extern matrix4 &_sub_10015D69(matrix4 *const);
matrix4 &matrix4::Invert() // 0x10015D69
{
    mangled_assert("?Invert@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_10015D69(this);
    return __result;
}

_extern char *_sub_10016003(matrix4 *const, char *);
char *matrix4::PrintToBuffer(char *) // 0x10016003
{
    mangled_assert("?PrintToBuffer@matrix4@@QAEPADPAD@Z");
    todo("implement");
    char * __result = _sub_10016003(this, arg);
    return __result;
}

_extern void _sub_10016321(matrix4 const &, matrix4 &);
void invertGeneral(matrix4 const &m, matrix4 &out) // 0x10016321
{
    mangled_assert("?invertGeneral@@YGXABVmatrix4@@AAV1@@Z");
    todo("implement");
    _sub_10016321(m, out);
}

_extern void _sub_1001673C(matrix4 const &, matrix4 &);
void invertMatrix(matrix4 const &m, matrix4 &out) // 0x1001673C
{
    mangled_assert("?invertMatrix@@YGXABVmatrix4@@AAV1@@Z");
    todo("implement");
    _sub_1001673C(m, out);
}

/* ---------- private code */
/* combined */
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <util\types.h>
#include <Mathlib\pch.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <math.h>

/* ---------- constants */

enum
{
    M00 = 0, // 0x0000
    M01 = 4, // 0x0004
    M02 = 8, // 0x0008
    M03 = 12, // 0x000C
    M10 = 1, // 0x0001
    M11 = 5, // 0x0005
    M12 = 9, // 0x0009
    M13 = 13, // 0x000D
    M20 = 2, // 0x0002
    M21 = 6, // 0x0006
    M22 = 10, // 0x000A
    M23 = 14, // 0x000E
    M30 = 3, // 0x0003
    M31 = 7, // 0x0007
    M32 = 11, // 0x000B
    M33 = 15, // 0x000F
};

/* ---------- definitions */

typedef float Mat2[2][2];

/* ---------- prototypes */

extern void invertGeneral(matrix4 const &m, matrix4 &out);
extern void invertMatrix(matrix4 const &m, matrix4 &out);

/* ---------- globals */

extern matrix4 matrix4::ident; // 0x83DA78
extern matrix4 matrix4::zero; // 0x84B8A8

/* ---------- private variables */

/* ---------- public code */

_extern matrix4 &_sub_65D447(matrix4 *const);
matrix4 &matrix4::NormalizeColumns4() // 0x65D447
{
    mangled_assert("?NormalizeColumns4@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_65D447(this);
    return __result;
}

_extern matrix4 &_sub_65D52E(matrix4 *const);
matrix4 &matrix4::NormalizeRows4() // 0x65D52E
{
    mangled_assert("?NormalizeRows4@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_65D52E(this);
    return __result;
}

_extern matrix4 &_sub_65D397(matrix4 *const);
matrix4 &matrix4::NormalizeColumns3() // 0x65D397
{
    mangled_assert("?NormalizeColumns3@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_65D397(this);
    return __result;
}

_extern matrix4 &_sub_65D512(matrix4 *const);
matrix4 &matrix4::NormalizeRows3() // 0x65D512
{
    mangled_assert("?NormalizeRows3@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_65D512(this);
    return __result;
}

_extern matrix4 &_sub_65D79C(matrix4 *const, float);
matrix4 &matrix4::Scale(float) // 0x65D79C
{
    mangled_assert("?Scale@matrix4@@QAEAAV1@M@Z");
    todo("implement");
    matrix4 & __result = _sub_65D79C(this, arg);
    return __result;
}

_extern matrix4 &_sub_65D711(matrix4 *const, vector3 const &);
matrix4 &matrix4::Scale(vector3 const &) // 0x65D711
{
    mangled_assert("?Scale@matrix4@@QAEAAV1@ABVvector3@@@Z");
    todo("implement");
    matrix4 & __result = _sub_65D711(this, arg);
    return __result;
}

_extern matrix4 &_sub_65D6F4(matrix4 *const, float);
matrix4 &matrix4::Scale4x4(float) // 0x65D6F4
{
    mangled_assert("?Scale4x4@matrix4@@QAEAAV1@M@Z");
    todo("implement");
    matrix4 & __result = _sub_65D6F4(this, arg);
    return __result;
}

_extern matrix4 &_sub_65D6C8(matrix4 *const, __int32, vector4 const &);
matrix4 &matrix4::PutVector4InRow(__int32, vector4 const &) // 0x65D6C8
{
    mangled_assert("?PutVector4InRow@matrix4@@QAEAAV1@HABVvector4@@@Z");
    todo("implement");
    matrix4 & __result = _sub_65D6C8(this, arg, arg);
    return __result;
}

_extern matrix4 &_sub_65D69F(matrix4 *const, __int32, vector4 const &);
matrix4 &matrix4::PutVector4InCol(__int32, vector4 const &) // 0x65D69F
{
    mangled_assert("?PutVector4InCol@matrix4@@QAEAAV1@HABVvector4@@@Z");
    todo("implement");
    matrix4 & __result = _sub_65D69F(this, arg, arg);
    return __result;
}

_extern matrix4 &_sub_65D67A(matrix4 *const, __int32, vector3 const &);
matrix4 &matrix4::PutVector3InRow(__int32, vector3 const &) // 0x65D67A
{
    mangled_assert("?PutVector3InRow@matrix4@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix4 & __result = _sub_65D67A(this, arg, arg);
    return __result;
}

_extern matrix4 &_sub_65D658(matrix4 *const, __int32, vector3 const &);
matrix4 &matrix4::PutVector3InCol(__int32, vector3 const &) // 0x65D658
{
    mangled_assert("?PutVector3InCol@matrix4@@QAEAAV1@HABVvector3@@@Z");
    todo("implement");
    matrix4 & __result = _sub_65D658(this, arg, arg);
    return __result;
}

_extern matrix4 &_sub_65D7B9(matrix4 *const);
matrix4 &matrix4::Transpose() // 0x65D7B9
{
    mangled_assert("?Transpose@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_65D7B9(this);
    return __result;
}

_extern matrix4 &_sub_65D2B8(matrix4 *const);
matrix4 &matrix4::Invert() // 0x65D2B8
{
    mangled_assert("?Invert@matrix4@@QAEAAV1@XZ");
    todo("implement");
    matrix4 & __result = _sub_65D2B8(this);
    return __result;
}

_extern char *_sub_65D552(matrix4 *const, char *);
char *matrix4::PrintToBuffer(char *) // 0x65D552
{
    mangled_assert("?PrintToBuffer@matrix4@@QAEPADPAD@Z");
    todo("implement");
    char * __result = _sub_65D552(this, arg);
    return __result;
}

_extern void _sub_65D870(matrix4 const &, matrix4 &);
void invertGeneral(matrix4 const &m, matrix4 &out) // 0x65D870
{
    mangled_assert("?invertGeneral@@YGXABVmatrix4@@AAV1@@Z");
    todo("implement");
    _sub_65D870(m, out);
}

_extern void _sub_65DC8B(matrix4 const &, matrix4 &);
void invertMatrix(matrix4 const &m, matrix4 &out) // 0x65DC8B
{
    mangled_assert("?invertMatrix@@YGXABVmatrix4@@AAV1@@Z");
    todo("implement");
    _sub_65DC8B(m, out);
}

/* ---------- private code */
#endif

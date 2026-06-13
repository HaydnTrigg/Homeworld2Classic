#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>
#include <Mathlib\fastmath.h>
#include <exception>
#include <Render\GL\types.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <math.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned __int32 mapMatrixMode(MatrixMode mode);
extern unsigned __int32 mapMatrix(unsigned __int32 mode);
extern void rglPushMatrix();
extern void rglPopMatrix();
extern MatrixMode rglSetMatrixMode(MatrixMode mode);
extern MatrixMode rglGetMatrixMode();
extern void rglSetIdentity();
extern void rglSetMatrix(matrix4 const &m);
extern void rglGetMatrix(matrix4 &m);
extern void rglMultMatrix(matrix4 const &m);
extern void rglMultTranslate(float tx, float ty, float tz);
extern void rglGenIdentity(matrix4 &m);
extern void rglGenRotation(matrix4 &m, vector3 const &axis, float degrees);
extern void rglMultRotation(float degrees, float x, float y, float z);
extern void rglMultScale(float sx, float sy, float sz);
extern void rglGenFrustum(matrix4 &m, float left, float right, float bottom, float top, float znear, float zfar);
extern void rglMultFrustum(float left, float right, float bottom, float top, float znear, float zfar);
extern void rglGenPerspectiveWindow(matrix4 &m, float fovy, float aspect, float nearval, float farval, vector4 &window);
extern void rglGenPerspective(matrix4 &m, float fovy, float aspect, float nearval, float farval);
extern void rglMultPerspective(float fovy, float aspect, float nearval, float farval);
extern void rglGenOrthographic(matrix4 &m, float left, float right, float bottom, float top, float nearval, float farval);
extern void rglMultOrthographic(float left, float right, float bottom, float top, float nearval, float farval);
extern void rglMultOrthographic2D(float left, float right, float bottom, float top);
extern void rglGenLookAt(matrix4 &m, vector3 const &eyevec, vector3 const &centrevec, vector3 const &upvec);
extern void rglMultLookAtOld(vector3 const &eyevec, vector3 const &centrevec, vector3 const &upvec);
extern void rglMultLookAt(vector3 const &eyevec, vector3 const &centrevec, vector3 const &upvec);
extern void rglSetViewport(__int32 x, __int32 y, __int32 width, __int32 height);
extern void rglGetViewport(__int32 *x, __int32 *y, __int32 *width, __int32 *height);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern unsigned __int32 _sub_1000DCC1(MatrixMode);
unsigned __int32 mapMatrixMode(MatrixMode mode) // 0x1000DCC1
{
    mangled_assert("?mapMatrixMode@@YGIW4MatrixMode@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1000DCC1(mode);
    return __result;
}

_extern unsigned __int32 _sub_1000DC88(unsigned __int32);
unsigned __int32 mapMatrix(unsigned __int32 mode) // 0x1000DC88
{
    mangled_assert("?mapMatrix@@YGII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1000DC88(mode);
    return __result;
}

_extern void _sub_1000EA3B();
void rglPushMatrix() // 0x1000EA3B
{
    mangled_assert("?rglPushMatrix@@YGXXZ");
    todo("implement");
    _sub_1000EA3B();
}

_extern void _sub_1000EA35();
void rglPopMatrix() // 0x1000EA35
{
    mangled_assert("?rglPopMatrix@@YGXXZ");
    todo("implement");
    _sub_1000EA35();
}

_extern MatrixMode _sub_1000EA4D(MatrixMode);
MatrixMode rglSetMatrixMode(MatrixMode mode) // 0x1000EA4D
{
    mangled_assert("?rglSetMatrixMode@@YG?AW4MatrixMode@@W41@@Z");
    todo("implement");
    MatrixMode __result = _sub_1000EA4D(mode);
    return __result;
}

_extern MatrixMode _sub_1000E3E0();
MatrixMode rglGetMatrixMode() // 0x1000E3E0
{
    mangled_assert("?rglGetMatrixMode@@YG?AW4MatrixMode@@XZ");
    todo("implement");
    MatrixMode __result = _sub_1000E3E0();
    return __result;
}

_extern void _sub_1000EA41();
void rglSetIdentity() // 0x1000EA41
{
    mangled_assert("?rglSetIdentity@@YGXXZ");
    todo("implement");
    _sub_1000EA41();
}

_extern void _sub_1000EA47(matrix4 const &);
void rglSetMatrix(matrix4 const &m) // 0x1000EA47
{
    mangled_assert("?rglSetMatrix@@YGXABVmatrix4@@@Z");
    todo("implement");
    _sub_1000EA47(m);
}

_extern void _sub_1000E3C4(matrix4 &);
void rglGetMatrix(matrix4 &m) // 0x1000E3C4
{
    mangled_assert("?rglGetMatrix@@YGXAAVmatrix4@@@Z");
    todo("implement");
    _sub_1000E3C4(m);
}

_extern void _sub_1000E82D(matrix4 const &);
void rglMultMatrix(matrix4 const &m) // 0x1000E82D
{
    mangled_assert("?rglMultMatrix@@YGXABVmatrix4@@@Z");
    todo("implement");
    _sub_1000E82D(m);
}

_extern void _sub_1000EA05(float, float, float);
void rglMultTranslate(float tx, float ty, float tz) // 0x1000EA05
{
    mangled_assert("?rglMultTranslate@@YGXMMM@Z");
    todo("implement");
    _sub_1000EA05(tx, ty, tz);
}

_extern void _sub_1000DDF0(matrix4 &);
void rglGenIdentity(matrix4 &m) // 0x1000DDF0
{
    mangled_assert("?rglGenIdentity@@YGXAAVmatrix4@@@Z");
    todo("implement");
    _sub_1000DDF0(m);
}

_extern void _sub_1000E1EA(matrix4 &, vector3 const &, float);
void rglGenRotation(matrix4 &m, vector3 const &axis, float degrees) // 0x1000E1EA
{
    mangled_assert("?rglGenRotation@@YGXAAVmatrix4@@ABVvector3@@M@Z");
    todo("implement");
    _sub_1000E1EA(m, axis, degrees);
}

_extern void _sub_1000E99A(float, float, float, float);
void rglMultRotation(float degrees, float x, float y, float z) // 0x1000E99A
{
    mangled_assert("?rglMultRotation@@YGXMMMM@Z");
    todo("implement");
    _sub_1000E99A(degrees, x, y, z);
}

_extern void _sub_1000E9D5(float, float, float);
void rglMultScale(float sx, float sy, float sz) // 0x1000E9D5
{
    mangled_assert("?rglMultScale@@YGXMMM@Z");
    todo("implement");
    _sub_1000E9D5(sx, sy, sz);
}

_extern void _sub_1000DCFA(matrix4 &, float, float, float, float, float, float);
void rglGenFrustum(matrix4 &m, float left, float right, float bottom, float top, float znear, float zfar) // 0x1000DCFA
{
    mangled_assert("?rglGenFrustum@@YGXAAVmatrix4@@MMMMMM@Z");
    todo("implement");
    _sub_1000DCFA(m, left, right, bottom, top, znear, zfar);
}

_extern void _sub_1000E425(float, float, float, float, float, float);
void rglMultFrustum(float left, float right, float bottom, float top, float znear, float zfar) // 0x1000E425
{
    mangled_assert("?rglMultFrustum@@YGXMMMMMM@Z");
    todo("implement");
    _sub_1000E425(left, right, bottom, top, znear, zfar);
}

_extern void _sub_1000E122(matrix4 &, float, float, float, float, vector4 &);
void rglGenPerspectiveWindow(matrix4 &m, float fovy, float aspect, float nearval, float farval, vector4 &window) // 0x1000E122
{
    mangled_assert("?rglGenPerspectiveWindow@@YGXAAVmatrix4@@MMMMAAVvector4@@@Z");
    todo("implement");
    _sub_1000E122(m, fovy, aspect, nearval, farval, window);
}

_extern void _sub_1000E09A(matrix4 &, float, float, float, float);
void rglGenPerspective(matrix4 &m, float fovy, float aspect, float nearval, float farval) // 0x1000E09A
{
    mangled_assert("?rglGenPerspective@@YGXAAVmatrix4@@MMMM@Z");
    todo("implement");
    _sub_1000E09A(m, fovy, aspect, nearval, farval);
}

_extern void _sub_1000E8F9(float, float, float, float);
void rglMultPerspective(float fovy, float aspect, float nearval, float farval) // 0x1000E8F9
{
    mangled_assert("?rglMultPerspective@@YGXMMMM@Z");
    todo("implement");
    _sub_1000E8F9(fovy, aspect, nearval, farval);
}

_extern void _sub_1000DFD3(matrix4 &, float, float, float, float, float, float);
void rglGenOrthographic(matrix4 &m, float left, float right, float bottom, float top, float nearval, float farval) // 0x1000DFD3
{
    mangled_assert("?rglGenOrthographic@@YGXAAVmatrix4@@MMMMMM@Z");
    todo("implement");
    _sub_1000DFD3(m, left, right, bottom, top, nearval, farval);
}

_extern void _sub_1000E896(float, float, float, float, float, float);
void rglMultOrthographic(float left, float right, float bottom, float top, float nearval, float farval) // 0x1000E896
{
    mangled_assert("?rglMultOrthographic@@YGXMMMMMM@Z");
    todo("implement");
    _sub_1000E896(left, right, bottom, top, nearval, farval);
}

_extern void _sub_1000E833(float, float, float, float);
void rglMultOrthographic2D(float left, float right, float bottom, float top) // 0x1000E833
{
    mangled_assert("?rglMultOrthographic2D@@YGXMMMM@Z");
    todo("implement");
    _sub_1000E833(left, right, bottom, top);
}

_extern void _sub_1000DDFF(matrix4 &, vector3 const &, vector3 const &, vector3 const &);
void rglGenLookAt(matrix4 &m, vector3 const &eyevec, vector3 const &centrevec, vector3 const &upvec) // 0x1000DDFF
{
    mangled_assert("?rglGenLookAt@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
    _sub_1000DDFF(m, eyevec, centrevec, upvec);
}

_extern void _sub_1000E672(vector3 const &, vector3 const &, vector3 const &);
void rglMultLookAtOld(vector3 const &eyevec, vector3 const &centrevec, vector3 const &upvec) // 0x1000E672
{
    mangled_assert("?rglMultLookAtOld@@YGXABVvector3@@00@Z");
    todo("implement");
    _sub_1000E672(eyevec, centrevec, upvec);
}

_extern void _sub_1000E488(vector3 const &, vector3 const &, vector3 const &);
void rglMultLookAt(vector3 const &eyevec, vector3 const &centrevec, vector3 const &upvec) // 0x1000E488
{
    mangled_assert("?rglMultLookAt@@YGXABVvector3@@00@Z");
    todo("implement");
    _sub_1000E488(eyevec, centrevec, upvec);
}

_extern void _sub_1000EA81(__int32, __int32, __int32, __int32);
void rglSetViewport(__int32 x, __int32 y, __int32 width, __int32 height) // 0x1000EA81
{
    mangled_assert("?rglSetViewport@@YGXHHHH@Z");
    todo("implement");
    _sub_1000EA81(x, y, width, height);
}

_extern void _sub_1000E3E6(__int32 *, __int32 *, __int32 *, __int32 *);
void rglGetViewport(__int32 *x, __int32 *y, __int32 *width, __int32 *height) // 0x1000E3E6
{
    mangled_assert("?rglGetViewport@@YGXPAH000@Z");
    todo("implement");
    _sub_1000E3E6(x, y, width, height);
}

/* ---------- private code */
#endif

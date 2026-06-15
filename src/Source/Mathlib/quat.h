#if 0
#ifndef __QUAT_H__
#define __QUAT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class quat
{
public:
    float w; // 0x0
    vector3 v; // 0x4
    quat(vector3 const &, vector3 const &);
    quat(quat const &, quat const &, float);
    quat(matrix4 const &);
    _inline quat(matrix3 const &);
    _inline quat(float, vector3 const &);
    _inline quat(float, float, float, float);
    _inline quat();
    bool operator==(quat const &);
    _inline bool operator!=(quat const &);
    quat operator-(quat const &) const;
    quat operator-() const;
    _inline quat operator+(quat const &) const;
    quat &operator+=(quat const &);
    quat &operator-=(quat const &);
    _inline vector3 operator*(vector3 const &) const;
    _inline quat operator*(quat const &) const;
    _inline quat operator*(float) const;
    _inline quat &operator*=(quat &);
    _inline quat &operator*=(float);
    quat operator/(float);
    quat &operator/=(float);
    void MakeQuatFromEulerAngles(float, float, float, __int32);
    quat &Conjugate();
    _inline float LengthSqr() const;
    _inline float Length() const;
    _inline quat &Normalize();
    _inline quat &Inverse();
    _inline quat Inversed() const;
    void getAxisAndAngle(float &, vector3 &) const;
    void FromMatrix(matrix4 const &);
    _inline void FromMatrix(matrix3 const &);
    _inline void quatToMatrix3(matrix3 *) const;
    _inline void quatToMatrix4(matrix4 *) const;
    _inline matrix3 operator class matrix3() const;
    _inline matrix4 operator class matrix4() const;
    char *PrintToBuffer(char *);
    char *PrintAsAxisAngle(char *);
    char *PrintVerbose(char *);
    static quat const identity;
};
static_assert(sizeof(quat) == 16, "Invalid quat size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool quat::operator!=(quat const &) // 0x474052
{
    mangled_assert("??9quat@@QAE_NABV0@@Z");
    todo("implement");
}

_inline float quat::LengthSqr() const // 0x474683
{
    mangled_assert("?LengthSqr@quat@@QBEMXZ");
    todo("implement");
}

_inline quat &quat::Inverse() // 0x4BD2C9
{
    mangled_assert("?Inverse@quat@@QAEAAV1@XZ");
    todo("implement");
}

_inline quat quat::Inversed() const // 0x474600
{
    mangled_assert("?Inversed@quat@@QBE?AV1@XZ");
    todo("implement");
}

_inline quat::quat() // 0x473E35
{
    mangled_assert("??0quat@@QAE@XZ");
    todo("implement");
}

_inline quat::quat(float, float, float, float) // 0x473E05
{
    mangled_assert("??0quat@@QAE@MMMM@Z");
    todo("implement");
}

_inline quat quat::operator+(quat const &) const // 0x474396
{
    mangled_assert("??Hquat@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline quat quat::operator*(float) const // 0x4741BB
{
    mangled_assert("??Dquat@@QBE?AV0@M@Z");
    todo("implement");
}

_inline quat &quat::operator*=(float) // 0x4743DA
{
    mangled_assert("??Xquat@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector3 quat::operator*(vector3 const &) const // 0x4741FE
{
    mangled_assert("??Dquat@@QBE?AVvector3@@ABV1@@Z");
    todo("implement");
}

_inline void quat::quatToMatrix3(matrix3 *) const // 0x476D4F
{
    mangled_assert("?quatToMatrix3@quat@@QBEXPAVmatrix3@@@Z");
    todo("implement");
}

_inline void quat::quatToMatrix4(matrix4 *) const // 0x6083F2
{
    mangled_assert("?quatToMatrix4@quat@@QBEXPAVmatrix4@@@Z");
    todo("implement");
}

_inline matrix3 quat::operator matrix3() const // 0x498186
{
    mangled_assert("??Bquat@@QBE?AVmatrix3@@XZ");
    todo("implement");
}

_inline matrix4 quat::operator matrix4() const // 0x607847
{
    mangled_assert("??Bquat@@QBE?AVmatrix4@@XZ");
    todo("implement");
}

_inline float quat::Length() const // 0x474628
{
    mangled_assert("?Length@quat@@QBEMXZ");
    todo("implement");
}

_inline quat &quat::Normalize() // 0x4746C0
{
    mangled_assert("?Normalize@quat@@QAEAAV1@XZ");
    todo("implement");
}

_inline quat quat::operator*(quat const &) const // 0x4740E9
{
    mangled_assert("??Dquat@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline quat &quat::operator*=(quat &) // 0x486F89
{
    mangled_assert("??Xquat@@QAEAAV0@AAV0@@Z");
    todo("implement");
}

_inline quat::quat(float, vector3 const &) // 0x486DFF
{
    mangled_assert("??0quat@@QAE@MABVvector3@@@Z");
    todo("implement");
}

_inline quat::quat(matrix3 const &) // 0x473DF3
{
    mangled_assert("??0quat@@QAE@ABVmatrix3@@@Z");
    todo("implement");
}

_inline void quat::FromMatrix(matrix3 const &) // 0x474437
{
    mangled_assert("?FromMatrix@quat@@QAEXABVmatrix3@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __QUAT_H__
/* combined */
#ifndef __QUAT_H__
#define __QUAT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class quat
{
public:
    float w; // 0x0
    vector3 v; // 0x4
    quat(vector3 const &, vector3 const &);
    quat(quat const &, quat const &, float);
    quat(matrix4 const &);
    quat(matrix3 const &);
    quat(float, vector3 const &);
    quat(float, float, float, float);
    quat();
    bool operator==(quat const &);
    bool operator!=(quat const &);
    quat operator-(quat const &) const;
    quat operator-() const;
    quat operator+(quat const &) const;
    quat &operator+=(quat const &);
    quat &operator-=(quat const &);
    vector3 operator*(vector3 const &) const;
    quat operator*(quat const &) const;
    quat operator*(float) const;
    quat &operator*=(quat &);
    quat &operator*=(float);
    quat operator/(float);
    quat &operator/=(float);
    void MakeQuatFromEulerAngles(float, float, float, __int32);
    quat &Conjugate();
    float LengthSqr() const;
    float Length() const;
    quat &Normalize();
    quat &Inverse();
    quat Inversed() const;
    void getAxisAndAngle(float &, vector3 &) const;
    void FromMatrix(matrix4 const &);
    void FromMatrix(matrix3 const &);
    void quatToMatrix3(matrix3 *) const;
    void quatToMatrix4(matrix4 *) const;
    matrix3 operator class matrix3() const;
    matrix4 operator class matrix4() const;
    char *PrintToBuffer(char *);
    char *PrintAsAxisAngle(char *);
    char *PrintVerbose(char *);
    static quat const identity;
};
static_assert(sizeof(quat) == 16, "Invalid quat size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __QUAT_H__
#endif

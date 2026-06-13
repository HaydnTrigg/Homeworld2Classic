#if 0
#ifndef __MATRIX3_H__
#define __MATRIX3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix3
{
public:
    union
    {
        float e[9]; // 0x0
        float e2[3][3]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m10; // 0xC
            float m11; // 0x10
            float m12; // 0x14
            float m20; // 0x18
            float m21; // 0x1C
            float m22; // 0x20
        };
        vector3 v[3]; // 0x0
    };
    matrix3(vector3 const &, vector3 const &, vector3 const &);
    matrix3(float, float, float, float, float, float, float, float, float);
    matrix3();
    float operator[](__int32) const;
    float &operator[](__int32);
    matrix3 operator*(float) const;
    vector3 operator*(vector3 const &) const;
    matrix3 operator*(matrix3 const &) const;
    matrix3 &operator*=(float);
    matrix3 &operator*=(matrix3 const &);
    void identity();
    matrix3 &NormalizeColumns();
    matrix3 &NormalizeRows();
    matrix3 &MakeRotateX(float);
    matrix3 &MakeRotateY(float);
    matrix3 &MakeRotateZ(float);
    matrix3 &MakeRotateXYZ(float, float, float);
    bool ToEulerAnglesXYZ(float &, float &, float &) const;
    matrix3 &MakeGenRotate(vector3 const &, float);
    matrix3 &MakeRotationToFace(vector3 const &, vector3 const &);
    matrix3 &Scale(vector3 &);
    matrix3 &Scale(float);
    matrix3 &PutVector3InRow(__int32, vector3 const &);
    matrix3 &PutVector3InCol(__int32, vector3 const &);
    vector3 GetVector3FromRow(__int32) const;
    vector3 GetVector3FromCol(__int32) const;
    matrix3 &Transpose();
    float determinant();
    void invert();
    char *PrintToBuffer(char *);
    static matrix3 const zero;
    static matrix3 const ident;
};
static_assert(sizeof(matrix3) == 36, "Invalid matrix3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MATRIX3_H__
/* combined */
#ifndef __MATRIX3_H__
#define __MATRIX3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix3
{
public:
    union
    {
        float e[9]; // 0x0
        float e2[3][3]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m10; // 0xC
            float m11; // 0x10
            float m12; // 0x14
            float m20; // 0x18
            float m21; // 0x1C
            float m22; // 0x20
        };
        vector3 v[3]; // 0x0
    };
    matrix3(vector3 const &, vector3 const &, vector3 const &);
    _inline matrix3(float, float, float, float, float, float, float, float, float);
    _inline matrix3();
    _inline float operator[](__int32) const;
    float &operator[](__int32);
    matrix3 operator*(float) const;
    _inline vector3 operator*(vector3 const &) const;
    _inline matrix3 operator*(matrix3 const &) const;
    _inline matrix3 &operator*=(float);
    _inline matrix3 &operator*=(matrix3 const &);
    _inline void identity();
    matrix3 &NormalizeColumns();
    matrix3 &NormalizeRows();
    matrix3 &MakeRotateX(float);
    matrix3 &MakeRotateY(float);
    matrix3 &MakeRotateZ(float);
    matrix3 &MakeRotateXYZ(float, float, float);
    bool ToEulerAnglesXYZ(float &, float &, float &) const;
    matrix3 &MakeGenRotate(vector3 const &, float);
    matrix3 &MakeRotationToFace(vector3 const &, vector3 const &);
    matrix3 &Scale(vector3 &);
    matrix3 &Scale(float);
    matrix3 &PutVector3InRow(__int32, vector3 const &);
    matrix3 &PutVector3InCol(__int32, vector3 const &);
    _inline vector3 GetVector3FromRow(__int32) const;
    _inline vector3 GetVector3FromCol(__int32) const;
    matrix3 &Transpose();
    float determinant();
    void invert();
    char *PrintToBuffer(char *);
    static matrix3 const zero;
    static matrix3 const ident;
};
static_assert(sizeof(matrix3) == 36, "Invalid matrix3 size");

/* ---------- prototypes */

extern _inline vector3 operator*(vector3 const &v, matrix3 const &m);
extern _inline vector3 &operator*=(vector3 &v, matrix3 const &m);

/* ---------- globals */

/* ---------- public code */

_extern float _sub_4740D3(matrix3 const *const, __int32);
_inline float matrix3::operator[](__int32) const // 0x4740D3
{
    mangled_assert("??Amatrix3@@QBEMH@Z");
    todo("implement");
    float __result = _sub_4740D3(this, arg);
    return __result;
}

_extern _sub_43F99A(matrix3 *const);
_inline matrix3::matrix3() // 0x43F99A
{
    mangled_assert("??0matrix3@@QAE@XZ");
    todo("implement");
    _sub_43F99A(this);
}

_extern _sub_61EC4D(matrix3 *const, float, float, float, float, float, float, float, float, float);
_inline matrix3::matrix3(float, float, float, float, float, float, float, float, float) // 0x61EC4D
{
    mangled_assert("??0matrix3@@QAE@MMMMMMMMM@Z");
    todo("implement");
    _sub_61EC4D(this, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_4991CB(matrix3 *const);
_inline void matrix3::identity() // 0x4991CB
{
    mangled_assert("?identity@matrix3@@QAEXXZ");
    todo("implement");
    _sub_4991CB(this);
}

_extern matrix3 _sub_48A40A(matrix3 const *const, matrix3 const &);
_inline matrix3 matrix3::operator*(matrix3 const &) const // 0x48A40A
{
    mangled_assert("??Dmatrix3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    matrix3 __result = _sub_48A40A(this, arg);
    return __result;
}

_extern matrix3 &_sub_607857(matrix3 *const, matrix3 const &);
_inline matrix3 &matrix3::operator*=(matrix3 const &) // 0x607857
{
    mangled_assert("??Xmatrix3@@QAEAAV0@ABV0@@Z");
    todo("implement");
    matrix3 & __result = _sub_607857(this, arg);
    return __result;
}

_extern vector3 _sub_47795B(matrix3 const *const, vector3 const &);
_inline vector3 matrix3::operator*(vector3 const &) const // 0x47795B
{
    mangled_assert("??Dmatrix3@@QBE?AVvector3@@ABV1@@Z");
    todo("implement");
    vector3 __result = _sub_47795B(this, arg);
    return __result;
}

_extern vector3 _sub_43FCB4(vector3 const &, matrix3 const &);
_inline vector3 operator*(vector3 const &v, matrix3 const &m) // 0x43FCB4
{
    mangled_assert("??D@YG?AVvector3@@ABV0@ABVmatrix3@@@Z");
    todo("implement");
    vector3 __result = _sub_43FCB4(v, m);
    return __result;
}

_extern vector3 &_sub_6A1EAB(vector3 &, matrix3 const &);
_inline vector3 &operator*=(vector3 &v, matrix3 const &m) // 0x6A1EAB
{
    mangled_assert("??X@YGAAVvector3@@AAV0@ABVmatrix3@@@Z");
    todo("implement");
    vector3 & __result = _sub_6A1EAB(v, m);
    return __result;
}

_extern vector3 _sub_440267(matrix3 const *const, __int32);
_inline vector3 matrix3::GetVector3FromRow(__int32) const // 0x440267
{
    mangled_assert("?GetVector3FromRow@matrix3@@QBE?AVvector3@@H@Z");
    todo("implement");
    vector3 __result = _sub_440267(this, arg);
    return __result;
}

_extern vector3 _sub_4871E8(matrix3 const *const, __int32);
_inline vector3 matrix3::GetVector3FromCol(__int32) const // 0x4871E8
{
    mangled_assert("?GetVector3FromCol@matrix3@@QBE?AVvector3@@H@Z");
    todo("implement");
    vector3 __result = _sub_4871E8(this, arg);
    return __result;
}

_extern matrix3 &_sub_65DF85(matrix3 *const, float);
_inline matrix3 &matrix3::operator*=(float) // 0x65DF85
{
    mangled_assert("??Xmatrix3@@QAEAAV0@M@Z");
    todo("implement");
    matrix3 & __result = _sub_65DF85(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __MATRIX3_H__
/* combined */
#ifndef __MATRIX3_H__
#define __MATRIX3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix3
{
public:
    union
    {
        float e[9]; // 0x0
        float e2[3][3]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m10; // 0xC
            float m11; // 0x10
            float m12; // 0x14
            float m20; // 0x18
            float m21; // 0x1C
            float m22; // 0x20
        };
        vector3 v[3]; // 0x0
    };
    matrix3(vector3 const &, vector3 const &, vector3 const &);
    matrix3(float, float, float, float, float, float, float, float, float);
    matrix3();
    float operator[](__int32) const;
    float &operator[](__int32);
    matrix3 operator*(float) const;
    vector3 operator*(vector3 const &) const;
    matrix3 operator*(matrix3 const &) const;
    matrix3 &operator*=(float);
    matrix3 &operator*=(matrix3 const &);
    void identity();
    matrix3 &NormalizeColumns();
    matrix3 &NormalizeRows();
    matrix3 &MakeRotateX(float);
    matrix3 &MakeRotateY(float);
    matrix3 &MakeRotateZ(float);
    matrix3 &MakeRotateXYZ(float, float, float);
    bool ToEulerAnglesXYZ(float &, float &, float &) const;
    matrix3 &MakeGenRotate(vector3 const &, float);
    matrix3 &MakeRotationToFace(vector3 const &, vector3 const &);
    matrix3 &Scale(vector3 &);
    matrix3 &Scale(float);
    matrix3 &PutVector3InRow(__int32, vector3 const &);
    matrix3 &PutVector3InCol(__int32, vector3 const &);
    vector3 GetVector3FromRow(__int32) const;
    vector3 GetVector3FromCol(__int32) const;
    matrix3 &Transpose();
    float determinant();
    void invert();
    char *PrintToBuffer(char *);
    static matrix3 const zero;
    static matrix3 const ident;
};
static_assert(sizeof(matrix3) == 36, "Invalid matrix3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MATRIX3_H__
/* combined */
#ifndef __MATRIX3_H__
#define __MATRIX3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix3
{
public:
    union
    {
        float e[9]; // 0x0
        float e2[3][3]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m10; // 0xC
            float m11; // 0x10
            float m12; // 0x14
            float m20; // 0x18
            float m21; // 0x1C
            float m22; // 0x20
        };
        vector3 v[3]; // 0x0
    };
    matrix3(vector3 const &, vector3 const &, vector3 const &);
    _inline matrix3(float, float, float, float, float, float, float, float, float);
    _inline matrix3();
    float operator[](__int32) const;
    float &operator[](__int32);
    matrix3 operator*(float) const;
    vector3 operator*(vector3 const &) const;
    _inline matrix3 operator*(matrix3 const &) const;
    _inline matrix3 &operator*=(float);
    matrix3 &operator*=(matrix3 const &);
    _inline void identity();
    matrix3 &NormalizeColumns();
    matrix3 &NormalizeRows();
    matrix3 &MakeRotateX(float);
    matrix3 &MakeRotateY(float);
    matrix3 &MakeRotateZ(float);
    matrix3 &MakeRotateXYZ(float, float, float);
    bool ToEulerAnglesXYZ(float &, float &, float &) const;
    matrix3 &MakeGenRotate(vector3 const &, float);
    matrix3 &MakeRotationToFace(vector3 const &, vector3 const &);
    matrix3 &Scale(vector3 &);
    matrix3 &Scale(float);
    matrix3 &PutVector3InRow(__int32, vector3 const &);
    matrix3 &PutVector3InCol(__int32, vector3 const &);
    vector3 GetVector3FromRow(__int32) const;
    vector3 GetVector3FromCol(__int32) const;
    matrix3 &Transpose();
    float determinant();
    void invert();
    char *PrintToBuffer(char *);
    static matrix3 const zero;
    static matrix3 const ident;
};
static_assert(sizeof(matrix3) == 36, "Invalid matrix3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_10059620(matrix3 *const);
_inline matrix3::matrix3() // 0x10059620
{
    mangled_assert("??0matrix3@@QAE@XZ");
    todo("implement");
    _sub_10059620(this);
}

_extern _sub_100C2D35(matrix3 *const, float, float, float, float, float, float, float, float, float);
_inline matrix3::matrix3(float, float, float, float, float, float, float, float, float) // 0x100C2D35
{
    mangled_assert("??0matrix3@@QAE@MMMMMMMMM@Z");
    todo("implement");
    _sub_100C2D35(this, arg, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_100C36DE(matrix3 *const);
_inline void matrix3::identity() // 0x100C36DE
{
    mangled_assert("?identity@matrix3@@QAEXXZ");
    todo("implement");
    _sub_100C36DE(this);
}

_extern matrix3 _sub_100C2D97(matrix3 const *const, matrix3 const &);
_inline matrix3 matrix3::operator*(matrix3 const &) const // 0x100C2D97
{
    mangled_assert("??Dmatrix3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    matrix3 __result = _sub_100C2D97(this, arg);
    return __result;
}

_extern matrix3 &_sub_100C2E3E(matrix3 *const, float);
_inline matrix3 &matrix3::operator*=(float) // 0x100C2E3E
{
    mangled_assert("??Xmatrix3@@QAEAAV0@M@Z");
    todo("implement");
    matrix3 & __result = _sub_100C2E3E(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __MATRIX3_H__
/* combined */
#ifndef __MATRIX3_H__
#define __MATRIX3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix3
{
public:
    union
    {
        float e[9]; // 0x0
        float e2[3][3]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m10; // 0xC
            float m11; // 0x10
            float m12; // 0x14
            float m20; // 0x18
            float m21; // 0x1C
            float m22; // 0x20
        };
        vector3 v[3]; // 0x0
    };
    matrix3(vector3 const &, vector3 const &, vector3 const &);
    matrix3(float, float, float, float, float, float, float, float, float);
    matrix3();
    float operator[](__int32) const;
    float &operator[](__int32);
    matrix3 operator*(float) const;
    vector3 operator*(vector3 const &) const;
    matrix3 operator*(matrix3 const &) const;
    matrix3 &operator*=(float);
    matrix3 &operator*=(matrix3 const &);
    void identity();
    matrix3 &NormalizeColumns();
    matrix3 &NormalizeRows();
    matrix3 &MakeRotateX(float);
    matrix3 &MakeRotateY(float);
    matrix3 &MakeRotateZ(float);
    matrix3 &MakeRotateXYZ(float, float, float);
    bool ToEulerAnglesXYZ(float &, float &, float &) const;
    matrix3 &MakeGenRotate(vector3 const &, float);
    matrix3 &MakeRotationToFace(vector3 const &, vector3 const &);
    matrix3 &Scale(vector3 &);
    matrix3 &Scale(float);
    matrix3 &PutVector3InRow(__int32, vector3 const &);
    matrix3 &PutVector3InCol(__int32, vector3 const &);
    vector3 GetVector3FromRow(__int32) const;
    vector3 GetVector3FromCol(__int32) const;
    matrix3 &Transpose();
    float determinant();
    void invert();
    char *PrintToBuffer(char *);
    static matrix3 const zero;
    static matrix3 const ident;
};
static_assert(sizeof(matrix3) == 36, "Invalid matrix3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MATRIX3_H__
/* combined */
#ifndef __MATRIX3_H__
#define __MATRIX3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix3
{
public:
    union
    {
        float e[9]; // 0x0
        float e2[3][3]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m10; // 0xC
            float m11; // 0x10
            float m12; // 0x14
            float m20; // 0x18
            float m21; // 0x1C
            float m22; // 0x20
        };
        vector3 v[3]; // 0x0
    };
    matrix3(vector3 const &, vector3 const &, vector3 const &);
    matrix3(float, float, float, float, float, float, float, float, float);
    matrix3();
    float operator[](__int32) const;
    float &operator[](__int32);
    matrix3 operator*(float) const;
    vector3 operator*(vector3 const &) const;
    matrix3 operator*(matrix3 const &) const;
    matrix3 &operator*=(float);
    matrix3 &operator*=(matrix3 const &);
    void identity();
    matrix3 &NormalizeColumns();
    matrix3 &NormalizeRows();
    matrix3 &MakeRotateX(float);
    matrix3 &MakeRotateY(float);
    matrix3 &MakeRotateZ(float);
    matrix3 &MakeRotateXYZ(float, float, float);
    bool ToEulerAnglesXYZ(float &, float &, float &) const;
    matrix3 &MakeGenRotate(vector3 const &, float);
    matrix3 &MakeRotationToFace(vector3 const &, vector3 const &);
    matrix3 &Scale(vector3 &);
    matrix3 &Scale(float);
    matrix3 &PutVector3InRow(__int32, vector3 const &);
    matrix3 &PutVector3InCol(__int32, vector3 const &);
    vector3 GetVector3FromRow(__int32) const;
    vector3 GetVector3FromCol(__int32) const;
    matrix3 &Transpose();
    float determinant();
    void invert();
    char *PrintToBuffer(char *);
    static matrix3 const zero;
    static matrix3 const ident;
};
static_assert(sizeof(matrix3) == 36, "Invalid matrix3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MATRIX3_H__
#endif

#if 0
#ifndef __MATRIX4_H__
#define __MATRIX4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix4
{
public:
    union
    {
        float e[16]; // 0x0
        float e2[4][4]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m03; // 0xC
            float m10; // 0x10
            float m11; // 0x14
            float m12; // 0x18
            float m13; // 0x1C
            float m20; // 0x20
            float m21; // 0x24
            float m22; // 0x28
            float m23; // 0x2C
            float m30; // 0x30
            float m31; // 0x34
            float m32; // 0x38
            float m33; // 0x3C
        };
        vector4 row[4]; // 0x0
    };
    matrix4(matrix3 const &, vector3 const &, vector3 const &);
    matrix4(matrix3 const &, vector3 const &);
    matrix4(matrix3 const &);
    matrix4(vector3 const &, vector3 const &, vector3 const &);
    matrix4(vector4 const &, vector4 const &, vector4 const &, vector4 const &);
    _inline matrix4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);
    _inline matrix4();
    _inline float operator[](__int32) const;
    _inline float &operator[](__int32);
    matrix3 operator class matrix3() const;
    vector4 operator*(vector4 const &) const;
    _inline matrix4 operator*(matrix4 const &) const;
    matrix4 &operator*=(matrix4 const &);
    _inline void identity();
    matrix4 &NormalizeColumns4();
    matrix4 &NormalizeRows4();
    matrix4 &NormalizeColumns3();
    matrix4 &NormalizeRows3();
    matrix4 &Scale(vector3 const &);
    matrix4 &Scale(float);
    matrix4 &Scale4x4(float);
    matrix4 &PutVector4InRow(__int32, vector4 const &);
    matrix4 &PutVector4InCol(__int32, vector4 const &);
    matrix4 &PutVector3InRow(__int32, vector3 const &);
    matrix4 &PutVector3InCol(__int32, vector3 const &);
    vector4 GetVector4FromRow(__int32) const;
    vector4 GetVector4FromCol(__int32) const;
    vector3 GetVector3FromRow(__int32) const;
    vector3 GetVector3FromCol(__int32) const;
    matrix4 &Transpose();
    matrix4 &Invert();
    char *PrintToBuffer(char *);
    static matrix4 const zero;
    static matrix4 const ident;
};
static_assert(sizeof(matrix4) == 64, "Invalid matrix4 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float &matrix4::operator[](__int32) // 0x1000D9B8
{
    mangled_assert("??Amatrix4@@QAEAAMH@Z");
    todo("implement");
}

_inline float matrix4::operator[](__int32) const // 0x10015D1E
{
    mangled_assert("??Amatrix4@@QBEMH@Z");
    todo("implement");
}

_inline matrix4::matrix4() // 0x1000D98C
{
    mangled_assert("??0matrix4@@QAE@XZ");
    todo("implement");
}

_inline matrix4::matrix4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float) // 0x10015C76
{
    mangled_assert("??0matrix4@@QAE@MMMMMMMMMMMMMMMM@Z");
    todo("implement");
}

_inline matrix4 matrix4::operator*(matrix4 const &) const // 0x1000D9EC
{
    mangled_assert("??Dmatrix4@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline void matrix4::identity() // 0x1000DC3C
{
    mangled_assert("?identity@matrix4@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MATRIX4_H__
/* combined */
#ifndef __MATRIX4_H__
#define __MATRIX4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix4
{
public:
    union
    {
        float e[16]; // 0x0
        float e2[4][4]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m03; // 0xC
            float m10; // 0x10
            float m11; // 0x14
            float m12; // 0x18
            float m13; // 0x1C
            float m20; // 0x20
            float m21; // 0x24
            float m22; // 0x28
            float m23; // 0x2C
            float m30; // 0x30
            float m31; // 0x34
            float m32; // 0x38
            float m33; // 0x3C
        };
        vector4 row[4]; // 0x0
    };
    _inline matrix4(matrix3 const &, vector3 const &, vector3 const &);
    _inline matrix4(matrix3 const &, vector3 const &);
    _inline matrix4(matrix3 const &);
    matrix4(vector3 const &, vector3 const &, vector3 const &);
    matrix4(vector4 const &, vector4 const &, vector4 const &, vector4 const &);
    _inline matrix4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);
    _inline matrix4();
    _inline float operator[](__int32) const;
    _inline float &operator[](__int32);
    _inline matrix3 operator class matrix3() const;
    _inline vector4 operator*(vector4 const &) const;
    _inline matrix4 operator*(matrix4 const &) const;
    _inline matrix4 &operator*=(matrix4 const &);
    _inline void identity();
    matrix4 &NormalizeColumns4();
    matrix4 &NormalizeRows4();
    matrix4 &NormalizeColumns3();
    matrix4 &NormalizeRows3();
    matrix4 &Scale(vector3 const &);
    matrix4 &Scale(float);
    matrix4 &Scale4x4(float);
    matrix4 &PutVector4InRow(__int32, vector4 const &);
    matrix4 &PutVector4InCol(__int32, vector4 const &);
    matrix4 &PutVector3InRow(__int32, vector3 const &);
    matrix4 &PutVector3InCol(__int32, vector3 const &);
    _inline vector4 GetVector4FromRow(__int32) const;
    vector4 GetVector4FromCol(__int32) const;
    _inline vector3 GetVector3FromRow(__int32) const;
    _inline vector3 GetVector3FromCol(__int32) const;
    matrix4 &Transpose();
    matrix4 &Invert();
    char *PrintToBuffer(char *);
    static matrix4 const zero;
    static matrix4 const ident;
};
static_assert(sizeof(matrix4) == 64, "Invalid matrix4 size");

/* ---------- prototypes */

extern _inline void matrix4FastMultiply(matrix4 &r, matrix4 const &src1, matrix4 const &src2);
extern _inline vector4 operator*(vector4 const &v, matrix4 const &m);
extern _inline vector4 &operator*=(vector4 &v, matrix4 const &m);
extern _inline vector3 operator*(vector3 const &v, matrix4 const &m);

/* ---------- globals */

/* ---------- public code */

_inline float &matrix4::operator[](__int32) // 0x65D2A4
{
    mangled_assert("??Amatrix4@@QAEAAMH@Z");
    todo("implement");
}

_inline float matrix4::operator[](__int32) const // 0x65D2AE
{
    mangled_assert("??Amatrix4@@QBEMH@Z");
    todo("implement");
}

_inline matrix4::matrix4() // 0x43F9F9
{
    mangled_assert("??0matrix4@@QAE@XZ");
    todo("implement");
}

_inline matrix4::matrix4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float) // 0x65D1FC
{
    mangled_assert("??0matrix4@@QAE@MMMMMMMMMMMMMMMM@Z");
    todo("implement");
}

_inline matrix4::matrix4(matrix3 const &) // 0x43F99D
{
    mangled_assert("??0matrix4@@QAE@ABVmatrix3@@@Z");
    todo("implement");
}

_inline matrix4::matrix4(matrix3 const &, vector3 const &) // 0x492CEC
{
    mangled_assert("??0matrix4@@QAE@ABVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

_inline matrix4::matrix4(matrix3 const &, vector3 const &, vector3 const &) // 0x4E1D15
{
    mangled_assert("??0matrix4@@QAE@ABVmatrix3@@ABVvector3@@1@Z");
    todo("implement");
}

_inline matrix3 matrix4::operator matrix3() const // 0x4BE2D7
{
    mangled_assert("??Bmatrix4@@QBE?AVmatrix3@@XZ");
    todo("implement");
}

_inline void matrix4FastMultiply(matrix4 &r, matrix4 const &src1, matrix4 const &src2) // 0x5D3759
{
    mangled_assert("?matrix4FastMultiply@@YGXAAVmatrix4@@ABV1@1@Z");
    todo("implement");
}

_inline matrix4 matrix4::operator*(matrix4 const &) const // 0x43FE21
{
    mangled_assert("??Dmatrix4@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline matrix4 &matrix4::operator*=(matrix4 const &) // 0x48A4D8
{
    mangled_assert("??Xmatrix4@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline vector4 matrix4::operator*(vector4 const &) const // 0x603DF8
{
    mangled_assert("??Dmatrix4@@QBE?AVvector4@@ABV1@@Z");
    todo("implement");
}

_inline vector4 operator*(vector4 const &v, matrix4 const &m) // 0x44A2D0
{
    mangled_assert("??D@YG?AVvector4@@ABV0@ABVmatrix4@@@Z");
    todo("implement");
}

_inline vector4 &operator*=(vector4 &v, matrix4 const &m) // 0x440022
{
    mangled_assert("??X@YGAAVvector4@@AAV0@ABVmatrix4@@@Z");
    todo("implement");
}

_inline vector3 operator*(vector3 const &v, matrix4 const &m) // 0x43FD3F
{
    mangled_assert("??D@YG?AVvector3@@ABV0@ABVmatrix4@@@Z");
    todo("implement");
}

_inline void matrix4::identity() // 0x443857
{
    mangled_assert("?identity@matrix4@@QAEXXZ");
    todo("implement");
}

_inline vector4 matrix4::GetVector4FromRow(__int32) const // 0x4C3E54
{
    mangled_assert("?GetVector4FromRow@matrix4@@QBE?AVvector4@@H@Z");
    todo("implement");
}

_inline vector3 matrix4::GetVector3FromRow(__int32) const // 0x4BE41E
{
    mangled_assert("?GetVector3FromRow@matrix4@@QBE?AVvector3@@H@Z");
    todo("implement");
}

_inline vector3 matrix4::GetVector3FromCol(__int32) const // 0x666AD7
{
    mangled_assert("?GetVector3FromCol@matrix4@@QBE?AVvector3@@H@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MATRIX4_H__
/* combined */
#ifndef __MATRIX4_H__
#define __MATRIX4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix4
{
public:
    union
    {
        float e[16]; // 0x0
        float e2[4][4]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m03; // 0xC
            float m10; // 0x10
            float m11; // 0x14
            float m12; // 0x18
            float m13; // 0x1C
            float m20; // 0x20
            float m21; // 0x24
            float m22; // 0x28
            float m23; // 0x2C
            float m30; // 0x30
            float m31; // 0x34
            float m32; // 0x38
            float m33; // 0x3C
        };
        vector4 row[4]; // 0x0
    };
    matrix4(matrix3 const &, vector3 const &, vector3 const &);
    matrix4(matrix3 const &, vector3 const &);
    matrix4(matrix3 const &);
    matrix4(vector3 const &, vector3 const &, vector3 const &);
    matrix4(vector4 const &, vector4 const &, vector4 const &, vector4 const &);
    matrix4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);
    matrix4();
    float operator[](__int32) const;
    float &operator[](__int32);
    matrix3 operator class matrix3() const;
    vector4 operator*(vector4 const &) const;
    matrix4 operator*(matrix4 const &) const;
    matrix4 &operator*=(matrix4 const &);
    void identity();
    matrix4 &NormalizeColumns4();
    matrix4 &NormalizeRows4();
    matrix4 &NormalizeColumns3();
    matrix4 &NormalizeRows3();
    matrix4 &Scale(vector3 const &);
    matrix4 &Scale(float);
    matrix4 &Scale4x4(float);
    matrix4 &PutVector4InRow(__int32, vector4 const &);
    matrix4 &PutVector4InCol(__int32, vector4 const &);
    matrix4 &PutVector3InRow(__int32, vector3 const &);
    matrix4 &PutVector3InCol(__int32, vector3 const &);
    vector4 GetVector4FromRow(__int32) const;
    vector4 GetVector4FromCol(__int32) const;
    vector3 GetVector3FromRow(__int32) const;
    vector3 GetVector3FromCol(__int32) const;
    matrix4 &Transpose();
    matrix4 &Invert();
    char *PrintToBuffer(char *);
    static matrix4 const zero;
    static matrix4 const ident;
};
static_assert(sizeof(matrix4) == 64, "Invalid matrix4 size");

/* ---------- prototypes */

extern _inline void matrix4FastMultiply(matrix4 &r, matrix4 const &src1, matrix4 const &src2);

/* ---------- globals */

/* ---------- public code */

_inline void matrix4FastMultiply(matrix4 &r, matrix4 const &src1, matrix4 const &src2) // 0x100015E3
{
    mangled_assert("?matrix4FastMultiply@@YGXAAVmatrix4@@ABV1@1@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MATRIX4_H__
/* combined */
#ifndef __MATRIX4_H__
#define __MATRIX4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class matrix4
{
public:
    union
    {
        float e[16]; // 0x0
        float e2[4][4]; // 0x0
        struct
        {
            float m00; // 0x0
            float m01; // 0x4
            float m02; // 0x8
            float m03; // 0xC
            float m10; // 0x10
            float m11; // 0x14
            float m12; // 0x18
            float m13; // 0x1C
            float m20; // 0x20
            float m21; // 0x24
            float m22; // 0x28
            float m23; // 0x2C
            float m30; // 0x30
            float m31; // 0x34
            float m32; // 0x38
            float m33; // 0x3C
        };
        vector4 row[4]; // 0x0
    };
    matrix4(matrix3 const &, vector3 const &, vector3 const &);
    matrix4(matrix3 const &, vector3 const &);
    _inline matrix4(matrix3 const &);
    matrix4(vector3 const &, vector3 const &, vector3 const &);
    matrix4(vector4 const &, vector4 const &, vector4 const &, vector4 const &);
    matrix4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);
    _inline matrix4();
    float operator[](__int32) const;
    _inline float &operator[](__int32);
    _inline matrix3 operator class matrix3() const;
    vector4 operator*(vector4 const &) const;
    _inline matrix4 operator*(matrix4 const &) const;
    matrix4 &operator*=(matrix4 const &);
    _inline void identity();
    matrix4 &NormalizeColumns4();
    matrix4 &NormalizeRows4();
    matrix4 &NormalizeColumns3();
    matrix4 &NormalizeRows3();
    matrix4 &Scale(vector3 const &);
    matrix4 &Scale(float);
    matrix4 &Scale4x4(float);
    matrix4 &PutVector4InRow(__int32, vector4 const &);
    matrix4 &PutVector4InCol(__int32, vector4 const &);
    matrix4 &PutVector3InRow(__int32, vector3 const &);
    matrix4 &PutVector3InCol(__int32, vector3 const &);
    vector4 GetVector4FromRow(__int32) const;
    vector4 GetVector4FromCol(__int32) const;
    vector3 GetVector3FromRow(__int32) const;
    vector3 GetVector3FromCol(__int32) const;
    matrix4 &Transpose();
    matrix4 &Invert();
    char *PrintToBuffer(char *);
    static matrix4 const zero;
    static matrix4 const ident;
};
static_assert(sizeof(matrix4) == 64, "Invalid matrix4 size");

/* ---------- prototypes */

extern _inline vector4 operator*(vector4 const &v, matrix4 const &m);
extern _inline vector4 &operator*=(vector4 &v, matrix4 const &m);
extern _inline vector3 operator*(vector3 const &v, matrix4 const &m);

/* ---------- globals */

/* ---------- public code */

_inline float &matrix4::operator[](__int32) // 0x10066140
{
    mangled_assert("??Amatrix4@@QAEAAMH@Z");
    todo("implement");
}

_inline matrix4::matrix4() // 0x1000D820
{
    mangled_assert("??0matrix4@@QAE@XZ");
    todo("implement");
}

_inline matrix4::matrix4(matrix3 const &) // 0x100951E0
{
    mangled_assert("??0matrix4@@QAE@ABVmatrix3@@@Z");
    todo("implement");
}

_inline matrix3 matrix4::operator matrix3() const // 0x1005A110
{
    mangled_assert("??Bmatrix4@@QBE?AVmatrix3@@XZ");
    todo("implement");
}

_inline matrix4 matrix4::operator*(matrix4 const &) const // 0x10095380
{
    mangled_assert("??Dmatrix4@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector4 operator*(vector4 const &v, matrix4 const &m) // 0x1003ED20
{
    mangled_assert("??D@YG?AVvector4@@ABV0@ABVmatrix4@@@Z");
    todo("implement");
}

_inline vector4 &operator*=(vector4 &v, matrix4 const &m) // 0x10027B90
{
    mangled_assert("??X@YGAAVvector4@@AAV0@ABVmatrix4@@@Z");
    todo("implement");
}

_inline vector3 operator*(vector3 const &v, matrix4 const &m) // 0x10027A90
{
    mangled_assert("??D@YG?AVvector3@@ABV0@ABVmatrix4@@@Z");
    todo("implement");
}

_inline void matrix4::identity() // 0x10019580
{
    mangled_assert("?identity@matrix4@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MATRIX4_H__
#endif

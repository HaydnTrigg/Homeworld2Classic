#if 0
#ifndef __VECTOR4_H__
#define __VECTOR4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector4
{
public:
    union
    {
        float e[4]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
            float w; // 0xC
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
            float a; // 0xC
        };
    };
    _inline vector4(float, float, float, float);
    _inline vector4();
    void set(float, float, float, float);
    _inline float operator[](__int32) const;
    _inline float &operator[](__int32);
    bool operator==(vector4 const &);
    _inline bool operator!=(vector4 const &);
    vector4 operator-(vector4 const &) const;
    vector4 operator-() const;
    bool operator!() const;
    vector4 operator*(float) const;
    _inline vector4 &operator*=(float);
    vector4 operator/(float) const;
    vector4 &operator/=(float);
    vector4 operator+(vector4 const &) const;
    vector4 &operator+=(vector4 const &);
    vector4 &operator-=(vector4 const &);
    float operator%(vector4 const &) const;
    float LengthSqr() const;
    _inline float Length() const;
    float YValue() const;
    _inline void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void Homogenize();
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector4 const &, vector4 const &, float);
    char *PrintToBuffer(char *) const;
    static vector4 const zero;
};
static_assert(sizeof(vector4) == 16, "Invalid vector4 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float &_sub_1000D9DF(vector4 *const, __int32);
_inline float &vector4::operator[](__int32) // 0x1000D9DF
{
    mangled_assert("??Avector4@@QAEAAMH@Z");
    todo("implement");
    float & __result = _sub_1000D9DF(this, arg);
    return __result;
}

_extern float _sub_1000D4DA(vector4 const *const, __int32);
_inline float vector4::operator[](__int32) const // 0x1000D4DA
{
    mangled_assert("??Avector4@@QBEMH@Z");
    todo("implement");
    float __result = _sub_1000D4DA(this, arg);
    return __result;
}

_extern bool _sub_1000BE5C(vector4 *const, vector4 const &);
_inline bool vector4::operator!=(vector4 const &) // 0x1000BE5C
{
    mangled_assert("??9vector4@@QAE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_1000BE5C(this, arg);
    return __result;
}

_extern _sub_10003AC2(vector4 *const);
_inline vector4::vector4() // 0x10003AC2
{
    mangled_assert("??0vector4@@QAE@XZ");
    todo("implement");
    _sub_10003AC2(this);
}

_extern _sub_1000D4AA(vector4 *const, float, float, float, float);
_inline vector4::vector4(float, float, float, float) // 0x1000D4AA
{
    mangled_assert("??0vector4@@QAE@MMMM@Z");
    todo("implement");
    _sub_1000D4AA(this, arg, arg, arg, arg);
}

_extern vector4 &_sub_10015D28(vector4 *const, float);
_inline vector4 &vector4::operator*=(float) // 0x10015D28
{
    mangled_assert("??Xvector4@@QAEAAV0@M@Z");
    todo("implement");
    vector4 & __result = _sub_10015D28(this, arg);
    return __result;
}

_extern float _sub_10015D77(vector4 const *const);
_inline float vector4::Length() const // 0x10015D77
{
    mangled_assert("?Length@vector4@@QBEMXZ");
    todo("implement");
    float __result = _sub_10015D77(this);
    return __result;
}

_extern void _sub_10015DD2(vector4 *const);
_inline void vector4::Normalize() // 0x10015DD2
{
    mangled_assert("?Normalize@vector4@@QAEXXZ");
    todo("implement");
    _sub_10015DD2(this);
}

/* ---------- private code */

#endif // __VECTOR4_H__
/* combined */
#ifndef __VECTOR4_H__
#define __VECTOR4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector4
{
public:
    union
    {
        float e[4]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
            float w; // 0xC
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
            float a; // 0xC
        };
    };
    _inline vector4(float, float, float, float);
    _inline vector4();
    _inline void set(float, float, float, float);
    _inline float operator[](__int32) const;
    _inline float &operator[](__int32);
    bool operator==(vector4 const &);
    _inline bool operator!=(vector4 const &);
    _inline vector4 operator-(vector4 const &) const;
    vector4 operator-() const;
    bool operator!() const;
    _inline vector4 operator*(float) const;
    _inline vector4 &operator*=(float);
    _inline vector4 operator/(float) const;
    vector4 &operator/=(float);
    _inline vector4 operator+(vector4 const &) const;
    _inline vector4 &operator+=(vector4 const &);
    _inline vector4 &operator-=(vector4 const &);
    float operator%(vector4 const &) const;
    float LengthSqr() const;
    _inline float Length() const;
    float YValue() const;
    _inline void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void Homogenize();
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector4 const &, vector4 const &, float);
    char *PrintToBuffer(char *) const;
    static vector4 const zero;
};
static_assert(sizeof(vector4) == 16, "Invalid vector4 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float &_sub_486F7F(vector4 *const, __int32);
_inline float &vector4::operator[](__int32) // 0x486F7F
{
    mangled_assert("??Avector4@@QAEAAMH@Z");
    todo("implement");
    float & __result = _sub_486F7F(this, arg);
    return __result;
}

_extern float _sub_68AF8B(vector4 const *const, __int32);
_inline float vector4::operator[](__int32) const // 0x68AF8B
{
    mangled_assert("??Avector4@@QBEMH@Z");
    todo("implement");
    float __result = _sub_68AF8B(this, arg);
    return __result;
}

_extern bool _sub_522A54(vector4 *const, vector4 const &);
_inline bool vector4::operator!=(vector4 const &) // 0x522A54
{
    mangled_assert("??9vector4@@QAE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_522A54(this, arg);
    return __result;
}

_extern _sub_43FA57(vector4 *const);
_inline vector4::vector4() // 0x43FA57
{
    mangled_assert("??0vector4@@QAE@XZ");
    todo("implement");
    _sub_43FA57(this);
}

_extern _sub_43FA27(vector4 *const, float, float, float, float);
_inline vector4::vector4(float, float, float, float) // 0x43FA27
{
    mangled_assert("??0vector4@@QAE@MMMM@Z");
    todo("implement");
    _sub_43FA27(this, arg, arg, arg, arg);
}

_extern void _sub_455866(vector4 *const, float, float, float, float);
_inline void vector4::set(float, float, float, float) // 0x455866
{
    mangled_assert("?set@vector4@@QAEXMMMM@Z");
    todo("implement");
    _sub_455866(this, arg, arg, arg, arg);
}

_extern vector4 _sub_45A646(vector4 const *const, float);
_inline vector4 vector4::operator*(float) const // 0x45A646
{
    mangled_assert("??Dvector4@@QBE?AV0@M@Z");
    todo("implement");
    vector4 __result = _sub_45A646(this, arg);
    return __result;
}

_extern vector4 &_sub_60DE17(vector4 *const, float);
_inline vector4 &vector4::operator*=(float) // 0x60DE17
{
    mangled_assert("??Xvector4@@QAEAAV0@M@Z");
    todo("implement");
    vector4 & __result = _sub_60DE17(this, arg);
    return __result;
}

_extern vector4 _sub_442BF9(vector4 const *const, float);
_inline vector4 vector4::operator/(float) const // 0x442BF9
{
    mangled_assert("??Kvector4@@QBE?AV0@M@Z");
    todo("implement");
    vector4 __result = _sub_442BF9(this, arg);
    return __result;
}

_extern vector4 _sub_45A71F(vector4 const *const, vector4 const &);
_inline vector4 vector4::operator+(vector4 const &) const // 0x45A71F
{
    mangled_assert("??Hvector4@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector4 __result = _sub_45A71F(this, arg);
    return __result;
}

_extern vector4 &_sub_56C36A(vector4 *const, vector4 const &);
_inline vector4 &vector4::operator+=(vector4 const &) // 0x56C36A
{
    mangled_assert("??Yvector4@@QAEAAV0@ABV0@@Z");
    todo("implement");
    vector4 & __result = _sub_56C36A(this, arg);
    return __result;
}

_extern vector4 _sub_45A6DB(vector4 const *const, vector4 const &);
_inline vector4 vector4::operator-(vector4 const &) const // 0x45A6DB
{
    mangled_assert("??Gvector4@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector4 __result = _sub_45A6DB(this, arg);
    return __result;
}

_extern vector4 &_sub_6113C3(vector4 *const, vector4 const &);
_inline vector4 &vector4::operator-=(vector4 const &) // 0x6113C3
{
    mangled_assert("??Zvector4@@QAEAAV0@ABV0@@Z");
    todo("implement");
    vector4 & __result = _sub_6113C3(this, arg);
    return __result;
}

_extern float _sub_65D2C6(vector4 const *const);
_inline float vector4::Length() const // 0x65D2C6
{
    mangled_assert("?Length@vector4@@QBEMXZ");
    todo("implement");
    float __result = _sub_65D2C6(this);
    return __result;
}

_extern void _sub_65D321(vector4 *const);
_inline void vector4::Normalize() // 0x65D321
{
    mangled_assert("?Normalize@vector4@@QAEXXZ");
    todo("implement");
    _sub_65D321(this);
}

/* ---------- private code */

#endif // __VECTOR4_H__
/* combined */
#ifndef __VECTOR4_H__
#define __VECTOR4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector4
{
public:
    union
    {
        float e[4]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
            float w; // 0xC
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
            float a; // 0xC
        };
    };
    vector4(float, float, float, float);
    vector4();
    void set(float, float, float, float);
    float operator[](__int32) const;
    float &operator[](__int32);
    bool operator==(vector4 const &);
    bool operator!=(vector4 const &);
    vector4 operator-(vector4 const &) const;
    vector4 operator-() const;
    bool operator!() const;
    vector4 operator*(float) const;
    vector4 &operator*=(float);
    vector4 operator/(float) const;
    vector4 &operator/=(float);
    vector4 operator+(vector4 const &) const;
    vector4 &operator+=(vector4 const &);
    vector4 &operator-=(vector4 const &);
    float operator%(vector4 const &) const;
    float LengthSqr() const;
    float Length() const;
    float YValue() const;
    void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void Homogenize();
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector4 const &, vector4 const &, float);
    char *PrintToBuffer(char *) const;
    static vector4 const zero;
};
static_assert(sizeof(vector4) == 16, "Invalid vector4 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VECTOR4_H__
/* combined */
#ifndef __VECTOR4_H__
#define __VECTOR4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector4
{
public:
    union
    {
        float e[4]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
            float w; // 0xC
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
            float a; // 0xC
        };
    };
    _inline vector4(float, float, float, float);
    _inline vector4();
    _inline void set(float, float, float, float);
    _inline float operator[](__int32) const;
    _inline float &operator[](__int32);
    bool operator==(vector4 const &);
    bool operator!=(vector4 const &);
    _inline vector4 operator-(vector4 const &) const;
    vector4 operator-() const;
    bool operator!() const;
    vector4 operator*(float) const;
    _inline vector4 &operator*=(float);
    vector4 operator/(float) const;
    _inline vector4 &operator/=(float);
    vector4 operator+(vector4 const &) const;
    _inline vector4 &operator+=(vector4 const &);
    vector4 &operator-=(vector4 const &);
    float operator%(vector4 const &) const;
    float LengthSqr() const;
    _inline float Length() const;
    float YValue() const;
    _inline void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void Homogenize();
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector4 const &, vector4 const &, float);
    char *PrintToBuffer(char *) const;
    static vector4 const zero;
};
static_assert(sizeof(vector4) == 16, "Invalid vector4 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float &_sub_10011200(vector4 *const, __int32);
_inline float &vector4::operator[](__int32) // 0x10011200
{
    mangled_assert("??Avector4@@QAEAAMH@Z");
    todo("implement");
    float & __result = _sub_10011200(this, arg);
    return __result;
}

_extern float _sub_1004BDC0(vector4 const *const, __int32);
_inline float vector4::operator[](__int32) const // 0x1004BDC0
{
    mangled_assert("??Avector4@@QBEMH@Z");
    todo("implement");
    float __result = _sub_1004BDC0(this, arg);
    return __result;
}

_extern _sub_1000D950(vector4 *const);
_inline vector4::vector4() // 0x1000D950
{
    mangled_assert("??0vector4@@QAE@XZ");
    todo("implement");
    _sub_1000D950(this);
}

_extern _sub_1000D920(vector4 *const, float, float, float, float);
_inline vector4::vector4(float, float, float, float) // 0x1000D920
{
    mangled_assert("??0vector4@@QAE@MMMM@Z");
    todo("implement");
    _sub_1000D920(this, arg, arg, arg, arg);
}

_extern void _sub_1004F130(vector4 *const, float, float, float, float);
_inline void vector4::set(float, float, float, float) // 0x1004F130
{
    mangled_assert("?set@vector4@@QAEXMMMM@Z");
    todo("implement");
    _sub_1004F130(this, arg, arg, arg, arg);
}

_extern vector4 &_sub_100AEB40(vector4 *const, float);
_inline vector4 &vector4::operator*=(float) // 0x100AEB40
{
    mangled_assert("??Xvector4@@QAEAAV0@M@Z");
    todo("implement");
    vector4 & __result = _sub_100AEB40(this, arg);
    return __result;
}

_extern vector4 &_sub_10066340(vector4 *const, float);
_inline vector4 &vector4::operator/=(float) // 0x10066340
{
    mangled_assert("??_0vector4@@QAEAAV0@M@Z");
    todo("implement");
    vector4 & __result = _sub_10066340(this, arg);
    return __result;
}

_extern vector4 &_sub_100662C0(vector4 *const, vector4 const &);
_inline vector4 &vector4::operator+=(vector4 const &) // 0x100662C0
{
    mangled_assert("??Yvector4@@QAEAAV0@ABV0@@Z");
    todo("implement");
    vector4 & __result = _sub_100662C0(this, arg);
    return __result;
}

_extern vector4 _sub_100117E0(vector4 const *const, vector4 const &);
_inline vector4 vector4::operator-(vector4 const &) const // 0x100117E0
{
    mangled_assert("??Gvector4@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector4 __result = _sub_100117E0(this, arg);
    return __result;
}

_extern float _sub_100AEB90(vector4 const *const);
_inline float vector4::Length() const // 0x100AEB90
{
    mangled_assert("?Length@vector4@@QBEMXZ");
    todo("implement");
    float __result = _sub_100AEB90(this);
    return __result;
}

_extern void _sub_100AEBF0(vector4 *const);
_inline void vector4::Normalize() // 0x100AEBF0
{
    mangled_assert("?Normalize@vector4@@QAEXXZ");
    todo("implement");
    _sub_100AEBF0(this);
}

/* ---------- private code */

#endif // __VECTOR4_H__
/* combined */
#ifndef __VECTOR4_H__
#define __VECTOR4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector4
{
public:
    union
    {
        float e[4]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
            float w; // 0xC
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
            float a; // 0xC
        };
    };
    vector4(float, float, float, float);
    vector4();
    void set(float, float, float, float);
    float operator[](__int32) const;
    float &operator[](__int32);
    bool operator==(vector4 const &);
    bool operator!=(vector4 const &);
    vector4 operator-(vector4 const &) const;
    vector4 operator-() const;
    bool operator!() const;
    vector4 operator*(float) const;
    vector4 &operator*=(float);
    vector4 operator/(float) const;
    vector4 &operator/=(float);
    vector4 operator+(vector4 const &) const;
    vector4 &operator+=(vector4 const &);
    vector4 &operator-=(vector4 const &);
    float operator%(vector4 const &) const;
    float LengthSqr() const;
    float Length() const;
    float YValue() const;
    void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void Homogenize();
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector4 const &, vector4 const &, float);
    char *PrintToBuffer(char *) const;
    static vector4 const zero;
};
static_assert(sizeof(vector4) == 16, "Invalid vector4 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VECTOR4_H__
/* combined */
#ifndef __VECTOR4_H__
#define __VECTOR4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector4
{
public:
    union
    {
        float e[4]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
            float w; // 0xC
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
            float a; // 0xC
        };
    };
    vector4(float, float, float, float);
    vector4();
    void set(float, float, float, float);
    float operator[](__int32) const;
    float &operator[](__int32);
    bool operator==(vector4 const &);
    bool operator!=(vector4 const &);
    vector4 operator-(vector4 const &) const;
    vector4 operator-() const;
    bool operator!() const;
    vector4 operator*(float) const;
    vector4 &operator*=(float);
    vector4 operator/(float) const;
    vector4 &operator/=(float);
    vector4 operator+(vector4 const &) const;
    vector4 &operator+=(vector4 const &);
    vector4 &operator-=(vector4 const &);
    float operator%(vector4 const &) const;
    float LengthSqr() const;
    float Length() const;
    float YValue() const;
    void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void Homogenize();
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector4 const &, vector4 const &, float);
    char *PrintToBuffer(char *) const;
    static vector4 const zero;
};
static_assert(sizeof(vector4) == 16, "Invalid vector4 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VECTOR4_H__
/* combined */
#ifndef __VECTOR4_H__
#define __VECTOR4_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector4
{
public:
    union
    {
        float e[4]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
            float w; // 0xC
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
            float a; // 0xC
        };
    };
    vector4(float, float, float, float);
    vector4();
    void set(float, float, float, float);
    float operator[](__int32) const;
    float &operator[](__int32);
    bool operator==(vector4 const &);
    bool operator!=(vector4 const &);
    vector4 operator-(vector4 const &) const;
    vector4 operator-() const;
    bool operator!() const;
    vector4 operator*(float) const;
    vector4 &operator*=(float);
    vector4 operator/(float) const;
    vector4 &operator/=(float);
    vector4 operator+(vector4 const &) const;
    vector4 &operator+=(vector4 const &);
    vector4 &operator-=(vector4 const &);
    float operator%(vector4 const &) const;
    float LengthSqr() const;
    float Length() const;
    float YValue() const;
    void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void Homogenize();
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector4 const &, vector4 const &, float);
    char *PrintToBuffer(char *) const;
    static vector4 const zero;
};
static_assert(sizeof(vector4) == 16, "Invalid vector4 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VECTOR4_H__
#endif

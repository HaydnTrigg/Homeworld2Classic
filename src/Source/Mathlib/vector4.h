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

_inline float &vector4::operator[](__int32) // 0x1000D9DF
{
    mangled_assert("??Avector4@@QAEAAMH@Z");
    todo("implement");
}

_inline float vector4::operator[](__int32) const // 0x1000D4DA
{
    mangled_assert("??Avector4@@QBEMH@Z");
    todo("implement");
}

_inline bool vector4::operator!=(vector4 const &) // 0x1000BE5C
{
    mangled_assert("??9vector4@@QAE_NABV0@@Z");
    todo("implement");
}

_inline vector4::vector4() // 0x10003AC2
{
    mangled_assert("??0vector4@@QAE@XZ");
    todo("implement");
}

_inline vector4::vector4(float, float, float, float) // 0x1000D4AA
{
    mangled_assert("??0vector4@@QAE@MMMM@Z");
    todo("implement");
}

_inline vector4 &vector4::operator*=(float) // 0x10015D28
{
    mangled_assert("??Xvector4@@QAEAAV0@M@Z");
    todo("implement");
}

_inline float vector4::Length() const // 0x10015D77
{
    mangled_assert("?Length@vector4@@QBEMXZ");
    todo("implement");
}

_inline void vector4::Normalize() // 0x10015DD2
{
    mangled_assert("?Normalize@vector4@@QAEXXZ");
    todo("implement");
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

_inline float &vector4::operator[](__int32) // 0x486F7F
{
    mangled_assert("??Avector4@@QAEAAMH@Z");
    todo("implement");
}

_inline float vector4::operator[](__int32) const // 0x68AF8B
{
    mangled_assert("??Avector4@@QBEMH@Z");
    todo("implement");
}

_inline bool vector4::operator!=(vector4 const &) // 0x522A54
{
    mangled_assert("??9vector4@@QAE_NABV0@@Z");
    todo("implement");
}

_inline vector4::vector4() // 0x43FA57
{
    mangled_assert("??0vector4@@QAE@XZ");
    todo("implement");
}

_inline vector4::vector4(float, float, float, float) // 0x43FA27
{
    mangled_assert("??0vector4@@QAE@MMMM@Z");
    todo("implement");
}

_inline void vector4::set(float, float, float, float) // 0x455866
{
    mangled_assert("?set@vector4@@QAEXMMMM@Z");
    todo("implement");
}

_inline vector4 vector4::operator*(float) const // 0x45A646
{
    mangled_assert("??Dvector4@@QBE?AV0@M@Z");
    todo("implement");
}

_inline vector4 &vector4::operator*=(float) // 0x60DE17
{
    mangled_assert("??Xvector4@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector4 vector4::operator/(float) const // 0x442BF9
{
    mangled_assert("??Kvector4@@QBE?AV0@M@Z");
    todo("implement");
}

_inline vector4 vector4::operator+(vector4 const &) const // 0x45A71F
{
    mangled_assert("??Hvector4@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector4 &vector4::operator+=(vector4 const &) // 0x56C36A
{
    mangled_assert("??Yvector4@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline vector4 vector4::operator-(vector4 const &) const // 0x45A6DB
{
    mangled_assert("??Gvector4@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector4 &vector4::operator-=(vector4 const &) // 0x6113C3
{
    mangled_assert("??Zvector4@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline float vector4::Length() const // 0x65D2C6
{
    mangled_assert("?Length@vector4@@QBEMXZ");
    todo("implement");
}

_inline void vector4::Normalize() // 0x65D321
{
    mangled_assert("?Normalize@vector4@@QAEXXZ");
    todo("implement");
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

_inline float &vector4::operator[](__int32) // 0x10011200
{
    mangled_assert("??Avector4@@QAEAAMH@Z");
    todo("implement");
}

_inline float vector4::operator[](__int32) const // 0x1004BDC0
{
    mangled_assert("??Avector4@@QBEMH@Z");
    todo("implement");
}

_inline vector4::vector4() // 0x1000D950
{
    mangled_assert("??0vector4@@QAE@XZ");
    todo("implement");
}

_inline vector4::vector4(float, float, float, float) // 0x1000D920
{
    mangled_assert("??0vector4@@QAE@MMMM@Z");
    todo("implement");
}

_inline void vector4::set(float, float, float, float) // 0x1004F130
{
    mangled_assert("?set@vector4@@QAEXMMMM@Z");
    todo("implement");
}

_inline vector4 &vector4::operator*=(float) // 0x100AEB40
{
    mangled_assert("??Xvector4@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector4 &vector4::operator/=(float) // 0x10066340
{
    mangled_assert("??_0vector4@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector4 &vector4::operator+=(vector4 const &) // 0x100662C0
{
    mangled_assert("??Yvector4@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline vector4 vector4::operator-(vector4 const &) const // 0x100117E0
{
    mangled_assert("??Gvector4@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline float vector4::Length() const // 0x100AEB90
{
    mangled_assert("?Length@vector4@@QBEMXZ");
    todo("implement");
}

_inline void vector4::Normalize() // 0x100AEBF0
{
    mangled_assert("?Normalize@vector4@@QAEXXZ");
    todo("implement");
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

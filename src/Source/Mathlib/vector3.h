#if 0
#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector3
{
public:
    union
    {
        float e[3]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
        };
    };
    vector3(vector4 const &);
    _inline vector3(float, float, float);
    _inline vector3();
    _inline float &operator[](__int32);
    _inline float operator[](__int32) const;
    void set(float, float, float);
    bool operator==(vector3 const &) const;
    bool operator!=(vector3 const &) const;
    bool operator<(vector3 const &) const;
    bool operator<=(vector3 const &) const;
    vector4 operator class vector4() const;
    vector3 operator-(vector3 const &) const;
    vector3 operator-() const;
    bool operator!() const;
    vector3 operator*(float const) const;
    _inline vector3 &operator*=(float const);
    vector3 operator/(float const) const;
    vector3 &operator/=(float const);
    vector3 operator+(vector3 const &) const;
    vector3 &operator+=(vector3 const &);
    vector3 &operator-=(vector3 const &);
    _inline vector3 operator^(vector3 const &) const;
    vector3 &operator^=(vector3 const &);
    float operator%(vector3 const &) const;
    float LengthSqr() const;
    _inline float Length() const;
    __int32 DominantAxis() const;
    _inline vector3 &Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector3 const &, vector3 const &, float);
    void minimum(vector3 const &);
    void maximum(vector3 const &);
    void LineIntersectWithXYPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithYZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithXZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithPlane(vector3 &, vector3 &, vector3 &, vector3 &);
    char *PrintToBuffer(char *);
    static vector3 const zero;
};
static_assert(sizeof(vector3) == 12, "Invalid vector3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float vector3::operator[](__int32) const // 0x1000D9D2
{
    mangled_assert("??Avector3@@QBEMH@Z");
    todo("implement");
}

_inline float &vector3::operator[](__int32) // 0x1000D9C5
{
    mangled_assert("??Avector3@@QAEAAMH@Z");
    todo("implement");
}

_inline vector3::vector3() // 0x1000D9B5
{
    mangled_assert("??0vector3@@QAE@XZ");
    todo("implement");
}

_inline vector3::vector3(float, float, float) // 0x1000D98F
{
    mangled_assert("??0vector3@@QAE@MMM@Z");
    todo("implement");
}

_inline vector3 &vector3::operator*=(float const) // 0x1000DB54
{
    mangled_assert("??Xvector3@@QAEAAV0@M@Z");
    todo("implement");
}

_inline float vector3::Length() const // 0x1000DB88
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
}

_inline vector3 vector3::operator^(vector3 const &) const // 0x1000DAF7
{
    mangled_assert("??Tvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector3 &vector3::Normalize() // 0x1000DBD6
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VECTOR3_H__
/* combined */
#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector3
{
public:
    union
    {
        float e[3]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
        };
    };
    _inline vector3(vector4 const &);
    _inline vector3(float, float, float);
    _inline vector3();
    _inline float &operator[](__int32);
    _inline float operator[](__int32) const;
    _inline void set(float, float, float);
    _inline bool operator==(vector3 const &) const;
    _inline bool operator!=(vector3 const &) const;
    _inline bool operator<(vector3 const &) const;
    _inline bool operator<=(vector3 const &) const;
    _inline vector4 operator class vector4() const;
    _inline vector3 operator-(vector3 const &) const;
    _inline vector3 operator-() const;
    bool operator!() const;
    _inline vector3 operator*(float const) const;
    _inline vector3 &operator*=(float const);
    _inline vector3 operator/(float const) const;
    _inline vector3 &operator/=(float const);
    _inline vector3 operator+(vector3 const &) const;
    _inline vector3 &operator+=(vector3 const &);
    _inline vector3 &operator-=(vector3 const &);
    _inline vector3 operator^(vector3 const &) const;
    vector3 &operator^=(vector3 const &);
    _inline float operator%(vector3 const &) const;
    _inline float LengthSqr() const;
    _inline float Length() const;
    __int32 DominantAxis() const;
    _inline vector3 &Normalize();
    _inline void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector3 const &, vector3 const &, float);
    void minimum(vector3 const &);
    void maximum(vector3 const &);
    void LineIntersectWithXYPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithYZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithXZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithPlane(vector3 &, vector3 &, vector3 &, vector3 &);
    char *PrintToBuffer(char *);
    static vector3 const zero;
};
static_assert(sizeof(vector3) == 12, "Invalid vector3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float vector3::operator[](__int32) const // 0x444006
{
    mangled_assert("??Avector3@@QBEMH@Z");
    todo("implement");
}

_inline float &vector3::operator[](__int32) // 0x443FFC
{
    mangled_assert("??Avector3@@QAEAAMH@Z");
    todo("implement");
}

_inline bool vector3::operator==(vector3 const &) const // 0x4B3C55
{
    mangled_assert("??8vector3@@QBE_NABV0@@Z");
    todo("implement");
}

_inline bool vector3::operator!=(vector3 const &) const // 0x47409A
{
    mangled_assert("??9vector3@@QBE_NABV0@@Z");
    todo("implement");
}

_inline bool vector3::operator<(vector3 const &) const // 0x4B2269
{
    mangled_assert("??Mvector3@@QBE_NABV0@@Z");
    todo("implement");
}

_inline bool vector3::operator<=(vector3 const &) const // 0x4B2296
{
    mangled_assert("??Nvector3@@QBE_NABV0@@Z");
    todo("implement");
}

_inline vector3::vector3() // 0x43FA24
{
    mangled_assert("??0vector3@@QAE@XZ");
    todo("implement");
}

_inline vector3::vector3(float, float, float) // 0x43F9FF
{
    mangled_assert("??0vector3@@QAE@MMM@Z");
    todo("implement");
}

_inline vector3::vector3(vector4 const &) // 0x520ABA
{
    mangled_assert("??0vector3@@QAE@ABVvector4@@@Z");
    todo("implement");
}

_inline void vector3::set(float, float, float) // 0x4464E6
{
    mangled_assert("?set@vector3@@QAEXMMM@Z");
    todo("implement");
}

_inline vector4 vector3::operator vector4() const // 0x444010
{
    mangled_assert("??Bvector3@@QBE?AVvector4@@XZ");
    todo("implement");
}

_inline vector3 vector3::operator-() const // 0x474362
{
    mangled_assert("??Gvector3@@QBE?AV0@XZ");
    todo("implement");
}

_inline vector3 vector3::operator*(float const) const // 0x442B54
{
    mangled_assert("??Dvector3@@QBE?AV0@M@Z");
    todo("implement");
}

_inline vector3 &vector3::operator*=(float const) // 0x440125
{
    mangled_assert("??Xvector3@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector3 vector3::operator/(float const) const // 0x49952C
{
    mangled_assert("??Kvector3@@QBE?AV0@M@Z");
    todo("implement");
}

_inline vector3 &vector3::operator/=(float const) // 0x4440DE
{
    mangled_assert("??_0vector3@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector3 vector3::operator+(vector3 const &) const // 0x442BC4
{
    mangled_assert("??Hvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector3 &vector3::operator+=(vector3 const &) // 0x440158
{
    mangled_assert("??Yvector3@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline vector3 vector3::operator-(vector3 const &) const // 0x442B8F
{
    mangled_assert("??Gvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector3 &vector3::operator-=(vector3 const &) // 0x477A38
{
    mangled_assert("??Zvector3@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline float vector3::operator%(vector3 const &) const // 0x43FFD8
{
    mangled_assert("??Lvector3@@QBEMABV0@@Z");
    todo("implement");
}

_inline float vector3::LengthSqr() const // 0x442CF4
{
    mangled_assert("?LengthSqr@vector3@@QBEMXZ");
    todo("implement");
}

_inline float vector3::Length() const // 0x4442C4
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
}

_inline vector3 vector3::operator^(vector3 const &) const // 0x444062
{
    mangled_assert("??Tvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector3 &vector3::Normalize() // 0x444312
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
}

_inline void vector3::NormalizeFast() // 0x444378
{
    mangled_assert("?NormalizeFast@vector3@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VECTOR3_H__
/* combined */
#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector3
{
public:
    union
    {
        float e[3]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
        };
    };
    vector3(vector4 const &);
    vector3(float, float, float);
    vector3();
    float &operator[](__int32);
    float operator[](__int32) const;
    void set(float, float, float);
    bool operator==(vector3 const &) const;
    bool operator!=(vector3 const &) const;
    bool operator<(vector3 const &) const;
    bool operator<=(vector3 const &) const;
    vector4 operator class vector4() const;
    vector3 operator-(vector3 const &) const;
    vector3 operator-() const;
    bool operator!() const;
    vector3 operator*(float const) const;
    vector3 &operator*=(float const);
    vector3 operator/(float const) const;
    vector3 &operator/=(float const);
    vector3 operator+(vector3 const &) const;
    vector3 &operator+=(vector3 const &);
    vector3 &operator-=(vector3 const &);
    vector3 operator^(vector3 const &) const;
    vector3 &operator^=(vector3 const &);
    float operator%(vector3 const &) const;
    float LengthSqr() const;
    float Length() const;
    __int32 DominantAxis() const;
    vector3 &Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector3 const &, vector3 const &, float);
    void minimum(vector3 const &);
    void maximum(vector3 const &);
    void LineIntersectWithXYPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithYZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithXZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithPlane(vector3 &, vector3 &, vector3 &, vector3 &);
    char *PrintToBuffer(char *);
    static vector3 const zero;
};
static_assert(sizeof(vector3) == 12, "Invalid vector3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VECTOR3_H__
/* combined */
#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector3
{
public:
    union
    {
        float e[3]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
        };
    };
    _inline vector3(vector4 const &);
    _inline vector3(float, float, float);
    _inline vector3();
    _inline float &operator[](__int32);
    _inline float operator[](__int32) const;
    _inline void set(float, float, float);
    bool operator==(vector3 const &) const;
    bool operator!=(vector3 const &) const;
    bool operator<(vector3 const &) const;
    bool operator<=(vector3 const &) const;
    _inline vector4 operator class vector4() const;
    _inline vector3 operator-(vector3 const &) const;
    vector3 operator-() const;
    bool operator!() const;
    _inline vector3 operator*(float const) const;
    _inline vector3 &operator*=(float const);
    vector3 operator/(float const) const;
    _inline vector3 &operator/=(float const);
    _inline vector3 operator+(vector3 const &) const;
    _inline vector3 &operator+=(vector3 const &);
    vector3 &operator-=(vector3 const &);
    _inline vector3 operator^(vector3 const &) const;
    vector3 &operator^=(vector3 const &);
    _inline float operator%(vector3 const &) const;
    _inline float LengthSqr() const;
    _inline float Length() const;
    __int32 DominantAxis() const;
    _inline vector3 &Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector3 const &, vector3 const &, float);
    void minimum(vector3 const &);
    void maximum(vector3 const &);
    void LineIntersectWithXYPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithYZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithXZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithPlane(vector3 &, vector3 &, vector3 &, vector3 &);
    char *PrintToBuffer(char *);
    static vector3 const zero;
};
static_assert(sizeof(vector3) == 12, "Invalid vector3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float vector3::operator[](__int32) const // 0x1006C210
{
    mangled_assert("??Avector3@@QBEMH@Z");
    todo("implement");
}

_inline float &vector3::operator[](__int32) // 0x100111F0
{
    mangled_assert("??Avector3@@QAEAAMH@Z");
    todo("implement");
}

_inline vector3::vector3() // 0x1000D910
{
    mangled_assert("??0vector3@@QAE@XZ");
    todo("implement");
}

_inline vector3::vector3(float, float, float) // 0x1000D8E0
{
    mangled_assert("??0vector3@@QAE@MMM@Z");
    todo("implement");
}

_inline vector3::vector3(vector4 const &) // 0x1000D8C0
{
    mangled_assert("??0vector3@@QAE@ABVvector4@@@Z");
    todo("implement");
}

_inline void vector3::set(float, float, float) // 0x1001B980
{
    mangled_assert("?set@vector3@@QAEXMMM@Z");
    todo("implement");
}

_inline vector4 vector3::operator vector4() const // 0x10011210
{
    mangled_assert("??Bvector3@@QBE?AVvector4@@XZ");
    todo("implement");
}

_inline vector3 vector3::operator*(float const) const // 0x1003EE20
{
    mangled_assert("??Dvector3@@QBE?AV0@M@Z");
    todo("implement");
}

_inline vector3 &vector3::operator*=(float const) // 0x1005A610
{
    mangled_assert("??Xvector3@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector3 &vector3::operator/=(float const) // 0x10011C20
{
    mangled_assert("??_0vector3@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector3 vector3::operator+(vector3 const &) const // 0x100119D0
{
    mangled_assert("??Hvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector3 &vector3::operator+=(vector3 const &) // 0x1003F160
{
    mangled_assert("??Yvector3@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline vector3 vector3::operator-(vector3 const &) const // 0x1005A5B0
{
    mangled_assert("??Gvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline float vector3::operator%(vector3 const &) const // 0x100C24BC
{
    mangled_assert("??Lvector3@@QBEMABV0@@Z");
    todo("implement");
}

_inline float vector3::LengthSqr() const // 0x100124B0
{
    mangled_assert("?LengthSqr@vector3@@QBEMXZ");
    todo("implement");
}

_inline float vector3::Length() const // 0x1005A770
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
}

_inline vector3 vector3::operator^(vector3 const &) const // 0x100AEAE0
{
    mangled_assert("??Tvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector3 &vector3::Normalize() // 0x1005A7D0
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VECTOR3_H__
/* combined */
#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector3
{
public:
    union
    {
        float e[3]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
        };
    };
    vector3(vector4 const &);
    vector3(float, float, float);
    vector3();
    float &operator[](__int32);
    float operator[](__int32) const;
    void set(float, float, float);
    bool operator==(vector3 const &) const;
    bool operator!=(vector3 const &) const;
    bool operator<(vector3 const &) const;
    bool operator<=(vector3 const &) const;
    vector4 operator class vector4() const;
    vector3 operator-(vector3 const &) const;
    vector3 operator-() const;
    bool operator!() const;
    vector3 operator*(float const) const;
    vector3 &operator*=(float const);
    vector3 operator/(float const) const;
    vector3 &operator/=(float const);
    vector3 operator+(vector3 const &) const;
    vector3 &operator+=(vector3 const &);
    vector3 &operator-=(vector3 const &);
    vector3 operator^(vector3 const &) const;
    vector3 &operator^=(vector3 const &);
    float operator%(vector3 const &) const;
    float LengthSqr() const;
    _inline float Length() const;
    __int32 DominantAxis() const;
    _inline vector3 &Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector3 const &, vector3 const &, float);
    void minimum(vector3 const &);
    void maximum(vector3 const &);
    void LineIntersectWithXYPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithYZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithXZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithPlane(vector3 &, vector3 &, vector3 &, vector3 &);
    char *PrintToBuffer(char *);
    static vector3 const zero;
};
static_assert(sizeof(vector3) == 12, "Invalid vector3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float vector3::Length() const // 0x10001120
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
}

_inline vector3 &vector3::Normalize() // 0x10002D7B
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VECTOR3_H__
/* combined */
#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector3
{
public:
    union
    {
        float e[3]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
            float z; // 0x8
        };
        struct
        {
            float r; // 0x0
            float g; // 0x4
            float b; // 0x8
        };
    };
    vector3(vector4 const &);
    vector3(float, float, float);
    vector3();
    float &operator[](__int32);
    float operator[](__int32) const;
    void set(float, float, float);
    bool operator==(vector3 const &) const;
    bool operator!=(vector3 const &) const;
    bool operator<(vector3 const &) const;
    bool operator<=(vector3 const &) const;
    vector4 operator class vector4() const;
    vector3 operator-(vector3 const &) const;
    vector3 operator-() const;
    bool operator!() const;
    vector3 operator*(float const) const;
    vector3 &operator*=(float const);
    vector3 operator/(float const) const;
    vector3 &operator/=(float const);
    vector3 operator+(vector3 const &) const;
    vector3 &operator+=(vector3 const &);
    vector3 &operator-=(vector3 const &);
    vector3 operator^(vector3 const &) const;
    vector3 &operator^=(vector3 const &);
    float operator%(vector3 const &) const;
    float LengthSqr() const;
    _inline float Length() const;
    __int32 DominantAxis() const;
    _inline vector3 &Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector3 const &, vector3 const &, float);
    void minimum(vector3 const &);
    void maximum(vector3 const &);
    void LineIntersectWithXYPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithYZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithXZPlane(vector3 const &, vector3 const &, float);
    void LineIntersectWithPlane(vector3 &, vector3 &, vector3 &, vector3 &);
    char *PrintToBuffer(char *);
    static vector3 const zero;
};
static_assert(sizeof(vector3) == 12, "Invalid vector3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float vector3::Length() const // 0x10001457
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
}

_inline vector3 &vector3::Normalize() // 0x10003860
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VECTOR3_H__
#endif

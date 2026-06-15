#if 0
#ifndef __VECTOR2_H__
#define __VECTOR2_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector2
{
public:
    union
    {
        float e[2]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
        };
    };
    vector2(float, float);
    vector2();
    void set(float, float);
    float &operator[](__int32);
    float operator[](__int32) const;
    bool operator==(vector2 const &);
    bool operator!=(vector2 const &);
    vector2 operator-(vector2 const &) const;
    vector2 operator-() const;
    bool operator!() const;
    vector2 operator*(float) const;
    vector2 &operator*=(float);
    vector2 operator/(float) const;
    vector2 &operator/=(float);
    vector2 operator+(vector2 const &) const;
    vector2 &operator+=(vector2 const &);
    vector2 &operator-=(vector2 const &);
    float operator%(vector2 const &) const;
    float LengthSqr() const;
    float Length() const;
    void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector2 const &, vector2 const &, float);
    char *PrintToBuffer(char *) const;
    static vector2 const zero;
};
static_assert(sizeof(vector2) == 8, "Invalid vector2 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VECTOR2_H__
/* combined */
#ifndef __VECTOR2_H__
#define __VECTOR2_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector2
{
public:
    union
    {
        float e[2]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
        };
    };
    _inline vector2(float, float);
    _inline vector2();
    _inline void set(float, float);
    _inline float &operator[](__int32);
    _inline float operator[](__int32) const;
    bool operator==(vector2 const &);
    bool operator!=(vector2 const &);
    _inline vector2 operator-(vector2 const &) const;
    vector2 operator-() const;
    bool operator!() const;
    _inline vector2 operator*(float) const;
    _inline vector2 &operator*=(float);
    _inline vector2 operator/(float) const;
    _inline vector2 &operator/=(float);
    _inline vector2 operator+(vector2 const &) const;
    vector2 &operator+=(vector2 const &);
    vector2 &operator-=(vector2 const &);
    float operator%(vector2 const &) const;
    _inline float LengthSqr() const;
    _inline float Length() const;
    void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector2 const &, vector2 const &, float);
    char *PrintToBuffer(char *) const;
    static vector2 const zero;
};
static_assert(sizeof(vector2) == 8, "Invalid vector2 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float vector2::operator[](__int32) const // 0x632E6A
{
    mangled_assert("??Avector2@@QBEMH@Z");
    todo("implement");
}

_inline float &vector2::operator[](__int32) // 0x43FC92
{
    mangled_assert("??Avector2@@QAEAAMH@Z");
    todo("implement");
}

_inline vector2::vector2() // 0x43F9FC
{
    mangled_assert("??0vector2@@QAE@XZ");
    todo("implement");
}

_inline vector2::vector2(float, float) // 0x492D55
{
    mangled_assert("??0vector2@@QAE@MM@Z");
    todo("implement");
}

_inline void vector2::set(float, float) // 0x4464CE
{
    mangled_assert("?set@vector2@@QAEXMM@Z");
    todo("implement");
}

_inline vector2 vector2::operator*(float) const // 0x4CA54B
{
    mangled_assert("??Dvector2@@QBE?AV0@M@Z");
    todo("implement");
}

_inline vector2 &vector2::operator*=(float) // 0x58EC72
{
    mangled_assert("??Xvector2@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector2 vector2::operator/(float) const // 0x492DF8
{
    mangled_assert("??Kvector2@@QBE?AV0@M@Z");
    todo("implement");
}

_inline vector2 &vector2::operator/=(float) // 0x58EC95
{
    mangled_assert("??_0vector2@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector2 vector2::operator+(vector2 const &) const // 0x4CA596
{
    mangled_assert("??Hvector2@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline vector2 vector2::operator-(vector2 const &) const // 0x4CA570
{
    mangled_assert("??Gvector2@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline float vector2::LengthSqr() const // 0x56BBB3
{
    mangled_assert("?LengthSqr@vector2@@QBEMXZ");
    todo("implement");
}

_inline float vector2::Length() const // 0x4486F7
{
    mangled_assert("?Length@vector2@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VECTOR2_H__
/* combined */
#ifndef __VECTOR2_H__
#define __VECTOR2_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class vector2
{
public:
    union
    {
        float e[2]; // 0x0
        struct
        {
            float x; // 0x0
            float y; // 0x4
        };
    };
    _inline vector2(float, float);
    _inline vector2();
    _inline void set(float, float);
    _inline float &operator[](__int32);
    float operator[](__int32) const;
    bool operator==(vector2 const &);
    bool operator!=(vector2 const &);
    vector2 operator-(vector2 const &) const;
    vector2 operator-() const;
    bool operator!() const;
    vector2 operator*(float) const;
    vector2 &operator*=(float);
    vector2 operator/(float) const;
    _inline vector2 &operator/=(float);
    _inline vector2 operator+(vector2 const &) const;
    vector2 &operator+=(vector2 const &);
    vector2 &operator-=(vector2 const &);
    float operator%(vector2 const &) const;
    float LengthSqr() const;
    _inline float Length() const;
    void Normalize();
    void NormalizeFast();
    void NormalizeToLength(float);
    void ClampComponents(float, float);
    void ClampMagnitude(float, float);
    void ClampMagnitudeMin(float);
    void ClampMagnitudeMax(float);
    void VectorsBlend(vector2 const &, vector2 const &, float);
    char *PrintToBuffer(char *) const;
    static vector2 const zero;
};
static_assert(sizeof(vector2) == 8, "Invalid vector2 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline float &vector2::operator[](__int32) // 0x10066150
{
    mangled_assert("??Avector2@@QAEAAMH@Z");
    todo("implement");
}

_inline vector2::vector2() // 0x1000D8B0
{
    mangled_assert("??0vector2@@QAE@XZ");
    todo("implement");
}

_inline vector2::vector2(float, float) // 0x1000D890
{
    mangled_assert("??0vector2@@QAE@MM@Z");
    todo("implement");
}

_inline void vector2::set(float, float) // 0x100A0640
{
    mangled_assert("?set@vector2@@QAEXMM@Z");
    todo("implement");
}

_inline vector2 &vector2::operator/=(float) // 0x10066310
{
    mangled_assert("??_0vector2@@QAEAAV0@M@Z");
    todo("implement");
}

_inline vector2 vector2::operator+(vector2 const &) const // 0x1009F660
{
    mangled_assert("??Hvector2@@QBE?AV0@ABV0@@Z");
    todo("implement");
}

_inline float vector2::Length() const // 0x100664B0
{
    mangled_assert("?Length@vector2@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VECTOR2_H__
#endif

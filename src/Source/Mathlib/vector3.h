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

_extern float _sub_1000D9D2(vector3 const *const, __int32);
_inline float vector3::operator[](__int32) const // 0x1000D9D2
{
    mangled_assert("??Avector3@@QBEMH@Z");
    todo("implement");
    float __result = _sub_1000D9D2(this, arg);
    return __result;
}

_extern float &_sub_1000D9C5(vector3 *const, __int32);
_inline float &vector3::operator[](__int32) // 0x1000D9C5
{
    mangled_assert("??Avector3@@QAEAAMH@Z");
    todo("implement");
    float & __result = _sub_1000D9C5(this, arg);
    return __result;
}

_extern _sub_1000D9B5(vector3 *const);
_inline vector3::vector3() // 0x1000D9B5
{
    mangled_assert("??0vector3@@QAE@XZ");
    todo("implement");
    _sub_1000D9B5(this);
}

_extern _sub_1000D98F(vector3 *const, float, float, float);
_inline vector3::vector3(float, float, float) // 0x1000D98F
{
    mangled_assert("??0vector3@@QAE@MMM@Z");
    todo("implement");
    _sub_1000D98F(this, arg, arg, arg);
}

_extern vector3 &_sub_1000DB54(vector3 *const, float const);
_inline vector3 &vector3::operator*=(float const) // 0x1000DB54
{
    mangled_assert("??Xvector3@@QAEAAV0@M@Z");
    todo("implement");
    vector3 & __result = _sub_1000DB54(this, arg);
    return __result;
}

_extern float _sub_1000DB88(vector3 const *const);
_inline float vector3::Length() const // 0x1000DB88
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
    float __result = _sub_1000DB88(this);
    return __result;
}

_extern vector3 _sub_1000DAF7(vector3 const *const, vector3 const &);
_inline vector3 vector3::operator^(vector3 const &) const // 0x1000DAF7
{
    mangled_assert("??Tvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector3 __result = _sub_1000DAF7(this, arg);
    return __result;
}

_extern vector3 &_sub_1000DBD6(vector3 *const);
_inline vector3 &vector3::Normalize() // 0x1000DBD6
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
    vector3 & __result = _sub_1000DBD6(this);
    return __result;
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

_extern float _sub_444006(vector3 const *const, __int32);
_inline float vector3::operator[](__int32) const // 0x444006
{
    mangled_assert("??Avector3@@QBEMH@Z");
    todo("implement");
    float __result = _sub_444006(this, arg);
    return __result;
}

_extern float &_sub_443FFC(vector3 *const, __int32);
_inline float &vector3::operator[](__int32) // 0x443FFC
{
    mangled_assert("??Avector3@@QAEAAMH@Z");
    todo("implement");
    float & __result = _sub_443FFC(this, arg);
    return __result;
}

_extern bool _sub_4B3C55(vector3 const *const, vector3 const &);
_inline bool vector3::operator==(vector3 const &) const // 0x4B3C55
{
    mangled_assert("??8vector3@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_4B3C55(this, arg);
    return __result;
}

_extern bool _sub_47409A(vector3 const *const, vector3 const &);
_inline bool vector3::operator!=(vector3 const &) const // 0x47409A
{
    mangled_assert("??9vector3@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_47409A(this, arg);
    return __result;
}

_extern bool _sub_4B2269(vector3 const *const, vector3 const &);
_inline bool vector3::operator<(vector3 const &) const // 0x4B2269
{
    mangled_assert("??Mvector3@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_4B2269(this, arg);
    return __result;
}

_extern bool _sub_4B2296(vector3 const *const, vector3 const &);
_inline bool vector3::operator<=(vector3 const &) const // 0x4B2296
{
    mangled_assert("??Nvector3@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_4B2296(this, arg);
    return __result;
}

_extern _sub_43FA24(vector3 *const);
_inline vector3::vector3() // 0x43FA24
{
    mangled_assert("??0vector3@@QAE@XZ");
    todo("implement");
    _sub_43FA24(this);
}

_extern _sub_43F9FF(vector3 *const, float, float, float);
_inline vector3::vector3(float, float, float) // 0x43F9FF
{
    mangled_assert("??0vector3@@QAE@MMM@Z");
    todo("implement");
    _sub_43F9FF(this, arg, arg, arg);
}

_extern _sub_520ABA(vector3 *const, vector4 const &);
_inline vector3::vector3(vector4 const &) // 0x520ABA
{
    mangled_assert("??0vector3@@QAE@ABVvector4@@@Z");
    todo("implement");
    _sub_520ABA(this, arg);
}

_extern void _sub_4464E6(vector3 *const, float, float, float);
_inline void vector3::set(float, float, float) // 0x4464E6
{
    mangled_assert("?set@vector3@@QAEXMMM@Z");
    todo("implement");
    _sub_4464E6(this, arg, arg, arg);
}

_extern vector4 _sub_444010(vector3 const *const);
_inline vector4 vector3::operator vector4() const // 0x444010
{
    mangled_assert("??Bvector3@@QBE?AVvector4@@XZ");
    todo("implement");
    vector4 __result = _sub_444010(this);
    return __result;
}

_extern vector3 _sub_474362(vector3 const *const);
_inline vector3 vector3::operator-() const // 0x474362
{
    mangled_assert("??Gvector3@@QBE?AV0@XZ");
    todo("implement");
    vector3 __result = _sub_474362(this);
    return __result;
}

_extern vector3 _sub_442B54(vector3 const *const, float const);
_inline vector3 vector3::operator*(float const) const // 0x442B54
{
    mangled_assert("??Dvector3@@QBE?AV0@M@Z");
    todo("implement");
    vector3 __result = _sub_442B54(this, arg);
    return __result;
}

_extern vector3 &_sub_440125(vector3 *const, float const);
_inline vector3 &vector3::operator*=(float const) // 0x440125
{
    mangled_assert("??Xvector3@@QAEAAV0@M@Z");
    todo("implement");
    vector3 & __result = _sub_440125(this, arg);
    return __result;
}

_extern vector3 _sub_49952C(vector3 const *const, float const);
_inline vector3 vector3::operator/(float const) const // 0x49952C
{
    mangled_assert("??Kvector3@@QBE?AV0@M@Z");
    todo("implement");
    vector3 __result = _sub_49952C(this, arg);
    return __result;
}

_extern vector3 &_sub_4440DE(vector3 *const, float const);
_inline vector3 &vector3::operator/=(float const) // 0x4440DE
{
    mangled_assert("??_0vector3@@QAEAAV0@M@Z");
    todo("implement");
    vector3 & __result = _sub_4440DE(this, arg);
    return __result;
}

_extern vector3 _sub_442BC4(vector3 const *const, vector3 const &);
_inline vector3 vector3::operator+(vector3 const &) const // 0x442BC4
{
    mangled_assert("??Hvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector3 __result = _sub_442BC4(this, arg);
    return __result;
}

_extern vector3 &_sub_440158(vector3 *const, vector3 const &);
_inline vector3 &vector3::operator+=(vector3 const &) // 0x440158
{
    mangled_assert("??Yvector3@@QAEAAV0@ABV0@@Z");
    todo("implement");
    vector3 & __result = _sub_440158(this, arg);
    return __result;
}

_extern vector3 _sub_442B8F(vector3 const *const, vector3 const &);
_inline vector3 vector3::operator-(vector3 const &) const // 0x442B8F
{
    mangled_assert("??Gvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector3 __result = _sub_442B8F(this, arg);
    return __result;
}

_extern vector3 &_sub_477A38(vector3 *const, vector3 const &);
_inline vector3 &vector3::operator-=(vector3 const &) // 0x477A38
{
    mangled_assert("??Zvector3@@QAEAAV0@ABV0@@Z");
    todo("implement");
    vector3 & __result = _sub_477A38(this, arg);
    return __result;
}

_extern float _sub_43FFD8(vector3 const *const, vector3 const &);
_inline float vector3::operator%(vector3 const &) const // 0x43FFD8
{
    mangled_assert("??Lvector3@@QBEMABV0@@Z");
    todo("implement");
    float __result = _sub_43FFD8(this, arg);
    return __result;
}

_extern float _sub_442CF4(vector3 const *const);
_inline float vector3::LengthSqr() const // 0x442CF4
{
    mangled_assert("?LengthSqr@vector3@@QBEMXZ");
    todo("implement");
    float __result = _sub_442CF4(this);
    return __result;
}

_extern float _sub_4442C4(vector3 const *const);
_inline float vector3::Length() const // 0x4442C4
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
    float __result = _sub_4442C4(this);
    return __result;
}

_extern vector3 _sub_444062(vector3 const *const, vector3 const &);
_inline vector3 vector3::operator^(vector3 const &) const // 0x444062
{
    mangled_assert("??Tvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector3 __result = _sub_444062(this, arg);
    return __result;
}

_extern vector3 &_sub_444312(vector3 *const);
_inline vector3 &vector3::Normalize() // 0x444312
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
    vector3 & __result = _sub_444312(this);
    return __result;
}

_extern void _sub_444378(vector3 *const);
_inline void vector3::NormalizeFast() // 0x444378
{
    mangled_assert("?NormalizeFast@vector3@@QAEXXZ");
    todo("implement");
    _sub_444378(this);
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

_extern float _sub_1006C210(vector3 const *const, __int32);
_inline float vector3::operator[](__int32) const // 0x1006C210
{
    mangled_assert("??Avector3@@QBEMH@Z");
    todo("implement");
    float __result = _sub_1006C210(this, arg);
    return __result;
}

_extern float &_sub_100111F0(vector3 *const, __int32);
_inline float &vector3::operator[](__int32) // 0x100111F0
{
    mangled_assert("??Avector3@@QAEAAMH@Z");
    todo("implement");
    float & __result = _sub_100111F0(this, arg);
    return __result;
}

_extern _sub_1000D910(vector3 *const);
_inline vector3::vector3() // 0x1000D910
{
    mangled_assert("??0vector3@@QAE@XZ");
    todo("implement");
    _sub_1000D910(this);
}

_extern _sub_1000D8E0(vector3 *const, float, float, float);
_inline vector3::vector3(float, float, float) // 0x1000D8E0
{
    mangled_assert("??0vector3@@QAE@MMM@Z");
    todo("implement");
    _sub_1000D8E0(this, arg, arg, arg);
}

_extern _sub_1000D8C0(vector3 *const, vector4 const &);
_inline vector3::vector3(vector4 const &) // 0x1000D8C0
{
    mangled_assert("??0vector3@@QAE@ABVvector4@@@Z");
    todo("implement");
    _sub_1000D8C0(this, arg);
}

_extern void _sub_1001B980(vector3 *const, float, float, float);
_inline void vector3::set(float, float, float) // 0x1001B980
{
    mangled_assert("?set@vector3@@QAEXMMM@Z");
    todo("implement");
    _sub_1001B980(this, arg, arg, arg);
}

_extern vector4 _sub_10011210(vector3 const *const);
_inline vector4 vector3::operator vector4() const // 0x10011210
{
    mangled_assert("??Bvector3@@QBE?AVvector4@@XZ");
    todo("implement");
    vector4 __result = _sub_10011210(this);
    return __result;
}

_extern vector3 _sub_1003EE20(vector3 const *const, float const);
_inline vector3 vector3::operator*(float const) const // 0x1003EE20
{
    mangled_assert("??Dvector3@@QBE?AV0@M@Z");
    todo("implement");
    vector3 __result = _sub_1003EE20(this, arg);
    return __result;
}

_extern vector3 &_sub_1005A610(vector3 *const, float const);
_inline vector3 &vector3::operator*=(float const) // 0x1005A610
{
    mangled_assert("??Xvector3@@QAEAAV0@M@Z");
    todo("implement");
    vector3 & __result = _sub_1005A610(this, arg);
    return __result;
}

_extern vector3 &_sub_10011C20(vector3 *const, float const);
_inline vector3 &vector3::operator/=(float const) // 0x10011C20
{
    mangled_assert("??_0vector3@@QAEAAV0@M@Z");
    todo("implement");
    vector3 & __result = _sub_10011C20(this, arg);
    return __result;
}

_extern vector3 _sub_100119D0(vector3 const *const, vector3 const &);
_inline vector3 vector3::operator+(vector3 const &) const // 0x100119D0
{
    mangled_assert("??Hvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector3 __result = _sub_100119D0(this, arg);
    return __result;
}

_extern vector3 &_sub_1003F160(vector3 *const, vector3 const &);
_inline vector3 &vector3::operator+=(vector3 const &) // 0x1003F160
{
    mangled_assert("??Yvector3@@QAEAAV0@ABV0@@Z");
    todo("implement");
    vector3 & __result = _sub_1003F160(this, arg);
    return __result;
}

_extern vector3 _sub_1005A5B0(vector3 const *const, vector3 const &);
_inline vector3 vector3::operator-(vector3 const &) const // 0x1005A5B0
{
    mangled_assert("??Gvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector3 __result = _sub_1005A5B0(this, arg);
    return __result;
}

_extern float _sub_100C24BC(vector3 const *const, vector3 const &);
_inline float vector3::operator%(vector3 const &) const // 0x100C24BC
{
    mangled_assert("??Lvector3@@QBEMABV0@@Z");
    todo("implement");
    float __result = _sub_100C24BC(this, arg);
    return __result;
}

_extern float _sub_100124B0(vector3 const *const);
_inline float vector3::LengthSqr() const // 0x100124B0
{
    mangled_assert("?LengthSqr@vector3@@QBEMXZ");
    todo("implement");
    float __result = _sub_100124B0(this);
    return __result;
}

_extern float _sub_1005A770(vector3 const *const);
_inline float vector3::Length() const // 0x1005A770
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
    float __result = _sub_1005A770(this);
    return __result;
}

_extern vector3 _sub_100AEAE0(vector3 const *const, vector3 const &);
_inline vector3 vector3::operator^(vector3 const &) const // 0x100AEAE0
{
    mangled_assert("??Tvector3@@QBE?AV0@ABV0@@Z");
    todo("implement");
    vector3 __result = _sub_100AEAE0(this, arg);
    return __result;
}

_extern vector3 &_sub_1005A7D0(vector3 *const);
_inline vector3 &vector3::Normalize() // 0x1005A7D0
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
    vector3 & __result = _sub_1005A7D0(this);
    return __result;
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

_extern float _sub_10001120(vector3 const *const);
_inline float vector3::Length() const // 0x10001120
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
    float __result = _sub_10001120(this);
    return __result;
}

_extern vector3 &_sub_10002D7B(vector3 *const);
_inline vector3 &vector3::Normalize() // 0x10002D7B
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
    vector3 & __result = _sub_10002D7B(this);
    return __result;
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

_extern float _sub_10001457(vector3 const *const);
_inline float vector3::Length() const // 0x10001457
{
    mangled_assert("?Length@vector3@@QBEMXZ");
    todo("implement");
    float __result = _sub_10001457(this);
    return __result;
}

_extern vector3 &_sub_10003860(vector3 *const);
_inline vector3 &vector3::Normalize() // 0x10003860
{
    mangled_assert("?Normalize@vector3@@QAEAAV1@XZ");
    todo("implement");
    vector3 & __result = _sub_10003860(this);
    return __result;
}

/* ---------- private code */

#endif // __VECTOR3_H__
#endif

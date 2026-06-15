#if 0
#ifndef __PLANE3_H__
#define __PLANE3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Plane3
{
public:
    union
    {
    private:
        vector4 P; // 0x0
        struct
        {
        private:
            vector3 n; // 0x0
            float d; // 0xC
        };
    };
    _inline Plane3(vector3 const &, float const);
    _inline Plane3();
    _inline void set(vector3 const &, float const);
    _inline vector3 const &getNormal() const;
    _inline float getDistance() const;
    Plane3 operator*(matrix4 const &) const;
    Plane3 operator*(matrix3 const &) const;
    Plane3 &operator*=(matrix4 const &);
    Plane3 &operator*=(matrix3 const &);
    bool intersectRay(vector3 const &, vector3 const &, vector3 &) const;
    void snapPointToPlane(vector3 &) const;
    bool intersectLineSeg(vector3 const &, vector3 const &, vector3 &) const;
    _inline float distanceToPlane(vector3 const &) const;
    _inline bool pointOutside(vector3 const &) const;
};
static_assert(sizeof(Plane3) == 16, "Invalid Plane3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Plane3::Plane3() // 0x6661DA
{
    mangled_assert("??0Plane3@@QAE@XZ");
    todo("implement");
}

_inline Plane3::Plane3(vector3 const &, float const) // 0x492CBD
{
    mangled_assert("??0Plane3@@QAE@ABVvector3@@M@Z");
    todo("implement");
}

_inline void Plane3::set(vector3 const &, float const) // 0x66678A
{
    mangled_assert("?set@Plane3@@QAEXABVvector3@@M@Z");
    todo("implement");
}

_inline vector3 const &Plane3::getNormal() const // 0x49559B
{
    mangled_assert("?getNormal@Plane3@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline float Plane3::getDistance() const // 0x495593
{
    mangled_assert("?getDistance@Plane3@@QBEMXZ");
    todo("implement");
}

_inline float Plane3::distanceToPlane(vector3 const &) const // 0x666450
{
    mangled_assert("?distanceToPlane@Plane3@@QBEMABVvector3@@@Z");
    todo("implement");
}

_inline bool Plane3::pointOutside(vector3 const &) const // 0x66674E
{
    mangled_assert("?pointOutside@Plane3@@QBE_NABVvector3@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __PLANE3_H__
/* combined */
#ifndef __PLANE3_H__
#define __PLANE3_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Plane3
{
public:
    union
    {
    private:
        vector4 P; // 0x0
        struct
        {
        private:
            vector3 n; // 0x0
            float d; // 0xC
        };
    };
    Plane3(vector3 const &, float const);
    Plane3();
    void set(vector3 const &, float const);
    vector3 const &getNormal() const;
    float getDistance() const;
    Plane3 operator*(matrix4 const &) const;
    Plane3 operator*(matrix3 const &) const;
    Plane3 &operator*=(matrix4 const &);
    Plane3 &operator*=(matrix3 const &);
    bool intersectRay(vector3 const &, vector3 const &, vector3 &) const;
    void snapPointToPlane(vector3 &) const;
    bool intersectLineSeg(vector3 const &, vector3 const &, vector3 &) const;
    float distanceToPlane(vector3 const &) const;
    bool pointOutside(vector3 const &) const;
};
static_assert(sizeof(Plane3) == 16, "Invalid Plane3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PLANE3_H__
#endif

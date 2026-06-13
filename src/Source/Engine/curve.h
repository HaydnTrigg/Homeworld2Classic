#if 0
#ifndef __CURVE_H__
#define __CURVE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Curve3D
{
public:
    Curve3D(Curve3D const &); /* compiler_generated() */
    _inline Curve3D();
    virtual _inline ~Curve3D();
    virtual _inline void draw(float) const;
    virtual bool evaluate(float, vector3 *, vector3 *) const = 0;
    Curve3D &operator=(Curve3D const &); /* compiler_generated() */
};
static_assert(sizeof(Curve3D) == 4, "Invalid Curve3D size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_60DCFA(Curve3D *const);
_inline Curve3D::Curve3D() // 0x60DCFA
{
    mangled_assert("??0Curve3D@@QAE@XZ");
    todo("implement");
    _sub_60DCFA(this);
}

_extern void _sub_60DD73(Curve3D *const);
_inline Curve3D::~Curve3D() // 0x60DD73
{
    mangled_assert("??1Curve3D@@UAE@XZ");
    todo("implement");
    _sub_60DD73(this);
}

_extern void _sub_60F0C9(Curve3D const *const, float);
_inline void Curve3D::draw(float) const // 0x60F0C9
{
    mangled_assert("?draw@Curve3D@@UBEXM@Z");
    todo("implement");
    _sub_60F0C9(this, arg);
}

/* ---------- private code */

#endif // __CURVE_H__
#endif

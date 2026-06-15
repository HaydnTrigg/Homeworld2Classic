#if 0
#ifndef __PRIM_H__
#define __PRIM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct PrimRectangle
{
    float x; // 0x0
    float y; // 0x4
    float width; // 0x8
    float height; // 0xC
    bool isOn(vector2 const &) const;
    _inline bool isOn(float, float) const;
    _inline float x1() const;
    _inline float y1() const;
    _inline void empty();
    void include(float, float);
};
static_assert(sizeof(PrimRectangle) == 16, "Invalid PrimRectangle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool PrimRectangle::isOn(float, float) const // 0x4658A6
{
    mangled_assert("?isOn@PrimRectangle@@QBE_NMM@Z");
    todo("implement");
}

_inline float PrimRectangle::x1() const // 0x467261
{
    mangled_assert("?x1@PrimRectangle@@QBEMXZ");
    todo("implement");
}

_inline float PrimRectangle::y1() const // 0x467278
{
    mangled_assert("?y1@PrimRectangle@@QBEMXZ");
    todo("implement");
}

_inline void PrimRectangle::empty() // 0x45A7FC
{
    mangled_assert("?empty@PrimRectangle@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PRIM_H__
/* combined */
#ifndef __PRIM_H__
#define __PRIM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct PrimRectangle
{
    float x; // 0x0
    float y; // 0x4
    float width; // 0x8
    float height; // 0xC
    bool isOn(vector2 const &) const;
    bool isOn(float, float) const;
    float x1() const;
    float y1() const;
    void empty();
    void include(float, float);
};
static_assert(sizeof(PrimRectangle) == 16, "Invalid PrimRectangle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PRIM_H__
#endif

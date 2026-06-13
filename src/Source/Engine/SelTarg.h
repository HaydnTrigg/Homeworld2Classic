#if 0
#ifndef __SELTARG_H__
#define __SELTARG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SelTarg
{
public:
    _inline SelTarg(SelTarg const &); /* compiler_generated() */
    SelTarg();
    virtual bool intersectPoint(float, float) const;
    virtual float intersectRect(PrimRectangle const &, bool);
    virtual void getRectangle(PrimRectangle *, bool, float) const;
    virtual void getRectangleCentred(PrimRectangle *, bool, float) const;
    virtual bool isOnScreen() const;
    virtual void compute(vector3 const &, float, matrix3 const &, float, Camera const *);
    vector2 circle; // 0x4
    float circleRadius; // 0xC
    float circleDepth; // 0x10
    unsigned __int32 frameCounter; // 0x14
private:
    bool isPointInPrecise(float, float) const;
    bool isPointInCircle(float, float, float) const;
public:
    _inline SelTarg &operator=(SelTarg const &); /* compiler_generated() */
};
static_assert(sizeof(SelTarg) == 24, "Invalid SelTarg size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SELTARG_H__
#endif

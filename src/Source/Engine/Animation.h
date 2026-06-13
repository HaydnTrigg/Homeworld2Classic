#if 0
#ifndef __ANIMATION_H__
#define __ANIMATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AnimatedAttribute
{
public:
    AnimatedAttribute();
    void attachAttribute(float *);
    void attachCurve(AnimCurve *);
    void evaluate(float);
    float *m_attribute; // 0x0
    AnimCurve *m_curve; // 0x4
};
static_assert(sizeof(AnimatedAttribute) == 8, "Invalid AnimatedAttribute size");

class AnimVector3
{
public:
    AnimVector3();
    ~AnimVector3();
    void attachCurve(unsigned __int32, AnimCurve *);
    AnimCurve *getCurve(unsigned __int32);
    void evaluate(float, vector3 &) const;
private:
    AnimCurve *m_curves[3]; // 0x0
};
static_assert(sizeof(AnimVector3) == 12, "Invalid AnimVector3 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ANIMATION_H__
#endif

#if 0
#ifndef __FOCALPOINT_H__
#define __FOCALPOINT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FocalPoint
{
public:
    FocalPoint(FocalPoint const &); /* compiler_generated() */
    FocalPoint(vector3 const &);
    FocalPoint(Selection const &);
    unsigned __int32 update(float *);
    void unlock();
    OrbitParameters const &getParam() const;
    _inline OrbitParameters &getParam();
    bool m_bFocusOnSelection; // 0x0
    bool m_bUnlocked; // 0x1
    vector3 m_oldTarget; // 0x4
    Selection m_target; // 0x10
    vector3 m_targetPos; // 0x44
private:
    OrbitParameters m_param; // 0x50
public:
    _inline ~FocalPoint(); /* compiler_generated() */
    FocalPoint &operator=(FocalPoint const &); /* compiler_generated() */
};
static_assert(sizeof(FocalPoint) == 112, "Invalid FocalPoint size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline OrbitParameters &FocalPoint::getParam() // 0x4DF34D
{
    mangled_assert("?getParam@FocalPoint@@QAEAAVOrbitParameters@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FOCALPOINT_H__
#endif

#if 0
#ifndef __MARKERANIMATION_H__
#define __MARKERANIMATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MarkerAnimation
{
public:
    MarkerAnimation(AnimVector3 *, AnimVector3 *);
    static void update(float currentTime, AnimVector3 const &transKeys, AnimVector3 const &rotKeys, matrix4 &output);
private:
    AnimVector3 *m_pKeyTranslation; // 0x0
    AnimVector3 *m_pKeyRotation; // 0x4
};
static_assert(sizeof(MarkerAnimation) == 8, "Invalid MarkerAnimation size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MARKERANIMATION_H__
#endif

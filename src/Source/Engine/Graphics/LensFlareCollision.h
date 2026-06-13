#if 0
#ifndef __LENSFLARECOLLISION_H__
#define __LENSFLARECOLLISION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LensFlareCollision :
    public LensFlareManager::CollisionInterface
{
public:
    virtual bool CheckOcclusion(Camera const *, vector2 const &) const override;
    LensFlareCollision(LensFlareCollision const &); /* compiler_generated() */
    _inline LensFlareCollision(); /* compiler_generated() */
    LensFlareCollision &operator=(LensFlareCollision const &); /* compiler_generated() */
};
static_assert(sizeof(LensFlareCollision) == 4, "Invalid LensFlareCollision size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LENSFLARECOLLISION_H__
#endif

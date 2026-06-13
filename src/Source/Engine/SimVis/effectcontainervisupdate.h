#if 0
#ifndef __EFFECTCONTAINERVISUPDATE_H__
#define __EFFECTCONTAINERVISUPDATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EffectContainerVisUpdate
{
public:
    virtual bool IsVisible(Sob const *) = 0;
    EffectContainerVisUpdate(EffectContainerVisUpdate const &); /* compiler_generated() */
    _inline EffectContainerVisUpdate(); /* compiler_generated() */
    EffectContainerVisUpdate &operator=(EffectContainerVisUpdate const &); /* compiler_generated() */
};
static_assert(sizeof(EffectContainerVisUpdate) == 4, "Invalid EffectContainerVisUpdate size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __EFFECTCONTAINERVISUPDATE_H__
#endif

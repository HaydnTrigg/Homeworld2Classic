#if 0
#ifndef __HW2PATCH_H__
#define __HW2PATCH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2Patch :
    public PatchBase
{
public:
    HW2Patch(HW2Patch const &); /* compiler_generated() */
    HW2Patch();
    virtual bool Save(char const *) const override;
    virtual bool Open(char const *) override;
    bool IsLooping();
    virtual _inline ~HW2Patch() override; /* compiler_generated() */
    HW2Patch &operator=(HW2Patch const &); /* compiler_generated() */
};
static_assert(sizeof(HW2Patch) == 508, "Invalid HW2Patch size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2PATCH_H__
#endif

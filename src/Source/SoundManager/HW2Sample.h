#if 0
#ifndef __HW2SAMPLE_H__
#define __HW2SAMPLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2Sample :
    public SampleBase
{
public:
    HW2Sample(HW2Sample const &); /* compiler_generated() */
    HW2Sample();
    virtual bool Save(char const *) const override;
    virtual bool Open(char const *) override;
    virtual _inline ~HW2Sample() override; /* compiler_generated() */
    HW2Sample &operator=(HW2Sample const &); /* compiler_generated() */
};
static_assert(sizeof(HW2Sample) == 64, "Invalid HW2Sample size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2SAMPLE_H__
#endif

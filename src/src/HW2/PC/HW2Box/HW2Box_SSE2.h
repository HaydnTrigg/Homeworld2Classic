#if 0
#ifndef __HW2BOX_SSE2_H__
#define __HW2BOX_SSE2_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2Box_SSE2 :
    public HW2Box
{
public:
    HW2Box_SSE2(HW2Box_SSE2 const &); /* compiler_generated() */
    HW2Box_SSE2();
    virtual ~HW2Box_SSE2() override;
    virtual void FastCopy4(void *, void const *, unsigned __int32) override;
    HW2Box_SSE2 &operator=(HW2Box_SSE2 const &); /* compiler_generated() */
};
static_assert(sizeof(HW2Box_SSE2) == 4, "Invalid HW2Box_SSE2 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2BOX_SSE2_H__
#endif

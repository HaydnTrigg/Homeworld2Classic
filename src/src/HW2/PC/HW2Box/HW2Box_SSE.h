#if 0
#ifndef __HW2BOX_SSE_H__
#define __HW2BOX_SSE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2Box_SSE :
    public HW2Box
{
public:
    HW2Box_SSE(HW2Box_SSE const &); /* compiler_generated() */
    HW2Box_SSE();
    virtual ~HW2Box_SSE() override;
    virtual void FastCopy4(void *, void const *, unsigned __int32) override;
    virtual void Matrix4FastMultiply(matrix4 &, matrix4 const &, matrix4 const &) const override;
    HW2Box_SSE &operator=(HW2Box_SSE const &); /* compiler_generated() */
};
static_assert(sizeof(HW2Box_SSE) == 4, "Invalid HW2Box_SSE size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2BOX_SSE_H__
#endif

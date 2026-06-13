#if 0
#ifndef __HW2BOX_3DNOW_H__
#define __HW2BOX_3DNOW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2Box_3DNow :
    public HW2Box
{
public:
    HW2Box_3DNow(HW2Box_3DNow const &); /* compiler_generated() */
    HW2Box_3DNow();
    virtual ~HW2Box_3DNow() override;
    virtual void FastCopy4(void *, void const *, unsigned __int32) override;
    HW2Box_3DNow &operator=(HW2Box_3DNow const &); /* compiler_generated() */
};
static_assert(sizeof(HW2Box_3DNow) == 4, "Invalid HW2Box_3DNow size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2BOX_3DNOW_H__
#endif

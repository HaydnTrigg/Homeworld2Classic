#if 0
#ifndef __HW2BOX_STD_H__
#define __HW2BOX_STD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2Box_std :
    public HW2Box
{
public:
    HW2Box_std(HW2Box_std const &); /* compiler_generated() */
    HW2Box_std();
    virtual ~HW2Box_std() override;
    virtual void FastCopy4(void *, void const *, unsigned __int32) override;
    virtual void Matrix4FastMultiply(matrix4 &, matrix4 const &, matrix4 const &) const override;
    HW2Box_std &operator=(HW2Box_std const &); /* compiler_generated() */
};
static_assert(sizeof(HW2Box_std) == 4, "Invalid HW2Box_std size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2BOX_STD_H__
#endif

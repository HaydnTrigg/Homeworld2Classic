#if 0
#ifndef __VOLUMESTATIC_H__
#define __VOLUMESTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class VolumeStatic :
    public SobUnmoveableStatic
{
public:
    unsigned __int32 dummy; // 0x1BC
    virtual ~VolumeStatic() override; /* compiler_generated() */
    VolumeStatic(VolumeStatic const &); /* compiler_generated() */
    VolumeStatic &operator=(VolumeStatic const &); /* compiler_generated() */
};
static_assert(sizeof(VolumeStatic) == 448, "Invalid VolumeStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VOLUMESTATIC_H__
#endif

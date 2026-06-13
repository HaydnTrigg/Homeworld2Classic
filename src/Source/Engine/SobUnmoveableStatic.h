#if 0
#ifndef __SOBUNMOVEABLESTATIC_H__
#define __SOBUNMOVEABLESTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobUnmoveableStatic :
    public SobStatic
{
public:
    virtual ~SobUnmoveableStatic() override; /* compiler_generated() */
    SobUnmoveableStatic(SobUnmoveableStatic const &); /* compiler_generated() */
    SobUnmoveableStatic &operator=(SobUnmoveableStatic const &); /* compiler_generated() */
};
static_assert(sizeof(SobUnmoveableStatic) == 444, "Invalid SobUnmoveableStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOBUNMOVEABLESTATIC_H__
#endif

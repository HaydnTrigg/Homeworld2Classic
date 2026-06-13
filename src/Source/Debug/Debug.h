#if 0
#ifndef __DEBUG_H__
#define __DEBUG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class compileAssert<1>
{
public:
    static void Assert();
};
static_assert(sizeof(compileAssert<1>) == 1, "Invalid compileAssert<1> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DEBUG_H__
#endif

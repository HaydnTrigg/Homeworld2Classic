#if 0
#ifndef __R_FUNCS_H__
#define __R_FUNCS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct CapMapTable
{
    bool hit; // 0x0
    BooleanCap cap; // 0x4
    unsigned __int32 glCap; // 0x8
    bool *var; // 0xC
    bool const *canUse; // 0x10
    bool always; // 0x14
};
static_assert(sizeof(CapMapTable) == 24, "Invalid CapMapTable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __R_FUNCS_H__
/* combined */
#ifndef __R_FUNCS_H__
#define __R_FUNCS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __R_FUNCS_H__
#endif

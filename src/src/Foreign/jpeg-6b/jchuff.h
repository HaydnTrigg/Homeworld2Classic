#if 0
#ifndef __JCHUFF_H__
#define __JCHUFF_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct c_derived_tbl
{
    unsigned __int32 ehufco[256]; // 0x0
    char ehufsi[256]; // 0x400
};
static_assert(sizeof(c_derived_tbl) == 1280, "Invalid c_derived_tbl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __JCHUFF_H__
#endif

#if 0
#ifndef __LLIMITS_H__
#define __LLIMITS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

union L_Umaxalign
{
    double d; // 0x0
    char *s; // 0x0
    long l; // 0x0
};
static_assert(sizeof(L_Umaxalign) == 8, "Invalid L_Umaxalign size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LLIMITS_H__
#endif

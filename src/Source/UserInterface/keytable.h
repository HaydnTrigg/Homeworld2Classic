#if 0
#ifndef __KEYTABLE_H__
#define __KEYTABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct VisibleKeyMap
{
    char regularKey; // 0x0
    char shiftKey; // 0x1
};
static_assert(sizeof(VisibleKeyMap) == 2, "Invalid VisibleKeyMap size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __KEYTABLE_H__
#endif

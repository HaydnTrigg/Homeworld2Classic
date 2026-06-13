#if 0
#ifndef __LTM_H__
#define __LTM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum TMS
{
    TM_GETTABLE = 0,
    TM_SETTABLE,
    TM_INDEX,
    TM_GETGLOBAL,
    TM_SETGLOBAL,
    TM_ADD,
    TM_SUB,
    TM_MUL,
    TM_DIV,
    TM_POW,
    TM_UNM,
    TM_LT,
    TM_CONCAT,
    TM_GC,
    TM_FUNCTION,
    TM_N,
};

/* ---------- definitions */

struct TM
{
    Closure *method[15]; // 0x0
    TString *collected; // 0x3C
};
static_assert(sizeof(TM) == 64, "Invalid TM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LTM_H__
#endif

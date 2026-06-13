#if 0
#ifndef __LCODE_H__
#define __LCODE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum BinOpr
{
    OPR_ADD = 0,
    OPR_SUB,
    OPR_MULT,
    OPR_DIV,
    OPR_POW,
    OPR_CONCAT,
    OPR_NE,
    OPR_EQ,
    OPR_LT,
    OPR_LE,
    OPR_GT,
    OPR_GE,
    OPR_AND,
    OPR_OR,
    OPR_NOBINOPR,
};

enum UnOpr
{
    OPR_MINUS = 0,
    OPR_NOT,
    OPR_NOUNOPR,
};

enum Mode
{
    iO = 0,
    iU,
    iS,
    iAB,
};

/* ---------- definitions */

struct OpProperties
{
    char mode; // 0x0
    unsigned char push; // 0x1
    unsigned char pop; // 0x2
};
static_assert(sizeof(OpProperties) == 3, "Invalid OpProperties size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LCODE_H__
#endif

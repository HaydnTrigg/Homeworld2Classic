#if 0
#ifndef __LPARSER_H__
#define __LPARSER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum expkind
{
    VGLOBAL = 0,
    VLOCAL,
    VINDEXED,
    VEXP,
};

/* ---------- definitions */

struct expdesc
{
    expkind k; // 0x0
    <unnamed-tag> u; // 0x4
};
static_assert(sizeof(expdesc) == 12, "Invalid expdesc size");

union <unnamed-tag>
{
    __int32 index; // 0x0
    <unnamed-tag> l; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

struct <unnamed-tag>
{
    __int32 t; // 0x0
    __int32 f; // 0x4
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

struct FuncState
{
    Proto *f; // 0x0
    FuncState *prev; // 0x4
    LexState *ls; // 0x8
    lua_State *L; // 0xC
    __int32 pc; // 0x10
    __int32 lasttarget; // 0x14
    __int32 jlt; // 0x18
    short stacklevel; // 0x1C
    short nactloc; // 0x1E
    short nupvalues; // 0x20
    __int32 lastline; // 0x24
    Breaklabel *bl; // 0x28
    expdesc upvalues[32]; // 0x2C
    __int32 actloc[200]; // 0x1AC
};
static_assert(sizeof(FuncState) == 1228, "Invalid FuncState size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LPARSER_H__
#endif

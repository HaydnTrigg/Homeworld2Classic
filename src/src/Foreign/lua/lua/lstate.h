#if 0
#ifndef __LSTATE_H__
#define __LSTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct Ref
{
    lua_TObject o; // 0x0
    __int32 st; // 0x10
};
static_assert(sizeof(Ref) == 24, "Invalid Ref size");

struct stringtable
{
    __int32 size; // 0x0
    unsigned long nuse; // 0x4
    TString **hash; // 0x8
};
static_assert(sizeof(stringtable) == 12, "Invalid stringtable size");

struct lua_State
{
    lua_TObject *top; // 0x0
    lua_TObject *stack; // 0x4
    lua_TObject *stack_last; // 0x8
    __int32 stacksize; // 0xC
    lua_TObject *Cbase; // 0x10
    lua_longjmp *errorJmp; // 0x14
    char *Mbuffer; // 0x18
    unsigned __int32 Mbuffsize; // 0x1C
    Proto *rootproto; // 0x20
    Closure *rootcl; // 0x24
    Hash *roottable; // 0x28
    stringtable strt; // 0x2C
    stringtable udt; // 0x38
    Hash *gt; // 0x44
    TM *TMtable; // 0x48
    __int32 last_tag; // 0x4C
    Ref *refArray; // 0x50
    __int32 refSize; // 0x54
    __int32 refFree; // 0x58
    unsigned long GCthreshold; // 0x5C
    unsigned long nblocks; // 0x60
    void (*callhook)(lua_State *, lua_Debug *); // 0x64
    void (*linehook)(lua_State *, lua_Debug *); // 0x68
    __int32 allowhooks; // 0x6C
};
static_assert(sizeof(lua_State) == 112, "Invalid lua_State size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LSTATE_H__
#endif

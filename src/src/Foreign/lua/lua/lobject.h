#if 0
#ifndef __LOBJECT_H__
#define __LOBJECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

union Value
{
    TString *ts; // 0x0
    Closure *cl; // 0x0
    Hash *a; // 0x0
    CallInfo *i; // 0x0
    double n; // 0x0
};
static_assert(sizeof(Value) == 8, "Invalid Value size");

struct lua_TObject
{
    __int32 ttype; // 0x0
    Value value; // 0x8
};
static_assert(sizeof(lua_TObject) == 16, "Invalid lua_TObject size");

struct TString
{
    <unnamed-tag> u; // 0x0
    unsigned __int32 len; // 0x8
    TString *nexthash; // 0xC
    __int32 marked; // 0x10
    char str[4]; // 0x14
};
static_assert(sizeof(TString) == 24, "Invalid TString size");

union <unnamed-tag>
{
    <unnamed-tag> s; // 0x0
    <unnamed-tag> d; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

struct <unnamed-tag>
{
    unsigned long hash; // 0x0
    __int32 constindex; // 0x4
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

struct <unnamed-tag>
{
    __int32 tag; // 0x0
    void *value; // 0x4
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

struct Proto
{
    double *knum; // 0x0
    __int32 nknum; // 0x4
    TString **kstr; // 0x8
    __int32 nkstr; // 0xC
    Proto **kproto; // 0x10
    __int32 nkproto; // 0x14
    unsigned long *code; // 0x18
    __int32 ncode; // 0x1C
    short numparams; // 0x20
    short is_vararg; // 0x22
    short maxstacksize; // 0x24
    short marked; // 0x26
    Proto *next; // 0x28
    __int32 *lineinfo; // 0x2C
    __int32 nlineinfo; // 0x30
    __int32 nlocvars; // 0x34
    LocVar *locvars; // 0x38
    __int32 lineDefined; // 0x3C
    TString *source; // 0x40
};
static_assert(sizeof(Proto) == 68, "Invalid Proto size");

struct LocVar
{
    TString *varname; // 0x0
    __int32 startpc; // 0x4
    __int32 endpc; // 0x8
};
static_assert(sizeof(LocVar) == 12, "Invalid LocVar size");

struct Closure
{
    <unnamed-tag> f; // 0x0
    Closure *next; // 0x4
    Closure *mark; // 0x8
    short isC; // 0xC
    short nupvalues; // 0xE
    lua_TObject upvalue[1]; // 0x10
};
static_assert(sizeof(Closure) == 32, "Invalid Closure size");

union <unnamed-tag>
{
    __int32 (*c)(lua_State *); // 0x0
    Proto *l; // 0x0
};
static_assert(sizeof(<unnamed-tag>) == 4, "Invalid <unnamed-tag> size");

struct Node
{
    lua_TObject key; // 0x0
    lua_TObject val; // 0x10
    Node *next; // 0x20
};
static_assert(sizeof(Node) == 40, "Invalid Node size");

struct Hash
{
    Node *node; // 0x0
    __int32 htag; // 0x4
    __int32 size; // 0x8
    Node *firstfree; // 0xC
    Hash *next; // 0x10
    Hash *mark; // 0x14
};
static_assert(sizeof(Hash) == 24, "Invalid Hash size");

struct CallInfo
{
    Closure *func; // 0x0
    unsigned long const **pc; // 0x4
    __int32 lastpc; // 0x8
    __int32 line; // 0xC
    __int32 refi; // 0x10
};
static_assert(sizeof(CallInfo) == 20, "Invalid CallInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOBJECT_H__
#endif

#if 0
#ifndef __LAUXLIB_H__
#define __LAUXLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct luaL_reg
{
    char const *name; // 0x0
    __int32 (*func)(lua_State *); // 0x4
};
static_assert(sizeof(luaL_reg) == 8, "Invalid luaL_reg size");

struct luaL_Buffer
{
    char *p; // 0x0
    __int32 level; // 0x4
    lua_State *L; // 0x8
    char buffer[512]; // 0xC
};
static_assert(sizeof(luaL_Buffer) == 524, "Invalid luaL_Buffer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LAUXLIB_H__
/* combined */
#ifndef __LAUXLIB_H__
#define __LAUXLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LAUXLIB_H__
#endif

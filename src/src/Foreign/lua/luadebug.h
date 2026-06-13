#if 0
#ifndef __LUADEBUG_H__
#define __LUADEBUG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct lua_Debug
{
    char const *event; // 0x0
    __int32 currentline; // 0x4
    char const *name; // 0x8
    char const *namewhat; // 0xC
    __int32 nups; // 0x10
    __int32 linedefined; // 0x14
    char const *what; // 0x18
    char const *source; // 0x1C
    char short_src[60]; // 0x20
    lua_TObject *_func; // 0x5C
};
static_assert(sizeof(lua_Debug) == 96, "Invalid lua_Debug size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUADEBUG_H__
#endif

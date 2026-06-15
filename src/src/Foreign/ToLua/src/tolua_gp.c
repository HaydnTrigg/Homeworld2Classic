#if 0
/* ---------- headers */

#include "decomp.h"
#include "src\Src\Foreign\ToLua\src\tolua.h"
#include <memory\memorylib.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include "src\Src\Foreign\ToLua\src\tolua_tm.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <memory.h>
#include <lua.h>
#include <stddef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern double tolua_getnumber(lua_State *L, __int32 narg, double def);
extern char const *tolua_getstring(lua_State *L, __int32 narg, char const *def);
extern void *tolua_getuserdata(lua_State *L, __int32 narg, void *def);
extern void *tolua_getusertype(lua_State *L, __int32 narg, void *def);
extern __int32 tolua_getvalue(lua_State *L, __int32 narg, __int32 def);
extern __int32 tolua_getbool(lua_State *L, __int32 narg, __int32 def);
extern double tolua_getfieldnumber(lua_State *L, __int32 lo, __int32 index, double def);
extern char const *tolua_getfieldstring(lua_State *L, __int32 lo, __int32 index, char const *def);
extern void *tolua_getfielduserdata(lua_State *L, __int32 lo, __int32 index, void *def);
extern void *tolua_getfieldusertype(lua_State *L, __int32 lo, __int32 index, void *def);
extern __int32 tolua_getfieldvalue(lua_State *L, __int32 lo, __int32 index, __int32 def);
extern __int32 tolua_getfieldbool(lua_State *L, __int32 lo, __int32 index, __int32 def);
extern void tolua_pushnumber(lua_State *L, double value);
extern void tolua_pushstring(lua_State *L, char const *value);
extern void tolua_pushuserdata(lua_State *L, void *value);
extern void tolua_pushusertype(lua_State *L, void *value, __int32 tag);
extern void tolua_pushvalue(lua_State *L, __int32 lo);
extern void tolua_pushbool(lua_State *L, __int32 value);
extern void tolua_pushfieldnumber(lua_State *L, __int32 lo, __int32 index, double v);
extern void tolua_pushfieldstring(lua_State *L, __int32 lo, __int32 index, char *v);
extern void tolua_pushfielduserdata(lua_State *L, __int32 lo, __int32 index, void *v);
extern void tolua_pushfieldusertype(lua_State *L, __int32 lo, __int32 index, void *v, __int32 tag);
extern void tolua_pushfieldvalue(lua_State *L, __int32 lo, __int32 index, __int32 v);
extern void tolua_pushfieldbool(lua_State *L, __int32 lo, __int32 index, __int32 v);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

double tolua_getnumber(lua_State *L, __int32 narg, double def) // 0x6F9DA4
{
    mangled_assert("_tolua_getnumber@16");
    todo("implement");
}

char const *tolua_getstring(lua_State *L, __int32 narg, char const *def) // 0x6F9DE0
{
    mangled_assert("_tolua_getstring@12");
    todo("implement");
}

void *tolua_getuserdata(lua_State *L, __int32 narg, void *def) // 0x6F9E12
{
    mangled_assert("_tolua_getuserdata@12");
    todo("implement");
}

void *tolua_getusertype(lua_State *L, __int32 narg, void *def) // 0x6F9E44
{
    mangled_assert("_tolua_getusertype@12");
    todo("implement");
}

__int32 tolua_getvalue(lua_State *L, __int32 narg, __int32 def) // 0x6F9E76
{
    mangled_assert("_tolua_getvalue@12");
    todo("implement");
}

__int32 tolua_getbool(lua_State *L, __int32 narg, __int32 def) // 0x6F9B1E
{
    mangled_assert("_tolua_getbool@12");
    todo("implement");
}

double tolua_getfieldnumber(lua_State *L, __int32 lo, __int32 index, double def) // 0x6F9BEC
{
    mangled_assert("_tolua_getfieldnumber@20");
    todo("implement");
}

char const *tolua_getfieldstring(lua_State *L, __int32 lo, __int32 index, char const *def) // 0x6F9C4E
{
    mangled_assert("_tolua_getfieldstring@16");
    todo("implement");
}

void *tolua_getfielduserdata(lua_State *L, __int32 lo, __int32 index, void *def) // 0x6F9CA6
{
    mangled_assert("_tolua_getfielduserdata@16");
    todo("implement");
}

void *tolua_getfieldusertype(lua_State *L, __int32 lo, __int32 index, void *def) // 0x6F9CFE
{
    mangled_assert("_tolua_getfieldusertype@16");
    todo("implement");
}

__int32 tolua_getfieldvalue(lua_State *L, __int32 lo, __int32 index, __int32 def) // 0x6F9D56
{
    mangled_assert("_tolua_getfieldvalue@16");
    todo("implement");
}

__int32 tolua_getfieldbool(lua_State *L, __int32 lo, __int32 index, __int32 def) // 0x6F9B7F
{
    mangled_assert("_tolua_getfieldbool@16");
    todo("implement");
}

void tolua_pushnumber(lua_State *L, double value) // 0x6FA025
{
    mangled_assert("_tolua_pushnumber@12");
    todo("implement");
}

void tolua_pushstring(lua_State *L, char const *value) // 0x6FA03F
{
    mangled_assert("_tolua_pushstring@8");
    todo("implement");
}

void tolua_pushuserdata(lua_State *L, void *value) // 0x6FA059
{
    mangled_assert("_tolua_pushuserdata@8");
    todo("implement");
}

void tolua_pushusertype(lua_State *L, void *value, __int32 tag) // 0x6FA07F
{
    mangled_assert("_tolua_pushusertype@12");
    todo("implement");
}

void tolua_pushvalue(lua_State *L, __int32 lo) // 0x6FA09C
{
    mangled_assert("_tolua_pushvalue@8");
    todo("implement");
}

void tolua_pushbool(lua_State *L, __int32 value) // 0x6F9E9D
{
    mangled_assert("_tolua_pushbool@8");
    todo("implement");
}

void tolua_pushfieldnumber(lua_State *L, __int32 lo, __int32 index, double v) // 0x6F9F05
{
    mangled_assert("_tolua_pushfieldnumber@20");
    todo("implement");
}

void tolua_pushfieldstring(lua_State *L, __int32 lo, __int32 index, char *v) // 0x6F9F45
{
    mangled_assert("_tolua_pushfieldstring@16");
    todo("implement");
}

void tolua_pushfielduserdata(lua_State *L, __int32 lo, __int32 index, void *v) // 0x6F9F7C
{
    mangled_assert("_tolua_pushfielduserdata@16");
    todo("implement");
}

void tolua_pushfieldusertype(lua_State *L, __int32 lo, __int32 index, void *v, __int32 tag) // 0x6F9FB3
{
    mangled_assert("_tolua_pushfieldusertype@20");
    todo("implement");
}

void tolua_pushfieldvalue(lua_State *L, __int32 lo, __int32 index, __int32 v) // 0x6F9FED
{
    mangled_assert("_tolua_pushfieldvalue@16");
    todo("implement");
}

void tolua_pushfieldbool(lua_State *L, __int32 lo, __int32 index, __int32 v) // 0x6F9ECE
{
    mangled_assert("_tolua_pushfieldbool@16");
    todo("implement");
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua.h"
#include <memory\memorylib.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua_tm.h"
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

_extern double _sub_6F9DA4(lua_State *, __int32, double);
double tolua_getnumber(lua_State *L, __int32 narg, double def) // 0x6F9DA4
{
    mangled_assert("_tolua_getnumber@16");
    todo("implement");
    double __result = _sub_6F9DA4(L, narg, def);
    return __result;
}

_extern char const *_sub_6F9DE0(lua_State *, __int32, char const *);
char const *tolua_getstring(lua_State *L, __int32 narg, char const *def) // 0x6F9DE0
{
    mangled_assert("_tolua_getstring@12");
    todo("implement");
    char const * __result = _sub_6F9DE0(L, narg, def);
    return __result;
}

_extern void *_sub_6F9E12(lua_State *, __int32, void *);
void *tolua_getuserdata(lua_State *L, __int32 narg, void *def) // 0x6F9E12
{
    mangled_assert("_tolua_getuserdata@12");
    todo("implement");
    void * __result = _sub_6F9E12(L, narg, def);
    return __result;
}

_extern void *_sub_6F9E44(lua_State *, __int32, void *);
void *tolua_getusertype(lua_State *L, __int32 narg, void *def) // 0x6F9E44
{
    mangled_assert("_tolua_getusertype@12");
    todo("implement");
    void * __result = _sub_6F9E44(L, narg, def);
    return __result;
}

_extern __int32 _sub_6F9E76(lua_State *, __int32, __int32);
__int32 tolua_getvalue(lua_State *L, __int32 narg, __int32 def) // 0x6F9E76
{
    mangled_assert("_tolua_getvalue@12");
    todo("implement");
    __int32 __result = _sub_6F9E76(L, narg, def);
    return __result;
}

_extern __int32 _sub_6F9B1E(lua_State *, __int32, __int32);
__int32 tolua_getbool(lua_State *L, __int32 narg, __int32 def) // 0x6F9B1E
{
    mangled_assert("_tolua_getbool@12");
    todo("implement");
    __int32 __result = _sub_6F9B1E(L, narg, def);
    return __result;
}

_extern double _sub_6F9BEC(lua_State *, __int32, __int32, double);
double tolua_getfieldnumber(lua_State *L, __int32 lo, __int32 index, double def) // 0x6F9BEC
{
    mangled_assert("_tolua_getfieldnumber@20");
    todo("implement");
    double __result = _sub_6F9BEC(L, lo, index, def);
    return __result;
}

_extern char const *_sub_6F9C4E(lua_State *, __int32, __int32, char const *);
char const *tolua_getfieldstring(lua_State *L, __int32 lo, __int32 index, char const *def) // 0x6F9C4E
{
    mangled_assert("_tolua_getfieldstring@16");
    todo("implement");
    char const * __result = _sub_6F9C4E(L, lo, index, def);
    return __result;
}

_extern void *_sub_6F9CA6(lua_State *, __int32, __int32, void *);
void *tolua_getfielduserdata(lua_State *L, __int32 lo, __int32 index, void *def) // 0x6F9CA6
{
    mangled_assert("_tolua_getfielduserdata@16");
    todo("implement");
    void * __result = _sub_6F9CA6(L, lo, index, def);
    return __result;
}

_extern void *_sub_6F9CFE(lua_State *, __int32, __int32, void *);
void *tolua_getfieldusertype(lua_State *L, __int32 lo, __int32 index, void *def) // 0x6F9CFE
{
    mangled_assert("_tolua_getfieldusertype@16");
    todo("implement");
    void * __result = _sub_6F9CFE(L, lo, index, def);
    return __result;
}

_extern __int32 _sub_6F9D56(lua_State *, __int32, __int32, __int32);
__int32 tolua_getfieldvalue(lua_State *L, __int32 lo, __int32 index, __int32 def) // 0x6F9D56
{
    mangled_assert("_tolua_getfieldvalue@16");
    todo("implement");
    __int32 __result = _sub_6F9D56(L, lo, index, def);
    return __result;
}

_extern __int32 _sub_6F9B7F(lua_State *, __int32, __int32, __int32);
__int32 tolua_getfieldbool(lua_State *L, __int32 lo, __int32 index, __int32 def) // 0x6F9B7F
{
    mangled_assert("_tolua_getfieldbool@16");
    todo("implement");
    __int32 __result = _sub_6F9B7F(L, lo, index, def);
    return __result;
}

_extern void _sub_6FA025(lua_State *, double);
void tolua_pushnumber(lua_State *L, double value) // 0x6FA025
{
    mangled_assert("_tolua_pushnumber@12");
    todo("implement");
    _sub_6FA025(L, value);
}

_extern void _sub_6FA03F(lua_State *, char const *);
void tolua_pushstring(lua_State *L, char const *value) // 0x6FA03F
{
    mangled_assert("_tolua_pushstring@8");
    todo("implement");
    _sub_6FA03F(L, value);
}

_extern void _sub_6FA059(lua_State *, void *);
void tolua_pushuserdata(lua_State *L, void *value) // 0x6FA059
{
    mangled_assert("_tolua_pushuserdata@8");
    todo("implement");
    _sub_6FA059(L, value);
}

_extern void _sub_6FA07F(lua_State *, void *, __int32);
void tolua_pushusertype(lua_State *L, void *value, __int32 tag) // 0x6FA07F
{
    mangled_assert("_tolua_pushusertype@12");
    todo("implement");
    _sub_6FA07F(L, value, tag);
}

_extern void _sub_6FA09C(lua_State *, __int32);
void tolua_pushvalue(lua_State *L, __int32 lo) // 0x6FA09C
{
    mangled_assert("_tolua_pushvalue@8");
    todo("implement");
    _sub_6FA09C(L, lo);
}

_extern void _sub_6F9E9D(lua_State *, __int32);
void tolua_pushbool(lua_State *L, __int32 value) // 0x6F9E9D
{
    mangled_assert("_tolua_pushbool@8");
    todo("implement");
    _sub_6F9E9D(L, value);
}

_extern void _sub_6F9F05(lua_State *, __int32, __int32, double);
void tolua_pushfieldnumber(lua_State *L, __int32 lo, __int32 index, double v) // 0x6F9F05
{
    mangled_assert("_tolua_pushfieldnumber@20");
    todo("implement");
    _sub_6F9F05(L, lo, index, v);
}

_extern void _sub_6F9F45(lua_State *, __int32, __int32, char *);
void tolua_pushfieldstring(lua_State *L, __int32 lo, __int32 index, char *v) // 0x6F9F45
{
    mangled_assert("_tolua_pushfieldstring@16");
    todo("implement");
    _sub_6F9F45(L, lo, index, v);
}

_extern void _sub_6F9F7C(lua_State *, __int32, __int32, void *);
void tolua_pushfielduserdata(lua_State *L, __int32 lo, __int32 index, void *v) // 0x6F9F7C
{
    mangled_assert("_tolua_pushfielduserdata@16");
    todo("implement");
    _sub_6F9F7C(L, lo, index, v);
}

_extern void _sub_6F9FB3(lua_State *, __int32, __int32, void *, __int32);
void tolua_pushfieldusertype(lua_State *L, __int32 lo, __int32 index, void *v, __int32 tag) // 0x6F9FB3
{
    mangled_assert("_tolua_pushfieldusertype@20");
    todo("implement");
    _sub_6F9FB3(L, lo, index, v, tag);
}

_extern void _sub_6F9FED(lua_State *, __int32, __int32, __int32);
void tolua_pushfieldvalue(lua_State *L, __int32 lo, __int32 index, __int32 v) // 0x6F9FED
{
    mangled_assert("_tolua_pushfieldvalue@16");
    todo("implement");
    _sub_6F9FED(L, lo, index, v);
}

_extern void _sub_6F9ECE(lua_State *, __int32, __int32, __int32);
void tolua_pushfieldbool(lua_State *L, __int32 lo, __int32 index, __int32 v) // 0x6F9ECE
{
    mangled_assert("_tolua_pushfieldbool@16");
    todo("implement");
    _sub_6F9ECE(L, lo, index, v);
}

/* ---------- private code */
#endif

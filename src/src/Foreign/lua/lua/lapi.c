#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua\ltable.h>
#include <lua\lfunc.h>
#include <lua.h>
#include <stddef.h>
#include <string.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lgc.h>
#include <lua\lmem.h>
#include <lua\ltm.h>
#include <lua\lstring.h>
#include <lua\lapi.h>
#include <lua\lobject.h>
#include <lua\llimits.h>
#include <limits.h>
#include <lua\ldo.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua\lvm.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern lua_TObject *luaA_index(lua_State *L, __int32 index);
extern void luaA_pushobject(lua_State *L, lua_TObject const *o);
extern __int32 lua_stackspace(lua_State *L);
extern __int32 lua_gettop(lua_State *L);
extern void lua_settop(lua_State *L, __int32 index);
extern void lua_remove(lua_State *L, __int32 index);
extern void lua_insert(lua_State *L, __int32 index);
extern void lua_pushvalue(lua_State *L, __int32 index);
extern __int32 lua_type(lua_State *L, __int32 index);
extern char const *lua_typename(lua_State *L, __int32 t);
extern __int32 lua_iscfunction(lua_State *L, __int32 index);
extern __int32 lua_isnumber(lua_State *L, __int32 index);
extern __int32 lua_isstring(lua_State *L, __int32 index);
extern __int32 lua_tag(lua_State *L, __int32 index);
extern __int32 lua_equal(lua_State *L, __int32 index1, __int32 index2);
extern __int32 lua_lessthan(lua_State *L, __int32 index1, __int32 index2);
extern double lua_tonumber(lua_State *L, __int32 index);
extern char const *lua_tostring(lua_State *L, __int32 index);
extern unsigned __int32 lua_strlen(lua_State *L, __int32 index);
extern __int32 (*lua_tocfunction(lua_State *L, __int32 index))(lua_State *);
extern void *lua_touserdata(lua_State *L, __int32 index);
extern void const *lua_topointer(lua_State *L, __int32 index);
extern void lua_pushnil(lua_State *L);
extern void lua_pushnumber(lua_State *L, double n);
extern void lua_pushlstring(lua_State *L, char const *s, unsigned __int32 len);
extern void lua_pushstring(lua_State *L, char const *s);
extern void lua_pushcclosure(lua_State *L, __int32 (*fn)(lua_State *), __int32 n);
extern void lua_pushusertag(lua_State *L, void *u, __int32 tag);
extern void lua_getglobal(lua_State *L, char const *name);
extern void lua_gettable(lua_State *L, __int32 index);
extern void lua_rawget(lua_State *L, __int32 index);
extern void lua_rawgeti(lua_State *L, __int32 index, __int32 n);
extern void lua_getglobals(lua_State *L);
extern __int32 lua_getref(lua_State *L, __int32 ref);
extern void lua_newtable(lua_State *L);
extern void lua_setglobal(lua_State *L, char const *name);
extern void lua_settable(lua_State *L, __int32 index);
extern void lua_rawset(lua_State *L, __int32 index);
extern void lua_rawseti(lua_State *L, __int32 index, __int32 n);
extern void lua_setglobals(lua_State *L);
extern __int32 lua_ref(lua_State *L, __int32 lock);
extern void lua_rawcall(lua_State *L, __int32 nargs, __int32 nresults);
extern __int32 lua_getgcthreshold(lua_State *L);
extern __int32 lua_getgccount(lua_State *L);
extern void lua_setgcthreshold(lua_State *L, __int32 newthreshold);
extern void lua_settag(lua_State *L, __int32 tag);
extern void lua_unref(lua_State *L, __int32 ref);
extern __int32 lua_next(lua_State *L, __int32 index);
extern __int32 lua_getn(lua_State *L, __int32 index);
extern void lua_concat(lua_State *L, __int32 n);
extern void *lua_newuserdata(lua_State *L, unsigned __int32 size);

_static lua_TObject *luaA_indexAcceptable(lua_State *L, __int32 index);

/* ---------- globals */

extern char const lua_ident[118]; // 0x1000F3C0

/* ---------- private variables */

/* ---------- public code */

_extern lua_TObject *_sub_10001003(lua_State *, __int32);
lua_TObject *luaA_index(lua_State *L, __int32 index) // 0x10001003
{
    mangled_assert("_luaA_index@8");
    todo("implement");
    lua_TObject * __result = _sub_10001003(L, index);
    return __result;
}

_extern void _sub_10001051(lua_State *, lua_TObject const *);
void luaA_pushobject(lua_State *L, lua_TObject const *o) // 0x10001051
{
    mangled_assert("_luaA_pushobject@8");
    todo("implement");
    _sub_10001051(L, o);
}

_extern __int32 _sub_10001867(lua_State *);
__int32 lua_stackspace(lua_State *L) // 0x10001867
{
    mangled_assert("_lua_stackspace@4");
    todo("implement");
    __int32 __result = _sub_10001867(L);
    return __result;
}

_extern __int32 _sub_10001260(lua_State *);
__int32 lua_gettop(lua_State *L) // 0x10001260
{
    mangled_assert("_lua_gettop@4");
    todo("implement");
    __int32 __result = _sub_10001260(L);
    return __result;
}

_extern void _sub_10001844(lua_State *, __int32);
void lua_settop(lua_State *L, __int32 index) // 0x10001844
{
    mangled_assert("_lua_settop@8");
    todo("implement");
    _sub_10001844(L, index);
}

_extern void _sub_1000173A(lua_State *, __int32);
void lua_remove(lua_State *L, __int32 index) // 0x1000173A
{
    mangled_assert("_lua_remove@8");
    todo("implement");
    _sub_1000173A(L, index);
}

_extern void _sub_1000126F(lua_State *, __int32);
void lua_insert(lua_State *L, __int32 index) // 0x1000126F
{
    mangled_assert("_lua_insert@8");
    todo("implement");
    _sub_1000126F(L, index);
}

_extern void _sub_1000152B(lua_State *, __int32);
void lua_pushvalue(lua_State *L, __int32 index) // 0x1000152B
{
    mangled_assert("_lua_pushvalue@8");
    todo("implement");
    _sub_1000152B(L, index);
}

_extern __int32 _sub_100019AD(lua_State *, __int32);
__int32 lua_type(lua_State *L, __int32 index) // 0x100019AD
{
    mangled_assert("_lua_type@8");
    todo("implement");
    __int32 __result = _sub_100019AD(L, index);
    return __result;
}

_extern char const *_sub_100019C8(lua_State *, __int32);
char const *lua_typename(lua_State *L, __int32 t) // 0x100019C8
{
    mangled_assert("_lua_typename@8");
    todo("implement");
    char const * __result = _sub_100019C8(L, t);
    return __result;
}

_extern __int32 _sub_100012A9(lua_State *, __int32);
__int32 lua_iscfunction(lua_State *L, __int32 index) // 0x100012A9
{
    mangled_assert("_lua_iscfunction@8");
    todo("implement");
    __int32 __result = _sub_100012A9(L, index);
    return __result;
}

_extern __int32 _sub_100012D0(lua_State *, __int32);
__int32 lua_isnumber(lua_State *L, __int32 index) // 0x100012D0
{
    mangled_assert("_lua_isnumber@8");
    todo("implement");
    __int32 __result = _sub_100012D0(L, index);
    return __result;
}

_extern __int32 _sub_10001301(lua_State *, __int32);
__int32 lua_isstring(lua_State *L, __int32 index) // 0x10001301
{
    mangled_assert("_lua_isstring@8");
    todo("implement");
    __int32 __result = _sub_10001301(L, index);
    return __result;
}

_extern __int32 _sub_100018AB(lua_State *, __int32);
__int32 lua_tag(lua_State *L, __int32 index) // 0x100018AB
{
    mangled_assert("_lua_tag@8");
    todo("implement");
    __int32 __result = _sub_100018AB(L, index);
    return __result;
}

_extern __int32 _sub_100010A5(lua_State *, __int32, __int32);
__int32 lua_equal(lua_State *L, __int32 index1, __int32 index2) // 0x100010A5
{
    mangled_assert("_lua_equal@12");
    todo("implement");
    __int32 __result = _sub_100010A5(L, index1, index2);
    return __result;
}

_extern __int32 _sub_10001322(lua_State *, __int32, __int32);
__int32 lua_lessthan(lua_State *L, __int32 index1, __int32 index2) // 0x10001322
{
    mangled_assert("_lua_lessthan@12");
    todo("implement");
    __int32 __result = _sub_10001322(L, index1, index2);
    return __result;
}

_extern double _sub_100018F2(lua_State *, __int32);
double lua_tonumber(lua_State *L, __int32 index) // 0x100018F2
{
    mangled_assert("_lua_tonumber@8");
    todo("implement");
    double __result = _sub_100018F2(L, index);
    return __result;
}

_extern char const *_sub_10001956(lua_State *, __int32);
char const *lua_tostring(lua_State *L, __int32 index) // 0x10001956
{
    mangled_assert("_lua_tostring@8");
    todo("implement");
    char const * __result = _sub_10001956(L, index);
    return __result;
}

_extern unsigned __int32 _sub_10001876(lua_State *, __int32);
unsigned __int32 lua_strlen(lua_State *L, __int32 index) // 0x10001876
{
    mangled_assert("_lua_strlen@8");
    todo("implement");
    unsigned __int32 __result = _sub_10001876(L, index);
    return __result;
}

_extern __int32 (*_sub_100018CA(lua_State *, __int32))(lua_State *);
__int32 (*lua_tocfunction(lua_State *L, __int32 index))(lua_State *) // 0x100018CA
{
    mangled_assert("_lua_tocfunction@8");
    todo("implement");
    __int32 (*)(lua_State *) __result = _sub_100018CA(L, index);
    return __result;
}

_extern void *_sub_1000198B(lua_State *, __int32);
void *lua_touserdata(lua_State *L, __int32 index) // 0x1000198B
{
    mangled_assert("_lua_touserdata@8");
    todo("implement");
    void * __result = _sub_1000198B(L, index);
    return __result;
}

_extern void const *_sub_1000192F(lua_State *, __int32);
void const *lua_topointer(lua_State *L, __int32 index) // 0x1000192F
{
    mangled_assert("_lua_topointer@8");
    todo("implement");
    void const * __result = _sub_1000192F(L, index);
    return __result;
}

_extern void _sub_10001456(lua_State *);
void lua_pushnil(lua_State *L) // 0x10001456
{
    mangled_assert("_lua_pushnil@4");
    todo("implement");
    _sub_10001456(L);
}

_extern void _sub_10001477(lua_State *, double);
void lua_pushnumber(lua_State *L, double n) // 0x10001477
{
    mangled_assert("_lua_pushnumber@12");
    todo("implement");
    _sub_10001477(L, n);
}

_extern void _sub_10001420(lua_State *, char const *, unsigned __int32);
void lua_pushlstring(lua_State *L, char const *s, unsigned __int32 len) // 0x10001420
{
    mangled_assert("_lua_pushlstring@12");
    todo("implement");
    _sub_10001420(L, s, len);
}

_extern void _sub_100014A7(lua_State *, char const *);
void lua_pushstring(lua_State *L, char const *s) // 0x100014A7
{
    mangled_assert("_lua_pushstring@8");
    todo("implement");
    _sub_100014A7(L, s);
}

_extern void _sub_1000141B(lua_State *, __int32 (*)(lua_State *), __int32);
void lua_pushcclosure(lua_State *L, __int32 (*fn)(lua_State *), __int32 n) // 0x1000141B
{
    mangled_assert("_lua_pushcclosure@12");
    todo("implement");
    _sub_1000141B(L, fn, n);
}

_extern void _sub_100014D3(lua_State *, void *, __int32);
void lua_pushusertag(lua_State *L, void *u, __int32 tag) // 0x100014D3
{
    mangled_assert("_lua_pushusertag@12");
    todo("implement");
    _sub_100014D3(L, u, tag);
}

_extern void _sub_100010F3(lua_State *, char const *);
void lua_getglobal(lua_State *L, char const *name) // 0x100010F3
{
    mangled_assert("_lua_getglobal@8");
    todo("implement");
    _sub_100010F3(L, name);
}

_extern void _sub_10001222(lua_State *, __int32);
void lua_gettable(lua_State *L, __int32 index) // 0x10001222
{
    mangled_assert("_lua_gettable@8");
    todo("implement");
    _sub_10001222(L, index);
}

_extern void _sub_1000157C(lua_State *, __int32);
void lua_rawget(lua_State *L, __int32 index) // 0x1000157C
{
    mangled_assert("_lua_rawget@8");
    todo("implement");
    _sub_1000157C(L, index);
}

_extern void _sub_100015B9(lua_State *, __int32, __int32);
void lua_rawgeti(lua_State *L, __int32 index, __int32 n) // 0x100015B9
{
    mangled_assert("_lua_rawgeti@12");
    todo("implement");
    _sub_100015B9(L, index, n);
}

_extern void _sub_10001132(lua_State *);
void lua_getglobals(lua_State *L) // 0x10001132
{
    mangled_assert("_lua_getglobals@4");
    todo("implement");
    _sub_10001132(L);
}

_extern __int32 _sub_100011C3(lua_State *, __int32);
__int32 lua_getref(lua_State *L, __int32 ref) // 0x100011C3
{
    mangled_assert("_lua_getref@8");
    todo("implement");
    __int32 __result = _sub_100011C3(L, ref);
    return __result;
}

_extern void _sub_10001359(lua_State *);
void lua_newtable(lua_State *L) // 0x10001359
{
    mangled_assert("_lua_newtable@4");
    todo("implement");
    _sub_10001359(L);
}

_extern void _sub_10001795(lua_State *, char const *);
void lua_setglobal(lua_State *L, char const *name) // 0x10001795
{
    mangled_assert("_lua_setglobal@8");
    todo("implement");
    _sub_10001795(L, name);
}

_extern void _sub_100017CA(lua_State *, __int32);
void lua_settable(lua_State *L, __int32 index) // 0x100017CA
{
    mangled_assert("_lua_settable@8");
    todo("implement");
    _sub_100017CA(L, index);
}

_extern void _sub_10001611(lua_State *, __int32);
void lua_rawset(lua_State *L, __int32 index) // 0x10001611
{
    mangled_assert("_lua_rawset@8");
    todo("implement");
    _sub_10001611(L, index);
}

_extern void _sub_10001660(lua_State *, __int32, __int32);
void lua_rawseti(lua_State *L, __int32 index, __int32 n) // 0x10001660
{
    mangled_assert("_lua_rawseti@12");
    todo("implement");
    _sub_10001660(L, index, n);
}

_extern void _sub_100017B8(lua_State *);
void lua_setglobals(lua_State *L) // 0x100017B8
{
    mangled_assert("_lua_setglobals@4");
    todo("implement");
    _sub_100017B8(L);
}

_extern __int32 _sub_100016AE(lua_State *, __int32);
__int32 lua_ref(lua_State *L, __int32 lock) // 0x100016AE
{
    mangled_assert("_lua_ref@8");
    todo("implement");
    __int32 __result = _sub_100016AE(L, lock);
    return __result;
}

_extern void _sub_1000155C(lua_State *, __int32, __int32);
void lua_rawcall(lua_State *L, __int32 nargs, __int32 nresults) // 0x1000155C
{
    mangled_assert("_lua_rawcall@12");
    todo("implement");
    _sub_1000155C(L, nargs, nresults);
}

_extern __int32 _sub_100010E6(lua_State *);
__int32 lua_getgcthreshold(lua_State *L) // 0x100010E6
{
    mangled_assert("_lua_getgcthreshold@4");
    todo("implement");
    __int32 __result = _sub_100010E6(L);
    return __result;
}

_extern __int32 _sub_100010D9(lua_State *);
__int32 lua_getgccount(lua_State *L) // 0x100010D9
{
    mangled_assert("_lua_getgccount@4");
    todo("implement");
    __int32 __result = _sub_100010D9(L);
    return __result;
}

_extern void _sub_10001770(lua_State *, __int32);
void lua_setgcthreshold(lua_State *L, __int32 newthreshold) // 0x10001770
{
    mangled_assert("_lua_setgcthreshold@8");
    todo("implement");
    _sub_10001770(L, newthreshold);
}

_extern void _sub_100017FC(lua_State *, __int32);
void lua_settag(lua_State *L, __int32 tag) // 0x100017FC
{
    mangled_assert("_lua_settag@8");
    todo("implement");
    _sub_100017FC(L, tag);
}

_extern void _sub_100019E2(lua_State *, __int32);
void lua_unref(lua_State *L, __int32 ref) // 0x100019E2
{
    mangled_assert("_lua_unref@8");
    todo("implement");
    _sub_100019E2(L, ref);
}

_extern __int32 _sub_100013C1(lua_State *, __int32);
__int32 lua_next(lua_State *L, __int32 index) // 0x100013C1
{
    mangled_assert("_lua_next@8");
    todo("implement");
    __int32 __result = _sub_100013C1(L, index);
    return __result;
}

_extern __int32 _sub_1000115D(lua_State *, __int32);
__int32 lua_getn(lua_State *L, __int32 index) // 0x1000115D
{
    mangled_assert("_lua_getn@8");
    todo("implement");
    __int32 __result = _sub_1000115D(L, index);
    return __result;
}

_extern void _sub_1000107A(lua_State *, __int32);
void lua_concat(lua_State *L, __int32 n) // 0x1000107A
{
    mangled_assert("_lua_concat@8");
    todo("implement");
    _sub_1000107A(L, n);
}

_extern void *_sub_10001389(lua_State *, unsigned __int32);
void *lua_newuserdata(lua_State *L, unsigned __int32 size) // 0x10001389
{
    mangled_assert("_lua_newuserdata@8");
    todo("implement");
    void * __result = _sub_10001389(L, size);
    return __result;
}

/* ---------- private code */

_extern lua_TObject *_sub_1000102A(lua_State *, __int32);
_static lua_TObject *luaA_indexAcceptable(lua_State *L, __int32 index) // 0x1000102A
{
    mangled_assert("luaA_indexAcceptable");
    todo("implement");
    lua_TObject * __result = _sub_1000102A(L, index);
    return __result;
}
#endif

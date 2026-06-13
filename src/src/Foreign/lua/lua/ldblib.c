#if 0
/* ---------- headers */

#include "decomp.h"
#include <lauxlib.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lualib.h>
#include <lua.h>
#include <stddef.h>
#include <swprintf.inl>
#include <luadebug.h>
#include <string.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void lua_dblibopen(lua_State *L);

_static void settabss(lua_State *L, char const *i, char const *v);
_static void settabsi(lua_State *L, char const *i, __int32 v);
_static __int32 getinfo(lua_State *L);
_static __int32 getlocal(lua_State *L);
_static __int32 setlocal(lua_State *L);
_static void hookf(lua_State *L, void *key);
_static void callf(lua_State *L, lua_Debug *ar);
_static void linef(lua_State *L, lua_Debug *ar);
_static void sethook(lua_State *L, void *key, void (*hook)(lua_State *, lua_Debug *), void (*(*sethookf)(lua_State *, void (*)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *));
_static __int32 setcallhook(lua_State *L);
_static __int32 setlinehook(lua_State *L);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char key1; // 0x10013110
    extern char key2; // 0x10013111
    extern luaL_reg const dblib[5]; // 0x1000FBC0
}

/* ---------- public code */

_extern void _sub_10003BF4(lua_State *);
void lua_dblibopen(lua_State *L) // 0x10003BF4
{
    mangled_assert("_lua_dblibopen@4");
    todo("implement");
    _sub_10003BF4(L);
}

/* ---------- private code */

_extern void _sub_10003CBD(lua_State *, char const *, char const *);
_static void settabss(lua_State *L, char const *i, char const *v) // 0x10003CBD
{
    mangled_assert("settabss");
    todo("implement");
    _sub_10003CBD(L, i, v);
}

_extern void _sub_10003C89(lua_State *, char const *, __int32);
_static void settabsi(lua_State *L, char const *i, __int32 v) // 0x10003C89
{
    mangled_assert("settabsi");
    todo("implement");
    _sub_10003C89(L, i, v);
}

_extern __int32 _sub_100038D1(lua_State *);
_static __int32 getinfo(lua_State *L) // 0x100038D1
{
    mangled_assert("getinfo");
    todo("implement");
    __int32 __result = _sub_100038D1(L);
    return __result;
}

_extern __int32 _sub_10003A41(lua_State *);
_static __int32 getlocal(lua_State *L) // 0x10003A41
{
    mangled_assert("getlocal");
    todo("implement");
    __int32 __result = _sub_10003A41(L);
    return __result;
}

_extern __int32 _sub_10003AB2(lua_State *);
_static __int32 setlocal(lua_State *L) // 0x10003AB2
{
    mangled_assert("setlocal");
    todo("implement");
    __int32 __result = _sub_10003AB2(L);
    return __result;
}

_extern void _sub_10003B70(lua_State *, void *);
_static void hookf(lua_State *L, void *key) // 0x10003B70
{
    mangled_assert("hookf");
    todo("implement");
    _sub_10003B70(L, key);
}

_extern void _sub_10003B50(lua_State *, lua_Debug *);
_static void callf(lua_State *L, lua_Debug *ar) // 0x10003B50
{
    mangled_assert("callf");
    todo("implement");
    _sub_10003B50(L, ar);
}

_extern void _sub_10003BC6(lua_State *, lua_Debug *);
_static void linef(lua_State *L, lua_Debug *ar) // 0x10003BC6
{
    mangled_assert("linef");
    todo("implement");
    _sub_10003BC6(L, ar);
}

_extern void _sub_10003C07(lua_State *, void *, void (*)(lua_State *, lua_Debug *), void (*(*)(lua_State *, void (*)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *));
_static void sethook(lua_State *L, void *key, void (*hook)(lua_State *, lua_Debug *), void (*(*sethookf)(lua_State *, void (*)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *)) // 0x10003C07
{
    mangled_assert("sethook");
    todo("implement");
    _sub_10003C07(L, key, hook, sethookf);
}

_extern __int32 _sub_10003B14(lua_State *);
_static __int32 setcallhook(lua_State *L) // 0x10003B14
{
    mangled_assert("setcallhook");
    todo("implement");
    __int32 __result = _sub_10003B14(L);
    return __result;
}

_extern __int32 _sub_10003B32(lua_State *);
_static __int32 setlinehook(lua_State *L) // 0x10003B32
{
    mangled_assert("setlinehook");
    todo("implement");
    __int32 __result = _sub_10003B32(L);
    return __result;
}
#endif

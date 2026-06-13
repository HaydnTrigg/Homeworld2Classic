#if 0
/* ---------- headers */

#include "decomp.h"
#include <luadebug.h>
#include <string.h>
#include <stdarg.h>
#include <vadefs.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <lua\lauxlib.h>
#include <swprintf.inl>
#include <lua.h>
#include <stddef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 luaL_findstring(char const *name, char const *const *list);
extern void luaL_argerror(lua_State *L, __int32 narg, char const *extramsg);
extern void luaL_checkstack(lua_State *L, __int32 space, char const *mes);
extern void luaL_checktype(lua_State *L, __int32 narg, __int32 t);
extern void luaL_checkany(lua_State *L, __int32 narg);
extern char const *luaL_check_lstr(lua_State *L, __int32 narg, unsigned __int32 *len);
extern char const *luaL_opt_lstr(lua_State *L, __int32 narg, char const *def, unsigned __int32 *len);
extern double luaL_check_number(lua_State *L, __int32 narg);
extern double luaL_opt_number(lua_State *L, __int32 narg, double def);
extern void luaL_openlib(lua_State *L, luaL_reg const *l, __int32 n);
extern void luaL_verror(lua_State *L, char const *fmt, ...);
extern char *luaL_prepbuffer(luaL_Buffer *B);
extern void luaL_addlstring(luaL_Buffer *B, char const *s, unsigned __int32 l);
extern void luaL_addstring(luaL_Buffer *B, char const *s);
extern void luaL_pushresult(luaL_Buffer *B);
extern void luaL_addvalue(luaL_Buffer *B);
extern void luaL_buffinit(lua_State *L, luaL_Buffer *B);

_static void type_error(lua_State *L, __int32 narg, __int32 t);
_static __int32 emptybuffer(luaL_Buffer *B);
_static void adjuststack(luaL_Buffer *B);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_10001CBC(char const *, char const *const *);
__int32 luaL_findstring(char const *name, char const *const *list) // 0x10001CBC
{
    mangled_assert("_luaL_findstring@8");
    todo("implement");
    __int32 __result = _sub_10001CBC(name, list);
    return __result;
}

_extern void _sub_10001B5C(lua_State *, __int32, char const *);
void luaL_argerror(lua_State *L, __int32 narg, char const *extramsg) // 0x10001B5C
{
    mangled_assert("_luaL_argerror@12");
    todo("implement");
    _sub_10001B5C(L, narg, extramsg);
}

_extern void _sub_10001C78(lua_State *, __int32, char const *);
void luaL_checkstack(lua_State *L, __int32 space, char const *mes) // 0x10001C78
{
    mangled_assert("_luaL_checkstack@12");
    todo("implement");
    _sub_10001C78(L, space, mes);
}

_extern void _sub_10001C9F(lua_State *, __int32, __int32);
void luaL_checktype(lua_State *L, __int32 narg, __int32 t) // 0x10001C9F
{
    mangled_assert("_luaL_checktype@12");
    todo("implement");
    _sub_10001C9F(L, narg, t);
}

_extern void _sub_10001C51(lua_State *, __int32);
void luaL_checkany(lua_State *L, __int32 narg) // 0x10001C51
{
    mangled_assert("_luaL_checkany@8");
    todo("implement");
    _sub_10001C51(L, narg);
}

_extern char const *_sub_10001BC3(lua_State *, __int32, unsigned __int32 *);
char const *luaL_check_lstr(lua_State *L, __int32 narg, unsigned __int32 *len) // 0x10001BC3
{
    mangled_assert("_luaL_check_lstr@12");
    todo("implement");
    char const * __result = _sub_10001BC3(L, narg, len);
    return __result;
}

_extern char const *_sub_10001D24(lua_State *, __int32, char const *, unsigned __int32 *);
char const *luaL_opt_lstr(lua_State *L, __int32 narg, char const *def, unsigned __int32 *len) // 0x10001D24
{
    mangled_assert("_luaL_opt_lstr@16");
    todo("implement");
    char const * __result = _sub_10001D24(L, narg, def, len);
    return __result;
}

_extern double _sub_10001C02(lua_State *, __int32);
double luaL_check_number(lua_State *L, __int32 narg) // 0x10001C02
{
    mangled_assert("_luaL_check_number@8");
    todo("implement");
    double __result = _sub_10001C02(L, narg);
    return __result;
}

_extern double _sub_10001D6C(lua_State *, __int32, double);
double luaL_opt_number(lua_State *L, __int32 narg, double def) // 0x10001D6C
{
    mangled_assert("_luaL_opt_number@16");
    todo("implement");
    double __result = _sub_10001D6C(L, narg, def);
    return __result;
}

_extern void _sub_10001CF0(lua_State *, luaL_reg const *, __int32);
void luaL_openlib(lua_State *L, luaL_reg const *l, __int32 n) // 0x10001CF0
{
    mangled_assert("_luaL_openlib@12");
    todo("implement");
    _sub_10001CF0(L, l, n);
}

_extern void _sub_10001DE6(lua_State *, char const *, ...);
void luaL_verror(lua_State *L, char const *fmt, ...) // 0x10001DE6
{
    mangled_assert("_luaL_verror");
    todo("implement");
    _sub_10001DE6(L, fmt, buff);
}

_extern char *_sub_10001D93(luaL_Buffer *);
char *luaL_prepbuffer(luaL_Buffer *B) // 0x10001D93
{
    mangled_assert("_luaL_prepbuffer@4");
    todo("implement");
    char * __result = _sub_10001D93(B);
    return __result;
}

_extern void _sub_10001AA5(luaL_Buffer *, char const *, unsigned __int32);
void luaL_addlstring(luaL_Buffer *B, char const *s, unsigned __int32 l) // 0x10001AA5
{
    mangled_assert("_luaL_addlstring@12");
    todo("implement");
    _sub_10001AA5(B, s, l);
}

_extern void _sub_10001ADE(luaL_Buffer *, char const *);
void luaL_addstring(luaL_Buffer *B, char const *s) // 0x10001ADE
{
    mangled_assert("_luaL_addstring@8");
    todo("implement");
    _sub_10001ADE(B, s);
}

_extern void _sub_10001DAF(luaL_Buffer *);
void luaL_pushresult(luaL_Buffer *B) // 0x10001DAF
{
    mangled_assert("_luaL_pushresult@4");
    todo("implement");
    _sub_10001DAF(B);
}

_extern void _sub_10001AF9(luaL_Buffer *);
void luaL_addvalue(luaL_Buffer *B) // 0x10001AF9
{
    mangled_assert("_luaL_addvalue@4");
    todo("implement");
    _sub_10001AF9(B);
}

_extern void _sub_10001BAC(lua_State *, luaL_Buffer *);
void luaL_buffinit(lua_State *L, luaL_Buffer *B) // 0x10001BAC
{
    mangled_assert("_luaL_buffinit@8");
    todo("implement");
    _sub_10001BAC(L, B);
}

/* ---------- private code */

_extern void _sub_10001E17(lua_State *, __int32, __int32);
_static void type_error(lua_State *L, __int32 narg, __int32 t) // 0x10001E17
{
    mangled_assert("type_error");
    todo("implement");
    _sub_10001E17(L, narg, t);
}

_extern __int32 _sub_10001A7C(luaL_Buffer *);
_static __int32 emptybuffer(luaL_Buffer *B) // 0x10001A7C
{
    mangled_assert("emptybuffer");
    todo("implement");
    __int32 __result = _sub_10001A7C(B);
    return __result;
}

_extern void _sub_10001A07(luaL_Buffer *);
_static void adjuststack(luaL_Buffer *B) // 0x10001A07
{
    mangled_assert("adjuststack");
    todo("implement");
    _sub_10001A07(B);
}
#endif

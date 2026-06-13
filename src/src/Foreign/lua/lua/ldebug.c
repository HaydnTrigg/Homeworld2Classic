#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua\lfunc.h>
#include <swprintf.inl>
#include <stdlib.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lparser.h>
#include <lua\lapi.h>
#include <lua\lobject.h>
#include <lua\llimits.h>
#include <lua\ltm.h>
#include <lua\lcode.h>
#include <lua\llex.h>
#include <lua\lzio.h>
#include <stdio.h>
#include <lua\lstring.h>
#include <lua.h>
#include <stddef.h>
#include <lua\ldo.h>
#include <limits.h>
#include <lua\ldebug.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua\ltable.h>
#include <lua\lopcodes.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void (*lua_setcallhook(lua_State *L, void (*func)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *);
extern void (*lua_setlinehook(lua_State *L, void (*func)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *);
extern __int32 lua_getstack(lua_State *L, __int32 level, lua_Debug *ar);
extern __int32 luaG_getline(__int32 *lineinfo, __int32 pc, __int32 refline, __int32 *prefi);
extern char const *lua_getlocal(lua_State *L, lua_Debug const *ar, __int32 n);
extern char const *lua_setlocal(lua_State *L, lua_Debug const *ar, __int32 n);
extern __int32 lua_getinfo(lua_State *L, char const *what, lua_Debug *ar);
extern void luaG_typeerror(lua_State *L, lua_TObject *o, char const *op);
extern void luaG_binerror(lua_State *L, lua_TObject *p1, __int32 t, char const *op);
extern void luaG_ordererror(lua_State *L, lua_TObject *top);

_static void setnormalized(lua_TObject *d, lua_TObject const *s);
_static __int32 isLmark(lua_TObject *o);
_static lua_TObject *aux_stackedfunction(lua_State *L, __int32 level, lua_TObject *top);
_static __int32 nups(lua_TObject *f);
_static __int32 currentpc(lua_TObject *f);
_static __int32 currentline(lua_TObject *f);
_static Proto *getluaproto(lua_TObject *f);
_static void infoLproto(lua_Debug *ar, Proto *f);
_static void funcinfo(lua_State *L, lua_Debug *ar, lua_TObject *func);
_static char const *travtagmethods(lua_State *L, lua_TObject const *o);
_static char const *travglobals(lua_State *L, lua_TObject const *o);
_static void getname(lua_State *L, lua_TObject *f, lua_Debug *ar);
_static __int32 pushpc(__int32 *stack, __int32 pc, __int32 top, __int32 n);
_static unsigned long luaG_symbexec(Proto const *pt, __int32 lastpc, __int32 stackpos);
_static char const *getobjname(lua_State *L, lua_TObject *obj, char const **name);
_static char const *getfuncname(lua_State *L, lua_TObject *f, char const **name);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void (*_sub_1000442B(lua_State *, void (*)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *);
void (*lua_setcallhook(lua_State *L, void (*func)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *) // 0x1000442B
{
    mangled_assert("_lua_setcallhook@8");
    todo("implement");
    void (*)(lua_State *, lua_Debug *) __result = _sub_1000442B(L, func);
    return __result;
}

_extern void (*_sub_1000443C(lua_State *, void (*)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *);
void (*lua_setlinehook(lua_State *L, void (*func)(lua_State *, lua_Debug *)))(lua_State *, lua_Debug *) // 0x1000443C
{
    mangled_assert("_lua_setlinehook@8");
    todo("implement");
    void (*)(lua_State *, lua_Debug *) __result = _sub_1000443C(L, func);
    return __result;
}

_extern __int32 _sub_10004408(lua_State *, __int32, lua_Debug *);
__int32 lua_getstack(lua_State *L, __int32 level, lua_Debug *ar) // 0x10004408
{
    mangled_assert("_lua_getstack@12");
    todo("implement");
    __int32 __result = _sub_10004408(L, level, ar);
    return __result;
}

_extern __int32 _sub_10004045(__int32 *, __int32, __int32, __int32 *);
__int32 luaG_getline(__int32 *lineinfo, __int32 pc, __int32 refline, __int32 *prefi) // 0x10004045
{
    mangled_assert("_luaG_getline@16");
    todo("implement");
    __int32 __result = _sub_10004045(lineinfo, pc, refline, prefi);
    return __result;
}

_extern char const *_sub_100043C3(lua_State *, lua_Debug const *, __int32);
char const *lua_getlocal(lua_State *L, lua_Debug const *ar, __int32 n) // 0x100043C3
{
    mangled_assert("_lua_getlocal@12");
    todo("implement");
    char const * __result = _sub_100043C3(L, ar, n);
    return __result;
}

_extern char const *_sub_1000444D(lua_State *, lua_Debug const *, __int32);
char const *lua_setlocal(lua_State *L, lua_Debug const *ar, __int32 n) // 0x1000444D
{
    mangled_assert("_lua_setlocal@12");
    todo("implement");
    char const * __result = _sub_1000444D(L, ar, n);
    return __result;
}

_extern __int32 _sub_100042AA(lua_State *, char const *, lua_Debug *);
__int32 lua_getinfo(lua_State *L, char const *what, lua_Debug *ar) // 0x100042AA
{
    mangled_assert("_lua_getinfo@12");
    todo("implement");
    __int32 __result = _sub_100042AA(L, what, ar);
    return __result;
}

_extern void _sub_10004256(lua_State *, lua_TObject *, char const *);
void luaG_typeerror(lua_State *L, lua_TObject *o, char const *op) // 0x10004256
{
    mangled_assert("_luaG_typeerror@12");
    todo("implement");
    _sub_10004256(L, o, op);
}

_extern void _sub_10004025(lua_State *, lua_TObject *, __int32, char const *);
void luaG_binerror(lua_State *L, lua_TObject *p1, __int32 t, char const *op) // 0x10004025
{
    mangled_assert("_luaG_binerror@16");
    todo("implement");
    _sub_10004025(L, p1, t, op);
}

_extern void _sub_100040B5(lua_State *, lua_TObject *);
void luaG_ordererror(lua_State *L, lua_TObject *top) // 0x100040B5
{
    mangled_assert("_luaG_ordererror@8");
    todo("implement");
    _sub_100040B5(L, top);
}

/* ---------- private code */

_extern void _sub_100044E5(lua_TObject *, lua_TObject const *);
_static void setnormalized(lua_TObject *d, lua_TObject const *s) // 0x100044E5
{
    mangled_assert("setnormalized");
    todo("implement");
    _sub_100044E5(d, s);
}

_extern __int32 _sub_10004005(lua_TObject *);
_static __int32 isLmark(lua_TObject *o) // 0x10004005
{
    mangled_assert("isLmark");
    todo("implement");
    __int32 __result = _sub_10004005(o);
    return __result;
}

_extern lua_TObject *_sub_10003CE4(lua_State *, __int32, lua_TObject *);
_static lua_TObject *aux_stackedfunction(lua_State *L, __int32 level, lua_TObject *top) // 0x10003CE4
{
    mangled_assert("aux_stackedfunction");
    todo("implement");
    lua_TObject * __result = _sub_10003CE4(L, level, top);
    return __result;
}

_extern __int32 _sub_1000449C(lua_TObject *);
_static __int32 nups(lua_TObject *f) // 0x1000449C
{
    mangled_assert("nups");
    todo("implement");
    __int32 __result = _sub_1000449C(f);
    return __result;
}

_extern __int32 _sub_10003D57(lua_TObject *);
_static __int32 currentpc(lua_TObject *f) // 0x10003D57
{
    mangled_assert("currentpc");
    todo("implement");
    __int32 __result = _sub_10003D57(f);
    return __result;
}

_extern __int32 _sub_10003D24(lua_TObject *);
_static __int32 currentline(lua_TObject *f) // 0x10003D24
{
    mangled_assert("currentline");
    todo("implement");
    __int32 __result = _sub_10003D24(f);
    return __result;
}

_extern Proto *_sub_10003E63(lua_TObject *);
_static Proto *getluaproto(lua_TObject *f) // 0x10003E63
{
    mangled_assert("getluaproto");
    todo("implement");
    Proto * __result = _sub_10003E63(f);
    return __result;
}

_extern void _sub_10003FE4(lua_Debug *, Proto *);
_static void infoLproto(lua_Debug *ar, Proto *f) // 0x10003FE4
{
    mangled_assert("infoLproto");
    todo("implement");
    _sub_10003FE4(ar, f);
}

_extern void _sub_10003D7A(lua_State *, lua_Debug *, lua_TObject *);
_static void funcinfo(lua_State *L, lua_Debug *ar, lua_TObject *func) // 0x10003D7A
{
    mangled_assert("funcinfo");
    todo("implement");
    _sub_10003D7A(L, ar, func);
}

_extern char const *_sub_1000455E(lua_State *, lua_TObject const *);
_static char const *travtagmethods(lua_State *L, lua_TObject const *o) // 0x1000455E
{
    mangled_assert("travtagmethods");
    todo("implement");
    char const * __result = _sub_1000455E(L, o);
    return __result;
}

_extern char const *_sub_10004511(lua_State *, lua_TObject const *);
_static char const *travglobals(lua_State *L, lua_TObject const *o) // 0x10004511
{
    mangled_assert("travglobals");
    todo("implement");
    char const * __result = _sub_10004511(L, o);
    return __result;
}

_extern void _sub_10003E7F(lua_State *, lua_TObject *, lua_Debug *);
_static void getname(lua_State *L, lua_TObject *f, lua_Debug *ar) // 0x10003E7F
{
    mangled_assert("getname");
    todo("implement");
    _sub_10003E7F(L, f, ar);
}

_extern __int32 _sub_100044BF(__int32 *, __int32, __int32, __int32);
_static __int32 pushpc(__int32 *stack, __int32 pc, __int32 top, __int32 n) // 0x100044BF
{
    mangled_assert("pushpc");
    todo("implement");
    __int32 __result = _sub_100044BF(stack, pc, top, n);
    return __result;
}

_extern unsigned long _sub_100040FF(Proto const *, __int32, __int32);
_static unsigned long luaG_symbexec(Proto const *pt, __int32 lastpc, __int32 stackpos) // 0x100040FF
{
    mangled_assert("luaG_symbexec");
    todo("implement");
    unsigned long __result = _sub_100040FF(pt, lastpc, stackpos);
    return __result;
}

_extern char const *_sub_10003F4C(lua_State *, lua_TObject *, char const **);
_static char const *getobjname(lua_State *L, lua_TObject *obj, char const **name) // 0x10003F4C
{
    mangled_assert("getobjname");
    todo("implement");
    char const * __result = _sub_10003F4C(L, obj, name);
    return __result;
}

_extern char const *_sub_10003E01(lua_State *, lua_TObject *, char const **);
_static char const *getfuncname(lua_State *L, lua_TObject *f, char const **name) // 0x10003E01
{
    mangled_assert("getfuncname");
    todo("implement");
    char const * __result = _sub_10003E01(L, f, name);
    return __result;
}
#endif

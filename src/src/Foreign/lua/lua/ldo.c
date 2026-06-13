#if 0
/* ---------- headers */

#include "decomp.h"
#include <setjmp.h>
#include <string.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\ldo.h>
#include <lua\ldebug.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua\lobject.h>
#include <stdlib.h>
#include <lua\llimits.h>
#include <limits.h>
#include <lua\ltm.h>
#include <lua.h>
#include <stddef.h>
#include <lua\lstring.h>
#include <swprintf.inl>
#include <lua\lgc.h>
#include <lua\lmem.h>
#include <stdio.h>
#include <lua\lundump.h>
#include <lua\lvm.h>
#include <lua\ltable.h>
#include <lua\lparser.h>
#include <lua\lzio.h>

/* ---------- constants */

/* ---------- definitions */

struct CallS
{
    lua_TObject *func; // 0x0
    __int32 nresults; // 0x4
};
static_assert(sizeof(CallS) == 8, "Invalid CallS size");

struct ParserS
{
    zio *z; // 0x0
    __int32 bin; // 0x4
};
static_assert(sizeof(ParserS) == 8, "Invalid ParserS size");

struct lua_longjmp
{
    __int32 b[16]; // 0x0
    lua_longjmp *previous; // 0x40
    __int32 volatile status; // 0x44
};
static_assert(sizeof(lua_longjmp) == 72, "Invalid lua_longjmp size");

/* ---------- prototypes */

extern void luaD_init(lua_State *L, __int32 stacksize);
extern void luaD_checkstack(lua_State *L, __int32 n);
extern void luaD_adjusttop(lua_State *L, lua_TObject *base, __int32 extra);
extern void luaD_lineHook(lua_State *L, lua_TObject *func, __int32 line, void (*linehook)(lua_State *, lua_Debug *));
extern void luaD_callTM(lua_State *L, Closure *f, __int32 nParams, __int32 nResults);
extern void luaD_call(lua_State *L, lua_TObject *func, __int32 nResults);
extern __int32 lua_call(lua_State *L, __int32 nargs, __int32 nresults);
extern __int32 lua_dofile(lua_State *L, char const *filename);
extern __int32 lua_dobuffer(lua_State *L, char const *buff, unsigned __int32 size, char const *name);
extern __int32 lua_dostring(lua_State *L, char const *str);
extern void lua_error(lua_State *L, char const *s);
extern void luaD_breakrun(lua_State *L, __int32 errcode);
extern __int32 luaD_runprotected(lua_State *L, void (*f)(lua_State *, void *), void *ud);

_static void restore_stack_limit(lua_State *L);
_static void luaD_openstack(lua_State *L, lua_TObject *pos);
_static void dohook(lua_State *L, lua_Debug *ar, void (*hook)(lua_State *, lua_Debug *));
_static void luaD_callHook(lua_State *L, lua_TObject *func, void (*callhook)(lua_State *, lua_Debug *), char const *event);
_static lua_TObject *callCclosure(lua_State *L, Closure const *cl, lua_TObject *base);
_static void f_call(lua_State *L, void *ud);
_static void f_parser(lua_State *L, void *ud);
_static __int32 protectedparser(lua_State *L, zio *z, __int32 bin);
_static __int32 parse_file(lua_State *L, char const *filename);
_static __int32 parse_buffer(lua_State *L, char const *buff, unsigned __int32 size, char const *name);
_static void message(lua_State *L, char const *s);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100048C6(lua_State *, __int32);
void luaD_init(lua_State *L, __int32 stacksize) // 0x100048C6
{
    mangled_assert("_luaD_init@8");
    todo("implement");
    _sub_100048C6(L, stacksize);
}

_extern void _sub_1000487F(lua_State *, __int32);
void luaD_checkstack(lua_State *L, __int32 n) // 0x1000487F
{
    mangled_assert("_luaD_checkstack@8");
    todo("implement");
    _sub_1000487F(L, n);
}

_extern void _sub_10004678(lua_State *, lua_TObject *, __int32);
void luaD_adjusttop(lua_State *L, lua_TObject *base, __int32 extra) // 0x10004678
{
    mangled_assert("_luaD_adjusttop@12");
    todo("implement");
    _sub_10004678(L, base, extra);
}

_extern void _sub_100048FF(lua_State *, lua_TObject *, __int32, void (*)(lua_State *, lua_Debug *));
void luaD_lineHook(lua_State *L, lua_TObject *func, __int32 line, void (*linehook)(lua_State *, lua_Debug *)) // 0x100048FF
{
    mangled_assert("_luaD_lineHook@16");
    todo("implement");
    _sub_100048FF(L, func, line, linehook);
}

_extern void _sub_1000484A(lua_State *, Closure *, __int32, __int32);
void luaD_callTM(lua_State *L, Closure *f, __int32 nParams, __int32 nResults) // 0x1000484A
{
    mangled_assert("_luaD_callTM@16");
    todo("implement");
    _sub_1000484A(L, f, nParams, nResults);
}

_extern void _sub_100046EF(lua_State *, lua_TObject *, __int32);
void luaD_call(lua_State *L, lua_TObject *func, __int32 nResults) // 0x100046EF
{
    mangled_assert("_luaD_call@12");
    todo("implement");
    _sub_100046EF(L, func, nResults);
}

_extern __int32 _sub_100049FC(lua_State *, __int32, __int32);
__int32 lua_call(lua_State *L, __int32 nargs, __int32 nresults) // 0x100049FC
{
    mangled_assert("_lua_call@12");
    todo("implement");
    __int32 __result = _sub_100049FC(L, nargs, nresults);
    return __result;
}

_extern __int32 _sub_10004A8C(lua_State *, char const *);
__int32 lua_dofile(lua_State *L, char const *filename) // 0x10004A8C
{
    mangled_assert("_lua_dofile@8");
    todo("implement");
    __int32 __result = _sub_10004A8C(L, filename);
    return __result;
}

_extern __int32 _sub_10004A35(lua_State *, char const *, unsigned __int32, char const *);
__int32 lua_dobuffer(lua_State *L, char const *buff, unsigned __int32 size, char const *name) // 0x10004A35
{
    mangled_assert("_lua_dobuffer@16");
    todo("implement");
    __int32 __result = _sub_10004A35(L, buff, size, name);
    return __result;
}

_extern __int32 _sub_10004AAC(lua_State *, char const *);
__int32 lua_dostring(lua_State *L, char const *str) // 0x10004AAC
{
    mangled_assert("_lua_dostring@8");
    todo("implement");
    __int32 __result = _sub_10004AAC(L, str);
    return __result;
}

_extern void _sub_10004ACB(lua_State *, char const *);
void lua_error(lua_State *L, char const *s) // 0x10004ACB
{
    mangled_assert("_lua_error@8");
    todo("implement");
    _sub_10004ACB(L, s);
}

_extern void _sub_100046B8(lua_State *, __int32);
void luaD_breakrun(lua_State *L, __int32 errcode) // 0x100046B8
{
    mangled_assert("_luaD_breakrun@8");
    todo("implement");
    _sub_100046B8(L, errcode);
}

_extern __int32 _sub_10004976(lua_State *, void (*)(lua_State *, void *), void *);
__int32 luaD_runprotected(lua_State *L, void (*f)(lua_State *, void *), void *ud) // 0x10004976
{
    mangled_assert("_luaD_runprotected@12");
    todo("implement");
    __int32 __result = _sub_10004976(L, f, ud);
    return __result;
}

/* ---------- private code */

_extern void _sub_10004CE8(lua_State *);
_static void restore_stack_limit(lua_State *L) // 0x10004CE8
{
    mangled_assert("restore_stack_limit");
    todo("implement");
    _sub_10004CE8(L);
}

_extern void _sub_10004932(lua_State *, lua_TObject *);
_static void luaD_openstack(lua_State *L, lua_TObject *pos) // 0x10004932
{
    mangled_assert("luaD_openstack");
    todo("implement");
    _sub_10004932(L, pos);
}

_extern void _sub_10004602(lua_State *, lua_Debug *, void (*)(lua_State *, lua_Debug *));
_static void dohook(lua_State *L, lua_Debug *ar, void (*hook)(lua_State *, lua_Debug *)) // 0x10004602
{
    mangled_assert("dohook");
    todo("implement");
    _sub_10004602(L, ar, hook);
}

_extern void _sub_10004817(lua_State *, lua_TObject *, void (*)(lua_State *, lua_Debug *), char const *);
_static void luaD_callHook(lua_State *L, lua_TObject *func, void (*callhook)(lua_State *, lua_Debug *), char const *event) // 0x10004817
{
    mangled_assert("luaD_callHook");
    todo("implement");
    _sub_10004817(L, func, callhook, event);
}

_extern lua_TObject *_sub_100045A4(lua_State *, Closure const *, lua_TObject *);
_static lua_TObject *callCclosure(lua_State *L, Closure const *cl, lua_TObject *base) // 0x100045A4
{
    mangled_assert("callCclosure");
    todo("implement");
    lua_TObject * __result = _sub_100045A4(L, cl, base);
    return __result;
}

_extern void _sub_10004638(lua_State *, void *);
_static void f_call(lua_State *L, void *ud) // 0x10004638
{
    mangled_assert("f_call");
    todo("implement");
    _sub_10004638(L, ud);
}

_extern void _sub_1000464D(lua_State *, void *);
_static void f_parser(lua_State *L, void *ud) // 0x1000464D
{
    mangled_assert("f_parser");
    todo("implement");
    _sub_1000464D(L, ud);
}

_extern __int32 _sub_10004C9D(lua_State *, zio *, __int32);
_static __int32 protectedparser(lua_State *L, zio *z, __int32 bin) // 0x10004C9D
{
    mangled_assert("protectedparser");
    todo("implement");
    __int32 __result = _sub_10004C9D(L, z, bin);
    return __result;
}

_extern __int32 _sub_10004BA2(lua_State *, char const *);
_static __int32 parse_file(lua_State *L, char const *filename) // 0x10004BA2
{
    mangled_assert("parse_file");
    todo("implement");
    __int32 __result = _sub_10004BA2(L, filename);
    return __result;
}

_extern __int32 _sub_10004B5A(lua_State *, char const *, unsigned __int32, char const *);
_static __int32 parse_buffer(lua_State *L, char const *buff, unsigned __int32 size, char const *name) // 0x10004B5A
{
    mangled_assert("parse_buffer");
    todo("implement");
    __int32 __result = _sub_10004B5A(L, buff, size, name);
    return __result;
}

_extern void _sub_10004AED(lua_State *, char const *);
_static void message(lua_State *L, char const *s) // 0x10004AED
{
    mangled_assert("message");
    todo("implement");
    _sub_10004AED(L, s);
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua\lapi.h>
#include <lua\lobject.h>
#include <lua\llimits.h>
#include <stdlib.h>
#include <limits.h>
#include <lua\ldo.h>
#include <lua\ldebug.h>
#include <stdio.h>
#include <lua\lstate.h>
#include <crtdefs.h>
#include <luadebug.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\ltm.h>
#include <lua\lstring.h>
#include <lua.h>
#include <stddef.h>
#include <swprintf.inl>
#include <lua\lfunc.h>
#include <lua\lvm.h>
#include <lua\ltable.h>
#include <lua\lgc.h>
#include <lua\lopcodes.h>
#include <string.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 luaV_tonumber(lua_TObject *obj);
extern __int32 luaV_tostring(lua_State *L, lua_TObject *obj);
extern void luaV_Cclosure(lua_State *L, __int32 (*c)(lua_State *), __int32 nelems);
extern void luaV_Lclosure(lua_State *L, Proto *l, __int32 nelems);
extern lua_TObject const *luaV_gettable(lua_State *L, lua_TObject *t);
extern void luaV_settable(lua_State *L, lua_TObject *t, lua_TObject *key);
extern lua_TObject const *luaV_getglobal(lua_State *L, TString *s);
extern void luaV_setglobal(lua_State *L, TString *s);
extern __int32 luaV_lessthan(lua_State *L, lua_TObject const *l, lua_TObject const *r, lua_TObject *top);
extern void luaV_strconc(lua_State *L, __int32 total, lua_TObject *top);
extern lua_TObject *luaV_execute(lua_State *L, Closure const *cl, lua_TObject *base);

_static void traceexec(lua_State *L, lua_TObject *base, lua_TObject *top, void (*linehook)(lua_State *, lua_Debug *));
_static Closure *luaV_closure(lua_State *L, __int32 nelems);
_static __int32 call_binTM(lua_State *L, lua_TObject *top, TMS event);
_static void call_arith(lua_State *L, lua_TObject *top, TMS event);
_static __int32 luaV_strcomp(TString const *ls, TString const *rs);
_static void luaV_pack(lua_State *L, lua_TObject *firstelem);
_static void adjust_varargs(lua_State *L, lua_TObject *base, __int32 nfixargs);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_1000CF7F(lua_TObject *);
__int32 luaV_tonumber(lua_TObject *obj) // 0x1000CF7F
{
    mangled_assert("_luaV_tonumber@4");
    todo("implement");
    __int32 __result = _sub_1000CF7F(obj);
    return __result;
}

_extern __int32 _sub_1000CFB2(lua_State *, lua_TObject *);
__int32 luaV_tostring(lua_State *L, lua_TObject *obj) // 0x1000CFB2
{
    mangled_assert("_luaV_tostring@8");
    todo("implement");
    __int32 __result = _sub_1000CFB2(L, obj);
    return __result;
}

_extern void _sub_1000BEB6(lua_State *, __int32 (*)(lua_State *), __int32);
void luaV_Cclosure(lua_State *L, __int32 (*c)(lua_State *), __int32 nelems) // 0x1000BEB6
{
    mangled_assert("_luaV_Cclosure@12");
    todo("implement");
    _sub_1000BEB6(L, c, nelems);
}

_extern void _sub_1000BED3(lua_State *, Proto *, __int32);
void luaV_Lclosure(lua_State *L, Proto *l, __int32 nelems) // 0x1000BED3
{
    mangled_assert("_luaV_Lclosure@12");
    todo("implement");
    _sub_1000BED3(L, l, nelems);
}

_extern lua_TObject const *_sub_1000CA06(lua_State *, lua_TObject *);
lua_TObject const *luaV_gettable(lua_State *L, lua_TObject *t) // 0x1000CA06
{
    mangled_assert("_luaV_gettable@8");
    todo("implement");
    lua_TObject const * __result = _sub_1000CA06(L, t);
    return __result;
}

_extern void _sub_1000CCEE(lua_State *, lua_TObject *, lua_TObject *);
void luaV_settable(lua_State *L, lua_TObject *t, lua_TObject *key) // 0x1000CCEE
{
    mangled_assert("_luaV_settable@12");
    todo("implement");
    _sub_1000CCEE(L, t, key);
}

_extern lua_TObject const *_sub_1000C98E(lua_State *, TString *);
lua_TObject const *luaV_getglobal(lua_State *L, TString *s) // 0x1000C98E
{
    mangled_assert("_luaV_getglobal@8");
    todo("implement");
    lua_TObject const * __result = _sub_1000C98E(L, s);
    return __result;
}

_extern void _sub_1000CC1B(lua_State *, TString *);
void luaV_setglobal(lua_State *L, TString *s) // 0x1000CC1B
{
    mangled_assert("_luaV_setglobal@8");
    todo("implement");
    _sub_1000CC1B(L, s);
}

_extern __int32 _sub_1000CACD(lua_State *, lua_TObject const *, lua_TObject const *, lua_TObject *);
__int32 luaV_lessthan(lua_State *L, lua_TObject const *l, lua_TObject const *r, lua_TObject *top) // 0x1000CACD
{
    mangled_assert("_luaV_lessthan@16");
    todo("implement");
    __int32 __result = _sub_1000CACD(L, l, r, top);
    return __result;
}

_extern void _sub_1000CE13(lua_State *, __int32, lua_TObject *);
void luaV_strconc(lua_State *L, __int32 total, lua_TObject *top) // 0x1000CE13
{
    mangled_assert("_luaV_strconc@12");
    todo("implement");
    _sub_1000CE13(L, total, top);
}

_extern lua_TObject *_sub_1000BF52(lua_State *, Closure const *, lua_TObject *);
lua_TObject *luaV_execute(lua_State *L, Closure const *cl, lua_TObject *base) // 0x1000BF52
{
    mangled_assert("_luaV_execute@12");
    todo("implement");
    lua_TObject * __result = _sub_1000BF52(L, cl, base);
    return __result;
}

/* ---------- private code */

_extern void _sub_1000D000(lua_State *, lua_TObject *, lua_TObject *, void (*)(lua_State *, lua_Debug *));
_static void traceexec(lua_State *L, lua_TObject *base, lua_TObject *top, void (*linehook)(lua_State *, lua_Debug *)) // 0x1000D000
{
    mangled_assert("traceexec");
    todo("implement");
    _sub_1000D000(L, base, top, linehook);
}

_extern Closure *_sub_1000BEEF(lua_State *, __int32);
_static Closure *luaV_closure(lua_State *L, __int32 nelems) // 0x1000BEEF
{
    mangled_assert("luaV_closure");
    todo("implement");
    Closure * __result = _sub_1000BEEF(L, nelems);
    return __result;
}

_extern __int32 _sub_1000BE42(lua_State *, lua_TObject *, TMS);
_static __int32 call_binTM(lua_State *L, lua_TObject *top, TMS event) // 0x1000BE42
{
    mangled_assert("call_binTM");
    todo("implement");
    __int32 __result = _sub_1000BE42(L, top, event);
    return __result;
}

_extern void _sub_1000BE13(lua_State *, lua_TObject *, TMS);
_static void call_arith(lua_State *L, lua_TObject *top, TMS event) // 0x1000BE13
{
    mangled_assert("call_arith");
    todo("implement");
    _sub_1000BE13(L, top, event);
}

_extern __int32 _sub_1000CDBB(TString const *, TString const *);
_static __int32 luaV_strcomp(TString const *ls, TString const *rs) // 0x1000CDBB
{
    mangled_assert("luaV_strcomp");
    todo("implement");
    __int32 __result = _sub_1000CDBB(ls, rs);
    return __result;
}

_extern void _sub_1000CB6B(lua_State *, lua_TObject *);
_static void luaV_pack(lua_State *L, lua_TObject *firstelem) // 0x1000CB6B
{
    mangled_assert("luaV_pack");
    todo("implement");
    _sub_1000CB6B(L, firstelem);
}

_extern void _sub_1000BDDF(lua_State *, lua_TObject *, __int32);
_static void adjust_varargs(lua_State *L, lua_TObject *base, __int32 nfixargs) // 0x1000BDDF
{
    mangled_assert("adjust_varargs");
    todo("implement");
    _sub_1000BDDF(L, base, nfixargs);
}
#endif

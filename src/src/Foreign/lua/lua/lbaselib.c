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
#include <Mem\LuaCType.h>
#include <assist\asciictype.h>
#include <luadebug.h>
#include <string.h>

/* ---------- constants */

/* ---------- definitions */

typedef void (*CBOutput)(char const *);
typedef void (*CBAlert)(char const *);

/* ---------- prototypes */

extern void setOutputCallback(void (*func)(char const *));
extern void setAlertCallback(void (*func)(char const *));
extern void lua_minbaselibopen(lua_State *L);
extern void lua_baselibopen(lua_State *L);

_static __int32 luaB__ALERT(lua_State *L);
_static __int32 luaB_print(lua_State *L);
_static __int32 luaB_tonumber(lua_State *L);
_static __int32 luaB_error(lua_State *L);
_static __int32 luaB_setglobal(lua_State *L);
_static __int32 luaB_getglobal(lua_State *L);
_static __int32 luaB_tag(lua_State *L);
_static __int32 luaB_settag(lua_State *L);
_static __int32 luaB_newtag(lua_State *L);
_static __int32 luaB_copytagmethods(lua_State *L);
_static __int32 luaB_globals(lua_State *L);
_static __int32 luaB_rawget(lua_State *L);
_static __int32 luaB_rawset(lua_State *L);
_static __int32 luaB_settagmethod(lua_State *L);
_static __int32 luaB_gettagmethod(lua_State *L);
_static __int32 luaB_gcinfo(lua_State *L);
_static __int32 luaB_collectgarbage(lua_State *L);
_static __int32 luaB_type(lua_State *L);
_static __int32 luaB_typeid(lua_State *L);
_static __int32 luaB_next(lua_State *L);
_static __int32 passresults(lua_State *L, __int32 status, __int32 oldtop);
_static __int32 luaB_dostring(lua_State *L);
_static __int32 luaB_dofile(lua_State *L);
_static __int32 luaB_call(lua_State *L);
_static __int32 luaB_tostring(lua_State *L);
_static __int32 luaB_foreachi(lua_State *L);
_static __int32 luaB_foreach(lua_State *L);
_static __int32 luaB_assert(lua_State *L);
_static __int32 luaB_getn(lua_State *L);
_static __int32 luaB_tinsert(lua_State *L);
_static __int32 luaB_tremove(lua_State *L);
_static void set2(lua_State *L, __int32 i, __int32 j);
_static __int32 sort_comp(lua_State *L, __int32 a, __int32 b);
_static void auxsort(lua_State *L, __int32 l, __int32 u);
_static __int32 luaB_sort(lua_State *L);
_static __int32 deprecated_func(lua_State *L);
_static void deprecated_funcs(lua_State *L);

/* ---------- globals */

extern void (*g_outputCB)(char const *); // 0x10013108
extern void (*g_alertCB)(char const *); // 0x1001310C

/* ---------- private variables */

_static
{
    extern luaL_reg const deprecated_names[4]; // 0x1000F550
    extern luaL_reg const min_funcs[4]; // 0x1000F570
    extern luaL_reg const base_funcs[29]; // 0x1000F590
}

/* ---------- public code */

_extern void _sub_10002C58(void (*)(char const *));
void setOutputCallback(void (*func)(char const *)) // 0x10002C58
{
    mangled_assert("_setOutputCallback@4");
    todo("implement");
    _sub_10002C58(func);
}

_extern void _sub_10002C4C(void (*)(char const *));
void setAlertCallback(void (*func)(char const *)) // 0x10002C4C
{
    mangled_assert("_setAlertCallback@4");
    todo("implement");
    _sub_10002C4C(func);
}

_extern void _sub_10002BB7(lua_State *);
void lua_minbaselibopen(lua_State *L) // 0x10002BB7
{
    mangled_assert("_lua_minbaselibopen@4");
    todo("implement");
    _sub_10002BB7(L);
}

_extern void _sub_10002B65(lua_State *);
void lua_baselibopen(lua_State *L) // 0x10002B65
{
    mangled_assert("_lua_baselibopen@4");
    todo("implement");
    _sub_10002B65(L);
}

/* ---------- private code */

_extern __int32 _sub_10001E63(lua_State *);
_static __int32 luaB__ALERT(lua_State *L) // 0x10001E63
{
    mangled_assert("luaB__ALERT");
    todo("implement");
    __int32 __result = _sub_10001E63(L);
    return __result;
}

_extern __int32 _sub_10001E85(lua_State *);
_static __int32 luaB_print(lua_State *L) // 0x10001E85
{
    mangled_assert("luaB_print");
    todo("implement");
    __int32 __result = _sub_10001E85(L);
    return __result;
}

_extern __int32 _sub_10001F0E(lua_State *);
_static __int32 luaB_tonumber(lua_State *L) // 0x10001F0E
{
    mangled_assert("luaB_tonumber");
    todo("implement");
    __int32 __result = _sub_10001F0E(L);
    return __result;
}

_extern __int32 _sub_10001FFC(lua_State *);
_static __int32 luaB_error(lua_State *L) // 0x10001FFC
{
    mangled_assert("luaB_error");
    todo("implement");
    __int32 __result = _sub_10001FFC(L);
    return __result;
}

_extern __int32 _sub_1000201A(lua_State *);
_static __int32 luaB_setglobal(lua_State *L) // 0x1000201A
{
    mangled_assert("luaB_setglobal");
    todo("implement");
    __int32 __result = _sub_1000201A(L);
    return __result;
}

_extern __int32 _sub_10002041(lua_State *);
_static __int32 luaB_getglobal(lua_State *L) // 0x10002041
{
    mangled_assert("luaB_getglobal");
    todo("implement");
    __int32 __result = _sub_10002041(L);
    return __result;
}

_extern __int32 _sub_1000205E(lua_State *);
_static __int32 luaB_tag(lua_State *L) // 0x1000205E
{
    mangled_assert("luaB_tag");
    todo("implement");
    __int32 __result = _sub_1000205E(L);
    return __result;
}

_extern __int32 _sub_10002092(lua_State *);
_static __int32 luaB_settag(lua_State *L) // 0x10002092
{
    mangled_assert("luaB_settag");
    todo("implement");
    __int32 __result = _sub_10002092(L);
    return __result;
}

_extern __int32 _sub_100020CA(lua_State *);
_static __int32 luaB_newtag(lua_State *L) // 0x100020CA
{
    mangled_assert("luaB_newtag");
    todo("implement");
    __int32 __result = _sub_100020CA(L);
    return __result;
}

_extern __int32 _sub_100020F1(lua_State *);
_static __int32 luaB_copytagmethods(lua_State *L) // 0x100020F1
{
    mangled_assert("luaB_copytagmethods");
    todo("implement");
    __int32 __result = _sub_100020F1(L);
    return __result;
}

_extern __int32 _sub_1000213A(lua_State *);
_static __int32 luaB_globals(lua_State *L) // 0x1000213A
{
    mangled_assert("luaB_globals");
    todo("implement");
    __int32 __result = _sub_1000213A(L);
    return __result;
}

_extern __int32 _sub_10002171(lua_State *);
_static __int32 luaB_rawget(lua_State *L) // 0x10002171
{
    mangled_assert("luaB_rawget");
    todo("implement");
    __int32 __result = _sub_10002171(L);
    return __result;
}

_extern __int32 _sub_1000219A(lua_State *);
_static __int32 luaB_rawset(lua_State *L) // 0x1000219A
{
    mangled_assert("luaB_rawset");
    todo("implement");
    __int32 __result = _sub_1000219A(L);
    return __result;
}

_extern __int32 _sub_100021CE(lua_State *);
_static __int32 luaB_settagmethod(lua_State *L) // 0x100021CE
{
    mangled_assert("luaB_settagmethod");
    todo("implement");
    __int32 __result = _sub_100021CE(L);
    return __result;
}

_extern __int32 _sub_1000225A(lua_State *);
_static __int32 luaB_gettagmethod(lua_State *L) // 0x1000225A
{
    mangled_assert("luaB_gettagmethod");
    todo("implement");
    __int32 __result = _sub_1000225A(L);
    return __result;
}

_extern __int32 _sub_100022B2(lua_State *);
_static __int32 luaB_gcinfo(lua_State *L) // 0x100022B2
{
    mangled_assert("luaB_gcinfo");
    todo("implement");
    __int32 __result = _sub_100022B2(L);
    return __result;
}

_extern __int32 _sub_100022FA(lua_State *);
_static __int32 luaB_collectgarbage(lua_State *L) // 0x100022FA
{
    mangled_assert("luaB_collectgarbage");
    todo("implement");
    __int32 __result = _sub_100022FA(L);
    return __result;
}

_extern __int32 _sub_10002323(lua_State *);
_static __int32 luaB_type(lua_State *L) // 0x10002323
{
    mangled_assert("luaB_type");
    todo("implement");
    __int32 __result = _sub_10002323(L);
    return __result;
}

_extern __int32 _sub_10002353(lua_State *);
_static __int32 luaB_typeid(lua_State *L) // 0x10002353
{
    mangled_assert("luaB_typeid");
    todo("implement");
    __int32 __result = _sub_10002353(L);
    return __result;
}

_extern __int32 _sub_1000237C(lua_State *);
_static __int32 luaB_next(lua_State *L) // 0x1000237C
{
    mangled_assert("luaB_next");
    todo("implement");
    __int32 __result = _sub_1000237C(L);
    return __result;
}

_extern __int32 _sub_10002BE6(lua_State *, __int32, __int32);
_static __int32 passresults(lua_State *L, __int32 status, __int32 oldtop) // 0x10002BE6
{
    mangled_assert("passresults");
    todo("implement");
    __int32 __result = _sub_10002BE6(L, status, oldtop);
    return __result;
}

_extern __int32 _sub_100023B7(lua_State *);
_static __int32 luaB_dostring(lua_State *L) // 0x100023B7
{
    mangled_assert("luaB_dostring");
    todo("implement");
    __int32 __result = _sub_100023B7(L);
    return __result;
}

_extern __int32 _sub_1000240B(lua_State *);
_static __int32 luaB_dofile(lua_State *L) // 0x1000240B
{
    mangled_assert("luaB_dofile");
    todo("implement");
    __int32 __result = _sub_1000240B(L);
    return __result;
}

_extern __int32 _sub_1000243F(lua_State *);
_static __int32 luaB_call(lua_State *L) // 0x1000243F
{
    mangled_assert("luaB_call");
    todo("implement");
    __int32 __result = _sub_1000243F(L);
    return __result;
}

_extern __int32 _sub_1000255A(lua_State *);
_static __int32 luaB_tostring(lua_State *L) // 0x1000255A
{
    mangled_assert("luaB_tostring");
    todo("implement");
    __int32 __result = _sub_1000255A(L);
    return __result;
}

_extern __int32 _sub_10002609(lua_State *);
_static __int32 luaB_foreachi(lua_State *L) // 0x10002609
{
    mangled_assert("luaB_foreachi");
    todo("implement");
    __int32 __result = _sub_10002609(L);
    return __result;
}

_extern __int32 _sub_1000268A(lua_State *);
_static __int32 luaB_foreach(lua_State *L) // 0x1000268A
{
    mangled_assert("luaB_foreach");
    todo("implement");
    __int32 __result = _sub_1000268A(L);
    return __result;
}

_extern __int32 _sub_100026F7(lua_State *);
_static __int32 luaB_assert(lua_State *L) // 0x100026F7
{
    mangled_assert("luaB_assert");
    todo("implement");
    __int32 __result = _sub_100026F7(L);
    return __result;
}

_extern __int32 _sub_1000273B(lua_State *);
_static __int32 luaB_getn(lua_State *L) // 0x1000273B
{
    mangled_assert("luaB_getn");
    todo("implement");
    __int32 __result = _sub_1000273B(L);
    return __result;
}

_extern __int32 _sub_10002771(lua_State *);
_static __int32 luaB_tinsert(lua_State *L) // 0x10002771
{
    mangled_assert("luaB_tinsert");
    todo("implement");
    __int32 __result = _sub_10002771(L);
    return __result;
}

_extern __int32 _sub_10002815(lua_State *);
_static __int32 luaB_tremove(lua_State *L) // 0x10002815
{
    mangled_assert("luaB_tremove");
    todo("implement");
    __int32 __result = _sub_10002815(L);
    return __result;
}

_extern void _sub_10002C2B(lua_State *, __int32, __int32);
_static void set2(lua_State *L, __int32 i, __int32 j) // 0x10002C2B
{
    mangled_assert("set2");
    todo("implement");
    _sub_10002C2B(L, i, j);
}

_extern __int32 _sub_10002C64(lua_State *, __int32, __int32);
_static __int32 sort_comp(lua_State *L, __int32 a, __int32 b) // 0x10002C64
{
    mangled_assert("sort_comp");
    todo("implement");
    __int32 __result = _sub_10002C64(L, a, b);
    return __result;
}

_extern void _sub_10002913(lua_State *, __int32, __int32);
_static void auxsort(lua_State *L, __int32 l, __int32 u) // 0x10002913
{
    mangled_assert("auxsort");
    todo("implement");
    _sub_10002913(L, l, u);
}

_extern __int32 _sub_100028CA(lua_State *);
_static __int32 luaB_sort(lua_State *L) // 0x100028CA
{
    mangled_assert("luaB_sort");
    todo("implement");
    __int32 __result = _sub_100028CA(L);
    return __result;
}

_extern __int32 _sub_10002B08(lua_State *);
_static __int32 deprecated_func(lua_State *L) // 0x10002B08
{
    mangled_assert("deprecated_func");
    todo("implement");
    __int32 __result = _sub_10002B08(L);
    return __result;
}

_extern void _sub_10002B2A(lua_State *);
_static void deprecated_funcs(lua_State *L) // 0x10002B2A
{
    mangled_assert("deprecated_funcs");
    todo("implement");
    _sub_10002B2A(L);
}
#endif

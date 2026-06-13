#if 0
/* ---------- headers */

#include "decomp.h"
#include <stddef.h>
#include <stdlib.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <swprintf.inl>
#include <math.h>
#include <lauxlib.h>
#include <stdio.h>
#include <limits.h>
#include <lualib.h>
#include <lua.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void lua_mathlibopen(lua_State *L);

_static __int32 math_and(lua_State *L);
_static __int32 math_or(lua_State *L);
_static __int32 math_shl(lua_State *L);
_static __int32 math_shr(lua_State *L);
_static __int32 math_abs(lua_State *L);
_static __int32 math_sin(lua_State *L);
_static __int32 math_cos(lua_State *L);
_static __int32 math_tan(lua_State *L);
_static __int32 math_asin(lua_State *L);
_static __int32 math_acos(lua_State *L);
_static __int32 math_atan(lua_State *L);
_static __int32 math_atan2(lua_State *L);
_static __int32 math_ceil(lua_State *L);
_static __int32 math_floor(lua_State *L);
_static __int32 math_mod(lua_State *L);
_static __int32 math_sqrt(lua_State *L);
_static __int32 math_pow(lua_State *L);
_static __int32 math_log(lua_State *L);
_static __int32 math_log10(lua_State *L);
_static __int32 math_exp(lua_State *L);
_static __int32 math_deg(lua_State *L);
_static __int32 math_rad(lua_State *L);
_static __int32 math_frexp(lua_State *L);
_static __int32 math_ldexp(lua_State *L);
_static __int32 math_min(lua_State *L);
_static __int32 math_max(lua_State *L);
_static __int32 math_random(lua_State *L);
_static __int32 math_randomseed(lua_State *L);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern luaL_reg const mathlib[27]; // 0x100103C0
}

/* ---------- public code */

_extern void _sub_10007B5F(lua_State *);
void lua_mathlibopen(lua_State *L) // 0x10007B5F
{
    mangled_assert("_lua_mathlibopen@4");
    todo("implement");
    _sub_10007B5F(L);
}

/* ---------- private code */

_extern __int32 _sub_10007424(lua_State *);
_static __int32 math_and(lua_State *L) // 0x10007424
{
    mangled_assert("math_and");
    todo("implement");
    __int32 __result = _sub_10007424(L);
    return __result;
}

_extern __int32 _sub_1000746F(lua_State *);
_static __int32 math_or(lua_State *L) // 0x1000746F
{
    mangled_assert("math_or");
    todo("implement");
    __int32 __result = _sub_1000746F(L);
    return __result;
}

_extern __int32 _sub_100074BA(lua_State *);
_static __int32 math_shl(lua_State *L) // 0x100074BA
{
    mangled_assert("math_shl");
    todo("implement");
    __int32 __result = _sub_100074BA(L);
    return __result;
}

_extern __int32 _sub_10007505(lua_State *);
_static __int32 math_shr(lua_State *L) // 0x10007505
{
    mangled_assert("math_shr");
    todo("implement");
    __int32 __result = _sub_10007505(L);
    return __result;
}

_extern __int32 _sub_10007550(lua_State *);
_static __int32 math_abs(lua_State *L) // 0x10007550
{
    mangled_assert("math_abs");
    todo("implement");
    __int32 __result = _sub_10007550(L);
    return __result;
}

_extern __int32 _sub_10007577(lua_State *);
_static __int32 math_sin(lua_State *L) // 0x10007577
{
    mangled_assert("math_sin");
    todo("implement");
    __int32 __result = _sub_10007577(L);
    return __result;
}

_extern __int32 _sub_100075B4(lua_State *);
_static __int32 math_cos(lua_State *L) // 0x100075B4
{
    mangled_assert("math_cos");
    todo("implement");
    __int32 __result = _sub_100075B4(L);
    return __result;
}

_extern __int32 _sub_100075F1(lua_State *);
_static __int32 math_tan(lua_State *L) // 0x100075F1
{
    mangled_assert("math_tan");
    todo("implement");
    __int32 __result = _sub_100075F1(L);
    return __result;
}

_extern __int32 _sub_1000762E(lua_State *);
_static __int32 math_asin(lua_State *L) // 0x1000762E
{
    mangled_assert("math_asin");
    todo("implement");
    __int32 __result = _sub_1000762E(L);
    return __result;
}

_extern __int32 _sub_1000766B(lua_State *);
_static __int32 math_acos(lua_State *L) // 0x1000766B
{
    mangled_assert("math_acos");
    todo("implement");
    __int32 __result = _sub_1000766B(L);
    return __result;
}

_extern __int32 _sub_100076A8(lua_State *);
_static __int32 math_atan(lua_State *L) // 0x100076A8
{
    mangled_assert("math_atan");
    todo("implement");
    __int32 __result = _sub_100076A8(L);
    return __result;
}

_extern __int32 _sub_100076E5(lua_State *);
_static __int32 math_atan2(lua_State *L) // 0x100076E5
{
    mangled_assert("math_atan2");
    todo("implement");
    __int32 __result = _sub_100076E5(L);
    return __result;
}

_extern __int32 _sub_10007734(lua_State *);
_static __int32 math_ceil(lua_State *L) // 0x10007734
{
    mangled_assert("math_ceil");
    todo("implement");
    __int32 __result = _sub_10007734(L);
    return __result;
}

_extern __int32 _sub_1000775C(lua_State *);
_static __int32 math_floor(lua_State *L) // 0x1000775C
{
    mangled_assert("math_floor");
    todo("implement");
    __int32 __result = _sub_1000775C(L);
    return __result;
}

_extern __int32 _sub_10007784(lua_State *);
_static __int32 math_mod(lua_State *L) // 0x10007784
{
    mangled_assert("math_mod");
    todo("implement");
    __int32 __result = _sub_10007784(L);
    return __result;
}

_extern __int32 _sub_100077BD(lua_State *);
_static __int32 math_sqrt(lua_State *L) // 0x100077BD
{
    mangled_assert("math_sqrt");
    todo("implement");
    __int32 __result = _sub_100077BD(L);
    return __result;
}

_extern __int32 _sub_10007BAF(lua_State *);
_static __int32 math_pow(lua_State *L) // 0x10007BAF
{
    mangled_assert("math_pow");
    todo("implement");
    __int32 __result = _sub_10007BAF(L);
    return __result;
}

_extern __int32 _sub_100077E4(lua_State *);
_static __int32 math_log(lua_State *L) // 0x100077E4
{
    mangled_assert("math_log");
    todo("implement");
    __int32 __result = _sub_100077E4(L);
    return __result;
}

_extern __int32 _sub_1000780B(lua_State *);
_static __int32 math_log10(lua_State *L) // 0x1000780B
{
    mangled_assert("math_log10");
    todo("implement");
    __int32 __result = _sub_1000780B(L);
    return __result;
}

_extern __int32 _sub_10007832(lua_State *);
_static __int32 math_exp(lua_State *L) // 0x10007832
{
    mangled_assert("math_exp");
    todo("implement");
    __int32 __result = _sub_10007832(L);
    return __result;
}

_extern __int32 _sub_10007859(lua_State *);
_static __int32 math_deg(lua_State *L) // 0x10007859
{
    mangled_assert("math_deg");
    todo("implement");
    __int32 __result = _sub_10007859(L);
    return __result;
}

_extern __int32 _sub_1000788E(lua_State *);
_static __int32 math_rad(lua_State *L) // 0x1000788E
{
    mangled_assert("math_rad");
    todo("implement");
    __int32 __result = _sub_1000788E(L);
    return __result;
}

_extern __int32 _sub_100078C3(lua_State *);
_static __int32 math_frexp(lua_State *L) // 0x100078C3
{
    mangled_assert("math_frexp");
    todo("implement");
    __int32 __result = _sub_100078C3(L);
    return __result;
}

_extern __int32 _sub_1000790B(lua_State *);
_static __int32 math_ldexp(lua_State *L) // 0x1000790B
{
    mangled_assert("math_ldexp");
    todo("implement");
    __int32 __result = _sub_1000790B(L);
    return __result;
}

_extern __int32 _sub_10007945(lua_State *);
_static __int32 math_min(lua_State *L) // 0x10007945
{
    mangled_assert("math_min");
    todo("implement");
    __int32 __result = _sub_10007945(L);
    return __result;
}

_extern __int32 _sub_100079B4(lua_State *);
_static __int32 math_max(lua_State *L) // 0x100079B4
{
    mangled_assert("math_max");
    todo("implement");
    __int32 __result = _sub_100079B4(L);
    return __result;
}

_extern __int32 _sub_10007A25(lua_State *);
_static __int32 math_random(lua_State *L) // 0x10007A25
{
    mangled_assert("math_random");
    todo("implement");
    __int32 __result = _sub_10007A25(L);
    return __result;
}

_extern __int32 _sub_10007B42(lua_State *);
_static __int32 math_randomseed(lua_State *L) // 0x10007B42
{
    mangled_assert("math_randomseed");
    todo("implement");
    __int32 __result = _sub_10007B42(L);
    return __result;
}
#endif

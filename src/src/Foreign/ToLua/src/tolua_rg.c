#if 0
/* ---------- headers */

#include "decomp.h"
#include <swprintf.inl>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua.h"
#include <memory\memorylib.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <stdio.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua_rg.h"
#include <stdlib.h>
#include <limits.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua_tm.h"
#include <string.h>
#include <memory.h>
#include <lua.h>
#include <stddef.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua_tt.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void tolua_globalvar(lua_State *L, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *));
extern void tolua_globalarray(lua_State *L, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *));
extern void tolua_tablevar(lua_State *L, char *table, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *));
extern void tolua_tablearray(lua_State *L, char *table, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *));
extern void tolua_module(lua_State *L, char *name);
extern void tolua_cclass(lua_State *L, char *name, char *base);
extern void tolua_function(lua_State *L, char *parent, char *name, __int32 (*func)(lua_State *));
extern void tolua_constant(lua_State *L, char *parent, char *name, double value);
extern void toluaI_setregistry(lua_State *L, char *field);
extern void toluaI_getregistry(lua_State *L, char *field);

_static __int32 toluaI_const_global_array(lua_State *L);
_static __int32 toluaI_get_array(lua_State *L);
_static __int32 toluaI_const_array(lua_State *L);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_6FB48C(lua_State *, char *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
void tolua_globalvar(lua_State *L, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *)) // 0x6FB48C
{
    mangled_assert("_tolua_globalvar@16");
    todo("implement");
    _sub_6FB48C(L, name, get, set);
}

_extern void _sub_6FB41D(lua_State *, char *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
void tolua_globalarray(lua_State *L, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *)) // 0x6FB41D
{
    mangled_assert("_tolua_globalarray@16");
    todo("implement");
    _sub_6FB41D(L, name, get, set);
}

_extern void _sub_6FB653(lua_State *, char *, char *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
void tolua_tablevar(lua_State *L, char *table, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *)) // 0x6FB653
{
    mangled_assert("_tolua_tablevar@20");
    todo("implement");
    _sub_6FB653(L, table, name, get, set);
}

_extern void _sub_6FB5A2(lua_State *, char *, char *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
void tolua_tablearray(lua_State *L, char *table, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *)) // 0x6FB5A2
{
    mangled_assert("_tolua_tablearray@20");
    todo("implement");
    _sub_6FB5A2(L, table, name, get, set);
}

_extern void _sub_6FB511(lua_State *, char *);
void tolua_module(lua_State *L, char *name) // 0x6FB511
{
    mangled_assert("_tolua_module@8");
    todo("implement");
    _sub_6FB511(L, name);
}

_extern void _sub_6FB29C(lua_State *, char *, char *);
void tolua_cclass(lua_State *L, char *name, char *base) // 0x6FB29C
{
    mangled_assert("_tolua_cclass@12");
    todo("implement");
    _sub_6FB29C(L, name, base);
}

_extern void _sub_6FB3BD(lua_State *, char *, char *, __int32 (*)(lua_State *));
void tolua_function(lua_State *L, char *parent, char *name, __int32 (*func)(lua_State *)) // 0x6FB3BD
{
    mangled_assert("_tolua_function@16");
    todo("implement");
    _sub_6FB3BD(L, parent, name, func);
}

_extern void _sub_6FB34F(lua_State *, char *, char *, double);
void tolua_constant(lua_State *L, char *parent, char *name, double value) // 0x6FB34F
{
    mangled_assert("_tolua_constant@20");
    todo("implement");
    _sub_6FB34F(L, parent, name, value);
}

_extern void _sub_6FB25B(lua_State *, char *);
void toluaI_setregistry(lua_State *L, char *field) // 0x6FB25B
{
    mangled_assert("_toluaI_setregistry@8");
    todo("implement");
    _sub_6FB25B(L, field);
}

_extern void _sub_6FB223(lua_State *, char *);
void toluaI_getregistry(lua_State *L, char *field) // 0x6FB223
{
    mangled_assert("_toluaI_getregistry@8");
    todo("implement");
    _sub_6FB223(L, field);
}

/* ---------- private code */

_extern __int32 _sub_6FB137(lua_State *);
_static __int32 toluaI_const_global_array(lua_State *L) // 0x6FB137
{
    mangled_assert("toluaI_const_global_array");
    todo("implement");
    __int32 __result = _sub_6FB137(L);
    return __result;
}

_extern __int32 _sub_6FB14B(lua_State *);
_static __int32 toluaI_get_array(lua_State *L) // 0x6FB14B
{
    mangled_assert("toluaI_get_array");
    todo("implement");
    __int32 __result = _sub_6FB14B(L);
    return __result;
}

_extern __int32 _sub_6FB123(lua_State *);
_static __int32 toluaI_const_array(lua_State *L) // 0x6FB123
{
    mangled_assert("toluaI_const_array");
    todo("implement");
    __int32 __result = _sub_6FB123(L);
    return __result;
}
#endif

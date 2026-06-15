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

void tolua_globalvar(lua_State *L, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *)) // 0x6FB48C
{
    mangled_assert("_tolua_globalvar@16");
    todo("implement");
}

void tolua_globalarray(lua_State *L, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *)) // 0x6FB41D
{
    mangled_assert("_tolua_globalarray@16");
    todo("implement");
}

void tolua_tablevar(lua_State *L, char *table, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *)) // 0x6FB653
{
    mangled_assert("_tolua_tablevar@20");
    todo("implement");
}

void tolua_tablearray(lua_State *L, char *table, char *name, __int32 (*get)(lua_State *), __int32 (*set)(lua_State *)) // 0x6FB5A2
{
    mangled_assert("_tolua_tablearray@20");
    todo("implement");
}

void tolua_module(lua_State *L, char *name) // 0x6FB511
{
    mangled_assert("_tolua_module@8");
    todo("implement");
}

void tolua_cclass(lua_State *L, char *name, char *base) // 0x6FB29C
{
    mangled_assert("_tolua_cclass@12");
    todo("implement");
}

void tolua_function(lua_State *L, char *parent, char *name, __int32 (*func)(lua_State *)) // 0x6FB3BD
{
    mangled_assert("_tolua_function@16");
    todo("implement");
}

void tolua_constant(lua_State *L, char *parent, char *name, double value) // 0x6FB34F
{
    mangled_assert("_tolua_constant@20");
    todo("implement");
}

void toluaI_setregistry(lua_State *L, char *field) // 0x6FB25B
{
    mangled_assert("_toluaI_setregistry@8");
    todo("implement");
}

void toluaI_getregistry(lua_State *L, char *field) // 0x6FB223
{
    mangled_assert("_toluaI_getregistry@8");
    todo("implement");
}

/* ---------- private code */

_static __int32 toluaI_const_global_array(lua_State *L) // 0x6FB137
{
    mangled_assert("toluaI_const_global_array");
    todo("implement");
}

_static __int32 toluaI_get_array(lua_State *L) // 0x6FB14B
{
    mangled_assert("toluaI_get_array");
    todo("implement");
}

_static __int32 toluaI_const_array(lua_State *L) // 0x6FB123
{
    mangled_assert("toluaI_const_array");
    todo("implement");
}
#endif

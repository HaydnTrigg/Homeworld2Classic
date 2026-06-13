#if 0
/* ---------- headers */

#include "decomp.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua.h"
#include <memory\memorylib.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua_rg.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua_tm.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <memory.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Foreign\ToLua\src\tolua_tt.h"
#include <lua.h>
#include <stddef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void toluaI_tm_global(lua_State *L, __int32 lo);
extern void toluaI_tm_module(lua_State *L, __int32 lo);
extern void toluaI_tm_setclass(lua_State *L, __int32 lo);
extern void toluaI_tm_class(lua_State *L, __int32 lo, char *name);
extern void toluaI_tm_instance(lua_State *L, __int32 tag, __int32 lo);
extern void toluaI_tm_linstance(lua_State *L, __int32 tag, __int32 lo);
extern void *tolua_doclone(lua_State *L, void *value, __int32 tag);
extern void toluaI_tm_closeclonestate();
extern void *tolua_copy(lua_State *L, void *value, unsigned __int32 size);
extern void toluaI_tm_pushmate(lua_State *L, __int32 lo);
extern void toluaI_tm_pushclass(lua_State *L, __int32 lo);
extern __int32 toluaI_gettag(lua_State *L, char *tagname);
extern void toluaI_tm_init(lua_State *L);
extern void toluaI_tm_using(lua_State *L, __int32 module);

_static void settag(lua_State *L, __int32 lo, char *tag_registry_field);
_static void toluaI_tm_undoclone(lua_State *L, __int32 tag, void *clone);
_static __int32 map(lua_State *L);
_static void oo_gettable(lua_State *L, __int32 table, __int32 base, __int32 index);
_static __int32 oo_settable(lua_State *L, __int32 table, __int32 base, __int32 index, __int32 value);
_static __int32 class_index(lua_State *L);
_static __int32 class_settable(lua_State *L);
_static __int32 instance_gettable(lua_State *L);
_static __int32 instance_settable(lua_State *L);
_static __int32 instance_gc(lua_State *L);
_static __int32 gen_operator(lua_State *L);
_static __int32 instance_operator(lua_State *L);
_static __int32 instance_relational(lua_State *L);
_static __int32 linstance_index(lua_State *L);
_static __int32 module_index(lua_State *L);
_static __int32 module_settable(lua_State *L);
_static __int32 global_getglobal(lua_State *L);
_static __int32 global_setglobal(lua_State *L);
_static __int32 indirect_getglobal(lua_State *L);
_static __int32 indirect_setglobal(lua_State *L);
_static void setmethods(lua_State *L);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern lua_State *clone_state; // 0x8607DC
}

/* ---------- public code */

_extern void _sub_6FA9A8(lua_State *, __int32);
void toluaI_tm_global(lua_State *L, __int32 lo) // 0x6FA9A8
{
    mangled_assert("_toluaI_tm_global@8");
    todo("implement");
    _sub_6FA9A8(L, lo);
}

_extern void _sub_6FAC4D(lua_State *, __int32);
void toluaI_tm_module(lua_State *L, __int32 lo) // 0x6FAC4D
{
    mangled_assert("_toluaI_tm_module@8");
    todo("implement");
    _sub_6FAC4D(L, lo);
}

_extern void _sub_6FACEC(lua_State *, __int32);
void toluaI_tm_setclass(lua_State *L, __int32 lo) // 0x6FACEC
{
    mangled_assert("_toluaI_tm_setclass@8");
    todo("implement");
    _sub_6FACEC(L, lo);
}

_extern void _sub_6FA911(lua_State *, __int32, char *);
void toluaI_tm_class(lua_State *L, __int32 lo, char *name) // 0x6FA911
{
    mangled_assert("_toluaI_tm_class@12");
    todo("implement");
    _sub_6FA911(L, lo, name);
}

_extern void _sub_6FAB71(lua_State *, __int32, __int32);
void toluaI_tm_instance(lua_State *L, __int32 tag, __int32 lo) // 0x6FAB71
{
    mangled_assert("_toluaI_tm_instance@12");
    todo("implement");
    _sub_6FAB71(L, tag, lo);
}

_extern void _sub_6FABDF(lua_State *, __int32, __int32);
void toluaI_tm_linstance(lua_State *L, __int32 tag, __int32 lo) // 0x6FABDF
{
    mangled_assert("_toluaI_tm_linstance@12");
    todo("implement");
    _sub_6FABDF(L, tag, lo);
}

_extern void *_sub_6FAF7E(lua_State *, void *, __int32);
void *tolua_doclone(lua_State *L, void *value, __int32 tag) // 0x6FAF7E
{
    mangled_assert("_tolua_doclone@12");
    todo("implement");
    void * __result = _sub_6FAF7E(L, value, tag);
    return __result;
}

_extern void _sub_6FA990();
void toluaI_tm_closeclonestate() // 0x6FA990
{
    mangled_assert("_toluaI_tm_closeclonestate@0");
    todo("implement");
    _sub_6FA990();
}

_extern void *_sub_6FAF45(lua_State *, void *, unsigned __int32);
void *tolua_copy(lua_State *L, void *value, unsigned __int32 size) // 0x6FAF45
{
    mangled_assert("_tolua_copy@12");
    todo("implement");
    void * __result = _sub_6FAF45(L, value, size);
    return __result;
}

_extern void _sub_6FACB2(lua_State *, __int32);
void toluaI_tm_pushmate(lua_State *L, __int32 lo) // 0x6FACB2
{
    mangled_assert("_toluaI_tm_pushmate@8");
    todo("implement");
    _sub_6FACB2(L, lo);
}

_extern void _sub_6FAC62(lua_State *, __int32);
void toluaI_tm_pushclass(lua_State *L, __int32 lo) // 0x6FAC62
{
    mangled_assert("_toluaI_tm_pushclass@8");
    todo("implement");
    _sub_6FAC62(L, lo);
}

_extern __int32 _sub_6FA8DB(lua_State *, char *);
__int32 toluaI_gettag(lua_State *L, char *tagname) // 0x6FA8DB
{
    mangled_assert("_toluaI_gettag@8");
    todo("implement");
    __int32 __result = _sub_6FA8DB(L, tagname);
    return __result;
}

_extern void _sub_6FA9BD(lua_State *);
void toluaI_tm_init(lua_State *L) // 0x6FA9BD
{
    mangled_assert("_toluaI_tm_init@4");
    todo("implement");
    _sub_6FA9BD(L);
}

_extern void _sub_6FAE5D(lua_State *, __int32);
void toluaI_tm_using(lua_State *L, __int32 module) // 0x6FAE5D
{
    mangled_assert("_toluaI_tm_using@8");
    todo("implement");
    _sub_6FAE5D(L, module);
}

/* ---------- private code */

_extern void _sub_6FA89E(lua_State *, __int32, char *);
_static void settag(lua_State *L, __int32 lo, char *tag_registry_field) // 0x6FA89E
{
    mangled_assert("settag");
    todo("implement");
    _sub_6FA89E(L, lo, tag_registry_field);
}

_extern void _sub_6FAD01(lua_State *, __int32, void *);
_static void toluaI_tm_undoclone(lua_State *L, __int32 tag, void *clone) // 0x6FAD01
{
    mangled_assert("toluaI_tm_undoclone");
    todo("implement");
    _sub_6FAD01(L, tag, clone);
}

_extern __int32 _sub_6FA3E0(lua_State *);
_static __int32 map(lua_State *L) // 0x6FA3E0
{
    mangled_assert("map");
    todo("implement");
    __int32 __result = _sub_6FA3E0(L);
    return __result;
}

_extern void _sub_6FA515(lua_State *, __int32, __int32, __int32);
_static void oo_gettable(lua_State *L, __int32 table, __int32 base, __int32 index) // 0x6FA515
{
    mangled_assert("oo_gettable");
    todo("implement");
    _sub_6FA515(L, table, base, index);
}

_extern __int32 _sub_6FA600(lua_State *, __int32, __int32, __int32, __int32);
_static __int32 oo_settable(lua_State *L, __int32 table, __int32 base, __int32 index, __int32 value) // 0x6FA600
{
    mangled_assert("oo_settable");
    todo("implement");
    __int32 __result = _sub_6FA600(L, table, base, index, value);
    return __result;
}

_extern __int32 _sub_6FA0A2(lua_State *);
_static __int32 class_index(lua_State *L) // 0x6FA0A2
{
    mangled_assert("class_index");
    todo("implement");
    __int32 __result = _sub_6FA0A2(L);
    return __result;
}

_extern __int32 _sub_6FA0B7(lua_State *);
_static __int32 class_settable(lua_State *L) // 0x6FA0B7
{
    mangled_assert("class_settable");
    todo("implement");
    __int32 __result = _sub_6FA0B7(L);
    return __result;
}

_extern __int32 _sub_6FA25D(lua_State *);
_static __int32 instance_gettable(lua_State *L) // 0x6FA25D
{
    mangled_assert("instance_gettable");
    todo("implement");
    __int32 __result = _sub_6FA25D(L);
    return __result;
}

_extern __int32 _sub_6FA2F1(lua_State *);
_static __int32 instance_settable(lua_State *L) // 0x6FA2F1
{
    mangled_assert("instance_settable");
    todo("implement");
    __int32 __result = _sub_6FA2F1(L);
    return __result;
}

_extern __int32 _sub_6FA235(lua_State *);
_static __int32 instance_gc(lua_State *L) // 0x6FA235
{
    mangled_assert("instance_gc");
    todo("implement");
    __int32 __result = _sub_6FA235(L);
    return __result;
}

_extern __int32 _sub_6FA0F4(lua_State *);
_static __int32 gen_operator(lua_State *L) // 0x6FA0F4
{
    mangled_assert("gen_operator");
    todo("implement");
    __int32 __result = _sub_6FA0F4(L);
    return __result;
}

_extern __int32 _sub_6FA2B8(lua_State *);
_static __int32 instance_operator(lua_State *L) // 0x6FA2B8
{
    mangled_assert("instance_operator");
    todo("implement");
    __int32 __result = _sub_6FA2B8(L);
    return __result;
}

_extern __int32 _sub_6FA2BD(lua_State *);
_static __int32 instance_relational(lua_State *L) // 0x6FA2BD
{
    mangled_assert("instance_relational");
    todo("implement");
    __int32 __result = _sub_6FA2BD(L);
    return __result;
}

_extern __int32 _sub_6FA3C0(lua_State *);
_static __int32 linstance_index(lua_State *L) // 0x6FA3C0
{
    mangled_assert("linstance_index");
    todo("implement");
    __int32 __result = _sub_6FA3C0(L);
    return __result;
}

_extern __int32 _sub_6FA43B(lua_State *);
_static __int32 module_index(lua_State *L) // 0x6FA43B
{
    mangled_assert("module_index");
    todo("implement");
    __int32 __result = _sub_6FA43B(L);
    return __result;
}

_extern __int32 _sub_6FA49E(lua_State *);
_static __int32 module_settable(lua_State *L) // 0x6FA49E
{
    mangled_assert("module_settable");
    todo("implement");
    __int32 __result = _sub_6FA49E(L);
    return __result;
}

_extern __int32 _sub_6FA142(lua_State *);
_static __int32 global_getglobal(lua_State *L) // 0x6FA142
{
    mangled_assert("global_getglobal");
    todo("implement");
    __int32 __result = _sub_6FA142(L);
    return __result;
}

_extern __int32 _sub_6FA171(lua_State *);
_static __int32 global_setglobal(lua_State *L) // 0x6FA171
{
    mangled_assert("global_setglobal");
    todo("implement");
    __int32 __result = _sub_6FA171(L);
    return __result;
}

_extern __int32 _sub_6FA1C1(lua_State *);
_static __int32 indirect_getglobal(lua_State *L) // 0x6FA1C1
{
    mangled_assert("indirect_getglobal");
    todo("implement");
    __int32 __result = _sub_6FA1C1(L);
    return __result;
}

_extern __int32 _sub_6FA1FA(lua_State *);
_static __int32 indirect_setglobal(lua_State *L) // 0x6FA1FA
{
    mangled_assert("indirect_setglobal");
    todo("implement");
    __int32 __result = _sub_6FA1FA(L);
    return __result;
}

_extern void _sub_6FA6A6(lua_State *);
_static void setmethods(lua_State *L) // 0x6FA6A6
{
    mangled_assert("setmethods");
    todo("implement");
    _sub_6FA6A6(L);
}
#endif

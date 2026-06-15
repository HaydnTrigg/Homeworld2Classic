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

extern __int32 tolua_open(lua_State *L);
extern void tolua_close(lua_State *L);
extern void tolua_using(lua_State *L, __int32 module);
extern void tolua_class(lua_State *L, __int32 derived, __int32 base);
extern void tolua_instance(lua_State *L, __int32 instance, __int32 classobj);
extern void tolua_foreach(lua_State *L, __int32 lo, __int32 f);
extern char const *tolua_type(lua_State *L, __int32 lo);
extern __int32 tolua_tag(lua_State *L, char *type);
extern __int32 tolua_base(lua_State *L, __int32 lo);
extern __int32 tolua_cast(lua_State *L, __int32 lo, char *type);
extern void tolua_takeownership(lua_State *L, __int32 lo);

_static __int32 filter(lua_State *L);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

__int32 tolua_open(lua_State *L) // 0x6F9A4D
{
    mangled_assert("_tolua_open@4");
    todo("implement");
}

void tolua_close(lua_State *L) // 0x6F9965
{
    mangled_assert("_tolua_close@4");
    todo("implement");
}

void tolua_using(lua_State *L, __int32 module) // 0x6F9B19
{
    mangled_assert("_tolua_using@8");
    todo("implement");
}

void tolua_class(lua_State *L, __int32 derived, __int32 base) // 0x6F98DF
{
    mangled_assert("_tolua_class@12");
    todo("implement");
}

void tolua_instance(lua_State *L, __int32 instance, __int32 classobj) // 0x6F99DA
{
    mangled_assert("_tolua_instance@12");
    todo("implement");
}

void tolua_foreach(lua_State *L, __int32 lo, __int32 f) // 0x6F996D
{
    mangled_assert("_tolua_foreach@12");
    todo("implement");
}

char const *tolua_type(lua_State *L, __int32 lo) // 0x6F9B14
{
    mangled_assert("_tolua_type@8");
    todo("implement");
}

__int32 tolua_tag(lua_State *L, char *type) // 0x6F9AC4
{
    mangled_assert("_tolua_tag@8");
    todo("implement");
}

__int32 tolua_base(lua_State *L, __int32 lo) // 0x6F9844
{
    mangled_assert("_tolua_base@8");
    todo("implement");
}

__int32 tolua_cast(lua_State *L, __int32 lo, char *type) // 0x6F98A0
{
    mangled_assert("_tolua_cast@12");
    todo("implement");
}

void tolua_takeownership(lua_State *L, __int32 lo) // 0x6F9AC9
{
    mangled_assert("_tolua_takeownership@8");
    todo("implement");
}

/* ---------- private code */

_static __int32 filter(lua_State *L) // 0x6F97EA
{
    mangled_assert("filter");
    todo("implement");
}
#endif

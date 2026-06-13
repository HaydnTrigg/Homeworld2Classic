#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\ldo.h>
#include <lua\lstate.h>
#include <lua\lobject.h>
#include <luadebug.h>
#include <lua\llimits.h>
#include <lua\lmem.h>
#include <lua.h>
#include <stddef.h>
#include <limits.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void *luaM_growaux(lua_State *L, void *block, unsigned __int32 nelems, __int32 inc, unsigned __int32 size, char const *errormsg, unsigned __int32 limit);
extern void *luaM_realloc(lua_State *L, void *block, unsigned long size);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void *_sub_10007BE8(lua_State *, void *, unsigned __int32, __int32, unsigned __int32, char const *, unsigned __int32);
void *luaM_growaux(lua_State *L, void *block, unsigned __int32 nelems, __int32 inc, unsigned __int32 size, char const *errormsg, unsigned __int32 limit) // 0x10007BE8
{
    mangled_assert("_luaM_growaux@28");
    todo("implement");
    void * __result = _sub_10007BE8(L, block, nelems, inc, size, errormsg, limit);
    return __result;
}

_extern void *_sub_10007C3C(lua_State *, void *, unsigned long);
void *luaM_realloc(lua_State *L, void *block, unsigned long size) // 0x10007C3C
{
    mangled_assert("_luaM_realloc@12");
    todo("implement");
    void * __result = _sub_10007C3C(L, block, size);
    return __result;
}

/* ---------- private code */
#endif

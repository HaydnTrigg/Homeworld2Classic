#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua\llex.h>
#include <lua\lzio.h>
#include <lua.h>
#include <stddef.h>
#include <lua\lmem.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\ltm.h>
#include <lua\lstring.h>
#include <swprintf.inl>
#include <lua\ltable.h>
#include <lua\ldo.h>
#include <lua\lobject.h>
#include <lua\lstate.h>
#include <lua\llimits.h>
#include <luadebug.h>
#include <limits.h>
#include <lua\lgc.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern lua_State *lua_open(__int32 stacksize);
extern void lua_close(lua_State *L);

_static __int32 errormessage(lua_State *L);
_static void f_luaopen(lua_State *L, void *ud);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern lua_State *_sub_100097DB(__int32);
lua_State *lua_open(__int32 stacksize) // 0x100097DB
{
    mangled_assert("_lua_open@4");
    todo("implement");
    lua_State * __result = _sub_100097DB(stacksize);
    return __result;
}

_extern void _sub_1000975E(lua_State *);
void lua_close(lua_State *L) // 0x1000975E
{
    mangled_assert("_lua_close@4");
    todo("implement");
    _sub_1000975E(L);
}

/* ---------- private code */

_extern __int32 _sub_100096C2(lua_State *);
_static __int32 errormessage(lua_State *L) // 0x100096C2
{
    mangled_assert("errormessage");
    todo("implement");
    __int32 __result = _sub_100096C2(L);
    return __result;
}

_extern void _sub_100096F5(lua_State *, void *);
_static void f_luaopen(lua_State *L, void *ud) // 0x100096F5
{
    mangled_assert("f_luaopen");
    todo("implement");
    _sub_100096F5(L, ud);
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lfunc.h>
#include <lua\lobject.h>
#include <lua\llimits.h>
#include <lua\lmem.h>
#include <lua.h>
#include <stddef.h>
#include <limits.h>
#include <lua\lstate.h>
#include <luadebug.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern Closure *luaF_newclosure(lua_State *L, __int32 nelems);
extern Proto *luaF_newproto(lua_State *L);
extern void luaF_protook(lua_State *L, Proto *f, __int32 pc);
extern void luaF_freeproto(lua_State *L, Proto *f);
extern void luaF_freeclosure(lua_State *L, Closure *c);
extern char const *luaF_getlocalname(Proto const *f, __int32 local_number, __int32 pc);

_static unsigned __int32 protosize(Proto *f);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern Closure *_sub_10004DE1(lua_State *, __int32);
Closure *luaF_newclosure(lua_State *L, __int32 nelems) // 0x10004DE1
{
    mangled_assert("_luaF_newclosure@8");
    todo("implement");
    Closure * __result = _sub_10004DE1(L, nelems);
    return __result;
}

_extern Proto *_sub_10004E14(lua_State *);
Proto *luaF_newproto(lua_State *L) // 0x10004E14
{
    mangled_assert("_luaF_newproto@4");
    todo("implement");
    Proto * __result = _sub_10004E14(L);
    return __result;
}

_extern void _sub_10004E68(lua_State *, Proto *, __int32);
void luaF_protook(lua_State *L, Proto *f, __int32 pc) // 0x10004E68
{
    mangled_assert("_luaF_protook@12");
    todo("implement");
    _sub_10004E68(L, f, pc);
}

_extern void _sub_10004D38(lua_State *, Proto *);
void luaF_freeproto(lua_State *L, Proto *f) // 0x10004D38
{
    mangled_assert("_luaF_freeproto@8");
    todo("implement");
    _sub_10004D38(L, f);
}

_extern void _sub_10004D12(lua_State *, Closure *);
void luaF_freeclosure(lua_State *L, Closure *c) // 0x10004D12
{
    mangled_assert("_luaF_freeclosure@8");
    todo("implement");
    _sub_10004D12(L, c);
}

_extern char const *_sub_10004D9C(Proto const *, __int32, __int32);
char const *luaF_getlocalname(Proto const *f, __int32 local_number, __int32 pc) // 0x10004D9C
{
    mangled_assert("_luaF_getlocalname@12");
    todo("implement");
    char const * __result = _sub_10004D9C(f, local_number, pc);
    return __result;
}

/* ---------- private code */

_extern unsigned __int32 _sub_10004E85(Proto *);
_static unsigned __int32 protosize(Proto *f) // 0x10004E85
{
    mangled_assert("protosize");
    todo("implement");
    unsigned __int32 __result = _sub_10004E85(f);
    return __result;
}
#endif

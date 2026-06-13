#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua\ltm.h>
#include <lua\lstring.h>
#include <lua.h>
#include <stddef.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\ldo.h>
#include <lua\lobject.h>
#include <lua\lstate.h>
#include <lua\llimits.h>
#include <luadebug.h>
#include <limits.h>
#include <lua\ltable.h>
#include <lua\lfunc.h>
#include <lua\lgc.h>
#include <lua\lmem.h>

/* ---------- constants */

/* ---------- definitions */

struct GCState
{
    Hash *tmark; // 0x0
    Closure *cmark; // 0x4
};
static_assert(sizeof(GCState) == 8, "Invalid GCState size");

/* ---------- prototypes */

extern void luaC_collect(lua_State *L, __int32 all);
extern void luaC_checkGC(lua_State *L);

_static void protomark(Proto *f);
_static void markstack(lua_State *L, GCState *st);
_static void marklock(lua_State *L, GCState *st);
_static void markclosure(GCState *st, Closure *cl);
_static void marktagmethods(lua_State *L, GCState *st);
_static void markobject(GCState *st, lua_TObject *o);
_static void markall(lua_State *L);
_static __int32 hasmark(lua_TObject const *o);
_static void invalidaterefs(lua_State *L);
_static void collectproto(lua_State *L);
_static void collectclosure(lua_State *L);
_static void collecttable(lua_State *L);
_static void checktab(lua_State *L, stringtable *tb);
_static void collectstrings(lua_State *L, __int32 all);
_static void collectudata(lua_State *L, __int32 all);
_static void checkMbuffer(lua_State *L);
_static void callgcTM(lua_State *L, lua_TObject const *o);
_static void callgcTMudata(lua_State *L);
_static void luaC_collectgarbage(lua_State *L);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100051ED(lua_State *, __int32);
void luaC_collect(lua_State *L, __int32 all) // 0x100051ED
{
    mangled_assert("_luaC_collect@8");
    todo("implement");
    _sub_100051ED(L, all);
}

_extern void _sub_100051D8(lua_State *);
void luaC_checkGC(lua_State *L) // 0x100051D8
{
    mangled_assert("_luaC_checkGC@4");
    todo("implement");
    _sub_100051D8(L);
}

/* ---------- private code */

_extern void _sub_1000566A(Proto *);
_static void protomark(Proto *f) // 0x1000566A
{
    mangled_assert("protomark");
    todo("implement");
    _sub_1000566A(f);
}

_extern void _sub_10005609(lua_State *, GCState *);
_static void markstack(lua_State *L, GCState *st) // 0x10005609
{
    mangled_assert("markstack");
    todo("implement");
    _sub_10005609(L, st);
}

_extern void _sub_1000557A(lua_State *, GCState *);
_static void marklock(lua_State *L, GCState *st) // 0x1000557A
{
    mangled_assert("marklock");
    todo("implement");
    _sub_1000557A(L, st);
}

_extern void _sub_10005551(GCState *, Closure *);
_static void markclosure(GCState *st, Closure *cl) // 0x10005551
{
    mangled_assert("markclosure");
    todo("implement");
    _sub_10005551(st, cl);
}

_extern void _sub_1000562A(lua_State *, GCState *);
_static void marktagmethods(lua_State *L, GCState *st) // 0x1000562A
{
    mangled_assert("marktagmethods");
    todo("implement");
    _sub_1000562A(L, st);
}

_extern void _sub_100055AE(GCState *, lua_TObject *);
_static void markobject(GCState *st, lua_TObject *o) // 0x100055AE
{
    mangled_assert("markobject");
    todo("implement");
    _sub_100055AE(st, o);
}

_extern void _sub_1000542F(lua_State *);
_static void markall(lua_State *L) // 0x1000542F
{
    mangled_assert("markall");
    todo("implement");
    _sub_1000542F(L);
}

_extern __int32 _sub_1000513C(lua_TObject const *);
_static __int32 hasmark(lua_TObject const *o) // 0x1000513C
{
    mangled_assert("hasmark");
    todo("implement");
    __int32 __result = _sub_1000513C(o);
    return __result;
}

_extern void _sub_10005177(lua_State *);
_static void invalidaterefs(lua_State *L) // 0x10005177
{
    mangled_assert("invalidaterefs");
    todo("implement");
    _sub_10005177(L);
}

_extern void _sub_10004FFE(lua_State *);
_static void collectproto(lua_State *L) // 0x10004FFE
{
    mangled_assert("collectproto");
    todo("implement");
    _sub_10004FFE(L);
}

_extern void _sub_10004FCF(lua_State *);
_static void collectclosure(lua_State *L) // 0x10004FCF
{
    mangled_assert("collectclosure");
    todo("implement");
    _sub_10004FCF(L);
}

_extern void _sub_1000509C(lua_State *);
_static void collecttable(lua_State *L) // 0x1000509C
{
    mangled_assert("collecttable");
    todo("implement");
    _sub_1000509C(L);
}

_extern void _sub_10004FA1(lua_State *, stringtable *);
_static void checktab(lua_State *L, stringtable *tb) // 0x10004FA1
{
    mangled_assert("checktab");
    todo("implement");
    _sub_10004FA1(L, tb);
}

_extern void _sub_10005032(lua_State *, __int32);
_static void collectstrings(lua_State *L, __int32 all) // 0x10005032
{
    mangled_assert("collectstrings");
    todo("implement");
    _sub_10005032(L, all);
}

_extern void _sub_100050CB(lua_State *, __int32);
_static void collectudata(lua_State *L, __int32 all) // 0x100050CB
{
    mangled_assert("collectudata");
    todo("implement");
    _sub_100050CB(L, all);
}

_extern void _sub_10004F72(lua_State *);
_static void checkMbuffer(lua_State *L) // 0x10004F72
{
    mangled_assert("checkMbuffer");
    todo("implement");
    _sub_10004F72(L);
}

_extern void _sub_10004EAB(lua_State *, lua_TObject const *);
_static void callgcTM(lua_State *L, lua_TObject const *o) // 0x10004EAB
{
    mangled_assert("callgcTM");
    todo("implement");
    _sub_10004EAB(L, o);
}

_extern void _sub_10004F10(lua_State *);
_static void callgcTMudata(lua_State *L) // 0x10004F10
{
    mangled_assert("callgcTMudata");
    todo("implement");
    _sub_10004F10(L);
}

_extern void _sub_10005387(lua_State *);
_static void luaC_collectgarbage(lua_State *L) // 0x10005387
{
    mangled_assert("luaC_collectgarbage");
    todo("implement");
    _sub_10005387(L);
}
#endif

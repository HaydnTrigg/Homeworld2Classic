#if 0
/* ---------- headers */

#include "decomp.h"
#include <string.h>
#include <stdio.h>
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
#include <lua\lmem.h>
#include <swprintf.inl>
#include <lua.h>
#include <stddef.h>
#include <lua\ltm.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned long Instruction;
typedef __int32 (*lua_CFunction)(lua_State *);
typedef lua_TObject *StkId;
typedef double Number;
typedef void (*lua_Hook)(lua_State *, lua_Debug *);
typedef unsigned long lint32;
typedef lua_TObject TObject;

/* ---------- prototypes */

extern __int32 luaT_validevent(__int32 t, __int32 e);
extern void luaT_init(lua_State *L);
extern __int32 lua_newtag(lua_State *L);
extern void luaT_realtag(lua_State *L, __int32 tag);
extern __int32 lua_copytagmethods(lua_State *L, __int32 tagto, __int32 tagfrom);
extern __int32 luaT_tag(lua_TObject const *o);
extern void lua_gettagmethod(lua_State *L, __int32 t, char const *event);
extern void lua_settagmethod(lua_State *L, __int32 t, char const *event);

_static __int32 findevent(char const *name);
_static __int32 luaI_checkevent(lua_State *L, char const *name, __int32 t);
_static void init_entry(lua_State *L, __int32 tag);
_static void checktag(lua_State *L, __int32 tag);

/* ---------- globals */

extern char const *const luaT_eventname[0]; // 0x10010B80

/* ---------- private variables */

_static
{
    extern char const luaT_validevents[6][15]; // 0x10010BD0
}

/* ---------- public code */

_extern __int32 _sub_1000B47F(__int32, __int32);
__int32 luaT_validevent(__int32 t, __int32 e) // 0x1000B47F
{
    mangled_assert("_luaT_validevent@8");
    todo("implement");
    __int32 __result = _sub_1000B47F(t, e);
    return __result;
}

_extern void _sub_1000B3F9(lua_State *);
void luaT_init(lua_State *L) // 0x1000B3F9
{
    mangled_assert("_luaT_init@4");
    todo("implement");
    _sub_1000B3F9(L);
}

_extern __int32 _sub_1000B55B(lua_State *);
__int32 lua_newtag(lua_State *L) // 0x1000B55B
{
    mangled_assert("_lua_newtag@4");
    todo("implement");
    __int32 __result = _sub_1000B55B(L);
    return __result;
}

_extern void _sub_1000B43C(lua_State *, __int32);
void luaT_realtag(lua_State *L, __int32 tag) // 0x1000B43C
{
    mangled_assert("_luaT_realtag@8");
    todo("implement");
    _sub_1000B43C(L, tag);
}

_extern __int32 _sub_1000B49F(lua_State *, __int32, __int32);
__int32 lua_copytagmethods(lua_State *L, __int32 tagto, __int32 tagfrom) // 0x1000B49F
{
    mangled_assert("_lua_copytagmethods@12");
    todo("implement");
    __int32 __result = _sub_1000B49F(L, tagto, tagfrom);
    return __result;
}

_extern __int32 _sub_1000B460(lua_TObject const *);
__int32 luaT_tag(lua_TObject const *o) // 0x1000B460
{
    mangled_assert("_luaT_tag@4");
    todo("implement");
    __int32 __result = _sub_1000B460(o);
    return __result;
}

_extern void _sub_1000B4F5(lua_State *, __int32, char const *);
void lua_gettagmethod(lua_State *L, __int32 t, char const *event) // 0x1000B4F5
{
    mangled_assert("_lua_gettagmethod@12");
    todo("implement");
    _sub_1000B4F5(L, t, event);
}

_extern void _sub_1000B594(lua_State *, __int32, char const *);
void lua_settagmethod(lua_State *L, __int32 t, char const *event) // 0x1000B594
{
    mangled_assert("_lua_settagmethod@12");
    todo("implement");
    _sub_1000B594(L, t, event);
}

/* ---------- private code */

_extern __int32 _sub_1000B312(char const *);
_static __int32 findevent(char const *name) // 0x1000B312
{
    mangled_assert("findevent");
    todo("implement");
    __int32 __result = _sub_1000B312(name);
    return __result;
}

_extern __int32 _sub_1000B376(lua_State *, char const *, __int32);
_static __int32 luaI_checkevent(lua_State *L, char const *name, __int32 t) // 0x1000B376
{
    mangled_assert("luaI_checkevent");
    todo("implement");
    __int32 __result = _sub_1000B376(L, name, t);
    return __result;
}

_extern void _sub_1000B34B(lua_State *, __int32);
_static void init_entry(lua_State *L, __int32 tag) // 0x1000B34B
{
    mangled_assert("init_entry");
    todo("implement");
    _sub_1000B34B(L, tag);
}

_extern void _sub_1000B2EF(lua_State *, __int32);
_static void checktag(lua_State *L, __int32 tag) // 0x1000B2EF
{
    mangled_assert("checktag");
    todo("implement");
    _sub_1000B2EF(L, tag);
}
#endif

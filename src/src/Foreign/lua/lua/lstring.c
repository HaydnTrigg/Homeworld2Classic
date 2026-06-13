#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua.h>
#include <lua\lobject.h>
#include <stddef.h>
#include <string.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lstring.h>
#include <lua\lmem.h>
#include <lua\llimits.h>
#include <limits.h>

/* ---------- constants */

/* ---------- definitions */

union L_UTString
{
    TString ts; // 0x0
    L_Umaxalign dummy; // 0x0
};
static_assert(sizeof(L_UTString) == 24, "Invalid L_UTString size");

/* ---------- prototypes */

extern void luaS_init(lua_State *L);
extern void luaS_freeall(lua_State *L);
extern void luaS_resize(lua_State *L, stringtable *tb, __int32 newsize);
extern TString *luaS_newlstr(lua_State *L, char const *str, unsigned __int32 l);
extern TString *luaS_newudata(lua_State *L, unsigned __int32 s, void *udata);
extern TString *luaS_createudata(lua_State *L, void *udata, __int32 tag);
extern TString *luaS_new(lua_State *L, char const *str);
extern TString *luaS_newfixed(lua_State *L, char const *str);

_static unsigned long hash_s(char const *s, unsigned __int32 l);
_static void newentry(lua_State *L, stringtable *tb, TString *ts, __int32 h);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_10009923(lua_State *);
void luaS_init(lua_State *L) // 0x10009923
{
    mangled_assert("_luaS_init@4");
    todo("implement");
    _sub_10009923(L);
}

_extern void _sub_100098F8(lua_State *);
void luaS_freeall(lua_State *L) // 0x100098F8
{
    mangled_assert("_luaS_freeall@4");
    todo("implement");
    _sub_100098F8(L);
}

_extern void _sub_10009AB4(lua_State *, stringtable *, __int32);
void luaS_resize(lua_State *L, stringtable *tb, __int32 newsize) // 0x10009AB4
{
    mangled_assert("_luaS_resize@12");
    todo("implement");
    _sub_10009AB4(L, tb, newsize);
}

_extern TString *_sub_1000999A(lua_State *, char const *, unsigned __int32);
TString *luaS_newlstr(lua_State *L, char const *str, unsigned __int32 l) // 0x1000999A
{
    mangled_assert("_luaS_newlstr@12");
    todo("implement");
    TString * __result = _sub_1000999A(L, str, l);
    return __result;
}

_extern TString *_sub_10009A59(lua_State *, unsigned __int32, void *);
TString *luaS_newudata(lua_State *L, unsigned __int32 s, void *udata) // 0x10009A59
{
    mangled_assert("_luaS_newudata@12");
    todo("implement");
    TString * __result = _sub_10009A59(L, s, udata);
    return __result;
}

_extern TString *_sub_100098AE(lua_State *, void *, __int32);
TString *luaS_createudata(lua_State *L, void *udata, __int32 tag) // 0x100098AE
{
    mangled_assert("_luaS_createudata@12");
    todo("implement");
    TString * __result = _sub_100098AE(L, udata, tag);
    return __result;
}

_extern TString *_sub_10009962(lua_State *, char const *);
TString *luaS_new(lua_State *L, char const *str) // 0x10009962
{
    mangled_assert("_luaS_new@8");
    todo("implement");
    TString * __result = _sub_10009962(L, str);
    return __result;
}

_extern TString *_sub_1000997D(lua_State *, char const *);
TString *luaS_newfixed(lua_State *L, char const *str) // 0x1000997D
{
    mangled_assert("_luaS_newfixed@8");
    todo("implement");
    TString * __result = _sub_1000997D(L, str);
    return __result;
}

/* ---------- private code */

_extern unsigned long _sub_10009870(char const *, unsigned __int32);
_static unsigned long hash_s(char const *s, unsigned __int32 l) // 0x10009870
{
    mangled_assert("hash_s");
    todo("implement");
    unsigned long __result = _sub_10009870(s, l);
    return __result;
}

_extern void _sub_10009B72(lua_State *, stringtable *, TString *, __int32);
_static void newentry(lua_State *L, stringtable *tb, TString *ts, __int32 h) // 0x10009B72
{
    mangled_assert("newentry");
    todo("implement");
    _sub_10009B72(L, tb, ts, h);
}
#endif

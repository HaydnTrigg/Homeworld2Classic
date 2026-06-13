#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua.h>
#include <stddef.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lstring.h>
#include <lua\lmem.h>
#include <lua\llimits.h>
#include <limits.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua\lobject.h>
#include <lua\ltable.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern Node *luaH_mainposition(Hash const *t, lua_TObject const *key);
extern lua_TObject const *luaH_getnum(Hash const *t, double key);
extern lua_TObject const *luaH_getstr(Hash const *t, TString *key);
extern lua_TObject const *luaH_get(lua_State *L, Hash const *t, lua_TObject const *key);
extern Node *luaH_next(lua_State *L, Hash const *t, lua_TObject const *key);
extern void luaH_remove(Hash *t, lua_TObject *key);
extern Hash *luaH_new(lua_State *L, __int32 size);
extern void luaH_free(lua_State *L, Hash *t);
extern lua_TObject *luaH_set(lua_State *L, Hash *t, lua_TObject const *key);
extern lua_TObject *luaH_setint(lua_State *L, Hash *t, __int32 key);
extern void luaH_setstrnum(lua_State *L, Hash *t, TString *key, double val);
extern lua_TObject const *luaH_getglobal(lua_State *L, char const *name);

_static lua_TObject const *luaH_getany(lua_State *L, Hash const *t, lua_TObject const *key);
_static void setnodevector(lua_State *L, Hash *t, unsigned long size);
_static __int32 numuse(Hash const *t);
_static void rehash(lua_State *L, Hash *t);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern Node *_sub_1000AEF6(Hash const *, lua_TObject const *);
Node *luaH_mainposition(Hash const *t, lua_TObject const *key) // 0x1000AEF6
{
    mangled_assert("_luaH_mainposition@8");
    todo("implement");
    Node * __result = _sub_1000AEF6(t, key);
    return __result;
}

_extern lua_TObject const *_sub_1000AE86(Hash const *, double);
lua_TObject const *luaH_getnum(Hash const *t, double key) // 0x1000AE86
{
    mangled_assert("_luaH_getnum@12");
    todo("implement");
    lua_TObject const * __result = _sub_1000AE86(t, key);
    return __result;
}

_extern lua_TObject const *_sub_1000AEC5(Hash const *, TString *);
lua_TObject const *luaH_getstr(Hash const *t, TString *key) // 0x1000AEC5
{
    mangled_assert("_luaH_getstr@8");
    todo("implement");
    lua_TObject const * __result = _sub_1000AEC5(t, key);
    return __result;
}

_extern lua_TObject const *_sub_1000ADE1(lua_State *, Hash const *, lua_TObject const *);
lua_TObject const *luaH_get(lua_State *L, Hash const *t, lua_TObject const *key) // 0x1000ADE1
{
    mangled_assert("_luaH_get@12");
    todo("implement");
    lua_TObject const * __result = _sub_1000ADE1(L, t, key);
    return __result;
}

_extern Node *_sub_1000AF80(lua_State *, Hash const *, lua_TObject const *);
Node *luaH_next(lua_State *L, Hash const *t, lua_TObject const *key) // 0x1000AF80
{
    mangled_assert("_luaH_next@12");
    todo("implement");
    Node * __result = _sub_1000AF80(L, t, key);
    return __result;
}

_extern void _sub_1000AFE9(Hash *, lua_TObject *);
void luaH_remove(Hash *t, lua_TObject *key) // 0x1000AFE9
{
    mangled_assert("_luaH_remove@8");
    todo("implement");
    _sub_1000AFE9(t, key);
}

_extern Hash *_sub_1000AF38(lua_State *, __int32);
Hash *luaH_new(lua_State *L, __int32 size) // 0x1000AF38
{
    mangled_assert("_luaH_new@8");
    todo("implement");
    Hash * __result = _sub_1000AF38(L, size);
    return __result;
}

_extern void _sub_1000ADB1(lua_State *, Hash *);
void luaH_free(lua_State *L, Hash *t) // 0x1000ADB1
{
    mangled_assert("_luaH_free@8");
    todo("implement");
    _sub_1000ADB1(L, t);
}

_extern lua_TObject *_sub_1000B07F(lua_State *, Hash *, lua_TObject const *);
lua_TObject *luaH_set(lua_State *L, Hash *t, lua_TObject const *key) // 0x1000B07F
{
    mangled_assert("_luaH_set@12");
    todo("implement");
    lua_TObject * __result = _sub_1000B07F(L, t, key);
    return __result;
}

_extern lua_TObject *_sub_1000B134(lua_State *, Hash *, __int32);
lua_TObject *luaH_setint(lua_State *L, Hash *t, __int32 key) // 0x1000B134
{
    mangled_assert("_luaH_setint@12");
    todo("implement");
    lua_TObject * __result = _sub_1000B134(L, t, key);
    return __result;
}

_extern void _sub_1000B162(lua_State *, Hash *, TString *, double);
void luaH_setstrnum(lua_State *L, Hash *t, TString *key, double val) // 0x1000B162
{
    mangled_assert("_luaH_setstrnum@20");
    todo("implement");
    _sub_1000B162(L, t, key, val);
}

_extern lua_TObject const *_sub_1000AE6A(lua_State *, char const *);
lua_TObject const *luaH_getglobal(lua_State *L, char const *name) // 0x1000AE6A
{
    mangled_assert("_luaH_getglobal@8");
    todo("implement");
    lua_TObject const * __result = _sub_1000AE6A(L, name);
    return __result;
}

/* ---------- private code */

_extern lua_TObject const *_sub_1000AE23(lua_State *, Hash const *, lua_TObject const *);
_static lua_TObject const *luaH_getany(lua_State *L, Hash const *t, lua_TObject const *key) // 0x1000AE23
{
    mangled_assert("luaH_getany");
    todo("implement");
    lua_TObject const * __result = _sub_1000AE23(L, t, key);
    return __result;
}

_extern void _sub_1000B275(lua_State *, Hash *, unsigned long);
_static void setnodevector(lua_State *L, Hash *t, unsigned long size) // 0x1000B275
{
    mangled_assert("setnodevector");
    todo("implement");
    _sub_1000B275(L, t, size);
}

_extern __int32 _sub_1000B198(Hash const *);
_static __int32 numuse(Hash const *t) // 0x1000B198
{
    mangled_assert("numuse");
    todo("implement");
    __int32 __result = _sub_1000B198(t);
    return __result;
}

_extern void _sub_1000B1B9(lua_State *, Hash *);
_static void rehash(lua_State *L, Hash *t) // 0x1000B1B9
{
    mangled_assert("rehash");
    todo("implement");
    _sub_1000B1B9(L, t);
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include "src\Src\Foreign\ToLua\src\tolua.h"
#include <memory\memorylib.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <swprintf.inl>
#include <concurrencysal.h>
#include <vadefs.h>
#include "src\Src\Foreign\ToLua\src\tolua_eh.h"
#include "src\Src\Foreign\ToLua\src\tolua_rg.h"
#include <stdio.h>
#include "src\Src\Foreign\ToLua\src\tolua_tt.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <assert.h>
#include "src\Src\Foreign\ToLua\src\tolua_tm.h"
#include <memory.h>
#include <lua.h>
#include <stddef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern char const *toluaI_tt_getobjtype(lua_State *L, __int32 lo);
extern __int32 toluaI_tt_gettag(lua_State *L, char *type);
extern void toluaI_tt_init(lua_State *L);
extern void toluaI_tt_register(lua_State *L, __int32 tag, char *type);
extern void toluaI_tt_class(lua_State *L, __int32 lo, char *derived, char *base);
extern void toluaI_tt_sethierarchy(lua_State *L, __int32 tag, __int32 btag);
extern char *toluaI_tt_concat(char const *s1, char const *s2);
extern void tolua_usertype(lua_State *L, char *type);
extern __int32 toluaI_tt_isusertype(lua_State *L, __int32 lo);
extern __int32 tolua_istype(lua_State *L, __int32 narg, __int32 tag, __int32 def);
extern __int32 tolua_arrayistype(lua_State *L, __int32 narg, __int32 tag, __int32 dim, __int32 def);
extern __int32 tolua_isnoobj(lua_State *L, __int32 narg);

_static char const *gettype(lua_State *L, __int32 tag);
_static __int32 basetag(lua_State *L, __int32 hierarchy, __int32 tag);
_static __int32 istype(lua_State *L, __int32 lo, __int32 tag);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

char const *toluaI_tt_getobjtype(lua_State *L, __int32 lo) // 0x6FB971
{
    mangled_assert("_toluaI_tt_getobjtype@8");
    todo("implement");
}

__int32 toluaI_tt_gettag(lua_State *L, char *type) // 0x6FB9AE
{
    mangled_assert("_toluaI_tt_gettag@8");
    todo("implement");
}

void toluaI_tt_init(lua_State *L) // 0x6FB9F8
{
    mangled_assert("_toluaI_tt_init@4");
    todo("implement");
}

void toluaI_tt_register(lua_State *L, __int32 tag, char *type) // 0x6FBB2E
{
    mangled_assert("_toluaI_tt_register@12");
    todo("implement");
}

void toluaI_tt_class(lua_State *L, __int32 lo, char *derived, char *base) // 0x6FB8C9
{
    mangled_assert("_toluaI_tt_class@16");
    todo("implement");
}

void toluaI_tt_sethierarchy(lua_State *L, __int32 tag, __int32 btag) // 0x6FBBAE
{
    mangled_assert("_toluaI_tt_sethierarchy@12");
    todo("implement");
}

char *toluaI_tt_concat(char const *s1, char const *s2) // 0x6FB952
{
    mangled_assert("_toluaI_tt_concat@8");
    todo("implement");
}

void tolua_usertype(lua_State *L, char *type) // 0x6FBD6D
{
    mangled_assert("_tolua_usertype@8");
    todo("implement");
}

__int32 toluaI_tt_isusertype(lua_State *L, __int32 lo) // 0x6FBAA2
{
    mangled_assert("_toluaI_tt_isusertype@8");
    todo("implement");
}

__int32 tolua_istype(lua_State *L, __int32 narg, __int32 tag, __int32 def) // 0x6FBD12
{
    mangled_assert("_tolua_istype@16");
    todo("implement");
}

__int32 tolua_arrayistype(lua_State *L, __int32 narg, __int32 tag, __int32 dim, __int32 def) // 0x6FBC04
{
    mangled_assert("_tolua_arrayistype@20");
    todo("implement");
}

__int32 tolua_isnoobj(lua_State *L, __int32 narg) // 0x6FBCC4
{
    mangled_assert("_tolua_isnoobj@8");
    todo("implement");
}

/* ---------- private code */

_static char const *gettype(lua_State *L, __int32 tag) // 0x6FB736
{
    mangled_assert("gettype");
    todo("implement");
}

_static __int32 basetag(lua_State *L, __int32 hierarchy, __int32 tag) // 0x6FB6E6
{
    mangled_assert("basetag");
    todo("implement");
}

_static __int32 istype(lua_State *L, __int32 lo, __int32 tag) // 0x6FB78B
{
    mangled_assert("istype");
    todo("implement");
}
#endif

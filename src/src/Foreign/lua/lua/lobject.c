#if 0
/* ---------- headers */

#include "decomp.h"
#include <string.h>
#include <Mem\LuaCType.h>
#include <assist\asciictype.h>
#include <lua\lmem.h>
#include <lua\llimits.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <vadefs.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua\lobject.h>
#include <lua.h>
#include <stddef.h>
#include <swprintf.inl>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned long luaO_power2(unsigned long n);
extern __int32 luaO_equalObj(lua_TObject const *t1, lua_TObject const *t2);
extern char *luaO_openspace(lua_State *L, unsigned __int32 n);
extern __int32 luaO_str2d(char const *s, double *result);
extern void luaO_verror(lua_State *L, char const *fmt, ...);
extern void luaO_chunkid(char *out, char const *source, __int32 bufflen);

/* ---------- globals */

extern lua_TObject luaO_nilobject; // 0x100105D0
extern char const *const luaO_typenames[0]; // 0x100105E0

/* ---------- private variables */

/* ---------- public code */

_extern unsigned long _sub_10007DCB(unsigned long);
unsigned long luaO_power2(unsigned long n) // 0x10007DCB
{
    mangled_assert("_luaO_power2@4");
    todo("implement");
    unsigned long __result = _sub_10007DCB(n);
    return __result;
}

_extern __int32 _sub_10007D4B(lua_TObject const *, lua_TObject const *);
__int32 luaO_equalObj(lua_TObject const *t1, lua_TObject const *t2) // 0x10007D4B
{
    mangled_assert("_luaO_equalObj@8");
    todo("implement");
    __int32 __result = _sub_10007D4B(t1, t2);
    return __result;
}

_extern char *_sub_10007D9C(lua_State *, unsigned __int32);
char *luaO_openspace(lua_State *L, unsigned __int32 n) // 0x10007D9C
{
    mangled_assert("_luaO_openspace@8");
    todo("implement");
    char * __result = _sub_10007D9C(L, n);
    return __result;
}

_extern __int32 _sub_10007DDF(char const *, double *);
__int32 luaO_str2d(char const *s, double *result) // 0x10007DDF
{
    mangled_assert("_luaO_str2d@8");
    todo("implement");
    __int32 __result = _sub_10007DDF(s, result);
    return __result;
}

_extern void _sub_10007E36(lua_State *, char const *, ...);
void luaO_verror(lua_State *L, char const *fmt, ...) // 0x10007E36
{
    mangled_assert("_luaO_verror");
    todo("implement");
    _sub_10007E36(L, fmt, buff);
}

_extern void _sub_10007C8A(char *, char const *, __int32);
void luaO_chunkid(char *out, char const *source, __int32 bufflen) // 0x10007C8A
{
    mangled_assert("_luaO_chunkid@12");
    todo("implement");
    _sub_10007C8A(out, source, bufflen);
}

/* ---------- private code */
#endif

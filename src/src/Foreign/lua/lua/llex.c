#if 0
/* ---------- headers */

#include "decomp.h"
#include <string.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\llex.h>
#include <lua\lobject.h>
#include <lua\lzio.h>
#include <lua\llimits.h>
#include <limits.h>
#include <lua\lmem.h>
#include <swprintf.inl>
#include <lua.h>
#include <stddef.h>
#include <lua\lparser.h>
#include <Mem\LuaCType.h>
#include <assist\asciictype.h>
#include <lua\lstring.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua\ltable.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void luaX_init(lua_State *L);
extern void luaX_checklimit(LexState *ls, __int32 val, __int32 limit, char const *msg);
extern void luaX_syntaxerror(LexState *ls, char const *s, char const *token);
extern void luaX_error(LexState *ls, char const *s, __int32 token);
extern void luaX_token2str(__int32 token, char *s);
extern void luaX_setinput(lua_State *L, LexState *LS, zio *z, TString *source);
extern __int32 luaX_lex(LexState *LS, SemInfo *seminfo);

_static void luaX_invalidchar(LexState *ls, __int32 c);
_static void inclinenumber(LexState *LS);
_static char const *readname(LexState *LS);
_static void read_number(LexState *LS, __int32 comma, SemInfo *seminfo);
_static void read_long_string(LexState *LS, SemInfo *seminfo);
_static void read_string(LexState *LS, __int32 del, SemInfo *seminfo);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *const token2string[28]; // 0x10010180
}

/* ---------- public code */

_extern void _sub_100066C1(lua_State *);
void luaX_init(lua_State *L) // 0x100066C1
{
    mangled_assert("_luaX_init@4");
    todo("implement");
    _sub_100066C1(L);
}

_extern void _sub_1000664F(LexState *, __int32, __int32, char const *);
void luaX_checklimit(LexState *ls, __int32 val, __int32 limit, char const *msg) // 0x1000664F
{
    mangled_assert("_luaX_checklimit@16");
    todo("implement");
    _sub_1000664F(ls, val, limit, msg);
}

_extern void _sub_10006C67(LexState *, char const *, char const *);
void luaX_syntaxerror(LexState *ls, char const *s, char const *token) // 0x10006C67
{
    mangled_assert("_luaX_syntaxerror@12");
    todo("implement");
    _sub_10006C67(ls, s, token);
}

_extern void _sub_10006687(LexState *, char const *, __int32);
void luaX_error(LexState *ls, char const *s, __int32 token) // 0x10006687
{
    mangled_assert("_luaX_error@12");
    todo("implement");
    _sub_10006687(ls, s, token);
}

_extern void _sub_10006CA5(__int32, char *);
void luaX_token2str(__int32 token, char *s) // 0x10006CA5
{
    mangled_assert("_luaX_token2str@8");
    todo("implement");
    _sub_10006CA5(token, s);
}

_extern void _sub_10006BD9(lua_State *, LexState *, zio *, TString *);
void luaX_setinput(lua_State *L, LexState *LS, zio *z, TString *source) // 0x10006BD9
{
    mangled_assert("_luaX_setinput@16");
    todo("implement");
    _sub_10006BD9(L, LS, z, source);
}

_extern __int32 _sub_10006718(LexState *, SemInfo *);
__int32 luaX_lex(LexState *LS, SemInfo *seminfo) // 0x10006718
{
    mangled_assert("_luaX_lex@8");
    todo("implement");
    __int32 __result = _sub_10006718(LS, seminfo);
    return __result;
}

/* ---------- private code */

_extern void _sub_100066E9(LexState *, __int32);
_static void luaX_invalidchar(LexState *ls, __int32 c) // 0x100066E9
{
    mangled_assert("luaX_invalidchar");
    todo("implement");
    _sub_100066E9(ls, c);
}

_extern void _sub_10006608(LexState *);
_static void inclinenumber(LexState *LS) // 0x10006608
{
    mangled_assert("inclinenumber");
    todo("implement");
    _sub_10006608(LS);
}

_extern char const *_sub_10007388(LexState *);
_static char const *readname(LexState *LS) // 0x10007388
{
    mangled_assert("readname");
    todo("implement");
    char const * __result = _sub_10007388(LS);
    return __result;
}

_extern void _sub_10006EA5(LexState *, __int32, SemInfo *);
_static void read_number(LexState *LS, __int32 comma, SemInfo *seminfo) // 0x10006EA5
{
    mangled_assert("read_number");
    todo("implement");
    _sub_10006EA5(LS, comma, seminfo);
}

_extern void _sub_10006CD2(LexState *, SemInfo *);
_static void read_long_string(LexState *LS, SemInfo *seminfo) // 0x10006CD2
{
    mangled_assert("read_long_string");
    todo("implement");
    _sub_10006CD2(LS, seminfo);
}

_extern void _sub_100070E8(LexState *, __int32, SemInfo *);
_static void read_string(LexState *LS, __int32 del, SemInfo *seminfo) // 0x100070E8
{
    mangled_assert("read_string");
    todo("implement");
    _sub_100070E8(LS, del, seminfo);
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <ctype.h>
#include <stddef.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <stdlib.h>
#include <vadefs.h>
#include <lualib.h>
#include <limits.h>
#include <string.h>
#include <lauxlib.h>
#include <Mem\LuaCType.h>
#include <assist\asciictype.h>
#include <swprintf.inl>
#include <lua.h>
#include <stdio.h>

/* ---------- constants */

/* ---------- definitions */

struct Capture
{
    char const *src_end; // 0x0
    __int32 level; // 0x4
    <unnamed-tag> capture[32]; // 0x8
};
static_assert(sizeof(Capture) == 264, "Invalid Capture size");

struct <unnamed-tag>
{
    char const *init; // 0x0
    long len; // 0x4
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

/* ---------- prototypes */

extern char const *luaI_classend(lua_State *L, char const *p);
extern __int32 luaI_singlematch(__int32 c, char const *p, char const *ep);
extern void lua_strlibopen(lua_State *L);

_static __int32 str_len(lua_State *L);
_static long posrelat(long pos, unsigned __int32 len);
_static __int32 str_sub(lua_State *L);
_static __int32 str_lower(lua_State *L);
_static __int32 str_upper(lua_State *L);
_static __int32 str_rep(lua_State *L);
_static __int32 str_byte(lua_State *L);
_static __int32 str_char(lua_State *L);
_static __int32 check_capture(lua_State *L, __int32 l, Capture *cap);
_static __int32 capture_to_close(lua_State *L, Capture *cap);
_static __int32 match_class(__int32 c, __int32 cl);
_static __int32 matchbracketclass(__int32 c, char const *p, char const *endclass);
_static char const *matchbalance(lua_State *L, char const *s, char const *p, Capture *cap);
_static char const *max_expand(lua_State *L, char const *s, char const *p, char const *ep, Capture *cap);
_static char const *min_expand(lua_State *L, char const *s, char const *p, char const *ep, Capture *cap);
_static char const *start_capture(lua_State *L, char const *s, char const *p, Capture *cap);
_static char const *end_capture(lua_State *L, char const *s, char const *p, Capture *cap);
_static char const *match_capture(lua_State *L, char const *s, __int32 level, Capture *cap);
_static char const *match(lua_State *L, char const *s, char const *p, Capture *cap);
_static char const *lmemfind(char const *s1, unsigned __int32 l1, char const *s2, unsigned __int32 l2);
_static __int32 push_captures(lua_State *L, Capture *cap);
_static __int32 str_find(lua_State *L);
_static void add_s(lua_State *L, luaL_Buffer *b, Capture *cap);
_static __int32 str_gsub(lua_State *L);
_static void luaI_addquoted(lua_State *L, luaL_Buffer *b, __int32 arg);
_static __int32 str_format(lua_State *L);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern luaL_reg const strlib[11]; // 0x10010910
}

/* ---------- public code */

_extern char const *_sub_1000A739(lua_State *, char const *);
char const *luaI_classend(lua_State *L, char const *p) // 0x1000A739
{
    mangled_assert("_luaI_classend@8");
    todo("implement");
    char const * __result = _sub_1000A739(L, p);
    return __result;
}

_extern __int32 _sub_1000A797(__int32, char const *, char const *);
__int32 luaI_singlematch(__int32 c, char const *p, char const *ep) // 0x1000A797
{
    mangled_assert("_luaI_singlematch@12");
    todo("implement");
    __int32 __result = _sub_1000A797(c, p, ep);
    return __result;
}

_extern void _sub_1000A7E0(lua_State *);
void lua_strlibopen(lua_State *L) // 0x1000A7E0
{
    mangled_assert("_lua_strlibopen@4");
    todo("implement");
    _sub_1000A7E0(L);
}

/* ---------- private code */

_extern __int32 _sub_1000A128(lua_State *);
_static __int32 str_len(lua_State *L) // 0x1000A128
{
    mangled_assert("str_len");
    todo("implement");
    __int32 __result = _sub_1000A128(L);
    return __result;
}

_extern long _sub_1000ACFB(long, unsigned __int32);
_static long posrelat(long pos, unsigned __int32 len) // 0x1000ACFB
{
    mangled_assert("posrelat");
    todo("implement");
    long __result = _sub_1000ACFB(pos, len);
    return __result;
}

_extern __int32 _sub_1000A167(lua_State *);
_static __int32 str_sub(lua_State *L) // 0x1000A167
{
    mangled_assert("str_sub");
    todo("implement");
    __int32 __result = _sub_1000A167(L);
    return __result;
}

_extern __int32 _sub_1000A20E(lua_State *);
_static __int32 str_lower(lua_State *L) // 0x1000A20E
{
    mangled_assert("str_lower");
    todo("implement");
    __int32 __result = _sub_1000A20E(L);
    return __result;
}

_extern __int32 _sub_1000A294(lua_State *);
_static __int32 str_upper(lua_State *L) // 0x1000A294
{
    mangled_assert("str_upper");
    todo("implement");
    __int32 __result = _sub_1000A294(L);
    return __result;
}

_extern __int32 _sub_1000A31A(lua_State *);
_static __int32 str_rep(lua_State *L) // 0x1000A31A
{
    mangled_assert("str_rep");
    todo("implement");
    __int32 __result = _sub_1000A31A(L);
    return __result;
}

_extern __int32 _sub_1000A382(lua_State *);
_static __int32 str_byte(lua_State *L) // 0x1000A382
{
    mangled_assert("str_byte");
    todo("implement");
    __int32 __result = _sub_1000A382(L);
    return __result;
}

_extern __int32 _sub_1000A403(lua_State *);
_static __int32 str_char(lua_State *L) // 0x1000A403
{
    mangled_assert("str_char");
    todo("implement");
    __int32 __result = _sub_1000A403(L);
    return __result;
}

_extern __int32 _sub_1000A5A7(lua_State *, __int32, Capture *);
_static __int32 check_capture(lua_State *L, __int32 l, Capture *cap) // 0x1000A5A7
{
    mangled_assert("check_capture");
    todo("implement");
    __int32 __result = _sub_1000A5A7(L, l, cap);
    return __result;
}

_extern __int32 _sub_1000A579(lua_State *, Capture *);
_static __int32 capture_to_close(lua_State *L, Capture *cap) // 0x1000A579
{
    mangled_assert("capture_to_close");
    todo("implement");
    __int32 __result = _sub_1000A579(L, cap);
    return __result;
}

_extern __int32 _sub_1000A9F8(__int32, __int32);
_static __int32 match_class(__int32 c, __int32 cl) // 0x1000A9F8
{
    mangled_assert("match_class");
    todo("implement");
    __int32 __result = _sub_1000A9F8(c, cl);
    return __result;
}

_extern __int32 _sub_1000ABD9(__int32, char const *, char const *);
_static __int32 matchbracketclass(__int32 c, char const *p, char const *endclass) // 0x1000ABD9
{
    mangled_assert("matchbracketclass");
    todo("implement");
    __int32 __result = _sub_1000ABD9(c, p, endclass);
    return __result;
}

_extern char const *_sub_1000AB78(lua_State *, char const *, char const *, Capture *);
_static char const *matchbalance(lua_State *L, char const *s, char const *p, Capture *cap) // 0x1000AB78
{
    mangled_assert("matchbalance");
    todo("implement");
    char const * __result = _sub_1000AB78(L, s, p, cap);
    return __result;
}

_extern char const *_sub_1000AC56(lua_State *, char const *, char const *, char const *, Capture *);
_static char const *max_expand(lua_State *L, char const *s, char const *p, char const *ep, Capture *cap) // 0x1000AC56
{
    mangled_assert("max_expand");
    todo("implement");
    char const * __result = _sub_1000AC56(L, s, p, ep, cap);
    return __result;
}

_extern char const *_sub_1000ACB4(lua_State *, char const *, char const *, char const *, Capture *);
_static char const *min_expand(lua_State *L, char const *s, char const *p, char const *ep, Capture *cap) // 0x1000ACB4
{
    mangled_assert("min_expand");
    todo("implement");
    char const * __result = _sub_1000ACB4(L, s, p, ep, cap);
    return __result;
}

_extern char const *_sub_1000AD66(lua_State *, char const *, char const *, Capture *);
_static char const *start_capture(lua_State *L, char const *s, char const *p, Capture *cap) // 0x1000AD66
{
    mangled_assert("start_capture");
    todo("implement");
    char const * __result = _sub_1000AD66(L, s, p, cap);
    return __result;
}

_extern char const *_sub_1000A5D5(lua_State *, char const *, char const *, Capture *);
_static char const *end_capture(lua_State *L, char const *s, char const *p, Capture *cap) // 0x1000A5D5
{
    mangled_assert("end_capture");
    todo("implement");
    char const * __result = _sub_1000A5D5(L, s, p, cap);
    return __result;
}

_extern char const *_sub_1000A9B4(lua_State *, char const *, __int32, Capture *);
_static char const *match_capture(lua_State *L, char const *s, __int32 level, Capture *cap) // 0x1000A9B4
{
    mangled_assert("match_capture");
    todo("implement");
    char const * __result = _sub_1000A9B4(L, s, level, cap);
    return __result;
}

_extern char const *_sub_1000A7F3(lua_State *, char const *, char const *, Capture *);
_static char const *match(lua_State *L, char const *s, char const *p, Capture *cap) // 0x1000A7F3
{
    mangled_assert("match");
    todo("implement");
    char const * __result = _sub_1000A7F3(L, s, p, cap);
    return __result;
}

_extern char const *_sub_1000A62E(char const *, unsigned __int32, char const *, unsigned __int32);
_static char const *lmemfind(char const *s1, unsigned __int32 l1, char const *s2, unsigned __int32 l2) // 0x1000A62E
{
    mangled_assert("lmemfind");
    todo("implement");
    char const * __result = _sub_1000A62E(s1, l1, s2, l2);
    return __result;
}

_extern __int32 _sub_1000AD0E(lua_State *, Capture *);
_static __int32 push_captures(lua_State *L, Capture *cap) // 0x1000AD0E
{
    mangled_assert("push_captures");
    todo("implement");
    __int32 __result = _sub_1000AD0E(L, cap);
    return __result;
}

_extern __int32 _sub_10009BB0(lua_State *);
_static __int32 str_find(lua_State *L) // 0x10009BB0
{
    mangled_assert("str_find");
    todo("implement");
    __int32 __result = _sub_10009BB0(L);
    return __result;
}

_extern void _sub_1000A49A(lua_State *, luaL_Buffer *, Capture *);
_static void add_s(lua_State *L, luaL_Buffer *b, Capture *cap) // 0x1000A49A
{
    mangled_assert("add_s");
    todo("implement");
    _sub_1000A49A(L, b, cap);
}

_extern __int32 _sub_10009D4F(lua_State *);
_static __int32 str_gsub(lua_State *L) // 0x10009D4F
{
    mangled_assert("str_gsub");
    todo("implement");
    __int32 __result = _sub_10009D4F(L);
    return __result;
}

_extern void _sub_1000A699(lua_State *, luaL_Buffer *, __int32);
_static void luaI_addquoted(lua_State *L, luaL_Buffer *b, __int32 arg) // 0x1000A699
{
    mangled_assert("luaI_addquoted");
    todo("implement");
    _sub_1000A699(L, b, arg);
}

_extern __int32 _sub_10009EEA(lua_State *);
_static __int32 str_format(lua_State *L) // 0x10009EEA
{
    mangled_assert("str_format");
    todo("implement");
    __int32 __result = _sub_10009EEA(L);
    return __result;
}
#endif

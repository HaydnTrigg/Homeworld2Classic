#if 0
/* ---------- headers */

#include "decomp.h"
#include <string.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <lua\lfunc.h>
#include <vadefs.h>
#include <lua\lcode.h>
#include <lua\llex.h>
#include <lua\lobject.h>
#include <lua\lzio.h>
#include <lua\llimits.h>
#include <limits.h>
#include <lua\lopcodes.h>
#include <lua\lstring.h>
#include <lua\lmem.h>
#include <swprintf.inl>
#include <lua.h>
#include <stddef.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua\lparser.h>

/* ---------- constants */

/* ---------- definitions */

struct Constdesc
{
    __int32 n; // 0x0
    __int32 k; // 0x4
};
static_assert(sizeof(Constdesc) == 8, "Invalid Constdesc size");

struct Breaklabel
{
    Breaklabel *previous; // 0x0
    __int32 breaklist; // 0x4
    __int32 stacklevel; // 0x8
};
static_assert(sizeof(Breaklabel) == 12, "Invalid Breaklabel size");

struct <unnamed-tag>
{
    char left; // 0x0
    char right; // 0x1
};
static_assert(sizeof(<unnamed-tag>) == 2, "Invalid <unnamed-tag> size");

/* ---------- prototypes */

extern Proto *luaY_parser(lua_State *L, zio *z);

_static void next(LexState *ls);
_static void lookahead(LexState *ls);
_static void error_expected(LexState *ls, __int32 token);
_static void check(LexState *ls, __int32 c);
_static void check_condition(LexState *ls, __int32 c, char const *msg);
_static __int32 optional(LexState *ls, __int32 c);
_static void check_match(LexState *ls, __int32 what, __int32 who, __int32 where);
_static __int32 string_constant(FuncState *fs, TString *s);
_static void code_string(LexState *ls, TString *s);
_static TString *str_checkname(LexState *ls);
_static __int32 checkname(LexState *ls);
_static __int32 luaI_registerlocalvar(LexState *ls, TString *varname);
_static void new_localvar(LexState *ls, TString *name, __int32 n);
_static void adjustlocalvars(LexState *ls, __int32 nvars);
_static void removelocalvars(LexState *ls, __int32 nvars);
_static void new_localvarstr(LexState *ls, char const *name, __int32 n);
_static __int32 search_local(LexState *ls, TString *n, expdesc *var);
_static void singlevar(LexState *ls, TString *n, expdesc *var);
_static __int32 indexupvalue(LexState *ls, expdesc *v);
_static void pushupvalue(LexState *ls, TString *n);
_static void adjust_mult_assign(LexState *ls, __int32 nvars, __int32 nexps);
_static void code_params(LexState *ls, __int32 nparams, __int32 dots);
_static void enterbreak(FuncState *fs, Breaklabel *bl);
_static void leavebreak(FuncState *fs, Breaklabel *bl);
_static void pushclosure(LexState *ls, FuncState *func);
_static void open_func(LexState *ls, FuncState *fs);
_static void close_func(LexState *ls);
_static __int32 explist1(LexState *ls);
_static void funcargs(LexState *ls, __int32 slf);
_static void var_or_func_tail(LexState *ls, expdesc *v);
_static void var_or_func(LexState *ls, expdesc *v);
_static void recfield(LexState *ls);
_static __int32 recfields(LexState *ls);
_static __int32 listfields(LexState *ls);
_static void constructor_part(LexState *ls, Constdesc *cd);
_static void constructor(LexState *ls);
_static void simpleexp(LexState *ls, expdesc *v);
_static void exp1(LexState *ls);
_static UnOpr getunopr(__int32 op);
_static BinOpr getbinopr(__int32 op);
_static BinOpr subexpr(LexState *ls, expdesc *v, __int32 limit);
_static void expr(LexState *ls, expdesc *v);
_static __int32 block_follow(__int32 token);
_static void block(LexState *ls);
_static __int32 assignment(LexState *ls, expdesc *v, __int32 nvars);
_static void cond(LexState *ls, expdesc *v);
_static void whilestat(LexState *ls, __int32 line);
_static void repeatstat(LexState *ls, __int32 line);
_static void forbody(LexState *ls, __int32 nvar, OpCode prepfor, OpCode loopfor);
_static void fornum(LexState *ls, TString *varname);
_static void forlist(LexState *ls, TString *indexname);
_static void forstat(LexState *ls, __int32 line);
_static void test_then_block(LexState *ls, expdesc *v);
_static void ifstat(LexState *ls, __int32 line);
_static void localstat(LexState *ls);
_static __int32 funcname(LexState *ls, expdesc *v);
_static void funcstat(LexState *ls, __int32 line);
_static void namestat(LexState *ls);
_static void retstat(LexState *ls);
_static void breakstat(LexState *ls);
_static __int32 stat(LexState *ls);
_static void parlist(LexState *ls);
_static void body(LexState *ls, __int32 needself, __int32 line);
_static void chunk(LexState *ls);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern <unnamed-tag> const priority[14]; // 0x10010660
}

/* ---------- public code */

_extern Proto *_sub_10008B60(lua_State *, zio *);
Proto *luaY_parser(lua_State *L, zio *z) // 0x10008B60
{
    mangled_assert("_luaY_parser@8");
    todo("implement");
    Proto * __result = _sub_10008B60(L, z);
    return __result;
}

/* ---------- private code */

_extern void _sub_10008CBE(LexState *);
_static void next(LexState *ls) // 0x10008CBE
{
    mangled_assert("next");
    todo("implement");
    _sub_10008CBE(ls);
}

_extern void _sub_10008B07(LexState *);
_static void lookahead(LexState *ls) // 0x10008B07
{
    mangled_assert("lookahead");
    todo("implement");
    _sub_10008B07(ls);
}

_extern void _sub_1000843C(LexState *, __int32);
_static void error_expected(LexState *ls, __int32 token) // 0x1000843C
{
    mangled_assert("error_expected");
    todo("implement");
    _sub_1000843C(ls, token);
}

_extern void _sub_100080C3(LexState *, __int32);
_static void check(LexState *ls, __int32 c) // 0x100080C3
{
    mangled_assert("check");
    todo("implement");
    _sub_100080C3(ls, c);
}

_extern void _sub_100080E2(LexState *, __int32, char const *);
_static void check_condition(LexState *ls, __int32 c, char const *msg) // 0x100080E2
{
    mangled_assert("check_condition");
    todo("implement");
    _sub_100080E2(ls, c, msg);
}

_extern __int32 _sub_10008D4F(LexState *, __int32);
_static __int32 optional(LexState *ls, __int32 c) // 0x10008D4F
{
    mangled_assert("optional");
    todo("implement");
    __int32 __result = _sub_10008D4F(ls, c);
    return __result;
}

_extern void _sub_100080F9(LexState *, __int32, __int32, __int32);
_static void check_match(LexState *ls, __int32 what, __int32 who, __int32 where) // 0x100080F9
{
    mangled_assert("check_match");
    todo("implement");
    _sub_100080F9(ls, what, who, where);
}

_extern __int32 _sub_100093CE(FuncState *, TString *);
_static __int32 string_constant(FuncState *fs, TString *s) // 0x100093CE
{
    mangled_assert("string_constant");
    todo("implement");
    __int32 __result = _sub_100093CE(fs, s);
    return __result;
}

_extern void _sub_100082D3(LexState *, TString *);
_static void code_string(LexState *ls, TString *s) // 0x100082D3
{
    mangled_assert("code_string");
    todo("implement");
    _sub_100082D3(ls, s);
}

_extern TString *_sub_100093A4(LexState *);
_static TString *str_checkname(LexState *ls) // 0x100093A4
{
    mangled_assert("str_checkname");
    todo("implement");
    TString * __result = _sub_100093A4(ls);
    return __result;
}

_extern __int32 _sub_1000816D(LexState *);
_static __int32 checkname(LexState *ls) // 0x1000816D
{
    mangled_assert("checkname");
    todo("implement");
    __int32 __result = _sub_1000816D(ls);
    return __result;
}

_extern __int32 _sub_10008B1D(LexState *, TString *);
_static __int32 luaI_registerlocalvar(LexState *ls, TString *varname) // 0x10008B1D
{
    mangled_assert("luaI_registerlocalvar");
    todo("implement");
    __int32 __result = _sub_10008B1D(ls, varname);
    return __result;
}

_extern void _sub_10008C29(LexState *, TString *, __int32);
_static void new_localvar(LexState *ls, TString *name, __int32 n) // 0x10008C29
{
    mangled_assert("new_localvar");
    todo("implement");
    _sub_10008C29(ls, name, n);
}

_extern void _sub_10007EAF(LexState *, __int32);
_static void adjustlocalvars(LexState *ls, __int32 nvars) // 0x10007EAF
{
    mangled_assert("adjustlocalvars");
    todo("implement");
    _sub_10007EAF(ls, nvars);
}

_extern void _sub_10009027(LexState *, __int32);
_static void removelocalvars(LexState *ls, __int32 nvars) // 0x10009027
{
    mangled_assert("removelocalvars");
    todo("implement");
    _sub_10009027(ls, nvars);
}

_extern void _sub_10008C9E(LexState *, char const *, __int32);
_static void new_localvarstr(LexState *ls, char const *name, __int32 n) // 0x10008C9E
{
    mangled_assert("new_localvarstr");
    todo("implement");
    _sub_10008C9E(ls, name, n);
}

_extern __int32 _sub_1000910F(LexState *, TString *, expdesc *);
_static __int32 search_local(LexState *ls, TString *n, expdesc *var) // 0x1000910F
{
    mangled_assert("search_local");
    todo("implement");
    __int32 __result = _sub_1000910F(ls, n, var);
    return __result;
}

_extern void _sub_10009260(LexState *, TString *, expdesc *);
_static void singlevar(LexState *ls, TString *n, expdesc *var) // 0x10009260
{
    mangled_assert("singlevar");
    todo("implement");
    _sub_10009260(ls, n, var);
}

_extern __int32 _sub_100089A1(LexState *, expdesc *);
_static __int32 indexupvalue(LexState *ls, expdesc *v) // 0x100089A1
{
    mangled_assert("indexupvalue");
    todo("implement");
    __int32 __result = _sub_100089A1(ls, v);
    return __result;
}

_extern void _sub_10008EA7(LexState *, TString *);
_static void pushupvalue(LexState *ls, TString *n) // 0x10008EA7
{
    mangled_assert("pushupvalue");
    todo("implement");
    _sub_10008EA7(ls, n);
}

_extern void _sub_10007E67(LexState *, __int32, __int32);
_static void adjust_mult_assign(LexState *ls, __int32 nvars, __int32 nexps) // 0x10007E67
{
    mangled_assert("adjust_mult_assign");
    todo("implement");
    _sub_10007E67(ls, nvars, nexps);
}

_extern void _sub_10008271(LexState *, __int32, __int32);
_static void code_params(LexState *ls, __int32 nparams, __int32 dots) // 0x10008271
{
    mangled_assert("code_params");
    todo("implement");
    _sub_10008271(ls, nparams, dots);
}

_extern void _sub_1000841E(FuncState *, Breaklabel *);
_static void enterbreak(FuncState *fs, Breaklabel *bl) // 0x1000841E
{
    mangled_assert("enterbreak");
    todo("implement");
    _sub_1000841E(fs, bl);
}

_extern void _sub_10008A12(FuncState *, Breaklabel *);
_static void leavebreak(FuncState *fs, Breaklabel *bl) // 0x10008A12
{
    mangled_assert("leavebreak");
    todo("implement");
    _sub_10008A12(fs, bl);
}

_extern void _sub_10008E16(LexState *, FuncState *);
_static void pushclosure(LexState *ls, FuncState *func) // 0x10008E16
{
    mangled_assert("pushclosure");
    todo("implement");
    _sub_10008E16(ls, func);
}

_extern void _sub_10008CF5(LexState *, FuncState *);
_static void open_func(LexState *ls, FuncState *fs) // 0x10008CF5
{
    mangled_assert("open_func");
    todo("implement");
    _sub_10008CF5(ls, fs);
}

_extern void _sub_100081B0(LexState *);
_static void close_func(LexState *ls) // 0x100081B0
{
    mangled_assert("close_func");
    todo("implement");
    _sub_100081B0(ls);
}

_extern __int32 _sub_1000849A(LexState *);
_static __int32 explist1(LexState *ls) // 0x1000849A
{
    mangled_assert("explist1");
    todo("implement");
    __int32 __result = _sub_1000849A(ls);
    return __result;
}

_extern void _sub_100086DF(LexState *, __int32);
_static void funcargs(LexState *ls, __int32 slf) // 0x100086DF
{
    mangled_assert("funcargs");
    todo("implement");
    _sub_100086DF(ls, slf);
}

_extern void _sub_10009549(LexState *, expdesc *);
_static void var_or_func_tail(LexState *ls, expdesc *v) // 0x10009549
{
    mangled_assert("var_or_func_tail");
    todo("implement");
    _sub_10009549(ls, v);
}

_extern void _sub_100094F8(LexState *, expdesc *);
_static void var_or_func(LexState *ls, expdesc *v) // 0x100094F8
{
    mangled_assert("var_or_func");
    todo("implement");
    _sub_100094F8(ls, v);
}

_extern void _sub_10008F70(LexState *);
_static void recfield(LexState *ls) // 0x10008F70
{
    mangled_assert("recfield");
    todo("implement");
    _sub_10008F70(ls);
}

_extern __int32 _sub_10008FC6(LexState *);
_static __int32 recfields(LexState *ls) // 0x10008FC6
{
    mangled_assert("recfields");
    todo("implement");
    __int32 __result = _sub_10008FC6(ls);
    return __result;
}

_extern __int32 _sub_10008A36(LexState *);
_static __int32 listfields(LexState *ls) // 0x10008A36
{
    mangled_assert("listfields");
    todo("implement");
    __int32 __result = _sub_10008A36(ls);
    return __result;
}

_extern void _sub_100083B6(LexState *, Constdesc *);
_static void constructor_part(LexState *ls, Constdesc *cd) // 0x100083B6
{
    mangled_assert("constructor_part");
    todo("implement");
    _sub_100083B6(ls, cd);
}

_extern void _sub_10008312(LexState *);
_static void constructor(LexState *ls) // 0x10008312
{
    mangled_assert("constructor");
    todo("implement");
    _sub_10008312(ls);
}

_extern void _sub_10009170(LexState *, expdesc *);
_static void simpleexp(LexState *ls, expdesc *v) // 0x10009170
{
    mangled_assert("simpleexp");
    todo("implement");
    _sub_10009170(ls, v);
}

_extern void _sub_10008474(LexState *);
_static void exp1(LexState *ls) // 0x10008474
{
    mangled_assert("exp1");
    todo("implement");
    _sub_10008474(ls);
}

_extern UnOpr _sub_100088C6(__int32);
_static UnOpr getunopr(__int32 op) // 0x100088C6
{
    mangled_assert("getunopr");
    todo("implement");
    UnOpr __result = _sub_100088C6(op);
    return __result;
}

_extern BinOpr _sub_10008841(__int32);
_static BinOpr getbinopr(__int32 op) // 0x10008841
{
    mangled_assert("getbinopr");
    todo("implement");
    BinOpr __result = _sub_10008841(op);
    return __result;
}

_extern BinOpr _sub_1000941F(LexState *, expdesc *, __int32);
_static BinOpr subexpr(LexState *ls, expdesc *v, __int32 limit) // 0x1000941F
{
    mangled_assert("subexpr");
    todo("implement");
    BinOpr __result = _sub_1000941F(ls, v, limit);
    return __result;
}

_extern void _sub_100084EC(LexState *, expdesc *);
_static void expr(LexState *ls, expdesc *v) // 0x100084EC
{
    mangled_assert("expr");
    todo("implement");
    _sub_100084EC(ls, v);
}

_extern __int32 _sub_10007FBA(__int32);
_static __int32 block_follow(__int32 token) // 0x10007FBA
{
    mangled_assert("block_follow");
    todo("implement");
    __int32 __result = _sub_10007FBA(token);
    return __result;
}

_extern void _sub_10007F86(LexState *);
_static void block(LexState *ls) // 0x10007F86
{
    mangled_assert("block");
    todo("implement");
    _sub_10007F86(ls);
}

_extern __int32 _sub_10007EE6(LexState *, expdesc *, __int32);
_static __int32 assignment(LexState *ls, expdesc *v, __int32 nvars) // 0x10007EE6
{
    mangled_assert("assignment");
    todo("implement");
    __int32 __result = _sub_10007EE6(ls, v, nvars);
    return __result;
}

_extern void _sub_100082EF(LexState *, expdesc *);
_static void cond(LexState *ls, expdesc *v) // 0x100082EF
{
    mangled_assert("cond");
    todo("implement");
    _sub_100082EF(ls, v);
}

_extern void _sub_10009618(LexState *, __int32);
_static void whilestat(LexState *ls, __int32 line) // 0x10009618
{
    mangled_assert("whilestat");
    todo("implement");
    _sub_10009618(ls, line);
}

_extern void _sub_1000905F(LexState *, __int32);
_static void repeatstat(LexState *ls, __int32 line) // 0x1000905F
{
    mangled_assert("repeatstat");
    todo("implement");
    _sub_1000905F(ls, line);
}

_extern void _sub_100084FE(LexState *, __int32, OpCode, OpCode);
_static void forbody(LexState *ls, __int32 nvar, OpCode prepfor, OpCode loopfor) // 0x100084FE
{
    mangled_assert("forbody");
    todo("implement");
    _sub_100084FE(ls, nvar, prepfor, loopfor);
}

_extern void _sub_100085E8(LexState *, TString *);
_static void fornum(LexState *ls, TString *varname) // 0x100085E8
{
    mangled_assert("fornum");
    todo("implement");
    _sub_100085E8(ls, varname);
}

_extern void _sub_1000856D(LexState *, TString *);
_static void forlist(LexState *ls, TString *indexname) // 0x1000856D
{
    mangled_assert("forlist");
    todo("implement");
    _sub_1000856D(ls, indexname);
}

_extern void _sub_10008662(LexState *, __int32);
_static void forstat(LexState *ls, __int32 line) // 0x10008662
{
    mangled_assert("forstat");
    todo("implement");
    _sub_10008662(ls, line);
}

_extern void _sub_100094C9(LexState *, expdesc *);
_static void test_then_block(LexState *ls, expdesc *v) // 0x100094C9
{
    mangled_assert("test_then_block");
    todo("implement");
    _sub_100094C9(ls, v);
}

_extern void _sub_100088DE(LexState *, __int32);
_static void ifstat(LexState *ls, __int32 line) // 0x100088DE
{
    mangled_assert("ifstat");
    todo("implement");
    _sub_100088DE(ls, line);
}

_extern void _sub_10008AB8(LexState *);
_static void localstat(LexState *ls) // 0x10008AB8
{
    mangled_assert("localstat");
    todo("implement");
    _sub_10008AB8(ls);
}

_extern __int32 _sub_1000876E(LexState *, expdesc *);
_static __int32 funcname(LexState *ls, expdesc *v) // 0x1000876E
{
    mangled_assert("funcname");
    todo("implement");
    __int32 __result = _sub_1000876E(ls, v);
    return __result;
}

_extern void _sub_100087C8(LexState *, __int32);
_static void funcstat(LexState *ls, __int32 line) // 0x100087C8
{
    mangled_assert("funcstat");
    todo("implement");
    _sub_100087C8(ls, line);
}

_extern void _sub_10008BD3(LexState *);
_static void namestat(LexState *ls) // 0x10008BD3
{
    mangled_assert("namestat");
    todo("implement");
    _sub_10008BD3(ls);
}

_extern void _sub_100090D1(LexState *);
_static void retstat(LexState *ls) // 0x100090D1
{
    mangled_assert("retstat");
    todo("implement");
    _sub_100090D1(ls);
}

_extern void _sub_1000806C(LexState *);
_static void breakstat(LexState *ls) // 0x1000806C
{
    mangled_assert("breakstat");
    todo("implement");
    _sub_1000806C(ls);
}

_extern __int32 _sub_100092A4(LexState *);
_static __int32 stat(LexState *ls) // 0x100092A4
{
    mangled_assert("stat");
    todo("implement");
    __int32 __result = _sub_100092A4(ls);
    return __result;
}

_extern void _sub_10008D6C(LexState *);
_static void parlist(LexState *ls) // 0x10008D6C
{
    mangled_assert("parlist");
    todo("implement");
    _sub_10008D6C(ls);
}

_extern void _sub_10007FE4(LexState *, __int32, __int32);
_static void body(LexState *ls, __int32 needself, __int32 line) // 0x10007FE4
{
    mangled_assert("body");
    todo("implement");
    _sub_10007FE4(ls, needself, line);
}

_extern void _sub_10008185(LexState *);
_static void chunk(LexState *ls) // 0x10008185
{
    mangled_assert("chunk");
    todo("implement");
    _sub_10008185(ls);
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <swprintf.inl>
#include <lua\lparser.h>
#include <stdlib.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lcode.h>
#include <lua\llex.h>
#include <lua\lzio.h>
#include <lua\lobject.h>
#include <stdio.h>
#include <lua\llimits.h>
#include <lua\ldo.h>
#include <lua\lstate.h>
#include <luadebug.h>
#include <lua.h>
#include <stddef.h>
#include <limits.h>
#include <lua\lopcodes.h>
#include <lua\lmem.h>

/* ---------- constants */

/* ---------- definitions */

struct <unnamed-tag>
{
    OpCode opcode; // 0x0
    __int32 arg; // 0x4
};
static_assert(sizeof(<unnamed-tag>) == 8, "Invalid <unnamed-tag> size");

/* ---------- prototypes */

extern void luaK_error(LexState *ls, char const *msg);
extern __int32 luaK_jump(FuncState *fs);
extern __int32 luaK_getlabel(FuncState *fs);
extern void luaK_deltastack(FuncState *fs, __int32 delta);
extern void luaK_kstr(LexState *ls, __int32 c);
extern void luaK_number(FuncState *fs, double f);
extern void luaK_adjuststack(FuncState *fs, __int32 n);
extern __int32 luaK_lastisopen(FuncState *fs);
extern void luaK_setcallreturns(FuncState *fs, __int32 nresults);
extern void luaK_storevar(LexState *ls, expdesc const *var);
extern void luaK_patchlist(FuncState *fs, __int32 list, __int32 target);
extern void luaK_concat(FuncState *fs, __int32 *l1, __int32 l2);
extern void luaK_goiftrue(FuncState *fs, expdesc *v, __int32 keepvalue);
extern void luaK_tostack(LexState *ls, expdesc *v, __int32 onlyone);
extern void luaK_prefix(LexState *ls, UnOpr op, expdesc *v);
extern void luaK_infix(LexState *ls, BinOpr op, expdesc *v);
extern void luaK_posfix(LexState *ls, BinOpr op, expdesc *v1, expdesc *v2);
extern __int32 luaK_code0(FuncState *fs, OpCode o);
extern __int32 luaK_code1(FuncState *fs, OpCode o, __int32 arg1);
extern __int32 luaK_code2(FuncState *fs, OpCode o, __int32 arg1, __int32 arg2);

_static unsigned long previous_instruction(FuncState *fs);
_static void luaK_fixjump(FuncState *fs, __int32 pc, __int32 dest);
_static __int32 luaK_getjump(FuncState *fs, __int32 pc);
_static __int32 number_constant(FuncState *fs, double r);
_static __int32 discharge(FuncState *fs, expdesc *var);
_static void discharge1(FuncState *fs, expdesc *var);
_static OpCode invertjump(OpCode op);
_static void luaK_patchlistaux(FuncState *fs, __int32 list, __int32 target, OpCode special, __int32 special_target);
_static __int32 need_value(FuncState *fs, __int32 list, OpCode hasvalue);
_static void luaK_testgo(FuncState *fs, expdesc *v, __int32 invert, OpCode jump);
_static void luaK_goiffalse(FuncState *fs, expdesc *v, __int32 keepvalue);
_static __int32 code_label(FuncState *fs, OpCode op, __int32 arg);
_static void codelineinfo(FuncState *fs);

/* ---------- globals */

extern OpProperties const luaK_opproperties[0]; // 0x1000FAA0

/* ---------- private variables */

_static
{
    extern <unnamed-tag> const codes[12]; // 0x1000FA40
}

/* ---------- public code */

_extern void _sub_1000322B(LexState *, char const *);
void luaK_error(LexState *ls, char const *msg) // 0x1000322B
{
    mangled_assert("_luaK_error@8");
    todo("implement");
    _sub_1000322B(ls, msg);
}

_extern __int32 _sub_1000336B(FuncState *);
__int32 luaK_jump(FuncState *fs) // 0x1000336B
{
    mangled_assert("_luaK_jump@4");
    todo("implement");
    __int32 __result = _sub_1000336B(fs);
    return __result;
}

_extern __int32 _sub_100032CB(FuncState *);
__int32 luaK_getlabel(FuncState *fs) // 0x100032CB
{
    mangled_assert("_luaK_getlabel@4");
    todo("implement");
    __int32 __result = _sub_100032CB(fs);
    return __result;
}

_extern void _sub_100031EC(FuncState *, __int32);
void luaK_deltastack(FuncState *fs, __int32 delta) // 0x100031EC
{
    mangled_assert("_luaK_deltastack@8");
    todo("implement");
    _sub_100031EC(fs, delta);
}

_extern void _sub_1000339F(LexState *, __int32);
void luaK_kstr(LexState *ls, __int32 c) // 0x1000339F
{
    mangled_assert("_luaK_kstr@8");
    todo("implement");
    _sub_1000339F(ls, c);
}

_extern void _sub_100033DD(FuncState *, double);
void luaK_number(FuncState *fs, double f) // 0x100033DD
{
    mangled_assert("_luaK_number@12");
    todo("implement");
    _sub_100033DD(fs, f);
}

_extern void _sub_10002E27(FuncState *, __int32);
void luaK_adjuststack(FuncState *fs, __int32 n) // 0x10002E27
{
    mangled_assert("_luaK_adjuststack@8");
    todo("implement");
    _sub_10002E27(fs, n);
}

_extern __int32 _sub_100033B4(FuncState *);
__int32 luaK_lastisopen(FuncState *fs) // 0x100033B4
{
    mangled_assert("_luaK_lastisopen@4");
    todo("implement");
    __int32 __result = _sub_100033B4(fs);
    return __result;
}

_extern void _sub_100035C2(FuncState *, __int32);
void luaK_setcallreturns(FuncState *fs, __int32 nresults) // 0x100035C2
{
    mangled_assert("_luaK_setcallreturns@8");
    todo("implement");
    _sub_100035C2(fs, nresults);
}

_extern void _sub_10003600(LexState *, expdesc const *);
void luaK_storevar(LexState *ls, expdesc const *var) // 0x10003600
{
    mangled_assert("_luaK_storevar@8");
    todo("implement");
    _sub_10003600(ls, var);
}

_extern void _sub_1000342B(FuncState *, __int32, __int32);
void luaK_patchlist(FuncState *fs, __int32 list, __int32 target) // 0x1000342B
{
    mangled_assert("_luaK_patchlist@12");
    todo("implement");
    _sub_1000342B(fs, list, target);
}

_extern void _sub_100031B3(FuncState *, __int32 *, __int32);
void luaK_concat(FuncState *fs, __int32 *l1, __int32 l2) // 0x100031B3
{
    mangled_assert("_luaK_concat@12");
    todo("implement");
    _sub_100031B3(fs, l1, l2);
}

_extern void _sub_10003313(FuncState *, expdesc *, __int32);
void luaK_goiftrue(FuncState *fs, expdesc *v, __int32 keepvalue) // 0x10003313
{
    mangled_assert("_luaK_goiftrue@12");
    todo("implement");
    _sub_10003313(fs, v, keepvalue);
}

_extern void _sub_100036CA(LexState *, expdesc *, __int32);
void luaK_tostack(LexState *ls, expdesc *v, __int32 onlyone) // 0x100036CA
{
    mangled_assert("_luaK_tostack@12");
    todo("implement");
    _sub_100036CA(ls, v, onlyone);
}

_extern void _sub_1000354A(LexState *, UnOpr, expdesc *);
void luaK_prefix(LexState *ls, UnOpr op, expdesc *v) // 0x1000354A
{
    mangled_assert("_luaK_prefix@12");
    todo("implement");
    _sub_1000354A(ls, op, v);
}

_extern void _sub_10003334(LexState *, BinOpr, expdesc *);
void luaK_infix(LexState *ls, BinOpr op, expdesc *v) // 0x10003334
{
    mangled_assert("_luaK_infix@12");
    todo("implement");
    _sub_10003334(ls, op, v);
}

_extern void _sub_100034D0(LexState *, BinOpr, expdesc *, expdesc *);
void luaK_posfix(LexState *ls, BinOpr op, expdesc *v1, expdesc *v2) // 0x100034D0
{
    mangled_assert("_luaK_posfix@16");
    todo("implement");
    _sub_100034D0(ls, op, v1, v2);
}

_extern __int32 _sub_10002E45(FuncState *, OpCode);
__int32 luaK_code0(FuncState *fs, OpCode o) // 0x10002E45
{
    mangled_assert("_luaK_code0@8");
    todo("implement");
    __int32 __result = _sub_10002E45(fs, o);
    return __result;
}

_extern __int32 _sub_10002E59(FuncState *, OpCode, __int32);
__int32 luaK_code1(FuncState *fs, OpCode o, __int32 arg1) // 0x10002E59
{
    mangled_assert("_luaK_code1@12");
    todo("implement");
    __int32 __result = _sub_10002E59(fs, o, arg1);
    return __result;
}

_extern __int32 _sub_10002E6F(FuncState *, OpCode, __int32, __int32);
__int32 luaK_code2(FuncState *fs, OpCode o, __int32 arg1, __int32 arg2) // 0x10002E6F
{
    mangled_assert("_luaK_code2@16");
    todo("implement");
    __int32 __result = _sub_10002E6F(fs, o, arg1, arg2);
    return __result;
}

/* ---------- private code */

_extern unsigned long _sub_100038B5(FuncState *);
_static unsigned long previous_instruction(FuncState *fs) // 0x100038B5
{
    mangled_assert("previous_instruction");
    todo("implement");
    unsigned long __result = _sub_100038B5(fs);
    return __result;
}

_extern void _sub_1000323F(FuncState *, __int32, __int32);
_static void luaK_fixjump(FuncState *fs, __int32 pc, __int32 dest) // 0x1000323F
{
    mangled_assert("luaK_fixjump");
    todo("implement");
    _sub_1000323F(fs, pc, dest);
}

_extern __int32 _sub_100032A3(FuncState *, __int32);
_static __int32 luaK_getjump(FuncState *fs, __int32 pc) // 0x100032A3
{
    mangled_assert("luaK_getjump");
    todo("implement");
    __int32 __result = _sub_100032A3(fs, pc);
    return __result;
}

_extern __int32 _sub_1000383B(FuncState *, double);
_static __int32 number_constant(FuncState *fs, double r) // 0x1000383B
{
    mangled_assert("number_constant");
    todo("implement");
    __int32 __result = _sub_1000383B(fs, r);
    return __result;
}

_extern __int32 _sub_10002D75(FuncState *, expdesc *);
_static __int32 discharge(FuncState *fs, expdesc *var) // 0x10002D75
{
    mangled_assert("discharge");
    todo("implement");
    __int32 __result = _sub_10002D75(fs, var);
    return __result;
}

_extern void _sub_10002D4B(FuncState *, expdesc *);
_static void discharge1(FuncState *fs, expdesc *var) // 0x10002D4B
{
    mangled_assert("discharge1");
    todo("implement");
    _sub_10002D4B(fs, var);
}

_extern OpCode _sub_10002DC3(OpCode);
_static OpCode invertjump(OpCode op) // 0x10002DC3
{
    mangled_assert("invertjump");
    todo("implement");
    OpCode __result = _sub_10002DC3(op);
    return __result;
}

_extern void _sub_1000345A(FuncState *, __int32, __int32, OpCode, __int32);
_static void luaK_patchlistaux(FuncState *fs, __int32 list, __int32 target, OpCode special, __int32 special_target) // 0x1000345A
{
    mangled_assert("luaK_patchlistaux");
    todo("implement");
    _sub_1000345A(fs, list, target, special, special_target);
}

_extern __int32 _sub_10003801(FuncState *, __int32, OpCode);
_static __int32 need_value(FuncState *fs, __int32 list, OpCode hasvalue) // 0x10003801
{
    mangled_assert("need_value");
    todo("implement");
    __int32 __result = _sub_10003801(fs, list, hasvalue);
    return __result;
}

_extern void _sub_1000363B(FuncState *, expdesc *, __int32, OpCode);
_static void luaK_testgo(FuncState *fs, expdesc *v, __int32 invert, OpCode jump) // 0x1000363B
{
    mangled_assert("luaK_testgo");
    todo("implement");
    _sub_1000363B(fs, v, invert, jump);
}

_extern void _sub_100032F2(FuncState *, expdesc *, __int32);
_static void luaK_goiffalse(FuncState *fs, expdesc *v, __int32 keepvalue) // 0x100032F2
{
    mangled_assert("luaK_goiffalse");
    todo("implement");
    _sub_100032F2(fs, v, keepvalue);
}

_extern __int32 _sub_10002CD2(FuncState *, OpCode, __int32);
_static __int32 code_label(FuncState *fs, OpCode op, __int32 arg) // 0x10002CD2
{
    mangled_assert("code_label");
    todo("implement");
    __int32 __result = _sub_10002CD2(fs, op, arg);
    return __result;
}

_extern void _sub_10002CE0(FuncState *);
_static void codelineinfo(FuncState *fs) // 0x10002CE0
{
    mangled_assert("codelineinfo");
    todo("implement");
    _sub_10002CE0(fs);
}
#endif

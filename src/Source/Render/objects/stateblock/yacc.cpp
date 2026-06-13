#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\vector3.h>
#include <xstring>
#include <boost\shared_ptr.hpp>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <crtdefs.h>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <Mathlib\matrix3.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <new>
#include <xstddef>
#include <boost\detail\workaround.hpp>
#include <type_traits>
#include <Objects\StateBlock\stateblocktypes.h>
#include <tuple>
#include <xutility>
#include <Objects\TextureRegistry.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <assist\typemagic.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\config\suffix.hpp>
#include <Objects\vertex_program.h>
#include <util\utilexports.h>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <math.h>
#include <list>
#include <map>
#include <xtree>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <platform\osdef.h>
#include <boost\detail\lwm_win32.hpp>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <assert.h>
#include <algorithm>
#include <Objects\Texture.h>
#include <Objects\Objects.h>
#include <util\types.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <Objects\StateBlock\stateParse.h>
#include <gl\r_funcs.h>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
#include <memory>
#include <stdint.h>
#include <Objects\StateBlock\StateBlockManager.h>
#include <functional>
#include <xfunctional>
#include <util\stringutil.h>
#include <debug\db.h>
#include <fileio\filestream.h>
#include <fileio\fileioexports.h>
#include <gl\r_defines.h>
#include <fileio\bytestream.h>
#include <gl\glext.h>
#include <debug\ctassert.h>
#include <wchar.h>
#include <string>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Objects\fragment_program.h>

/* ---------- constants */

enum yysyntax_error::__l2::<unnamed-tag>
{
    YYERROR_VERBOSE_ARGS_MAXIMUM = 5, // 0x0005
};

/* ---------- definitions */

struct MyVal
{
    union
    {
        unsigned long m_iVal; // 0x0
        float m_fVal; // 0x0
        bool m_bVal; // 0x0
        char *m_string; // 0x0
        StateSymbol *m_sym; // 0x0
    };
    _inline MyVal();
};
static_assert(sizeof(MyVal) == 4, "Invalid MyVal size");

/* ---------- prototypes */

extern void yyerror(char const *msg);
extern Texture *loadTexture(char const *name);
extern __int32 yyparse();

_static void yy_symbol_value_print(_iobuf *yyoutput, __int32 yytype, MyVal const *const yyvaluep);
_static void yy_symbol_print(_iobuf *yyoutput, __int32 yytype, MyVal const *const yyvaluep);
_static void yy_stack_print(short *yybottom, short *yytop);
_static void yy_reduce_print(MyVal *yyvsp, __int32 yyrule);
_static unsigned __int32 yystrlen(char const *yystr);
_static char *yystpcpy(char *yydest, char const *yysrc);
_static unsigned __int32 yytnamerr(char *yyres, char const *yystr);
_static __int32 yysyntax_error(unsigned __int32 *yymsg_alloc, char **yymsg, short *yyssp, __int32 yytoken);
_static void yydestruct(char const *yymsg, __int32 yytype, MyVal *yyvaluep);

/* ---------- globals */

extern MyVal yylval; // 0x101A5680
extern __int32 yychar; // 0x101A5670
extern __int32 yynerrs; // 0x101A5674
extern __int32 yydebug; // 0x101A5678

/* ---------- private variables */

_static
{
    extern unsigned char const yytranslate[333]; // 0x100E8128
    extern unsigned short const yyprhs[137]; // 0x100E8278
    extern short const yyrhs[405]; // 0x100E8390
    extern unsigned short const yyrline[137]; // 0x100E86C0
    extern char const *const yytname[154]; // 0x100E87D8
    extern unsigned char const yyr1[137]; // 0x100E8A40
    extern unsigned char const yyr2[137]; // 0x100E8AD0
    extern unsigned char const yydefact[257]; // 0x100E8B60
    extern short const yydefgoto[73]; // 0x100E8C68
    extern short const yypact[257]; // 0x100E8D00
    extern short const yypgoto[73]; // 0x100E8F08
    extern unsigned short const yytable[264]; // 0x100E8FA0
    extern short const yycheck[264]; // 0x100E91B0
    extern unsigned char const yystos[257]; // 0x100E93C0
    extern std::_Nil _Nil_obj; // 0x101A567E
    extern std::_Ignore ignore; // 0x101A567C
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101A567D
}

/* ---------- public code */

_extern void _sub_100C0160(char const *);
void yyerror(char const *msg) // 0x100C0160
{
    mangled_assert("?yyerror@@YGXPBD@Z");
    todo("implement");
    _sub_100C0160(msg);
}

_extern Texture *_sub_100BFE20(char const *);
Texture *loadTexture(char const *name) // 0x100BFE20
{
    mangled_assert("?loadTexture@@YGPAVTexture@@PBD@Z");
    todo("implement");
    Texture * __result = _sub_100BFE20(name);
    return __result;
}

_extern _sub_100BFB50(MyVal *const);
_inline MyVal::MyVal() // 0x100BFB50
{
    mangled_assert("??0MyVal@@QAE@XZ");
    todo("implement");
    _sub_100BFB50(this);
}

_extern __int32 _sub_100C01A0();
__int32 yyparse() // 0x100C01A0
{
    mangled_assert("?yyparse@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_100C01A0();
    return __result;
}

/* ---------- private code */

_extern void _sub_100C00D0(_iobuf *, __int32, MyVal const *const);
_static void yy_symbol_value_print(_iobuf *yyoutput, __int32 yytype, MyVal const *const yyvaluep) // 0x100C00D0
{
    mangled_assert("yy_symbol_value_print");
    todo("implement");
    _sub_100C00D0(yyoutput, yytype, yyvaluep);
}

_extern void _sub_100C0090(_iobuf *, __int32, MyVal const *const);
_static void yy_symbol_print(_iobuf *yyoutput, __int32 yytype, MyVal const *const yyvaluep) // 0x100C0090
{
    mangled_assert("yy_symbol_print");
    todo("implement");
    _sub_100C0090(yyoutput, yytype, yyvaluep);
}

_extern void _sub_100C0020(short *, short *);
_static void yy_stack_print(short *yybottom, short *yytop) // 0x100C0020
{
    mangled_assert("yy_stack_print");
    todo("implement");
    _sub_100C0020(yybottom, yytop);
}

_extern void _sub_100BFF50(MyVal *, __int32);
_static void yy_reduce_print(MyVal *yyvsp, __int32 yyrule) // 0x100BFF50
{
    mangled_assert("yy_reduce_print");
    todo("implement");
    _sub_100BFF50(yyvsp, yyrule);
}

_extern unsigned __int32 _sub_100C1C40(char const *);
_static unsigned __int32 yystrlen(char const *yystr) // 0x100C1C40
{
    mangled_assert("yystrlen");
    todo("implement");
    unsigned __int32 __result = _sub_100C1C40(yystr);
    return __result;
}

_extern char *_sub_100C1C20(char *, char const *);
_static char *yystpcpy(char *yydest, char const *yysrc) // 0x100C1C20
{
    mangled_assert("yystpcpy");
    todo("implement");
    char * __result = _sub_100C1C20(yydest, yysrc);
    return __result;
}

_extern unsigned __int32 _sub_100C1E40(char *, char const *);
_static unsigned __int32 yytnamerr(char *yyres, char const *yystr) // 0x100C1E40
{
    mangled_assert("yytnamerr");
    todo("implement");
    unsigned __int32 __result = _sub_100C1E40(yyres, yystr);
    return __result;
}

_extern __int32 _sub_100C1C60(unsigned __int32 *, char **, short *, __int32);
_static __int32 yysyntax_error(unsigned __int32 *yymsg_alloc, char **yymsg, short *yyssp, __int32 yytoken) // 0x100C1C60
{
    mangled_assert("yysyntax_error");
    todo("implement");
    __int32 __result = _sub_100C1C60(yymsg_alloc, yymsg, yyssp, yytoken);
    return __result;
}

_extern void _sub_100C00E0(char const *, __int32, MyVal *);
_static void yydestruct(char const *yymsg, __int32 yytype, MyVal *yyvaluep) // 0x100C00E0
{
    mangled_assert("yydestruct");
    todo("implement");
    _sub_100C00E0(yymsg, yytype, yyvaluep);
}
#endif

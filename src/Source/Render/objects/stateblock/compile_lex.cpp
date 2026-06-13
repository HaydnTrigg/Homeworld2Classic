#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <Mathlib\matrix4.h>
#include <Objects\StateBlock\yacc.hpp>
#include <Mathlib\vector3.h>
#include <debug\ctassert.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <xutility>
#include <boost\config\select_stdlib_config.hpp>
#include <xatomic0.h>
#include <utility>
#include <boost\config\stdlib\dinkumware.hpp>
#include <iosfwd>
#include <vector>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <xmemory>
#include <boost\config\platform\win32.hpp>
#include <Objects\TextureRegistry.h>
#include <math.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <list>
#include <util\utilexports.h>
#include <tuple>
#include <map>
#include <xtree>
#include <boost\config\suffix.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <platform\osdef.h>
#include <profile\profile.h>
#include <assert.h>
#include <iostream>
#include <boost\throw_exception.hpp>
#include <util\types.h>
#include <Mathlib\matvec.h>
#include <boost\detail\shared_count.hpp>
#include <Mathlib\vector2.h>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Objects\Texture.h>
#include <Objects\Objects.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <Objects\StateBlock\lex.l>
#include <unistd.h>
#include <Objects\StateBlock\stateParse.h>
#include <io.h>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
#include <Objects\StateBlock\lex.cpp>
#include <debug\db.h>
#include <memory>
#include <stdint.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <functional>
#include <xfunctional>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef short flex_int16_t;
typedef __int32 flex_int32_t;
typedef yy_buffer_state *YY_BUFFER_STATE;
typedef unsigned __int32 yy_size_t;
typedef unsigned char YY_CHAR;
typedef __int32 yy_state_type;

/* ---------- prototypes */

/* ---------- globals */

extern __int32 yylineno; // 0x10112158
extern char yytext[0]; // 0x101A3620
extern __int32 yy_flex_debug; // 0x101A5620
extern char *yytext_ptr; // 0x101A5634
extern unsigned __int32 yyleng; // 0x101A5638
extern _iobuf *yyin; // 0x101A563C
extern _iobuf *yyout; // 0x101A5640

/* ---------- private variables */

_static
{
    extern short const yy_acclist[571]; // 0x100E5EA0
    extern short const yy_accept[500]; // 0x100E6318
    extern __int32 const yy_ec[256]; // 0x100E6700
    extern __int32 const yy_meta[64]; // 0x100E6B00
    extern short const yy_base[505]; // 0x100E6C00
    extern short const yy_def[505]; // 0x100E6FF8
    extern short const yy_nxt[630]; // 0x100E73F0
    extern short const yy_chk[630]; // 0x100E78E0
    extern __int32 const yy_rule_can_match_eol[83]; // 0x100E7DD0
    extern __int32 *yy_state_buf; // 0x101A5624
    extern __int32 *yy_state_ptr; // 0x101A5628
    extern char *yy_full_match; // 0x101A5668
    extern std::_Ignore ignore; // 0x101A565C
    extern __int32 yy_lp; // 0x101A566C
    extern __int32 yy_more_offset; // 0x101A562C
    extern __int32 yy_prev_more_offset; // 0x101A5630
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x101A565D
    extern std::_Nil _Nil_obj; // 0x101A565E
    extern unsigned __int32 yy_buffer_stack_top; // 0x101A5644
    extern unsigned __int32 yy_buffer_stack_max; // 0x101A5648
    extern yy_buffer_state **yy_buffer_stack; // 0x101A564C
    extern char yy_hold_char; // 0x101A565F
    extern unsigned __int32 yy_n_chars; // 0x101A5660
    extern char *yy_c_buf_p; // 0x101A5650
    extern __int32 yy_init; // 0x101A5654
    extern __int32 yy_start; // 0x101A5658
    extern __int32 yy_did_buffer_switch_on_eof; // 0x101A5664
}

/* ---------- public code */

/* ---------- private code */
#endif

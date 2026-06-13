#if 0
/* ---------- headers */

#include "decomp.h"
/* ---------- constants */

/* ---------- definitions */

struct yy_buffer_state
{
    _iobuf *yy_input_file; // 0x0
    char *yy_ch_buf; // 0x4
    char *yy_buf_pos; // 0x8
    unsigned __int32 yy_buf_size; // 0xC
    unsigned __int32 yy_n_chars; // 0x10
    __int32 yy_is_our_buffer; // 0x14
    __int32 yy_is_interactive; // 0x18
    __int32 yy_at_bol; // 0x1C
    __int32 yy_bs_lineno; // 0x20
    __int32 yy_bs_column; // 0x24
    __int32 yy_fill_buffer; // 0x28
    __int32 yy_buffer_status; // 0x2C
};
static_assert(sizeof(yy_buffer_state) == 48, "Invalid yy_buffer_state size");

/* ---------- prototypes */

extern __int32 yylex();
extern void yyrestart(_iobuf *input_file);
extern void yy_switch_to_buffer(yy_buffer_state *new_buffer);
extern yy_buffer_state *yy_create_buffer(_iobuf *file, __int32 size);
extern void yy_delete_buffer(yy_buffer_state *b);
extern void yy_flush_buffer(yy_buffer_state *b);
extern void yypush_buffer_state(yy_buffer_state *new_buffer);
extern void yypop_buffer_state();
extern yy_buffer_state *yy_scan_buffer(char *base, unsigned __int32 size);
extern yy_buffer_state *yy_scan_string(char const *yystr);
extern yy_buffer_state *yy_scan_bytes(char const *yybytes, unsigned __int32 _yybytes_len);
extern __int32 yyget_lineno();
extern _iobuf *yyget_in();
extern _iobuf *yyget_out();
extern unsigned __int32 yyget_leng();
extern char *yyget_text();
extern void yyset_lineno(__int32 line_number);
extern void yyset_in(_iobuf *in_str);
extern void yyset_out(_iobuf *out_str);
extern __int32 yyget_debug();
extern void yyset_debug(__int32 bdebug);
extern __int32 yylex_destroy();
extern void *yyalloc(unsigned __int32 size);
extern void *yyrealloc(void *ptr, unsigned __int32 size);
extern void yyfree(void *ptr);

_static __int32 yy_get_next_buffer();
_static __int32 yy_get_previous_state();
_static __int32 yy_try_NUL_trans(__int32 yy_current_state);
_static void yy_load_buffer_state();
_static void yy_init_buffer(yy_buffer_state *b, _iobuf *file);
_static void yyensure_buffer_stack();
_static void yy_fatal_error(char const *msg);
_static __int32 yy_init_globals();
_static void yy_flex_strncpy(char *s1, char const *s2, __int32 n);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_100BEC60();
__int32 yylex() // 0x100BEC60
{
    mangled_assert("?yylex@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_100BEC60();
    return __result;
}

_extern void _sub_100BF870(_iobuf *);
void yyrestart(_iobuf *input_file) // 0x100BF870
{
    mangled_assert("?yyrestart@@YGXPAU_iobuf@@@Z");
    todo("implement");
    _sub_100BF870(input_file);
}

_extern void _sub_100BEA10(yy_buffer_state *);
void yy_switch_to_buffer(yy_buffer_state *new_buffer) // 0x100BEA10
{
    mangled_assert("?yy_switch_to_buffer@@YGXPAUyy_buffer_state@@@Z");
    todo("implement");
    _sub_100BEA10(new_buffer);
}

_extern yy_buffer_state *_sub_100BE3A0(_iobuf *, __int32);
yy_buffer_state *yy_create_buffer(_iobuf *file, __int32 size) // 0x100BE3A0
{
    mangled_assert("?yy_create_buffer@@YGPAUyy_buffer_state@@PAU_iobuf@@H@Z");
    todo("implement");
    yy_buffer_state * __result = _sub_100BE3A0(file, size);
    return __result;
}

_extern void _sub_100BE400(yy_buffer_state *);
void yy_delete_buffer(yy_buffer_state *b) // 0x100BE400
{
    mangled_assert("?yy_delete_buffer@@YGXPAUyy_buffer_state@@@Z");
    todo("implement");
    _sub_100BE400(b);
}

_extern void _sub_100BE4B0(yy_buffer_state *);
void yy_flush_buffer(yy_buffer_state *b) // 0x100BE4B0
{
    mangled_assert("?yy_flush_buffer@@YGXPAUyy_buffer_state@@@Z");
    todo("implement");
    _sub_100BE4B0(b);
}

_extern void _sub_100BF7C0(yy_buffer_state *);
void yypush_buffer_state(yy_buffer_state *new_buffer) // 0x100BF7C0
{
    mangled_assert("?yypush_buffer_state@@YGXPAUyy_buffer_state@@@Z");
    todo("implement");
    _sub_100BF7C0(new_buffer);
}

_extern void _sub_100BF730();
void yypop_buffer_state() // 0x100BF730
{
    mangled_assert("?yypop_buffer_state@@YGXXZ");
    todo("implement");
    _sub_100BF730();
}

_extern yy_buffer_state *_sub_100BE8F0(char *, unsigned __int32);
yy_buffer_state *yy_scan_buffer(char *base, unsigned __int32 size) // 0x100BE8F0
{
    mangled_assert("?yy_scan_buffer@@YGPAUyy_buffer_state@@PADI@Z");
    todo("implement");
    yy_buffer_state * __result = _sub_100BE8F0(base, size);
    return __result;
}

_extern yy_buffer_state *_sub_100BE9F0(char const *);
yy_buffer_state *yy_scan_string(char const *yystr) // 0x100BE9F0
{
    mangled_assert("?yy_scan_string@@YGPAUyy_buffer_state@@PBD@Z");
    todo("implement");
    yy_buffer_state * __result = _sub_100BE9F0(yystr);
    return __result;
}

_extern yy_buffer_state *_sub_100BE980(char const *, unsigned __int32);
yy_buffer_state *yy_scan_bytes(char const *yybytes, unsigned __int32 _yybytes_len) // 0x100BE980
{
    mangled_assert("?yy_scan_bytes@@YGPAUyy_buffer_state@@PBDI@Z");
    todo("implement");
    yy_buffer_state * __result = _sub_100BE980(yybytes, _yybytes_len);
    return __result;
}

_extern __int32 _sub_100BEC30();
__int32 yyget_lineno() // 0x100BEC30
{
    mangled_assert("?yyget_lineno@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_100BEC30();
    return __result;
}

_extern _iobuf *_sub_100BEC10();
_iobuf *yyget_in() // 0x100BEC10
{
    mangled_assert("?yyget_in@@YGPAU_iobuf@@XZ");
    todo("implement");
    _iobuf * __result = _sub_100BEC10();
    return __result;
}

_extern _iobuf *_sub_100BEC40();
_iobuf *yyget_out() // 0x100BEC40
{
    mangled_assert("?yyget_out@@YGPAU_iobuf@@XZ");
    todo("implement");
    _iobuf * __result = _sub_100BEC40();
    return __result;
}

_extern unsigned __int32 _sub_100BEC20();
unsigned __int32 yyget_leng() // 0x100BEC20
{
    mangled_assert("?yyget_leng@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100BEC20();
    return __result;
}

_extern char *_sub_100BEC50();
char *yyget_text() // 0x100BEC50
{
    mangled_assert("?yyget_text@@YGPADXZ");
    todo("implement");
    char * __result = _sub_100BEC50();
    return __result;
}

_extern void _sub_100BF930(__int32);
void yyset_lineno(__int32 line_number) // 0x100BF930
{
    mangled_assert("?yyset_lineno@@YGXH@Z");
    todo("implement");
    _sub_100BF930(line_number);
}

_extern void _sub_100BF920(_iobuf *);
void yyset_in(_iobuf *in_str) // 0x100BF920
{
    mangled_assert("?yyset_in@@YGXPAU_iobuf@@@Z");
    todo("implement");
    _sub_100BF920(in_str);
}

_extern void _sub_100BF940(_iobuf *);
void yyset_out(_iobuf *out_str) // 0x100BF940
{
    mangled_assert("?yyset_out@@YGXPAU_iobuf@@@Z");
    todo("implement");
    _sub_100BF940(out_str);
}

_extern __int32 _sub_100BEC00();
__int32 yyget_debug() // 0x100BEC00
{
    mangled_assert("?yyget_debug@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_100BEC00();
    return __result;
}

_extern void _sub_100BF910(__int32);
void yyset_debug(__int32 bdebug) // 0x100BF910
{
    mangled_assert("?yyset_debug@@YGXH@Z");
    todo("implement");
    _sub_100BF910(bdebug);
}

_extern __int32 _sub_100BF6B0();
__int32 yylex_destroy() // 0x100BF6B0
{
    mangled_assert("?yylex_destroy@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_100BF6B0();
    return __result;
}

_extern void *_sub_100BEB40(unsigned __int32);
void *yyalloc(unsigned __int32 size) // 0x100BEB40
{
    mangled_assert("?yyalloc@@YGPAXI@Z");
    todo("implement");
    void * __result = _sub_100BEB40(size);
    return __result;
}

_extern void *_sub_100BF850(void *, unsigned __int32);
void *yyrealloc(void *ptr, unsigned __int32 size) // 0x100BF850
{
    mangled_assert("?yyrealloc@@YGPAXPAXI@Z");
    todo("implement");
    void * __result = _sub_100BF850(ptr, size);
    return __result;
}

_extern void _sub_100BEBF0(void *);
void yyfree(void *ptr) // 0x100BEBF0
{
    mangled_assert("?yyfree@@YGXPAX@Z");
    todo("implement");
    _sub_100BEBF0(ptr);
}

/* ---------- private code */

_extern __int32 _sub_100BE530();
_static __int32 yy_get_next_buffer() // 0x100BE530
{
    mangled_assert("yy_get_next_buffer");
    todo("implement");
    __int32 __result = _sub_100BE530();
    return __result;
}

_extern __int32 _sub_100BE6C0();
_static __int32 yy_get_previous_state() // 0x100BE6C0
{
    mangled_assert("yy_get_previous_state");
    todo("implement");
    __int32 __result = _sub_100BE6C0();
    return __result;
}

_extern __int32 _sub_100BEAA0(__int32);
_static __int32 yy_try_NUL_trans(__int32 yy_current_state) // 0x100BEAA0
{
    mangled_assert("yy_try_NUL_trans");
    todo("implement");
    __int32 __result = _sub_100BEAA0(yy_current_state);
    return __result;
}

_extern void _sub_100BE8B0();
_static void yy_load_buffer_state() // 0x100BE8B0
{
    mangled_assert("yy_load_buffer_state");
    todo("implement");
    _sub_100BE8B0();
}

_extern void _sub_100BE790(yy_buffer_state *, _iobuf *);
_static void yy_init_buffer(yy_buffer_state *b, _iobuf *file) // 0x100BE790
{
    mangled_assert("yy_init_buffer");
    todo("implement");
    _sub_100BE790(b, file);
}

_extern void _sub_100BEB50();
_static void yyensure_buffer_stack() // 0x100BEB50
{
    mangled_assert("yyensure_buffer_stack");
    todo("implement");
    _sub_100BEB50();
}

_extern void _sub_100BE450(char const *);
_static void yy_fatal_error(char const *msg) // 0x100BE450
{
    mangled_assert("yy_fatal_error");
    todo("implement");
    _sub_100BE450(msg);
}

_extern __int32 _sub_100BE820();
_static __int32 yy_init_globals() // 0x100BE820
{
    mangled_assert("yy_init_globals");
    todo("implement");
    __int32 __result = _sub_100BE820();
    return __result;
}

_extern void _sub_100BE480(char *, char const *, __int32);
_static void yy_flex_strncpy(char *s1, char const *s2, __int32 n) // 0x100BE480
{
    mangled_assert("yy_flex_strncpy");
    todo("implement");
    _sub_100BE480(s1, s2, n);
}
#endif

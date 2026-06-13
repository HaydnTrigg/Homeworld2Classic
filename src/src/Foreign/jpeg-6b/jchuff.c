#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jerror.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jchuff.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jinclude.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jconfig.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jpeglib.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jmorecfg.h"
#include <stddef.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <swprintf.inl>
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jpegint.h"
#include <stdio.h>

/* ---------- constants */

/* ---------- definitions */

struct savable_state
{
    __int32 put_buffer; // 0x0
    __int32 put_bits; // 0x4
    __int32 last_dc_val[4]; // 0x8
};
static_assert(sizeof(savable_state) == 24, "Invalid savable_state size");

struct huff_entropy_encoder
{
    jpeg_entropy_encoder pub; // 0x0
    savable_state saved; // 0xC
    unsigned __int32 restarts_to_go; // 0x24
    __int32 next_restart_num; // 0x28
    c_derived_tbl *dc_derived_tbls[4]; // 0x2C
    c_derived_tbl *ac_derived_tbls[4]; // 0x3C
    long *dc_count_ptrs[4]; // 0x4C
    long *ac_count_ptrs[4]; // 0x5C
};
static_assert(sizeof(huff_entropy_encoder) == 108, "Invalid huff_entropy_encoder size");

struct working_state
{
    unsigned char *next_output_byte; // 0x0
    unsigned __int32 free_in_buffer; // 0x4
    savable_state cur; // 0x8
    jpeg_compress_struct *cinfo; // 0x20
};
static_assert(sizeof(working_state) == 36, "Invalid working_state size");

/* ---------- prototypes */

extern void jpeg_make_c_derived_tbl(jpeg_compress_struct *cinfo, unsigned char isDC, __int32 tblno, c_derived_tbl **pdtbl);
extern void jpeg_gen_optimal_table(jpeg_compress_struct *cinfo, JHUFF_TBL *htbl, long *freq);
extern void jinit_huff_encoder(jpeg_compress_struct *cinfo);

_static void start_pass_huff(jpeg_compress_struct *cinfo, unsigned char gather_statistics);
_static unsigned char dump_buffer(working_state *state);
_static unsigned char emit_bits(working_state *state, unsigned __int32 code, __int32 size);
_static unsigned char flush_bits(working_state *state);
_static unsigned char encode_one_block(working_state *state, short *block, __int32 last_dc_val, c_derived_tbl *dctbl, c_derived_tbl *actbl);
_static unsigned char emit_restart(working_state *state, __int32 restart_num);
_static unsigned char encode_mcu_huff(jpeg_compress_struct *cinfo, short **MCU_data[64]);
_static void finish_pass_huff(jpeg_compress_struct *cinfo);
_static void htest_one_block(jpeg_compress_struct *cinfo, short *block, __int32 last_dc_val, long *dc_counts, long *ac_counts);
_static unsigned char encode_mcu_gather(jpeg_compress_struct *cinfo, short **MCU_data[64]);
_static void finish_pass_gather(jpeg_compress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CDC80(jpeg_compress_struct *, unsigned char, __int32, c_derived_tbl **);
void jpeg_make_c_derived_tbl(jpeg_compress_struct *cinfo, unsigned char isDC, __int32 tblno, c_derived_tbl **pdtbl) // 0x100CDC80
{
    mangled_assert("_jpeg_make_c_derived_tbl@16");
    todo("implement");
    _sub_100CDC80(cinfo, isDC, tblno, pdtbl);
}

_extern void _sub_100CDA00(jpeg_compress_struct *, JHUFF_TBL *, long *);
void jpeg_gen_optimal_table(jpeg_compress_struct *cinfo, JHUFF_TBL *htbl, long *freq) // 0x100CDA00
{
    mangled_assert("_jpeg_gen_optimal_table@12");
    todo("implement");
    _sub_100CDA00(cinfo, htbl, freq);
}

_extern void _sub_100CD960(jpeg_compress_struct *);
void jinit_huff_encoder(jpeg_compress_struct *cinfo) // 0x100CD960
{
    mangled_assert("_jinit_huff_encoder@4");
    todo("implement");
    _sub_100CD960(cinfo);
}

/* ---------- private code */

_extern void _sub_100CDEE0(jpeg_compress_struct *, unsigned char);
_static void start_pass_huff(jpeg_compress_struct *cinfo, unsigned char gather_statistics) // 0x100CDEE0
{
    mangled_assert("start_pass_huff");
    todo("implement");
    _sub_100CDEE0(cinfo, gather_statistics);
}

_extern unsigned char _sub_100CD180(working_state *);
_static unsigned char dump_buffer(working_state *state) // 0x100CD180
{
    mangled_assert("dump_buffer");
    todo("implement");
    unsigned char __result = _sub_100CD180(state);
    return __result;
}

_extern unsigned char _sub_100CD1B0(working_state *, unsigned __int32, __int32);
_static unsigned char emit_bits(working_state *state, unsigned __int32 code, __int32 size) // 0x100CD1B0
{
    mangled_assert("emit_bits");
    todo("implement");
    unsigned char __result = _sub_100CD1B0(state, code, size);
    return __result;
}

_extern unsigned char _sub_100CD840(working_state *);
_static unsigned char flush_bits(working_state *state) // 0x100CD840
{
    mangled_assert("flush_bits");
    todo("implement");
    unsigned char __result = _sub_100CD840(state);
    return __result;
}

_extern unsigned char _sub_100CD530(working_state *, short *, __int32, c_derived_tbl *, c_derived_tbl *);
_static unsigned char encode_one_block(working_state *state, short *block, __int32 last_dc_val, c_derived_tbl *dctbl, c_derived_tbl *actbl) // 0x100CD530
{
    mangled_assert("encode_one_block");
    todo("implement");
    unsigned char __result = _sub_100CD530(state, block, last_dc_val, dctbl, actbl);
    return __result;
}

_extern unsigned char _sub_100CD270(working_state *, __int32);
_static unsigned char emit_restart(working_state *state, __int32 restart_num) // 0x100CD270
{
    mangled_assert("emit_restart");
    todo("implement");
    unsigned char __result = _sub_100CD270(state, restart_num);
    return __result;
}

_extern unsigned char _sub_100CD3B0(jpeg_compress_struct *, short **[64]);
_static unsigned char encode_mcu_huff(jpeg_compress_struct *cinfo, short **MCU_data[64]) // 0x100CD3B0
{
    mangled_assert("encode_mcu_huff");
    todo("implement");
    unsigned char __result = _sub_100CD3B0(cinfo, MCU_data);
    return __result;
}

_extern void _sub_100CD7A0(jpeg_compress_struct *);
_static void finish_pass_huff(jpeg_compress_struct *cinfo) // 0x100CD7A0
{
    mangled_assert("finish_pass_huff");
    todo("implement");
    _sub_100CD7A0(cinfo);
}

_extern void _sub_100CD870(jpeg_compress_struct *, short *, __int32, long *, long *);
_static void htest_one_block(jpeg_compress_struct *cinfo, short *block, __int32 last_dc_val, long *dc_counts, long *ac_counts) // 0x100CD870
{
    mangled_assert("htest_one_block");
    todo("implement");
    _sub_100CD870(cinfo, block, last_dc_val, dc_counts, ac_counts);
}

_extern unsigned char _sub_100CD2F0(jpeg_compress_struct *, short **[64]);
_static unsigned char encode_mcu_gather(jpeg_compress_struct *cinfo, short **MCU_data[64]) // 0x100CD2F0
{
    mangled_assert("encode_mcu_gather");
    todo("implement");
    unsigned char __result = _sub_100CD2F0(cinfo, MCU_data);
    return __result;
}

_extern void _sub_100CD6C0(jpeg_compress_struct *);
_static void finish_pass_gather(jpeg_compress_struct *cinfo) // 0x100CD6C0
{
    mangled_assert("finish_pass_gather");
    todo("implement");
    _sub_100CD6C0(cinfo);
}
#endif

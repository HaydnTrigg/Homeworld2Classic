#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jerror.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jdhuff.h"
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
    __int32 last_dc_val[4]; // 0x0
};
static_assert(sizeof(savable_state) == 16, "Invalid savable_state size");

typedef __int32 bit_buf_type;
typedef my_input_controller *my_inputctl_ptr;

struct huff_entropy_decoder
{
    jpeg_entropy_decoder pub; // 0x0
    bitread_perm_state bitstate; // 0xC
    savable_state saved; // 0x14
    unsigned __int32 restarts_to_go; // 0x24
    d_derived_tbl *dc_derived_tbls[4]; // 0x28
    d_derived_tbl *ac_derived_tbls[4]; // 0x38
    d_derived_tbl *dc_cur_tbls[10]; // 0x48
    d_derived_tbl *ac_cur_tbls[10]; // 0x70
    unsigned char dc_needed[10]; // 0x98
    unsigned char ac_needed[10]; // 0xA2
};
static_assert(sizeof(huff_entropy_decoder) == 172, "Invalid huff_entropy_decoder size");

/* ---------- prototypes */

extern void jpeg_make_d_derived_tbl(jpeg_decompress_struct *cinfo, unsigned char isDC, __int32 tblno, d_derived_tbl **pdtbl);
extern unsigned char jpeg_fill_bit_buffer(bitread_working_state *state, __int32 get_buffer, __int32 bits_left, __int32 nbits);
extern __int32 jpeg_huff_decode(bitread_working_state *state, __int32 get_buffer, __int32 bits_left, d_derived_tbl *htbl, __int32 min_bits);
extern void jinit_huff_decoder(jpeg_decompress_struct *cinfo);

_static void start_pass_huff_decoder(jpeg_decompress_struct *cinfo);
_static unsigned char process_restart(jpeg_decompress_struct *cinfo);
_static unsigned char decode_mcu(jpeg_decompress_struct *cinfo, short **MCU_data[64]);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 const extend_test[16]; // 0x100EBB28
    extern __int32 const extend_offset[16]; // 0x100EBB68
}

/* ---------- public code */

_extern void _sub_100D0BE0(jpeg_decompress_struct *, unsigned char, __int32, d_derived_tbl **);
void jpeg_make_d_derived_tbl(jpeg_decompress_struct *cinfo, unsigned char isDC, __int32 tblno, d_derived_tbl **pdtbl) // 0x100D0BE0
{
    mangled_assert("_jpeg_make_d_derived_tbl@16");
    todo("implement");
    _sub_100D0BE0(cinfo, isDC, tblno, pdtbl);
}

_extern unsigned char _sub_100D09F0(bitread_working_state *, __int32, __int32, __int32);
unsigned char jpeg_fill_bit_buffer(bitread_working_state *state, __int32 get_buffer, __int32 bits_left, __int32 nbits) // 0x100D09F0
{
    mangled_assert("_jpeg_fill_bit_buffer@16");
    todo("implement");
    unsigned char __result = _sub_100D09F0(state, get_buffer, bits_left, nbits);
    return __result;
}

_extern __int32 _sub_100D0B00(bitread_working_state *, __int32, __int32, d_derived_tbl *, __int32);
__int32 jpeg_huff_decode(bitread_working_state *state, __int32 get_buffer, __int32 bits_left, d_derived_tbl *htbl, __int32 min_bits) // 0x100D0B00
{
    mangled_assert("_jpeg_huff_decode@20");
    todo("implement");
    __int32 __result = _sub_100D0B00(state, get_buffer, bits_left, htbl, min_bits);
    return __result;
}

_extern void _sub_100D0980(jpeg_decompress_struct *);
void jinit_huff_decoder(jpeg_decompress_struct *cinfo) // 0x100D0980
{
    mangled_assert("_jinit_huff_decoder@4");
    todo("implement");
    _sub_100D0980(cinfo);
}

/* ---------- private code */

_extern void _sub_100D0F60(jpeg_decompress_struct *);
_static void start_pass_huff_decoder(jpeg_decompress_struct *cinfo) // 0x100D0F60
{
    mangled_assert("start_pass_huff_decoder");
    todo("implement");
    _sub_100D0F60(cinfo);
}

_extern unsigned char _sub_100D0EE0(jpeg_decompress_struct *);
_static unsigned char process_restart(jpeg_decompress_struct *cinfo) // 0x100D0EE0
{
    mangled_assert("process_restart");
    todo("implement");
    unsigned char __result = _sub_100D0EE0(cinfo);
    return __result;
}

_extern unsigned char _sub_100D0560(jpeg_decompress_struct *, short **[64]);
_static unsigned char decode_mcu(jpeg_decompress_struct *cinfo, short **MCU_data[64]) // 0x100D0560
{
    mangled_assert("decode_mcu");
    todo("implement");
    unsigned char __result = _sub_100D0560(cinfo, MCU_data);
    return __result;
}
#endif

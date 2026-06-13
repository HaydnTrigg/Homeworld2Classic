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

struct phuff_entropy_encoder
{
    jpeg_entropy_encoder pub; // 0x0
    unsigned char gather_statistics; // 0xC
    unsigned char *next_output_byte; // 0x10
    unsigned __int32 free_in_buffer; // 0x14
    __int32 put_buffer; // 0x18
    __int32 put_bits; // 0x1C
    jpeg_compress_struct *cinfo; // 0x20
    __int32 last_dc_val[4]; // 0x24
    __int32 ac_tbl_no; // 0x34
    unsigned __int32 EOBRUN; // 0x38
    unsigned __int32 BE; // 0x3C
    char *bit_buffer; // 0x40
    unsigned __int32 restarts_to_go; // 0x44
    __int32 next_restart_num; // 0x48
    c_derived_tbl *derived_tbls[4]; // 0x4C
    long *count_ptrs[4]; // 0x5C
};
static_assert(sizeof(phuff_entropy_encoder) == 108, "Invalid phuff_entropy_encoder size");

/* ---------- prototypes */

extern void jinit_phuff_encoder(jpeg_compress_struct *cinfo);

_static void start_pass_phuff(jpeg_compress_struct *cinfo, unsigned char gather_statistics);
_static void dump_buffer(phuff_entropy_encoder *entropy);
_static void emit_bits(phuff_entropy_encoder *entropy, unsigned __int32 code, __int32 size);
_static void flush_bits(phuff_entropy_encoder *entropy);
_static void emit_symbol(phuff_entropy_encoder *entropy, __int32 tbl_no, __int32 symbol);
_static void emit_buffered_bits(phuff_entropy_encoder *entropy, char *bufstart, unsigned __int32 nbits);
_static void emit_eobrun(phuff_entropy_encoder *entropy);
_static void emit_restart(phuff_entropy_encoder *entropy, __int32 restart_num);
_static unsigned char encode_mcu_DC_first(jpeg_compress_struct *cinfo, short **MCU_data[64]);
_static unsigned char encode_mcu_AC_first(jpeg_compress_struct *cinfo, short **MCU_data[64]);
_static unsigned char encode_mcu_DC_refine(jpeg_compress_struct *cinfo, short **MCU_data[64]);
_static unsigned char encode_mcu_AC_refine(jpeg_compress_struct *cinfo, short **MCU_data[64]);
_static void finish_pass_phuff(jpeg_compress_struct *cinfo);
_static void finish_pass_gather_phuff(jpeg_compress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CE9A0(jpeg_compress_struct *);
void jinit_phuff_encoder(jpeg_compress_struct *cinfo) // 0x100CE9A0
{
    mangled_assert("_jinit_phuff_encoder@4");
    todo("implement");
    _sub_100CE9A0(cinfo);
}

/* ---------- private code */

_extern void _sub_100CEA00(jpeg_compress_struct *, unsigned char);
_static void start_pass_phuff(jpeg_compress_struct *cinfo, unsigned char gather_statistics) // 0x100CEA00
{
    mangled_assert("start_pass_phuff");
    todo("implement");
    _sub_100CEA00(cinfo, gather_statistics);
}

_extern void _sub_100CE070(phuff_entropy_encoder *);
_static void dump_buffer(phuff_entropy_encoder *entropy) // 0x100CE070
{
    mangled_assert("dump_buffer");
    todo("implement");
    _sub_100CE070(entropy);
}

_extern void _sub_100CE0B0(phuff_entropy_encoder *, unsigned __int32, __int32);
_static void emit_bits(phuff_entropy_encoder *entropy, unsigned __int32 code, __int32 size) // 0x100CE0B0
{
    mangled_assert("emit_bits");
    todo("implement");
    _sub_100CE0B0(entropy, code, size);
}

_extern void _sub_100CE970(phuff_entropy_encoder *);
_static void flush_bits(phuff_entropy_encoder *entropy) // 0x100CE970
{
    mangled_assert("flush_bits");
    todo("implement");
    _sub_100CE970(entropy);
}

_extern void _sub_100CE2B0(phuff_entropy_encoder *, __int32, __int32);
_static void emit_symbol(phuff_entropy_encoder *entropy, __int32 tbl_no, __int32 symbol) // 0x100CE2B0
{
    mangled_assert("emit_symbol");
    todo("implement");
    _sub_100CE2B0(entropy, tbl_no, symbol);
}

_extern void _sub_100CE170(phuff_entropy_encoder *, char *, unsigned __int32);
_static void emit_buffered_bits(phuff_entropy_encoder *entropy, char *bufstart, unsigned __int32 nbits) // 0x100CE170
{
    mangled_assert("emit_buffered_bits");
    todo("implement");
    _sub_100CE170(entropy, bufstart, nbits);
}

_extern void _sub_100CE1B0(phuff_entropy_encoder *);
_static void emit_eobrun(phuff_entropy_encoder *entropy) // 0x100CE1B0
{
    mangled_assert("emit_eobrun");
    todo("implement");
    _sub_100CE1B0(entropy);
}

_extern void _sub_100CE220(phuff_entropy_encoder *, __int32);
_static void emit_restart(phuff_entropy_encoder *entropy, __int32 restart_num) // 0x100CE220
{
    mangled_assert("emit_restart");
    todo("implement");
    _sub_100CE220(entropy, restart_num);
}

_extern unsigned char _sub_100CE690(jpeg_compress_struct *, short **[64]);
_static unsigned char encode_mcu_DC_first(jpeg_compress_struct *cinfo, short **MCU_data[64]) // 0x100CE690
{
    mangled_assert("encode_mcu_DC_first");
    todo("implement");
    unsigned char __result = _sub_100CE690(cinfo, MCU_data);
    return __result;
}

_extern unsigned char _sub_100CE2F0(jpeg_compress_struct *, short **[64]);
_static unsigned char encode_mcu_AC_first(jpeg_compress_struct *cinfo, short **MCU_data[64]) // 0x100CE2F0
{
    mangled_assert("encode_mcu_AC_first");
    todo("implement");
    unsigned char __result = _sub_100CE2F0(cinfo, MCU_data);
    return __result;
}

_extern unsigned char _sub_100CE7C0(jpeg_compress_struct *, short **[64]);
_static unsigned char encode_mcu_DC_refine(jpeg_compress_struct *cinfo, short **MCU_data[64]) // 0x100CE7C0
{
    mangled_assert("encode_mcu_DC_refine");
    todo("implement");
    unsigned char __result = _sub_100CE7C0(cinfo, MCU_data);
    return __result;
}

_extern unsigned char _sub_100CE480(jpeg_compress_struct *, short **[64]);
_static unsigned char encode_mcu_AC_refine(jpeg_compress_struct *cinfo, short **MCU_data[64]) // 0x100CE480
{
    mangled_assert("encode_mcu_AC_refine");
    todo("implement");
    unsigned char __result = _sub_100CE480(cinfo, MCU_data);
    return __result;
}

_extern void _sub_100CE930(jpeg_compress_struct *);
_static void finish_pass_phuff(jpeg_compress_struct *cinfo) // 0x100CE930
{
    mangled_assert("finish_pass_phuff");
    todo("implement");
    _sub_100CE930(cinfo);
}

_extern void _sub_100CE870(jpeg_compress_struct *);
_static void finish_pass_gather_phuff(jpeg_compress_struct *cinfo) // 0x100CE870
{
    mangled_assert("finish_pass_gather_phuff");
    todo("implement");
    _sub_100CE870(cinfo);
}
#endif

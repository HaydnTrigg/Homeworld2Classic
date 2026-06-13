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
    unsigned __int32 EOBRUN; // 0x0
    __int32 last_dc_val[4]; // 0x4
};
static_assert(sizeof(savable_state) == 20, "Invalid savable_state size");

typedef my_post_controller *my_post_ptr;

struct phuff_entropy_decoder
{
    jpeg_entropy_decoder pub; // 0x0
    bitread_perm_state bitstate; // 0xC
    savable_state saved; // 0x14
    unsigned __int32 restarts_to_go; // 0x28
    d_derived_tbl *derived_tbls[4]; // 0x2C
    d_derived_tbl *ac_derived_tbl; // 0x3C
};
static_assert(sizeof(phuff_entropy_decoder) == 64, "Invalid phuff_entropy_decoder size");

/* ---------- prototypes */

extern void jinit_phuff_decoder(jpeg_decompress_struct *cinfo);

_static void start_pass_phuff_decoder(jpeg_decompress_struct *cinfo);
_static unsigned char process_restart(jpeg_decompress_struct *cinfo);
_static unsigned char decode_mcu_DC_first(jpeg_decompress_struct *cinfo, short **MCU_data[64]);
_static unsigned char decode_mcu_AC_first(jpeg_decompress_struct *cinfo, short **MCU_data[64]);
_static unsigned char decode_mcu_DC_refine(jpeg_decompress_struct *cinfo, short **MCU_data[64]);
_static unsigned char decode_mcu_AC_refine(jpeg_decompress_struct *cinfo, short **MCU_data[64]);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 const extend_test[16]; // 0x100EBBA8
    extern __int32 const extend_offset[16]; // 0x100EBBE8
}

/* ---------- public code */

_extern void _sub_100D1A00(jpeg_decompress_struct *);
void jinit_phuff_decoder(jpeg_decompress_struct *cinfo) // 0x100D1A00
{
    mangled_assert("_jinit_phuff_decoder@4");
    todo("implement");
    _sub_100D1A00(cinfo);
}

/* ---------- private code */

_extern void _sub_100D1B10(jpeg_decompress_struct *);
_static void start_pass_phuff_decoder(jpeg_decompress_struct *cinfo) // 0x100D1B10
{
    mangled_assert("start_pass_phuff_decoder");
    todo("implement");
    _sub_100D1B10(cinfo);
}

_extern unsigned char _sub_100D1A80(jpeg_decompress_struct *);
_static unsigned char process_restart(jpeg_decompress_struct *cinfo) // 0x100D1A80
{
    mangled_assert("process_restart");
    todo("implement");
    unsigned char __result = _sub_100D1A80(cinfo);
    return __result;
}

_extern unsigned char _sub_100D16C0(jpeg_decompress_struct *, short **[64]);
_static unsigned char decode_mcu_DC_first(jpeg_decompress_struct *cinfo, short **MCU_data[64]) // 0x100D16C0
{
    mangled_assert("decode_mcu_DC_first");
    todo("implement");
    unsigned char __result = _sub_100D16C0(cinfo, MCU_data);
    return __result;
}

_extern unsigned char _sub_100D10B0(jpeg_decompress_struct *, short **[64]);
_static unsigned char decode_mcu_AC_first(jpeg_decompress_struct *cinfo, short **MCU_data[64]) // 0x100D10B0
{
    mangled_assert("decode_mcu_AC_first");
    todo("implement");
    unsigned char __result = _sub_100D10B0(cinfo, MCU_data);
    return __result;
}

_extern unsigned char _sub_100D1910(jpeg_decompress_struct *, short **[64]);
_static unsigned char decode_mcu_DC_refine(jpeg_decompress_struct *cinfo, short **MCU_data[64]) // 0x100D1910
{
    mangled_assert("decode_mcu_DC_refine");
    todo("implement");
    unsigned char __result = _sub_100D1910(cinfo, MCU_data);
    return __result;
}

_extern unsigned char _sub_100D12F0(jpeg_decompress_struct *, short **[64]);
_static unsigned char decode_mcu_AC_refine(jpeg_decompress_struct *cinfo, short **MCU_data[64]) // 0x100D12F0
{
    mangled_assert("decode_mcu_AC_refine");
    todo("implement");
    unsigned char __result = _sub_100D12F0(cinfo, MCU_data);
    return __result;
}
#endif

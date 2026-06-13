#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jerror.h"
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

struct my_coef_controller
{
    jpeg_d_coef_controller pub; // 0x0
    unsigned __int32 MCU_ctr; // 0x14
    __int32 MCU_vert_offset; // 0x18
    __int32 MCU_rows_per_iMCU_row; // 0x1C
    short *MCU_buffer[10][64]; // 0x20
    jvirt_barray_control *whole_image[10]; // 0x48
    __int32 *coef_bits_latch; // 0x70
};
static_assert(sizeof(my_coef_controller) == 116, "Invalid my_coef_controller size");

/* ---------- prototypes */

extern void jinit_d_coef_controller(jpeg_decompress_struct *cinfo, unsigned char need_full_buffer);

_static void start_iMCU_row(jpeg_decompress_struct *cinfo);
_static void start_input_pass(jpeg_decompress_struct *cinfo);
_static void start_output_pass(jpeg_decompress_struct *cinfo);
_static __int32 decompress_onepass(jpeg_decompress_struct *cinfo, unsigned char ***output_buf);
_static __int32 dummy_consume_data(jpeg_decompress_struct *cinfo);
_static __int32 consume_data(jpeg_decompress_struct *cinfo);
_static __int32 decompress_data(jpeg_decompress_struct *cinfo, unsigned char ***output_buf);
_static unsigned char smoothing_ok(jpeg_decompress_struct *cinfo);
_static __int32 decompress_smooth_data(jpeg_decompress_struct *cinfo, unsigned char ***output_buf);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CFE90(jpeg_decompress_struct *, unsigned char);
void jinit_d_coef_controller(jpeg_decompress_struct *cinfo, unsigned char need_full_buffer) // 0x100CFE90
{
    mangled_assert("_jinit_d_coef_controller@8");
    todo("implement");
    _sub_100CFE90(cinfo, need_full_buffer);
}

/* ---------- private code */

_extern void _sub_100D0150(jpeg_decompress_struct *);
_static void start_iMCU_row(jpeg_decompress_struct *cinfo) // 0x100D0150
{
    mangled_assert("start_iMCU_row");
    todo("implement");
    _sub_100D0150(cinfo);
}

_extern void _sub_100D01C0(jpeg_decompress_struct *);
_static void start_input_pass(jpeg_decompress_struct *cinfo) // 0x100D01C0
{
    mangled_assert("start_input_pass");
    todo("implement");
    _sub_100D01C0(cinfo);
}

_extern void _sub_100D01E0(jpeg_decompress_struct *);
_static void start_output_pass(jpeg_decompress_struct *cinfo) // 0x100D01E0
{
    mangled_assert("start_output_pass");
    todo("implement");
    _sub_100D01E0(cinfo);
}

_extern __int32 _sub_100CF5C0(jpeg_decompress_struct *, unsigned char ***);
_static __int32 decompress_onepass(jpeg_decompress_struct *cinfo, unsigned char ***output_buf) // 0x100CF5C0
{
    mangled_assert("decompress_onepass");
    todo("implement");
    __int32 __result = _sub_100CF5C0(cinfo, output_buf);
    return __result;
}

_extern __int32 _sub_100CFE80(jpeg_decompress_struct *);
_static __int32 dummy_consume_data(jpeg_decompress_struct *cinfo) // 0x100CFE80
{
    mangled_assert("dummy_consume_data");
    todo("implement");
    __int32 __result = _sub_100CFE80(cinfo);
    return __result;
}

_extern __int32 _sub_100CF240(jpeg_decompress_struct *);
_static __int32 consume_data(jpeg_decompress_struct *cinfo) // 0x100CF240
{
    mangled_assert("consume_data");
    todo("implement");
    __int32 __result = _sub_100CF240(cinfo);
    return __result;
}

_extern __int32 _sub_100CF430(jpeg_decompress_struct *, unsigned char ***);
_static __int32 decompress_data(jpeg_decompress_struct *cinfo, unsigned char ***output_buf) // 0x100CF430
{
    mangled_assert("decompress_data");
    todo("implement");
    __int32 __result = _sub_100CF430(cinfo, output_buf);
    return __result;
}

_extern unsigned char _sub_100CFFE0(jpeg_decompress_struct *);
_static unsigned char smoothing_ok(jpeg_decompress_struct *cinfo) // 0x100CFFE0
{
    mangled_assert("smoothing_ok");
    todo("implement");
    unsigned char __result = _sub_100CFFE0(cinfo);
    return __result;
}

_extern __int32 _sub_100CF800(jpeg_decompress_struct *, unsigned char ***);
_static __int32 decompress_smooth_data(jpeg_decompress_struct *cinfo, unsigned char ***output_buf) // 0x100CF800
{
    mangled_assert("decompress_smooth_data");
    todo("implement");
    __int32 __result = _sub_100CF800(cinfo, output_buf);
    return __result;
}
#endif

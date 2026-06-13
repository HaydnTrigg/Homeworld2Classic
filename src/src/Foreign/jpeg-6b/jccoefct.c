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
    jpeg_c_coef_controller pub; // 0x0
    unsigned __int32 iMCU_row_num; // 0x8
    unsigned __int32 mcu_ctr; // 0xC
    __int32 MCU_vert_offset; // 0x10
    __int32 MCU_rows_per_iMCU_row; // 0x14
    short *MCU_buffer[10][64]; // 0x18
    jvirt_barray_control *whole_image[10]; // 0x40
};
static_assert(sizeof(my_coef_controller) == 104, "Invalid my_coef_controller size");

/* ---------- prototypes */

extern void jinit_c_coef_controller(jpeg_compress_struct *cinfo, unsigned char need_full_buffer);

_static void start_iMCU_row(jpeg_compress_struct *cinfo);
_static void start_pass_coef(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode);
_static unsigned char compress_data(jpeg_compress_struct *cinfo, unsigned char ***input_buf);
_static unsigned char compress_first_pass(jpeg_compress_struct *cinfo, unsigned char ***input_buf);
_static unsigned char compress_output(jpeg_compress_struct *cinfo, unsigned char ***input_buf);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CAF90(jpeg_compress_struct *, unsigned char);
void jinit_c_coef_controller(jpeg_compress_struct *cinfo, unsigned char need_full_buffer) // 0x100CAF90
{
    mangled_assert("_jinit_c_coef_controller@8");
    todo("implement");
    _sub_100CAF90(cinfo, need_full_buffer);
}

/* ---------- private code */

_extern void _sub_100CB090(jpeg_compress_struct *);
_static void start_iMCU_row(jpeg_compress_struct *cinfo) // 0x100CB090
{
    mangled_assert("start_iMCU_row");
    todo("implement");
    _sub_100CB090(cinfo);
}

_extern void _sub_100CB100(jpeg_compress_struct *, J_BUF_MODE);
_static void start_pass_coef(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode) // 0x100CB100
{
    mangled_assert("start_pass_coef");
    todo("implement");
    _sub_100CB100(cinfo, pass_mode);
}

_extern unsigned char _sub_100CA9C0(jpeg_compress_struct *, unsigned char ***);
_static unsigned char compress_data(jpeg_compress_struct *cinfo, unsigned char ***input_buf) // 0x100CA9C0
{
    mangled_assert("compress_data");
    todo("implement");
    unsigned char __result = _sub_100CA9C0(cinfo, input_buf);
    return __result;
}

_extern unsigned char _sub_100CABE0(jpeg_compress_struct *, unsigned char ***);
_static unsigned char compress_first_pass(jpeg_compress_struct *cinfo, unsigned char ***input_buf) // 0x100CABE0
{
    mangled_assert("compress_first_pass");
    todo("implement");
    unsigned char __result = _sub_100CABE0(cinfo, input_buf);
    return __result;
}

_extern unsigned char _sub_100CADD0(jpeg_compress_struct *, unsigned char ***);
_static unsigned char compress_output(jpeg_compress_struct *cinfo, unsigned char ***input_buf) // 0x100CADD0
{
    mangled_assert("compress_output");
    todo("implement");
    unsigned char __result = _sub_100CADD0(cinfo, input_buf);
    return __result;
}
#endif

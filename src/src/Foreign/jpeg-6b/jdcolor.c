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

struct my_color_deconverter
{
    jpeg_color_deconverter pub; // 0x0
    __int32 *Cr_r_tab; // 0x8
    __int32 *Cb_b_tab; // 0xC
    __int32 *Cr_g_tab; // 0x10
    __int32 *Cb_g_tab; // 0x14
};
static_assert(sizeof(my_color_deconverter) == 24, "Invalid my_color_deconverter size");

/* ---------- prototypes */

extern void jinit_color_deconverter(jpeg_decompress_struct *cinfo);

_static void build_ycc_rgb_table(jpeg_decompress_struct *cinfo);
_static void ycc_rgb_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows);
_static void null_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows);
_static void grayscale_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows);
_static void gray_rgb_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows);
_static void ycck_cmyk_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows);
_static void start_pass_dcolor(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100D2A00(jpeg_decompress_struct *);
void jinit_color_deconverter(jpeg_decompress_struct *cinfo) // 0x100D2A00
{
    mangled_assert("_jinit_color_deconverter@4");
    todo("implement");
    _sub_100D2A00(cinfo);
}

/* ---------- private code */

_extern void _sub_100D2890(jpeg_decompress_struct *);
_static void build_ycc_rgb_table(jpeg_decompress_struct *cinfo) // 0x100D2890
{
    mangled_assert("build_ycc_rgb_table");
    todo("implement");
    _sub_100D2890(cinfo);
}

_extern void _sub_100D2C30(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **, __int32);
_static void ycc_rgb_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows) // 0x100D2C30
{
    mangled_assert("ycc_rgb_convert");
    todo("implement");
    _sub_100D2C30(cinfo, input_buf, input_row, output_buf, num_rows);
}

_extern void _sub_100D2B90(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **, __int32);
_static void null_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows) // 0x100D2B90
{
    mangled_assert("null_convert");
    todo("implement");
    _sub_100D2B90(cinfo, input_buf, input_row, output_buf, num_rows);
}

_extern void _sub_100D29D0(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **, __int32);
_static void grayscale_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows) // 0x100D29D0
{
    mangled_assert("grayscale_convert");
    todo("implement");
    _sub_100D29D0(cinfo, input_buf, input_row, output_buf, num_rows);
}

_extern void _sub_100D2960(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **, __int32);
_static void gray_rgb_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows) // 0x100D2960
{
    mangled_assert("gray_rgb_convert");
    todo("implement");
    _sub_100D2960(cinfo, input_buf, input_row, output_buf, num_rows);
}

_extern void _sub_100D2D70(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **, __int32);
_static void ycck_cmyk_convert(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 input_row, unsigned char **output_buf, __int32 num_rows) // 0x100D2D70
{
    mangled_assert("ycck_cmyk_convert");
    todo("implement");
    _sub_100D2D70(cinfo, input_buf, input_row, output_buf, num_rows);
}

_extern void _sub_100D2C20(jpeg_decompress_struct *);
_static void start_pass_dcolor(jpeg_decompress_struct *cinfo) // 0x100D2C20
{
    mangled_assert("start_pass_dcolor");
    todo("implement");
    _sub_100D2C20(cinfo);
}
#endif

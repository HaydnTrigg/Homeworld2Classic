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

struct my_cquantizer
{
    jpeg_color_quantizer pub; // 0x0
    unsigned char **sv_colormap; // 0x10
    __int32 sv_actual; // 0x14
    unsigned char **colorindex; // 0x18
    unsigned char is_padded; // 0x1C
    __int32 Ncolors[4]; // 0x20
    __int32 row_index; // 0x30
    __int32 *odither[4][16]; // 0x34
    short *fserrors[4]; // 0x44
    unsigned char on_odd_row; // 0x54
};
static_assert(sizeof(my_cquantizer) == 88, "Invalid my_cquantizer size");

typedef __int32 *ODITHER_MATRIX_PTR[16];
typedef short *FSERRPTR;
typedef short FSERROR;
typedef __int32 LOCFSERROR;
typedef my_cquantizer *my_cquantize_ptr;
typedef unsigned short histcell;
typedef unsigned short **hist3d[32];
typedef unsigned short hist1d[32];
typedef unsigned short *hist2d[32];
typedef unsigned short *histptr;
typedef box *boxptr;

/* ---------- prototypes */

extern void jinit_1pass_quantizer(jpeg_decompress_struct *cinfo);

_static __int32 select_ncolors(jpeg_decompress_struct *cinfo, __int32 *Ncolors);
_static __int32 output_value(jpeg_decompress_struct *cinfo, __int32 ci, __int32 j, __int32 maxj);
_static __int32 largest_input_value(jpeg_decompress_struct *cinfo, __int32 ci, __int32 j, __int32 maxj);
_static void create_colormap(jpeg_decompress_struct *cinfo);
_static void create_colorindex(jpeg_decompress_struct *cinfo);
_static __int32 *make_odither_array(jpeg_decompress_struct *cinfo, __int32 ncolors)[16];
_static void create_odither_tables(jpeg_decompress_struct *cinfo);
_static void color_quantize(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows);
_static void color_quantize3(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows);
_static void quantize_ord_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows);
_static void quantize3_ord_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows);
_static void quantize_fs_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows);
_static void alloc_fs_workspace(jpeg_decompress_struct *cinfo);
_static void start_pass_1_quant(jpeg_decompress_struct *cinfo, unsigned char is_pre_scan);
_static void finish_pass_1_quant(jpeg_decompress_struct *cinfo);
_static void new_color_map_1_quant(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned char const base_dither_matrix[16][16]; // 0x100EBCE8
}

/* ---------- public code */

_extern void _sub_100D3380(jpeg_decompress_struct *);
void jinit_1pass_quantizer(jpeg_decompress_struct *cinfo) // 0x100D3380
{
    mangled_assert("_jinit_1pass_quantizer@4");
    todo("implement");
    _sub_100D3380(cinfo);
}

/* ---------- private code */

_extern __int32 _sub_100D3900(jpeg_decompress_struct *, __int32 *);
_static __int32 select_ncolors(jpeg_decompress_struct *cinfo, __int32 *Ncolors) // 0x100D3900
{
    mangled_assert("select_ncolors");
    todo("implement");
    __int32 __result = _sub_100D3900(cinfo, Ncolors);
    return __result;
}

_extern __int32 _sub_100D34E0(jpeg_decompress_struct *, __int32, __int32, __int32);
_static __int32 output_value(jpeg_decompress_struct *cinfo, __int32 ci, __int32 j, __int32 maxj) // 0x100D34E0
{
    mangled_assert("output_value");
    todo("implement");
    __int32 __result = _sub_100D34E0(cinfo, ci, j, maxj);
    return __result;
}

_extern __int32 _sub_100D3420(jpeg_decompress_struct *, __int32, __int32, __int32);
_static __int32 largest_input_value(jpeg_decompress_struct *cinfo, __int32 ci, __int32 j, __int32 maxj) // 0x100D3420
{
    mangled_assert("largest_input_value");
    todo("implement");
    __int32 __result = _sub_100D3420(cinfo, ci, j, maxj);
    return __result;
}

_extern void _sub_100D31B0(jpeg_decompress_struct *);
_static void create_colormap(jpeg_decompress_struct *cinfo) // 0x100D31B0
{
    mangled_assert("create_colormap");
    todo("implement");
    _sub_100D31B0(cinfo);
}

_extern void _sub_100D3090(jpeg_decompress_struct *);
_static void create_colorindex(jpeg_decompress_struct *cinfo) // 0x100D3090
{
    mangled_assert("create_colorindex");
    todo("implement");
    _sub_100D3090(cinfo);
}

_extern __int32 *_sub_100D3440(jpeg_decompress_struct *, __int32)[16];
_static __int32 *make_odither_array(jpeg_decompress_struct *cinfo, __int32 ncolors)[16] // 0x100D3440
{
    mangled_assert("make_odither_array");
    todo("implement");
    __int32 *[16] __result = _sub_100D3440(cinfo, ncolors);
    return __result;
}

_extern void _sub_100D3310(jpeg_decompress_struct *);
_static void create_odither_tables(jpeg_decompress_struct *cinfo) // 0x100D3310
{
    mangled_assert("create_odither_tables");
    todo("implement");
    _sub_100D3310(cinfo);
}

_extern void _sub_100D2FE0(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32);
_static void color_quantize(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows) // 0x100D2FE0
{
    mangled_assert("color_quantize");
    todo("implement");
    _sub_100D2FE0(cinfo, input_buf, output_buf, num_rows);
}

_extern void _sub_100D2F20(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32);
_static void color_quantize3(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows) // 0x100D2F20
{
    mangled_assert("color_quantize3");
    todo("implement");
    _sub_100D2F20(cinfo, input_buf, output_buf, num_rows);
}

_extern void _sub_100D3800(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32);
_static void quantize_ord_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows) // 0x100D3800
{
    mangled_assert("quantize_ord_dither");
    todo("implement");
    _sub_100D3800(cinfo, input_buf, output_buf, num_rows);
}

_extern void _sub_100D3500(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32);
_static void quantize3_ord_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows) // 0x100D3500
{
    mangled_assert("quantize3_ord_dither");
    todo("implement");
    _sub_100D3500(cinfo, input_buf, output_buf, num_rows);
}

_extern void _sub_100D3620(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32);
_static void quantize_fs_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows) // 0x100D3620
{
    mangled_assert("quantize_fs_dither");
    todo("implement");
    _sub_100D3620(cinfo, input_buf, output_buf, num_rows);
}

_extern void _sub_100D2EE0(jpeg_decompress_struct *);
_static void alloc_fs_workspace(jpeg_decompress_struct *cinfo) // 0x100D2EE0
{
    mangled_assert("alloc_fs_workspace");
    todo("implement");
    _sub_100D2EE0(cinfo);
}

_extern void _sub_100D39E0(jpeg_decompress_struct *, unsigned char);
_static void start_pass_1_quant(jpeg_decompress_struct *cinfo, unsigned char is_pre_scan) // 0x100D39E0
{
    mangled_assert("start_pass_1_quant");
    todo("implement");
    _sub_100D39E0(cinfo, is_pre_scan);
}

_extern void _sub_100D3370(jpeg_decompress_struct *);
_static void finish_pass_1_quant(jpeg_decompress_struct *cinfo) // 0x100D3370
{
    mangled_assert("finish_pass_1_quant");
    todo("implement");
    _sub_100D3370(cinfo);
}

_extern void _sub_100D34C0(jpeg_decompress_struct *);
_static void new_color_map_1_quant(jpeg_decompress_struct *cinfo) // 0x100D34C0
{
    mangled_assert("new_color_map_1_quant");
    todo("implement");
    _sub_100D34C0(cinfo);
}
#endif

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
    __int32 desired; // 0x14
    unsigned short **histogram[32]; // 0x18
    unsigned char needs_zeroed; // 0x1C
    short *fserrors; // 0x20
    unsigned char on_odd_row; // 0x24
    __int32 *error_limiter; // 0x28
};
static_assert(sizeof(my_cquantizer) == 44, "Invalid my_cquantizer size");

struct box
{
    __int32 c0min; // 0x0
    __int32 c0max; // 0x4
    __int32 c1min; // 0x8
    __int32 c1max; // 0xC
    __int32 c2min; // 0x10
    __int32 c2max; // 0x14
    __int32 volume; // 0x18
    long colorcount; // 0x1C
};
static_assert(sizeof(box) == 32, "Invalid box size");

/* ---------- prototypes */

extern void jinit_2pass_quantizer(jpeg_decompress_struct *cinfo);

_static void prescan_quantize(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows);
_static box *find_biggest_color_pop(box *boxlist, __int32 numboxes);
_static box *find_biggest_volume(box *boxlist, __int32 numboxes);
_static void update_box(jpeg_decompress_struct *cinfo, box *boxp);
_static __int32 median_cut(jpeg_decompress_struct *cinfo, box *boxlist, __int32 numboxes, __int32 desired_colors);
_static void compute_color(jpeg_decompress_struct *cinfo, box *boxp, __int32 icolor);
_static void select_colors(jpeg_decompress_struct *cinfo, __int32 desired_colors);
_static __int32 find_nearby_colors(jpeg_decompress_struct *cinfo, __int32 minc0, __int32 minc1, __int32 minc2, unsigned char *colorlist);
_static void find_best_colors(jpeg_decompress_struct *cinfo, __int32 minc0, __int32 minc1, __int32 minc2, __int32 numcolors, unsigned char *colorlist, unsigned char *bestcolor);
_static void fill_inverse_cmap(jpeg_decompress_struct *cinfo, __int32 c0, __int32 c1, __int32 c2);
_static void pass2_no_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows);
_static void pass2_fs_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows);
_static void init_error_limit(jpeg_decompress_struct *cinfo);
_static void finish_pass1(jpeg_decompress_struct *cinfo);
_static void finish_pass2(jpeg_decompress_struct *cinfo);
_static void start_pass_2_quant(jpeg_decompress_struct *cinfo, unsigned char is_pre_scan);
_static void new_color_map_2_quant(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100D4220(jpeg_decompress_struct *);
void jinit_2pass_quantizer(jpeg_decompress_struct *cinfo) // 0x100D4220
{
    mangled_assert("_jinit_2pass_quantizer@4");
    todo("implement");
    _sub_100D4220(cinfo);
}

/* ---------- private code */

_extern void _sub_100D4860(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32);
_static void prescan_quantize(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows) // 0x100D4860
{
    mangled_assert("prescan_quantize");
    todo("implement");
    _sub_100D4860(cinfo, input_buf, output_buf, num_rows);
}

_extern box *_sub_100D3F00(box *, __int32);
_static box *find_biggest_color_pop(box *boxlist, __int32 numboxes) // 0x100D3F00
{
    mangled_assert("find_biggest_color_pop");
    todo("implement");
    box * __result = _sub_100D3F00(boxlist, numboxes);
    return __result;
}

_extern box *_sub_100D3F40(box *, __int32);
_static box *find_biggest_volume(box *boxlist, __int32 numboxes) // 0x100D3F40
{
    mangled_assert("find_biggest_volume");
    todo("implement");
    box * __result = _sub_100D3F40(boxlist, numboxes);
    return __result;
}

_extern void _sub_100D4A70(jpeg_decompress_struct *, box *);
_static void update_box(jpeg_decompress_struct *cinfo, box *boxp) // 0x100D4A70
{
    mangled_assert("update_box");
    todo("implement");
    _sub_100D4A70(cinfo, boxp);
}

_extern __int32 _sub_100D4350(jpeg_decompress_struct *, box *, __int32, __int32);
_static __int32 median_cut(jpeg_decompress_struct *cinfo, box *boxlist, __int32 numboxes, __int32 desired_colors) // 0x100D4350
{
    mangled_assert("median_cut");
    todo("implement");
    __int32 __result = _sub_100D4350(cinfo, boxlist, numboxes, desired_colors);
    return __result;
}

_extern void _sub_100D3AC0(jpeg_decompress_struct *, box *, __int32);
_static void compute_color(jpeg_decompress_struct *cinfo, box *boxp, __int32 icolor) // 0x100D3AC0
{
    mangled_assert("compute_color");
    todo("implement");
    _sub_100D3AC0(cinfo, boxp, icolor);
}

_extern void _sub_100D48D0(jpeg_decompress_struct *, __int32);
_static void select_colors(jpeg_decompress_struct *cinfo, __int32 desired_colors) // 0x100D48D0
{
    mangled_assert("select_colors");
    todo("implement");
    _sub_100D48D0(cinfo, desired_colors);
}

_extern __int32 _sub_100D3F70(jpeg_decompress_struct *, __int32, __int32, __int32, unsigned char *);
_static __int32 find_nearby_colors(jpeg_decompress_struct *cinfo, __int32 minc0, __int32 minc1, __int32 minc2, unsigned char *colorlist) // 0x100D3F70
{
    mangled_assert("find_nearby_colors");
    todo("implement");
    __int32 __result = _sub_100D3F70(cinfo, minc0, minc1, minc2, colorlist);
    return __result;
}

_extern void _sub_100D3D80(jpeg_decompress_struct *, __int32, __int32, __int32, __int32, unsigned char *, unsigned char *);
_static void find_best_colors(jpeg_decompress_struct *cinfo, __int32 minc0, __int32 minc1, __int32 minc2, __int32 numcolors, unsigned char *colorlist, unsigned char *bestcolor) // 0x100D3D80
{
    mangled_assert("find_best_colors");
    todo("implement");
    _sub_100D3D80(cinfo, minc0, minc1, minc2, numcolors, colorlist, bestcolor);
}

_extern void _sub_100D3C50(jpeg_decompress_struct *, __int32, __int32, __int32);
_static void fill_inverse_cmap(jpeg_decompress_struct *cinfo, __int32 c0, __int32 c1, __int32 c2) // 0x100D3C50
{
    mangled_assert("fill_inverse_cmap");
    todo("implement");
    _sub_100D3C50(cinfo, c0, c1, c2);
}

_extern void _sub_100D4790(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32);
_static void pass2_no_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows) // 0x100D4790
{
    mangled_assert("pass2_no_dither");
    todo("implement");
    _sub_100D4790(cinfo, input_buf, output_buf, num_rows);
}

_extern void _sub_100D4490(jpeg_decompress_struct *, unsigned char **, unsigned char **, __int32);
_static void pass2_fs_dither(jpeg_decompress_struct *cinfo, unsigned char **input_buf, unsigned char **output_buf, __int32 num_rows) // 0x100D4490
{
    mangled_assert("pass2_fs_dither");
    todo("implement");
    _sub_100D4490(cinfo, input_buf, output_buf, num_rows);
}

_extern void _sub_100D4180(jpeg_decompress_struct *);
_static void init_error_limit(jpeg_decompress_struct *cinfo) // 0x100D4180
{
    mangled_assert("init_error_limit");
    todo("implement");
    _sub_100D4180(cinfo);
}

_extern void _sub_100D4140(jpeg_decompress_struct *);
_static void finish_pass1(jpeg_decompress_struct *cinfo) // 0x100D4140
{
    mangled_assert("finish_pass1");
    todo("implement");
    _sub_100D4140(cinfo);
}

_extern void _sub_100D4170(jpeg_decompress_struct *);
_static void finish_pass2(jpeg_decompress_struct *cinfo) // 0x100D4170
{
    mangled_assert("finish_pass2");
    todo("implement");
    _sub_100D4170(cinfo);
}

_extern void _sub_100D4970(jpeg_decompress_struct *, unsigned char);
_static void start_pass_2_quant(jpeg_decompress_struct *cinfo, unsigned char is_pre_scan) // 0x100D4970
{
    mangled_assert("start_pass_2_quant");
    todo("implement");
    _sub_100D4970(cinfo, is_pre_scan);
}

_extern void _sub_100D4470(jpeg_decompress_struct *);
_static void new_color_map_2_quant(jpeg_decompress_struct *cinfo) // 0x100D4470
{
    mangled_assert("new_color_map_2_quant");
    todo("implement");
    _sub_100D4470(cinfo);
}
#endif

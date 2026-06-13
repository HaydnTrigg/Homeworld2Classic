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

struct my_upsampler
{
    jpeg_upsampler pub; // 0x0
    void (*upmethod)(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **); // 0xC
    __int32 *Cr_r_tab; // 0x10
    __int32 *Cb_b_tab; // 0x14
    __int32 *Cr_g_tab; // 0x18
    __int32 *Cb_g_tab; // 0x1C
    unsigned char *spare_row; // 0x20
    unsigned char spare_full; // 0x24
    unsigned __int32 out_row_width; // 0x28
    unsigned __int32 rows_to_go; // 0x2C
};
static_assert(sizeof(my_upsampler) == 48, "Invalid my_upsampler size");

/* ---------- prototypes */

extern void jinit_merged_upsampler(jpeg_decompress_struct *cinfo);

_static void build_ycc_rgb_table(jpeg_decompress_struct *cinfo);
_static void start_pass_merged_upsample(jpeg_decompress_struct *cinfo);
_static void merged_2v_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);
_static void merged_1v_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);
_static void h2v1_merged_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 in_row_group_ctr, unsigned char **output_buf);
_static void h2v2_merged_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 in_row_group_ctr, unsigned char **output_buf);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100D52D0(jpeg_decompress_struct *);
void jinit_merged_upsampler(jpeg_decompress_struct *cinfo) // 0x100D52D0
{
    mangled_assert("_jinit_merged_upsampler@4");
    todo("implement");
    _sub_100D52D0(cinfo);
}

/* ---------- private code */

_extern void _sub_100D4E80(jpeg_decompress_struct *);
_static void build_ycc_rgb_table(jpeg_decompress_struct *cinfo) // 0x100D4E80
{
    mangled_assert("build_ycc_rgb_table");
    todo("implement");
    _sub_100D4E80(cinfo);
}

_extern void _sub_100D5440(jpeg_decompress_struct *);
_static void start_pass_merged_upsample(jpeg_decompress_struct *cinfo) // 0x100D5440
{
    mangled_assert("start_pass_merged_upsample");
    todo("implement");
    _sub_100D5440(cinfo);
}

_extern void _sub_100D5390(jpeg_decompress_struct *, unsigned char ***, unsigned __int32 *, unsigned __int32, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void merged_2v_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100D5390
{
    mangled_assert("merged_2v_upsample");
    todo("implement");
    _sub_100D5390(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

_extern void _sub_100D5350(jpeg_decompress_struct *, unsigned char ***, unsigned __int32 *, unsigned __int32, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void merged_1v_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100D5350
{
    mangled_assert("merged_1v_upsample");
    todo("implement");
    _sub_100D5350(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

_extern void _sub_100D4F50(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **);
_static void h2v1_merged_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 in_row_group_ctr, unsigned char **output_buf) // 0x100D4F50
{
    mangled_assert("h2v1_merged_upsample");
    todo("implement");
    _sub_100D4F50(cinfo, input_buf, in_row_group_ctr, output_buf);
}

_extern void _sub_100D50C0(jpeg_decompress_struct *, unsigned char ***, unsigned __int32, unsigned char **);
_static void h2v2_merged_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 in_row_group_ctr, unsigned char **output_buf) // 0x100D50C0
{
    mangled_assert("h2v2_merged_upsample");
    todo("implement");
    _sub_100D50C0(cinfo, input_buf, in_row_group_ctr, output_buf);
}
#endif

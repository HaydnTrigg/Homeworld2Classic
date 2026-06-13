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
    unsigned char **color_buf[10]; // 0xC
    void (*methods[10])(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***); // 0x34
    __int32 next_row_out; // 0x5C
    unsigned __int32 rows_to_go; // 0x60
    __int32 rowgroup_height[10]; // 0x64
    unsigned char h_expand[10]; // 0x8C
    unsigned char v_expand[10]; // 0x96
};
static_assert(sizeof(my_upsampler) == 160, "Invalid my_upsampler size");

/* ---------- prototypes */

extern void jinit_upsampler(jpeg_decompress_struct *cinfo);

_static void start_pass_upsample(jpeg_decompress_struct *cinfo);
_static void sep_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);
_static void fullsize_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr);
_static void noop_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr);
_static void int_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr);
_static void h2v1_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr);
_static void h2v2_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr);
_static void h2v1_fancy_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr);
_static void h2v2_fancy_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100D25B0(jpeg_decompress_struct *);
void jinit_upsampler(jpeg_decompress_struct *cinfo) // 0x100D25B0
{
    mangled_assert("_jinit_upsampler@4");
    todo("implement");
    _sub_100D25B0(cinfo);
}

/* ---------- private code */

_extern void _sub_100D2870(jpeg_decompress_struct *);
_static void start_pass_upsample(jpeg_decompress_struct *cinfo) // 0x100D2870
{
    mangled_assert("start_pass_upsample");
    todo("implement");
    _sub_100D2870(cinfo);
}

_extern void _sub_100D27A0(jpeg_decompress_struct *, unsigned char ***, unsigned __int32 *, unsigned __int32, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void sep_upsample(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100D27A0
{
    mangled_assert("sep_upsample");
    todo("implement");
    _sub_100D27A0(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

_extern void _sub_100D21D0(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***);
_static void fullsize_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr) // 0x100D21D0
{
    mangled_assert("fullsize_upsample");
    todo("implement");
    _sub_100D21D0(cinfo, compptr, input_data, output_data_ptr);
}

_extern void _sub_100D2790(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***);
_static void noop_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr) // 0x100D2790
{
    mangled_assert("noop_upsample");
    todo("implement");
    _sub_100D2790(cinfo, compptr, input_data, output_data_ptr);
}

_extern void _sub_100D24C0(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***);
_static void int_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr) // 0x100D24C0
{
    mangled_assert("int_upsample");
    todo("implement");
    _sub_100D24C0(cinfo, compptr, input_data, output_data_ptr);
}

_extern void _sub_100D22B0(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***);
_static void h2v1_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr) // 0x100D22B0
{
    mangled_assert("h2v1_upsample");
    todo("implement");
    _sub_100D22B0(cinfo, compptr, input_data, output_data_ptr);
}

_extern void _sub_100D2450(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***);
_static void h2v2_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr) // 0x100D2450
{
    mangled_assert("h2v2_upsample");
    todo("implement");
    _sub_100D2450(cinfo, compptr, input_data, output_data_ptr);
}

_extern void _sub_100D21E0(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***);
_static void h2v1_fancy_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr) // 0x100D21E0
{
    mangled_assert("h2v1_fancy_upsample");
    todo("implement");
    _sub_100D21E0(cinfo, compptr, input_data, output_data_ptr);
}

_extern void _sub_100D2310(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***);
_static void h2v2_fancy_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char ***output_data_ptr) // 0x100D2310
{
    mangled_assert("h2v2_fancy_upsample");
    todo("implement");
    _sub_100D2310(cinfo, compptr, input_data, output_data_ptr);
}
#endif

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

struct my_downsampler
{
    jpeg_downsampler pub; // 0x0
    void (*methods[10])(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, unsigned char **); // 0xC
};
static_assert(sizeof(my_downsampler) == 52, "Invalid my_downsampler size");

/* ---------- prototypes */

extern void jinit_downsampler(jpeg_compress_struct *cinfo);

_static void start_pass_downsample(jpeg_compress_struct *cinfo);
_static void expand_right_edge(unsigned char **image_data, __int32 num_rows, unsigned __int32 input_cols, unsigned __int32 output_cols);
_static void sep_downsample(jpeg_compress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 in_row_index, unsigned char ***output_buf, unsigned __int32 out_row_group_index);
_static void int_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data);
_static void fullsize_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data);
_static void h2v1_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data);
_static void h2v2_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data);
_static void h2v2_smooth_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data);
_static void fullsize_smooth_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CC080(jpeg_compress_struct *);
void jinit_downsampler(jpeg_compress_struct *cinfo) // 0x100CC080
{
    mangled_assert("_jinit_downsampler@4");
    todo("implement");
    _sub_100CC080(cinfo);
}

/* ---------- private code */

_extern void _sub_100CC280(jpeg_compress_struct *);
_static void start_pass_downsample(jpeg_compress_struct *cinfo) // 0x100CC280
{
    mangled_assert("start_pass_downsample");
    todo("implement");
    _sub_100CC280(cinfo);
}

_extern void _sub_100CB900(unsigned char **, __int32, unsigned __int32, unsigned __int32);
_static void expand_right_edge(unsigned char **image_data, __int32 num_rows, unsigned __int32 input_cols, unsigned __int32 output_cols) // 0x100CB900
{
    mangled_assert("expand_right_edge");
    todo("implement");
    _sub_100CB900(image_data, num_rows, input_cols, output_cols);
}

_extern void _sub_100CC200(jpeg_compress_struct *, unsigned char ***, unsigned __int32, unsigned char ***, unsigned __int32);
_static void sep_downsample(jpeg_compress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 in_row_index, unsigned char ***output_buf, unsigned __int32 out_row_group_index) // 0x100CC200
{
    mangled_assert("sep_downsample");
    todo("implement");
    _sub_100CC200(cinfo, input_buf, in_row_index, output_buf, out_row_group_index);
}

_extern void _sub_100CBF10(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, unsigned char **);
_static void int_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data) // 0x100CBF10
{
    mangled_assert("int_downsample");
    todo("implement");
    _sub_100CBF10(cinfo, compptr, input_data, output_data);
}

_extern void _sub_100CB960(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, unsigned char **);
_static void fullsize_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data) // 0x100CB960
{
    mangled_assert("fullsize_downsample");
    todo("implement");
    _sub_100CB960(cinfo, compptr, input_data, output_data);
}

_extern void _sub_100CBB10(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, unsigned char **);
_static void h2v1_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data) // 0x100CBB10
{
    mangled_assert("h2v1_downsample");
    todo("implement");
    _sub_100CBB10(cinfo, compptr, input_data, output_data);
}

_extern void _sub_100CBBA0(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, unsigned char **);
_static void h2v2_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data) // 0x100CBBA0
{
    mangled_assert("h2v2_downsample");
    todo("implement");
    _sub_100CBBA0(cinfo, compptr, input_data, output_data);
}

_extern void _sub_100CBC60(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, unsigned char **);
_static void h2v2_smooth_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data) // 0x100CBC60
{
    mangled_assert("h2v2_smooth_downsample");
    todo("implement");
    _sub_100CBC60(cinfo, compptr, input_data, output_data);
}

_extern void _sub_100CB9A0(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, unsigned char **);
_static void fullsize_smooth_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **input_data, unsigned char **output_data) // 0x100CB9A0
{
    mangled_assert("fullsize_smooth_downsample");
    todo("implement");
    _sub_100CB9A0(cinfo, compptr, input_data, output_data);
}
#endif

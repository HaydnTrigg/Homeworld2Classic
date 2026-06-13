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

struct my_prep_controller
{
    jpeg_c_prep_controller pub; // 0x0
    unsigned char **color_buf[10]; // 0x8
    unsigned __int32 rows_to_go; // 0x30
    __int32 next_buf_row; // 0x34
    __int32 this_row_group; // 0x38
    __int32 next_buf_stop; // 0x3C
};
static_assert(sizeof(my_prep_controller) == 64, "Invalid my_prep_controller size");

typedef my_downsampler *my_downsample_ptr;
typedef void (*downsample1_ptr)(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, unsigned char **);

/* ---------- prototypes */

extern void jinit_c_prep_controller(jpeg_compress_struct *cinfo, unsigned char need_full_buffer);

_static void start_pass_prep(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode);
_static void expand_bottom_edge(unsigned char **image_data, unsigned __int32 num_cols, __int32 input_rows, __int32 output_rows);
_static void pre_process_data(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned __int32 *in_row_ctr, unsigned __int32 in_rows_avail, unsigned char ***output_buf, unsigned __int32 *out_row_group_ctr, unsigned __int32 out_row_groups_avail);
_static void pre_process_context(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned __int32 *in_row_ctr, unsigned __int32 in_rows_avail, unsigned char ***output_buf, unsigned __int32 *out_row_group_ctr, unsigned __int32 out_row_groups_avail);
_static void create_context_buffer(jpeg_compress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CA5B0(jpeg_compress_struct *, unsigned char);
void jinit_c_prep_controller(jpeg_compress_struct *cinfo, unsigned char need_full_buffer) // 0x100CA5B0
{
    mangled_assert("_jinit_c_prep_controller@8");
    todo("implement");
    _sub_100CA5B0(cinfo, need_full_buffer);
}

/* ---------- private code */

_extern void _sub_100CA970(jpeg_compress_struct *, J_BUF_MODE);
_static void start_pass_prep(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode) // 0x100CA970
{
    mangled_assert("start_pass_prep");
    todo("implement");
    _sub_100CA970(cinfo, pass_mode);
}

_extern void _sub_100CA570(unsigned char **, unsigned __int32, __int32, __int32);
_static void expand_bottom_edge(unsigned char **image_data, unsigned __int32 num_cols, __int32 input_rows, __int32 output_rows) // 0x100CA570
{
    mangled_assert("expand_bottom_edge");
    todo("implement");
    _sub_100CA570(image_data, num_cols, input_rows, output_rows);
}

_extern void _sub_100CA820(jpeg_compress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32, unsigned char ***, unsigned __int32 *, unsigned __int32);
_static void pre_process_data(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned __int32 *in_row_ctr, unsigned __int32 in_rows_avail, unsigned char ***output_buf, unsigned __int32 *out_row_group_ctr, unsigned __int32 out_row_groups_avail) // 0x100CA820
{
    mangled_assert("pre_process_data");
    todo("implement");
    _sub_100CA820(cinfo, input_buf, in_row_ctr, in_rows_avail, output_buf, out_row_group_ctr, out_row_groups_avail);
}

_extern void _sub_100CA660(jpeg_compress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32, unsigned char ***, unsigned __int32 *, unsigned __int32);
_static void pre_process_context(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned __int32 *in_row_ctr, unsigned __int32 in_rows_avail, unsigned char ***output_buf, unsigned __int32 *out_row_group_ctr, unsigned __int32 out_row_groups_avail) // 0x100CA660
{
    mangled_assert("pre_process_context");
    todo("implement");
    _sub_100CA660(cinfo, input_buf, in_row_ctr, in_rows_avail, output_buf, out_row_group_ctr, out_row_groups_avail);
}

_extern void _sub_100CA430(jpeg_compress_struct *);
_static void create_context_buffer(jpeg_compress_struct *cinfo) // 0x100CA430
{
    mangled_assert("create_context_buffer");
    todo("implement");
    _sub_100CA430(cinfo);
}
#endif

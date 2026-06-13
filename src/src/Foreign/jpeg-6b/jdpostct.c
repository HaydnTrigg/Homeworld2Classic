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

struct my_post_controller
{
    jpeg_d_post_controller pub; // 0x0
    jvirt_sarray_control *whole_image; // 0x8
    unsigned char **buffer; // 0xC
    unsigned __int32 strip_height; // 0x10
    unsigned __int32 starting_row; // 0x14
    unsigned __int32 next_row; // 0x18
};
static_assert(sizeof(my_post_controller) == 28, "Invalid my_post_controller size");

typedef void (*upsample1_ptr)(jpeg_decompress_struct *, jpeg_component_info *, unsigned char **, unsigned char ***);

/* ---------- prototypes */

extern void jinit_d_post_controller(jpeg_decompress_struct *cinfo, unsigned char need_full_buffer);

_static void start_pass_dpost(jpeg_decompress_struct *cinfo, J_BUF_MODE pass_mode);
_static void post_process_1pass(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);
_static void post_process_prepass(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);
_static void post_process_2pass(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100D0230(jpeg_decompress_struct *, unsigned char);
void jinit_d_post_controller(jpeg_decompress_struct *cinfo, unsigned char need_full_buffer) // 0x100D0230
{
    mangled_assert("_jinit_d_post_controller@8");
    todo("implement");
    _sub_100D0230(cinfo, need_full_buffer);
}

/* ---------- private code */

_extern void _sub_100D0460(jpeg_decompress_struct *, J_BUF_MODE);
_static void start_pass_dpost(jpeg_decompress_struct *cinfo, J_BUF_MODE pass_mode) // 0x100D0460
{
    mangled_assert("start_pass_dpost");
    todo("implement");
    _sub_100D0460(cinfo, pass_mode);
}

_extern void _sub_100D02C0(jpeg_decompress_struct *, unsigned char ***, unsigned __int32 *, unsigned __int32, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void post_process_1pass(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100D02C0
{
    mangled_assert("post_process_1pass");
    todo("implement");
    _sub_100D02C0(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

_extern void _sub_100D03C0(jpeg_decompress_struct *, unsigned char ***, unsigned __int32 *, unsigned __int32, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void post_process_prepass(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100D03C0
{
    mangled_assert("post_process_prepass");
    todo("implement");
    _sub_100D03C0(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}

_extern void _sub_100D0330(jpeg_decompress_struct *, unsigned char ***, unsigned __int32 *, unsigned __int32, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void post_process_2pass(jpeg_decompress_struct *cinfo, unsigned char ***input_buf, unsigned __int32 *in_row_group_ctr, unsigned __int32 in_row_groups_avail, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100D0330
{
    mangled_assert("post_process_2pass");
    todo("implement");
    _sub_100D0330(cinfo, input_buf, in_row_group_ctr, in_row_groups_avail, output_buf, out_row_ctr, out_rows_avail);
}
#endif

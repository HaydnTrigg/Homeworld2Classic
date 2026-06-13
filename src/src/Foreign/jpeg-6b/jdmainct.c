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

struct my_main_controller
{
    jpeg_d_main_controller pub; // 0x0
    unsigned char **buffer[10]; // 0x8
    unsigned char buffer_full; // 0x30
    unsigned __int32 rowgroup_ctr; // 0x34
    unsigned char ***xbuffer[2]; // 0x38
    __int32 whichptr; // 0x40
    __int32 context_state; // 0x44
    unsigned __int32 rowgroups_avail; // 0x48
    unsigned __int32 iMCU_row_ctr; // 0x4C
};
static_assert(sizeof(my_main_controller) == 80, "Invalid my_main_controller size");

/* ---------- prototypes */

extern void jinit_d_main_controller(jpeg_decompress_struct *cinfo, unsigned char need_full_buffer);

_static void alloc_funny_pointers(jpeg_decompress_struct *cinfo);
_static void make_funny_pointers(jpeg_decompress_struct *cinfo);
_static void set_wraparound_pointers(jpeg_decompress_struct *cinfo);
_static void set_bottom_pointers(jpeg_decompress_struct *cinfo);
_static void start_pass_main(jpeg_decompress_struct *cinfo, J_BUF_MODE pass_mode);
_static void process_data_simple_main(jpeg_decompress_struct *cinfo, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);
_static void process_data_context_main(jpeg_decompress_struct *cinfo, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);
_static void process_data_crank_post(jpeg_decompress_struct *cinfo, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CEC60(jpeg_decompress_struct *, unsigned char);
void jinit_d_main_controller(jpeg_decompress_struct *cinfo, unsigned char need_full_buffer) // 0x100CEC60
{
    mangled_assert("_jinit_d_main_controller@8");
    todo("implement");
    _sub_100CEC60(cinfo, need_full_buffer);
}

/* ---------- private code */

_extern void _sub_100CEBA0(jpeg_decompress_struct *);
_static void alloc_funny_pointers(jpeg_decompress_struct *cinfo) // 0x100CEBA0
{
    mangled_assert("alloc_funny_pointers");
    todo("implement");
    _sub_100CEBA0(cinfo);
}

_extern void _sub_100CED40(jpeg_decompress_struct *);
_static void make_funny_pointers(jpeg_decompress_struct *cinfo) // 0x100CED40
{
    mangled_assert("make_funny_pointers");
    todo("implement");
    _sub_100CED40(cinfo);
}

_extern void _sub_100CF0D0(jpeg_decompress_struct *);
_static void set_wraparound_pointers(jpeg_decompress_struct *cinfo) // 0x100CF0D0
{
    mangled_assert("set_wraparound_pointers");
    todo("implement");
    _sub_100CF0D0(cinfo);
}

_extern void _sub_100CF030(jpeg_decompress_struct *);
_static void set_bottom_pointers(jpeg_decompress_struct *cinfo) // 0x100CF030
{
    mangled_assert("set_bottom_pointers");
    todo("implement");
    _sub_100CF030(cinfo);
}

_extern void _sub_100CF1B0(jpeg_decompress_struct *, J_BUF_MODE);
_static void start_pass_main(jpeg_decompress_struct *cinfo, J_BUF_MODE pass_mode) // 0x100CF1B0
{
    mangled_assert("start_pass_main");
    todo("implement");
    _sub_100CF1B0(cinfo, pass_mode);
}

_extern void _sub_100CEFC0(jpeg_decompress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void process_data_simple_main(jpeg_decompress_struct *cinfo, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100CEFC0
{
    mangled_assert("process_data_simple_main");
    todo("implement");
    _sub_100CEFC0(cinfo, output_buf, out_row_ctr, out_rows_avail);
}

_extern void _sub_100CEE70(jpeg_decompress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void process_data_context_main(jpeg_decompress_struct *cinfo, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100CEE70
{
    mangled_assert("process_data_context_main");
    todo("implement");
    _sub_100CEE70(cinfo, output_buf, out_row_ctr, out_rows_avail);
}

_extern void _sub_100CEF90(jpeg_decompress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void process_data_crank_post(jpeg_decompress_struct *cinfo, unsigned char **output_buf, unsigned __int32 *out_row_ctr, unsigned __int32 out_rows_avail) // 0x100CEF90
{
    mangled_assert("process_data_crank_post");
    todo("implement");
    _sub_100CEF90(cinfo, output_buf, out_row_ctr, out_rows_avail);
}
#endif

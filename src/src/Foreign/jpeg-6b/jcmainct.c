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
    jpeg_c_main_controller pub; // 0x0
    unsigned __int32 cur_iMCU_row; // 0x8
    unsigned __int32 rowgroup_ctr; // 0xC
    unsigned char suspended; // 0x10
    J_BUF_MODE pass_mode; // 0x14
    unsigned char **buffer[10]; // 0x18
};
static_assert(sizeof(my_main_controller) == 64, "Invalid my_main_controller size");

typedef my_marker_writer *my_marker_ptr;

/* ---------- prototypes */

extern void jinit_c_main_controller(jpeg_compress_struct *cinfo, unsigned char need_full_buffer);

_static void start_pass_main(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode);
_static void process_data_simple_main(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned __int32 *in_row_ctr, unsigned __int32 in_rows_avail);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CA2B0(jpeg_compress_struct *, unsigned char);
void jinit_c_main_controller(jpeg_compress_struct *cinfo, unsigned char need_full_buffer) // 0x100CA2B0
{
    mangled_assert("_jinit_c_main_controller@8");
    todo("implement");
    _sub_100CA2B0(cinfo, need_full_buffer);
}

/* ---------- private code */

_extern void _sub_100CA3E0(jpeg_compress_struct *, J_BUF_MODE);
_static void start_pass_main(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode) // 0x100CA3E0
{
    mangled_assert("start_pass_main");
    todo("implement");
    _sub_100CA3E0(cinfo, pass_mode);
}

_extern void _sub_100CA340(jpeg_compress_struct *, unsigned char **, unsigned __int32 *, unsigned __int32);
_static void process_data_simple_main(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned __int32 *in_row_ctr, unsigned __int32 in_rows_avail) // 0x100CA340
{
    mangled_assert("process_data_simple_main");
    todo("implement");
    _sub_100CA340(cinfo, input_buf, in_row_ctr, in_rows_avail);
}
#endif

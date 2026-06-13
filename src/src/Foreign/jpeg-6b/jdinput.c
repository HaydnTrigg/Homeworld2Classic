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

struct my_input_controller
{
    jpeg_input_controller pub; // 0x0
    unsigned char inheaders; // 0x14
};
static_assert(sizeof(my_input_controller) == 24, "Invalid my_input_controller size");

/* ---------- prototypes */

extern void jinit_input_controller(jpeg_decompress_struct *cinfo);

_static void initial_setup(jpeg_decompress_struct *cinfo);
_static void per_scan_setup(jpeg_decompress_struct *cinfo);
_static void latch_quant_tables(jpeg_decompress_struct *cinfo);
_static void start_input_pass(jpeg_decompress_struct *cinfo);
_static void finish_input_pass(jpeg_decompress_struct *cinfo);
_static __int32 consume_markers(jpeg_decompress_struct *cinfo);
_static void reset_input_controller(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C6F30(jpeg_decompress_struct *);
void jinit_input_controller(jpeg_decompress_struct *cinfo) // 0x100C6F30
{
    mangled_assert("_jinit_input_controller@4");
    todo("implement");
    _sub_100C6F30(cinfo);
}

/* ---------- private code */

_extern void _sub_100C6D40(jpeg_decompress_struct *);
_static void initial_setup(jpeg_decompress_struct *cinfo) // 0x100C6D40
{
    mangled_assert("initial_setup");
    todo("implement");
    _sub_100C6D40(cinfo);
}

_extern void _sub_100C7010(jpeg_decompress_struct *);
_static void per_scan_setup(jpeg_decompress_struct *cinfo) // 0x100C7010
{
    mangled_assert("per_scan_setup");
    todo("implement");
    _sub_100C7010(cinfo);
}

_extern void _sub_100C6F70(jpeg_decompress_struct *);
_static void latch_quant_tables(jpeg_decompress_struct *cinfo) // 0x100C6F70
{
    mangled_assert("latch_quant_tables");
    todo("implement");
    _sub_100C6F70(cinfo);
}

_extern void _sub_100C7200(jpeg_decompress_struct *);
_static void start_input_pass(jpeg_decompress_struct *cinfo) // 0x100C7200
{
    mangled_assert("start_input_pass");
    todo("implement");
    _sub_100C7200(cinfo);
}

_extern void _sub_100C6D20(jpeg_decompress_struct *);
_static void finish_input_pass(jpeg_decompress_struct *cinfo) // 0x100C6D20
{
    mangled_assert("finish_input_pass");
    todo("implement");
    _sub_100C6D20(cinfo);
}

_extern __int32 _sub_100C6C60(jpeg_decompress_struct *);
_static __int32 consume_markers(jpeg_decompress_struct *cinfo) // 0x100C6C60
{
    mangled_assert("consume_markers");
    todo("implement");
    __int32 __result = _sub_100C6C60(cinfo);
    return __result;
}

_extern void _sub_100C71C0(jpeg_decompress_struct *);
_static void reset_input_controller(jpeg_decompress_struct *cinfo) // 0x100C71C0
{
    mangled_assert("reset_input_controller");
    todo("implement");
    _sub_100C71C0(cinfo);
}
#endif

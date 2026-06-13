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

struct my_decomp_master
{
    jpeg_decomp_master pub; // 0x0
    __int32 pass_number; // 0xC
    unsigned char using_merged_upsample; // 0x10
    jpeg_color_quantizer *quantizer_1pass; // 0x14
    jpeg_color_quantizer *quantizer_2pass; // 0x18
};
static_assert(sizeof(my_decomp_master) == 28, "Invalid my_decomp_master size");

typedef my_upsampler *my_upsample_ptr;

/* ---------- prototypes */

extern void jpeg_calc_output_dimensions(jpeg_decompress_struct *cinfo);
extern void jpeg_new_colormap(jpeg_decompress_struct *cinfo);
extern void jinit_master_decompress(jpeg_decompress_struct *cinfo);

_static unsigned char use_merged_upsample(jpeg_decompress_struct *cinfo);
_static void prepare_range_limit_table(jpeg_decompress_struct *cinfo);
_static void master_selection(jpeg_decompress_struct *cinfo);
_static void prepare_for_output_pass(jpeg_decompress_struct *cinfo);
_static void finish_output_pass(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C8F50(jpeg_decompress_struct *);
void jpeg_calc_output_dimensions(jpeg_decompress_struct *cinfo) // 0x100C8F50
{
    mangled_assert("_jpeg_calc_output_dimensions@4");
    todo("implement");
    _sub_100C8F50(cinfo);
}

_extern void _sub_100C9150(jpeg_decompress_struct *);
void jpeg_new_colormap(jpeg_decompress_struct *cinfo) // 0x100C9150
{
    mangled_assert("_jpeg_new_colormap@4");
    todo("implement");
    _sub_100C9150(cinfo);
}

_extern void _sub_100C8F10(jpeg_decompress_struct *);
void jinit_master_decompress(jpeg_decompress_struct *cinfo) // 0x100C8F10
{
    mangled_assert("_jinit_master_decompress@4");
    todo("implement");
    _sub_100C8F10(cinfo);
}

/* ---------- private code */

_extern unsigned char _sub_100C9570(jpeg_decompress_struct *);
_static unsigned char use_merged_upsample(jpeg_decompress_struct *cinfo) // 0x100C9570
{
    mangled_assert("use_merged_upsample");
    todo("implement");
    unsigned char __result = _sub_100C9570(cinfo);
    return __result;
}

_extern void _sub_100C94E0(jpeg_decompress_struct *);
_static void prepare_range_limit_table(jpeg_decompress_struct *cinfo) // 0x100C94E0
{
    mangled_assert("prepare_range_limit_table");
    todo("implement");
    _sub_100C94E0(cinfo);
}

_extern void _sub_100C91C0(jpeg_decompress_struct *);
_static void master_selection(jpeg_decompress_struct *cinfo) // 0x100C91C0
{
    mangled_assert("master_selection");
    todo("implement");
    _sub_100C91C0(cinfo);
}

_extern void _sub_100C93A0(jpeg_decompress_struct *);
_static void prepare_for_output_pass(jpeg_decompress_struct *cinfo) // 0x100C93A0
{
    mangled_assert("prepare_for_output_pass");
    todo("implement");
    _sub_100C93A0(cinfo);
}

_extern void _sub_100C8EE0(jpeg_decompress_struct *);
_static void finish_output_pass(jpeg_decompress_struct *cinfo) // 0x100C8EE0
{
    mangled_assert("finish_output_pass");
    todo("implement");
    _sub_100C8EE0(cinfo);
}
#endif

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

struct my_color_converter
{
    jpeg_color_converter pub; // 0x0
    __int32 *rgb_ycc_tab; // 0x8
};
static_assert(sizeof(my_color_converter) == 12, "Invalid my_color_converter size");

typedef my_color_converter *my_cconvert_ptr;
typedef __int32 INT32;

/* ---------- prototypes */

extern void jinit_color_converter(jpeg_compress_struct *cinfo);

_static void rgb_ycc_start(jpeg_compress_struct *cinfo);
_static void rgb_ycc_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows);
_static void rgb_gray_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows);
_static void cmyk_ycck_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows);
_static void grayscale_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows);
_static void null_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows);
_static void null_method(jpeg_compress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CB380(jpeg_compress_struct *);
void jinit_color_converter(jpeg_compress_struct *cinfo) // 0x100CB380
{
    mangled_assert("_jinit_color_converter@4");
    todo("implement");
    _sub_100CB380(cinfo);
}

/* ---------- private code */

_extern void _sub_100CB820(jpeg_compress_struct *);
_static void rgb_ycc_start(jpeg_compress_struct *cinfo) // 0x100CB820
{
    mangled_assert("rgb_ycc_start");
    todo("implement");
    _sub_100CB820(cinfo);
}

_extern void _sub_100CB6F0(jpeg_compress_struct *, unsigned char **, unsigned char ***, unsigned __int32, __int32);
_static void rgb_ycc_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows) // 0x100CB6F0
{
    mangled_assert("rgb_ycc_convert");
    todo("implement");
    _sub_100CB6F0(cinfo, input_buf, output_buf, output_row, num_rows);
}

_extern void _sub_100CB630(jpeg_compress_struct *, unsigned char **, unsigned char ***, unsigned __int32, __int32);
_static void rgb_gray_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows) // 0x100CB630
{
    mangled_assert("rgb_gray_convert");
    todo("implement");
    _sub_100CB630(cinfo, input_buf, output_buf, output_row, num_rows);
}

_extern void _sub_100CB1B0(jpeg_compress_struct *, unsigned char **, unsigned char ***, unsigned __int32, __int32);
_static void cmyk_ycck_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows) // 0x100CB1B0
{
    mangled_assert("cmyk_ycck_convert");
    todo("implement");
    _sub_100CB1B0(cinfo, input_buf, output_buf, output_row, num_rows);
}

_extern void _sub_100CB320(jpeg_compress_struct *, unsigned char **, unsigned char ***, unsigned __int32, __int32);
_static void grayscale_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows) // 0x100CB320
{
    mangled_assert("grayscale_convert");
    todo("implement");
    _sub_100CB320(cinfo, input_buf, output_buf, output_row, num_rows);
}

_extern void _sub_100CB590(jpeg_compress_struct *, unsigned char **, unsigned char ***, unsigned __int32, __int32);
_static void null_convert(jpeg_compress_struct *cinfo, unsigned char **input_buf, unsigned char ***output_buf, unsigned __int32 output_row, __int32 num_rows) // 0x100CB590
{
    mangled_assert("null_convert");
    todo("implement");
    _sub_100CB590(cinfo, input_buf, output_buf, output_row, num_rows);
}

_extern void _sub_100CB620(jpeg_compress_struct *);
_static void null_method(jpeg_compress_struct *cinfo) // 0x100CB620
{
    mangled_assert("null_method");
    todo("implement");
    _sub_100CB620(cinfo);
}
#endif

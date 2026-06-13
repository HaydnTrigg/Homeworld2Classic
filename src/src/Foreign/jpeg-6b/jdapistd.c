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

/* ---------- prototypes */

extern unsigned char jpeg_start_decompress(jpeg_decompress_struct *cinfo);
extern unsigned __int32 jpeg_read_scanlines(jpeg_decompress_struct *cinfo, unsigned char **scanlines, unsigned __int32 max_lines);
extern unsigned __int32 jpeg_read_raw_data(jpeg_decompress_struct *cinfo, unsigned char ***data, unsigned __int32 max_lines);
extern unsigned char jpeg_start_output(jpeg_decompress_struct *cinfo, __int32 scan_number);
extern unsigned char jpeg_finish_output(jpeg_decompress_struct *cinfo);

_static unsigned char output_pass_setup(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern unsigned char _sub_100C5560(jpeg_decompress_struct *);
unsigned char jpeg_start_decompress(jpeg_decompress_struct *cinfo) // 0x100C5560
{
    mangled_assert("_jpeg_start_decompress@4");
    todo("implement");
    unsigned char __result = _sub_100C5560(cinfo);
    return __result;
}

_extern unsigned __int32 _sub_100C54D0(jpeg_decompress_struct *, unsigned char **, unsigned __int32);
unsigned __int32 jpeg_read_scanlines(jpeg_decompress_struct *cinfo, unsigned char **scanlines, unsigned __int32 max_lines) // 0x100C54D0
{
    mangled_assert("_jpeg_read_scanlines@12");
    todo("implement");
    unsigned __int32 __result = _sub_100C54D0(cinfo, scanlines, max_lines);
    return __result;
}

_extern unsigned __int32 _sub_100C5420(jpeg_decompress_struct *, unsigned char ***, unsigned __int32);
unsigned __int32 jpeg_read_raw_data(jpeg_decompress_struct *cinfo, unsigned char ***data, unsigned __int32 max_lines) // 0x100C5420
{
    mangled_assert("_jpeg_read_raw_data@12");
    todo("implement");
    unsigned __int32 __result = _sub_100C5420(cinfo, data, max_lines);
    return __result;
}

_extern unsigned char _sub_100C5640(jpeg_decompress_struct *, __int32);
unsigned char jpeg_start_output(jpeg_decompress_struct *cinfo, __int32 scan_number) // 0x100C5640
{
    mangled_assert("_jpeg_start_output@8");
    todo("implement");
    unsigned char __result = _sub_100C5640(cinfo, scan_number);
    return __result;
}

_extern unsigned char _sub_100C5380(jpeg_decompress_struct *);
unsigned char jpeg_finish_output(jpeg_decompress_struct *cinfo) // 0x100C5380
{
    mangled_assert("_jpeg_finish_output@4");
    todo("implement");
    unsigned char __result = _sub_100C5380(cinfo);
    return __result;
}

/* ---------- private code */

_extern unsigned char _sub_100C56A0(jpeg_decompress_struct *);
_static unsigned char output_pass_setup(jpeg_decompress_struct *cinfo) // 0x100C56A0
{
    mangled_assert("output_pass_setup");
    todo("implement");
    unsigned char __result = _sub_100C56A0(cinfo);
    return __result;
}
#endif

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

extern void jpeg_start_compress(jpeg_compress_struct *cinfo, unsigned char write_all_tables);
extern unsigned __int32 jpeg_write_scanlines(jpeg_compress_struct *cinfo, unsigned char **scanlines, unsigned __int32 num_lines);
extern unsigned __int32 jpeg_write_raw_data(jpeg_compress_struct *cinfo, unsigned char ***data, unsigned __int32 num_lines);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C5180(jpeg_compress_struct *, unsigned char);
void jpeg_start_compress(jpeg_compress_struct *cinfo, unsigned char write_all_tables) // 0x100C5180
{
    mangled_assert("_jpeg_start_compress@8");
    todo("implement");
    _sub_100C5180(cinfo, write_all_tables);
}

_extern unsigned __int32 _sub_100C52C0(jpeg_compress_struct *, unsigned char **, unsigned __int32);
unsigned __int32 jpeg_write_scanlines(jpeg_compress_struct *cinfo, unsigned char **scanlines, unsigned __int32 num_lines) // 0x100C52C0
{
    mangled_assert("_jpeg_write_scanlines@12");
    todo("implement");
    unsigned __int32 __result = _sub_100C52C0(cinfo, scanlines, num_lines);
    return __result;
}

_extern unsigned __int32 _sub_100C5200(jpeg_compress_struct *, unsigned char ***, unsigned __int32);
unsigned __int32 jpeg_write_raw_data(jpeg_compress_struct *cinfo, unsigned char ***data, unsigned __int32 num_lines) // 0x100C5200
{
    mangled_assert("_jpeg_write_raw_data@12");
    todo("implement");
    unsigned __int32 __result = _sub_100C5200(cinfo, data, num_lines);
    return __result;
}

/* ---------- private code */
#endif

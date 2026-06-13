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

extern void jpeg_CreateDecompress(jpeg_decompress_struct *cinfo, __int32 version, unsigned __int32 structsize);
extern void jpeg_destroy_decompress(jpeg_decompress_struct *cinfo);
extern void jpeg_abort_decompress(jpeg_decompress_struct *cinfo);
extern __int32 jpeg_read_header(jpeg_decompress_struct *cinfo, unsigned char require_image);
extern __int32 jpeg_consume_input(jpeg_decompress_struct *cinfo);
extern unsigned char jpeg_input_complete(jpeg_decompress_struct *cinfo);
extern unsigned char jpeg_has_multiple_scans(jpeg_decompress_struct *cinfo);
extern unsigned char jpeg_finish_decompress(jpeg_decompress_struct *cinfo);

_static void default_decompress_parms(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C4110(jpeg_decompress_struct *, __int32, unsigned __int32);
void jpeg_CreateDecompress(jpeg_decompress_struct *cinfo, __int32 version, unsigned __int32 structsize) // 0x100C4110
{
    mangled_assert("_jpeg_CreateDecompress@12");
    todo("implement");
    _sub_100C4110(cinfo, version, structsize);
}

_extern void _sub_100C4310(jpeg_decompress_struct *);
void jpeg_destroy_decompress(jpeg_decompress_struct *cinfo) // 0x100C4310
{
    mangled_assert("_jpeg_destroy_decompress@4");
    todo("implement");
    _sub_100C4310(cinfo);
}

_extern void _sub_100C4240(jpeg_decompress_struct *);
void jpeg_abort_decompress(jpeg_decompress_struct *cinfo) // 0x100C4240
{
    mangled_assert("_jpeg_abort_decompress@4");
    todo("implement");
    _sub_100C4240(cinfo);
}

_extern __int32 _sub_100C4460(jpeg_decompress_struct *, unsigned char);
__int32 jpeg_read_header(jpeg_decompress_struct *cinfo, unsigned char require_image) // 0x100C4460
{
    mangled_assert("_jpeg_read_header@8");
    todo("implement");
    __int32 __result = _sub_100C4460(cinfo, require_image);
    return __result;
}

_extern __int32 _sub_100C4250(jpeg_decompress_struct *);
__int32 jpeg_consume_input(jpeg_decompress_struct *cinfo) // 0x100C4250
{
    mangled_assert("_jpeg_consume_input@4");
    todo("implement");
    __int32 __result = _sub_100C4250(cinfo);
    return __result;
}

_extern unsigned char _sub_100C4420(jpeg_decompress_struct *);
unsigned char jpeg_input_complete(jpeg_decompress_struct *cinfo) // 0x100C4420
{
    mangled_assert("_jpeg_input_complete@4");
    todo("implement");
    unsigned char __result = _sub_100C4420(cinfo);
    return __result;
}

_extern unsigned char _sub_100C43E0(jpeg_decompress_struct *);
unsigned char jpeg_has_multiple_scans(jpeg_decompress_struct *cinfo) // 0x100C43E0
{
    mangled_assert("_jpeg_has_multiple_scans@4");
    todo("implement");
    unsigned char __result = _sub_100C43E0(cinfo);
    return __result;
}

_extern unsigned char _sub_100C4320(jpeg_decompress_struct *);
unsigned char jpeg_finish_decompress(jpeg_decompress_struct *cinfo) // 0x100C4320
{
    mangled_assert("_jpeg_finish_decompress@4");
    todo("implement");
    unsigned char __result = _sub_100C4320(cinfo);
    return __result;
}

/* ---------- private code */

_extern void _sub_100C3F40(jpeg_decompress_struct *);
_static void default_decompress_parms(jpeg_decompress_struct *cinfo) // 0x100C3F40
{
    mangled_assert("default_decompress_parms");
    todo("implement");
    _sub_100C3F40(cinfo);
}
#endif

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

typedef unsigned char (*jpeg_marker_parser_method)(jpeg_decompress_struct *);
typedef void (*inverse_DCT_method_ptr)(jpeg_decompress_struct *, jpeg_component_info *, short *, unsigned char **, unsigned __int32);

/* ---------- prototypes */

extern void jpeg_abort(jpeg_common_struct *cinfo);
extern void jpeg_destroy(jpeg_common_struct *cinfo);
extern JQUANT_TBL *jpeg_alloc_quant_table(jpeg_common_struct *cinfo);
extern JHUFF_TBL *jpeg_alloc_huff_table(jpeg_common_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C5770(jpeg_common_struct *);
void jpeg_abort(jpeg_common_struct *cinfo) // 0x100C5770
{
    mangled_assert("_jpeg_abort@4");
    todo("implement");
    _sub_100C5770(cinfo);
}

_extern void _sub_100C57F0(jpeg_common_struct *);
void jpeg_destroy(jpeg_common_struct *cinfo) // 0x100C57F0
{
    mangled_assert("_jpeg_destroy@4");
    todo("implement");
    _sub_100C57F0(cinfo);
}

_extern JQUANT_TBL *_sub_100C57D0(jpeg_common_struct *);
JQUANT_TBL *jpeg_alloc_quant_table(jpeg_common_struct *cinfo) // 0x100C57D0
{
    mangled_assert("_jpeg_alloc_quant_table@4");
    todo("implement");
    JQUANT_TBL * __result = _sub_100C57D0(cinfo);
    return __result;
}

_extern JHUFF_TBL *_sub_100C57B0(jpeg_common_struct *);
JHUFF_TBL *jpeg_alloc_huff_table(jpeg_common_struct *cinfo) // 0x100C57B0
{
    mangled_assert("_jpeg_alloc_huff_table@4");
    todo("implement");
    JHUFF_TBL * __result = _sub_100C57B0(cinfo);
    return __result;
}

/* ---------- private code */
#endif

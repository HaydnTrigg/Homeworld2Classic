#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jerror.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jdct.h"
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

extern void jpeg_idct_islow(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, short *coef_block, unsigned char **output_buf, unsigned __int32 output_col);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100D8B60(jpeg_decompress_struct *, jpeg_component_info *, short *, unsigned char **, unsigned __int32);
void jpeg_idct_islow(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, short *coef_block, unsigned char **output_buf, unsigned __int32 output_col) // 0x100D8B60
{
    mangled_assert("_jpeg_idct_islow@20");
    todo("implement");
    _sub_100D8B60(cinfo, compptr, coef_block, output_buf, output_col);
}

/* ---------- private code */
#endif

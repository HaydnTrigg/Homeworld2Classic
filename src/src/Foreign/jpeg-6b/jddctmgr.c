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

struct my_idct_controller
{
    jpeg_inverse_dct pub; // 0x0
    __int32 cur_method[10]; // 0x2C
};
static_assert(sizeof(my_idct_controller) == 84, "Invalid my_idct_controller size");

/* ---------- prototypes */

extern void jinit_inverse_dct(jpeg_decompress_struct *cinfo);

_static void start_pass(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100D1D80(jpeg_decompress_struct *);
void jinit_inverse_dct(jpeg_decompress_struct *cinfo) // 0x100D1D80
{
    mangled_assert("_jinit_inverse_dct@4");
    todo("implement");
    _sub_100D1D80(cinfo);
}

/* ---------- private code */

_extern void _sub_100D1DF0(jpeg_decompress_struct *);
_static void start_pass(jpeg_decompress_struct *cinfo) // 0x100D1DF0
{
    mangled_assert("start_pass");
    todo("implement");
    _sub_100D1DF0(cinfo);
}
#endif

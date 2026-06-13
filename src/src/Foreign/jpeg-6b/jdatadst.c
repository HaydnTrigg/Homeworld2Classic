#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
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
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jerror.h"
#include <stdio.h>

/* ---------- constants */

/* ---------- definitions */

struct my_destination_mgr
{
    jpeg_destination_mgr pub; // 0x0
    _iobuf *outfile; // 0x14
    unsigned char *buffer; // 0x18
};
static_assert(sizeof(my_destination_mgr) == 28, "Invalid my_destination_mgr size");

/* ---------- prototypes */

extern void jpeg_stdio_dest(jpeg_compress_struct *cinfo, _iobuf *outfile);

_static void init_destination(jpeg_compress_struct *cinfo);
_static unsigned char empty_output_buffer(jpeg_compress_struct *cinfo);
_static void term_destination(jpeg_compress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C4550(jpeg_compress_struct *, _iobuf *);
void jpeg_stdio_dest(jpeg_compress_struct *cinfo, _iobuf *outfile) // 0x100C4550
{
    mangled_assert("_jpeg_stdio_dest@8");
    todo("implement");
    _sub_100C4550(cinfo, outfile);
}

/* ---------- private code */

_extern void _sub_100C4520(jpeg_compress_struct *);
_static void init_destination(jpeg_compress_struct *cinfo) // 0x100C4520
{
    mangled_assert("init_destination");
    todo("implement");
    _sub_100C4520(cinfo);
}

_extern unsigned char _sub_100C44D0(jpeg_compress_struct *);
_static unsigned char empty_output_buffer(jpeg_compress_struct *cinfo) // 0x100C44D0
{
    mangled_assert("empty_output_buffer");
    todo("implement");
    unsigned char __result = _sub_100C44D0(cinfo);
    return __result;
}

_extern void _sub_100C4590(jpeg_compress_struct *);
_static void term_destination(jpeg_compress_struct *cinfo) // 0x100C4590
{
    mangled_assert("term_destination");
    todo("implement");
    _sub_100C4590(cinfo);
}
#endif

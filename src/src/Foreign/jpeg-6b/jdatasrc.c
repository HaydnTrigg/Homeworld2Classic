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

struct my_source_mgr
{
    jpeg_source_mgr pub; // 0x0
    _iobuf *infile; // 0x1C
    unsigned char *buffer; // 0x20
    unsigned char start_of_file; // 0x24
};
static_assert(sizeof(my_source_mgr) == 40, "Invalid my_source_mgr size");

/* ---------- prototypes */

extern void jpeg_stdio_src(jpeg_decompress_struct *cinfo, _iobuf *infile);

_static void init_source(jpeg_decompress_struct *cinfo);
_static unsigned char fill_input_buffer(jpeg_decompress_struct *cinfo);
_static void skip_input_data(jpeg_decompress_struct *cinfo, long num_bytes);
_static void term_source(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C4690(jpeg_decompress_struct *, _iobuf *);
void jpeg_stdio_src(jpeg_decompress_struct *cinfo, _iobuf *infile) // 0x100C4690
{
    mangled_assert("_jpeg_stdio_src@8");
    todo("implement");
    _sub_100C4690(cinfo, infile);
}

/* ---------- private code */

_extern void _sub_100C4680(jpeg_decompress_struct *);
_static void init_source(jpeg_decompress_struct *cinfo) // 0x100C4680
{
    mangled_assert("init_source");
    todo("implement");
    _sub_100C4680(cinfo);
}

_extern unsigned char _sub_100C4600(jpeg_decompress_struct *);
_static unsigned char fill_input_buffer(jpeg_decompress_struct *cinfo) // 0x100C4600
{
    mangled_assert("fill_input_buffer");
    todo("implement");
    unsigned char __result = _sub_100C4600(cinfo);
    return __result;
}

_extern void _sub_100C4700(jpeg_decompress_struct *, long);
_static void skip_input_data(jpeg_decompress_struct *cinfo, long num_bytes) // 0x100C4700
{
    mangled_assert("skip_input_data");
    todo("implement");
    _sub_100C4700(cinfo, num_bytes);
}

_extern void _sub_100C4730(jpeg_decompress_struct *);
_static void term_source(jpeg_decompress_struct *cinfo) // 0x100C4730
{
    mangled_assert("term_source");
    todo("implement");
    _sub_100C4730(cinfo);
}
#endif

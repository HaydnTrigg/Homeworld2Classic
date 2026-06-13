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

struct my_fdct_controller
{
    jpeg_forward_dct pub; // 0x0
    void (*do_dct)(__int32 *); // 0x8
    __int32 *divisors[4]; // 0xC
    void (*do_float_dct)(float *); // 0x1C
    float *float_divisors[4]; // 0x20
};
static_assert(sizeof(my_fdct_controller) == 48, "Invalid my_fdct_controller size");

typedef void (*forward_DCT_method_ptr)(__int32 *);
typedef __int32 DCTELEM;
typedef my_fdct_controller *my_fdct_ptr;
typedef short INT16;
typedef short *JCOEFPTR;
typedef void (*float_DCT_method_ptr)(float *);

/* ---------- prototypes */

extern void jinit_forward_dct(jpeg_compress_struct *cinfo);

_static void start_pass_fdctmgr(jpeg_compress_struct *cinfo);
_static void forward_DCT(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **sample_data, short *coef_blocks[64], unsigned __int32 start_row, unsigned __int32 start_col, unsigned __int32 num_blocks);
_static void forward_DCT_float(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **sample_data, short *coef_blocks[64], unsigned __int32 start_row, unsigned __int32 start_col, unsigned __int32 num_blocks);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100CCD90(jpeg_compress_struct *);
void jinit_forward_dct(jpeg_compress_struct *cinfo) // 0x100CCD90
{
    mangled_assert("_jinit_forward_dct@4");
    todo("implement");
    _sub_100CCD90(cinfo);
}

/* ---------- private code */

_extern void _sub_100CCE40(jpeg_compress_struct *);
_static void start_pass_fdctmgr(jpeg_compress_struct *cinfo) // 0x100CCE40
{
    mangled_assert("start_pass_fdctmgr");
    todo("implement");
    _sub_100CCE40(cinfo);
}

_extern void _sub_100CC290(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, short *[64], unsigned __int32, unsigned __int32, unsigned __int32);
_static void forward_DCT(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **sample_data, short *coef_blocks[64], unsigned __int32 start_row, unsigned __int32 start_col, unsigned __int32 num_blocks) // 0x100CC290
{
    mangled_assert("forward_DCT");
    todo("implement");
    _sub_100CC290(cinfo, compptr, sample_data, coef_blocks, start_row, start_col, num_blocks);
}

_extern void _sub_100CC6F0(jpeg_compress_struct *, jpeg_component_info *, unsigned char **, short *[64], unsigned __int32, unsigned __int32, unsigned __int32);
_static void forward_DCT_float(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned char **sample_data, short *coef_blocks[64], unsigned __int32 start_row, unsigned __int32 start_col, unsigned __int32 num_blocks) // 0x100CC6F0
{
    mangled_assert("forward_DCT_float");
    todo("implement");
    _sub_100CC6F0(cinfo, compptr, sample_data, coef_blocks, start_row, start_col, num_blocks);
}
#endif

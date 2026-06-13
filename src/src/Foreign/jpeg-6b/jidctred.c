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

typedef my_idct_controller *my_idct_ptr;
typedef __int32 IFAST_MULT_TYPE;
typedef __int32 ISLOW_MULT_TYPE;
typedef float FLOAT_MULT_TYPE;

/* ---------- prototypes */

extern void jpeg_idct_4x4(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, short *coef_block, unsigned char **output_buf, unsigned __int32 output_col);
extern void jpeg_idct_2x2(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, short *coef_block, unsigned char **output_buf, unsigned __int32 output_col);
extern void jpeg_idct_1x1(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, short *coef_block, unsigned char **output_buf, unsigned __int32 output_col);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100D9B90(jpeg_decompress_struct *, jpeg_component_info *, short *, unsigned char **, unsigned __int32);
void jpeg_idct_4x4(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, short *coef_block, unsigned char **output_buf, unsigned __int32 output_col) // 0x100D9B90
{
    mangled_assert("_jpeg_idct_4x4@20");
    todo("implement");
    _sub_100D9B90(cinfo, compptr, coef_block, output_buf, output_col);
}

_extern void _sub_100D9930(jpeg_decompress_struct *, jpeg_component_info *, short *, unsigned char **, unsigned __int32);
void jpeg_idct_2x2(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, short *coef_block, unsigned char **output_buf, unsigned __int32 output_col) // 0x100D9930
{
    mangled_assert("_jpeg_idct_2x2@20");
    todo("implement");
    _sub_100D9930(cinfo, compptr, coef_block, output_buf, output_col);
}

_extern void _sub_100D98F0(jpeg_decompress_struct *, jpeg_component_info *, short *, unsigned char **, unsigned __int32);
void jpeg_idct_1x1(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, short *coef_block, unsigned char **output_buf, unsigned __int32 output_col) // 0x100D98F0
{
    mangled_assert("_jpeg_idct_1x1@20");
    todo("implement");
    _sub_100D98F0(cinfo, compptr, coef_block, output_buf, output_col);
}

/* ---------- private code */
#endif

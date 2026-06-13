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

typedef my_coef_controller *my_coef_ptr;
typedef huff_entropy_encoder *huff_entropy_ptr;
typedef my_comp_master *my_master_ptr;
typedef my_prep_controller *my_prep_ptr;

/* ---------- prototypes */

extern long jdiv_round_up(long a, long b);
extern long jround_up(long a, long b);
extern void jcopy_sample_rows(unsigned char **input_array, __int32 source_row, unsigned char **output_array, __int32 dest_row, __int32 num_rows, unsigned __int32 num_cols);
extern void jcopy_block_row(short *input_row[64], short *output_row[64], unsigned __int32 num_blocks);
extern void jzero_far(void *target, unsigned __int32 bytestozero);

/* ---------- globals */

extern __int32 const jpeg_natural_order[0]; // 0x100EB8E8

/* ---------- private variables */

/* ---------- public code */

_extern long _sub_100C9660(long, long);
long jdiv_round_up(long a, long b) // 0x100C9660
{
    mangled_assert("_jdiv_round_up@8");
    todo("implement");
    long __result = _sub_100C9660(a, b);
    return __result;
}

_extern long _sub_100C9680(long, long);
long jround_up(long a, long b) // 0x100C9680
{
    mangled_assert("_jround_up@8");
    todo("implement");
    long __result = _sub_100C9680(a, b);
    return __result;
}

_extern void _sub_100C9610(unsigned char **, __int32, unsigned char **, __int32, __int32, unsigned __int32);
void jcopy_sample_rows(unsigned char **input_array, __int32 source_row, unsigned char **output_array, __int32 dest_row, __int32 num_rows, unsigned __int32 num_cols) // 0x100C9610
{
    mangled_assert("_jcopy_sample_rows@24");
    todo("implement");
    _sub_100C9610(input_array, source_row, output_array, dest_row, num_rows, num_cols);
}

_extern void _sub_100C95F0(short *[64], short *[64], unsigned __int32);
void jcopy_block_row(short *input_row[64], short *output_row[64], unsigned __int32 num_blocks) // 0x100C95F0
{
    mangled_assert("_jcopy_block_row@12");
    todo("implement");
    _sub_100C95F0(input_row, output_row, num_blocks);
}

_extern void _sub_100C96A0(void *, unsigned __int32);
void jzero_far(void *target, unsigned __int32 bytestozero) // 0x100C96A0
{
    mangled_assert("_jzero_far@8");
    todo("implement");
    _sub_100C96A0(target, bytestozero);
}

/* ---------- private code */
#endif

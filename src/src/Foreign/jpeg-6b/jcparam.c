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

typedef phuff_entropy_encoder *phuff_entropy_ptr;

/* ---------- prototypes */

extern void jpeg_add_quant_table(jpeg_compress_struct *cinfo, __int32 which_tbl, unsigned __int32 const *basic_table, __int32 scale_factor, unsigned char force_baseline);
extern void jpeg_set_linear_quality(jpeg_compress_struct *cinfo, __int32 scale_factor, unsigned char force_baseline);
extern __int32 jpeg_quality_scaling(__int32 quality);
extern void jpeg_set_quality(jpeg_compress_struct *cinfo, __int32 quality, unsigned char force_baseline);
extern void jpeg_set_defaults(jpeg_compress_struct *cinfo);
extern void jpeg_default_colorspace(jpeg_compress_struct *cinfo);
extern void jpeg_set_colorspace(jpeg_compress_struct *cinfo, J_COLOR_SPACE colorspace);
extern void jpeg_simple_progression(jpeg_compress_struct *cinfo);

_static void add_huff_table(jpeg_compress_struct *cinfo, JHUFF_TBL **htblptr, unsigned char const *bits, unsigned char const *val);
_static void std_huff_tables(jpeg_compress_struct *cinfo);
_static jpeg_scan_info *fill_a_scan(jpeg_scan_info *scanptr, __int32 ci, __int32 Ss, __int32 Se, __int32 Ah, __int32 Al);
_static jpeg_scan_info *fill_scans(jpeg_scan_info *scanptr, __int32 ncomps, __int32 Ss, __int32 Se, __int32 Ah, __int32 Al);
_static jpeg_scan_info *fill_dc_scans(jpeg_scan_info *scanptr, __int32 ncomps, __int32 Ah, __int32 Al);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C48E0(jpeg_compress_struct *, __int32, unsigned __int32 const *, __int32, unsigned char);
void jpeg_add_quant_table(jpeg_compress_struct *cinfo, __int32 which_tbl, unsigned __int32 const *basic_table, __int32 scale_factor, unsigned char force_baseline) // 0x100C48E0
{
    mangled_assert("_jpeg_add_quant_table@20");
    todo("implement");
    _sub_100C48E0(cinfo, which_tbl, basic_table, scale_factor, force_baseline);
}

_extern void _sub_100C4F20(jpeg_compress_struct *, __int32, unsigned char);
void jpeg_set_linear_quality(jpeg_compress_struct *cinfo, __int32 scale_factor, unsigned char force_baseline) // 0x100C4F20
{
    mangled_assert("_jpeg_set_linear_quality@12");
    todo("implement");
    _sub_100C4F20(cinfo, scale_factor, force_baseline);
}

_extern __int32 _sub_100C4A40(__int32);
__int32 jpeg_quality_scaling(__int32 quality) // 0x100C4A40
{
    mangled_assert("_jpeg_quality_scaling@4");
    todo("implement");
    __int32 __result = _sub_100C4A40(quality);
    return __result;
}

_extern void _sub_100C4F60(jpeg_compress_struct *, __int32, unsigned char);
void jpeg_set_quality(jpeg_compress_struct *cinfo, __int32 quality, unsigned char force_baseline) // 0x100C4F60
{
    mangled_assert("_jpeg_set_quality@12");
    todo("implement");
    _sub_100C4F60(cinfo, quality, force_baseline);
}

_extern void _sub_100C4E30(jpeg_compress_struct *);
void jpeg_set_defaults(jpeg_compress_struct *cinfo) // 0x100C4E30
{
    mangled_assert("_jpeg_set_defaults@4");
    todo("implement");
    _sub_100C4E30(cinfo);
}

_extern void _sub_100C49C0(jpeg_compress_struct *);
void jpeg_default_colorspace(jpeg_compress_struct *cinfo) // 0x100C49C0
{
    mangled_assert("_jpeg_default_colorspace@4");
    todo("implement");
    _sub_100C49C0(cinfo);
}

_extern void _sub_100C4A80(jpeg_compress_struct *, J_COLOR_SPACE);
void jpeg_set_colorspace(jpeg_compress_struct *cinfo, J_COLOR_SPACE colorspace) // 0x100C4A80
{
    mangled_assert("_jpeg_set_colorspace@8");
    todo("implement");
    _sub_100C4A80(cinfo, colorspace);
}

_extern void _sub_100C4F80(jpeg_compress_struct *);
void jpeg_simple_progression(jpeg_compress_struct *cinfo) // 0x100C4F80
{
    mangled_assert("_jpeg_simple_progression@4");
    todo("implement");
    _sub_100C4F80(cinfo);
}

/* ---------- private code */

_extern void _sub_100C4740(jpeg_compress_struct *, JHUFF_TBL **, unsigned char const *, unsigned char const *);
_static void add_huff_table(jpeg_compress_struct *cinfo, JHUFF_TBL **htblptr, unsigned char const *bits, unsigned char const *val) // 0x100C4740
{
    mangled_assert("add_huff_table");
    todo("implement");
    _sub_100C4740(cinfo, htblptr, bits, val);
}

_extern void _sub_100C5120(jpeg_compress_struct *);
_static void std_huff_tables(jpeg_compress_struct *cinfo) // 0x100C5120
{
    mangled_assert("std_huff_tables");
    todo("implement");
    _sub_100C5120(cinfo);
}

_extern jpeg_scan_info *_sub_100C47E0(jpeg_scan_info *, __int32, __int32, __int32, __int32, __int32);
_static jpeg_scan_info *fill_a_scan(jpeg_scan_info *scanptr, __int32 ci, __int32 Ss, __int32 Se, __int32 Ah, __int32 Al) // 0x100C47E0
{
    mangled_assert("fill_a_scan");
    todo("implement");
    jpeg_scan_info * __result = _sub_100C47E0(scanptr, ci, Ss, Se, Ah, Al);
    return __result;
}

_extern jpeg_scan_info *_sub_100C4890(jpeg_scan_info *, __int32, __int32, __int32, __int32, __int32);
_static jpeg_scan_info *fill_scans(jpeg_scan_info *scanptr, __int32 ncomps, __int32 Ss, __int32 Se, __int32 Ah, __int32 Al) // 0x100C4890
{
    mangled_assert("fill_scans");
    todo("implement");
    jpeg_scan_info * __result = _sub_100C4890(scanptr, ncomps, Ss, Se, Ah, Al);
    return __result;
}

_extern jpeg_scan_info *_sub_100C4820(jpeg_scan_info *, __int32, __int32, __int32);
_static jpeg_scan_info *fill_dc_scans(jpeg_scan_info *scanptr, __int32 ncomps, __int32 Ah, __int32 Al) // 0x100C4820
{
    mangled_assert("fill_dc_scans");
    todo("implement");
    jpeg_scan_info * __result = _sub_100C4820(scanptr, ncomps, Ah, Al);
    return __result;
}
#endif

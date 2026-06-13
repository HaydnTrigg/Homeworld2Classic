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

typedef unsigned short wchar_t;
typedef unsigned char ***JSAMPIMAGE;

/* ---------- prototypes */

extern void jpeg_CreateCompress(jpeg_compress_struct *cinfo, __int32 version, unsigned __int32 structsize);
extern void jpeg_destroy_compress(jpeg_compress_struct *cinfo);
extern void jpeg_abort_compress(jpeg_compress_struct *cinfo);
extern void jpeg_suppress_tables(jpeg_compress_struct *cinfo, unsigned char suppress);
extern void jpeg_finish_compress(jpeg_compress_struct *cinfo);
extern void jpeg_write_marker(jpeg_compress_struct *cinfo, __int32 marker, unsigned char const *dataptr, unsigned __int32 datalen);
extern void jpeg_write_m_header(jpeg_compress_struct *cinfo, __int32 marker, unsigned __int32 datalen);
extern void jpeg_write_m_byte(jpeg_compress_struct *cinfo, __int32 val);
extern void jpeg_write_tables(jpeg_compress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C3B10(jpeg_compress_struct *, __int32, unsigned __int32);
void jpeg_CreateCompress(jpeg_compress_struct *cinfo, __int32 version, unsigned __int32 structsize) // 0x100C3B10
{
    mangled_assert("_jpeg_CreateCompress@12");
    todo("implement");
    _sub_100C3B10(cinfo, version, structsize);
}

_extern void _sub_100C3C30(jpeg_compress_struct *);
void jpeg_destroy_compress(jpeg_compress_struct *cinfo) // 0x100C3C30
{
    mangled_assert("_jpeg_destroy_compress@4");
    todo("implement");
    _sub_100C3C30(cinfo);
}

_extern void _sub_100C3C20(jpeg_compress_struct *);
void jpeg_abort_compress(jpeg_compress_struct *cinfo) // 0x100C3C20
{
    mangled_assert("_jpeg_abort_compress@4");
    todo("implement");
    _sub_100C3C20(cinfo);
}

_extern void _sub_100C3D40(jpeg_compress_struct *, unsigned char);
void jpeg_suppress_tables(jpeg_compress_struct *cinfo, unsigned char suppress) // 0x100C3D40
{
    mangled_assert("_jpeg_suppress_tables@8");
    todo("implement");
    _sub_100C3D40(cinfo, suppress);
}

_extern void _sub_100C3C40(jpeg_compress_struct *);
void jpeg_finish_compress(jpeg_compress_struct *cinfo) // 0x100C3C40
{
    mangled_assert("_jpeg_finish_compress@4");
    todo("implement");
    _sub_100C3C40(cinfo);
}

_extern void _sub_100C3E60(jpeg_compress_struct *, __int32, unsigned char const *, unsigned __int32);
void jpeg_write_marker(jpeg_compress_struct *cinfo, __int32 marker, unsigned char const *dataptr, unsigned __int32 datalen) // 0x100C3E60
{
    mangled_assert("_jpeg_write_marker@16");
    todo("implement");
    _sub_100C3E60(cinfo, marker, dataptr, datalen);
}

_extern void _sub_100C3E10(jpeg_compress_struct *, __int32, unsigned __int32);
void jpeg_write_m_header(jpeg_compress_struct *cinfo, __int32 marker, unsigned __int32 datalen) // 0x100C3E10
{
    mangled_assert("_jpeg_write_m_header@12");
    todo("implement");
    _sub_100C3E10(cinfo, marker, datalen);
}

_extern void _sub_100C3DF0(jpeg_compress_struct *, __int32);
void jpeg_write_m_byte(jpeg_compress_struct *cinfo, __int32 val) // 0x100C3DF0
{
    mangled_assert("_jpeg_write_m_byte@8");
    todo("implement");
    _sub_100C3DF0(cinfo, val);
}

_extern void _sub_100C3EE0(jpeg_compress_struct *);
void jpeg_write_tables(jpeg_compress_struct *cinfo) // 0x100C3EE0
{
    mangled_assert("_jpeg_write_tables@4");
    todo("implement");
    _sub_100C3EE0(cinfo);
}

/* ---------- private code */
#endif

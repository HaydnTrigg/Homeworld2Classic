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

struct my_marker_writer
{
    jpeg_marker_writer pub; // 0x0
    unsigned __int32 last_restart_interval; // 0x1C
};
static_assert(sizeof(my_marker_writer) == 32, "Invalid my_marker_writer size");

/* ---------- prototypes */

extern void jinit_marker_writer(jpeg_compress_struct *cinfo);

_static void emit_byte(jpeg_compress_struct *cinfo, __int32 val);
_static void emit_marker(jpeg_compress_struct *cinfo, JPEG_MARKER mark);
_static void emit_2bytes(jpeg_compress_struct *cinfo, __int32 value);
_static __int32 emit_dqt(jpeg_compress_struct *cinfo, __int32 index);
_static void emit_dht(jpeg_compress_struct *cinfo, __int32 index, unsigned char is_ac);
_static void emit_dac(jpeg_compress_struct *cinfo);
_static void emit_dri(jpeg_compress_struct *cinfo);
_static void emit_sof(jpeg_compress_struct *cinfo, JPEG_MARKER code);
_static void emit_sos(jpeg_compress_struct *cinfo);
_static void emit_jfif_app0(jpeg_compress_struct *cinfo);
_static void emit_adobe_app14(jpeg_compress_struct *cinfo);
_static void write_marker_header(jpeg_compress_struct *cinfo, __int32 marker, unsigned __int32 datalen);
_static void write_marker_byte(jpeg_compress_struct *cinfo, __int32 val);
_static void write_file_header(jpeg_compress_struct *cinfo);
_static void write_frame_header(jpeg_compress_struct *cinfo);
_static void write_scan_header(jpeg_compress_struct *cinfo);
_static void write_file_trailer(jpeg_compress_struct *cinfo);
_static void write_tables_only(jpeg_compress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100C5D60(jpeg_compress_struct *);
void jinit_marker_writer(jpeg_compress_struct *cinfo) // 0x100C5D60
{
    mangled_assert("_jinit_marker_writer@4");
    todo("implement");
    _sub_100C5D60(cinfo);
}

/* ---------- private code */

_extern void _sub_100C58E0(jpeg_compress_struct *, __int32);
_static void emit_byte(jpeg_compress_struct *cinfo, __int32 val) // 0x100C58E0
{
    mangled_assert("emit_byte");
    todo("implement");
    _sub_100C58E0(cinfo, val);
}

_extern void _sub_100C5BC0(jpeg_compress_struct *, JPEG_MARKER);
_static void emit_marker(jpeg_compress_struct *cinfo, JPEG_MARKER mark) // 0x100C5BC0
{
    mangled_assert("emit_marker");
    todo("implement");
    _sub_100C5BC0(cinfo, mark);
}

_extern void _sub_100C5820(jpeg_compress_struct *, __int32);
_static void emit_2bytes(jpeg_compress_struct *cinfo, __int32 value) // 0x100C5820
{
    mangled_assert("emit_2bytes");
    todo("implement");
    _sub_100C5820(cinfo, value);
}

_extern __int32 _sub_100C59F0(jpeg_compress_struct *, __int32);
_static __int32 emit_dqt(jpeg_compress_struct *cinfo, __int32 index) // 0x100C59F0
{
    mangled_assert("emit_dqt");
    todo("implement");
    __int32 __result = _sub_100C59F0(cinfo, index);
    return __result;
}

_extern void _sub_100C5930(jpeg_compress_struct *, __int32, unsigned char);
_static void emit_dht(jpeg_compress_struct *cinfo, __int32 index, unsigned char is_ac) // 0x100C5930
{
    mangled_assert("emit_dht");
    todo("implement");
    _sub_100C5930(cinfo, index, is_ac);
}

_extern void _sub_100C5920(jpeg_compress_struct *);
_static void emit_dac(jpeg_compress_struct *cinfo) // 0x100C5920
{
    mangled_assert("emit_dac");
    todo("implement");
    _sub_100C5920(cinfo);
}

_extern void _sub_100C5AF0(jpeg_compress_struct *);
_static void emit_dri(jpeg_compress_struct *cinfo) // 0x100C5AF0
{
    mangled_assert("emit_dri");
    todo("implement");
    _sub_100C5AF0(cinfo);
}

_extern void _sub_100C5BE0(jpeg_compress_struct *, JPEG_MARKER);
_static void emit_sof(jpeg_compress_struct *cinfo, JPEG_MARKER code) // 0x100C5BE0
{
    mangled_assert("emit_sof");
    todo("implement");
    _sub_100C5BE0(cinfo, code);
}

_extern void _sub_100C5C90(jpeg_compress_struct *);
_static void emit_sos(jpeg_compress_struct *cinfo) // 0x100C5C90
{
    mangled_assert("emit_sos");
    todo("implement");
    _sub_100C5C90(cinfo);
}

_extern void _sub_100C5B20(jpeg_compress_struct *);
_static void emit_jfif_app0(jpeg_compress_struct *cinfo) // 0x100C5B20
{
    mangled_assert("emit_jfif_app0");
    todo("implement");
    _sub_100C5B20(cinfo);
}

_extern void _sub_100C5850(jpeg_compress_struct *);
_static void emit_adobe_app14(jpeg_compress_struct *cinfo) // 0x100C5850
{
    mangled_assert("emit_adobe_app14");
    todo("implement");
    _sub_100C5850(cinfo);
}

_extern void _sub_100C5F30(jpeg_compress_struct *, __int32, unsigned __int32);
_static void write_marker_header(jpeg_compress_struct *cinfo, __int32 marker, unsigned __int32 datalen) // 0x100C5F30
{
    mangled_assert("write_marker_header");
    todo("implement");
    _sub_100C5F30(cinfo, marker, datalen);
}

_extern void _sub_100C5F20(jpeg_compress_struct *, __int32);
_static void write_marker_byte(jpeg_compress_struct *cinfo, __int32 val) // 0x100C5F20
{
    mangled_assert("write_marker_byte");
    todo("implement");
    _sub_100C5F20(cinfo, val);
}

_extern void _sub_100C5DC0(jpeg_compress_struct *);
_static void write_file_header(jpeg_compress_struct *cinfo) // 0x100C5DC0
{
    mangled_assert("write_file_header");
    todo("implement");
    _sub_100C5DC0(cinfo);
}

_extern void _sub_100C5E30(jpeg_compress_struct *);
_static void write_frame_header(jpeg_compress_struct *cinfo) // 0x100C5E30
{
    mangled_assert("write_frame_header");
    todo("implement");
    _sub_100C5E30(cinfo);
}

_extern void _sub_100C5F70(jpeg_compress_struct *);
_static void write_scan_header(jpeg_compress_struct *cinfo) // 0x100C5F70
{
    mangled_assert("write_scan_header");
    todo("implement");
    _sub_100C5F70(cinfo);
}

_extern void _sub_100C5E10(jpeg_compress_struct *);
_static void write_file_trailer(jpeg_compress_struct *cinfo) // 0x100C5E10
{
    mangled_assert("write_file_trailer");
    todo("implement");
    _sub_100C5E10(cinfo);
}

_extern void _sub_100C6020(jpeg_compress_struct *);
_static void write_tables_only(jpeg_compress_struct *cinfo) // 0x100C6020
{
    mangled_assert("write_tables_only");
    todo("implement");
    _sub_100C6020(cinfo);
}
#endif

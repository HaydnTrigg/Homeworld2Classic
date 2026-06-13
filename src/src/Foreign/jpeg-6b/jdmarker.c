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

enum JPEG_MARKER
{
    M_SOF0 = 192, // 0x00C0
    M_SOF1 = 193, // 0x00C1
    M_SOF2 = 194, // 0x00C2
    M_SOF3 = 195, // 0x00C3
    M_SOF5 = 197, // 0x00C5
    M_SOF6 = 198, // 0x00C6
    M_SOF7 = 199, // 0x00C7
    M_JPG = 200, // 0x00C8
    M_SOF9 = 201, // 0x00C9
    M_SOF10 = 202, // 0x00CA
    M_SOF11 = 203, // 0x00CB
    M_SOF13 = 205, // 0x00CD
    M_SOF14 = 206, // 0x00CE
    M_SOF15 = 207, // 0x00CF
    M_DHT = 196, // 0x00C4
    M_DAC = 204, // 0x00CC
    M_RST0 = 208, // 0x00D0
    M_RST1 = 209, // 0x00D1
    M_RST2 = 210, // 0x00D2
    M_RST3 = 211, // 0x00D3
    M_RST4 = 212, // 0x00D4
    M_RST5 = 213, // 0x00D5
    M_RST6 = 214, // 0x00D6
    M_RST7 = 215, // 0x00D7
    M_SOI = 216, // 0x00D8
    M_EOI = 217, // 0x00D9
    M_SOS = 218, // 0x00DA
    M_DQT = 219, // 0x00DB
    M_DNL = 220, // 0x00DC
    M_DRI = 221, // 0x00DD
    M_DHP = 222, // 0x00DE
    M_EXP = 223, // 0x00DF
    M_APP0 = 224, // 0x00E0
    M_APP1 = 225, // 0x00E1
    M_APP2 = 226, // 0x00E2
    M_APP3 = 227, // 0x00E3
    M_APP4 = 228, // 0x00E4
    M_APP5 = 229, // 0x00E5
    M_APP6 = 230, // 0x00E6
    M_APP7 = 231, // 0x00E7
    M_APP8 = 232, // 0x00E8
    M_APP9 = 233, // 0x00E9
    M_APP10 = 234, // 0x00EA
    M_APP11 = 235, // 0x00EB
    M_APP12 = 236, // 0x00EC
    M_APP13 = 237, // 0x00ED
    M_APP14 = 238, // 0x00EE
    M_APP15 = 239, // 0x00EF
    M_JPG0 = 240, // 0x00F0
    M_JPG13 = 253, // 0x00FD
    M_COM = 254, // 0x00FE
    M_TEM = 1, // 0x0001
    M_ERROR = 256, // 0x0100
};

/* ---------- definitions */

struct my_marker_reader
{
    jpeg_marker_reader pub; // 0x0
    unsigned char (*process_COM)(jpeg_decompress_struct *); // 0x18
    unsigned char (*process_APPn[16])(jpeg_decompress_struct *); // 0x1C
    unsigned __int32 length_limit_COM; // 0x5C
    unsigned __int32 length_limit_APPn[16]; // 0x60
    jpeg_marker_struct *cur_marker; // 0xA0
    unsigned __int32 bytes_read; // 0xA4
};
static_assert(sizeof(my_marker_reader) == 168, "Invalid my_marker_reader size");

typedef my_source_mgr *my_src_ptr;

/* ---------- prototypes */

extern unsigned char jpeg_resync_to_restart(jpeg_decompress_struct *cinfo, __int32 desired);
extern void jinit_marker_reader(jpeg_decompress_struct *cinfo);
extern void jpeg_save_markers(jpeg_decompress_struct *cinfo, __int32 marker_code, unsigned __int32 length_limit);
extern void jpeg_set_marker_processor(jpeg_decompress_struct *cinfo, __int32 marker_code, unsigned char (*routine)(jpeg_decompress_struct *));

_static unsigned char get_soi(jpeg_decompress_struct *cinfo);
_static unsigned char get_sof(jpeg_decompress_struct *cinfo, unsigned char is_prog, unsigned char is_arith);
_static unsigned char get_sos(jpeg_decompress_struct *cinfo);
_static unsigned char get_dht(jpeg_decompress_struct *cinfo);
_static unsigned char get_dqt(jpeg_decompress_struct *cinfo);
_static unsigned char get_dri(jpeg_decompress_struct *cinfo);
_static void examine_app0(jpeg_decompress_struct *cinfo, unsigned char *data, unsigned __int32 datalen, __int32 remaining);
_static void examine_app14(jpeg_decompress_struct *cinfo, unsigned char *data, unsigned __int32 datalen, __int32 remaining);
_static unsigned char get_interesting_appn(jpeg_decompress_struct *cinfo);
_static unsigned char save_marker(jpeg_decompress_struct *cinfo);
_static unsigned char skip_variable(jpeg_decompress_struct *cinfo);
_static unsigned char next_marker(jpeg_decompress_struct *cinfo);
_static unsigned char first_marker(jpeg_decompress_struct *cinfo);
_static __int32 read_markers(jpeg_decompress_struct *cinfo);
_static unsigned char read_restart_marker(jpeg_decompress_struct *cinfo);
_static void reset_marker_reader(jpeg_decompress_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern unsigned char _sub_100C8460(jpeg_decompress_struct *, __int32);
unsigned char jpeg_resync_to_restart(jpeg_decompress_struct *cinfo, __int32 desired) // 0x100C8460
{
    mangled_assert("_jpeg_resync_to_restart@8");
    todo("implement");
    unsigned char __result = _sub_100C8460(cinfo, desired);
    return __result;
}

_extern void _sub_100C83E0(jpeg_decompress_struct *);
void jinit_marker_reader(jpeg_decompress_struct *cinfo) // 0x100C83E0
{
    mangled_assert("_jinit_marker_reader@4");
    todo("implement");
    _sub_100C83E0(cinfo);
}

_extern void _sub_100C8560(jpeg_decompress_struct *, __int32, unsigned __int32);
void jpeg_save_markers(jpeg_decompress_struct *cinfo, __int32 marker_code, unsigned __int32 length_limit) // 0x100C8560
{
    mangled_assert("_jpeg_save_markers@12");
    todo("implement");
    _sub_100C8560(cinfo, marker_code, length_limit);
}

_extern void _sub_100C8640(jpeg_decompress_struct *, __int32, unsigned char (*)(jpeg_decompress_struct *));
void jpeg_set_marker_processor(jpeg_decompress_struct *cinfo, __int32 marker_code, unsigned char (*routine)(jpeg_decompress_struct *)) // 0x100C8640
{
    mangled_assert("_jpeg_set_marker_processor@12");
    todo("implement");
    _sub_100C8640(cinfo, marker_code, routine);
}

/* ---------- private code */

_extern unsigned char _sub_100C8090(jpeg_decompress_struct *);
_static unsigned char get_soi(jpeg_decompress_struct *cinfo) // 0x100C8090
{
    mangled_assert("get_soi");
    todo("implement");
    unsigned char __result = _sub_100C8090(cinfo);
    return __result;
}

_extern unsigned char _sub_100C7DC0(jpeg_decompress_struct *, unsigned char, unsigned char);
_static unsigned char get_sof(jpeg_decompress_struct *cinfo, unsigned char is_prog, unsigned char is_arith) // 0x100C7DC0
{
    mangled_assert("get_sof");
    todo("implement");
    unsigned char __result = _sub_100C7DC0(cinfo, is_prog, is_arith);
    return __result;
}

_extern unsigned char _sub_100C8130(jpeg_decompress_struct *);
_static unsigned char get_sos(jpeg_decompress_struct *cinfo) // 0x100C8130
{
    mangled_assert("get_sos");
    todo("implement");
    unsigned char __result = _sub_100C8130(cinfo);
    return __result;
}

_extern unsigned char _sub_100C7630(jpeg_decompress_struct *);
_static unsigned char get_dht(jpeg_decompress_struct *cinfo) // 0x100C7630
{
    mangled_assert("get_dht");
    todo("implement");
    unsigned char __result = _sub_100C7630(cinfo);
    return __result;
}

_extern unsigned char _sub_100C7910(jpeg_decompress_struct *);
_static unsigned char get_dqt(jpeg_decompress_struct *cinfo) // 0x100C7910
{
    mangled_assert("get_dqt");
    todo("implement");
    unsigned char __result = _sub_100C7910(cinfo);
    return __result;
}

_extern unsigned char _sub_100C7B80(jpeg_decompress_struct *);
_static unsigned char get_dri(jpeg_decompress_struct *cinfo) // 0x100C7B80
{
    mangled_assert("get_dri");
    todo("implement");
    unsigned char __result = _sub_100C7B80(cinfo);
    return __result;
}

_extern void _sub_100C7240(jpeg_decompress_struct *, unsigned char *, unsigned __int32, __int32);
_static void examine_app0(jpeg_decompress_struct *cinfo, unsigned char *data, unsigned __int32 datalen, __int32 remaining) // 0x100C7240
{
    mangled_assert("examine_app0");
    todo("implement");
    _sub_100C7240(cinfo, data, datalen, remaining);
}

_extern void _sub_100C74C0(jpeg_decompress_struct *, unsigned char *, unsigned __int32, __int32);
_static void examine_app14(jpeg_decompress_struct *cinfo, unsigned char *data, unsigned __int32 datalen, __int32 remaining) // 0x100C74C0
{
    mangled_assert("examine_app14");
    todo("implement");
    _sub_100C74C0(cinfo, data, datalen, remaining);
}

_extern unsigned char _sub_100C7C70(jpeg_decompress_struct *);
_static unsigned char get_interesting_appn(jpeg_decompress_struct *cinfo) // 0x100C7C70
{
    mangled_assert("get_interesting_appn");
    todo("implement");
    unsigned char __result = _sub_100C7C70(cinfo);
    return __result;
}

_extern unsigned char _sub_100C8B40(jpeg_decompress_struct *);
_static unsigned char save_marker(jpeg_decompress_struct *cinfo) // 0x100C8B40
{
    mangled_assert("save_marker");
    todo("implement");
    unsigned char __result = _sub_100C8B40(cinfo);
    return __result;
}

_extern unsigned char _sub_100C8D80(jpeg_decompress_struct *);
_static unsigned char skip_variable(jpeg_decompress_struct *cinfo) // 0x100C8D80
{
    mangled_assert("skip_variable");
    todo("implement");
    unsigned char __result = _sub_100C8D80(cinfo);
    return __result;
}

_extern unsigned char _sub_100C86A0(jpeg_decompress_struct *);
_static unsigned char next_marker(jpeg_decompress_struct *cinfo) // 0x100C86A0
{
    mangled_assert("next_marker");
    todo("implement");
    unsigned char __result = _sub_100C86A0(cinfo);
    return __result;
}

_extern unsigned char _sub_100C7590(jpeg_decompress_struct *);
_static unsigned char first_marker(jpeg_decompress_struct *cinfo) // 0x100C7590
{
    mangled_assert("first_marker");
    todo("implement");
    unsigned char __result = _sub_100C7590(cinfo);
    return __result;
}

_extern __int32 _sub_100C87A0(jpeg_decompress_struct *);
_static __int32 read_markers(jpeg_decompress_struct *cinfo) // 0x100C87A0
{
    mangled_assert("read_markers");
    todo("implement");
    __int32 __result = _sub_100C87A0(cinfo);
    return __result;
}

_extern unsigned char _sub_100C8A70(jpeg_decompress_struct *);
_static unsigned char read_restart_marker(jpeg_decompress_struct *cinfo) // 0x100C8A70
{
    mangled_assert("read_restart_marker");
    todo("implement");
    unsigned char __result = _sub_100C8A70(cinfo);
    return __result;
}

_extern void _sub_100C8B00(jpeg_decompress_struct *);
_static void reset_marker_reader(jpeg_decompress_struct *cinfo) // 0x100C8B00
{
    mangled_assert("reset_marker_reader");
    todo("implement");
    _sub_100C8B00(cinfo);
}
#endif

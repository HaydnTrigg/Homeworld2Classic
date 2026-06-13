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
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jversion.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jerror.h"
#include <stdio.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern jpeg_error_mgr *jpeg_std_error(jpeg_error_mgr *err);

_static void error_exit(jpeg_common_struct *cinfo);
_static void output_message(jpeg_common_struct *cinfo);
_static void emit_message(jpeg_common_struct *cinfo, __int32 msg_level);
_static void format_message(jpeg_common_struct *cinfo, char *buffer);
_static void reset_error_mgr(jpeg_common_struct *cinfo);

/* ---------- globals */

extern char const *const jpeg_std_message_table[125]; // 0x100EA080

/* ---------- private variables */

/* ---------- public code */

_extern jpeg_error_mgr *_sub_100C3A20(jpeg_error_mgr *);
jpeg_error_mgr *jpeg_std_error(jpeg_error_mgr *err) // 0x100C3A20
{
    mangled_assert("_jpeg_std_error@4");
    todo("implement");
    jpeg_error_mgr * __result = _sub_100C3A20(err);
    return __result;
}

/* ---------- private code */

_extern void _sub_100C3950(jpeg_common_struct *);
_static void error_exit(jpeg_common_struct *cinfo) // 0x100C3950
{
    mangled_assert("error_exit");
    todo("implement");
    _sub_100C3950(cinfo);
}

_extern void _sub_100C3A90(jpeg_common_struct *);
_static void output_message(jpeg_common_struct *cinfo) // 0x100C3A90
{
    mangled_assert("output_message");
    todo("implement");
    _sub_100C3A90(cinfo);
}

_extern void _sub_100C3910(jpeg_common_struct *, __int32);
_static void emit_message(jpeg_common_struct *cinfo, __int32 msg_level) // 0x100C3910
{
    mangled_assert("emit_message");
    todo("implement");
    _sub_100C3910(cinfo, msg_level);
}

_extern void _sub_100C3970(jpeg_common_struct *, char *);
_static void format_message(jpeg_common_struct *cinfo, char *buffer) // 0x100C3970
{
    mangled_assert("format_message");
    todo("implement");
    _sub_100C3970(cinfo, buffer);
}

_extern void _sub_100C3AF0(jpeg_common_struct *);
_static void reset_error_mgr(jpeg_common_struct *cinfo) // 0x100C3AF0
{
    mangled_assert("reset_error_mgr");
    todo("implement");
    _sub_100C3AF0(cinfo);
}
#endif

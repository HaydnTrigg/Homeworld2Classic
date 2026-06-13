#if 0
/* ---------- headers */

#include "decomp.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jerror.h"
#include "\HICKORY-PCSHIP\Homeworld2Classic\Src\Src\Foreign\jpeg-6b\jmemsys.h"
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

/* ---------- prototypes */

extern void *jpeg_get_small(jpeg_common_struct *cinfo, unsigned __int32 sizeofobject);
extern void jpeg_free_small(jpeg_common_struct *cinfo, void *object, unsigned __int32 sizeofobject);
extern void *jpeg_get_large(jpeg_common_struct *cinfo, unsigned __int32 sizeofobject);
extern void jpeg_free_large(jpeg_common_struct *cinfo, void *object, unsigned __int32 sizeofobject);
extern long jpeg_mem_available(jpeg_common_struct *cinfo, long min_bytes_needed, long max_bytes_needed, long already_allocated);
extern void jpeg_open_backing_store(jpeg_common_struct *cinfo, backing_store_struct *info, long total_bytes_needed);
extern long jpeg_mem_init(jpeg_common_struct *cinfo);
extern void jpeg_mem_term(jpeg_common_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void *_sub_100C96F0(jpeg_common_struct *, unsigned __int32);
void *jpeg_get_small(jpeg_common_struct *cinfo, unsigned __int32 sizeofobject) // 0x100C96F0
{
    mangled_assert("_jpeg_get_small@8");
    todo("implement");
    void * __result = _sub_100C96F0(cinfo, sizeofobject);
    return __result;
}

_extern void _sub_100C96D0(jpeg_common_struct *, void *, unsigned __int32);
void jpeg_free_small(jpeg_common_struct *cinfo, void *object, unsigned __int32 sizeofobject) // 0x100C96D0
{
    mangled_assert("_jpeg_free_small@12");
    todo("implement");
    _sub_100C96D0(cinfo, object, sizeofobject);
}

_extern void *_sub_100C96E0(jpeg_common_struct *, unsigned __int32);
void *jpeg_get_large(jpeg_common_struct *cinfo, unsigned __int32 sizeofobject) // 0x100C96E0
{
    mangled_assert("_jpeg_get_large@8");
    todo("implement");
    void * __result = _sub_100C96E0(cinfo, sizeofobject);
    return __result;
}

_extern void _sub_100C96C0(jpeg_common_struct *, void *, unsigned __int32);
void jpeg_free_large(jpeg_common_struct *cinfo, void *object, unsigned __int32 sizeofobject) // 0x100C96C0
{
    mangled_assert("_jpeg_free_large@12");
    todo("implement");
    _sub_100C96C0(cinfo, object, sizeofobject);
}

_extern long _sub_100C9700(jpeg_common_struct *, long, long, long);
long jpeg_mem_available(jpeg_common_struct *cinfo, long min_bytes_needed, long max_bytes_needed, long already_allocated) // 0x100C9700
{
    mangled_assert("_jpeg_mem_available@16");
    todo("implement");
    long __result = _sub_100C9700(cinfo, min_bytes_needed, max_bytes_needed, already_allocated);
    return __result;
}

_extern void _sub_100C9730(jpeg_common_struct *, backing_store_struct *, long);
void jpeg_open_backing_store(jpeg_common_struct *cinfo, backing_store_struct *info, long total_bytes_needed) // 0x100C9730
{
    mangled_assert("_jpeg_open_backing_store@12");
    todo("implement");
    _sub_100C9730(cinfo, info, total_bytes_needed);
}

_extern long _sub_100C9710(jpeg_common_struct *);
long jpeg_mem_init(jpeg_common_struct *cinfo) // 0x100C9710
{
    mangled_assert("_jpeg_mem_init@4");
    todo("implement");
    long __result = _sub_100C9710(cinfo);
    return __result;
}

_extern void _sub_100C9720(jpeg_common_struct *);
void jpeg_mem_term(jpeg_common_struct *cinfo) // 0x100C9720
{
    mangled_assert("_jpeg_mem_term@4");
    todo("implement");
    _sub_100C9720(cinfo);
}

/* ---------- private code */
#endif

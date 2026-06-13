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

union small_pool_struct
{
    <unnamed-tag> hdr; // 0x0
    double dummy; // 0x0
};
static_assert(sizeof(small_pool_struct) == 16, "Invalid small_pool_struct size");

union large_pool_struct
{
    <unnamed-tag> hdr; // 0x0
    double dummy; // 0x0
};
static_assert(sizeof(large_pool_struct) == 16, "Invalid large_pool_struct size");

struct my_memory_mgr
{
    jpeg_memory_mgr pub; // 0x0
    small_pool_struct *small_list[2]; // 0x34
    large_pool_struct *large_list[2]; // 0x3C
    jvirt_sarray_control *virt_sarray_list; // 0x44
    jvirt_barray_control *virt_barray_list; // 0x48
    long total_space_allocated; // 0x4C
    unsigned __int32 last_rowsperchunk; // 0x50
};
static_assert(sizeof(my_memory_mgr) == 84, "Invalid my_memory_mgr size");

struct jvirt_sarray_control
{
    unsigned char **mem_buffer; // 0x0
    unsigned __int32 rows_in_array; // 0x4
    unsigned __int32 samplesperrow; // 0x8
    unsigned __int32 maxaccess; // 0xC
    unsigned __int32 rows_in_mem; // 0x10
    unsigned __int32 rowsperchunk; // 0x14
    unsigned __int32 cur_start_row; // 0x18
    unsigned __int32 first_undef_row; // 0x1C
    unsigned char pre_zero; // 0x20
    unsigned char dirty; // 0x21
    unsigned char b_s_open; // 0x22
    jvirt_sarray_control *next; // 0x24
    backing_store_struct b_s_info; // 0x28
};
static_assert(sizeof(jvirt_sarray_control) == 120, "Invalid jvirt_sarray_control size");

typedef backing_store_struct *backing_store_ptr;
typedef my_memory_mgr *my_mem_ptr;
typedef small_pool_struct *small_pool_ptr;
typedef large_pool_struct *large_pool_ptr;
typedef backing_store_struct backing_store_info;

struct jvirt_barray_control
{
    short **mem_buffer[64]; // 0x0
    unsigned __int32 rows_in_array; // 0x4
    unsigned __int32 blocksperrow; // 0x8
    unsigned __int32 maxaccess; // 0xC
    unsigned __int32 rows_in_mem; // 0x10
    unsigned __int32 rowsperchunk; // 0x14
    unsigned __int32 cur_start_row; // 0x18
    unsigned __int32 first_undef_row; // 0x1C
    unsigned char pre_zero; // 0x20
    unsigned char dirty; // 0x21
    unsigned char b_s_open; // 0x22
    jvirt_barray_control *next; // 0x24
    backing_store_struct b_s_info; // 0x28
};
static_assert(sizeof(jvirt_barray_control) == 120, "Invalid jvirt_barray_control size");

/* ---------- prototypes */

extern void jinit_memory_mgr(jpeg_common_struct *cinfo);

_static void out_of_memory(jpeg_common_struct *cinfo, __int32 which);
_static void *alloc_small(jpeg_common_struct *cinfo, __int32 pool_id, unsigned __int32 sizeofobject);
_static void *alloc_large(jpeg_common_struct *cinfo, __int32 pool_id, unsigned __int32 sizeofobject);
_static unsigned char **alloc_sarray(jpeg_common_struct *cinfo, __int32 pool_id, unsigned __int32 samplesperrow, unsigned __int32 numrows);
_static short **alloc_barray(jpeg_common_struct *cinfo, __int32 pool_id, unsigned __int32 blocksperrow, unsigned __int32 numrows)[64];
_static jvirt_sarray_control *request_virt_sarray(jpeg_common_struct *cinfo, __int32 pool_id, unsigned char pre_zero, unsigned __int32 samplesperrow, unsigned __int32 numrows, unsigned __int32 maxaccess);
_static jvirt_barray_control *request_virt_barray(jpeg_common_struct *cinfo, __int32 pool_id, unsigned char pre_zero, unsigned __int32 blocksperrow, unsigned __int32 numrows, unsigned __int32 maxaccess);
_static void realize_virt_arrays(jpeg_common_struct *cinfo);
_static void do_sarray_io(jpeg_common_struct *cinfo, jvirt_sarray_control *ptr, unsigned char writing);
_static void do_barray_io(jpeg_common_struct *cinfo, jvirt_barray_control *ptr, unsigned char writing);
_static unsigned char **access_virt_sarray(jpeg_common_struct *cinfo, jvirt_sarray_control *ptr, unsigned __int32 start_row, unsigned __int32 num_rows, unsigned char writable);
_static short **access_virt_barray(jpeg_common_struct *cinfo, jvirt_barray_control *ptr, unsigned __int32 start_row, unsigned __int32 num_rows, unsigned char writable)[64];
_static void free_pool(jpeg_common_struct *cinfo, __int32 pool_id);
_static void self_destruct(jpeg_common_struct *cinfo);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned __int32 const first_pool_slop[2]; // 0x100EB8C4
    extern unsigned __int32 const extra_pool_slop[2]; // 0x100EB8CC
}

/* ---------- public code */

_extern void _sub_100C6850(jpeg_common_struct *);
void jinit_memory_mgr(jpeg_common_struct *cinfo) // 0x100C6850
{
    mangled_assert("_jinit_memory_mgr@4");
    todo("implement");
    _sub_100C6850(cinfo);
}

/* ---------- private code */

_extern void _sub_100C6990(jpeg_common_struct *, __int32);
_static void out_of_memory(jpeg_common_struct *cinfo, __int32 which) // 0x100C6990
{
    mangled_assert("out_of_memory");
    todo("implement");
    _sub_100C6990(cinfo, which);
}

_extern void *_sub_100C6510(jpeg_common_struct *, __int32, unsigned __int32);
_static void *alloc_small(jpeg_common_struct *cinfo, __int32 pool_id, unsigned __int32 sizeofobject) // 0x100C6510
{
    mangled_assert("alloc_small");
    todo("implement");
    void * __result = _sub_100C6510(cinfo, pool_id, sizeofobject);
    return __result;
}

_extern void *_sub_100C63D0(jpeg_common_struct *, __int32, unsigned __int32);
_static void *alloc_large(jpeg_common_struct *cinfo, __int32 pool_id, unsigned __int32 sizeofobject) // 0x100C63D0
{
    mangled_assert("alloc_large");
    todo("implement");
    void * __result = _sub_100C63D0(cinfo, pool_id, sizeofobject);
    return __result;
}

_extern unsigned char **_sub_100C6470(jpeg_common_struct *, __int32, unsigned __int32, unsigned __int32);
_static unsigned char **alloc_sarray(jpeg_common_struct *cinfo, __int32 pool_id, unsigned __int32 samplesperrow, unsigned __int32 numrows) // 0x100C6470
{
    mangled_assert("alloc_sarray");
    todo("implement");
    unsigned char ** __result = _sub_100C6470(cinfo, pool_id, samplesperrow, numrows);
    return __result;
}

_extern short **_sub_100C6320(jpeg_common_struct *, __int32, unsigned __int32, unsigned __int32)[64];
_static short **alloc_barray(jpeg_common_struct *cinfo, __int32 pool_id, unsigned __int32 blocksperrow, unsigned __int32 numrows)[64] // 0x100C6320
{
    mangled_assert("alloc_barray");
    todo("implement");
    short **[64] __result = _sub_100C6320(cinfo, pool_id, blocksperrow, numrows);
    return __result;
}

_extern jvirt_sarray_control *_sub_100C6BB0(jpeg_common_struct *, __int32, unsigned char, unsigned __int32, unsigned __int32, unsigned __int32);
_static jvirt_sarray_control *request_virt_sarray(jpeg_common_struct *cinfo, __int32 pool_id, unsigned char pre_zero, unsigned __int32 samplesperrow, unsigned __int32 numrows, unsigned __int32 maxaccess) // 0x100C6BB0
{
    mangled_assert("request_virt_sarray");
    todo("implement");
    jvirt_sarray_control * __result = _sub_100C6BB0(cinfo, pool_id, pre_zero, samplesperrow, numrows, maxaccess);
    return __result;
}

_extern jvirt_barray_control *_sub_100C6B40(jpeg_common_struct *, __int32, unsigned char, unsigned __int32, unsigned __int32, unsigned __int32);
_static jvirt_barray_control *request_virt_barray(jpeg_common_struct *cinfo, __int32 pool_id, unsigned char pre_zero, unsigned __int32 blocksperrow, unsigned __int32 numrows, unsigned __int32 maxaccess) // 0x100C6B40
{
    mangled_assert("request_virt_barray");
    todo("implement");
    jvirt_barray_control * __result = _sub_100C6B40(cinfo, pool_id, pre_zero, blocksperrow, numrows, maxaccess);
    return __result;
}

_extern void _sub_100C69B0(jpeg_common_struct *);
_static void realize_virt_arrays(jpeg_common_struct *cinfo) // 0x100C69B0
{
    mangled_assert("realize_virt_arrays");
    todo("implement");
    _sub_100C69B0(cinfo);
}

_extern void _sub_100C66C0(jpeg_common_struct *, jvirt_sarray_control *, unsigned char);
_static void do_sarray_io(jpeg_common_struct *cinfo, jvirt_sarray_control *ptr, unsigned char writing) // 0x100C66C0
{
    mangled_assert("do_sarray_io");
    todo("implement");
    _sub_100C66C0(cinfo, ptr, writing);
}

_extern void _sub_100C6630(jpeg_common_struct *, jvirt_barray_control *, unsigned char);
_static void do_barray_io(jpeg_common_struct *cinfo, jvirt_barray_control *ptr, unsigned char writing) // 0x100C6630
{
    mangled_assert("do_barray_io");
    todo("implement");
    _sub_100C6630(cinfo, ptr, writing);
}

_extern unsigned char **_sub_100C61E0(jpeg_common_struct *, jvirt_sarray_control *, unsigned __int32, unsigned __int32, unsigned char);
_static unsigned char **access_virt_sarray(jpeg_common_struct *cinfo, jvirt_sarray_control *ptr, unsigned __int32 start_row, unsigned __int32 num_rows, unsigned char writable) // 0x100C61E0
{
    mangled_assert("access_virt_sarray");
    todo("implement");
    unsigned char ** __result = _sub_100C61E0(cinfo, ptr, start_row, num_rows, writable);
    return __result;
}

_extern short **_sub_100C60A0(jpeg_common_struct *, jvirt_barray_control *, unsigned __int32, unsigned __int32, unsigned char)[64];
_static short **access_virt_barray(jpeg_common_struct *cinfo, jvirt_barray_control *ptr, unsigned __int32 start_row, unsigned __int32 num_rows, unsigned char writable)[64] // 0x100C60A0
{
    mangled_assert("access_virt_barray");
    todo("implement");
    short **[64] __result = _sub_100C60A0(cinfo, ptr, start_row, num_rows, writable);
    return __result;
}

_extern void _sub_100C6750(jpeg_common_struct *, __int32);
_static void free_pool(jpeg_common_struct *cinfo, __int32 pool_id) // 0x100C6750
{
    mangled_assert("free_pool");
    todo("implement");
    _sub_100C6750(cinfo, pool_id);
}

_extern void _sub_100C6C20(jpeg_common_struct *);
_static void self_destruct(jpeg_common_struct *cinfo) // 0x100C6C20
{
    mangled_assert("self_destruct");
    todo("implement");
    _sub_100C6C20(cinfo);
}
#endif

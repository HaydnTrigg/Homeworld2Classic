#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <exception>
#include <Render\objects\vertexarrayinternal.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <Render\objects\vertexarray.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_types.h>
#include <util\colour.h>
#include <Render\gl\r_defines.h>
#include <Decal\VertexPool.h>
#include <Render\gl\glext.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 const VertexPool::InvalidHandle; // 0x7A63EC

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5C47F2(VertexPool::Data *const);
_inline VertexPool::Data::Data() // 0x5C47F2
{
    mangled_assert("??0Data@VertexPool@@QAE@XZ");
    todo("implement");
    _sub_5C47F2(this);
}

_extern _sub_5C4808(VertexPool *const);
VertexPool::VertexPool() // 0x5C4808
{
    mangled_assert("??0VertexPool@@QAE@XZ");
    todo("implement");
    _sub_5C4808(this);
}

_extern void _sub_5C483C(VertexPool::Data *const);
_inline VertexPool::Data::~Data() // 0x5C483C
{
    mangled_assert("??1Data@VertexPool@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C483C(this);
}

_extern void _sub_5C4844(VertexPool *const);
VertexPool::~VertexPool() // 0x5C4844
{
    mangled_assert("??1VertexPool@@QAE@XZ");
    todo("implement");
    _sub_5C4844(this);
}

_extern void _sub_5C48C7(VertexPool *const, unsigned __int32, unsigned __int32, unsigned __int32);
void VertexPool::Initialize(unsigned __int32, unsigned __int32, unsigned __int32) // 0x5C48C7
{
    mangled_assert("?Initialize@VertexPool@@QAEXIII@Z");
    todo("implement");
    _sub_5C48C7(this, arg, arg, arg);
}

_extern unsigned __int32 _sub_5C49D2(VertexPool *const);
unsigned __int32 VertexPool::NewBlock() // 0x5C49D2
{
    mangled_assert("?NewBlock@VertexPool@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5C49D2(this);
    return __result;
}

_extern void _sub_5C48AE(VertexPool *const, unsigned __int32);
void VertexPool::DelBlock(unsigned __int32) // 0x5C48AE
{
    mangled_assert("?DelBlock@VertexPool@@QAEXI@Z");
    todo("implement");
    _sub_5C48AE(this, arg);
}

_extern void _sub_5C4A21(VertexPool *const, unsigned __int32, FatVertex const *);
void VertexPool::WriteBlock(unsigned __int32, FatVertex const *) // 0x5C4A21
{
    mangled_assert("?WriteBlock@VertexPool@@QAEXIPBUFatVertex@@@Z");
    todo("implement");
    _sub_5C4A21(this, arg, arg);
}

_extern void _sub_5C48A3(VertexPool *const, unsigned __int32);
void VertexPool::Apply(unsigned __int32) // 0x5C48A3
{
    mangled_assert("?Apply@VertexPool@@QAEXI@Z");
    todo("implement");
    _sub_5C48A3(this, arg);
}

_extern void _sub_5C4A16(VertexPool *const);
void VertexPool::Unapply() // 0x5C4A16
{
    mangled_assert("?Unapply@VertexPool@@QAEXXZ");
    todo("implement");
    _sub_5C4A16(this);
}

/* ---------- private code */
#endif

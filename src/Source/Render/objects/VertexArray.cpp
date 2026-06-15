#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <gl\r_macros.h>
#include <Objects\VertexArrayInternal.h>
#include <util\ftoi.h>
#include <Objects\Constructor.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\VertexArray.h>
#include <Objects\Objects.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Objects\options.h>
#include <gl\r_types.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline bool UseVBO();

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

VertexArray *VertexArray::create() // 0x100AD220
{
    mangled_assert("?create@VertexArray@@SGPAV1@XZ");
    todo("implement");
}

_inline bool UseVBO() // 0x100AD110
{
    mangled_assert("?UseVBO@@YG_NXZ");
    todo("implement");
}

VertexArray::VertexArray() // 0x100ACE60
{
    mangled_assert("??0VertexArray@@QAE@XZ");
    todo("implement");
}

VertexArray::~VertexArray() // 0x100ACF20
{
    mangled_assert("??1VertexArray@@UAE@XZ");
    todo("implement");
}

_inline VertexArrayBasic::~VertexArrayBasic() // 0x100ACF80
{
    mangled_assert("??1VertexArrayBasic@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline VertexArrayVBO::~VertexArrayVBO() // 0x100ACFA0
{
    mangled_assert("??1VertexArrayVBO@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void VertexArray::setUsage(VertexArray::Usage) // 0x100AD3D0
{
    mangled_assert("?setUsage@VertexArray@@QAEXW4Usage@1@@Z");
    todo("implement");
}

void VertexArray::clear() // 0x100AD1A0
{
    mangled_assert("?clear@VertexArray@@QAEXXZ");
    todo("implement");
}

void VertexArray::set(unsigned __int32, FatVertex const *, unsigned __int32) // 0x100AD340
{
    mangled_assert("?set@VertexArray@@QAEXIPBUFatVertex@@I@Z");
    todo("implement");
}

void VertexArray::own(unsigned __int32, FatVertex *, unsigned __int32) // 0x100AD2E0
{
    mangled_assert("?own@VertexArray@@QAEXIPAUFatVertex@@I@Z");
    todo("implement");
}

bool VertexArray::optimize(bool) // 0x100AD260
{
    mangled_assert("?optimize@VertexArray@@QAE_N_N@Z");
    todo("implement");
}

void VertexArray::writeVertexRange(unsigned __int32, unsigned __int32, FatVertex *) // 0x100AD470
{
    mangled_assert("?writeVertexRange@VertexArray@@QAEXIIPAUFatVertex@@@Z");
    todo("implement");
}

VertexBufferDescriptor const *VertexArray::lock(__int32, __int32) // 0x100AD230
{
    mangled_assert("?lock@VertexArray@@QAEPBUVertexBufferDescriptor@@HH@Z");
    todo("implement");
}

bool VertexArray::unlock(__int32, __int32) // 0x100AD440
{
    mangled_assert("?unlock@VertexArray@@QAE_NHH@Z");
    todo("implement");
}

void VertexArray::setRange(__int32, __int32) // 0x100AD3A0
{
    mangled_assert("?setRange@VertexArray@@QAEXHH@Z");
    todo("implement");
}

bool VertexArray::apply(unsigned __int32) // 0x100AD120
{
    mangled_assert("?apply@VertexArray@@QAE_NI@Z");
    todo("implement");
}

bool VertexArray::unapply() // 0x100AD400
{
    mangled_assert("?unapply@VertexArray@@QAE_NXZ");
    todo("implement");
}

bool VertexArray::reapply(unsigned __int32) // 0x100AD310
{
    mangled_assert("?reapply@VertexArray@@QAE_NI@Z");
    todo("implement");
}

/* ---------- private code */
#endif

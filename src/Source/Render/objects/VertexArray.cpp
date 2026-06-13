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

_extern VertexArray *_sub_100AD220();
VertexArray *VertexArray::create() // 0x100AD220
{
    mangled_assert("?create@VertexArray@@SGPAV1@XZ");
    todo("implement");
    VertexArray * __result = _sub_100AD220();
    return __result;
}

_extern bool _sub_100AD110();
_inline bool UseVBO() // 0x100AD110
{
    mangled_assert("?UseVBO@@YG_NXZ");
    todo("implement");
    bool __result = _sub_100AD110();
    return __result;
}

_extern _sub_100ACE60(VertexArray *const);
VertexArray::VertexArray() // 0x100ACE60
{
    mangled_assert("??0VertexArray@@QAE@XZ");
    todo("implement");
    _sub_100ACE60(this);
}

_extern void _sub_100ACF20(VertexArray *const);
VertexArray::~VertexArray() // 0x100ACF20
{
    mangled_assert("??1VertexArray@@UAE@XZ");
    todo("implement");
    _sub_100ACF20(this);
}

_extern void _sub_100ACF80(VertexArrayBasic *const);
_inline VertexArrayBasic::~VertexArrayBasic() // 0x100ACF80
{
    mangled_assert("??1VertexArrayBasic@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100ACF80(this);
}

_extern void _sub_100ACFA0(VertexArrayVBO *const);
_inline VertexArrayVBO::~VertexArrayVBO() // 0x100ACFA0
{
    mangled_assert("??1VertexArrayVBO@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100ACFA0(this);
}

_extern void _sub_100AD3D0(VertexArray *const, VertexArray::Usage);
void VertexArray::setUsage(VertexArray::Usage) // 0x100AD3D0
{
    mangled_assert("?setUsage@VertexArray@@QAEXW4Usage@1@@Z");
    todo("implement");
    _sub_100AD3D0(this, arg);
}

_extern void _sub_100AD1A0(VertexArray *const);
void VertexArray::clear() // 0x100AD1A0
{
    mangled_assert("?clear@VertexArray@@QAEXXZ");
    todo("implement");
    _sub_100AD1A0(this);
}

_extern void _sub_100AD340(VertexArray *const, unsigned __int32, FatVertex const *, unsigned __int32);
void VertexArray::set(unsigned __int32, FatVertex const *, unsigned __int32) // 0x100AD340
{
    mangled_assert("?set@VertexArray@@QAEXIPBUFatVertex@@I@Z");
    todo("implement");
    _sub_100AD340(this, arg, arg, arg);
}

_extern void _sub_100AD2E0(VertexArray *const, unsigned __int32, FatVertex *, unsigned __int32);
void VertexArray::own(unsigned __int32, FatVertex *, unsigned __int32) // 0x100AD2E0
{
    mangled_assert("?own@VertexArray@@QAEXIPAUFatVertex@@I@Z");
    todo("implement");
    _sub_100AD2E0(this, arg, arg, arg);
}

_extern bool _sub_100AD260(VertexArray *const, bool);
bool VertexArray::optimize(bool) // 0x100AD260
{
    mangled_assert("?optimize@VertexArray@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_100AD260(this, arg);
    return __result;
}

_extern void _sub_100AD470(VertexArray *const, unsigned __int32, unsigned __int32, FatVertex *);
void VertexArray::writeVertexRange(unsigned __int32, unsigned __int32, FatVertex *) // 0x100AD470
{
    mangled_assert("?writeVertexRange@VertexArray@@QAEXIIPAUFatVertex@@@Z");
    todo("implement");
    _sub_100AD470(this, arg, arg, arg);
}

_extern VertexBufferDescriptor const *_sub_100AD230(VertexArray *const, __int32, __int32);
VertexBufferDescriptor const *VertexArray::lock(__int32, __int32) // 0x100AD230
{
    mangled_assert("?lock@VertexArray@@QAEPBUVertexBufferDescriptor@@HH@Z");
    todo("implement");
    VertexBufferDescriptor const * __result = _sub_100AD230(this, arg, arg);
    return __result;
}

_extern bool _sub_100AD440(VertexArray *const, __int32, __int32);
bool VertexArray::unlock(__int32, __int32) // 0x100AD440
{
    mangled_assert("?unlock@VertexArray@@QAE_NHH@Z");
    todo("implement");
    bool __result = _sub_100AD440(this, arg, arg);
    return __result;
}

_extern void _sub_100AD3A0(VertexArray *const, __int32, __int32);
void VertexArray::setRange(__int32, __int32) // 0x100AD3A0
{
    mangled_assert("?setRange@VertexArray@@QAEXHH@Z");
    todo("implement");
    _sub_100AD3A0(this, arg, arg);
}

_extern bool _sub_100AD120(VertexArray *const, unsigned __int32);
bool VertexArray::apply(unsigned __int32) // 0x100AD120
{
    mangled_assert("?apply@VertexArray@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_100AD120(this, arg);
    return __result;
}

_extern bool _sub_100AD400(VertexArray *const);
bool VertexArray::unapply() // 0x100AD400
{
    mangled_assert("?unapply@VertexArray@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_100AD400(this);
    return __result;
}

_extern bool _sub_100AD310(VertexArray *const, unsigned __int32);
bool VertexArray::reapply(unsigned __int32) // 0x100AD310
{
    mangled_assert("?reapply@VertexArray@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_100AD310(this, arg);
    return __result;
}

/* ---------- private code */
#endif

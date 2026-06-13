#if 0
/* ---------- headers */

#include "decomp.h"
#include <xhash>
#include <xlocale>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <limits>
#include <memory\memorylib.h>
#include <gl\r_defines.h>
#include <ymath.h>
#include <malloc.h>
#include <gl\glext.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <gl\r_macros.h>
#include <util\ftoi.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <new>
#include <nmmintrin.h>
#include <exception>
#include <smmintrin.h>
#include <xstddef>
#include <cstddef>
#include <tmmintrin.h>
#include <type_traits>
#include <stddef.h>
#include <yvals.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xkeycheck.h>
#include <Mathlib\matrix4.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <Mathlib\vector3.h>
#include <mmintrin.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <crtdbg.h>
#include <share.h>
#include <Mathlib\matrix3.h>
#include <compiler\compilerconfig.h>
#include <cmath>
#include <math.h>
#include <xrefwrap>
#include <list>
#include <string.h>
#include <wtime.inl>
#include <map>
#include <xtree>
#include <xdebug>
#include <typeinfo>
#include <xfacet>
#include <memory.h>
#include <cassert>
#include <assert.h>
#include <cstdio>
#include <cfloat>
#include <stdio.h>
#include <float.h>
#include <algorithm>
#include <crtwrn.h>
#include <util\types.h>
#include <xtr1common>
#include <platform\osdef.h>
#include <ammintrin.h>
#include <eh.h>
#include <mm3dnow.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <gl\lotypes.h>
#include <Objects\VertexArrayInternal.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <debug\db.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <locale.h>
#include <system_error>
#include <stdlib.h>
#include <cerrno>
#include <limits.h>
#include <errno.h>
#include <cstring>
#include <intrin.h>
#include <cwchar>
#include <cstdlib>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <iterator>
#include <swprintf.inl>
#include <istream>
#include <ostream>
#include <ios>
#include <xlocnum>
#include <climits>
#include <xtgmath.h>
#include <streambuf>
#include <hash_map>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void doWriteVertexRange(unsigned __int32 mask, __int32 start, __int32 count, VertexBufferDescriptor const *vbInfo, FatVertex *fatData);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x101A2D59
    extern std::allocator_arg_t allocator_arg; // 0x101A2D58
}

/* ---------- public code */

_extern _sub_100AD4C0(VertexArrayVBO *const);
VertexArrayVBO::VertexArrayVBO() // 0x100AD4C0
{
    mangled_assert("??0VertexArrayVBO@@QAE@XZ");
    todo("implement");
    _sub_100AD4C0(this);
}

_extern void _sub_100ADA90(VertexArrayVBO *const, VertexBufferObjectUsage);
void VertexArrayVBO::setUsage(VertexBufferObjectUsage) // 0x100ADA90
{
    mangled_assert("?setUsage@VertexArrayVBO@@QAEXW4VertexBufferObjectUsage@@@Z");
    todo("implement");
    _sub_100ADA90(this, arg);
}

_extern void _sub_100AD5C0(VertexArrayVBO *const, rndTable &, unsigned __int32, __int32);
void VertexArrayVBO::create(rndTable &, unsigned __int32, __int32) // 0x100AD5C0
{
    mangled_assert("?create@VertexArrayVBO@@UAEXAAUrndTable@@IH@Z");
    todo("implement");
    _sub_100AD5C0(this, arg, arg, arg);
}

_extern void _sub_100AD610(VertexArrayVBO *const, rndTable &);
void VertexArrayVBO::destroy(rndTable &) // 0x100AD610
{
    mangled_assert("?destroy@VertexArrayVBO@@UAEXAAUrndTable@@@Z");
    todo("implement");
    _sub_100AD610(this, arg);
}

_extern VertexBufferDescriptor const *_sub_100AD9D0(VertexArrayVBO *const, rndTable &, unsigned __int32, __int32, __int32);
VertexBufferDescriptor const *VertexArrayVBO::lock(rndTable &, unsigned __int32, __int32, __int32) // 0x100AD9D0
{
    mangled_assert("?lock@VertexArrayVBO@@UAEPBUVertexBufferDescriptor@@AAUrndTable@@IHH@Z");
    todo("implement");
    VertexBufferDescriptor const * __result = _sub_100AD9D0(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_100ADB00(VertexArrayVBO *const, rndTable &, unsigned __int32, __int32, __int32);
bool VertexArrayVBO::unlock(rndTable &, unsigned __int32, __int32, __int32) // 0x100ADB00
{
    mangled_assert("?unlock@VertexArrayVBO@@UAE_NAAUrndTable@@IHH@Z");
    todo("implement");
    bool __result = _sub_100ADB00(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_100AD540(VertexArrayVBO *const, rndTable &, unsigned __int32, __int32, __int32);
bool VertexArrayVBO::apply(rndTable &, unsigned __int32, __int32, __int32) // 0x100AD540
{
    mangled_assert("?apply@VertexArrayVBO@@UAE_NAAUrndTable@@IHH@Z");
    todo("implement");
    bool __result = _sub_100AD540(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_100ADAC0(VertexArrayVBO *const, rndTable &, unsigned __int32);
bool VertexArrayVBO::unapply(rndTable &, unsigned __int32) // 0x100ADAC0
{
    mangled_assert("?unapply@VertexArrayVBO@@UAE_NAAUrndTable@@I@Z");
    todo("implement");
    bool __result = _sub_100ADAC0(this, arg, arg);
    return __result;
}

_extern bool _sub_100ADA70(VertexArrayVBO *const, rndTable &, unsigned __int32);
bool VertexArrayVBO::reapply(rndTable &, unsigned __int32) // 0x100ADA70
{
    mangled_assert("?reapply@VertexArrayVBO@@UAE_NAAUrndTable@@I@Z");
    todo("implement");
    bool __result = _sub_100ADA70(this, arg, arg);
    return __result;
}

_extern void _sub_100ADB70(VertexArrayVBO *const, rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *);
void VertexArrayVBO::writeVertexRange(rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *) // 0x100ADB70
{
    mangled_assert("?writeVertexRange@VertexArrayVBO@@UAEXAAUrndTable@@IHIIPAUFatVertex@@@Z");
    todo("implement");
    _sub_100ADB70(this, arg, arg, arg, arg, arg, arg);
}

_extern _sub_100AD4A0(VertexArrayBasic *const);
VertexArrayBasic::VertexArrayBasic() // 0x100AD4A0
{
    mangled_assert("??0VertexArrayBasic@@QAE@XZ");
    todo("implement");
    _sub_100AD4A0(this);
}

_extern _sub_100AD4B0(VertexArrayI *const);
_inline VertexArrayI::VertexArrayI() // 0x100AD4B0
{
    mangled_assert("??0VertexArrayI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100AD4B0(this);
}

_extern void _sub_100AD590(VertexArrayBasic *const, rndTable &, unsigned __int32, __int32);
void VertexArrayBasic::create(rndTable &, unsigned __int32, __int32) // 0x100AD590
{
    mangled_assert("?create@VertexArrayBasic@@UAEXAAUrndTable@@IH@Z");
    todo("implement");
    _sub_100AD590(this, arg, arg, arg);
}

_extern void _sub_100AD5E0(VertexArrayBasic *const, rndTable &);
void VertexArrayBasic::destroy(rndTable &) // 0x100AD5E0
{
    mangled_assert("?destroy@VertexArrayBasic@@UAEXAAUrndTable@@@Z");
    todo("implement");
    _sub_100AD5E0(this, arg);
}

_extern VertexBufferDescriptor const *_sub_100AD9B0(VertexArrayBasic *const, rndTable &, unsigned __int32, __int32, __int32);
VertexBufferDescriptor const *VertexArrayBasic::lock(rndTable &, unsigned __int32, __int32, __int32) // 0x100AD9B0
{
    mangled_assert("?lock@VertexArrayBasic@@UAEPBUVertexBufferDescriptor@@AAUrndTable@@IHH@Z");
    todo("implement");
    VertexBufferDescriptor const * __result = _sub_100AD9B0(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_100ADAE0(VertexArrayBasic *const, rndTable &, unsigned __int32, __int32, __int32);
bool VertexArrayBasic::unlock(rndTable &, unsigned __int32, __int32, __int32) // 0x100ADAE0
{
    mangled_assert("?unlock@VertexArrayBasic@@UAE_NAAUrndTable@@IHH@Z");
    todo("implement");
    bool __result = _sub_100ADAE0(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_100AD520(VertexArrayBasic *const, rndTable &, unsigned __int32, __int32, __int32);
bool VertexArrayBasic::apply(rndTable &, unsigned __int32, __int32, __int32) // 0x100AD520
{
    mangled_assert("?apply@VertexArrayBasic@@UAE_NAAUrndTable@@IHH@Z");
    todo("implement");
    bool __result = _sub_100AD520(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_100ADAA0(VertexArrayBasic *const, rndTable &, unsigned __int32);
bool VertexArrayBasic::unapply(rndTable &, unsigned __int32) // 0x100ADAA0
{
    mangled_assert("?unapply@VertexArrayBasic@@UAE_NAAUrndTable@@I@Z");
    todo("implement");
    bool __result = _sub_100ADAA0(this, arg, arg);
    return __result;
}

_extern bool _sub_100ADA50(VertexArrayBasic *const, rndTable &, unsigned __int32);
bool VertexArrayBasic::reapply(rndTable &, unsigned __int32) // 0x100ADA50
{
    mangled_assert("?reapply@VertexArrayBasic@@UAE_NAAUrndTable@@I@Z");
    todo("implement");
    bool __result = _sub_100ADA50(this, arg, arg);
    return __result;
}

_extern void _sub_100ADB20(VertexArrayBasic *const, rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *);
void VertexArrayBasic::writeVertexRange(rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *) // 0x100ADB20
{
    mangled_assert("?writeVertexRange@VertexArrayBasic@@UAEXAAUrndTable@@IHIIPAUFatVertex@@@Z");
    todo("implement");
    _sub_100ADB20(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_100AD640(unsigned __int32, __int32, __int32, VertexBufferDescriptor const *, FatVertex *);
void doWriteVertexRange(unsigned __int32 mask, __int32 start, __int32 count, VertexBufferDescriptor const *vbInfo, FatVertex *fatData) // 0x100AD640
{
    mangled_assert("?doWriteVertexRange@@YGXIHHPBUVertexBufferDescriptor@@PAUFatVertex@@@Z");
    todo("implement");
    _sub_100AD640(mask, start, count, vbInfo, fatData);
}

/* ---------- private code */
#endif

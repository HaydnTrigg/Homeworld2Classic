#if 0
/* ---------- headers */

#include "decomp.h"
#include <xhash>
#include <xlocale>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <gl\r_defines.h>
#include <limits>
#include <memory\memorylib.h>
#include <gl\glext.h>
#include <ymath.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <debug\ctassert.h>
#include <immintrin.h>
#include <wmmintrin.h>
#include <new>
#include <nmmintrin.h>
#include <exception>
#include <smmintrin.h>
#include <xstddef>
#include <cstddef>
#include <Mathlib\vector3.h>
#include <tmmintrin.h>
#include <type_traits>
#include <stddef.h>
#include <yvals.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xkeycheck.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <boost\shared_ptr.hpp>
#include <Mathlib\matrix3.h>
#include <vector>
#include <iosfwd>
#include <boost\config.hpp>
#include <xmemory>
#include <crtdbg.h>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <share.h>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <Objects\StateBlock\stateblocktypes.h>
#include <compiler\compilerconfig.h>
#include <boost\config\platform\win32.hpp>
#include <cmath>
#include <math.h>
#include <xrefwrap>
#include <list>
#include <string.h>
#include <wtime.inl>
#include <Objects\TextureRegistry.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <boost\detail\workaround.hpp>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <map>
#include <tuple>
#include <xtree>
#include <xdebug>
#include <typeinfo>
#include <boost\config\suffix.hpp>
#include <boost\assert.hpp>
#include <xfacet>
#include <boost\checked_delete.hpp>
#include <memory.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector4.h>
#include <cassert>
#include <assert.h>
#include <cstdio>
#include <cfloat>
#include <stdio.h>
#include <float.h>
#include <algorithm>
#include <crtwrn.h>
#include <profile\profile.h>
#include <util\types.h>
#include <iostream>
#include <xtr1common>
#include <boost\throw_exception.hpp>
#include <platform\osdef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <ammintrin.h>
#include <eh.h>
#include <mm3dnow.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\matvec.h>
#include <Objects\Texture.h>
#include <Objects\Objects.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <Mathlib\vector2.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <debug\db.h>
#include <gl\r_types.h>
#include <Objects\StateBlock\stateBlock.h>
#include <bitset>
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
#include <memory>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <stdint.h>
#include <iterator>
#include <swprintf.inl>
#include <istream>
#include <ostream>
#include <ios>
#include <functional>
#include <xlocnum>
#include <xfunctional>
#include <climits>
#include <xtgmath.h>
#include <streambuf>
#include <hash_map>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void drawHyperspacePlane(rndTable const &gl, CompoundStateBlock *block, vector2 const &size, matrix4 const &mtx, __int32 const xRepeat, __int32 const yRepeat, unsigned __int32 const positionID, unsigned __int32 const divisionLevel);
extern void drawHyperspaceStencil(rndTable const &gl, CompoundStateBlock *block);

_static void _actualDrawHyperspacePlane(rndTable const &gl, vector2 const &size, matrix4 const &mtx, __int32 const xRepeat, __int32 const yRepeat, unsigned __int32 const positionID, unsigned __int32 const divisionLevel);
_static void _drawFullScreenQuad(rndTable const &gl);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132AB7
    extern std::allocator_arg_t allocator_arg; // 0x10132AB6
    extern std::_Nil _Nil_obj; // 0x10132AB8
    extern std::_Ignore ignore; // 0x10132AB5
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132AB4
}

/* ---------- public code */

void drawHyperspacePlane(rndTable const &gl, CompoundStateBlock *block, vector2 const &size, matrix4 const &mtx, __int32 const xRepeat, __int32 const yRepeat, unsigned __int32 const positionID, unsigned __int32 const divisionLevel) // 0x10060120
{
    mangled_assert("?drawHyperspacePlane@@YGXABUrndTable@@PAVCompoundStateBlock@@ABVvector2@@ABVmatrix4@@HHII@Z");
    todo("implement");
}

void drawHyperspaceStencil(rndTable const &gl, CompoundStateBlock *block) // 0x10060340
{
    mangled_assert("?drawHyperspaceStencil@@YGXABUrndTable@@PAVCompoundStateBlock@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void _actualDrawHyperspacePlane(rndTable const &gl, vector2 const &size, matrix4 const &mtx, __int32 const xRepeat, __int32 const yRepeat, unsigned __int32 const positionID, unsigned __int32 const divisionLevel) // 0x1005FB50
{
    mangled_assert("_actualDrawHyperspacePlane");
    todo("implement");
}

_static void _drawFullScreenQuad(rndTable const &gl) // 0x1005FFE0
{
    mangled_assert("_drawFullScreenQuad");
    todo("implement");
}
#endif

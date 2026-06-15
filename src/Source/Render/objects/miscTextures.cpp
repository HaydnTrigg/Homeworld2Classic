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
#include <ymath.h>
#include <malloc.h>
#include <gl\r_defines.h>
#include <crtdefs.h>
#include <gl\glext.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
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
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <debug\ctmessage.h>
#include <Mathlib\matrix4.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <Objects\Texture.h>
#include <mmintrin.h>
#include <Objects\Core.h>
#include <Mathlib\vector3.h>
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
#include <Objects\TextureRegistry.h>
#include <Objects\miscTextures.h>
#include <gl\lotypes.h>
#include <Objects\Objects.h>
#include <gl\types.h>
#include <util\colour.h>
#include <debug\db.h>
#include <Mathlib\vector4.h>
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


_static void getCubeVector(__int32 i, __int32 cubesize, __int32 x, __int32 y, float *vector);

/* ---------- globals */

extern MiscTextureManager *MiscTextureManager::m_instance; // 0x10132B90

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132B95
    extern std::allocator_arg_t allocator_arg; // 0x10132B94
    extern std::_Nil _Nil_obj; // 0x10132B96
}

/* ---------- public code */

void MiscTextureManager::initialize(rndTable *) // 0x10086DD0
{
    mangled_assert("?initialize@MiscTextureManager@@QAEXPAUrndTable@@@Z");
    todo("implement");
}

bool MiscTextureManager::startup() // 0x10086E50
{
    mangled_assert("?startup@MiscTextureManager@@SG_NXZ");
    todo("implement");
}

bool MiscTextureManager::shutdown() // 0x10086DF0
{
    mangled_assert("?shutdown@MiscTextureManager@@SG_NXZ");
    todo("implement");
}

MiscTextureManager::MiscTextureManager() // 0x10086540
{
    mangled_assert("??0MiscTextureManager@@AAE@XZ");
    todo("implement");
}

MiscTextureManager::~MiscTextureManager() // 0x10086560
{
    mangled_assert("??1MiscTextureManager@@AAE@XZ");
    todo("implement");
}

_inline MiscTextureManager &MiscTextureManager::operator=(MiscTextureManager const &) // 0x100865A0
{
    mangled_assert("??4MiscTextureManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void MiscTextureManager::createNormalCubeMap() // 0x10086620
{
    mangled_assert("?createNormalCubeMap@MiscTextureManager@@AAEXXZ");
    todo("implement");
}

void MiscTextureManager::createPassThrough3Dmap() // 0x100869D0
{
    mangled_assert("?createPassThrough3Dmap@MiscTextureManager@@AAEXXZ");
    todo("implement");
}

void MiscTextureManager::createWhiteTexture() // 0x10086B80
{
    mangled_assert("?createWhiteTexture@MiscTextureManager@@AAEXXZ");
    todo("implement");
}

Texture *MiscTextureManager::getGeneratedTexture(MiscTextureManager::GeneratedTextures const) // 0x10086D90
{
    mangled_assert("?getGeneratedTexture@MiscTextureManager@@QAEPAVTexture@@W4GeneratedTextures@1@@Z");
    todo("implement");
}

/* ---------- private code */

_static void getCubeVector(__int32 i, __int32 cubesize, __int32 x, __int32 y, float *vector) // 0x10086C00
{
    mangled_assert("getCubeVector");
    todo("implement");
}
#endif

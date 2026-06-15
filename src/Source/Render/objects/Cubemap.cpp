#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <Mathlib\matvec.h>
#include <xhash>
#include <Mathlib\vector2.h>
#include <xstring>
#include <assist\typemagic.h>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <gl\r_defines.h>
#include <Objects\Image.h>
#include <gl\glext.h>
#include <gl\r_types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <list>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <algorithm>
#include <util\types.h>
#include <fileio\filestream.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <Objects\Texture.h>
#include <debug\ctassert.h>
#include <Objects\Core.h>
#include <Objects\hw2ddraw.h>
#include <gl\types.h>
#include <gl\lotypes.h>
#include <Objects\TextureRegistry.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Objects\Cubemap.h>
#include <Objects\Objects.h>
#include <debug\db.h>
#include <platform\osdef.h>
#include <wchar.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x101121FB
}

/* ---------- public code */

_inline Cubemap &Cubemap::operator=(Cubemap const &) // 0x100339C0
{
    mangled_assert("??4Cubemap@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

Texture *Cubemap::createTexture(rndTable &gl, char const **filenames) // 0x100339D0
{
    mangled_assert("?createTexture@Cubemap@@SGPAVTexture@@AAUrndTable@@QAPBD@Z");
    todo("implement");
}

void Cubemap::eyespaceRenderSetup(rndTable &gl, unsigned __int32 tmu, Texture *pCubemap, bool bOn) // 0x10033B40
{
    mangled_assert("?eyespaceRenderSetup@Cubemap@@SGXAAUrndTable@@IPAVTexture@@_N@Z");
    todo("implement");
}

void Cubemap::worldspaceRenderSetup(rndTable &gl, unsigned __int32 tmu, matrix4 const &worldview, Texture *pCubemap, bool bOn) // 0x10033BB0
{
    mangled_assert("?worldspaceRenderSetup@Cubemap@@SGXAAUrndTable@@IABVmatrix4@@PAVTexture@@_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif

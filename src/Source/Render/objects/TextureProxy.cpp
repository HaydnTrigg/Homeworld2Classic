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
#include <crtdefs.h>
#include <gl\r_types.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <lua\lua.h>
#include <Objects\TextureAnim.h>
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
#include <ctype.h>
#include <xmmintrin.h>
#include <Mathlib\matrix4.h>
#include <mmintrin.h>
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
#include <profile\profile.h>
#include <iostream>
#include <map>
#include <xtree>
#include <xdebug>
#include <typeinfo>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <xfacet>
#include <memory.h>
#include <cassert>
#include <assert.h>
#include <cstdio>
#include <cfloat>
#include <stdio.h>
#include <assist\fixedstring.h>
#include <float.h>
#include <assist\stlexstring.h>
#include <algorithm>
#include <crtwrn.h>
#include <util\types.h>
#include <xtr1common>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <ammintrin.h>
#include <eh.h>
#include <mm3dnow.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <memory>
#include <stdint.h>
#include <Objects\TextureProxy.h>
#include <Objects\Texture.h>
#include <Objects\Objects.h>
#include <gl\lotypes.h>
#include <Objects\Core.h>
#include <Objects\TextureRegistry.h>
#include <gl\types.h>
#include <gl\r_defines.h>
#include <debug\db.h>
#include <util\colour.h>
#include <gl\glext.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <assist\typemagic.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
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


_static void toUpper(char *str);
_static bool isAnimFname(char const *fname);
_static bool isMultiResFname(char const *fname);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x10132C46
    extern std::allocator_arg_t allocator_arg; // 0x10132C45
    extern std::_Nil _Nil_obj; // 0x10132C47
    extern char const *kAnimFileExt; // 0x1010DAB0
    extern char const *kMultiResFileExt; // 0x1010DAB4
    extern __int32 s_gameRes; // 0x1010DAB8
}

/* ---------- public code */

TextureProxy::TextureProxy() // 0x100A0720
{
    mangled_assert("??0TextureProxy@@QAE@XZ");
    todo("implement");
}

TextureProxy::TextureProxy(Texture *) // 0x100A06C0
{
    mangled_assert("??0TextureProxy@@QAE@PAVTexture@@@Z");
    todo("implement");
}

TextureProxy::TextureProxy(TextureAnim *) // 0x100A06F0
{
    mangled_assert("??0TextureProxy@@QAE@PAVTextureAnim@@@Z");
    todo("implement");
}

TextureProxy::~TextureProxy() // 0x100A0740
{
    mangled_assert("??1TextureProxy@@QAE@XZ");
    todo("implement");
}

void TextureProxy::SetTexture(Texture *) // 0x100A0B00
{
    mangled_assert("?SetTexture@TextureProxy@@QAEXPAVTexture@@@Z");
    todo("implement");
}

void TextureProxy::SetTextureAnim(TextureAnim *) // 0x100A0B70
{
    mangled_assert("?SetTextureAnim@TextureProxy@@QAEXPAVTextureAnim@@@Z");
    todo("implement");
}

void TextureProxy::TexAnimReset() // 0x100A0C40
{
    mangled_assert("?TexAnimReset@TextureProxy@@QAEXXZ");
    todo("implement");
}

unsigned __int32 TextureProxy::TexAnimGetNumFrames() const // 0x100A0C20
{
    mangled_assert("?TexAnimGetNumFrames@TextureProxy@@QBEIXZ");
    todo("implement");
}

unsigned __int32 TextureProxy::TexAnimGetCurrFrame() const // 0x100A0C00
{
    mangled_assert("?TexAnimGetCurrFrame@TextureProxy@@QBEIXZ");
    todo("implement");
}

void TextureProxy::Update(float) // 0x100A0C50
{
    mangled_assert("?Update@TextureProxy@@QAEXM@Z");
    todo("implement");
}

void TextureProxy::SetTime(float) // 0x100A0BF0
{
    mangled_assert("?SetTime@TextureProxy@@QAEXM@Z");
    todo("implement");
}

Texture *TextureProxy::GetTexture() const // 0x100A07E0
{
    mangled_assert("?GetTexture@TextureProxy@@QBEPAVTexture@@XZ");
    todo("implement");
}

Texture *TextureProxy::LoadMultiResTexture(char const *, float &, char const *) // 0x100A0890
{
    mangled_assert("?LoadMultiResTexture@TextureProxy@@AAEPAVTexture@@PBDAAM0@Z");
    todo("implement");
}

bool TextureProxy::Load(char const *, char const *) // 0x100A0810
{
    mangled_assert("?Load@TextureProxy@@QAE_NPBD0@Z");
    todo("implement");
}

void TextureProxy::clear() // 0x100A0C70
{
    mangled_assert("?clear@TextureProxy@@AAEXXZ");
    todo("implement");
}

TextureProxy &TextureProxy::operator=(TextureProxy const &) // 0x100A0780
{
    mangled_assert("??4TextureProxy@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

void TextureProxy::SetGameRes(__int32 gameRes) // 0x100A0AF0
{
    mangled_assert("?SetGameRes@TextureProxy@@SGXH@Z");
    todo("implement");
}

/* ---------- private code */

_static void toUpper(char *str) // 0x100A0D90
{
    mangled_assert("toUpper");
    todo("implement");
}

_static bool isAnimFname(char const *fname) // 0x100A0CB0
{
    mangled_assert("isAnimFname");
    todo("implement");
}

_static bool isMultiResFname(char const *fname) // 0x100A0D20
{
    mangled_assert("isMultiResFname");
    todo("implement");
}
#endif

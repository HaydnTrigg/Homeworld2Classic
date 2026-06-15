#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <gl\lotypes.h>
#include <gl\r_types.h>
#include <lua\lua.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <math.h>
#include <list>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector3.h>
#include <assert.h>
#include <Mathlib\matrix3.h>
#include <util\types.h>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <Objects\TextureRegistry.h>
#include <Objects\Texture.h>
#include <Objects\Core.h>
#include <Objects\TextureAnim.h>
#include <gl\types.h>
#include <Objects\Objects.h>
#include <util\colour.h>
#include <Mathlib\vector2.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <memory>
#include <Mathlib\fastmath.h>
#include <stdint.h>
#include <platform\osdef.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef vector2 QuadUV[4];
typedef std::vector<TextureAnim::Frame,std::allocator<TextureAnim::Frame> > TextureCont;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132C44
    extern vector2 g_FullUV[4]; // 0x1010DA90
}

/* ---------- public code */

_inline TextureAnim::TextureAnim(TextureAnim const &) // 0x1009F250
{
    mangled_assert("??0TextureAnim@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

TextureAnim::TextureAnim() // 0x1009F290
{
    mangled_assert("??0TextureAnim@@QAE@XZ");
    todo("implement");
}

_inline LuaConfig::Iterator::~Iterator() // 0x1009F300
{
    mangled_assert("??1Iterator@LuaConfig@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

TextureAnim::~TextureAnim() // 0x1009F330
{
    mangled_assert("??1TextureAnim@@QAE@XZ");
    todo("implement");
}

void TextureAnim::setFPS(float) // 0x100A0660
{
    mangled_assert("?setFPS@TextureAnim@@QAEXM@Z");
    todo("implement");
}

void TextureAnim::setStartFrame(unsigned __int32) // 0x100A0690
{
    mangled_assert("?setStartFrame@TextureAnim@@QAEXI@Z");
    todo("implement");
}

void TextureAnim::setLayout(unsigned __int32, unsigned __int32) // 0x100A0670
{
    mangled_assert("?setLayout@TextureAnim@@QAEXII@Z");
    todo("implement");
}

void TextureAnim::addTexture(Texture *, unsigned __int32, unsigned __int32) // 0x1009F9F0
{
    mangled_assert("?addTexture@TextureAnim@@QAEXPAVTexture@@II@Z");
    todo("implement");
}

unsigned __int32 TextureAnim::getNumTextures() // 0x1009FD40
{
    mangled_assert("?getNumTextures@TextureAnim@@QAEIXZ");
    todo("implement");
}

Texture *TextureAnim::getTexture(unsigned __int32) // 0x1009FD60
{
    mangled_assert("?getTexture@TextureAnim@@QAEPAVTexture@@I@Z");
    todo("implement");
}

Texture *TextureAnim::getTexture(float) // 0x1009FDA0
{
    mangled_assert("?getTexture@TextureAnim@@QAEPAVTexture@@M@Z");
    todo("implement");
}

void TextureAnim::bind(float) // 0x1009FAE0
{
    mangled_assert("?bind@TextureAnim@@QAEXM@Z");
    todo("implement");
}

unsigned __int32 TextureAnim::calculateFrame(float) // 0x1009FB60
{
    mangled_assert("?calculateFrame@TextureAnim@@QAEIM@Z");
    todo("implement");
}

bool TextureAnim::getUV(unsigned __int32, vector2 &[4]) // 0x1009FE20
{
    mangled_assert("?getUV@TextureAnim@@QAE_NIAAY03Vvector2@@@Z");
    todo("implement");
}

bool TextureAnim::getUV(float, vector2 &[4]) // 0x1009FF50
{
    mangled_assert("?getUV@TextureAnim@@QAE_NMAAY03Vvector2@@@Z");
    todo("implement");
}

bool TextureAnim::loadFlipTextures(LuaConfig &lc, char const *filename, TextureAnim *pTextureAnim) // 0x100A00E0
{
    mangled_assert("?loadFlipTextures@TextureAnim@@CG_NAAVLuaConfig@@PBDPAV1@@Z");
    todo("implement");
}

bool TextureAnim::loadLayoutTextures(LuaConfig &lc, char const *filename, TextureAnim *pTextureAnim) // 0x100A0280
{
    mangled_assert("?loadLayoutTextures@TextureAnim@@CG_NAAVLuaConfig@@PBDPAV1@@Z");
    todo("implement");
}

TextureAnim *TextureAnim::loadAnimation(char const *filename) // 0x1009FF80
{
    mangled_assert("?loadAnimation@TextureAnim@@SGPAV1@PBD@Z");
    todo("implement");
}

TextureAnim &TextureAnim::operator=(TextureAnim const &) // 0x1009F540
{
    mangled_assert("??4TextureAnim@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

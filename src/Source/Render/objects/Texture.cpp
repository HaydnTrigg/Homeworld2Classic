#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Objects\Texture.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <xutility>
#include <Mathlib\vector4.h>
#include <utility>
#include <Mathlib\mathlibdll.h>
#include <vector>
#include <iosfwd>
#include <Mathlib\fastmath.h>
#include <xmemory>
#include <gl\r_types.h>
#include <math.h>
#include <list>
#include <map>
#include <xtree>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <util\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Objects\Constructor.h>
#include <Objects\Objects.h>
#include <gl\r_macros.h>
#include <profile\profile.h>
#include <iostream>
#include <Objects\TextureRegistry.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline unsigned __int32 pixelGet(bool source, unsigned __int32 *image, __int32 x, __int32 y);
extern _inline void pixelPut(bool source, unsigned __int32 *image, __int32 x, __int32 y, unsigned __int32 p);
extern _inline __int32 sign(__int32 x);
extern bool rescale(bool bilinear, unsigned __int32 format, __int32 widthout, __int32 heightout, void *dataout, __int32 widthin, __int32 heightin, void const *datain);

_static void stretch(unsigned __int32 *ss, unsigned __int32 *dd, __int32 x1, __int32 x2, __int32 y1, __int32 y2, __int32 yr, __int32 yw);
_static void pointRescale(unsigned __int32 *ss, __int32 swidth, __int32 sheight, unsigned __int32 *dd, __int32 dwidth, __int32 dheight);
_static void linearRescale(unsigned __int32 *ss, __int32 widthin, __int32 heightin, unsigned __int32 *dd, __int32 widthout, __int32 heightout);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 _swidth; // 0x10132C3C
    extern __int32 _dwidth; // 0x10132C40
    extern std::_Nil _Nil_obj; // 0x10132C38
}

/* ---------- public code */

bool Texture::release() // 0x1009E630
{
    mangled_assert("?release@Texture@@UAE_NXZ");
    todo("implement");
}

bool Texture::reference() // 0x1009E610
{
    mangled_assert("?reference@Texture@@UAE_NXZ");
    todo("implement");
}

Texture::Texture(__int32 const, TextureTarget const) // 0x1009DBC0
{
    mangled_assert("??0Texture@@AAE@HW4TextureTarget@@@Z");
    todo("implement");
}

Texture::~Texture() // 0x1009DCE0
{
    mangled_assert("??1Texture@@EAE@XZ");
    todo("implement");
}

void Texture::setTextureRegistry(TextureRegistry *) // 0x1009EA40
{
    mangled_assert("?setTextureRegistry@Texture@@QAEXPAVTextureRegistry@@@Z");
    todo("implement");
}

bool Texture::bind(__int32) const // 0x1009DE80
{
    mangled_assert("?bind@Texture@@QBE_NH@Z");
    todo("implement");
}

bool Texture::bind() const // 0x1009DF10
{
    mangled_assert("?bind@Texture@@QBE_NXZ");
    todo("implement");
}

void Texture::setData(TextureFormat, __int32, __int32, __int32, __int32, void const *) // 0x1009E6C0
{
    mangled_assert("?setData@Texture@@QAEXW4TextureFormat@@HHHHPBX@Z");
    todo("implement");
}

void Texture::copySubData(TextureFormat, __int32, __int32, __int32, __int32, __int32) // 0x1009DFA0
{
    mangled_assert("?copySubData@Texture@@QAEXW4TextureFormat@@HHHHH@Z");
    todo("implement");
}

void Texture::copyData(TextureFormat, __int32, __int32, __int32) // 0x1009DF60
{
    mangled_assert("?copyData@Texture@@QAEXW4TextureFormat@@HHH@Z");
    todo("implement");
}

void Texture::setSubData(TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *) // 0x1009E750
{
    mangled_assert("?setSubData@Texture@@QAEXW4TextureFormat@@HHHHHHHPBX@Z");
    todo("implement");
}

void Texture::setFilter(TextureFilter minFilter, TextureFilter magFilter) // 0x1009E710
{
    mangled_assert("?setFilter@Texture@@SGXW4TextureFilter@@0@Z");
    todo("implement");
}

void Texture::setWrap(TextureWrap sWrap, TextureWrap tWrap, TextureWrap rWrap) // 0x1009EAC0
{
    mangled_assert("?setWrap@Texture@@SGXW4TextureWrap@@00@Z");
    todo("implement");
}

void Texture::setAnisotropy(unsigned __int32 level) // 0x1009E6A0
{
    mangled_assert("?setAnisotropy@Texture@@SGXI@Z");
    todo("implement");
}

bool Texture::setTexture(__int32, TextureFormat, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap) // 0x1009E8F0
{
    mangled_assert("?setTexture@Texture@@QAE_NHW4TextureFormat@@HHHHPBXW4TextureFilter@@IW4TextureWrap@@@Z");
    todo("implement");
}

bool Texture::setSubTexture(__int32, TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap) // 0x1009E790
{
    mangled_assert("?setSubTexture@Texture@@QAE_NHW4TextureFormat@@HHHHHHHPBXW4TextureFilter@@IW4TextureWrap@@@Z");
    todo("implement");
}

bool Texture::setTexture(TextureFormat, __int32, __int32, __int32, __int32, void const *, TextureFilter, unsigned __int32, TextureWrap) // 0x1009E990
{
    mangled_assert("?setTexture@Texture@@QAE_NW4TextureFormat@@HHHHPBXW4TextureFilter@@IW4TextureWrap@@@Z");
    todo("implement");
}

void Texture::setPriority(float) const // 0x1009E730
{
    mangled_assert("?setPriority@Texture@@QBEXM@Z");
    todo("implement");
}

void Texture::setMaxLevel(unsigned __int32) // 0x1009E720
{
    mangled_assert("?setMaxLevel@Texture@@QAEXI@Z");
    todo("implement");
}

void Texture::setBaseLevel(unsigned __int32) // 0x1009E6B0
{
    mangled_assert("?setBaseLevel@Texture@@QAEXI@Z");
    todo("implement");
}

void Texture::setUnit(__int32 textureUnit) // 0x1009EA50
{
    mangled_assert("?setUnit@Texture@@SGXH@Z");
    todo("implement");
}

void Texture::setUnitMode(TextureMode mode) // 0x1009EAB0
{
    mangled_assert("?setUnitMode@Texture@@SGXW4TextureMode@@@Z");
    todo("implement");
}

void Texture::setUnitMode(__int32 textureUnit, TextureMode mode) // 0x1009EA60
{
    mangled_assert("?setUnitMode@Texture@@SGXHW4TextureMode@@@Z");
    todo("implement");
}

void Texture::setTexgen(TexgenMode mode, vector4 const &plane) // 0x1009E8A0
{
    mangled_assert("?setTexgen@Texture@@SGXW4TexgenMode@@ABVvector4@@@Z");
    todo("implement");
}

void Texture::setTexgen(__int32 textureUnit, TexgenMode mode, vector4 const &plane) // 0x1009E820
{
    mangled_assert("?setTexgen@Texture@@SGXHW4TexgenMode@@ABVvector4@@@Z");
    todo("implement");
}

__int32 Texture::getNumUnits() // 0x1009E0A0
{
    mangled_assert("?getNumUnits@Texture@@SGHXZ");
    todo("implement");
}

_inline unsigned __int32 pixelGet(bool source, unsigned __int32 *image, __int32 x, __int32 y) // 0x1009E3F0
{
    mangled_assert("?pixelGet@@YGI_NPAIHH@Z");
    todo("implement");
}

_inline void pixelPut(bool source, unsigned __int32 *image, __int32 x, __int32 y, unsigned __int32 p) // 0x1009E420
{
    mangled_assert("?pixelPut@@YGX_NPAIHHI@Z");
    todo("implement");
}

_inline __int32 sign(__int32 x) // 0x1009EAD0
{
    mangled_assert("?sign@@YGHH@Z");
    todo("implement");
}

bool rescale(bool bilinear, unsigned __int32 format, __int32 widthout, __int32 heightout, void *dataout, __int32 widthin, __int32 heightin, void const *datain) // 0x1009E650
{
    mangled_assert("?rescale@@YG_N_NIHHPAXHHPBX@Z");
    todo("implement");
}

void Texture::genMipmaps(Texture *tex, TextureFormat format, __int32 width, __int32 height, unsigned __int32 const *data, unsigned __int32 *tempData, bool bilinear) // 0x1009DFF0
{
    mangled_assert("?genMipmaps@Texture@@SGXPAV1@W4TextureFormat@@HHPBIPAI_N@Z");
    todo("implement");
}

void Texture::genMipmap(TextureFormat format, __int32 inWidth, __int32 inHeight, void const *inData, __int32 outWidth, __int32 outHeight, void *outData, bool bilinear) // 0x1009DFB0
{
    mangled_assert("?genMipmap@Texture@@SGXW4TextureFormat@@HHPBXHHPAX_N@Z");
    todo("implement");
}

/* ---------- private code */

_static void stretch(unsigned __int32 *ss, unsigned __int32 *dd, __int32 x1, __int32 x2, __int32 y1, __int32 y2, __int32 yr, __int32 yw) // 0x1009EAF0
{
    mangled_assert("stretch");
    todo("implement");
}

_static void pointRescale(unsigned __int32 *ss, __int32 swidth, __int32 sheight, unsigned __int32 *dd, __int32 dwidth, __int32 dheight) // 0x1009E450
{
    mangled_assert("pointRescale");
    todo("implement");
}

_static void linearRescale(unsigned __int32 *ss, __int32 widthin, __int32 heightin, unsigned __int32 *dd, __int32 widthout, __int32 heightout) // 0x1009E0B0
{
    mangled_assert("linearRescale");
    todo("implement");
}
#endif

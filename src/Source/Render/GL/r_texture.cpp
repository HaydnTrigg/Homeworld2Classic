#if 0
/* ---------- headers */

#include "decomp.h"
#include <list>
#include <Render\GL\pch.h>
#include <xmemory>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <vector>
#include <Render\GL\r_macros.h>
#include <Render\GL\r_stats.h>
#include <hash_map>
#include <profile\profile.h>
#include <xhash>
#include <iostream>
#include <Mathlib\vector4.h>
#include <type_traits>
#include <map>
#include <xtree>
#include <xutility>
#include <utility>

/* ---------- constants */

enum rglSetTextureData::__l2::Quality
{
    lo = 0,
    med,
    hi,
};

/* ---------- definitions */

struct TextureParams
{
    _inline TextureParams();
    unsigned __int32 minFilter; // 0x0
    unsigned __int32 magFilter; // 0x4
    unsigned __int32 anisotropy; // 0x8
    unsigned __int32 sWrap; // 0xC
    unsigned __int32 tWrap; // 0x10
    unsigned __int32 rWrap; // 0x14
};
static_assert(sizeof(TextureParams) == 24, "Invalid TextureParams size");

union rawTexel
{
    unsigned char byte[4]; // 0x0
    unsigned __int32 word; // 0x0
};
static_assert(sizeof(rawTexel) == 4, "Invalid rawTexel size");

/* ---------- prototypes */

extern unsigned __int32 mapTextureMode(TextureMode mode);
extern unsigned __int32 rglGetNumTextureUnits();
extern void rglSetTextureUnit(unsigned __int32 n);
extern __int32 rglGetTextureUnit();
extern void rglSetClientTextureUnit(__int32 n);
extern __int32 rglGetClientTextureUnit();
extern void rglGenTextures(__int32 n, unsigned __int32 *handles);
extern unsigned __int32 rglTextureWalk(unsigned __int32 command);
extern _inline void delBinding(unsigned __int32 handle);
extern void rglDelTextures(__int32 n, unsigned __int32 *handles);
extern void rglBindTexture(unsigned __int32 handle);
extern void rglBindTextureToTextureUnit(__int32 textureUnit, unsigned __int32 handle);
extern void _RGBA16_to_RGBA(unsigned __int32 *d, unsigned short const *s, __int32 width, __int32 height);
extern void rglCopySubTextureData(TextureFormat format, __int32 mip, __int32 xoffset, __int32 yoffset, __int32 width, __int32 height);
extern void rglCopyTextureData(TextureFormat format, __int32 mip, __int32 width, __int32 height);
extern void rglSetSubTextureData(TextureFormat format, __int32 mip, __int32 xoffset, __int32 yoffset, __int32 zoffset, __int32 width, __int32 height, __int32 depth, void const *data, unsigned __int32 &bitsPerPixel);
extern void rglSetTextureData(TextureFormat format, __int32 mip, __int32 width, __int32 height, __int32 depth, void const *data, unsigned __int32 &bitsPerPixel);
extern void rglSetTextureUnitMode(unsigned __int32 _mode);
extern void rglSetCombineSource(unsigned __int32 portion, unsigned __int32 arg, unsigned __int32 input, unsigned __int32 usage);
extern void rglSetCombineFunction(unsigned __int32 portion, unsigned __int32 mode, float scale);
extern TextureMode rglGetTextureUnitMode();
extern void rglSetCombineColour(vector4 const &c);
extern void rglSetCombineColourForTextureUnit(unsigned __int32 const textureUnit, vector4 const &c);
extern vector4 rglGetCombineColour();
extern void rglSetTextureFilter(TextureFilter minFilter, TextureFilter magFilter);
extern void rglSetTextureAnisotropy(unsigned __int32 level);
extern unsigned __int32 mapWrapToGL(TextureWrap wrap);
extern void rglSetTextureMaxLevel(unsigned __int32 level);
extern void rglSetTextureBaseLevel(unsigned __int32 level);
extern void rglSetTextureWrap(TextureWrap sWrap, TextureWrap tWrap, TextureWrap rWrap);
extern void rglSetTexturePriority(unsigned __int32 handle, float priority);
extern unsigned __int32 mapTexgen(TexgenMode mode);
extern void rglSetTexgenMode(unsigned __int32 coord, TexgenMode mode);
extern TexgenMode rglGetTexgenMode(unsigned __int32 coord);
extern void rglSetTexgenPlane(unsigned __int32 coord, bool eye, vector4 const &plane);
extern float rglSetTextureBias(float bias);
extern float rglGetTextureBias(__int32 textureUnit);
extern float rglGetMaxTextureBias();
extern float rglSetTextureQuality(float q);
extern float rglGetTextureQuality();
extern TextureTarget rglSetTextureTarget(TextureTarget target);
extern TextureTarget rglGetTextureTarget();
extern void rglStartupTexture();
extern void rglShutdownTexture();

_static void tempTexResize(__int32 width, __int32 height);
_static void getDXT5AlphaBlock(unsigned char const *block, rawTexel **data);
_static void getDXT3AlphaBlock(unsigned char const *block, rawTexel **data);
_static void getDXT1Block(unsigned char const *block, rawTexel **data);
_static unsigned __int32 *convertDXTtoNewRaw(TextureFormat format, unsigned __int32 w, unsigned __int32 h, unsigned char const *src);
_static unsigned __int32 mapMinFilterToGL(TextureFilter filter);
_static unsigned __int32 mapMagFilterToGL(TextureFilter filter);

/* ---------- globals */

extern stdext::hash_map<unsigned int,TextureParams,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,TextureParams> > > sTexture; // 0x10021F74
extern unsigned __int32 glCoord[4]; // 0x100205FC

/* ---------- private variables */

_static
{
    extern __int32 tempTexDim; // 0x10021F6C
    extern unsigned __int32 *tempTexData; // 0x10021F70
}

/* ---------- public code */

_extern _sub_10011B9F(TextureParams *const);
_inline TextureParams::TextureParams() // 0x10011B9F
{
    mangled_assert("??0TextureParams@@QAE@XZ");
    todo("implement");
    _sub_10011B9F(this);
}

_extern void _sub_10011BE6(std::_List_buy<std::pair<unsigned int const ,TextureParams>,std::allocator<std::pair<unsigned int const ,TextureParams> > > *const);
_inline std::_List_buy<std::pair<unsigned int const ,TextureParams>,std::allocator<std::pair<unsigned int const ,TextureParams> > >::~_List_buy<std::pair<unsigned int const ,TextureParams>,std::allocator<std::pair<unsigned int const ,TextureParams> > >() // 0x10011BE6
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBIUTextureParams@@@std@@V?$allocator@U?$pair@$$CBIUTextureParams@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10011BE6(this);
}

_extern void _sub_10011BEF(stdext::hash_map<unsigned int,TextureParams,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,TextureParams> > > *const);
_inline stdext::hash_map<unsigned int,TextureParams,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,TextureParams> > >::~hash_map<unsigned int,TextureParams,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,TextureParams> > >() // 0x10011BEF
{
    mangled_assert("??1?$hash_map@IUTextureParams@@V?$hash_compare@IU?$less@I@std@@@stdext@@V?$allocator@U?$pair@$$CBIUTextureParams@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10011BEF(this);
}

_extern unsigned __int32 _sub_10012E0A(TextureMode);
unsigned __int32 mapTextureMode(TextureMode mode) // 0x10012E0A
{
    mangled_assert("?mapTextureMode@@YGIW4TextureMode@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10012E0A(mode);
    return __result;
}

_extern unsigned __int32 _sub_1001313F();
unsigned __int32 rglGetNumTextureUnits() // 0x1001313F
{
    mangled_assert("?rglGetNumTextureUnits@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_1001313F();
    return __result;
}

_extern void _sub_10013EEA(unsigned __int32);
void rglSetTextureUnit(unsigned __int32 n) // 0x10013EEA
{
    mangled_assert("?rglSetTextureUnit@@YGXI@Z");
    todo("implement");
    _sub_10013EEA(n);
}

_extern __int32 _sub_10013183();
__int32 rglGetTextureUnit() // 0x10013183
{
    mangled_assert("?rglGetTextureUnit@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_10013183();
    return __result;
}

_extern void _sub_10013196(__int32);
void rglSetClientTextureUnit(__int32 n) // 0x10013196
{
    mangled_assert("?rglSetClientTextureUnit@@YGXH@Z");
    todo("implement");
    _sub_10013196(n);
}

_extern __int32 _sub_1001310F();
__int32 rglGetClientTextureUnit() // 0x1001310F
{
    mangled_assert("?rglGetClientTextureUnit@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_1001310F();
    return __result;
}

_extern void _sub_100130A8(__int32, unsigned __int32 *);
void rglGenTextures(__int32 n, unsigned __int32 *handles) // 0x100130A8
{
    mangled_assert("?rglGenTextures@@YGXHPAI@Z");
    todo("implement");
    _sub_100130A8(n, handles);
}

_extern unsigned __int32 _sub_1001414E(unsigned __int32);
unsigned __int32 rglTextureWalk(unsigned __int32 command) // 0x1001414E
{
    mangled_assert("?rglTextureWalk@@YGII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1001414E(command);
    return __result;
}

_extern void _sub_100126E6(unsigned __int32);
_inline void delBinding(unsigned __int32 handle) // 0x100126E6
{
    mangled_assert("?delBinding@@YGXI@Z");
    todo("implement");
    _sub_100126E6(handle);
}

_extern void _sub_10013042(__int32, unsigned __int32 *);
void rglDelTextures(__int32 n, unsigned __int32 *handles) // 0x10013042
{
    mangled_assert("?rglDelTextures@@YGXHPAI@Z");
    todo("implement");
    _sub_10013042(n, handles);
}

_extern void _sub_10012F00(unsigned __int32);
void rglBindTexture(unsigned __int32 handle) // 0x10012F00
{
    mangled_assert("?rglBindTexture@@YGXI@Z");
    todo("implement");
    _sub_10012F00(handle);
}

_extern void _sub_10012F4F(__int32, unsigned __int32);
void rglBindTextureToTextureUnit(__int32 textureUnit, unsigned __int32 handle) // 0x10012F4F
{
    mangled_assert("?rglBindTextureToTextureUnit@@YGXHI@Z");
    todo("implement");
    _sub_10012F4F(textureUnit, handle);
}

_extern void _sub_1001225E(unsigned __int32 *, unsigned short const *, __int32, __int32);
void _RGBA16_to_RGBA(unsigned __int32 *d, unsigned short const *s, __int32 width, __int32 height) // 0x1001225E
{
    mangled_assert("?_RGBA16_to_RGBA@@YGXPAIPBGHH@Z");
    todo("implement");
    _sub_1001225E(d, s, width, height);
}

_extern void _sub_10012F8E(TextureFormat, __int32, __int32, __int32, __int32, __int32);
void rglCopySubTextureData(TextureFormat format, __int32 mip, __int32 xoffset, __int32 yoffset, __int32 width, __int32 height) // 0x10012F8E
{
    mangled_assert("?rglCopySubTextureData@@YGXW4TextureFormat@@HHHHH@Z");
    todo("implement");
    _sub_10012F8E(format, mip, xoffset, yoffset, width, height);
}

_extern void _sub_10012FBA(TextureFormat, __int32, __int32, __int32);
void rglCopyTextureData(TextureFormat format, __int32 mip, __int32 width, __int32 height) // 0x10012FBA
{
    mangled_assert("?rglCopyTextureData@@YGXW4TextureFormat@@HHH@Z");
    todo("implement");
    _sub_10012FBA(format, mip, width, height);
}

_extern void _sub_10013321(TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *, unsigned __int32 &);
void rglSetSubTextureData(TextureFormat format, __int32 mip, __int32 xoffset, __int32 yoffset, __int32 zoffset, __int32 width, __int32 height, __int32 depth, void const *data, unsigned __int32 &bitsPerPixel) // 0x10013321
{
    mangled_assert("?rglSetSubTextureData@@YGXW4TextureFormat@@HHHHHHHPBXAAI@Z");
    todo("implement");
    _sub_10013321(format, mip, xoffset, yoffset, zoffset, width, height, depth, data, bitsPerPixel);
}

_extern void _sub_1001358D(TextureFormat, __int32, __int32, __int32, __int32, void const *, unsigned __int32 &);
void rglSetTextureData(TextureFormat format, __int32 mip, __int32 width, __int32 height, __int32 depth, void const *data, unsigned __int32 &bitsPerPixel) // 0x1001358D
{
    mangled_assert("?rglSetTextureData@@YGXW4TextureFormat@@HHHHPBXAAI@Z");
    todo("implement");
    _sub_1001358D(format, mip, width, height, depth, data, bitsPerPixel);
}

_extern void _sub_10013F53(unsigned __int32);
void rglSetTextureUnitMode(unsigned __int32 _mode) // 0x10013F53
{
    mangled_assert("?rglSetTextureUnitMode@@YGXI@Z");
    todo("implement");
    _sub_10013F53(_mode);
}

_extern void _sub_100132CC(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
void rglSetCombineSource(unsigned __int32 portion, unsigned __int32 arg, unsigned __int32 input, unsigned __int32 usage) // 0x100132CC
{
    mangled_assert("?rglSetCombineSource@@YGXIIII@Z");
    todo("implement");
    _sub_100132CC(portion, arg, input, usage);
}

_extern void _sub_10013278(unsigned __int32, unsigned __int32, float);
void rglSetCombineFunction(unsigned __int32 portion, unsigned __int32 mode, float scale) // 0x10013278
{
    mangled_assert("?rglSetCombineFunction@@YGXIIM@Z");
    todo("implement");
    _sub_10013278(portion, mode, scale);
}

_extern TextureMode _sub_10013189();
TextureMode rglGetTextureUnitMode() // 0x10013189
{
    mangled_assert("?rglGetTextureUnitMode@@YG?AW4TextureMode@@XZ");
    todo("implement");
    TextureMode __result = _sub_10013189();
    return __result;
}

_extern void _sub_100131E6(vector4 const &);
void rglSetCombineColour(vector4 const &c) // 0x100131E6
{
    mangled_assert("?rglSetCombineColour@@YGXABVvector4@@@Z");
    todo("implement");
    _sub_100131E6(c);
}

_extern void _sub_10013240(unsigned __int32 const, vector4 const &);
void rglSetCombineColourForTextureUnit(unsigned __int32 const textureUnit, vector4 const &c) // 0x10013240
{
    mangled_assert("?rglSetCombineColourForTextureUnit@@YGXIABVvector4@@@Z");
    todo("implement");
    _sub_10013240(textureUnit, c);
}

_extern vector4 _sub_10013115();
vector4 rglGetCombineColour() // 0x10013115
{
    mangled_assert("?rglGetCombineColour@@YG?AVvector4@@XZ");
    todo("implement");
    vector4 __result = _sub_10013115();
    return __result;
}

_extern void _sub_10013C15(TextureFilter, TextureFilter);
void rglSetTextureFilter(TextureFilter minFilter, TextureFilter magFilter) // 0x10013C15
{
    mangled_assert("?rglSetTextureFilter@@YGXW4TextureFilter@@0@Z");
    todo("implement");
    _sub_10013C15(minFilter, magFilter);
}

_extern void _sub_10013460(unsigned __int32);
void rglSetTextureAnisotropy(unsigned __int32 level) // 0x10013460
{
    mangled_assert("?rglSetTextureAnisotropy@@YGXI@Z");
    todo("implement");
    _sub_10013460(level);
}

_extern unsigned __int32 _sub_10012E77(TextureWrap);
unsigned __int32 mapWrapToGL(TextureWrap wrap) // 0x10012E77
{
    mangled_assert("?mapWrapToGL@@YGIW4TextureWrap@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10012E77(wrap);
    return __result;
}

_extern void _sub_10013CD8(unsigned __int32);
void rglSetTextureMaxLevel(unsigned __int32 level) // 0x10013CD8
{
    mangled_assert("?rglSetTextureMaxLevel@@YGXI@Z");
    todo("implement");
    _sub_10013CD8(level);
}

_extern void _sub_100134DB(unsigned __int32);
void rglSetTextureBaseLevel(unsigned __int32 level) // 0x100134DB
{
    mangled_assert("?rglSetTextureBaseLevel@@YGXI@Z");
    todo("implement");
    _sub_100134DB(level);
}

_extern void _sub_10013F99(TextureWrap, TextureWrap, TextureWrap);
void rglSetTextureWrap(TextureWrap sWrap, TextureWrap tWrap, TextureWrap rWrap) // 0x10013F99
{
    mangled_assert("?rglSetTextureWrap@@YGXW4TextureWrap@@00@Z");
    todo("implement");
    _sub_10013F99(sWrap, tWrap, rWrap);
}

_extern void _sub_10013CF2(unsigned __int32, float);
void rglSetTexturePriority(unsigned __int32 handle, float priority) // 0x10013CF2
{
    mangled_assert("?rglSetTexturePriority@@YGXIM@Z");
    todo("implement");
    _sub_10013CF2(handle, priority);
}

_extern unsigned __int32 _sub_10012DC7(TexgenMode);
unsigned __int32 mapTexgen(TexgenMode mode) // 0x10012DC7
{
    mangled_assert("?mapTexgen@@YGIW4TexgenMode@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10012DC7(mode);
    return __result;
}

_extern void _sub_100133C3(unsigned __int32, TexgenMode);
void rglSetTexgenMode(unsigned __int32 coord, TexgenMode mode) // 0x100133C3
{
    mangled_assert("?rglSetTexgenMode@@YGXIW4TexgenMode@@@Z");
    todo("implement");
    _sub_100133C3(coord, mode);
}

_extern TexgenMode _sub_10013145(unsigned __int32);
TexgenMode rglGetTexgenMode(unsigned __int32 coord) // 0x10013145
{
    mangled_assert("?rglGetTexgenMode@@YG?AW4TexgenMode@@I@Z");
    todo("implement");
    TexgenMode __result = _sub_10013145(coord);
    return __result;
}

_extern void _sub_10013438(unsigned __int32, bool, vector4 const &);
void rglSetTexgenPlane(unsigned __int32 coord, bool eye, vector4 const &plane) // 0x10013438
{
    mangled_assert("?rglSetTexgenPlane@@YGXI_NABVvector4@@@Z");
    todo("implement");
    _sub_10013438(coord, eye, plane);
}

_extern float _sub_100134F5(float);
float rglSetTextureBias(float bias) // 0x100134F5
{
    mangled_assert("?rglSetTextureBias@@YGMM@Z");
    todo("implement");
    float __result = _sub_100134F5(bias);
    return __result;
}

_extern float _sub_1001315E(__int32);
float rglGetTextureBias(__int32 textureUnit) // 0x1001315E
{
    mangled_assert("?rglGetTextureBias@@YGMH@Z");
    todo("implement");
    float __result = _sub_1001315E(textureUnit);
    return __result;
}

_extern float _sub_10013138();
float rglGetMaxTextureBias() // 0x10013138
{
    mangled_assert("?rglGetMaxTextureBias@@YGMXZ");
    todo("implement");
    float __result = _sub_10013138();
    return __result;
}

_extern float _sub_10013D09(float);
float rglSetTextureQuality(float q) // 0x10013D09
{
    mangled_assert("?rglSetTextureQuality@@YGMM@Z");
    todo("implement");
    float __result = _sub_10013D09(q);
    return __result;
}

_extern float _sub_1001316F();
float rglGetTextureQuality() // 0x1001316F
{
    mangled_assert("?rglGetTextureQuality@@YGMXZ");
    todo("implement");
    float __result = _sub_1001316F();
    return __result;
}

_extern TextureTarget _sub_10013D2E(TextureTarget);
TextureTarget rglSetTextureTarget(TextureTarget target) // 0x10013D2E
{
    mangled_assert("?rglSetTextureTarget@@YG?AW4TextureTarget@@W41@@Z");
    todo("implement");
    TextureTarget __result = _sub_10013D2E(target);
    return __result;
}

_extern TextureTarget _sub_10013176();
TextureTarget rglGetTextureTarget() // 0x10013176
{
    mangled_assert("?rglGetTextureTarget@@YG?AW4TextureTarget@@XZ");
    todo("implement");
    TextureTarget __result = _sub_10013176();
    return __result;
}

_extern void _sub_100140B3();
void rglStartupTexture() // 0x100140B3
{
    mangled_assert("?rglStartupTexture@@YGXXZ");
    todo("implement");
    _sub_100140B3();
}

_extern void _sub_1001408B();
void rglShutdownTexture() // 0x1001408B
{
    mangled_assert("?rglShutdownTexture@@YGXXZ");
    todo("implement");
    _sub_1001408B();
}

/* ---------- private code */

_extern void _sub_100141B9(__int32, __int32);
_static void tempTexResize(__int32 width, __int32 height) // 0x100141B9
{
    mangled_assert("tempTexResize");
    todo("implement");
    _sub_100141B9(width, height);
}

_extern void _sub_10012A6D(unsigned char const *, rawTexel **);
_static void getDXT5AlphaBlock(unsigned char const *block, rawTexel **data) // 0x10012A6D
{
    mangled_assert("getDXT5AlphaBlock");
    todo("implement");
    _sub_10012A6D(block, data);
}

_extern void _sub_10012A30(unsigned char const *, rawTexel **);
_static void getDXT3AlphaBlock(unsigned char const *block, rawTexel **data) // 0x10012A30
{
    mangled_assert("getDXT3AlphaBlock");
    todo("implement");
    _sub_10012A30(block, data);
}

_extern void _sub_100127FA(unsigned char const *, rawTexel **);
_static void getDXT1Block(unsigned char const *block, rawTexel **data) // 0x100127FA
{
    mangled_assert("getDXT1Block");
    todo("implement");
    _sub_100127FA(block, data);
}

_extern unsigned __int32 *_sub_100124FC(TextureFormat, unsigned __int32, unsigned __int32, unsigned char const *);
_static unsigned __int32 *convertDXTtoNewRaw(TextureFormat format, unsigned __int32 w, unsigned __int32 h, unsigned char const *src) // 0x100124FC
{
    mangled_assert("convertDXTtoNewRaw");
    todo("implement");
    unsigned __int32 * __result = _sub_100124FC(format, w, h, src);
    return __result;
}

_extern unsigned __int32 _sub_10012D7F(TextureFilter);
_static unsigned __int32 mapMinFilterToGL(TextureFilter filter) // 0x10012D7F
{
    mangled_assert("mapMinFilterToGL");
    todo("implement");
    unsigned __int32 __result = _sub_10012D7F(filter);
    return __result;
}

_extern unsigned __int32 _sub_10012D5C(TextureFilter);
_static unsigned __int32 mapMagFilterToGL(TextureFilter filter) // 0x10012D5C
{
    mangled_assert("mapMagFilterToGL");
    todo("implement");
    unsigned __int32 __result = _sub_10012D5C(filter);
    return __result;
}
#endif

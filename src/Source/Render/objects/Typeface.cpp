#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <malloc.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <utility>
#include <Mathlib\vector3.h>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <Objects\DebugRender.h>
#include <list>
#include <fileio\iff.h>
#include <fileio\fileioexports.h>
#include <Objects\CompiledText.h>
#include <xtree>
#include <Objects\TextureRegistry.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\Objects.h>
#include <Objects\Typeface.h>
#include <Objects\Texture.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <string>

/* ---------- constants */

enum ImageType
{
    IMAGETYPE_RGBA32 = 0, // 0x0000
    IMAGETYPE_Intensity = 1, // 0x0001
    IMAGETYPE_Palette = 2, // 0x0002
    IMAGETYPE_Hybrid = 3, // 0x0003
    IMAGETYPE_RGB565 = 4, // 0x0004
    IMAGETYPE_RGBA5551 = 5, // 0x0005
    IMAGETYPE_RGBA4444 = 6, // 0x0006
    IMAGETYPE_S3TC = 7, // 0x0007
    IMAGETYPE_Invalid = 8, // 0x0008
    IMAGETYPE_Count = 8, // 0x0008
};

/* ---------- definitions */

typedef std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > VTextureMap;
typedef std::vector<Texture *,std::allocator<Texture *> > TextureList;
typedef stdext::hash_map<wchar_t,Glyph,stdext::hash_compare<wchar_t,std::less<wchar_t> >,std::allocator<std::pair<wchar_t const ,Glyph> > > GlyphMap;
typedef __int32 (*ChunkHandler)(IFF *, IFFChunk *, void *, void *);
typedef std::list<IFF::HandlerList *,std::allocator<IFF::HandlerList *> > HandlerListList;
typedef std::vector<unsigned char,std::allocator<unsigned char> > DataBlock;
typedef std::vector<FatVertex,std::allocator<FatVertex> > Vertices;
typedef std::map<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > > VTypefaceMap;
typedef std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > VColourMap;

/* ---------- prototypes */


_static __int32 handleTYPE_NAME(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 handleTYPE_ATTR(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 handleIMAG_NAME(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2);
_static __int32 handleIMAG_ATTR(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2);
_static __int32 handleIMAG_DATA(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2);
_static __int32 handleTYPE_IMAG(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 handleTYPE_GLPH(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

/* ---------- globals */

extern float Typeface::ms_screenWidth; // 0x10132CE0
extern float Typeface::ms_screenHeight; // 0x10132CE4

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132D04
    extern std::vector<FatVertex,std::allocator<FatVertex> > g_fatPool; // 0x10132CF8
    extern __int32 g_quadIndices[4]; // 0x1010DABC
    extern unsigned long imageType; // 0x10132D08
    extern unsigned long imageWidth; // 0x10132D0C
    extern unsigned long imageHeight; // 0x10132D10
    extern unsigned long imageSize; // 0x10132D14
    extern vector4 g_lastColour; // 0x10132CE8
}

/* ---------- public code */

Typeface::Typeface(float, float) // 0x100A3300
{
    mangled_assert("??0Typeface@@QAE@MM@Z");
    todo("implement");
}

Typeface::~Typeface() // 0x100A33B0
{
    mangled_assert("??1Typeface@@QAE@XZ");
    todo("implement");
}

bool Typeface::load(IFF *) // 0x100A4520
{
    mangled_assert("?load@Typeface@@QAE_NPAVIFF@@@Z");
    todo("implement");
}

void Typeface::setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x100A4D00
{
    mangled_assert("?setName@Typeface@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void Typeface::addTexture(Texture *) // 0x100A36E0
{
    mangled_assert("?addTexture@Typeface@@QAEXPAVTexture@@@Z");
    todo("implement");
}

Glyph *Typeface::addGlyph(Glyph *) // 0x100A3630
{
    mangled_assert("?addGlyph@Typeface@@QAEPAVGlyph@@PAV2@@Z");
    todo("implement");
}

float Typeface::getHeight() const // 0x100A3E30
{
    mangled_assert("?getHeight@Typeface@@QBEMXZ");
    todo("implement");
}

void Typeface::getPrintSize(float &, float &, wchar_t const *, __int32) // 0x100A3E40
{
    mangled_assert("?getPrintSize@Typeface@@QAEXAAM0PB_WH@Z");
    todo("implement");
}

Glyph *Typeface::getGlyph(wchar_t) // 0x100A3CB0
{
    mangled_assert("?getGlyph@Typeface@@AAEPAVGlyph@@_W@Z");
    todo("implement");
}

Glyph const *Typeface::getGlyph(wchar_t) const // 0x100A3D70
{
    mangled_assert("?getGlyph@Typeface@@QBEPBVGlyph@@_W@Z");
    todo("implement");
}

void Typeface::print(rndTable *, float, float, vector4, wchar_t const *, __int32) // 0x100A48D0
{
    mangled_assert("?print@Typeface@@QAEXPAUrndTable@@MMVvector4@@PB_WH@Z");
    todo("implement");
}

void Typeface::compile(CompiledText &, float, float, vector4 &, wchar_t const *, __int32) // 0x100A3710
{
    mangled_assert("?compile@Typeface@@QAEXAAVCompiledText@@MMAAVvector4@@PB_WH@Z");
    todo("implement");
}

void Typeface::print(rndTable *, std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > &) // 0x100A4720
{
    mangled_assert("?print@Typeface@@QAEXPAUrndTable@@AAV?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@@Z");
    todo("implement");
}

Glyph *Typeface::buildGlyph(wchar_t, unsigned __int32, unsigned __int32) // 0x100A3700
{
    mangled_assert("?buildGlyph@Typeface@@MAEPAVGlyph@@_WII@Z");
    todo("implement");
}

/* ---------- private code */

_static __int32 handleTYPE_NAME(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100A44A0
{
    mangled_assert("handleTYPE_NAME");
    todo("implement");
}

_static __int32 handleTYPE_ATTR(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100A4140
{
    mangled_assert("handleTYPE_ATTR");
    todo("implement");
}

_static __int32 handleIMAG_NAME(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2) // 0x100A40C0
{
    mangled_assert("handleIMAG_NAME");
    todo("implement");
}

_static __int32 handleIMAG_ATTR(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2) // 0x100A3F60
{
    mangled_assert("handleIMAG_ATTR");
    todo("implement");
}

_static __int32 handleIMAG_DATA(IFF *iff, IFFChunk *pChunk, void *pContext1, void *pContext2) // 0x100A3FD0
{
    mangled_assert("handleIMAG_DATA");
    todo("implement");
}

_static __int32 handleTYPE_IMAG(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100A4400
{
    mangled_assert("handleTYPE_IMAG");
    todo("implement");
}

_static __int32 handleTYPE_GLPH(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x100A41B0
{
    mangled_assert("handleTYPE_GLPH");
    todo("implement");
}
#endif

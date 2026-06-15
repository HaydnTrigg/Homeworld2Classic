#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <platform\windowinterface.h>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <platform\platformexports.h>
#include <malloc.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <gl\r_defines.h>
#include <Objects\FontGlyphRenderer.h>
#include <gl\glext.h>
#include <xutility>
#include <Objects\TypefaceExtended.h>
#include <utility>
#include <iosfwd>
#include <Objects\RectanglePacker.h>
#include <vector>
#include <xmemory>
#include <Objects\CompiledText.h>
#include <math.h>
#include <Mathlib\matrix4.h>
#include <list>
#include <Mathlib\vector3.h>
#include <assist\typemagic.h>
#include <Mathlib\matrix3.h>
#include <map>
#include <xtree>
#include <Objects\TextureRegistry.h>
#include <Objects\FontSystem.h>
#include <Objects\ClipRect.h>
#include <algorithm>
#include <util\types.h>
#include <fileio\iff.h>
#include <platform\osdef.h>
#include <Objects\BitmapFont.h>
#include <debug\db.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\Typeface.h>
#include <Objects\Texture.h>
#include <Objects\Objects.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <fileio\filestream.h>
#include <wchar.h>
#include <string>
#include <Mathlib\fastmath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <gl\r_types.h>
#include <debug\ctassert.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<RectanglePacker,std::allocator<RectanglePacker> > PackerCont;
typedef __int32 FontID;

/* ---------- prototypes */


_static __int32 getStandardResolution(__int32 inRes);
_static __int32 getStandardResolution(__int32 inRes, char *buffer, __int32 bufferLength);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 g_standardResolution[8]; // 0x1010D160
    extern std::_Nil _Nil_obj; // 0x101121C8
}

/* ---------- public code */

_inline std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > >::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > >(std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > const &) // 0x100202F0
{
    mangled_assert("??0?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *>::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *>(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> const &) // 0x10020320
{
    mangled_assert("??0?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@@std@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > >::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > >(std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > const &) // 0x10020350
{
    mangled_assert("??0?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > >::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > >(std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > const &) // 0x10020380
{
    mangled_assert("??0?$pair@QAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@@std@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

BitmapFont::BitmapFont() // 0x100205F0
{
    mangled_assert("??0BitmapFont@@QAE@XZ");
    todo("implement");
}

_inline ClipRect::ClipRect(ClipRect const &) // 0x10020650
{
    mangled_assert("??0ClipRect@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline CompiledText::CompiledText(CompiledText const &) // 0x10020690
{
    mangled_assert("??0CompiledText@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline FontSystem::FontSystem(FontSystem const &) // 0x100206B0
{
    mangled_assert("??0FontSystem@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline FontSystem::Label::Label(FontSystem::Label const &) // 0x100208C0
{
    mangled_assert("??0Label@FontSystem@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline Typeface::Typeface(Typeface const &) // 0x10020950
{
    mangled_assert("??0Typeface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > >() // 0x10020B20
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTypeface@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTypeface@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<wchar_t const ,Glyph>,std::allocator<std::pair<wchar_t const ,Glyph> > >::~_List_buy<std::pair<wchar_t const ,Glyph>,std::allocator<std::pair<wchar_t const ,Glyph> > >() // 0x10020B30
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CB_WVGlyph@@@std@@V?$allocator@U?$pair@$$CB_WVGlyph@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > >,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >::~_Tree_buy<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > >,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >() // 0x10020C00
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > >() // 0x10020C10
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

BitmapFont::~BitmapFont() // 0x10021000
{
    mangled_assert("??1BitmapFont@@QAE@XZ");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > >,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >::~_Tree_buy<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > >,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >() // 0x10020C20
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ClipRect::~ClipRect() // 0x10021160
{
    mangled_assert("??1ClipRect@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > >,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > >::~_Tree_buy<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > >,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > >() // 0x10020C30
{
    mangled_assert("??1?$_Tree_buy@U?$pair@QAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@@std@@V?$allocator@U?$pair@QAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CompiledText::~CompiledText() // 0x10021170
{
    mangled_assert("??1CompiledText@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > >,0> >() // 0x10020C40
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FontSystem::Label::~Label() // 0x10021190
{
    mangled_assert("??1Label@FontSystem@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > >,0> >() // 0x10020C50
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@PAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@U?$less@PAVTypeface@@@3@V?$allocator@U?$pair@QAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ClipRect &ClipRect::operator=(ClipRect const &) // 0x10021640
{
    mangled_assert("??4ClipRect@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> >,0> >() // 0x10020C60
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CompiledText &CompiledText::operator=(CompiledText const &) // 0x10021670
{
    mangled_assert("??4CompiledText@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > >,0> >() // 0x10020C70
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FontSystem &FontSystem::operator=(FontSystem const &) // 0x100216C0
{
    mangled_assert("??4FontSystem@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > >() // 0x10020C80
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTypeface@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTypeface@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FontSystem::Label &FontSystem::Label::operator=(FontSystem::Label const &) // 0x100218B0
{
    mangled_assert("??4Label@FontSystem@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<wchar_t,Glyph,stdext::hash_compare<wchar_t,std::less<wchar_t> >,std::allocator<std::pair<wchar_t const ,Glyph> > >::~hash_map<wchar_t,Glyph,stdext::hash_compare<wchar_t,std::less<wchar_t> >,std::allocator<std::pair<wchar_t const ,Glyph> > >() // 0x10020CD0
{
    mangled_assert("??1?$hash_map@_WVGlyph@@V?$hash_compare@_WU?$less@_W@std@@@stdext@@V?$allocator@U?$pair@$$CB_WVGlyph@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline Typeface &Typeface::operator=(Typeface const &) // 0x10021960
{
    mangled_assert("??4Typeface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >::~map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >() // 0x10020D40
{
    mangled_assert("??1?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > >::~map<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > >() // 0x10020D60
{
    mangled_assert("??1?$map@PAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@U?$less@PAVTypeface@@@3@V?$allocator@U?$pair@QAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > >() // 0x10020D80
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >::~map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >() // 0x10020DA0
{
    mangled_assert("??1?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > >::~pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > >() // 0x10020DC0
{
    mangled_assert("??1?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *>() // 0x10020DF0
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVBitmapFont@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *>() // 0x10020E20
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTypeface@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > >::~pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > >() // 0x10020E50
{
    mangled_assert("??1?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > >::~pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > >() // 0x10020E90
{
    mangled_assert("??1?$pair@QAVTypeface@@V?$map@HV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$map@Vvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@UColourLess@CompiledText@@V?$allocator@U?$pair@$$CBVvector4@@V?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@std@@@3@@std@@@std@@@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *>() // 0x10020EC0
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVTypeface@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

__int32 BitmapFont::handleFONT_NAME(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10026D90
{
    mangled_assert("?handleFONT_NAME@BitmapFont@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 BitmapFont::handleFONT_ATTR(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10026CF0
{
    mangled_assert("?handleFONT_ATTR@BitmapFont@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 BitmapFont::handleFONT_TYPE(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10026E10
{
    mangled_assert("?handleFONT_TYPE@BitmapFont@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 BitmapFont::handleFONT(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x10026C80
{
    mangled_assert("?handleFONT@BitmapFont@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

bool BitmapFont::hasNormal() // 0x10026F60
{
    mangled_assert("?hasNormal@BitmapFont@@QAE_NXZ");
    todo("implement");
}

bool BitmapFont::hasBold() // 0x10026F40
{
    mangled_assert("?hasBold@BitmapFont@@QAE_NXZ");
    todo("implement");
}

bool BitmapFont::hasItalic() // 0x10026F50
{
    mangled_assert("?hasItalic@BitmapFont@@QAE_NXZ");
    todo("implement");
}

bool BitmapFont::hasUnderline() // 0x10026F70
{
    mangled_assert("?hasUnderline@BitmapFont@@QAE_NXZ");
    todo("implement");
}

Typeface *BitmapFont::findBestTypeface(char const *) // 0x100267D0
{
    mangled_assert("?findBestTypeface@BitmapFont@@AAEPAVTypeface@@PBD@Z");
    todo("implement");
}

bool BitmapFont::load(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32, __int32) // 0x10027050
{
    mangled_assert("?load@BitmapFont@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z");
    todo("implement");
}

Typeface *BitmapFont::createExtended(bool, bool, bool) // 0x10025420
{
    mangled_assert("?createExtended@BitmapFont@@AAEPAVTypeface@@_N00@Z");
    todo("implement");
}

void BitmapFont::addTypeface(Typeface *) // 0x10024600
{
    mangled_assert("?addTypeface@BitmapFont@@QAEXPAVTypeface@@@Z");
    todo("implement");
}

Typeface *BitmapFont::getTypeface(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x10026B90
{
    mangled_assert("?getTypeface@BitmapFont@@QAEPAVTypeface@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

Typeface *BitmapFont::getNormalTypeface() // 0x10026AC0
{
    mangled_assert("?getNormalTypeface@BitmapFont@@QAEPAVTypeface@@XZ");
    todo("implement");
}

Typeface *BitmapFont::getBoldTypeface() // 0x10026A20
{
    mangled_assert("?getBoldTypeface@BitmapFont@@QAEPAVTypeface@@XZ");
    todo("implement");
}

Typeface *BitmapFont::getItalicTypeface() // 0x10026A70
{
    mangled_assert("?getItalicTypeface@BitmapFont@@QAEPAVTypeface@@XZ");
    todo("implement");
}

Typeface *BitmapFont::getUnderlineTypeface() // 0x10026C40
{
    mangled_assert("?getUnderlineTypeface@BitmapFont@@QAEPAVTypeface@@XZ");
    todo("implement");
}

std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &BitmapFont::getFilename() const // 0x10026A60
{
    mangled_assert("?getFilename@BitmapFont@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

__int32 BitmapFont::getResolution() const // 0x10026AE0
{
    mangled_assert("?getResolution@BitmapFont@@QBEHXZ");
    todo("implement");
}

/* ---------- private code */

_static __int32 getStandardResolution(__int32 inRes) // 0x10026B10
{
    mangled_assert("getStandardResolution");
    todo("implement");
}

_static __int32 getStandardResolution(__int32 inRes, char *buffer, __int32 bufferLength) // 0x10026B40
{
    mangled_assert("getStandardResolution");
    todo("implement");
}
#endif

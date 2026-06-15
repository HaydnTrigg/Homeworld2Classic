#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\lotypes.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <malloc.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <platform\sysinputinterface.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <fileio\filestream.h>
#include <platform\cmdline.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Interface.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <Render\objects\image.h>
#include <Render\objects\hw2ddraw.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <fileio\filepath.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\windowinterface.h>
#include <util\colour.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Cursor.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <renderer.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::CursorMap_t
{
    char *file; // 0x0
    Cursor::Type_t type; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::CursorMap_t) == 8, "Invalid `anonymous-namespace'::CursorMap_t size");

typedef `anonymous-namespace'::CursorMap_t ?A0xb447e9ec::CursorMap_t;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,Cursor::CursorImage> > > > ImagesI;

/* ---------- prototypes */

extern bool cursorStartup();
extern bool cursorShutdown();

/* ---------- globals */

extern Cursor *g_pCursor; // 0x848730
extern char const *CURSOR_TEXTURE_EXTENSION; // 0x83BEF0
extern char const *CURSOR_HARDWARE_EXTENSION; // 0x83BEF4
extern char const *CURSOR_HOTSPOT_EXTENSION; // 0x83BEF8

/* ---------- private variables */

/* ---------- public code */

bool cursorStartup() // 0x5EAF55
{
    mangled_assert("?cursorStartup@@YG_NXZ");
    todo("implement");
}

bool cursorShutdown() // 0x5EAF22
{
    mangled_assert("?cursorShutdown@@YG_NXZ");
    todo("implement");
}

Cursor::Cursor() // 0x5EA76C
{
    mangled_assert("??0Cursor@@QAE@XZ");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,Cursor::CursorImage>,std::allocator<std::pair<int const ,Cursor::CursorImage> > >::~_Tree_buy<std::pair<int const ,Cursor::CursorImage>,std::allocator<std::pair<int const ,Cursor::CursorImage> > >() // 0x5EA81D
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHUCursorImage@Cursor@@@std@@V?$allocator@U?$pair@$$CBHUCursorImage@Cursor@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,Cursor::CursorImage,std::less<int>,std::allocator<std::pair<int const ,Cursor::CursorImage> >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,Cursor::CursorImage,std::less<int>,std::allocator<std::pair<int const ,Cursor::CursorImage> >,0> >() // 0x5EA826
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HUCursorImage@Cursor@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorImage@Cursor@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,Cursor::CursorImage,std::less<int>,std::allocator<std::pair<int const ,Cursor::CursorImage> > >::~map<int,Cursor::CursorImage,std::less<int>,std::allocator<std::pair<int const ,Cursor::CursorImage> > >() // 0x5EA82F
{
    mangled_assert("??1?$map@HUCursorImage@Cursor@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorImage@Cursor@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

Cursor::~Cursor() // 0x5EA834
{
    mangled_assert("??1Cursor@@QAE@XZ");
    todo("implement");
}

void Cursor::freeTextures() // 0x5EB626
{
    mangled_assert("?freeTextures@Cursor@@QAEXXZ");
    todo("implement");
}

void Cursor::setType(__int32) // 0x5EB6E8
{
    mangled_assert("?setType@Cursor@@QAEXH@Z");
    todo("implement");
}

__int32 Cursor::getType() // 0x5EB67B
{
    mangled_assert("?getType@Cursor@@QAEHXZ");
    todo("implement");
}

void Cursor::setScale(float, float) // 0x5EB6B4
{
    mangled_assert("?setScale@Cursor@@QAEXMM@Z");
    todo("implement");
}

bool Cursor::setVisible(bool) // 0x5EB711
{
    mangled_assert("?setVisible@Cursor@@QAE_N_N@Z");
    todo("implement");
}

bool Cursor::addImage(char const *, __int32) // 0x5EABE8
{
    mangled_assert("?addImage@Cursor@@QAE_NPBDH@Z");
    todo("implement");
}

void Cursor::draw(float, float) // 0x5EB00A
{
    mangled_assert("?draw@Cursor@@QAEXMM@Z");
    todo("implement");
}

void Cursor::draw() // 0x5EB2E5
{
    mangled_assert("?draw@Cursor@@QAEXXZ");
    todo("implement");
}

PrimRectangle const *Cursor::getMouseRectangle() // 0x5EB656
{
    mangled_assert("?getMouseRectangle@Cursor@@QAEPBUPrimRectangle@@XZ");
    todo("implement");
}

/* ---------- private code */
#endif

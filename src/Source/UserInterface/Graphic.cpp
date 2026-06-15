#if 0
/* ---------- headers */

#include "decomp.h"
#include <UserInterface\SharedGraphicFactory.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <xmemory0>
#include <UserInterface\pch.h>
#include <memory\memorylib.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\signals.h>
#include <crtdefs.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <platform\osdef.h>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Render\objects\compiledtext.h>
#include <boost\throw_exception.hpp>
#include <Render\objects\textureproxy.h>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <Mathlib\matvec.h>
#include <boost\detail\lwm_win32.hpp>
#include <Mathlib\vector2.h>
#include <list>
#include <UserInterface\Graphic.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <UserInterface\uiprimitives.h>
#include <Render\objects\core.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\NewText.h>
#include <Render\gl\types.h>
#include <Render\objects\fontsystem.h>
#include <util\colour.h>
#include <Render\objects\bitmapfont.h>
#include <map>
#include <Mathlib\vector4.h>
#include <xtree>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_types.h>
#include <UserInterface\RenderUIPrim.h>
#include <cassert>
#include <assert.h>
#include <util\types.h>
#include <UserInterface\StyleSheet.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\cliprect.h>
#include <Render\objects\textureregistry.h>
#include <boost\shared_ptr.hpp>
#include <hash_map>
#include <xhash>
#include <localizer\localizer.h>

/* ---------- constants */

/* ---------- definitions */

class NoMipMapInScope
{
public:
    _inline NoMipMapInScope();
    _inline ~NoMipMapInScope();
};
static_assert(sizeof(NoMipMapInScope) == 1, "Invalid NoMipMapInScope size");

/* ---------- prototypes */

/* ---------- globals */

extern char const *UI::TexturePoolName; // 0x83E078
extern bool UI::Graphic::m_usePixelUVCoords; // 0x84B998

/* ---------- private variables */

/* ---------- public code */

_inline NoMipMapInScope::NoMipMapInScope() // 0x67FB95
{
    mangled_assert("??0NoMipMapInScope@@QAE@XZ");
    todo("implement");
}

_inline NoMipMapInScope::~NoMipMapInScope() // 0x67FBF7
{
    mangled_assert("??1NoMipMapInScope@@QAE@XZ");
    todo("implement");
}

UI::Graphic::Graphic() // 0x67FB35
{
    mangled_assert("??0Graphic@UI@@QAE@XZ");
    todo("implement");
}

UI::Graphic::Graphic(Texture *, char const *) // 0x67FA35
{
    mangled_assert("??0Graphic@UI@@QAE@PAVTexture@@PBD@Z");
    todo("implement");
}

UI::Graphic::Graphic(LuaConfig &) // 0x67F8FC
{
    mangled_assert("??0Graphic@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::Graphic::Graphic(char const *) // 0x67FAC5
{
    mangled_assert("??0Graphic@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::Graphic::Graphic(UI::Graphic const &) // 0x67F96C
{
    mangled_assert("??0Graphic@UI@@QAE@ABV01@@Z");
    todo("implement");
}

UI::Graphic::~Graphic() // 0x67FBB3
{
    mangled_assert("??1Graphic@UI@@UAE@XZ");
    todo("implement");
}

void UI::Graphic::Init() // 0x680187
{
    mangled_assert("?Init@Graphic@UI@@AAEXXZ");
    todo("implement");
}

void UI::Graphic::FlipUV() // 0x68013F
{
    mangled_assert("?FlipUV@Graphic@UI@@QAEXXZ");
    todo("implement");
}

void UI::Graphic::ClipUV(Rect_i const &, Rect_i const &) // 0x67FC24
{
    mangled_assert("?ClipUV@Graphic@UI@@QAEXABURect_i@@0@Z");
    todo("implement");
}

void UI::Graphic::Draw(Vector_2i const &, Rect_i const &) // 0x680026
{
    mangled_assert("?Draw@Graphic@UI@@QAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::Graphic::DrawRepeat(Vector_2i const &, Rect_i const &, Rect_i const &) // 0x680064
{
    mangled_assert("?DrawRepeat@Graphic@UI@@QAEXABUVector_2i@@ABURect_i@@1@Z");
    todo("implement");
}

void UI::Graphic::Draw(Rect_i const &, Rect_i const &, unsigned __int32, unsigned __int32) // 0x67FD3F
{
    mangled_assert("?Draw@Graphic@UI@@QAEXABURect_i@@0II@Z");
    todo("implement");
}

void UI::Graphic::Load(char const *) // 0x6806CF
{
    mangled_assert("?Load@Graphic@UI@@QAEXPBD@Z");
    todo("implement");
}

bool UI::Graphic::TryLoad(char const *) // 0x680818
{
    mangled_assert("?TryLoad@Graphic@UI@@QAE_NPBD@Z");
    todo("implement");
}

void UI::Graphic::Load(LuaConfig &) // 0x6801D2
{
    mangled_assert("?Load@Graphic@UI@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

bool UI::Graphic::SetUsePixelUVCoords(bool use) // 0x680806
{
    mangled_assert("?SetUsePixelUVCoords@Graphic@UI@@SG_N_N@Z");
    todo("implement");
}

void UI::Graphic::ResetAnim() // 0x6807BD
{
    mangled_assert("?ResetAnim@Graphic@UI@@QAEXXZ");
    todo("implement");
}

void UI::Graphic::OnUpdate(unsigned __int32) // 0x680781
{
    mangled_assert("?OnUpdate@Graphic@UI@@MAEXI@Z");
    todo("implement");
}

void UI::Graphic::GetUV(float &, float &, float &, float &) const // 0x680160
{
    mangled_assert("?GetUV@Graphic@UI@@QBEXAAM000@Z");
    todo("implement");
}

void UI::Graphic::SetUV(float, float, float, float) // 0x6807D7
{
    mangled_assert("?SetUV@Graphic@UI@@QAEXMMMM@Z");
    todo("implement");
}

/* ---------- private code */
#endif

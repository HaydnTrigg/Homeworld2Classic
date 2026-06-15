#if 0
/* ---------- headers */

#include "decomp.h"
#include <bitset>
#include <xstring>
#include <xmemory0>
#include <Engine\renderer.h>
#include <Render\objects\typeface.h>
#include <UserInterface\pch.h>
#include <Render\objects\core.h>
#include <Render\gl\lotypes.h>
#include <Render\gl\types.h>
#include <UserInterface\UIFont.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <UserInterface\UICoord.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Render\objects\texture.h>
#include <Render\gl\r_types.h>
#include <Render\objects\textureregistry.h>
#include <new>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <xstddef>
#include <profile\profile.h>
#include <type_traits>
#include <iostream>
#include <Render\objects\cliprect.h>
#include <UserInterface\uiprimitives.h>
#include <xutility>
#include <UserInterface\uitypes.h>
#include <utility>
#include <iosfwd>
#include <platform\inputinterface.h>
#include <vector>
#include <platform\platformexports.h>
#include <xmemory>
#include <platform\keydefines.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <Render\gl\r_defines.h>
#include <boost\detail\lwm_win32.hpp>
#include <Render\gl\glext.h>
#include <list>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <UserInterface\UIDirectRenderer.h>
#include <util\dictionary.h>
#include <UserInterface\uirenderproxy.h>
#include <util\utilexports.h>
#include <Render\objects\fontsystem.h>
#include <UserInterface\RenderUIPrim.h>
#include <Render\objects\objects.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <map>
#include <xhash>
#include <xtree>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <platform\timer.h>
#include <Mathlib\matrix3.h>
#include <util\types.h>
#include <Render\objects\compiledtext.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Mathlib\mathutil.h>
#include <boost\shared_ptr.hpp>
#include <platform\osdef.h>
#include <debug\ctassert.h>
#include <UserInterface\NewText.h>
#include <localizer\localizer.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>

/* ---------- constants */

enum StatType
{
    ST_UntexQuad = 0,
    ST_TexQuad,
    ST_WCharText,
    ST_WCharTextFancy,
    ST_CharText,
    ST_Line,
    ST_Custom,
    ST_COUNT,
};

/* ---------- definitions */

/* ---------- prototypes */


_static void ClearStats();
_static void InitStats();
_static void AddStat(StatType type, float timeMS);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::vector<UIDirectRenderer::StatEntry,std::allocator<UIDirectRenderer::StatEntry> > s_stats; // 0x84B9D0
    extern char const *s_statTypeNames[7]; // 0x83E38C
    extern char const *s_shaderNames[1]; // 0x83E3A8
}

/* ---------- public code */

_inline UIDirectRenderer::StatEntry::StatEntry(UIDirectRenderer::StatEntry const &) // 0x68AE89
{
    mangled_assert("??0StatEntry@UIDirectRenderer@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline UIDirectRenderer::StatEntry::StatEntry() // 0x68AEAA
{
    mangled_assert("??0StatEntry@UIDirectRenderer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UIDirectRenderer::UIDirectRenderer() // 0x68AEBB
{
    mangled_assert("??0UIDirectRenderer@@QAE@XZ");
    todo("implement");
}

_inline UIDirectRenderer::StatEntry::~StatEntry() // 0x68AF34
{
    mangled_assert("??1StatEntry@UIDirectRenderer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UIDirectRenderer::~UIDirectRenderer() // 0x68AF39
{
    mangled_assert("??1UIDirectRenderer@@UAE@XZ");
    todo("implement");
}

void UIDirectRenderer::RenderBegin() // 0x68B1B5
{
    mangled_assert("?RenderBegin@UIDirectRenderer@@UAEXXZ");
    todo("implement");
}

void UIDirectRenderer::RenderEnd() // 0x68B21D
{
    mangled_assert("?RenderEnd@UIDirectRenderer@@UAEXXZ");
    todo("implement");
}

void UIDirectRenderer::InitShaders() // 0x68B0BE
{
    mangled_assert("?InitShaders@UIDirectRenderer@@AAEXXZ");
    todo("implement");
}

void UIDirectRenderer::RenderQuad(FatVertex *) // 0x68B282
{
    mangled_assert("?RenderQuad@UIDirectRenderer@@UAEXPAUFatVertex@@@Z");
    todo("implement");
}

void UIDirectRenderer::RenderQuad(FatVertex *, Texture *) // 0x68B2FF
{
    mangled_assert("?RenderQuad@UIDirectRenderer@@UAEXPAUFatVertex@@PAVTexture@@@Z");
    todo("implement");
}

void UIDirectRenderer::RenderQuad(FatVertex *, Texture *, UIRenderProxy::ShaderType) // 0x68B39D
{
    mangled_assert("?RenderQuad@UIDirectRenderer@@UAEXPAUFatVertex@@PAVTexture@@W4ShaderType@UIRenderProxy@@@Z");
    todo("implement");
}

void UIDirectRenderer::RenderText(UI::NewText const &, unsigned __int32) // 0x68B4E2
{
    mangled_assert("?RenderText@UIDirectRenderer@@UAEXABVNewText@UI@@I@Z");
    todo("implement");
}

void UIDirectRenderer::RenderText(float, float, char const *, UIText &) // 0x68B69C
{
    mangled_assert("?RenderText@UIDirectRenderer@@UAEXMMPBDAAUUIText@@@Z");
    todo("implement");
}

void UIDirectRenderer::RenderLine(FatVertex *) // 0x68B21E
{
    mangled_assert("?RenderLine@UIDirectRenderer@@UAEXPAUFatVertex@@@Z");
    todo("implement");
}

void UIDirectRenderer::RenderCustom(UICustom const *) // 0x68B1C3
{
    mangled_assert("?RenderCustom@UIDirectRenderer@@UAEXPBUUICustom@@@Z");
    todo("implement");
}

void UIDirectRenderer::EnableClipping(vector4 const &) // 0x68B063
{
    mangled_assert("?EnableClipping@UIDirectRenderer@@UAEXABVvector4@@@Z");
    todo("implement");
}

void UIDirectRenderer::DisableClipping() // 0x68B05E
{
    mangled_assert("?DisableClipping@UIDirectRenderer@@UAEXXZ");
    todo("implement");
}

std::vector<UIDirectRenderer::StatEntry,std::allocator<UIDirectRenderer::StatEntry> > const &UIDirectRenderer::GetStat() // 0x68B0B8
{
    mangled_assert("?GetStat@UIDirectRenderer@@SGABV?$vector@UStatEntry@UIDirectRenderer@@V?$allocator@UStatEntry@UIDirectRenderer@@@std@@@std@@XZ");
    todo("implement");
}

/* ---------- private code */

_static void ClearStats() // 0x68B03A
{
    mangled_assert("ClearStats");
    todo("implement");
}

_static void InitStats() // 0x68B0DC
{
    mangled_assert("InitStats");
    todo("implement");
}

_static void AddStat(StatType type, float timeMS) // 0x68B010
{
    mangled_assert("AddStat");
    todo("implement");
}
#endif

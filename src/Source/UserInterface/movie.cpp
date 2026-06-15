#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\objects\texture.h>
#include <Render\objects\textureproxy.h>
#include <assist\fixedstring.h>
#include <bitset>
#include <Render\objects\objects.h>
#include <assist\stlexstring.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <luaconfig\luaconfig.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <UserInterface\pch.h>
#include <xmemory0>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <memory\memorylib.h>
#include <algorithm>
#include <crtdefs.h>
#include <seInterface2\sedefinesshared.h>
#include <Render\gl\lotypes.h>
#include <boost\shared_array.hpp>
#include <boost\assert.hpp>
#include <Render\gl\r_types.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Render\objects\cliprect.h>
#include <xmemory>
#include <boost\throw_exception.hpp>
#include <compiler\compilerconfig.h>
#include <boost\detail\shared_count.hpp>
#include <math.h>
#include <localizer\localizer.h>
#include <boost\detail\lwm_win32.hpp>
#include <platform\cmdline.h>
#include <list>
#include <UserInterface\movie.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\uitypes.h>
#include <Render\gl\glext.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <Video\videoapi.h>
#include <map>
#include <Video\VideoInterface.h>
#include <xtree>
#include <SoundManager\SoundEntityHandle.h>
#include <UserInterface\UICoord.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <cassert>
#include <assert.h>
#include <util\types.h>
#include <Mathlib\matrix3.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\SoundParamManager.h>
#include <Render\objects\textureregistry.h>
#include <assist\gbitset.h>
#include <hash_map>
#include <xhash>
#include <Render\objects\compiledtext.h>
#include <Video\video.h>
#include <Video\pch.h>
#include <UserInterface\RenderUIPrim.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <assist\typemagic.h>
#include <Render\objects\fontsystem.h>
#include <Engine\NIS\NISManager.h>
#include <boost\cstdint.hpp>
#include <Render\objects\bitmapfont.h>
#include <debug\db.h>
#include <platform\timer.h>
#include <seInterface2\PatchID.h>
#include <platform\windowinterface.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_array.hpp>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <boost\shared_ptr.hpp>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <boost\config.hpp>
#include <UserInterface\StyleSheet.h>
#include <wchar.h>
#include <string>
#include <platform\osdef.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const DEFAULT_MS_BEFORE_ABORT; // 0x7B578C
    extern char const *cmdLineParam; // 0x83E160
    extern bool moviesDisabled; // 0x84B9A8
    extern Timer movieTimer; // 0x84B9B0
}

/* ---------- public code */

UI::Movie::Movie(LuaConfig &) // 0x687A91
{
    mangled_assert("??0Movie@UI@@QAE@AAVLuaConfig@@@Z");
    todo("implement");
}

UI::Movie::Movie(UI::Movie const &) // 0x687B63
{
    mangled_assert("??0Movie@UI@@QAE@ABV01@@Z");
    todo("implement");
}

void UI::Movie::CommonInit() // 0x687D7F
{
    mangled_assert("?CommonInit@Movie@UI@@AAEXXZ");
    todo("implement");
}

void UI::Movie::Load(LuaConfig &) // 0x6882B6
{
    mangled_assert("?Load@Movie@UI@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

UI::InterfaceElement *UI::Movie::clone() // 0x688BC5
{
    mangled_assert("?clone@Movie@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

UI::Movie::~Movie() // 0x687C6C
{
    mangled_assert("??1Movie@UI@@UAE@XZ");
    todo("implement");
}

float UI::Movie::ComputeFade(float) // 0x687E3E
{
    mangled_assert("?ComputeFade@Movie@UI@@AAEMM@Z");
    todo("implement");
}

void UI::Movie::Draw2(Vector_2i const &, Rect_i const &) // 0x687F1C
{
    mangled_assert("?Draw2@Movie@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

unsigned __int32 UI::Movie::GetElapsedTime() // 0x688242
{
    mangled_assert("?GetElapsedTime@Movie@UI@@QAEIXZ");
    todo("implement");
}

void UI::Movie::ComputeAbortFade() // 0x687DB0
{
    mangled_assert("?ComputeAbortFade@Movie@UI@@AAEXXZ");
    todo("implement");
}

void UI::Movie::OnUpdate(unsigned __int32) // 0x6884E5
{
    mangled_assert("?OnUpdate@Movie@UI@@UAEXI@Z");
    todo("implement");
}

void UI::Movie::Play(unsigned __int32) // 0x688708
{
    mangled_assert("?Play@Movie@UI@@QAEXI@Z");
    todo("implement");
}

void UI::Movie::Stop() // 0x688B38
{
    mangled_assert("?Stop@Movie@UI@@QAEXXZ");
    todo("implement");
}

void *UI::Movie::SetCallback(void (*)()) // 0x688B25
{
    mangled_assert("?SetCallback@Movie@UI@@QAEPAXP6GXXZ@Z");
    todo("implement");
}

void UI::Movie::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x68846E
{
    mangled_assert("?OnKeyPressed@Movie@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

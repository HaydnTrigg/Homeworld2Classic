#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\platformexports.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <seInterface2\sedefinesshared.h>
#include <Mathlib\matrix3.h>
#include <subtitle.h>
#include <prim.h>
#include <UserInterface\StyleSheet.h>
#include <new>
#include <UserInterface\pch.h>
#include <xstddef>
#include <type_traits>
#include <Render\objects\textureregistry.h>
#include <xutility>
#include <hash_map>
#include <utility>
#include <xhash>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <assist\stlexvector.h>
#include <Mathlib\vector2.h>
#include <Menus\SubtitleScreen.h>
#include <localizer\localizer.h>
#include <UserInterface\NewUIScreen.h>
#include <util\types.h>
#include <task.h>
#include <stack>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <fileio\filepath.h>
#include <Render\objects\textureproxy.h>
#include <platform\osdef.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\mathutil.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <seInterface2\SoundParamManager.h>
#include <UserInterface\Graphic.h>
#include <assist\gbitset.h>
#include <Render\objects\texture.h>
#include <assist\typemagic.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\lotypes.h>
#include <debug\db.h>
#include <Render\gl\r_types.h>
#include <util\colour.h>
#include <KeyBindings.h>
#include <boost\shared_ptr.hpp>
#include <platform\timer.h>
#include <config.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <region.h>
#include <platform\keydefines.h>
#include <NIS\NISSpeech.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x8399F0
    extern float subtitleTwkScrollDwellEnd; // 0x8399F4
    extern float subtitleTwkScrollShortest; // 0x8399F8
    extern float subtitleTwkTitleShortest; // 0x8399FC
}

/* ---------- public code */

_extern _sub_557AAF(NISSpeech *const);
NISSpeech::NISSpeech() // 0x557AAF
{
    mangled_assert("??0NISSpeech@@QAE@XZ");
    todo("implement");
    _sub_557AAF(this);
}

_extern void _sub_557AC0(NISSpeech *const);
NISSpeech::~NISSpeech() // 0x557AC0
{
    mangled_assert("??1NISSpeech@@QAE@XZ");
    todo("implement");
    _sub_557AC0(this);
}

_extern void _sub_557BA6(NISSpeech *const, char const *);
void NISSpeech::SetSpeechDirectory(char const *) // 0x557BA6
{
    mangled_assert("?SetSpeechDirectory@NISSpeech@@QAEXPBD@Z");
    todo("implement");
    _sub_557BA6(this, arg);
}

_extern void _sub_557AC5(NISSpeech *const, char const *, char *, unsigned __int32);
void NISSpeech::GetSpeechFilename(char const *, char *, unsigned __int32) // 0x557AC5
{
    mangled_assert("?GetSpeechFilename@NISSpeech@@AAEXPBDPADI@Z");
    todo("implement");
    _sub_557AC5(this, arg, arg, arg);
}

_extern void _sub_557AE5(NISSpeech *const, float, char const *, float);
void NISSpeech::PlaySpeech(float, char const *, float) // 0x557AE5
{
    mangled_assert("?PlaySpeech@NISSpeech@@QAEXMPBDM@Z");
    todo("implement");
    _sub_557AE5(this, arg, arg, arg);
}

_extern void _sub_557C0C(NISSpeech *const);
void NISSpeech::StopAll() // 0x557C0C
{
    mangled_assert("?StopAll@NISSpeech@@QAEXXZ");
    todo("implement");
    _sub_557C0C(this);
}

/* ---------- private code */
#endif

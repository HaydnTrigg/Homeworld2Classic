#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Render\objects\textureregistry.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <new>
#include <xstddef>
#include <localizer\localizer.h>
#include <type_traits>
#include <Mathlib\matrix3.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <boost\config.hpp>
#include <xmemory>
#include <platform\platformexports.h>
#include <Scar\Scar.h>
#include <Scar\ScarEventSys.h>
#include <compiler\compilerconfig.h>
#include <Scar\LuaSubtitle.h>
#include <Engine\subtitle.h>
#include <Engine\Menus\SubtitleScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <Engine\task.h>
#include <stack>
#include <boost\cstdint.hpp>
#include <luaconfig\luaconfig.h>
#include <vector>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <boost\detail\workaround.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Mathlib\vector3.h>
#include <Render\objects\objects.h>
#include <Mathlib\vector4.h>
#include <Render\objects\core.h>
#include <Scar\LuaRuleSystem.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <boost\utility.hpp>
#include <util\colour.h>
#include <Mathlib\matvec.h>
#include <boost\utility\addressof.hpp>
#include <cstdarg>
#include <boost\utility\base_from_member.hpp>
#include <stdarg.h>
#include <cassert>
#include <boost\utility_fwd.hpp>
#include <assert.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <Render\gl\r_types.h>
#include <Render\objects\textureproxy.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <boost\next_prior.hpp>
#include <Engine\prim.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <assist\typemagic.h>
#include <boost\throw_exception.hpp>
#include <boost\noncopyable.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\region.h>
#include <platform\keydefines.h>
#include <Mathlib\mathlibdll.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\fastmath.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <assist\stlexsmallvector.h>
#include <Engine\SubtitleCounter.h>
#include <list>
#include <debug\db.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaSubTitleLib :
    public LuaLibrary
{
public:
    LuaSubTitleLib(`anonymous-namespace'::LuaSubTitleLib const &); /* compiler_generated() */
    LuaSubTitleLib();
    virtual ~LuaSubTitleLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaSubTitleLib &operator=(`anonymous-namespace'::LuaSubTitleLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaSubTitleLib) == 16, "Invalid `anonymous-namespace'::LuaSubTitleLib size");

typedef `anonymous-namespace'::LuaSubTitleLib ?A0x9c1eb0f1::LuaSubTitleLib;

/* ---------- prototypes */

extern void Subtitle_Add(__int32 actor, char const *name, float time);
extern void LocationCard(char const *name, float time);
extern void Subtitle_Message(char const *msg, float time);
extern __int32 Subtitle_IsDone(__int32 actor);
extern __int32 LocationCard_IsDone();
extern __int32 Subtitle_IsMessageDone();
extern void Subtitle_TimeCounter(__int32 id, __int32 localizerID);
extern void Subtitle_TimeCounterEnd();

/* ---------- globals */

extern char const *LUALIB_SUBTITLE; // 0x842218

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x842208
    extern float subtitleTwkScrollDwellEnd; // 0x84220C
    extern float subtitleTwkScrollShortest; // 0x842210
    extern float subtitleTwkTitleShortest; // 0x842214
}

/* ---------- public code */

_extern void _sub_713828(__int32, char const *, float);
void Subtitle_Add(__int32 actor, char const *name, float time) // 0x713828
{
    mangled_assert("?Subtitle_Add@@YGXHPBDM@Z");
    todo("implement");
    _sub_713828(actor, name, time);
}

_extern void _sub_7134D3(char const *, float);
void LocationCard(char const *name, float time) // 0x7134D3
{
    mangled_assert("?LocationCard@@YGXPBDM@Z");
    todo("implement");
    _sub_7134D3(name, time);
}

_extern void _sub_713886(char const *, float);
void Subtitle_Message(char const *msg, float time) // 0x713886
{
    mangled_assert("?Subtitle_Message@@YGXPBDM@Z");
    todo("implement");
    _sub_713886(msg, time);
}

_extern __int32 _sub_71385A(__int32);
__int32 Subtitle_IsDone(__int32 actor) // 0x71385A
{
    mangled_assert("?Subtitle_IsDone@@YGHH@Z");
    todo("implement");
    __int32 __result = _sub_71385A(actor);
    return __result;
}

_extern __int32 _sub_7134F8();
__int32 LocationCard_IsDone() // 0x7134F8
{
    mangled_assert("?LocationCard_IsDone@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_7134F8();
    return __result;
}

_extern __int32 _sub_713872();
__int32 Subtitle_IsMessageDone() // 0x713872
{
    mangled_assert("?Subtitle_IsMessageDone@@YGHXZ");
    todo("implement");
    __int32 __result = _sub_713872();
    return __result;
}

_extern void _sub_7138AB(__int32, __int32);
void Subtitle_TimeCounter(__int32 id, __int32 localizerID) // 0x7138AB
{
    mangled_assert("?Subtitle_TimeCounter@@YGXHH@Z");
    todo("implement");
    _sub_7138AB(id, localizerID);
}

_extern void _sub_7138F5();
void Subtitle_TimeCounterEnd() // 0x7138F5
{
    mangled_assert("?Subtitle_TimeCounterEnd@@YGXXZ");
    todo("implement");
    _sub_7138F5();
}

/* ---------- private code */
#endif

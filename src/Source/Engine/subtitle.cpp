#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <Render\objects\textureregistry.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <hash_map>
#include <memory\memorylib.h>
#include <xhash>
#include <seInterface2\SampleID.h>
#include <crtdefs.h>
#include <seInterface2\SampleBase.h>
#include <Render\objects\cliprect.h>
#include <Collision\BVH\octree.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <boost\checked_delete.hpp>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <new>
#include <HyperspaceManager.h>
#include <Universe.h>
#include <SquadronList.h>
#include <Render\objects\draw.h>
#include <xstddef>
#include <Waypoint.h>
#include <Render\objects\material.h>
#include <type_traits>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <platform\windowinterface.h>
#include <Interpolation.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <scripting.h>
#include <Collision\Primitives\aabb.h>
#include <xmemory>
#include <scriptaccess.h>
#include <platform\timer.h>
#include <scripttypedef.h>
#include <Menus\SubtitleScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <seInterface2\sedefinesshared.h>
#include <task.h>
#include <compiler\compilerconfig.h>
#include <stack>
#include <list>
#include <Render\objects\textureproxy.h>
#include <Mathlib\vector3.h>
#include <platform\osdef.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathutil.h>
#include <map>
#include <xtree>
#include <Menus\SpeechRecall.h>
#include <boost\smart_ptr.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <boost\scoped_ptr.hpp>
#include <UserInterface\UICoord.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Collision\Primitives\obb.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\vector2.h>
#include <Mathlib\matvec.h>
#include <util\types.h>
#include <Render\objects\compiledtext.h>
#include <boost\cstdint.hpp>
#include <Render\gl\lotypes.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <cassert>
#include <Collision\BVH\profiling.h>
#include <assert.h>
#include <Interface.h>
#include <boost\scoped_array.hpp>
#include <Render\gl\r_types.h>
#include <Mathlib\quat.h>
#include <KeyBindings.h>
#include <SOBGroupManager.h>
#include <config.h>
#include <assist\typemagic.h>
#include <sobid.h>
#include <timerproxy.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <region.h>
#include <platform\keydefines.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Mathlib\luamathbinding.h>
#include <deque>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <fixedpoint.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <util\fixed.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <seInterface2\PatchBase.h>
#include <SoundManager\SoundManager.h>
#include <TimerMap.h>
#include <util\colour.h>
#include <UserInterface\uitypes.h>
#include <boost\shared_ptr.hpp>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <localizer\localizer.h>
#include <platform\inputinterface.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <platform\platformexports.h>
#include <selection.h>
#include <profile\profile.h>
#include <savegamedef.h>
#include <iostream>
#include <boost\detail\shared_count.hpp>
#include <dbdefines.h>
#include <bitset>
#include <UnitCaps\UnitCaps.h>
#include <boost\detail\lwm_win32.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <UserInterface\NewUIScreenManager.h>
#include <subtitle.h>
#include <prim.h>
#include <wchar.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>

/* ---------- constants */

/* ---------- definitions */

class DefaultTimer :
    public TimerProxy
{
public:
    DefaultTimer(DefaultTimer const &); /* compiler_generated() */
    _inline DefaultTimer();
    virtual _inline ~DefaultTimer() override;
    virtual _inline float GetDelta() const override;
    DefaultTimer &operator=(DefaultTimer const &); /* compiler_generated() */
};
static_assert(sizeof(DefaultTimer) == 4, "Invalid DefaultTimer size");

/* ---------- prototypes */

extern float getWidth(wchar_t const *string, __int32 length);
extern float getHeight(wchar_t const *string, __int32 length);
extern void addRegion(unsigned __int32 number, char const *textName, char const *iconName, char const *narrowTextName);
extern void addTheme(unsigned __int32 number, vector3 col, float fadeIn, float fadeOut, unsigned __int32 player, char const *bitmap, unsigned __int32 bitmaps);
extern void subtitleRegisterTweaks();

_static void screenShutdownCB();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern Subtitle *s_instance; // 0x843AC4
    extern char const kIconPath[21]; // 0x7622D8
    extern float subtitleTwkScrollDwellStart; // 0x83439C
    extern float subtitleTwkScrollDwellEnd; // 0x8343A0
    extern float subtitleTwkScrollShortest; // 0x8343A4
    extern float subtitleTwkTitleShortest; // 0x8343A8
}

/* ---------- public code */

_extern _sub_467AEC(Subtitle_Card *const);
Subtitle_Card::Subtitle_Card() // 0x467AEC
{
    mangled_assert("??0Subtitle_Card@@QAE@XZ");
    todo("implement");
    _sub_467AEC(this);
}

_extern _sub_467AF3(Subtitle_Region *const);
Subtitle_Region::Subtitle_Region() // 0x467AF3
{
    mangled_assert("??0Subtitle_Region@@QAE@XZ");
    todo("implement");
    _sub_467AF3(this);
}

_extern void _sub_468227(Subtitle_Region *const);
void Subtitle_Region::Reset() // 0x468227
{
    mangled_assert("?Reset@Subtitle_Region@@QAEXXZ");
    todo("implement");
    _sub_468227(this);
}

_extern void _sub_468327(Subtitle_Region *const, char const *);
void Subtitle_Region::SetTextWidget(char const *) // 0x468327
{
    mangled_assert("?SetTextWidget@Subtitle_Region@@QAEXPBD@Z");
    todo("implement");
    _sub_468327(this, arg);
}

_extern void _sub_468287(Subtitle_Region *const, char const *);
void Subtitle_Region::SetIconWidget(char const *) // 0x468287
{
    mangled_assert("?SetIconWidget@Subtitle_Region@@QAEXPBD@Z");
    todo("implement");
    _sub_468287(this, arg);
}

_extern void _sub_4682F8(Subtitle_Region *const, char const *);
void Subtitle_Region::SetNarrowTextWidget(char const *) // 0x4682F8
{
    mangled_assert("?SetNarrowTextWidget@Subtitle_Region@@QAEXPBD@Z");
    todo("implement");
    _sub_4682F8(this, arg);
}

_extern void _sub_46806E(Subtitle_Region *const, UI::SubtitleScreen *);
void Subtitle_Region::Hide(UI::SubtitleScreen *) // 0x46806E
{
    mangled_assert("?Hide@Subtitle_Region@@QAEXPAVSubtitleScreen@UI@@@Z");
    todo("implement");
    _sub_46806E(this, arg);
}

_extern bool _sub_4680DC(Subtitle_Region *const, UI::SubtitleScreen *);
bool Subtitle_Region::IsHidden(UI::SubtitleScreen *) // 0x4680DC
{
    mangled_assert("?IsHidden@Subtitle_Region@@QAE_NPAVSubtitleScreen@UI@@@Z");
    todo("implement");
    bool __result = _sub_4680DC(this, arg);
    return __result;
}

_extern void _sub_468370(Subtitle_Region *const, UI::SubtitleScreen *, wchar_t const *, vector4 const &, float, SubtitleMode);
void Subtitle_Region::ShowText(UI::SubtitleScreen *, wchar_t const *, vector4 const &, float, SubtitleMode) // 0x468370
{
    mangled_assert("?ShowText@Subtitle_Region@@QAEXPAVSubtitleScreen@UI@@PB_WABVvector4@@MW4SubtitleMode@@@Z");
    todo("implement");
    _sub_468370(this, arg, arg, arg, arg, arg);
}

_extern void _sub_468348(Subtitle_Region *const, UI::SubtitleScreen *, Texture *);
void Subtitle_Region::ShowIcon(UI::SubtitleScreen *, Texture *) // 0x468348
{
    mangled_assert("?ShowIcon@Subtitle_Region@@QAEXPAVSubtitleScreen@UI@@PAVTexture@@@Z");
    todo("implement");
    _sub_468348(this, arg, arg);
}

_extern void _sub_468319(Subtitle_Region *const, float);
void Subtitle_Region::SetTextAlphaFactor(float) // 0x468319
{
    mangled_assert("?SetTextAlphaFactor@Subtitle_Region@@QAEXM@Z");
    todo("implement");
    _sub_468319(this, arg);
}

_extern float _sub_468058(Subtitle_Region const *const);
float Subtitle_Region::GetTextAlphaFactor() const // 0x468058
{
    mangled_assert("?GetTextAlphaFactor@Subtitle_Region@@QBEMXZ");
    todo("implement");
    float __result = _sub_468058(this);
    return __result;
}

_extern void _sub_467E90(Subtitle_Region *const);
void Subtitle_Region::CardsClear() // 0x467E90
{
    mangled_assert("?CardsClear@Subtitle_Region@@QAEXXZ");
    todo("implement");
    _sub_467E90(this);
}

_extern void _sub_467E5C(Subtitle_Region *const, Subtitle_Card const &);
void Subtitle_Region::CardInsert(Subtitle_Card const &) // 0x467E5C
{
    mangled_assert("?CardInsert@Subtitle_Region@@QAEXABVSubtitle_Card@@@Z");
    todo("implement");
    _sub_467E5C(this, arg);
}

_extern void _sub_467E70(Subtitle_Region *const);
void Subtitle_Region::CardPopFirst() // 0x467E70
{
    mangled_assert("?CardPopFirst@Subtitle_Region@@QAEXXZ");
    todo("implement");
    _sub_467E70(this);
}

_extern Subtitle_Card *_sub_467E44(Subtitle_Region *const);
Subtitle_Card *Subtitle_Region::CardFirst() // 0x467E44
{
    mangled_assert("?CardFirst@Subtitle_Region@@QAEPAVSubtitle_Card@@XZ");
    todo("implement");
    Subtitle_Card * __result = _sub_467E44(this);
    return __result;
}

_extern bool _sub_467E9B(Subtitle_Region const *const);
bool Subtitle_Region::CardsEmpty() const // 0x467E9B
{
    mangled_assert("?CardsEmpty@Subtitle_Region@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_467E9B(this);
    return __result;
}

_extern void _sub_46816F(Subtitle_Region *const, UI::SubtitleScreen *, SubtitleMode);
void Subtitle_Region::OnModeChange(UI::SubtitleScreen *, SubtitleMode) // 0x46816F
{
    mangled_assert("?OnModeChange@Subtitle_Region@@QAEXPAVSubtitleScreen@UI@@W4SubtitleMode@@@Z");
    todo("implement");
    _sub_46816F(this, arg, arg);
}

_extern _sub_467B74(Subtitle_Theme *const);
Subtitle_Theme::Subtitle_Theme() // 0x467B74
{
    mangled_assert("??0Subtitle_Theme@@QAE@XZ");
    todo("implement");
    _sub_467B74(this);
}

_extern void _sub_467B8E(LuaBinding::ObjInternal4<unsigned int,char const *,char const *,char const *,void,LuaBinding::Functor4Free<unsigned int,char const *,char const *,char const *,void> > *const);
_inline LuaBinding::ObjInternal4<unsigned int,char const *,char const *,char const *,void,LuaBinding::Functor4Free<unsigned int,char const *,char const *,char const *,void> >::~ObjInternal4<unsigned int,char const *,char const *,char const *,void,LuaBinding::Functor4Free<unsigned int,char const *,char const *,char const *,void> >() // 0x467B8E
{
    mangled_assert("??1?$ObjInternal4@IPBDPBDPBDXV?$Functor4Free@IPBDPBDPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_467B8E(this);
}

_extern void _sub_467B94(LuaBinding::ObjInternal7<unsigned int,vector3,float,float,unsigned int,char const *,unsigned int,void,LuaBinding::Functor7Free<unsigned int,vector3,float,float,unsigned int,char const *,unsigned int,void> > *const);
_inline LuaBinding::ObjInternal7<unsigned int,vector3,float,float,unsigned int,char const *,unsigned int,void,LuaBinding::Functor7Free<unsigned int,vector3,float,float,unsigned int,char const *,unsigned int,void> >::~ObjInternal7<unsigned int,vector3,float,float,unsigned int,char const *,unsigned int,void,LuaBinding::Functor7Free<unsigned int,vector3,float,float,unsigned int,char const *,unsigned int,void> >() // 0x467B94
{
    mangled_assert("??1?$ObjInternal7@IVvector3@@MMIPBDIXV?$Functor7Free@IVvector3@@MMIPBDIX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_467B94(this);
}

_extern void _sub_467BA3(std::_List_buy<Subtitle_Card,std::allocator<Subtitle_Card> > *const);
_inline std::_List_buy<Subtitle_Card,std::allocator<Subtitle_Card> >::~_List_buy<Subtitle_Card,std::allocator<Subtitle_Card> >() // 0x467BA3
{
    mangled_assert("??1?$_List_buy@VSubtitle_Card@@V?$allocator@VSubtitle_Card@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_467BA3(this);
}

_extern void _sub_467BD1(Subtitle::Data *const);
_inline Subtitle::Data::~Data() // 0x467BD1
{
    mangled_assert("??1Data@Subtitle@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_467BD1(this);
}

_extern void _sub_467C8E(Subtitle_Theme *const);
Subtitle_Theme::~Subtitle_Theme() // 0x467C8E
{
    mangled_assert("??1Subtitle_Theme@@QAE@XZ");
    todo("implement");
    _sub_467C8E(this);
}

_extern _sub_467A61(DefaultTimer *const);
_inline DefaultTimer::DefaultTimer() // 0x467A61
{
    mangled_assert("??0DefaultTimer@@QAE@XZ");
    todo("implement");
    _sub_467A61(this);
}

_extern void _sub_467BE5(DefaultTimer *const);
_inline DefaultTimer::~DefaultTimer() // 0x467BE5
{
    mangled_assert("??1DefaultTimer@@UAE@XZ");
    todo("implement");
    _sub_467BE5(this);
}

_extern float _sub_468022(DefaultTimer const *const);
_inline float DefaultTimer::GetDelta() const // 0x468022
{
    mangled_assert("?GetDelta@DefaultTimer@@UBEMXZ");
    todo("implement");
    float __result = _sub_468022(this);
    return __result;
}

_extern _sub_467A12(Subtitle::Data *const);
_inline Subtitle::Data::Data() // 0x467A12
{
    mangled_assert("??0Data@Subtitle@@QAE@XZ");
    todo("implement");
    _sub_467A12(this);
}

_extern _sub_467A6A(Subtitle *const);
Subtitle::Subtitle() // 0x467A6A
{
    mangled_assert("??0Subtitle@@AAE@XZ");
    todo("implement");
    _sub_467A6A(this);
}

_extern void _sub_467BEC(Subtitle *const);
Subtitle::~Subtitle() // 0x467BEC
{
    mangled_assert("??1Subtitle@@AAE@XZ");
    todo("implement");
    _sub_467BEC(this);
}

_extern void _sub_467C52(Subtitle_Region *const);
_inline Subtitle_Region::~Subtitle_Region() // 0x467C52
{
    mangled_assert("??1Subtitle_Region@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_467C52(this);
}

_extern Subtitle *_sub_468E5C();
Subtitle *Subtitle::instance() // 0x468E5C
{
    mangled_assert("?instance@Subtitle@@SGPAV1@XZ");
    todo("implement");
    Subtitle * __result = _sub_468E5C();
    return __result;
}

_extern void _sub_4690FE();
void Subtitle::release() // 0x4690FE
{
    mangled_assert("?release@Subtitle@@SGXXZ");
    todo("implement");
    _sub_4690FE();
}

_extern bool _sub_469244();
bool Subtitle::startSystem() // 0x469244
{
    mangled_assert("?startSystem@Subtitle@@SG_NXZ");
    todo("implement");
    bool __result = _sub_469244();
    return __result;
}

_extern bool _sub_468CD6();
bool Subtitle::endSystem() // 0x468CD6
{
    mangled_assert("?endSystem@Subtitle@@SG_NXZ");
    todo("implement");
    bool __result = _sub_468CD6();
    return __result;
}

_extern void _sub_4691F8(Subtitle *const);
void Subtitle::start() // 0x4691F8
{
    mangled_assert("?start@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_4691F8(this);
}

_extern void _sub_469120(Subtitle *const);
void Subtitle::reset() // 0x469120
{
    mangled_assert("?reset@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_469120(this);
}

_extern void _sub_469162(Subtitle *const);
void Subtitle::resetTextures() // 0x469162
{
    mangled_assert("?resetTextures@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_469162(this);
}

_extern void _sub_468CD5(Subtitle *const);
void Subtitle::end() // 0x468CD5
{
    mangled_assert("?end@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_468CD5(this);
}

_extern void _sub_46935E(Subtitle *const);
void Subtitle::update() // 0x46935E
{
    mangled_assert("?update@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_46935E(this);
}

_extern void _sub_468240(Subtitle *const);
void Subtitle::ResetContinuous() // 0x468240
{
    mangled_assert("?ResetContinuous@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_468240(this);
}

_extern Subtitle_Region &_sub_468046(Subtitle *const, unsigned __int32);
Subtitle_Region &Subtitle::GetRegion(unsigned __int32) // 0x468046
{
    mangled_assert("?GetRegion@Subtitle@@QAEAAVSubtitle_Region@@I@Z");
    todo("implement");
    Subtitle_Region & __result = _sub_468046(this, arg);
    return __result;
}

_extern Subtitle_Theme &_sub_46805C(Subtitle *const, unsigned __int32);
Subtitle_Theme &Subtitle::GetTheme(unsigned __int32) // 0x46805C
{
    mangled_assert("?GetTheme@Subtitle@@QAEAAVSubtitle_Theme@@I@Z");
    todo("implement");
    Subtitle_Theme & __result = _sub_46805C(this, arg);
    return __result;
}

_extern void _sub_46821D(Subtitle *const);
void Subtitle::ReleaseScreen() // 0x46821D
{
    mangled_assert("?ReleaseScreen@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_46821D(this);
}

_extern void _sub_468403(Subtitle *const, TimerProxy *);
void Subtitle::TimerPush(TimerProxy *) // 0x468403
{
    mangled_assert("?TimerPush@Subtitle@@QAEXPAVTimerProxy@@@Z");
    todo("implement");
    _sub_468403(this, arg);
}

_extern void _sub_4683E0(Subtitle *const);
void Subtitle::TimerPop() // 0x4683E0
{
    mangled_assert("?TimerPop@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_4683E0(this);
}

_extern void _sub_4682A8(Subtitle *const, SubtitleMode);
void Subtitle::SetMode(SubtitleMode) // 0x4682A8
{
    mangled_assert("?SetMode@Subtitle@@QAEXW4SubtitleMode@@@Z");
    todo("implement");
    _sub_4682A8(this, arg);
}

_extern void _sub_4685FC(Subtitle *const, __int32, char const *, char const *, float, Subtitle::RegionDef);
void Subtitle::add(__int32, char const *, char const *, float, Subtitle::RegionDef) // 0x4685FC
{
    mangled_assert("?add@Subtitle@@QAEXHPBD0MW4RegionDef@1@@Z");
    todo("implement");
    _sub_4685FC(this, arg, arg, arg, arg, arg);
}

_extern void _sub_468932(Subtitle *const, Subtitle_Region::Updater *);
void Subtitle::addTimeCounter(Subtitle_Region::Updater *) // 0x468932
{
    mangled_assert("?addTimeCounter@Subtitle@@QAEXPAUUpdater@Subtitle_Region@@@Z");
    todo("implement");
    _sub_468932(this, arg);
}

_extern void _sub_468CDE(Subtitle *const);
void Subtitle::endTimeCounter() // 0x468CDE
{
    mangled_assert("?endTimeCounter@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_468CDE(this);
}

_extern void _sub_4691B8(Subtitle *const);
void Subtitle::skip() // 0x4691B8
{
    mangled_assert("?skip@Subtitle@@QAEXXZ");
    todo("implement");
    _sub_4691B8(this);
}

_extern bool _sub_468E62(Subtitle *const, __int32, Subtitle::RegionDef);
bool Subtitle::isdone(__int32, Subtitle::RegionDef) // 0x468E62
{
    mangled_assert("?isdone@Subtitle@@QAE_NHW4RegionDef@1@@Z");
    todo("implement");
    bool __result = _sub_468E62(this, arg, arg);
    return __result;
}

_extern float _sub_468D90(wchar_t const *, __int32);
float getWidth(wchar_t const *string, __int32 length) // 0x468D90
{
    mangled_assert("?getWidth@@YGMPB_WH@Z");
    todo("implement");
    float __result = _sub_468D90(string, length);
    return __result;
}

_extern float _sub_468D59(wchar_t const *, __int32);
float getHeight(wchar_t const *string, __int32 length) // 0x468D59
{
    mangled_assert("?getHeight@@YGMPB_WH@Z");
    todo("implement");
    float __result = _sub_468D59(string, length);
    return __result;
}

_extern void _sub_468A09(Subtitle *const, Subtitle_Region *, Subtitle_Theme *, __int32, wchar_t **, unsigned char, float);
void Subtitle::createSubtitleCards(Subtitle_Region *, Subtitle_Theme *, __int32, wchar_t **, unsigned char, float) // 0x468A09
{
    mangled_assert("?createSubtitleCards@Subtitle@@AAEXPAVSubtitle_Region@@PAVSubtitle_Theme@@HPAPA_WEM@Z");
    todo("implement");
    _sub_468A09(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_469163(Subtitle *const, wchar_t *, Subtitle_Region **, Subtitle_Theme **, char *, unsigned char *);
void Subtitle::scanForControls(wchar_t *, Subtitle_Region **, Subtitle_Theme **, char *, unsigned char *) // 0x469163
{
    mangled_assert("?scanForControls@Subtitle@@AAEXPA_WPAPAVSubtitle_Region@@PAPAVSubtitle_Theme@@PADPAE@Z");
    todo("implement");
    _sub_469163(this, arg, arg, arg, arg, arg);
}

_extern bool _sub_468E9C(Subtitle *const);
bool Subtitle::linkToScreen() // 0x468E9C
{
    mangled_assert("?linkToScreen@Subtitle@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_468E9C(this);
    return __result;
}

_extern void _sub_468B45(Subtitle *const, Subtitle_Region *, float);
void Subtitle::draw(Subtitle_Region *, float) // 0x468B45
{
    mangled_assert("?draw@Subtitle@@AAEXPAVSubtitle_Region@@M@Z");
    todo("implement");
    _sub_468B45(this, arg, arg);
}

_extern void _sub_4687AF(unsigned __int32, char const *, char const *, char const *);
void addRegion(unsigned __int32 number, char const *textName, char const *iconName, char const *narrowTextName) // 0x4687AF
{
    mangled_assert("?addRegion@@YGXIPBD00@Z");
    todo("implement");
    _sub_4687AF(number, textName, iconName, narrowTextName);
}

_extern void _sub_4687ED(unsigned __int32, vector3, float, float, unsigned __int32, char const *, unsigned __int32);
void addTheme(unsigned __int32 number, vector3 col, float fadeIn, float fadeOut, unsigned __int32 player, char const *bitmap, unsigned __int32 bitmaps) // 0x4687ED
{
    mangled_assert("?addTheme@@YGXIVvector3@@MMIPBDI@Z");
    todo("implement");
    _sub_4687ED(number, col, fadeIn, fadeOut, player, bitmap, bitmaps);
}

_extern void _sub_469015(Subtitle *const, char const *);
void Subtitle::readLuaFile(char const *) // 0x469015
{
    mangled_assert("?readLuaFile@Subtitle@@AAEXPBD@Z");
    todo("implement");
    _sub_469015(this, arg);
}

_extern void _sub_469294();
void subtitleRegisterTweaks() // 0x469294
{
    mangled_assert("?subtitleRegisterTweaks@@YGXXZ");
    todo("implement");
    _sub_469294();
}

/* ---------- private code */

_extern void _sub_4691A0();
_static void screenShutdownCB() // 0x4691A0
{
    mangled_assert("screenShutdownCB");
    todo("implement");
    _sub_4691A0();
}
#endif

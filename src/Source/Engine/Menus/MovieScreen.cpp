#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <crtdefs.h>
#include <platform\cmdline.h>
#include <SensorsManager.h>
#include <fixedpoint.h>
#include <SoundManager\SoundManager.h>
#include <util\fixed.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Mathlib\matrix3.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <seInterface2\PatchBase.h>
#include <boost\checked_delete.hpp>
#include <seInterface2\SoundParams.h>
#include <new>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <SoundManager\SoundEntityHandle.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <abilities.h>
#include <compiler\compilerconfig.h>
#include <Cursor.h>
#include <localizer\localizer.h>
#include <string.h>
#include <list>
#include <NIS\NISManager.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <seInterface2\SampleID.h>
#include <prim.h>
#include <platform\osdef.h>
#include <seInterface2\SampleBase.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <boost\smart_ptr.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <timerproxy.h>
#include <Render\objects\texture.h>
#include <Collision\BVH\octree.h>
#include <Render\objects\objects.h>
#include <Collision\BVH\span.h>
#include <UserInterface\UICoord.h>
#include <Render\objects\core.h>
#include <Collision\BVH\Internal\span_i.h>
#include <luaconfig\luabinding.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Collision\BVH\proxy.h>
#include <Mathlib\matvec.h>
#include <Collision\intersect.h>
#include <Mathlib\vector2.h>
#include <Collision\primitivesfwd.h>
#include <util\types.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Universe.h>
#include <Waypoint.h>
#include <Render\gl\lotypes.h>
#include <SobUnmoveable.h>
#include <Camera\OrbitParameters.h>
#include <boost\cstdint.hpp>
#include <sob.h>
#include <sobstatic.h>
#include <cassert>
#include <Collision\Primitives\sphere.h>
#include <assert.h>
#include <Interpolation.h>
#include <Render\gl\r_types.h>
#include <boost\scoped_array.hpp>
#include <Collision\Primitives\aabb.h>
#include <platform\timer.h>
#include <Mathlib\quat.h>
#include <seInterface2\sedefinesshared.h>
#include <KeyBindings.h>
#include <config.h>
#include <fileio\filepath.h>
#include <assist\typemagic.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <pathpoints.h>
#include <subtitle.h>
#include <debug\db.h>
#include <Menus\SubtitleScreen.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <Collision\Primitives\obb.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <Menus\MenuSupport.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Collision\Primitives\capsule.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <MainUI.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <UserInterface\movie.h>
#include <Menus\MovieScreen.h>
#include <SOBGroupManager.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <sobid.h>

/* ---------- constants */

/* ---------- definitions */

class UI::MovieSpeech
{
public:
    MovieSpeech(UI::MovieSpeech const &); /* compiler_generated() */
    MovieSpeech();
    ~MovieSpeech();
    bool Load(char const *);
    void Play();
    void OnUpdate(unsigned __int32);
    void Stop();
    void SetSpeechFolder(char const *);
    void AddLocalizedText(char const *);
    void AddSpeechEvent(float, char const *);
    void AddSubtitleEvent(float, __int32, char const *, float);
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > getSpeechFname(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void resetLocalizedText();
    struct SpeechEvent
    {
        unsigned __int32 timeMS; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > speechName; // 0x4
        _inline SpeechEvent(UI::MovieSpeech::SpeechEvent const &); /* compiler_generated() */
        _inline SpeechEvent(); /* compiler_generated() */
        _inline ~SpeechEvent(); /* compiler_generated() */
        UI::MovieSpeech::SpeechEvent &operator=(UI::MovieSpeech::SpeechEvent const &); /* compiler_generated() */
    };
    static_assert(sizeof(SpeechEvent) == 28, "Invalid SpeechEvent size");
    struct SubtitleEvent
    {
        unsigned __int32 timeMS; // 0x0
        __int32 actor; // 0x4
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > speechName; // 0x8
        float placeHoldTime; // 0x20
        _inline SubtitleEvent(UI::MovieSpeech::SubtitleEvent const &); /* compiler_generated() */
        _inline SubtitleEvent(); /* compiler_generated() */
        _inline ~SubtitleEvent(); /* compiler_generated() */
        UI::MovieSpeech::SubtitleEvent &operator=(UI::MovieSpeech::SubtitleEvent const &); /* compiler_generated() */
    };
    static_assert(sizeof(SubtitleEvent) == 36, "Invalid SubtitleEvent size");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_origSpeechFolderName; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_speechFolderName; // 0x18
    std::vector<UI::MovieSpeech::SpeechEvent,std::allocator<UI::MovieSpeech::SpeechEvent> > m_speechEvents; // 0x30
    unsigned __int32 m_nextSpeechEvent; // 0x3C
    std::vector<UI::MovieSpeech::SubtitleEvent,std::allocator<UI::MovieSpeech::SubtitleEvent> > m_subtitleEvents; // 0x40
    unsigned __int32 m_nextSubtitleEvent; // 0x4C
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_localizeTxtFnames; // 0x50
public:
    UI::MovieSpeech &operator=(UI::MovieSpeech const &); /* compiler_generated() */
};
static_assert(sizeof(UI::MovieSpeech) == 92, "Invalid UI::MovieSpeech size");

class UI::MovieTimer :
    public TimerProxy
{
public:
    MovieTimer(UI::MovieTimer const &); /* compiler_generated() */
    _inline MovieTimer(UI::Movie *);
    virtual _inline ~MovieTimer() override;
    virtual _inline float GetDelta() const override;
    _inline void Update(unsigned __int32);
private:
    unsigned __int32 m_deltaMS; // 0x4
    unsigned __int32 m_prevElapsedTimeMS; // 0x8
    UI::Movie *m_pMovie; // 0xC
public:
    UI::MovieTimer &operator=(UI::MovieTimer const &); /* compiler_generated() */
};
static_assert(sizeof(UI::MovieTimer) == 16, "Invalid UI::MovieTimer size");

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 UI::Animatic::m_nisHandle; // 0x83A290
extern bool UI::Animatic::m_restoreInterface; // 0x846CF4
extern void (*UI::Animatic::m_onDoneCB)(); // 0x846CF8
extern UI::MovieScreen *UI::Animatic::m_pMovieScreen; // 0x846CFC
extern char const *UI::Animatic::ScreenName; // 0x83A2A4
extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > UI::Animatic::m_filename; // 0x83A2AC
extern bool UI::Animatic::m_bCursorWasVisible; // 0x83A2A8
extern bool UI::Animatic::m_bpaused; // 0x846CF5
extern bool UI::Animatic::m_bdisabledInput; // 0x846CF6

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x83A294
    extern float subtitleTwkScrollDwellEnd; // 0x83A298
    extern float subtitleTwkScrollShortest; // 0x83A29C
    extern float subtitleTwkTitleShortest; // 0x83A2A0
}

/* ---------- public code */

UI::MovieSpeech::MovieSpeech() // 0x590B23
{
    mangled_assert("??0MovieSpeech@UI@@QAE@XZ");
    todo("implement");
}

UI::MovieSpeech::~MovieSpeech() // 0x590CAB
{
    mangled_assert("??1MovieSpeech@UI@@QAE@XZ");
    todo("implement");
}

bool UI::MovieSpeech::Load(char const *) // 0x591579
{
    mangled_assert("?Load@MovieSpeech@UI@@QAE_NPBD@Z");
    todo("implement");
}

void UI::MovieSpeech::Play() // 0x591B81
{
    mangled_assert("?Play@MovieSpeech@UI@@QAEXXZ");
    todo("implement");
}

void UI::MovieSpeech::OnUpdate(unsigned __int32) // 0x5919CC
{
    mangled_assert("?OnUpdate@MovieSpeech@UI@@QAEXI@Z");
    todo("implement");
}

void UI::MovieSpeech::Stop() // 0x591E83
{
    mangled_assert("?Stop@MovieSpeech@UI@@QAEXXZ");
    todo("implement");
}

void UI::MovieSpeech::SetSpeechFolder(char const *) // 0x591BA1
{
    mangled_assert("?SetSpeechFolder@MovieSpeech@UI@@QAEXPBD@Z");
    todo("implement");
}

void UI::MovieSpeech::AddLocalizedText(char const *) // 0x590F07
{
    mangled_assert("?AddLocalizedText@MovieSpeech@UI@@QAEXPBD@Z");
    todo("implement");
}

void UI::MovieSpeech::AddSpeechEvent(float, char const *) // 0x590FBF
{
    mangled_assert("?AddSpeechEvent@MovieSpeech@UI@@QAEXMPBD@Z");
    todo("implement");
}

void UI::MovieSpeech::AddSubtitleEvent(float, __int32, char const *, float) // 0x5910A7
{
    mangled_assert("?AddSubtitleEvent@MovieSpeech@UI@@QAEXMHPBDM@Z");
    todo("implement");
}

std::basic_string<char,std::char_traits<char>,std::allocator<char> > UI::MovieSpeech::getSpeechFname(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x59244B
{
    mangled_assert("?getSpeechFname@MovieSpeech@UI@@AAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV34@@Z");
    todo("implement");
}

void UI::MovieSpeech::resetLocalizedText() // 0x592606
{
    mangled_assert("?resetLocalizedText@MovieSpeech@UI@@AAEXXZ");
    todo("implement");
}

_inline UI::MovieTimer::MovieTimer(UI::Movie *) // 0x590B84
{
    mangled_assert("??0MovieTimer@UI@@QAE@PAVMovie@1@@Z");
    todo("implement");
}

_inline UI::MovieSpeech::SpeechEvent::SpeechEvent(UI::MovieSpeech::SpeechEvent const &) // 0x590B9E
{
    mangled_assert("??0SpeechEvent@MovieSpeech@UI@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::MovieTimer::~MovieTimer() // 0x590D08
{
    mangled_assert("??1MovieTimer@UI@@UAE@XZ");
    todo("implement");
}

_inline UI::MovieSpeech::SpeechEvent::SpeechEvent() // 0x590BBB
{
    mangled_assert("??0SpeechEvent@MovieSpeech@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::MovieSpeech::SpeechEvent::~SpeechEvent() // 0x590D0F
{
    mangled_assert("??1SpeechEvent@MovieSpeech@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::MovieSpeech::SubtitleEvent::SubtitleEvent(UI::MovieSpeech::SubtitleEvent const &) // 0x590BCD
{
    mangled_assert("??0SubtitleEvent@MovieSpeech@UI@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::MovieSpeech::SubtitleEvent::~SubtitleEvent() // 0x590D17
{
    mangled_assert("??1SubtitleEvent@MovieSpeech@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::MovieSpeech::SubtitleEvent::SubtitleEvent() // 0x590BF8
{
    mangled_assert("??0SubtitleEvent@MovieSpeech@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,UI::MovieSpeech> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,UI::MovieSpeech> >() // 0x590C0A
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVMovieSpeech@UI@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline float UI::MovieTimer::GetDelta() const // 0x5914BC
{
    mangled_assert("?GetDelta@MovieTimer@UI@@UBEMXZ");
    todo("implement");
}

_inline LuaBinding::ObjInternal2<float,char const *,void,LuaBinding::Functor2MemberNonConst<float,char const *,void,UI::MovieSpeech> >::~ObjInternal2<float,char const *,void,LuaBinding::Functor2MemberNonConst<float,char const *,void,UI::MovieSpeech> >() // 0x590C10
{
    mangled_assert("??1?$ObjInternal2@MPBDXV?$Functor2MemberNonConst@MPBDXVMovieSpeech@UI@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal4<float,int,char const *,float,void,LuaBinding::Functor4MemberNonConst<float,int,char const *,float,void,UI::MovieSpeech> >::~ObjInternal4<float,int,char const *,float,void,LuaBinding::Functor4MemberNonConst<float,int,char const *,float,void,UI::MovieSpeech> >() // 0x590C16
{
    mangled_assert("??1?$ObjInternal4@MHPBDMXV?$Functor4MemberNonConst@MHPBDMXVMovieSpeech@UI@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline void UI::MovieTimer::Update(unsigned __int32) // 0x591FCE
{
    mangled_assert("?Update@MovieTimer@UI@@QAEXI@Z");
    todo("implement");
}

UI::MovieScreen::MovieScreen(char const *, char const *) // 0x590A99
{
    mangled_assert("??0MovieScreen@UI@@QAE@PBD0@Z");
    todo("implement");
}

UI::MovieScreen::~MovieScreen() // 0x590C3B
{
    mangled_assert("??1MovieScreen@UI@@UAE@XZ");
    todo("implement");
}

void UI::MovieScreen::OnPostLoad() // 0x5918DD
{
    mangled_assert("?OnPostLoad@MovieScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::MovieScreen::Init() // 0x591503
{
    mangled_assert("?Init@MovieScreen@UI@@UAEXXZ");
    todo("implement");
}

void UI::MovieScreen::Uninit() // 0x591EEB
{
    mangled_assert("?Uninit@MovieScreen@UI@@UAEXXZ");
    todo("implement");
}

void UI::MovieScreen::OnActivate(bool) // 0x5917C4
{
    mangled_assert("?OnActivate@MovieScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::MovieScreen::Draw() // 0x5914B7
{
    mangled_assert("?Draw@MovieScreen@UI@@UAEXXZ");
    todo("implement");
}

void UI::MovieScreen::Update(unsigned __int32) // 0x591EEC
{
    mangled_assert("?Update@MovieScreen@UI@@UAEXI@Z");
    todo("implement");
}

void UI::MovieScreen::OnLoad(LuaConfig &) // 0x591807
{
    mangled_assert("?OnLoad@MovieScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::MovieScreen::Stop() // 0x591E65
{
    mangled_assert("?Stop@MovieScreen@UI@@QAEXXZ");
    todo("implement");
}

void UI::MovieScreen::Play(unsigned __int32) // 0x591B47
{
    mangled_assert("?Play@MovieScreen@UI@@QAEXI@Z");
    todo("implement");
}

void UI::MovieScreen::SetMovieCallback(void (*)()) // 0x591B8A
{
    mangled_assert("?SetMovieCallback@MovieScreen@UI@@UAEXP6GXXZ@Z");
    todo("implement");
}

bool UI::MovieScreen::IsOpaque() const // 0x591535
{
    mangled_assert("?IsOpaque@MovieScreen@UI@@QBE_NXZ");
    todo("implement");
}

void UI::MovieScreen::OnDone() // 0x5917EF
{
    mangled_assert("?OnDone@MovieScreen@UI@@QAEXXZ");
    todo("implement");
}

void UI::Animatic::Done() // 0x5912FB
{
    mangled_assert("?Done@Animatic@UI@@SGXXZ");
    todo("implement");
}

void UI::MovieScreen::OnRootClicked(UI::InterfaceElement *rootFrame, __int32 x, __int32 y, unsigned __int32 b) // 0x5919AF
{
    mangled_assert("?OnRootClicked@MovieScreen@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

bool UI::Animatic::StartAnimatic(char const *filename, unsigned __int32 const nisHandle, bool const pause, bool const disableInput, bool const restoreInterface) // 0x591C92
{
    mangled_assert("?StartAnimatic@Animatic@UI@@SG_NPBDI_N11@Z");
    todo("implement");
}

void UI::Animatic::Stop() // 0x591E37
{
    mangled_assert("?Stop@Animatic@UI@@SGXXZ");
    todo("implement");
}

void UI::Animatic::SetOnDoneCB(void (*cb)()) // 0x591B95
{
    mangled_assert("?SetOnDoneCB@Animatic@UI@@SGXP6GXXZ@Z");
    todo("implement");
}

bool UI::Animatic::IsRenderingExclusively() // 0x59155B
{
    mangled_assert("?IsRenderingExclusively@Animatic@UI@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua.h>
#include <Render\gl\r_defines.h>
#include <Render\objects\cliprect.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\glext.h>
#include <Menus\EventsScreen.h>
#include <xstring>
#include <UserInterface\NewUIScreen.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <UserInterface\NewFrame.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <localizer\localizer.h>
#include <playerresourcetype.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\matrix3.h>
#include <LevelDesc.h>
#include <task.h>
#include <Hash.h>
#include <boost\checked_delete.hpp>
#include <fileio\md5.h>
#include <new>
#include <fixedpoint.h>
#include <Collision\Primitives\capsule.h>
#include <gamestructimpl.h>
#include <util\fixed.h>
#include <xstddef>
#include <Collision\Primitives\segment.h>
#include <Badge.h>
#include <type_traits>
#include <Collision\BVH\profiling.h>
#include <region.h>
#include <UserInterface\StyleSheet.h>
#include <prim.h>
#include <Player.h>
#include <UserInterface\pch.h>
#include <SquadronList.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <sobid.h>
#include <xhash>
#include <GameEventDefs.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewButton.h>
#include <Menus\ObjectivesList.h>
#include <Camera\OrbitParameters.h>
#include <Objectives.h>
#include <boost\static_assert.hpp>
#include <list>
#include <GameEventSys.h>
#include <KeyBindings.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <config.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <TeamColourRegistry.h>
#include <Render\objects\compiledtext.h>
#include <savegame.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <SelTarg.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector2.h>
#include <BuildManager.h>
#include <util\types.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <boost\cstdint.hpp>
#include <UserInterface\uiprimitives.h>
#include <Camera\CameraOrbitTarget.h>
#include <UserInterface\NewText.h>
#include <boost\config.hpp>
#include <Camera\Camera.h>
#include <cassert>
#include <Render\objects\fontsystem.h>
#include <Camera\Frustum.h>
#include <assert.h>
#include <Render\objects\bitmapfont.h>
#include <Camera\Plane3.h>
#include <Mathlib\quat.h>
#include <Render\objects\textureproxy.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <gameSettings.h>
#include <Render\objects\texture.h>
#include <syncChecking.h>
#include <Render\objects\objects.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\core.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <ResearchManager.h>
#include <Mathlib\matvec.h>
#include <debug\db.h>
#include <Render\gl\lotypes.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <deque>
#include <Collision\BVH\Internal\span_i.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Collision\BVH\proxy.h>
#include <stack>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <util\colour.h>
#include <Render\gl\r_types.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <Race.h>
#include <boost\detail\shared_count.hpp>
#include <Menus\NewTaskbar.h>
#include <boost\detail\lwm_win32.hpp>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\InterfaceElement.h>
#include <wchar.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <luaconfig\luaconfig.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::EventsScreenEntry
{
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_displayText; // 0x0
    vector3 m_position; // 0x18
    bool m_hasPosition; // 0x24
    bool m_objective; // 0x25
    __int32 m_objectiveId; // 0x28
    _inline EventsScreenEntry(UI::EventsScreenEntry const &); /* compiler_generated() */
    _inline EventsScreenEntry(); /* compiler_generated() */
    _inline ~EventsScreenEntry(); /* compiler_generated() */
    UI::EventsScreenEntry &operator=(UI::EventsScreenEntry const &); /* compiler_generated() */
};
static_assert(sizeof(UI::EventsScreenEntry) == 44, "Invalid UI::EventsScreenEntry size");

class UI::EventsScreenData
{
public:
    UI::InterfaceElement *m_listFrame; // 0x0
    UI::InterfaceElement *m_listFrameItem; // 0x4
    UI::InterfaceElement *m_listFrameObjectivesItem; // 0x8
    LuaConfig m_eventTranslationLC; // 0xC
    std::list<UI::EventsScreenEntry,std::allocator<UI::EventsScreenEntry> > m_eventList; // 0x10
    __int32 m_bottomYPos; // 0x18
    EventsScreenData(UI::EventsScreenData const &); /* compiler_generated() */
    _inline EventsScreenData(); /* compiler_generated() */
    _inline ~EventsScreenData(); /* compiler_generated() */
    UI::EventsScreenData &operator=(UI::EventsScreenData const &); /* compiler_generated() */
};
static_assert(sizeof(UI::EventsScreenData) == 28, "Invalid UI::EventsScreenData size");

typedef std::list<UI::EventsScreenEntry,std::allocator<UI::EventsScreenEntry> > EventsScreenList;

/* ---------- prototypes */


_static void UI::AddEventsToListBox(UI::InterfaceElement *listframe, std::list<UI::EventsScreenEntry,std::allocator<UI::EventsScreenEntry> > &events, UI::InterfaceElement *eventToClone, UI::InterfaceElement *objectiveToClone);

/* ---------- globals */

extern UI::EventsScreen *UI::EventsScreen::ms_screen; // 0x846CB4

/* ---------- private variables */

/* ---------- public code */

_extern _sub_577153(UI::EventsScreen *const, char const *);
UI::EventsScreen::EventsScreen(char const *) // 0x577153
{
    mangled_assert("??0EventsScreen@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_577153(this, arg);
}

_extern _sub_5771E0(UI::EventsScreenData *const);
_inline UI::EventsScreenData::EventsScreenData() // 0x5771E0
{
    mangled_assert("??0EventsScreenData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5771E0(this);
}

_extern _sub_577228(UI::EventsScreenEntry *const, UI::EventsScreenEntry const &);
_inline UI::EventsScreenEntry::EventsScreenEntry(UI::EventsScreenEntry const &) // 0x577228
{
    mangled_assert("??0EventsScreenEntry@UI@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_577228(this, arg);
}

_extern _sub_57725C(UI::EventsScreenEntry *const);
_inline UI::EventsScreenEntry::EventsScreenEntry() // 0x57725C
{
    mangled_assert("??0EventsScreenEntry@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_57725C(this);
}

_extern void _sub_57728A(std::_List_buy<UI::EventsScreenEntry,std::allocator<UI::EventsScreenEntry> > *const);
_inline std::_List_buy<UI::EventsScreenEntry,std::allocator<UI::EventsScreenEntry> >::~_List_buy<UI::EventsScreenEntry,std::allocator<UI::EventsScreenEntry> >() // 0x57728A
{
    mangled_assert("??1?$_List_buy@UEventsScreenEntry@UI@@V?$allocator@UEventsScreenEntry@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_57728A(this);
}

_extern void _sub_5772AD(UI::EventsScreen *const);
UI::EventsScreen::~EventsScreen() // 0x5772AD
{
    mangled_assert("??1EventsScreen@UI@@UAE@XZ");
    todo("implement");
    _sub_5772AD(this);
}

_extern void _sub_577312(UI::EventsScreenData *const);
_inline UI::EventsScreenData::~EventsScreenData() // 0x577312
{
    mangled_assert("??1EventsScreenData@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_577312(this);
}

_extern void _sub_577332(UI::EventsScreenEntry *const);
_inline UI::EventsScreenEntry::~EventsScreenEntry() // 0x577332
{
    mangled_assert("??1EventsScreenEntry@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_577332(this);
}

_extern void _sub_57778F(UI::EventsScreen *const, LuaConfig &);
void UI::EventsScreen::OnLoad(LuaConfig &) // 0x57778F
{
    mangled_assert("?OnLoad@EventsScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_57778F(this, arg);
}

_extern void _sub_5777AB(UI::EventsScreen *const);
void UI::EventsScreen::OnPostLoad() // 0x5777AB
{
    mangled_assert("?OnPostLoad@EventsScreen@UI@@MAEXXZ");
    todo("implement");
    _sub_5777AB(this);
}

_extern void _sub_577A47();
void UI::EventsScreen::Toggle() // 0x577A47
{
    mangled_assert("?Toggle@EventsScreen@UI@@SGXXZ");
    todo("implement");
    _sub_577A47();
}

_extern void _sub_577835(UI::EventsScreen *const, char const *);
void UI::EventsScreen::ShowEvent(char const *) // 0x577835
{
    mangled_assert("?ShowEvent@EventsScreen@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_577835(this, arg);
}

_extern void _sub_577859(UI::EventsScreen *const, char const *, bool, vector3 const &);
void UI::EventsScreen::ShowEventPos(char const *, bool, vector3 const &) // 0x577859
{
    mangled_assert("?ShowEventPos@EventsScreen@UI@@QAEXPBD_NABVvector3@@@Z");
    todo("implement");
    _sub_577859(this, arg, arg, arg);
}

_extern void _sub_5779AB(UI::EventsScreen *const, wchar_t const *, __int32);
void UI::EventsScreen::ShowObjective(wchar_t const *, __int32) // 0x5779AB
{
    mangled_assert("?ShowObjective@EventsScreen@UI@@QAEXPB_WH@Z");
    todo("implement");
    _sub_5779AB(this, arg, arg);
}

_extern void _sub_577802(UI::EventsScreen *const, UI::Size const &);
void UI::EventsScreen::OnResize(UI::Size const &) // 0x577802
{
    mangled_assert("?OnResize@EventsScreen@UI@@MAEXABVSize@2@@Z");
    todo("implement");
    _sub_577802(this, arg);
}

_extern void _sub_5773F9(UI::EventsScreen *const, wchar_t const *, bool, vector3 const &);
void UI::EventsScreen::AddEvent(wchar_t const *, bool, vector3 const &) // 0x5773F9
{
    mangled_assert("?AddEvent@EventsScreen@UI@@AAEXPB_W_NABVvector3@@@Z");
    todo("implement");
    _sub_5773F9(this, arg, arg, arg);
}

_extern void _sub_5776D1(UI::EventsScreen *const, bool);
void UI::EventsScreen::OnActivate(bool) // 0x5776D1
{
    mangled_assert("?OnActivate@EventsScreen@UI@@MAEX_N@Z");
    todo("implement");
    _sub_5776D1(this, arg);
}

_extern void _sub_577724(UI::InterfaceElement *);
void UI::EventsScreen::OnItemClicked(UI::InterfaceElement *e) // 0x577724
{
    mangled_assert("?OnItemClicked@EventsScreen@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_577724(e);
}

_extern void _sub_5775D6(UI::EventsScreen *const);
void UI::EventsScreen::Clear() // 0x5775D6
{
    mangled_assert("?Clear@EventsScreen@UI@@QAEXXZ");
    todo("implement");
    _sub_5775D6(this);
}

_extern void _sub_577630(UI::EventsScreen *const);
void UI::EventsScreen::FocusOnLastEvent() // 0x577630
{
    mangled_assert("?FocusOnLastEvent@EventsScreen@UI@@QAEXXZ");
    todo("implement");
    _sub_577630(this);
}

_extern void _sub_5776F6(GameEventSys::Listener * const, GameEventSys::Event const &);
void UI::EventsScreen::OnEvent(GameEventSys::Event const &) // 0x5776F6
{
    mangled_assert("?OnEvent@EventsScreen@UI@@UAEXABVEvent@GameEventSys@@@Z");
    // __shifted(UI::EventsScreen, 412);
    todo("implement");
    _sub_5776F6(this, arg);
}

/* ---------- private code */

_extern void _sub_57747E(UI::InterfaceElement *, std::list<UI::EventsScreenEntry,std::allocator<UI::EventsScreenEntry> > &, UI::InterfaceElement *, UI::InterfaceElement *);
_static void UI::AddEventsToListBox(UI::InterfaceElement *listframe, std::list<UI::EventsScreenEntry,std::allocator<UI::EventsScreenEntry> > &events, UI::InterfaceElement *eventToClone, UI::InterfaceElement *objectiveToClone) // 0x57747E
{
    mangled_assert("UI::AddEventsToListBox");
    todo("implement");
    _sub_57747E(listframe, events, eventToClone, objectiveToClone);
}
#endif

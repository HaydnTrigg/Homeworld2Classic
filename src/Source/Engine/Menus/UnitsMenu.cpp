#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\timer.h>
#include <assist\stlexsmallvector.h>
#include <luaconfig\luabinding.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <SelTarg.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <GameEventDefs.h>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Player.h>
#include <Mathlib\matrix3.h>
#include <SquadronList.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <UserInterface\NewUIScreenManager.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <compiler\compilerconfig.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <list>
#include <Collision\BVH\octree.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <Collision\BVH\span.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\vector3.h>
#include <BuildManager.h>
#include <Collision\BVH\proxy.h>
#include <HyperspaceManager.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Family.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\cliprect.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Interpolation.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Collision\Primitives\aabb.h>
#include <localizer\localizer.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <GameEventSys.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <dbdefines.h>
#include <sob.h>
#include <Mathlib\quat.h>
#include <UnitCaps\UnitCaps.h>
#include <ResearchManager.h>
#include <sobstatic.h>
#include <KeyBindings.h>
#include <Collision\Primitives\sphere.h>
#include <config.h>
#include <assist\typemagic.h>
#include <BuildData.h>
#include <DependencyData.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <sobid.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <UserInterface\NewButton.h>
#include <FamilyListMgr.h>
#include <luaconfig\luaconfig.h>
#include <Collision\Primitives\capsule.h>
#include <FamilyList.h>
#include <deque>
#include <lua.h>
#include <Collision\Primitives\segment.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <Collision\BVH\profiling.h>
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
#include <Render\objects\compiledtext.h>
#include <Collision\Primitives\obb.h>
#include <SOBGroupManager.h>
#include <boost\detail\lwm_win32.hpp>
#include <Race.h>
#include <Menus\UnitsMenu.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <swprintf.inl>
#include <stack>
#include <UserInterface\pch.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <UserInterface\NewTextLabel.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <algorithm>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <playerresourcetype.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::UnitCapInfoPopupData
{
    UI::NewFrame *m_frmItemToClone; // 0x0
    UI::NewFrame *m_frmTabSpacer; // 0x4
    UI::NewFrame *m_frmItems; // 0x8
    UI::NewTextLabel *m_lblTitleToClone; // 0xC
    wchar_t m_buf[512]; // 0x10
    unsigned __int32 m_maxColor; // 0x410
    unsigned __int32 m_availColor; // 0x414
    bool m_update; // 0x418
};
static_assert(sizeof(UI::UnitCapInfoPopupData) == 1052, "Invalid UI::UnitCapInfoPopupData size");

struct UI::FindUnitCapEntry
{
    _inline FindUnitCapEntry(__int32, __int32);
    bool operator()(UI::UnitCapInfoPopup::UnitCapEntry const &);
private:
    __int32 m_shipId; // 0x0
    __int32 m_familyId; // 0x4
};
static_assert(sizeof(UI::FindUnitCapEntry) == 8, "Invalid UI::FindUnitCapEntry size");

/* ---------- prototypes */


_static bool UI::UnitCapEntryPriorityComp(UI::UnitCapInfoPopup::UnitCapEntry const &l, UI::UnitCapInfoPopup::UnitCapEntry const &r);

/* ---------- globals */

extern UI::UnitCapInfoPopup *UI::UnitCapInfoPopup::ms_screen; // 0x846D68

/* ---------- private variables */

/* ---------- public code */

UI::UnitCapInfoPopup::UnitCapInfoPopup(char const *) // 0x5AE772
{
    mangled_assert("??0UnitCapInfoPopup@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline std::_List_buy<UI::UnitCapInfoPopup::UnitCapEntry,std::allocator<UI::UnitCapInfoPopup::UnitCapEntry> >::~_List_buy<UI::UnitCapInfoPopup::UnitCapEntry,std::allocator<UI::UnitCapInfoPopup::UnitCapEntry> >() // 0x5AE7E7
{
    mangled_assert("??1?$_List_buy@UUnitCapEntry@UnitCapInfoPopup@UI@@V?$allocator@UUnitCapEntry@UnitCapInfoPopup@UI@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline UI::UnitCapInfoPopup::UnitCapEntry::~UnitCapEntry() // 0x5AE80B
{
    mangled_assert("??1UnitCapEntry@UnitCapInfoPopup@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::UnitCapInfoPopup::~UnitCapInfoPopup() // 0x5AE815
{
    mangled_assert("??1UnitCapInfoPopup@UI@@UAE@XZ");
    todo("implement");
}

void UI::UnitCapInfoPopup::OnEvent(GameEventSys::Event const &) // 0x5AEE73
{
    mangled_assert("?OnEvent@UnitCapInfoPopup@UI@@UAEXABVEvent@GameEventSys@@@Z");
    // __shifted(UI::UnitCapInfoPopup, 412);
    todo("implement");
}

void UI::UnitCapInfoPopup::OnActivate(bool) // 0x5AEE18
{
    mangled_assert("?OnActivate@UnitCapInfoPopup@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::UnitCapInfoPopup::Update(unsigned __int32) // 0x5AEF6F
{
    mangled_assert("?Update@UnitCapInfoPopup@UI@@UAEXI@Z");
    todo("implement");
}

void UI::UnitCapInfoPopup::OnPostLoad() // 0x5AEF04
{
    mangled_assert("?OnPostLoad@UnitCapInfoPopup@UI@@MAEXXZ");
    todo("implement");
}

void UI::UnitCapInfoPopup::OnLoad(LuaConfig &) // 0x5AEE8F
{
    mangled_assert("?OnLoad@UnitCapInfoPopup@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

_inline UI::FindUnitCapEntry::FindUnitCapEntry(__int32, __int32) // 0x5AE714
{
    mangled_assert("??0FindUnitCapEntry@UI@@QAE@HH@Z");
    todo("implement");
}

_inline UI::UnitCapInfoPopup::UnitCapEntry::UnitCapEntry(UI::UnitCapInfoPopup::UnitCapEntry const &) // 0x5AE726
{
    mangled_assert("??0UnitCapEntry@UnitCapInfoPopup@UI@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
}

_inline UI::UnitCapInfoPopup::UnitCapEntry::UnitCapEntry() // 0x5AE75F
{
    mangled_assert("??0UnitCapEntry@UnitCapInfoPopup@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline bool UI::FindUnitCapEntry::operator()(UI::UnitCapInfoPopup::UnitCapEntry const &) // 0x5AE928
{
    mangled_assert("??RFindUnitCapEntry@UI@@QAE_NABUUnitCapEntry@UnitCapInfoPopup@1@@Z");
    todo("implement");
}

void UI::UnitCapInfoPopup::DisplayUnitCapInfo(unsigned __int32) // 0x5AEB77
{
    mangled_assert("?DisplayUnitCapInfo@UnitCapInfoPopup@UI@@AAEXI@Z");
    todo("implement");
}

void UI::UnitCapInfoPopup::AddUnitCap(wchar_t const *, unsigned __int32, unsigned __int32, unsigned __int32) // 0x5AE981
{
    mangled_assert("?AddUnitCap@UnitCapInfoPopup@UI@@AAEXPB_WIII@Z");
    todo("implement");
}

/* ---------- private code */

_static bool UI::UnitCapEntryPriorityComp(UI::UnitCapInfoPopup::UnitCapEntry const &l, UI::UnitCapInfoPopup::UnitCapEntry const &r) // 0x5AEF5A
{
    mangled_assert("UI::UnitCapEntryPriorityComp");
    todo("implement");
}
#endif

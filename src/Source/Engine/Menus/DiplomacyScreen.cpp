#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <seInterface2\SoundParams.h>
#include <lua.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <Graphics\TeamColour.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <UserInterface\NewFrame.h>
#include <Race.h>
#include <crtdefs.h>
#include <SensorsManager.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Player.h>
#include <SquadronList.h>
#include <orders.h>
#include <orders_base.h>
#include <Mathlib\matrix3.h>
#include <commandtype.h>
#include <UserInterface\ProgressBar.h>
#include <SoundManager\SoundEntityHandle.h>
#include <GameEventDefs.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <gamestructimpl.h>
#include <Badge.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <Universe.h>
#include <Waypoint.h>
#include <xutility>
#include <fileio\filepath.h>
#include <SobUnmoveable.h>
#include <utility>
#include <iosfwd>
#include <abilities.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <platform\timer.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <TeamColourRegistry.h>
#include <xhash>
#include <savegame.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\ListBoxItem.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <UserInterface\NewTextLabel.h>
#include <Collision\BVH\proxy.h>
#include <UserInterface\uiprimitives.h>
#include <Collision\intersect.h>
#include <seInterface2\SampleID.h>
#include <list>
#include <task.h>
#include <Collision\primitivesfwd.h>
#include <seInterface2\SampleBase.h>
#include <boost\static_assert.hpp>
#include <BuildManager.h>
#include <HyperspaceManager.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Menus\NewTaskbar.h>
#include <sob.h>
#include <sobstatic.h>
#include <map>
#include <region.h>
#include <Collision\Primitives\sphere.h>
#include <Interpolation.h>
#include <xtree>
#include <prim.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\aabb.h>
#include <UserInterface\NewListBox.h>
#include <Mathlib\vector2.h>
#include <Render\objects\cliprect.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <localizer\localizer.h>
#include <assert.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\scoped_array.hpp>
#include <KeyBindings.h>
#include <dbdefines.h>
#include <config.h>
#include <ResearchManager.h>
#include <UnitCaps\UnitCaps.h>
#include <Mathlib\quat.h>
#include <Render\objects\textureproxy.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <Collision\Primitives\obb.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <gameSettings.h>
#include <pathpoints.h>
#include <syncChecking.h>
#include <debug\db.h>
#include <Render\gl\lotypes.h>
#include <deque>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <alliance.h>
#include <Render\gl\r_types.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <fixedpoint.h>
#include <LevelDesc.h>
#include <sobid.h>
#include <selection.h>
#include <util\fixed.h>
#include <gamemsg.h>
#include <Hash.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <fileio\md5.h>
#include <SOBGroupManager.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <MainUI.h>
#include <Render\objects\compiledtext.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <wchar.h>
#include <UserInterface\InterfaceElement.h>
#include <Menus\DiplomacyScreen.h>
#include <UserInterface\uitypes.h>
#include <UserInterface\NewUIScreen.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <SelTarg.h>
#include <platform\keydefines.h>
#include <UserInterface\NewText.h>
#include <playerresourcetype.h>
#include <Render\objects\fontsystem.h>
#include <UserInterface\NewUIScreenManager.h>
#include <GameEventSys.h>
#include <seInterface2\PatchID.h>
#include <Render\objects\bitmapfont.h>
#include <stack>
#include <seInterface2\PatchBase.h>
#include <Camera\OrbitParameters.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline boost::shared_ptr<UI::Graphic>::shared_ptr<UI::Graphic>(boost::shared_ptr<UI::Graphic> const &) // 0x573F26
{
    mangled_assert("??0?$shared_ptr@VGraphic@UI@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

UI::DiplomacyScreen::DiplomacyScreen(char const *) // 0x573F46
{
    mangled_assert("??0DiplomacyScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline boost::shared_ptr<UI::Graphic>::~shared_ptr<UI::Graphic>() // 0x573F8F
{
    mangled_assert("??1?$shared_ptr@VGraphic@UI@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::DiplomacyScreen::~DiplomacyScreen() // 0x573F9B
{
    mangled_assert("??1DiplomacyScreen@UI@@UAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<UI::Graphic> &boost::shared_ptr<UI::Graphic>::operator=(boost::shared_ptr<UI::Graphic> const &) // 0x573FE7
{
    mangled_assert("??4?$shared_ptr@VGraphic@UI@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

void UI::DiplomacyScreen::OnPostLoad() // 0x574286
{
    mangled_assert("?OnPostLoad@DiplomacyScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::DiplomacyScreen::HandleAllianceEvents() // 0x574051
{
    mangled_assert("?HandleAllianceEvents@DiplomacyScreen@UI@@AAEXXZ");
    todo("implement");
}

void UI::DiplomacyScreen::Update(unsigned __int32) // 0x574B01
{
    mangled_assert("?Update@DiplomacyScreen@UI@@UAEXI@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnEvent(GameEventSys::Event const &) // 0x57417A
{
    mangled_assert("?OnEvent@DiplomacyScreen@UI@@UAEXABVEvent@GameEventSys@@@Z");
    // __shifted(UI::DiplomacyScreen, 412);
    todo("implement");
}

void UI::DiplomacyScreen::OnActivate(bool) // 0x5740D9
{
    mangled_assert("?OnActivate@DiplomacyScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::DiplomacyScreen::SelectPlayer(__int32) // 0x574A4A
{
    mangled_assert("?SelectPlayer@DiplomacyScreen@UI@@QAEXH@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnPlayerSelect(UI::InterfaceElement *sender) // 0x574237
{
    mangled_assert("?OnPlayerSelect@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnRequestAlliance(UI::InterfaceElement *sender) // 0x574833
{
    mangled_assert("?OnRequestAlliance@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnBreakAlliance(UI::InterfaceElement *sender) // 0x574123
{
    mangled_assert("?OnBreakAlliance@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnIgnoreAlliance(UI::InterfaceElement *sender) // 0x5741A7
{
    mangled_assert("?OnIgnoreAlliance@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnTransferShips(UI::InterfaceElement *sender) // 0x5749BA
{
    mangled_assert("?OnTransferShips@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnTransfer500RUs(UI::InterfaceElement *sender) // 0x574914
{
    mangled_assert("?OnTransfer500RUs@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnTransfer1000RUs(UI::InterfaceElement *sender) // 0x574882
{
    mangled_assert("?OnTransfer1000RUs@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnTransfer5000RUs(UI::InterfaceElement *sender) // 0x5748CB
{
    mangled_assert("?OnTransfer5000RUs@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::DiplomacyScreen::OnTransferAllRUs(UI::InterfaceElement *sender) // 0x57495D
{
    mangled_assert("?OnTransferAllRUs@DiplomacyScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

bool UI::DiplomacyScreen::IsAllianceRequested() // 0x5740B9
{
    mangled_assert("?IsAllianceRequested@DiplomacyScreen@UI@@QAE_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif

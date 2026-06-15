#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\aabb.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <gameSettings.h>
#include <Camera\OrbitParameters.h>
#include <crtdefs.h>
#include <syncChecking.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Menus\NewTaskbar.h>
#include <Mathlib\matrix3.h>
#include <GameEventSys.h>
#include <boost\checked_delete.hpp>
#include <GameObj.h>
#include <seInterface2\sedefinesshared.h>
#include <util\statmonitor.h>
#include <new>
#include <Cursor.h>
#include <util\utilexports.h>
#include <xstddef>
#include <Menus\SaveLoadDialog.h>
#include <type_traits>
#include <platform\timer.h>
#include <Collision\Primitives\obb.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Collision\Primitives\capsule.h>
#include <BuildManager.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <gamemsg.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <boost\smart_ptr.hpp>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <MainUI.h>
#include <Render\objects\texture.h>
#include <Selector.h>
#include <Render\objects\objects.h>
#include <MetaSelTarg.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\types.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Render\gl\lotypes.h>
#include <LevelDesc.h>
#include <boost\cstdint.hpp>
#include <Hash.h>
#include <luaconfig\luabinding.h>
#include <fileio\md5.h>
#include <boost\config.hpp>
#include <UserInterface\NewButton.h>
#include <cassert>
#include <assert.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <SOBGroupManager.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <gamestructimpl.h>
#include <Render\gl\r_types.h>
#include <Badge.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <campaign.h>
#include <KeyBindings.h>
#include <scripting.h>
#include <config.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <assist\typemagic.h>
#include <recorder.h>
#include <orders.h>
#include <SensorsManager.h>
#include <orders_base.h>
#include <SoundManager\SoundManager.h>
#include <commandtype.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <fixedpoint.h>
#include <platform\keydefines.h>
#include <util\fixed.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\static_assert.hpp>
#include <pathpoints.h>
#include <debug\db.h>
#include <luaconfig\luaconfig.h>
#include <dbdefines.h>
#include <lua.h>
#include <UnitCaps\UnitCaps.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
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
#include <abilities.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <mainScreen.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <playerresourcetype.h>
#include <Collision\primitivesfwd.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <Universe.h>
#include <Menus\GameMenu.h>
#include <Waypoint.h>
#include <UserInterface\NewUIScreen.h>
#include <sob.h>
#include <wchar.h>
#include <SobUnmoveable.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <sobstatic.h>
#include <stack>
#include <UserInterface\pch.h>
#include <Collision\Primitives\sphere.h>
#include <Race.h>
#include <Interpolation.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::GameMenuData
{
    UI::InterfaceElement *m_btnLoad; // 0x0
    UI::NewFrame *m_frmButtons_Campaign; // 0x4
    UI::NewFrame *m_frmButtons_CampaignFailed; // 0x8
    UI::NewFrame *m_frmButtons_PlayerVsCpu; // 0xC
    UI::NewFrame *m_frmButtons_PlayerVsCpuFailed; // 0x10
    UI::NewFrame *m_frmButtons_Multiplayer; // 0x14
    UI::NewFrame *m_frmButtons_MultiplayerFailed; // 0x18
    UI::NewFrame *m_frmButtons_Tutorial; // 0x1C
    UI::NewFrame *m_frmButtons_RecordedGame; // 0x20
    UI::NewFrame *m_frmButtonGroup; // 0x24
    bool m_allCommandsDisabled; // 0x28
    bool m_cursorShown; // 0x29
    UI::GameMenu::GameMenuType m_type; // 0x2C
};
static_assert(sizeof(UI::GameMenuData) == 48, "Invalid UI::GameMenuData size");

/* ---------- prototypes */

/* ---------- globals */

extern bool UI::GameMenu::ms_isGamePaused; // 0x846CC4

/* ---------- private variables */

/* ---------- public code */

UI::GameMenu::GameMenu(char const *) // 0x585A83
{
    mangled_assert("??0GameMenu@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::GameMenu::~GameMenu() // 0x585ACE
{
    mangled_assert("??1GameMenu@UI@@UAE@XZ");
    todo("implement");
}

void UI::GameMenu::SetGameMenuType(UI::GameMenu::GameMenuType) // 0x585EBE
{
    mangled_assert("?SetGameMenuType@GameMenu@UI@@AAEXW4GameMenuType@12@@Z");
    todo("implement");
}

void UI::GameMenu::ValidateLoadButtons() // 0x586092
{
    mangled_assert("?ValidateLoadButtons@GameMenu@UI@@AAEXXZ");
    todo("implement");
}

void UI::GameMenu::OnActivate(bool) // 0x585C18
{
    mangled_assert("?OnActivate@GameMenu@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::GameMenu::OnPostLoad() // 0x585DE8
{
    mangled_assert("?OnPostLoad@GameMenu@UI@@MAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif

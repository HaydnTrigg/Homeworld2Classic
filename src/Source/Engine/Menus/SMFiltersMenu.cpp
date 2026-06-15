#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <HyperspaceManager.h>
#include <MeshAnimation.h>
#include <LevelDesc.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <ShieldTypes.h>
#include <Hash.h>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <fileio\md5.h>
#include <UserInterface\NewTextLabel.h>
#include <crtdefs.h>
#include <UserInterface\uiprimitives.h>
#include <Menus\MenuSupport.h>
#include <gamestructimpl.h>
#include <Subsystems\HardPointManager.h>
#include <Badge.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <OrderFeedback.h>
#include <Mathlib\matrix3.h>
#include <Subsystems\SubSystemType.h>
#include <orders.h>
#include <orders_base.h>
#include <Collision\BVH\octree.h>
#include <new>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <SensorsManager.h>
#include <exception>
#include <xstddef>
#include <Collision\BVH\proxy.h>
#include <UserInterface\NewDropDownListBox.h>
#include <fixedpoint.h>
#include <SoundManager\SoundManager.h>
#include <type_traits>
#include <Collision\intersect.h>
#include <UserInterface\NewListBox.h>
#include <util\fixed.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Collision\primitivesfwd.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <ResearchData.h>
#include <Render\objects\compiledtext.h>
#include <UserInterface\ProgressBar.h>
#include <Race.h>
#include <sobid.h>
#include <weaponinfo.h>
#include <Family.h>
#include <xutility>
#include <luaconfig\luabinding.h>
#include <dbdefines.h>
#include <SoundManager\SoundEntityHandle.h>
#include <utility>
#include <iosfwd>
#include <UnitCaps\UnitCaps.h>
#include <vector>
#include <boost\static_assert.hpp>
#include <xmemory>
#include <Interpolation.h>
#include <fileio\fileioexports.h>
#include <seInterface2\PatchID.h>
#include <UserInterface\NewScrollBar.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <BuildManager.h>
#include <compiler\compilerconfig.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <UserInterface\NewText.h>
#include <Camera\CameraOrbitTarget.h>
#include <Parade.h>
#include <Render\objects\fontsystem.h>
#include <TeamColourRegistry.h>
#include <Camera\Camera.h>
#include <list>
#include <Render\objects\bitmapfont.h>
#include <savegame.h>
#include <playerresourcetype.h>
#include <Camera\Frustum.h>
#include <abilities.h>
#include <Camera\Plane3.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <SquadronList.h>
#include <SobWithMeshStatic.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <ITweak.h>
#include <SobRigidBody.h>
#include <Tactics.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <boost\smart_ptr.hpp>
#include <SobRigidBodyStatic.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <seInterface2\SampleID.h>
#include <Render\objects\objects.h>
#include <seInterface2\SampleBase.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <DynamicPoint.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <BuildJob.h>
#include <SOBGroupManager.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <Player.h>
#include <boost\config.hpp>
#include <cassert>
#include <ResearchManager.h>
#include <assert.h>
#include <FamilyListMgr.h>
#include <Collision\Primitives\capsule.h>
#include <FamilyList.h>
#include <Render\gl\r_types.h>
#include <Collision\Primitives\segment.h>
#include <boost\scoped_array.hpp>
#include <Collision\BVH\profiling.h>
#include <gameSettings.h>
#include <Camera\OrbitParameters.h>
#include <syncChecking.h>
#include <Mathlib\quat.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <platform\timer.h>
#include <seInterface2\sedefinesshared.h>
#include <Mathlib\mathlibdll.h>
#include <sob.h>
#include <Mathlib\fastmath.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <UserInterface\NewUIScreenManager.h>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <platform\keydefines.h>
#include <Squadron.h>
#include <pathpoints.h>
#include <command.h>
#include <debug\db.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <luaconfig\luaconfig.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <gamemsg.h>
#include <BuildJobType.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <DockCommand.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <Render\objects\cliprect.h>
#include <sobtypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <SelTarg.h>
#include <boost\detail\shared_count.hpp>
#include <Menus\FinalBuildMenu.h>
#include <shipHold.h>
#include <bitset>
#include <UserInterface\ListBoxItem.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\TextButton.h>
#include <BuildData.h>
#include <Menus\NewTaskbar.h>
#include <UserInterface\NewButton.h>
#include <DependencyData.h>
#include <GameEventSys.h>
#include <localizer\localizer.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <Collision\Primitives\obb.h>
#include <Menus\SMFiltersMenu.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <string>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <MainUI.h>
#include <stack>
#include <UserInterface\pch.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <BuildQueue.h>
#include <queue>
#include <Modifiers\ModifierTargetCache.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::SMFiltersMenu::SMFiltersMenu(char const *) // 0x5A8B72
{
    mangled_assert("??0SMFiltersMenu@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::SMFiltersMenu::~SMFiltersMenu() // 0x5A8B98
{
    mangled_assert("??1SMFiltersMenu@UI@@UAE@XZ");
    todo("implement");
}

void UI::SMFiltersMenu::OnPostLoad() // 0x5A8C02
{
    mangled_assert("?OnPostLoad@SMFiltersMenu@UI@@MAEXXZ");
    todo("implement");
}

void UI::SMFiltersMenu::SetShowState(__int32, bool) // 0x5A8DBF
{
    mangled_assert("?SetShowState@SMFiltersMenu@UI@@QAEXH_N@Z");
    todo("implement");
}

void UI::SMFiltersMenu::Toggle() // 0x5A8E25
{
    mangled_assert("?Toggle@SMFiltersMenu@UI@@SGXXZ");
    todo("implement");
}

void UI::SMFiltersMenu::Show() // 0x5A8DC2
{
    mangled_assert("?Show@SMFiltersMenu@UI@@SGXXZ");
    todo("implement");
}

void UI::SMFiltersMenu::Hide() // 0x5A8BCC
{
    mangled_assert("?Hide@SMFiltersMenu@UI@@SGXXZ");
    todo("implement");
}

void UI::SMFiltersMenu::TaskbarToggle(bool taskbarActive) // 0x5A8DF8
{
    mangled_assert("?TaskbarToggle@SMFiltersMenu@UI@@SGX_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif

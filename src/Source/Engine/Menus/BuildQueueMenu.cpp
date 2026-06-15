#if 0
/* ---------- headers */

#include "decomp.h"
#include <sob.h>
#include <set>
#include <assist\stlexsmallvector.h>
#include <sobstatic.h>
#include <Menus\MenuSupport.h>
#include <Collision\Primitives\sphere.h>
#include <UserInterface\NewUIScreenManager.h>
#include <xstring>
#include <Render\objects\compiledtext.h>
#include <sobid.h>
#include <Tactics.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <gamestructimpl.h>
#include <pch.h>
#include <Render\gl\r_types.h>
#include <memory\memorylib.h>
#include <Badge.h>
#include <crtdefs.h>
#include <App\AppObj.h>
#include <BuildManager.h>
#include <orders.h>
#include <platform\appinterface.h>
#include <orders_base.h>
#include <KeyBindings.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <CameraCommand.h>
#include <config.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Mathlib\matrix3.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <BuildQueue.h>
#include <new>
#include <UserInterface\NewText.h>
#include <SelTarg.h>
#include <Render\objects\fontsystem.h>
#include <exception>
#include <xstddef>
#include <Render\objects\bitmapfont.h>
#include <type_traits>
#include <Menus\NewTaskbar.h>
#include <platform\keydefines.h>
#include <BuildData.h>
#include <GameEventSys.h>
#include <DependencyData.h>
#include <boost\static_assert.hpp>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <xutility>
#include <utility>
#include <luaconfig\luaconfig.h>
#include <iosfwd>
#include <OrderFeedback.h>
#include <vector>
#include <lua.h>
#include <xmemory>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <Collision\Primitives\obb.h>
#include <fileio\fileioexports.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <MainUI.h>
#include <platform\platformexports.h>
#include <Selector.h>
#include <compiler\compilerconfig.h>
#include <MetaSelTarg.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Player.h>
#include <ResearchManager.h>
#include <FamilyListMgr.h>
#include <list>
#include <FamilyList.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <HyperspaceManager.h>
#include <MeshAnimation.h>
#include <Modifiers\ModifierEffect.h>
#include <ShieldTypes.h>
#include <ResearchData.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <UserInterface\NewUIScreen.h>
#include <boost\scoped_ptr.hpp>
#include <Subsystems\HardPointManager.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <Subsystems\HardPoint.h>
#include <Modifiers\ModifierApplier.h>
#include <BuildJob.h>
#include <stack>
#include <UserInterface\pch.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <ParadeCommand.h>
#include <Parade.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <weaponstaticinfo.h>
#include <Squadron.h>
#include <Collision\BVH\Internal\span_i.h>
#include <SensorsManager.h>
#include <GunBinding.h>
#include <command.h>
#include <Collision\BVH\proxy.h>
#include <UserInterface\NewDropDownListBox.h>
#include <fixedpoint.h>
#include <SoundManager\SoundManager.h>
#include <Render\objects\textureregistry.h>
#include <Collision\intersect.h>
#include <UserInterface\NewListBox.h>
#include <util\fixed.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\cstdint.hpp>
#include <hash_map>
#include <Collision\primitivesfwd.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <ITweak.h>
#include <xhash>
#include <UserInterface\ProgressBar.h>
#include <gameSettings.h>
#include <boost\config.hpp>
#include <cassert>
#include <syncChecking.h>
#include <assert.h>
#include <weaponinfo.h>
#include <dbdefines.h>
#include <boost\scoped_array.hpp>
#include <SoundManager\SoundEntityHandle.h>
#include <luaconfig\luabinding.h>
#include <UnitCaps\UnitCaps.h>
#include <GameEventDefs.h>
#include <Interpolation.h>
#include <Mathlib\quat.h>
#include <DynamicPoint.h>
#include <seInterface2\PatchID.h>
#include <UserInterface\NewScrollBar.h>
#include <seInterface2\PatchBase.h>
#include <WeaponClassSpecificInfo.h>
#include <shipHold.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <assist\typemagic.h>
#include <Render\objects\cliprect.h>
#include <TeamColourRegistry.h>
#include <Menus\FinalBuildMenu.h>
#include <savegame.h>
#include <playerresourcetype.h>
#include <Mathlib\mathlibdll.h>
#include <UserInterface\ListBoxItem.h>
#include <abilities.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <SobWithMeshStatic.h>
#include <localizer\localizer.h>
#include <ship.h>
#include <gamemsg.h>
#include <BuildJobType.h>
#include <pathpoints.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <debug\db.h>
#include <SobRigidBodyStatic.h>
#include <seInterface2\SampleID.h>
#include <deque>
#include <seInterface2\SampleBase.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <SOBGroupManager.h>
#include <boost\detail\shared_count.hpp>
#include <Modifiers\ModifierAbility.h>
#include <bitset>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <boost\detail\lwm_win32.hpp>
#include <shipstatic.h>
#include <Mathlib\mathutil.h>
#include <commandtype.h>
#include <Collision\Primitives\capsule.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Collision\Primitives\segment.h>
#include <UserInterface\Graphic.h>
#include <Collision\BVH\profiling.h>
#include <Render\objects\texture.h>
#include <Camera\OrbitParameters.h>
#include <DockCommand.h>
#include <Render\objects\objects.h>
#include <UIBuildJob.h>
#include <Render\objects\core.h>
#include <Menus\BuildQueueMenu.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <SquadronList.h>
#include <Mathlib\matvec.h>
#include <wchar.h>
#include <string>
#include <swprintf.inl>
#include <queue>
#include <platform\timer.h>
#include <Race.h>
#include <LevelDesc.h>
#include <Render\gl\lotypes.h>
#include <Hash.h>
#include <seInterface2\sedefinesshared.h>
#include <Family.h>
#include <fileio\md5.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void UI::CancelBuildOfType(UI::InterfaceElement *sender, BuildType type);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::BuildQueueMenu::BuildQueueMenu(char const *) // 0x56FA06
{
    mangled_assert("??0BuildQueueMenu@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::BuildQueueMenu::~BuildQueueMenu() // 0x56FA53
{
    mangled_assert("??1BuildQueueMenu@UI@@UAE@XZ");
    todo("implement");
}

void UI::BuildQueueMenu::OnLoad(LuaConfig &) // 0x56FE56
{
    mangled_assert("?OnLoad@BuildQueueMenu@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnPostLoad() // 0x570037
{
    mangled_assert("?OnPostLoad@BuildQueueMenu@UI@@MAEXXZ");
    todo("implement");
}

void UI::BuildQueueMenu::OnActivate(bool) // 0x56FDF2
{
    mangled_assert("?OnActivate@BuildQueueMenu@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::BuildQueueMenu::AddSelection(Selection const &) // 0x56FB43
{
    mangled_assert("?AddSelection@BuildQueueMenu@UI@@AAEXABVSelection@@@Z");
    todo("implement");
}

void UI::BuildQueueMenu::Update(unsigned __int32) // 0x5701C6
{
    mangled_assert("?Update@BuildQueueMenu@UI@@UAEXI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnSelectBuild(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5700A5
{
    mangled_assert("?OnSelectBuild@BuildQueueMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnPauseBuild(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x56FF1C
{
    mangled_assert("?OnPauseBuild@BuildQueueMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnCancelBuild(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x56FDF5
{
    mangled_assert("?OnCancelBuild@BuildQueueMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnPauseSubsystem(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x56FFBD
{
    mangled_assert("?OnPauseSubsystem@BuildQueueMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnCancelSubsystem(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x56FE3C
{
    mangled_assert("?OnCancelSubsystem@BuildQueueMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnSelectResearch(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x570156
{
    mangled_assert("?OnSelectResearch@BuildQueueMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnPauseResearch(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x56FF93
{
    mangled_assert("?OnPauseResearch@BuildQueueMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::OnCancelResearch(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x56FE03
{
    mangled_assert("?OnCancelResearch@BuildQueueMenu@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::BuildQueueMenu::Notify_Insertion(Squadron *) // 0x56FDE4
{
    mangled_assert("?Notify_Insertion@BuildQueueMenu@UI@@UAEXPAVSquadron@@@Z");
    // __shifted(UI::BuildQueueMenu, 412);
    todo("implement");
}

void UI::BuildQueueMenu::Notify_Removal(Squadron *) // 0x56FDEB
{
    mangled_assert("?Notify_Removal@BuildQueueMenu@UI@@UAEXPAVSquadron@@@Z");
    // __shifted(UI::BuildQueueMenu, 412);
    todo("implement");
}

/* ---------- private code */

_static void UI::CancelBuildOfType(UI::InterfaceElement *sender, BuildType type) // 0x56FCCF
{
    mangled_assert("UI::CancelBuildOfType");
    todo("implement");
}
#endif

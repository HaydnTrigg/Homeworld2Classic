#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <Render\objects\fontsystem.h>
#include <lua.h>
#include <Render\objects\bitmapfont.h>
#include <assist\stlexsmallvector.h>
#include <MeshAnimation.h>
#include <Race.h>
#include <Render\gl\r_defines.h>
#include <ShieldTypes.h>
#include <Render\gl\glext.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <BuildManager.h>
#include <Mathlib\matrix3.h>
#include <BuildQueue.h>
#include <BuildData.h>
#include <new>
#include <DependencyData.h>
#include <exception>
#include <xstddef>
#include <Universe.h>
#include <type_traits>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <Collision\BVH\octree.h>
#include <weaponinfo.h>
#include <sobstatic.h>
#include <Collision\BVH\span.h>
#include <UserInterface\StyleSheet.h>
#include <Collision\Primitives\sphere.h>
#include <Collision\BVH\Internal\span_i.h>
#include <UserInterface\pch.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <HyperspaceManager.h>
#include <Modifiers\ModifierTargetCache.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <SquadronList.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <compiler\compilerconfig.h>
#include <platform\timer.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Interpolation.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <gameSettings.h>
#include <config.h>
#include <syncChecking.h>
#include <gamemsg.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\objects\cliprect.h>
#include <boost\cstdint.hpp>
#include <UserInterface\TextButton.h>
#include <boost\config.hpp>
#include <cassert>
#include <UserInterface\NewButton.h>
#include <luaconfig\luabinding.h>
#include <assert.h>
#include <localizer\localizer.h>
#include <Mathlib\quat.h>
#include <playerresourcetype.h>
#include <Render\objects\textureproxy.h>
#include <Collision\Primitives\capsule.h>
#include <platform\osdef.h>
#include <Collision\Primitives\segment.h>
#include <UserInterface\NewTextLabel.h>
#include <SelTarg.h>
#include <Collision\BVH\profiling.h>
#include <UserInterface\uiprimitives.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <prim.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <SoundManager\SoundEntityHandle.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <BuildJob.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <SOBGroupManager.h>
#include <gamestructimpl.h>
#include <Render\objects\core.h>
#include <Badge.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <BuildJobType.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <pathpoints.h>
#include <orders.h>
#include <orders_base.h>
#include <recorder.h>
#include <debug\db.h>
#include <commandtype.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\ProgressBar.h>
#include <seInterface2\PatchID.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <seInterface2\PatchBase.h>
#include <Render\gl\r_types.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <seInterface2\SoundParams.h>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\static_assert.hpp>
#include <Render\objects\compiledtext.h>
#include <visibility.h>
#include <sobid.h>
#include <MultiplierContainer.h>
#include <MultiplierTypes.h>
#include <dbdefines.h>
#include <TeamColourRegistry.h>
#include <UnitCaps\UnitCaps.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Menus\QueueListBoxItem.h>
#include <UserInterface\ListBoxItem.h>
#include <ResearchData.h>
#include <wchar.h>
#include <SobWithMeshStatic.h>
#include <string>
#include <UserInterface\InterfaceElement.h>
#include <swprintf.inl>
#include <UserInterface\uitypes.h>
#include <ship.h>
#include <abilities.h>
#include <platform\inputinterface.h>
#include <SobWithMesh.h>
#include <platform\platformexports.h>
#include <SobRigidBody.h>
#include <platform\keydefines.h>
#include <SobRigidBodyStatic.h>
#include <UserInterface\NewText.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > UI::QueueListBoxItem::ms_fstringText; // 0x83A710

/* ---------- private variables */

/* ---------- public code */

UI::QueueListBoxItem::QueueListBoxItem(UI::ListBoxItem *, UI::QueueListBoxItemType) // 0x5A4476
{
    mangled_assert("??0QueueListBoxItem@UI@@QAE@PAVListBoxItem@1@W4QueueListBoxItemType@1@@Z");
    todo("implement");
}

_inline UI::QueueListBoxItem::~QueueListBoxItem() // 0x5A451A
{
    mangled_assert("??1QueueListBoxItem@UI@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void UI::QueueListBoxItem::Init() // 0x5A4927
{
    mangled_assert("?Init@QueueListBoxItem@UI@@AAEXXZ");
    todo("implement");
}

void UI::QueueListBoxItem::SetIcon(boost::shared_ptr<UI::Graphic>) // 0x5A4DFB
{
    mangled_assert("?SetIcon@QueueListBoxItem@UI@@QAEXV?$shared_ptr@VGraphic@UI@@@boost@@@Z");
    todo("implement");
}

void UI::QueueListBoxItem::Draw2(Vector_2i const &, Rect_i const &) // 0x5A45DF
{
    mangled_assert("?Draw2@QueueListBoxItem@UI@@UAEXABUVector_2i@@ABURect_i@@@Z");
    todo("implement");
}

void UI::QueueListBoxItem::SetShipNameText(wchar_t const *) // 0x5A4E52
{
    mangled_assert("?SetShipNameText@QueueListBoxItem@UI@@QAEXPB_W@Z");
    todo("implement");
}

void UI::QueueListBoxItem::AddBuildJob(unsigned __int32) // 0x5A45AE
{
    mangled_assert("?AddBuildJob@QueueListBoxItem@UI@@QAEXI@Z");
    todo("implement");
}

void UI::QueueListBoxItem::RemoveLastBuildJob() // 0x5A4D87
{
    mangled_assert("?RemoveLastBuildJob@QueueListBoxItem@UI@@QAEXXZ");
    todo("implement");
}

void UI::QueueListBoxItem::MoveToTopOfQueue() // 0x5A4BF1
{
    mangled_assert("?MoveToTopOfQueue@QueueListBoxItem@UI@@QAEXXZ");
    todo("implement");
}

void UI::QueueListBoxItem::EnableMoveToTop(bool) // 0x5A48BB
{
    mangled_assert("?EnableMoveToTop@QueueListBoxItem@UI@@QAEX_N@Z");
    todo("implement");
}

void UI::QueueListBoxItem::OnCancelButtonClicked(UI::InterfaceElement *cancelButton, __int32 x, __int32 y, unsigned __int32 button) // 0x5A4CDB
{
    mangled_assert("?OnCancelButtonClicked@QueueListBoxItem@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::QueueListBoxItem::OnToTopButtonClicked(UI::InterfaceElement *toTopButton, __int32 x, __int32 y, unsigned __int32 button) // 0x5A4D31
{
    mangled_assert("?OnToTopButtonClicked@QueueListBoxItem@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

/* ---------- private code */
#endif

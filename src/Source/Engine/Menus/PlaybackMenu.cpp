#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <BuildManager.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <UserInterface\NewButton.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <gamemsg.h>
#include <SOBGroupManager.h>
#include <xstddef>
#include <type_traits>
#include <sobid.h>
#include <Player.h>
#include <xutility>
#include <ResearchManager.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <compiler\compilerconfig.h>
#include <Render\objects\compiledtext.h>
#include <fixedpoint.h>
#include <list>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <util\fixed.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <UserInterface\TextButton.h>
#include <Render\objects\objects.h>
#include <UserInterface\NewText.h>
#include <orders.h>
#include <Render\objects\core.h>
#include <Render\objects\fontsystem.h>
#include <orders_base.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Render\objects\bitmapfont.h>
#include <commandtype.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <Render\gl\r_types.h>
#include <UserInterface\ProgressBar.h>
#include <Mathlib\quat.h>
#include <KeyBindings.h>
#include <config.h>
#include <assist\typemagic.h>
#include <playerresourcetype.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Mathlib\mathlibdll.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\fastmath.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Race.h>
#include <platform\keydefines.h>
#include <HyperspaceManager.h>
#include <Universe.h>
#include <SquadronList.h>
#include <Waypoint.h>
#include <pathpoints.h>
#include <SobUnmoveable.h>
#include <debug\db.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <luaconfig\luaconfig.h>
#include <deque>
#include <lua.h>
#include <Interpolation.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\Primitives\aabb.h>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <platform\timer.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Render\objects\cliprect.h>
#include <Menus\PlaybackMenu.h>
#include <TeamColourRegistry.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <savegame.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <localizer\localizer.h>
#include <recorder.h>
#include <Collision\Primitives\obb.h>
#include <syncChecking.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_59F88A(UI::PlaybackMenu *const, char const *);
UI::PlaybackMenu::PlaybackMenu(char const *) // 0x59F88A
{
    mangled_assert("??0PlaybackMenu@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_59F88A(this, arg);
}

_extern void _sub_59F8A2(UI::PlaybackMenu *const);
UI::PlaybackMenu::~PlaybackMenu() // 0x59F8A2
{
    mangled_assert("??1PlaybackMenu@UI@@UAE@XZ");
    todo("implement");
    _sub_59F8A2(this);
}

_extern void _sub_59F8D0(UI::PlaybackMenu *const, unsigned __int32);
void UI::PlaybackMenu::Update(unsigned __int32) // 0x59F8D0
{
    mangled_assert("?Update@PlaybackMenu@UI@@UAEXI@Z");
    todo("implement");
    _sub_59F8D0(this, arg);
}

_extern void _sub_59F8CF(UI::PlaybackMenu *const);
void UI::PlaybackMenu::OnPostLoad() // 0x59F8CF
{
    mangled_assert("?OnPostLoad@PlaybackMenu@UI@@MAEXXZ");
    todo("implement");
    _sub_59F8CF(this);
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\r_defines.h>
#include <SelTarg.h>
#include <Render\gl\glext.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <seInterface2\PatchID.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <UserInterface\NewFrame.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <crtdefs.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\ProgressBar.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <xutility>
#include <Menus\ObjectivesList.h>
#include <utility>
#include <iosfwd>
#include <UserInterface\NewUIScreen.h>
#include <vector>
#include <xmemory>
#include <Render\objects\textureregistry.h>
#include <GameEventSys.h>
#include <hash_map>
#include <xhash>
#include <compiler\compilerconfig.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <list>
#include <task.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Mathlib\vector3.h>
#include <Collision\intersect.h>
#include <Mathlib\vector4.h>
#include <Collision\primitivesfwd.h>
#include <map>
#include <region.h>
#include <xtree>
#include <prim.h>
#include <boost\scoped_ptr.hpp>
#include <Menus\NewTaskbar.h>
#include <sob.h>
#include <UserInterface\NewListBox.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Interpolation.h>
#include <Mathlib\vector2.h>
#include <Render\objects\cliprect.h>
#include <util\types.h>
#include <Collision\Primitives\aabb.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <localizer\localizer.h>
#include <assert.h>
#include <KeyBindings.h>
#include <config.h>
#include <Mathlib\quat.h>
#include <Render\objects\textureproxy.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\core.h>
#include <Collision\Primitives\obb.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <debug\db.h>
#include <Render\gl\lotypes.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <deque>
#include <Collision\BVH\profiling.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Render\gl\r_types.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Render\objects\compiledtext.h>
#include <sobid.h>
#include <GameEventDefs.h>
#include <Objectives.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewButton.h>
#include <wchar.h>
#include <UserInterface\InterfaceElement.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <UserInterface\uitypes.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Render\objects\bitmapfont.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern UI::ObjectivesList *UI::ObjectivesList::ms_screen; // 0x846D10

/* ---------- private variables */

/* ---------- public code */

UI::ObjectivesList::ObjectivesList(char const *) // 0x59C414
{
    mangled_assert("??0ObjectivesList@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::ObjectivesList::~ObjectivesList() // 0x59C454
{
    mangled_assert("??1ObjectivesList@UI@@UAE@XZ");
    todo("implement");
}

void UI::ObjectivesList::OnPostLoad() // 0x59C64D
{
    mangled_assert("?OnPostLoad@ObjectivesList@UI@@MAEXXZ");
    todo("implement");
}

void UI::ObjectivesList::Update(unsigned __int32) // 0x59C882
{
    mangled_assert("?Update@ObjectivesList@UI@@UAEXI@Z");
    todo("implement");
}

void UI::ObjectivesList::OnEvent(GameEventSys::Event const &) // 0x59C537
{
    mangled_assert("?OnEvent@ObjectivesList@UI@@UAEXABVEvent@GameEventSys@@@Z");
    // __shifted(UI::ObjectivesList, 412);
    todo("implement");
}

void UI::ObjectivesList::OnActivate(bool) // 0x59C4FA
{
    mangled_assert("?OnActivate@ObjectivesList@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::ObjectivesList::OnObjectiveSelect(UI::InterfaceElement *sender, __int32 i) // 0x59C589
{
    mangled_assert("?OnObjectiveSelect@ObjectivesList@UI@@CGXPAVInterfaceElement@2@H@Z");
    todo("implement");
}

void UI::ObjectivesList::ShowObjectiveDetails(unsigned __int32) // 0x59C799
{
    mangled_assert("?ShowObjectiveDetails@ObjectivesList@UI@@IAEXI@Z");
    todo("implement");
}

void UI::ObjectivesList::SelectObjective(unsigned __int32) // 0x59C751
{
    mangled_assert("?SelectObjective@ObjectivesList@UI@@QAEXI@Z");
    todo("implement");
}

/* ---------- private code */
#endif

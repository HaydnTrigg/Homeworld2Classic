#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua.h>
#include <Render\gl\r_defines.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\glext.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <playerresourcetype.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <crtdefs.h>
#include <LevelDesc.h>
#include <seInterface2\SoundParams.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Menus\SpeechRecall.h>
#include <UserInterface\NewUIScreen.h>
#include <gamestructimpl.h>
#include <fixedpoint.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\NewFrame.h>
#include <Badge.h>
#include <util\fixed.h>
#include <Player.h>
#include <new>
#include <SquadronList.h>
#include <xstddef>
#include <type_traits>
#include <Collision\BVH\octree.h>
#include <UserInterface\StyleSheet.h>
#include <task.h>
#include <Collision\BVH\span.h>
#include <UserInterface\pch.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <region.h>
#include <boost\static_assert.hpp>
#include <xhash>
#include <prim.h>
#include <compiler\compilerconfig.h>
#include <Interpolation.h>
#include <list>
#include <Render\objects\cliprect.h>
#include <Collision\Primitives\aabb.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <UserInterface\ListBoxItem.h>
#include <Mathlib\vector3.h>
#include <UserInterface\TextButton.h>
#include <Mathlib\vector4.h>
#include <UserInterface\NewButton.h>
#include <localizer\localizer.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <BuildManager.h>
#include <KeyBindings.h>
#include <config.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <assert.h>
#include <Mathlib\quat.h>
#include <Render\objects\textureproxy.h>
#include <platform\osdef.h>
#include <gameSettings.h>
#include <Collision\Primitives\capsule.h>
#include <syncChecking.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\mathutil.h>
#include <Menus\NewTaskbar.h>
#include <Collision\BVH\profiling.h>
#include <assist\typemagic.h>
#include <GameEventSys.h>
#include <ResearchManager.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\core.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <Render\objects\compiledtext.h>
#include <UserInterface\NewTextLabel.h>
#include <debug\db.h>
#include <UserInterface\uiprimitives.h>
#include <Render\gl\lotypes.h>
#include <deque>
#include <sobid.h>
#include <util\colour.h>
#include <Render\gl\r_types.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Render\objects\bitmapfont.h>
#include <stack>
#include <SelTarg.h>
#include <UserInterface\NewListBox.h>
#include <Race.h>
#include <UserInterface\InterfaceElement.h>
#include <wchar.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <luaconfig\luaconfig.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::SpeechRecall::SpeechRecall(char const *) // 0x5A8E50
{
    mangled_assert("??0SpeechRecall@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::SpeechRecall::~SpeechRecall() // 0x5A8E68
{
    mangled_assert("??1SpeechRecall@UI@@UAE@XZ");
    todo("implement");
}

void UI::SpeechRecall::OnPostLoad() // 0x5A8FFD
{
    mangled_assert("?OnPostLoad@SpeechRecall@UI@@MAEXXZ");
    todo("implement");
}

void UI::SpeechRecall::Draw() // 0x5A8FCC
{
    mangled_assert("?Draw@SpeechRecall@UI@@UAEXXZ");
    todo("implement");
}

void UI::SpeechRecall::Toggle() // 0x5A9051
{
    mangled_assert("?Toggle@SpeechRecall@UI@@SGXXZ");
    todo("implement");
}

void UI::SpeechRecall::AddString(wchar_t const *, Texture *) // 0x5A8E95
{
    mangled_assert("?AddString@SpeechRecall@UI@@QAEXPB_WPAVTexture@@@Z");
    todo("implement");
}

void UI::SpeechRecall::OnActivate(bool) // 0x5A8FD1
{
    mangled_assert("?OnActivate@SpeechRecall@UI@@MAEX_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif

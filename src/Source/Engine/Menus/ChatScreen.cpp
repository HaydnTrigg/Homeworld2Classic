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
#include <SelTarg.h>
#include <crtdefs.h>
#include <platform\timer.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Race.h>
#include <UserInterface\NewTextInput.h>
#include <Mathlib\matrix3.h>
#include <gamemsg.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <UserInterface\StyleSheet.h>
#include <task.h>
#include <UserInterface\pch.h>
#include <UserInterface\RadioButton.h>
#include <UserInterface\RadioItem.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <region.h>
#include <xhash>
#include <prim.h>
#include <Universe.h>
#include <compiler\compilerconfig.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <list>
#include <Render\objects\cliprect.h>
#include <playerresourcetype.h>
#include <UserInterface\ListBoxItem.h>
#include <Mathlib\vector3.h>
#include <UserInterface\TextButton.h>
#include <Collision\BVH\octree.h>
#include <Mathlib\vector4.h>
#include <UserInterface\NewButton.h>
#include <Collision\BVH\span.h>
#include <LevelDesc.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Hash.h>
#include <localizer\localizer.h>
#include <Collision\BVH\proxy.h>
#include <fileio\md5.h>
#include <map>
#include <Collision\intersect.h>
#include <xtree>
#include <Collision\primitivesfwd.h>
#include <boost\scoped_ptr.hpp>
#include <fixedpoint.h>
#include <gamestructimpl.h>
#include <util\fixed.h>
#include <KeyBindings.h>
#include <Badge.h>
#include <HyperspaceManager.h>
#include <config.h>
#include <Mathlib\vector2.h>
#include <sob.h>
#include <Player.h>
#include <util\types.h>
#include <sobstatic.h>
#include <SquadronList.h>
#include <Collision\Primitives\sphere.h>
#include <Interpolation.h>
#include <boost\cstdint.hpp>
#include <Collision\Primitives\aabb.h>
#include <boost\config.hpp>
#include <cassert>
#include <assert.h>
#include <Mathlib\quat.h>
#include <Render\objects\textureproxy.h>
#include <boost\static_assert.hpp>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <Menus\NewTaskbar.h>
#include <GameEventSys.h>
#include <dbdefines.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UnitCaps\UnitCaps.h>
#include <UserInterface\Graphic.h>
#include <TeamColourRegistry.h>
#include <Render\objects\texture.h>
#include <savegame.h>
#include <Render\objects\objects.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\core.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\objects\compiledtext.h>
#include <Collision\Primitives\obb.h>
#include <pathpoints.h>
#include <UserInterface\NewTextLabel.h>
#include <debug\db.h>
#include <UserInterface\uiprimitives.h>
#include <BuildManager.h>
#include <Render\gl\lotypes.h>
#include <deque>
#include <ChatMsg.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <util\colour.h>
#include <Render\gl\r_types.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\profiling.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Render\objects\bitmapfont.h>
#include <stack>
#include <Menus\ChatScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\NewFrame.h>
#include <sobid.h>
#include <SOBGroupManager.h>
#include <gameSettings.h>
#include <UserInterface\NewListBox.h>
#include <syncChecking.h>
#include <UserInterface\InterfaceElement.h>
#include <wchar.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <UserInterface\DestinationTextInput.h>
#include <ResearchManager.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <luaconfig\luaconfig.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *g_destButtons[8]; // 0x839DBC
}

/* ---------- public code */

UI::ChatScreen::ChatScreen(char const *) // 0x570B11
{
    mangled_assert("??0ChatScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::ChatScreen::~ChatScreen() // 0x570B39
{
    mangled_assert("??1ChatScreen@UI@@UAE@XZ");
    todo("implement");
}

void UI::ChatScreen::OnLoad(LuaConfig &) // 0x570FC8
{
    mangled_assert("?OnLoad@ChatScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::ChatScreen::UpdateChatDestinations() // 0x571784
{
    mangled_assert("?UpdateChatDestinations@ChatScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::ChatScreen::OnPostLoad() // 0x57101F
{
    mangled_assert("?OnPostLoad@ChatScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::ChatScreen::Update(unsigned __int32) // 0x5713C1
{
    mangled_assert("?Update@ChatScreen@UI@@UAEXI@Z");
    todo("implement");
}

void UI::ChatScreen::Toggle() // 0x571336
{
    mangled_assert("?Toggle@ChatScreen@UI@@SGXXZ");
    todo("implement");
}

void UI::ChatScreen::OnActivate(bool) // 0x570D25
{
    mangled_assert("?OnActivate@ChatScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::ChatScreen::OnChatAccept(UI::InterfaceElement *sender) // 0x570DFC
{
    mangled_assert("?OnChatAccept@ChatScreen@UI@@KGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ChatScreen::OnChatCancel(UI::InterfaceElement *sender) // 0x570F05
{
    mangled_assert("?OnChatCancel@ChatScreen@UI@@KGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ChatScreen::SendChatMsg(wchar_t const *, __int32) // 0x571227
{
    mangled_assert("?SendChatMsg@ChatScreen@UI@@QAEXPB_WH@Z");
    todo("implement");
}

void UI::ChatScreen::OnChooseDest(UI::InterfaceElement *sender) // 0x570F72
{
    mangled_assert("?OnChooseDest@ChatScreen@UI@@KGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::ChatScreen::SetChatDest(__int32) // 0x5712A5
{
    mangled_assert("?SetChatDest@ChatScreen@UI@@QAEXH@Z");
    todo("implement");
}

void UI::ChatScreen::ActivateChat() // 0x570B72
{
    mangled_assert("?ActivateChat@ChatScreen@UI@@QAEXXZ");
    todo("implement");
}

void UI::ChatScreen::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x570FB9
{
    mangled_assert("?OnKeyPressed@ChatScreen@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

void UI::ChatScreen::NextDest() // 0x570C06
{
    mangled_assert("?NextDest@ChatScreen@UI@@AAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif

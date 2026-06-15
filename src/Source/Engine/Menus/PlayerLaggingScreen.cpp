#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua.h>
#include <Hash.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <Render\gl\r_defines.h>
#include <assist\stlexsmallvector.h>
#include <fileio\md5.h>
#include <kernelspecs.h>
#include <Render\gl\glext.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <xstring>
#include <libloaderapi.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <fixedpoint.h>
#include <sysinfoapi.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <gamestructimpl.h>
#include <util\fixed.h>
#include <objidlbase.h>
#include <Badge.h>
#include <winreg.h>
#include <ncrypt.h>
#include <crtdefs.h>
#include <Universe.h>
#include <dbdefines.h>
#include <unknwnbase.h>
#include <Waypoint.h>
#include <UnitCaps\UnitCaps.h>
#include <winsock.h>
#include <oaidl.h>
#include <Player.h>
#include <SobUnmoveable.h>
#include <nb30.h>
#include <commdlg.h>
#include <SquadronList.h>
#include <sob.h>
#include <UserInterface\NewTextInput.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <timeapi.h>
#include <Mathlib\matrix3.h>
#include <GameObj.h>
#include <dpapi.h>
#include <propidl.h>
#include <unknwn.h>
#include <util\statmonitor.h>
#include <securityappcontainer.h>
#include <util\utilexports.h>
#include <fibersapi.h>
#include <imm.h>
#include <new>
#include <winver.h>
#include <winscard.h>
#include <xstddef>
#include <verrsrc.h>
#include <wtypes.h>
#include <type_traits>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <mciapi.h>
#include <stralign.h>
#include <UserInterface\StyleSheet.h>
#include <task.h>
#include <winuser.h>
#include <UserInterface\pch.h>
#include <boost\static_assert.hpp>
#include <consoleapi.h>
#include <xutility>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Collision\Primitives\capsule.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Collision\Primitives\segment.h>
#include <Render\objects\textureregistry.h>
#include <Collision\BVH\profiling.h>
#include <hash_map>
#include <region.h>
#include <TeamColourRegistry.h>
#include <xhash>
#include <prim.h>
#include <savegame.h>
#include <wingdi.h>
#include <compiler\compilerconfig.h>
#include <rpc.h>
#include <urlmon.h>
#include <pshpack4.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <SOBGroupManager.h>
#include <winerror.h>
#include <list>
#include <Render\objects\cliprect.h>
#include <bcrypt.h>
#include <Collision\Primitives\obb.h>
#include <BuildManager.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <UserInterface\ListBoxItem.h>
#include <wincrypt.h>
#include <Mathlib\vector3.h>
#include <UserInterface\TextButton.h>
#include <Mathlib\vector4.h>
#include <UserInterface\NewButton.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <localizer\localizer.h>
#include <map>
#include <xtree>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <boost\scoped_ptr.hpp>
#include <KeyBindings.h>
#include <config.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <oleauto.h>
#include <winioctl.h>
#include <servprov.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <debugapi.h>
#include <platform\timer.h>
#include <fileapi.h>
#include <cguid.h>
#include <cderr.h>
#include <boost\cstdint.hpp>
#include <SelTarg.h>
#include <dde.h>
#include <boost\config.hpp>
#include <cassert>
#include <windows.h>
#include <assert.h>
#include <gameSettings.h>
#include <winapifamily.h>
#include <syncChecking.h>
#include <ChatMsg.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <ResearchManager.h>
#include <poppack.h>
#include <Mathlib\quat.h>
#include <Render\objects\textureproxy.h>
#include <platform\osdef.h>
#include <mmiscapi2.h>
#include <Mathlib\mathutil.h>
#include <profileapi.h>
#include <winefs.h>
#include <assist\typemagic.h>
#include <synchapi.h>
#include <inaddr.h>
#include <mmsystem.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <mmsyscom.h>
#include <UserInterface\Graphic.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\core.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <seInterface2\PatchID.h>
#include <Mathlib\matvec.h>
#include <seInterface2\PatchBase.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <sobid.h>
#include <seInterface2\SoundParams.h>
#include <wnnc.h>
#include <stdarg.h>
#include <Render\objects\compiledtext.h>
#include <pathpoints.h>
#include <windef.h>
#include <oleidl.h>
#include <mcx.h>
#include <UserInterface\NewTextLabel.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <debug\db.h>
#include <UserInterface\uiprimitives.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <Render\gl\lotypes.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <deque>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <util\colour.h>
#include <Render\gl\r_types.h>
#include <boost\shared_ptr.hpp>
#include <objidl.h>
#include <msxml.h>
#include <boost\throw_exception.hpp>
#include <sobtypes.h>
#include <namespaceapi.h>
#include <selection.h>
#include <ktmtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <winsmcrd.h>
#include <Collision\BVH\octree.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewText.h>
#include <Collision\BVH\span.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <Render\objects\fontsystem.h>
#include <UserInterface\NewUIScreenManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <Render\objects\bitmapfont.h>
#include <stack>
#include <Race.h>
#include <Collision\BVH\proxy.h>
#include <HyperspaceManager.h>
#include <minwinbase.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <processenv.h>
#include <gamemsg.h>
#include <guiddef.h>
#include <jobapi.h>
#include <UserInterface\NewListBox.h>
#include <UserInterface\InterfaceElement.h>
#include <wchar.h>
#include <apiset.h>
#include <UserInterface\uitypes.h>
#include <Interpolation.h>
#include <ole2.h>
#include <swprintf.inl>
#include <platform\inputinterface.h>
#include <Menus\PlayerLaggingScreen.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <platform\platformexports.h>
#include <UserInterface\NewUIScreen.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <platform\keydefines.h>
#include <UserInterface\NewFrame.h>
#include <playerresourcetype.h>
#include <Collision\Primitives\aabb.h>
#include <winnls.h>
#include <shellapi.h>
#include <luaconfig\luaconfig.h>
#include <LevelDesc.h>
#include <datetimeapi.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

UI::PlayerLaggingScreen::PlayerLaggingScreen(char const *) // 0x59F9EB
{
    mangled_assert("??0PlayerLaggingScreen@UI@@QAE@PBD@Z");
    todo("implement");
}

UI::PlayerLaggingScreen::~PlayerLaggingScreen() // 0x59FA3E
{
    mangled_assert("??1PlayerLaggingScreen@UI@@UAE@XZ");
    todo("implement");
}

void UI::PlayerLaggingScreen::OnLoad(LuaConfig &) // 0x59FABF
{
    mangled_assert("?OnLoad@PlayerLaggingScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::PlayerLaggingScreen::OnPostLoad() // 0x59FB94
{
    mangled_assert("?OnPostLoad@PlayerLaggingScreen@UI@@MAEXXZ");
    todo("implement");
}

void UI::PlayerLaggingScreen::Update(unsigned __int32) // 0x59FCFA
{
    mangled_assert("?Update@PlayerLaggingScreen@UI@@UAEXI@Z");
    todo("implement");
}

void UI::PlayerLaggingScreen::ShowPlayerLagging(Player *, unsigned __int32) // 0x59FC0D
{
    mangled_assert("?ShowPlayerLagging@PlayerLaggingScreen@UI@@QAEXPAVPlayer@@I@Z");
    todo("implement");
}

void UI::PlayerLaggingScreen::OnActivate(bool) // 0x59FA7A
{
    mangled_assert("?OnActivate@PlayerLaggingScreen@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::PlayerLaggingScreen::OnKickPlayer(UI::InterfaceElement *sender) // 0x59FA7D
{
    mangled_assert("?OnKickPlayer@PlayerLaggingScreen@UI@@KGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::PlayerLaggingScreen::OnNoMore(UI::InterfaceElement *sender) // 0x59FB66
{
    mangled_assert("?OnNoMore@PlayerLaggingScreen@UI@@KGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

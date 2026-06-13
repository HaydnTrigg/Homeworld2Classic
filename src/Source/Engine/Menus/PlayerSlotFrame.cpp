#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <LevelDesc.h>
#include <lua.h>
#include <Hash.h>
#include <assist\stlexsmallvector.h>
#include <Render\gl\r_defines.h>
#include <fileio\md5.h>
#include <Render\gl\glext.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <gamestructimpl.h>
#include <fixedpoint.h>
#include <crtdefs.h>
#include <Badge.h>
#include <isteammatchmaking.h>
#include <util\fixed.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <Menus\PlayerSetup.h>
#include <GameRulesLibrary.h>
#include <isteamapps.h>
#include <Menus\GameSetup.h>
#include <Player.h>
#include <Race.h>
#include <LevelManager.h>
#include <SquadronList.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <App\PlayerProfileMan.h>
#include <xstddef>
#include <App\PlayerProfile.h>
#include <type_traits>
#include <App\PlayerProfileGameOptions.h>
#include <Render\objects\cliprect.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <boost\static_assert.hpp>
#include <UserInterface\ListBoxItem.h>
#include <xutility>
#include <UserInterface\TextButton.h>
#include <utility>
#include <iosfwd>
#include <UserInterface\NewButton.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <isteamscreenshots.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <UserInterface\StringTable.h>
#include <xhash>
#include <TeamColourRegistry.h>
#include <compiler\compilerconfig.h>
#include <isteamfriends.h>
#include <savegame.h>
#include <GameOptions.h>
#include <list>
#include <assist\fixedstring.h>
#include <BuildManager.h>
#include <Mathlib\vector3.h>
#include <UserInterface\UIDialog.h>
#include <Mathlib\vector4.h>
#include <UserInterface\NewUIScreen.h>
#include <task.h>
#include <stack>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <isteamcontroller.h>
#include <steamcontrollerpublic.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <FrontEnd\lobbyevent.h>
#include <FrontEnd\lobbydefines.h>
#include <fileio\filepath.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <isteammusicremote.h>
#include <cassert>
#include <assert.h>
#include <Render\objects\compiledtext.h>
#include <ResearchManager.h>
#include <localizer\localizer.h>
#include <Render\objects\textureproxy.h>
#include <SteamFuncs.h>
#include <platform\osdef.h>
#include <steam_api.h>
#include <isteamclient.h>
#include <Mathlib\mathutil.h>
#include <assist\typemagic.h>
#include <steamtypes.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <isteamuser.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\Graphic.h>
#include <UserInterface\uiprimitives.h>
#include <Render\objects\texture.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\core.h>
#include <isteamhtmlsurface.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <UserInterface\NewText.h>
#include <Mathlib\matvec.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <isteammusic.h>
#include <sobid.h>
#include <debug\db.h>
#include <Render\gl\lotypes.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <isteamremotestorage.h>
#include <deque>
#include <UserInterface\NewUIScreenManager.h>
#include <Network\StagingArea.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <gameSettings.h>
#include <region.h>
#include <Render\gl\r_types.h>
#include <boost\throw_exception.hpp>
#include <config.h>
#include <isteamapplist.h>
#include <prim.h>
#include <sobtypes.h>
#include <syncChecking.h>
#include <selection.h>
#include <savegamedef.h>
#include <isteamhttp.h>
#include <boost\detail\shared_count.hpp>
#include <steamhttpenums.h>
#include <boost\detail\lwm_win32.hpp>
#include <steamclientpublic.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <UserInterface\NewDropDownListBox.h>
#include <Menus\PlayerSlotFrame.h>
#include <UserInterface\NewListBox.h>
#include <UserInterface\NewFrame.h>
#include <wchar.h>
#include <string>
#include <UserInterface\InterfaceElement.h>
#include <swprintf.inl>
#include <UserInterface\uitypes.h>
#include <isteamutils.h>
#include <platform\inputinterface.h>
#include <KeyBindings.h>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <playerresourcetype.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5A1BE0(UI::PlayerSlotFrame *const, UI::NewFrame const &, unsigned __int32, unsigned __int32, UI::TextListBoxItem *, UI::InterfaceElement *, char const *, UI::GameSetup *);
UI::PlayerSlotFrame::PlayerSlotFrame(UI::NewFrame const &, unsigned __int32, unsigned __int32, UI::TextListBoxItem *, UI::InterfaceElement *, char const *, UI::GameSetup *) // 0x5A1BE0
{
    mangled_assert("??0PlayerSlotFrame@UI@@QAE@ABVNewFrame@1@IIPAVTextListBoxItem@1@PAVInterfaceElement@1@PBDPAVGameSetup@1@@Z");
    todo("implement");
    _sub_5A1BE0(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_5A1CD2(UI::PlayerSlotFrame *const);
UI::PlayerSlotFrame::~PlayerSlotFrame() // 0x5A1CD2
{
    mangled_assert("??1PlayerSlotFrame@UI@@UAE@XZ");
    todo("implement");
    _sub_5A1CD2(this);
}

_extern void _sub_5A219F(UI::PlayerSlotFrame *const);
void UI::PlayerSlotFrame::Init() // 0x5A219F
{
    mangled_assert("?Init@PlayerSlotFrame@UI@@AAEXXZ");
    todo("implement");
    _sub_5A219F(this);
}

_extern void _sub_5A1E8C(UI::PlayerSlotFrame *const);
void UI::PlayerSlotFrame::DisableReadyButton() // 0x5A1E8C
{
    mangled_assert("?DisableReadyButton@PlayerSlotFrame@UI@@QAEXXZ");
    todo("implement");
    _sub_5A1E8C(this);
}

_extern void _sub_5A1ED5(UI::PlayerSlotFrame *const, bool);
void UI::PlayerSlotFrame::EnableHostButtons(bool) // 0x5A1ED5
{
    mangled_assert("?EnableHostButtons@PlayerSlotFrame@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5A1ED5(this, arg);
}

_extern void _sub_5A1F16(UI::PlayerSlotFrame *const, bool);
void UI::PlayerSlotFrame::EnableLocalButtons(bool) // 0x5A1F16
{
    mangled_assert("?EnableLocalButtons@PlayerSlotFrame@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5A1F16(this, arg);
}

_extern void _sub_5A2E0F(UI::PlayerSlotFrame *const, wchar_t const *, bool);
void UI::PlayerSlotFrame::MakeHumanPlayer(wchar_t const *, bool) // 0x5A2E0F
{
    mangled_assert("?MakeHumanPlayer@PlayerSlotFrame@UI@@QAEXPB_W_N@Z");
    todo("implement");
    _sub_5A2E0F(this, arg, arg);
}

_extern void _sub_5A2D47(UI::PlayerSlotFrame *const);
void UI::PlayerSlotFrame::MakeCPUPlayer() // 0x5A2D47
{
    mangled_assert("?MakeCPUPlayer@PlayerSlotFrame@UI@@QAEXXZ");
    todo("implement");
    _sub_5A2D47(this);
}

_extern void _sub_5A2E3A(UI::PlayerSlotFrame *const);
void UI::PlayerSlotFrame::MakeOpen() // 0x5A2E3A
{
    mangled_assert("?MakeOpen@PlayerSlotFrame@UI@@QAEXXZ");
    todo("implement");
    _sub_5A2E3A(this);
}

_extern void _sub_5A2DBF(UI::PlayerSlotFrame *const);
void UI::PlayerSlotFrame::MakeClosed() // 0x5A2DBF
{
    mangled_assert("?MakeClosed@PlayerSlotFrame@UI@@QAEXXZ");
    todo("implement");
    _sub_5A2DBF(this);
}

_extern void _sub_5A2DE7(UI::PlayerSlotFrame *const);
void UI::PlayerSlotFrame::MakeEmpty() // 0x5A2DE7
{
    mangled_assert("?MakeEmpty@PlayerSlotFrame@UI@@QAEXXZ");
    todo("implement");
    _sub_5A2DE7(this);
}

_extern void _sub_5A3BBF(UI::PlayerSlotFrame *const, bool);
void UI::PlayerSlotFrame::SetPlayerSlotVisible(bool) // 0x5A3BBF
{
    mangled_assert("?SetPlayerSlotVisible@PlayerSlotFrame@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5A3BBF(this, arg);
}

_extern void _sub_5A2002(UI::PlayerSlotFrame *const, StagingArea::PlayerSettings &);
void UI::PlayerSlotFrame::FillPlayerSettings(StagingArea::PlayerSettings &) // 0x5A2002
{
    mangled_assert("?FillPlayerSettings@PlayerSlotFrame@UI@@AAEXAAUPlayerSettings@StagingArea@@@Z");
    todo("implement");
    _sub_5A2002(this, arg);
}

_extern StagingArea::PlayerSettings const &_sub_5A217E(UI::PlayerSlotFrame *const);
StagingArea::PlayerSettings const &UI::PlayerSlotFrame::GetPlayerSettings() // 0x5A217E
{
    mangled_assert("?GetPlayerSettings@PlayerSlotFrame@UI@@QAEABUPlayerSettings@StagingArea@@XZ");
    todo("implement");
    StagingArea::PlayerSettings const & __result = _sub_5A217E(this);
    return __result;
}

_extern void _sub_5A1FA4(UI::PlayerSlotFrame *const, StagingArea::HostSettings &);
void UI::PlayerSlotFrame::FillHostSettings(StagingArea::HostSettings &) // 0x5A1FA4
{
    mangled_assert("?FillHostSettings@PlayerSlotFrame@UI@@QAEXAAUHostSettings@StagingArea@@@Z");
    todo("implement");
    _sub_5A1FA4(this, arg);
}

_extern __int32 _sub_5A2160(UI::PlayerSlotFrame const *const);
__int32 UI::PlayerSlotFrame::GetPlayerPosition() const // 0x5A2160
{
    mangled_assert("?GetPlayerPosition@PlayerSlotFrame@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5A2160(this);
    return __result;
}

_extern void _sub_5A3C37(UI::PlayerSlotFrame *const, StagingArea *);
void UI::PlayerSlotFrame::UpdateNetwork(StagingArea *) // 0x5A3C37
{
    mangled_assert("?UpdateNetwork@PlayerSlotFrame@UI@@QAEXPAVStagingArea@@@Z");
    todo("implement");
    _sub_5A3C37(this, arg);
}

_extern void _sub_5A31D9(UI::InterfaceElement *);
void UI::PlayerSlotFrame::OnReadyClicked(UI::InterfaceElement *element) // 0x5A31D9
{
    mangled_assert("?OnReadyClicked@PlayerSlotFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A31D9(element);
}

_extern void _sub_5A302A(UI::PlayerSlotFrame *const, StagingArea::PlayerSettings const &, wchar_t const *);
void UI::PlayerSlotFrame::OnNetPlayerSettings(StagingArea::PlayerSettings const &, wchar_t const *) // 0x5A302A
{
    mangled_assert("?OnNetPlayerSettings@PlayerSlotFrame@UI@@QAEXABUPlayerSettings@StagingArea@@PB_W@Z");
    todo("implement");
    _sub_5A302A(this, arg, arg);
}

_extern void _sub_5A2FEE(UI::PlayerSlotFrame *const, StagingArea::HostSettings const &);
void UI::PlayerSlotFrame::OnNetHostSettings(StagingArea::HostSettings const &) // 0x5A2FEE
{
    mangled_assert("?OnNetHostSettings@PlayerSlotFrame@UI@@QAEXABUHostSettings@StagingArea@@@Z");
    todo("implement");
    _sub_5A2FEE(this, arg);
}

_extern void _sub_5A373C(UI::PlayerSlotFrame *const, wchar_t const *);
void UI::PlayerSlotFrame::SetPlayerName(wchar_t const *) // 0x5A373C
{
    mangled_assert("?SetPlayerName@PlayerSlotFrame@UI@@AAEXPB_W@Z");
    todo("implement");
    _sub_5A373C(this, arg);
}

_extern void _sub_5A37BB(UI::PlayerSlotFrame *const, unsigned __int32);
void UI::PlayerSlotFrame::SetPlayerRace(unsigned __int32) // 0x5A37BB
{
    mangled_assert("?SetPlayerRace@PlayerSlotFrame@UI@@QAEXI@Z");
    todo("implement");
    _sub_5A37BB(this, arg);
}

_extern void _sub_5A3C2C(UI::PlayerSlotFrame *const, unsigned __int32);
void UI::PlayerSlotFrame::SetPlayerTeam(unsigned __int32) // 0x5A3C2C
{
    mangled_assert("?SetPlayerTeam@PlayerSlotFrame@UI@@QAEXI@Z");
    todo("implement");
    _sub_5A3C2C(this, arg);
}

_extern void _sub_5A37B0(UI::PlayerSlotFrame *const, unsigned __int32);
void UI::PlayerSlotFrame::SetPlayerPosition(unsigned __int32) // 0x5A37B0
{
    mangled_assert("?SetPlayerPosition@PlayerSlotFrame@UI@@QAEXI@Z");
    todo("implement");
    _sub_5A37B0(this, arg);
}

_extern void _sub_5A37C6(UI::PlayerSlotFrame *const, SlotStatus);
void UI::PlayerSlotFrame::SetPlayerSlotType(SlotStatus) // 0x5A37C6
{
    mangled_assert("?SetPlayerSlotType@PlayerSlotFrame@UI@@AAEXW4SlotStatus@@@Z");
    todo("implement");
    _sub_5A37C6(this, arg);
}

_extern void _sub_5A35B9(UI::PlayerSlotFrame *const, unsigned __int32);
void UI::PlayerSlotFrame::SetMaxPlayers(unsigned __int32) // 0x5A35B9
{
    mangled_assert("?SetMaxPlayers@PlayerSlotFrame@UI@@QAEXI@Z");
    todo("implement");
    _sub_5A35B9(this, arg);
}

_extern void _sub_5A3731(UI::PlayerSlotFrame *const, __int32);
void UI::PlayerSlotFrame::SetPlayerDifficulty(__int32) // 0x5A3731
{
    mangled_assert("?SetPlayerDifficulty@PlayerSlotFrame@UI@@QAEXH@Z");
    todo("implement");
    _sub_5A3731(this, arg);
}

_extern void _sub_5A329B(UI::PlayerSlotFrame *const);
void UI::PlayerSlotFrame::RefreshEmblem() // 0x5A329B
{
    mangled_assert("?RefreshEmblem@PlayerSlotFrame@UI@@QAEXXZ");
    todo("implement");
    _sub_5A329B(this);
}

_extern void _sub_5A36CE(UI::PlayerSlotFrame *const, __int32);
void UI::PlayerSlotFrame::SetPing(__int32) // 0x5A36CE
{
    mangled_assert("?SetPing@PlayerSlotFrame@UI@@QAEXH@Z");
    todo("implement");
    _sub_5A36CE(this, arg);
}

_extern void _sub_5A3298(UI::InterfaceElement *);
void UI::PlayerSlotFrame::OnSimpleChange(UI::InterfaceElement *element) // 0x5A3298
{
    mangled_assert("?OnSimpleChange@PlayerSlotFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A3298(element);
}

_extern void _sub_5A2F5F(UI::InterfaceElement *);
void UI::PlayerSlotFrame::OnListBoxChange(UI::InterfaceElement *element) // 0x5A2F5F
{
    mangled_assert("?OnListBoxChange@PlayerSlotFrame@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5A2F5F(element);
}

_extern void _sub_5A2F22(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::PlayerSlotFrame::OnEmblemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A2F22
{
    mangled_assert("?OnEmblemClicked@PlayerSlotFrame@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A2F22(sender, x, y, b);
}

_extern void _sub_5A2E9B(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
void UI::PlayerSlotFrame::OnCPUEmblemClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5A2E9B
{
    mangled_assert("?OnCPUEmblemClicked@PlayerSlotFrame@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_5A2E9B(sender, x, y, b);
}

_extern void _sub_5A354E(UI::PlayerSlotFrame *const, __int32);
void UI::PlayerSlotFrame::ResetPlayerSettings(__int32) // 0x5A354E
{
    mangled_assert("?ResetPlayerSettings@PlayerSlotFrame@UI@@QAEXH@Z");
    todo("implement");
    _sub_5A354E(this, arg);
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <App\PlayerProfileGameOptions.h>
#include <assist\stlexsmallvector.h>
#include <KeyBindings.h>
#include <xstring>
#include <config.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <xmemory0>
#include <platform\keydefines.h>
#include <isteamremotestorage.h>
#include <Mathlib\matrix4.h>
#include <UserInterface\DestinationTextInput.h>
#include <pch.h>
#include <UserInterface\NewUIScreenManager.h>
#include <memory\memorylib.h>
#include <UserInterface\NewTextInput.h>
#include <hash_map>
#include <UserInterface\NewTextLabel.h>
#include <xhash>
#include <crtdefs.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <isteamapplist.h>
#include <Render\objects\bitmapfont.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>
#include <App\AppObj.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\NewUIScreen.h>
#include <platform\appinterface.h>
#include <new>
#include <xstddef>
#include <steamclientpublic.h>
#include <UserInterface\signals.h>
#include <type_traits>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <UserInterface\NewListBox.h>
#include <xutility>
#include <isteamutils.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <compiler\compilerconfig.h>
#include <string.h>
#include <list>
#include <isteammatchmaking.h>
#include <platform\osdef.h>
#include <gamestructimpl.h>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <Badge.h>
#include <assist\fixedstring.h>
#include <GameRulesLibrary.h>
#include <isteamapps.h>
#include <UserInterface\NewButton.h>
#include <UserInterface\InterfaceElement.h>
#include <Mathlib\vector3.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Mathlib\vector4.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <map>
#include <Render\objects\objects.h>
#include <xtree>
#include <Render\objects\core.h>
#include <boost\scoped_ptr.hpp>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\lotypes.h>
#include <boost\static_assert.hpp>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <Render\gl\r_types.h>
#include <Render\objects\textureproxy.h>
#include <cassert>
#include <FrontEnd\LobbyPlayerDesc.h>
#include <isteamscreenshots.h>
#include <assert.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\cliprect.h>
#include <isteamfriends.h>
#include <FrontEnd\Lobby.h>
#include <task.h>
#include <stack>
#include <assist\typemagic.h>
#include <UserInterface\ListBoxItem.h>
#include <UserInterface\TextButton.h>
#include <Network\StagingArea.h>
#include <gameSettings.h>
#include <syncChecking.h>
#include <Mathlib\mathlibdll.h>
#include <region.h>
#include <Mathlib\fastmath.h>
#include <prim.h>
#include <isteamcontroller.h>
#include <steamcontrollerpublic.h>
#include <debug\db.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <deque>
#include <isteammusicremote.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewFrame.h>
#include <SteamFuncs.h>
#include <steam_api.h>
#include <isteamclient.h>
#include <steamtypes.h>
#include <Menus\Multiplayer\ChatUI.h>
#include <isteamuser.h>
#include <FrontEnd\lobbydefines.h>
#include <wchar.h>
#include <Render\objects\compiledtext.h>
#include <string>
#include <UserInterface\uitypes.h>
#include <LevelDesc.h>
#include <isteamhtmlsurface.h>
#include <platform\inputinterface.h>
#include <Hash.h>
#include <platform\platformexports.h>
#include <localizer\localizer.h>
#include <fileio\md5.h>
#include <isteammusic.h>
#include <Render\objects\textureregistry.h>

/* ---------- constants */

/* ---------- definitions */

class UI::TouchListBoxItem :
    public UI::ListBoxItem
{
public:
    TouchListBoxItem(UI::TouchListBoxItem const &); /* compiler_generated() */
    _inline TouchListBoxItem(UI::ListBoxItem const &);
    virtual _inline ~TouchListBoxItem() override;
    _inline bool Touch(bool);
protected:
    virtual _inline void OnUpdate(unsigned __int32) override;
private:
    bool m_touch; // 0x570
public:
    UI::TouchListBoxItem &operator=(UI::TouchListBoxItem const &); /* compiler_generated() */
};
static_assert(sizeof(UI::TouchListBoxItem) == 1400, "Invalid UI::TouchListBoxItem size");

/* ---------- prototypes */


_static void UI::StripTag(wchar_t *out, unsigned __int32 len, wchar_t const *in, wchar_t tag);
_static void UI::StripSpecial(wchar_t *out, unsigned __int32 len, wchar_t const *in, wchar_t tag);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5B0A50(UI::TouchListBoxItem *const, UI::ListBoxItem const &);
_inline UI::TouchListBoxItem::TouchListBoxItem(UI::ListBoxItem const &) // 0x5B0A50
{
    mangled_assert("??0TouchListBoxItem@UI@@QAE@ABVListBoxItem@1@@Z");
    todo("implement");
    _sub_5B0A50(this, arg);
}

_extern void _sub_5B0A9B(UI::TouchListBoxItem *const);
_inline UI::TouchListBoxItem::~TouchListBoxItem() // 0x5B0A9B
{
    mangled_assert("??1TouchListBoxItem@UI@@UAE@XZ");
    todo("implement");
    _sub_5B0A9B(this);
}

_extern bool _sub_5B1E39(UI::TouchListBoxItem *const, bool);
_inline bool UI::TouchListBoxItem::Touch(bool) // 0x5B1E39
{
    mangled_assert("?Touch@TouchListBoxItem@UI@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_5B1E39(this, arg);
    return __result;
}

_extern void _sub_5B14C4(UI::TouchListBoxItem *const, unsigned __int32);
_inline void UI::TouchListBoxItem::OnUpdate(unsigned __int32) // 0x5B14C4
{
    mangled_assert("?OnUpdate@TouchListBoxItem@UI@@MAEXI@Z");
    todo("implement");
    _sub_5B14C4(this, arg);
}

_extern _sub_5B09C2(UI::ChatUI *const);
UI::ChatUI::ChatUI() // 0x5B09C2
{
    mangled_assert("??0ChatUI@UI@@QAE@XZ");
    todo("implement");
    _sub_5B09C2(this);
}

_extern _sub_5B0A34(LobbyPlayerDesc *const);
_inline LobbyPlayerDesc::LobbyPlayerDesc() // 0x5B0A34
{
    mangled_assert("??0LobbyPlayerDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B0A34(this);
}

_extern void _sub_5B0A6F(UI::ChatUI *const);
UI::ChatUI::~ChatUI() // 0x5B0A6F
{
    mangled_assert("??1ChatUI@UI@@QAE@XZ");
    todo("implement");
    _sub_5B0A6F(this);
}

_extern void _sub_5B0A7F(LobbyPlayerDesc *const);
_inline LobbyPlayerDesc::~LobbyPlayerDesc() // 0x5B0A7F
{
    mangled_assert("??1LobbyPlayerDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5B0A7F(this);
}

_extern void _sub_5B196A(UI::ChatUI *const, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
void UI::ChatUI::SetChatFormats(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32) // 0x5B196A
{
    mangled_assert("?SetChatFormats@ChatUI@UI@@QAEXIIIII@Z");
    todo("implement");
    _sub_5B196A(this, arg, arg, arg, arg, arg);
}

_extern void _sub_5B199D(UI::ChatUI *const, UI::NewFrame *);
void UI::ChatUI::SetFrameRoot(UI::NewFrame *) // 0x5B199D
{
    mangled_assert("?SetFrameRoot@ChatUI@UI@@QAEXPAVNewFrame@2@@Z");
    todo("implement");
    _sub_5B199D(this, arg);
}

_extern void _sub_5B1AF7(UI::ChatUI *const, UI::NewListBox *);
void UI::ChatUI::SetListPlayers(UI::NewListBox *) // 0x5B1AF7
{
    mangled_assert("?SetListPlayers@ChatUI@UI@@QAEXPAVNewListBox@2@@Z");
    todo("implement");
    _sub_5B1AF7(this, arg);
}

_extern void _sub_5B1B03(UI::ChatUI *const, UI::ListBoxItem *);
void UI::ChatUI::SetListPlayersTemplate(UI::ListBoxItem *) // 0x5B1B03
{
    mangled_assert("?SetListPlayersTemplate@ChatUI@UI@@QAEXPAVListBoxItem@2@@Z");
    todo("implement");
    _sub_5B1B03(this, arg);
}

_extern void _sub_5B0F99(UI::InterfaceElement *);
void UI::ChatUI::IgnoreToAllCallback(UI::InterfaceElement *sender) // 0x5B0F99
{
    mangled_assert("?IgnoreToAllCallback@ChatUI@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B0F99(sender);
}

_extern void _sub_5B1F04(UI::InterfaceElement *);
void UI::ChatUI::WhisperToIgnoreCallback(UI::InterfaceElement *sender) // 0x5B1F04
{
    mangled_assert("?WhisperToIgnoreCallback@ChatUI@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B1F04(sender);
}

_extern void _sub_5B0BBE(UI::InterfaceElement *);
void UI::ChatUI::AllToWhisperCallback(UI::InterfaceElement *sender) // 0x5B0BBE
{
    mangled_assert("?AllToWhisperCallback@ChatUI@UI@@SGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B0BBE(sender);
}

_extern void _sub_5B1A50(UI::ChatUI *const, UI::NewListBox *, bool);
void UI::ChatUI::SetListMessages(UI::NewListBox *, bool) // 0x5B1A50
{
    mangled_assert("?SetListMessages@ChatUI@UI@@QAEXPAVNewListBox@2@_N@Z");
    todo("implement");
    _sub_5B1A50(this, arg, arg);
}

_extern void _sub_5B1AEB(UI::ChatUI *const, UI::ListBoxItem *);
void UI::ChatUI::SetListMessagesTemplate(UI::ListBoxItem *) // 0x5B1AEB
{
    mangled_assert("?SetListMessagesTemplate@ChatUI@UI@@QAEXPAVListBoxItem@2@@Z");
    todo("implement");
    _sub_5B1AEB(this, arg);
}

_extern void _sub_5B193A(UI::ChatUI *const, UI::NewButton *);
void UI::ChatUI::SetButtonSend(UI::NewButton *) // 0x5B193A
{
    mangled_assert("?SetButtonSend@ChatUI@UI@@QAEXPAVNewButton@2@@Z");
    todo("implement");
    _sub_5B193A(this, arg);
}

_extern void _sub_5B1952(UI::ChatUI *const, UI::NewButton *);
void UI::ChatUI::SetButtonWhisper(UI::NewButton *) // 0x5B1952
{
    mangled_assert("?SetButtonWhisper@ChatUI@UI@@QAEXPAVNewButton@2@@Z");
    todo("implement");
    _sub_5B1952(this, arg);
}

_extern void _sub_5B195E(UI::ChatUI *const, UI::NewButton *);
void UI::ChatUI::SetButtonWhisperToList(UI::NewButton *) // 0x5B195E
{
    mangled_assert("?SetButtonWhisperToList@ChatUI@UI@@QAEXPAVNewButton@2@@Z");
    todo("implement");
    _sub_5B195E(this, arg);
}

_extern void _sub_5B192E(UI::ChatUI *const, UI::NewButton *);
void UI::ChatUI::SetButtonBroadcast(UI::NewButton *) // 0x5B192E
{
    mangled_assert("?SetButtonBroadcast@ChatUI@UI@@QAEXPAVNewButton@2@@Z");
    todo("implement");
    _sub_5B192E(this, arg);
}

_extern void _sub_5B1946(UI::ChatUI *const, UI::NewButton *);
void UI::ChatUI::SetButtonSuppress(UI::NewButton *) // 0x5B1946
{
    mangled_assert("?SetButtonSuppress@ChatUI@UI@@QAEXPAVNewButton@2@@Z");
    todo("implement");
    _sub_5B1946(this, arg);
}

_extern void _sub_5B19A8(UI::ChatUI *const, UI::DestinationTextInput *, bool);
void UI::ChatUI::SetInputChat(UI::DestinationTextInput *, bool) // 0x5B19A8
{
    mangled_assert("?SetInputChat@ChatUI@UI@@QAEXPAVDestinationTextInput@2@_N@Z");
    todo("implement");
    _sub_5B19A8(this, arg, arg);
}

_extern void _sub_5B0ED4(UI::ChatUI *const);
void UI::ChatUI::ClearChatInput() // 0x5B0ED4
{
    mangled_assert("?ClearChatInput@ChatUI@UI@@QAEXXZ");
    todo("implement");
    _sub_5B0ED4(this);
}

_extern void _sub_5B0AC8(UI::ChatUI *const, bool);
void UI::ChatUI::Activate(bool) // 0x5B0AC8
{
    mangled_assert("?Activate@ChatUI@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5B0AC8(this, arg);
}

_extern void _sub_5B0EE2(UI::ChatUI *const);
void UI::ChatUI::DoRefreshPlayers() // 0x5B0EE2
{
    mangled_assert("?DoRefreshPlayers@ChatUI@UI@@AAEXXZ");
    todo("implement");
    _sub_5B0EE2(this);
}

_extern void _sub_5B1E4C(UI::ChatUI *const);
void UI::ChatUI::UpdateChatDestinations() // 0x5B1E4C
{
    mangled_assert("?UpdateChatDestinations@ChatUI@UI@@QAEXXZ");
    todo("implement");
    _sub_5B1E4C(this);
}

_extern void _sub_5B1107(UI::ChatUI *const, wchar_t const *);
void UI::ChatUI::LobbyPlayerConnect(wchar_t const *) // 0x5B1107
{
    mangled_assert("?LobbyPlayerConnect@ChatUI@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_5B1107(this, arg);
}

_extern void _sub_5B1360(UI::ChatUI *const, wchar_t const *, bool);
void UI::ChatUI::LobbyPlayerConnectMessage(wchar_t const *, bool) // 0x5B1360
{
    mangled_assert("?LobbyPlayerConnectMessage@ChatUI@UI@@QAEXPB_W_N@Z");
    todo("implement");
    _sub_5B1360(this, arg, arg);
}

_extern void _sub_5B13E9(UI::ChatUI *const, wchar_t const *);
void UI::ChatUI::LobbyPlayerDisconnect(wchar_t const *) // 0x5B13E9
{
    mangled_assert("?LobbyPlayerDisconnect@ChatUI@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_5B13E9(this, arg);
}

_extern void _sub_5B1040(UI::ChatUI *const, wchar_t const *);
void UI::ChatUI::LobbyPlayerChanged(wchar_t const *) // 0x5B1040
{
    mangled_assert("?LobbyPlayerChanged@ChatUI@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_5B1040(this, arg);
}

_extern void _sub_5B162C(UI::ChatUI *const);
void UI::ChatUI::SendChatLobby() // 0x5B162C
{
    mangled_assert("?SendChatLobby@ChatUI@UI@@QAEXXZ");
    todo("implement");
    _sub_5B162C(this);
}

_extern void _sub_5B18D0(UI::ChatUI *const, StagingArea *, unsigned __int32);
void UI::ChatUI::SendChatNoLobby(StagingArea *, unsigned __int32) // 0x5B18D0
{
    mangled_assert("?SendChatNoLobby@ChatUI@UI@@QAEXPAVStagingArea@@I@Z");
    todo("implement");
    _sub_5B18D0(this, arg, arg);
}

_extern void _sub_5B0D9C(UI::ChatUI *const, wchar_t const *, bool, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
void UI::ChatUI::BuildPlayerJoinedLeftText(wchar_t const *, bool, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x5B0D9C
{
    mangled_assert("?BuildPlayerJoinedLeftText@ChatUI@UI@@AAEXPB_W_NAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_5B0D9C(this, arg, arg, arg);
}

_extern void _sub_5B0E3C(UI::ChatUI *const, wchar_t const *, wchar_t const *, wchar_t const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
void UI::ChatUI::BuildWhisperEcho(wchar_t const *, wchar_t const *, wchar_t const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x5B0E3C
{
    mangled_assert("?BuildWhisperEcho@ChatUI@UI@@AAEXPB_W00AAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_5B0E3C(this, arg, arg, arg, arg);
}

_extern void _sub_5B0C93(UI::ChatUI *const, LobbyChatType, wchar_t const *, wchar_t const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
void UI::ChatUI::BuildChatText(LobbyChatType, wchar_t const *, wchar_t const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) // 0x5B0C93
{
    mangled_assert("?BuildChatText@ChatUI@UI@@AAEXW4LobbyChatType@@PB_W1AAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_5B0C93(this, arg, arg, arg, arg);
}

_extern void _sub_5B0AF9(UI::ChatUI *const, wchar_t const *, bool);
void UI::ChatUI::AddMessage(wchar_t const *, bool) // 0x5B0AF9
{
    mangled_assert("?AddMessage@ChatUI@UI@@QAEXPB_W_N@Z");
    todo("implement");
    _sub_5B0AF9(this, arg, arg);
}

_extern UI::NewListBox *_sub_5B1DE6(UI::ChatUI *const, bool);
UI::NewListBox *UI::ChatUI::ToggleChatList(bool) // 0x5B1DE6
{
    mangled_assert("?ToggleChatList@ChatUI@UI@@QAEPAVNewListBox@2@_N@Z");
    todo("implement");
    UI::NewListBox * __result = _sub_5B1DE6(this, arg);
    return __result;
}

_extern void _sub_5B14D0(UI::ChatUI *const, LobbyChatType, wchar_t const *, wchar_t const *, bool);
void UI::ChatUI::ReceiveMessage(LobbyChatType, wchar_t const *, wchar_t const *, bool) // 0x5B14D0
{
    mangled_assert("?ReceiveMessage@ChatUI@UI@@QAEXW4LobbyChatType@@PB_W1_N@Z");
    todo("implement");
    _sub_5B14D0(this, arg, arg, arg, arg);
}

_extern unsigned __int32 _sub_5B0F08(UI::ChatUI *const, wchar_t const *);
unsigned __int32 UI::ChatUI::FindPlayerIndex(wchar_t const *) // 0x5B0F08
{
    mangled_assert("?FindPlayerIndex@ChatUI@UI@@AAEIPB_W@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5B0F08(this, arg);
    return __result;
}

_extern void _sub_5B1B0F(UI::ChatUI *const, bool);
void UI::ChatUI::SetVisible(bool) // 0x5B1B0F
{
    mangled_assert("?SetVisible@ChatUI@UI@@QAEX_N@Z");
    todo("implement");
    _sub_5B1B0F(this, arg);
}

_extern wchar_t const *_sub_5B0F6B(UI::ListBoxItem *);
wchar_t const *UI::ChatUI::GetChatName(UI::ListBoxItem *item) // 0x5B0F6B
{
    mangled_assert("?GetChatName@ChatUI@UI@@CGPB_WPAVListBoxItem@2@@Z");
    todo("implement");
    wchar_t const * __result = _sub_5B0F6B(item);
    return __result;
}

_extern void _sub_5B1567(UI::ChatUI const *const, std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &, UI::ChatUI::ChatList);
void UI::ChatUI::SaveChatMessages(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &, UI::ChatUI::ChatList) const // 0x5B1567
{
    mangled_assert("?SaveChatMessages@ChatUI@UI@@QBEXAAV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@W4ChatList@12@@Z");
    todo("implement");
    _sub_5B1567(this, arg, arg);
}

/* ---------- private code */

_extern void _sub_5B1C95(wchar_t *, unsigned __int32, wchar_t const *, wchar_t);
_static void UI::StripTag(wchar_t *out, unsigned __int32 len, wchar_t const *in, wchar_t tag) // 0x5B1C95
{
    mangled_assert("UI::StripTag");
    todo("implement");
    _sub_5B1C95(out, len, in, tag);
}

_extern void _sub_5B1BC1(wchar_t *, unsigned __int32, wchar_t const *, wchar_t);
_static void UI::StripSpecial(wchar_t *out, unsigned __int32 len, wchar_t const *in, wchar_t tag) // 0x5B1BC1
{
    mangled_assert("UI::StripSpecial");
    todo("implement");
    _sub_5B1BC1(out, len, in, tag);
}
#endif

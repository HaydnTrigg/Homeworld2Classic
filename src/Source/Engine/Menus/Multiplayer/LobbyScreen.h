#if 0
#ifndef __LOBBYSCREEN_H__
#define __LOBBYSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::LobbyScreen :
    public UI::NewUIScreen,
    private LobbyEvent
{
public:
    LobbyScreen(UI::LobbyScreen const &); /* compiler_generated() */
    LobbyScreen(char const *);
    virtual ~LobbyScreen() override;
    void SetPreviousScreen(char const *);
    void SetRoomName(wchar_t const *);
    void SetRoomID(unsigned __int32);
    void SetJoinRoom(bool);
    void SetIsLanGame(bool);
    UI::LobbyScreenView *GetView();
    static void Show(bool isLanGame);
    virtual void Update(unsigned __int32) override;
protected:
    virtual void OnPreLoadFile(LuaConfig &) override;
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnPostActivate(bool) override;
private:
    virtual void OnLobbyPlayerConnect(wchar_t const *, bool) override;
    virtual void OnLobbyPlayerDisconnect(wchar_t const *) override;
    virtual void OnLobbyPlayerChanged(wchar_t const *) override;
    virtual void OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) override;
    virtual void OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) override;
    virtual void OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) override;
    virtual void OnLobbySessionDeleted(unsigned long long) override;
    virtual void OnLobbySessionUpdated(unsigned long long) override;
    virtual void OnLobbyDisconnected(wchar_t const *) override;
    virtual void OnLobbyRoomJoinedResult(LobbyRoomType, bool) override;
    virtual _inline void OnLobbyChatConnectResult(bool, unsigned __int32) override;
    virtual _inline void OnLobbyRoomAdded(unsigned long long) override;
    virtual _inline void OnLobbyCDAuthenticate(bool, wchar_t const *) override;
    virtual _inline void OnLobbyRoomJoined(bool);
    unsigned __int32 FindPlayerIndex(wchar_t const *);
    void DoConnect();
    void DoConnectCancel();
    void DoJoinGame(unsigned long long, wchar_t const *);
    void DoActivatedAndJoined();
    void DoRefreshGames();
public:
    void AddChatMessages(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &);
private:
    static void OnBackClicked(UI::InterfaceElement *sender);
    static void OnJoinGameClicked(UI::InterfaceElement *sender);
    static void OnRefreshClicked(UI::InterfaceElement *sender);
    static void OnHostGameClicked(UI::InterfaceElement *sender);
    static void OnSendClicked(UI::InterfaceElement *sender);
    static void OnFiltersClicked(UI::InterfaceElement *sender);
    static void OnGameInfoClicked(UI::InterfaceElement *sender);
    static void OnErrorClicked_BackToMainMenu(UI::InterfaceElement *sender);
    static void OnErrorClicked_Back(UI::InterfaceElement *sender);
    static void OnPasswordClicked_Join(UI::InterfaceElement *sender);
    static void OnPasswordClicked_Host(UI::InterfaceElement *sender);
    static void OnFilterClicked_Accept(UI::InterfaceElement *sender);
    static void OnSortGames(UI::InterfaceElement *);
public:
    static void OnRowDoubleClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    class Data;
private:
    UI::LobbyScreen::Data *m_pimpl; // 0x1A0
public:
    UI::LobbyScreen &operator=(UI::LobbyScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::LobbyScreen) == 420, "Invalid UI::LobbyScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_5B56C7(LobbyEvent * const, bool, unsigned __int32);
_inline void UI::LobbyScreen::OnLobbyChatConnectResult(bool, unsigned __int32) // 0x5B56C7
{
    mangled_assert("?OnLobbyChatConnectResult@LobbyScreen@UI@@EAEX_NI@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B56C7(this, arg, arg);
}

_extern void _sub_5B57E7(LobbyEvent * const, unsigned long long);
_inline void UI::LobbyScreen::OnLobbyRoomAdded(unsigned long long) // 0x5B57E7
{
    mangled_assert("?OnLobbyRoomAdded@LobbyScreen@UI@@EAEX_K@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B57E7(this, arg);
}

_extern void _sub_5B56A9(LobbyEvent * const, bool, wchar_t const *);
_inline void UI::LobbyScreen::OnLobbyCDAuthenticate(bool, wchar_t const *) // 0x5B56A9
{
    mangled_assert("?OnLobbyCDAuthenticate@LobbyScreen@UI@@EAEX_NPB_W@Z");
    // __shifted(UI::LobbyScreen, 412);
    todo("implement");
    _sub_5B56A9(this, arg, arg);
}

_extern void _sub_5B57EA(UI::LobbyScreen *const, bool);
_inline void UI::LobbyScreen::OnLobbyRoomJoined(bool) // 0x5B57EA
{
    mangled_assert("?OnLobbyRoomJoined@LobbyScreen@UI@@EAEX_N@Z");
    todo("implement");
    _sub_5B57EA(this, arg);
}

/* ---------- private code */

#endif // __LOBBYSCREEN_H__
#endif

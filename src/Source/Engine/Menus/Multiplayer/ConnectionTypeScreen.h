#if 0
#ifndef __CONNECTIONTYPESCREEN_H__
#define __CONNECTIONTYPESCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ConnectionTypeScreen :
    public UI::NewUIScreen,
    private LobbyEvent
{
public:
    ConnectionTypeScreen(UI::ConnectionTypeScreen const &); /* compiler_generated() */
    ConnectionTypeScreen(char const *);
    virtual ~ConnectionTypeScreen() override;
    static UI::ConnectionTypeScreen *GetScreen();
protected:
    virtual void OnPreLoadFile(LuaConfig &) override;
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    virtual void OnLobbyCDAuthenticate(bool, wchar_t const *) override;
    virtual void OnLobbyChatConnectResult(bool, unsigned __int32) override;
    virtual void OnLobbyDisconnected(wchar_t const *) override;
    virtual _inline void OnLobbyPlayerConnect(wchar_t const *, bool) override;
    virtual _inline void OnLobbyPlayerDisconnect(wchar_t const *) override;
    virtual _inline void OnLobbyPlayerChanged(wchar_t const *) override;
    virtual _inline void OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) override;
    virtual _inline void OnLobbyRoomAdded(unsigned long long) override;
    virtual _inline void OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) override;
    virtual _inline void OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) override;
    virtual _inline void OnLobbySessionDeleted(unsigned long long) override;
    virtual _inline void OnLobbySessionUpdated(unsigned long long) override;
    virtual _inline void OnLobbyRoomJoined(bool);
    virtual _inline void OnLobbyRoomJoinedResult(LobbyRoomType, bool) override;
    static UI::ConnectionTypeScreen *ms_screen;
    void DoEnterLobby();
    void PostCDAuthenticate();
    static void OnConnectionTypeAccept(UI::InterfaceElement *btnChoice);
    static void OnErrorClicked_BackToMainMenu(UI::InterfaceElement *sender);
    static void OnNameInUseWarningClicked(UI::InterfaceElement *sender);
    class Data;
    UI::ConnectionTypeScreen::Data *m_pimpl; // 0x1A0
public:
    UI::ConnectionTypeScreen &operator=(UI::ConnectionTypeScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ConnectionTypeScreen) == 420, "Invalid UI::ConnectionTypeScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_5B274F(LobbyEvent * const, wchar_t const *, bool);
_inline void UI::ConnectionTypeScreen::OnLobbyPlayerConnect(wchar_t const *, bool) // 0x5B274F
{
    mangled_assert("?OnLobbyPlayerConnect@ConnectionTypeScreen@UI@@EAEXPB_W_N@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B274F(this, arg, arg);
}

_extern void _sub_5B2752(LobbyEvent * const, wchar_t const *);
_inline void UI::ConnectionTypeScreen::OnLobbyPlayerDisconnect(wchar_t const *) // 0x5B2752
{
    mangled_assert("?OnLobbyPlayerDisconnect@ConnectionTypeScreen@UI@@EAEXPB_W@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B2752(this, arg);
}

_extern void _sub_5B274C(LobbyEvent * const, wchar_t const *);
_inline void UI::ConnectionTypeScreen::OnLobbyPlayerChanged(wchar_t const *) // 0x5B274C
{
    mangled_assert("?OnLobbyPlayerChanged@ConnectionTypeScreen@UI@@EAEXPB_W@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B274C(this, arg);
}

_extern void _sub_5B25DD(LobbyEvent * const, LobbyChatType, wchar_t const *, wchar_t const *);
_inline void UI::ConnectionTypeScreen::OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) // 0x5B25DD
{
    mangled_assert("?OnLobbyChat@ConnectionTypeScreen@UI@@EAEXW4LobbyChatType@@PB_W1@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B25DD(this, arg, arg, arg);
}

_extern void _sub_5B2755(LobbyEvent * const, unsigned long long);
_inline void UI::ConnectionTypeScreen::OnLobbyRoomAdded(unsigned long long) // 0x5B2755
{
    mangled_assert("?OnLobbyRoomAdded@ConnectionTypeScreen@UI@@EAEX_K@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B2755(this, arg);
}

_extern void _sub_5B275E(LobbyEvent * const, LobbySessionDesc const &, unsigned long long);
_inline void UI::ConnectionTypeScreen::OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) // 0x5B275E
{
    mangled_assert("?OnLobbySessionAdded@ConnectionTypeScreen@UI@@EAEXABVLobbySessionDesc@@_K@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B275E(this, arg, arg);
}

_extern void _sub_5B2761(LobbyEvent * const, LobbySessionDesc const &, unsigned long long);
_inline void UI::ConnectionTypeScreen::OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) // 0x5B2761
{
    mangled_assert("?OnLobbySessionAddedDirect@ConnectionTypeScreen@UI@@EAEXABVLobbySessionDesc@@_K@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B2761(this, arg, arg);
}

_extern void _sub_5B2764(LobbyEvent * const, unsigned long long);
_inline void UI::ConnectionTypeScreen::OnLobbySessionDeleted(unsigned long long) // 0x5B2764
{
    mangled_assert("?OnLobbySessionDeleted@ConnectionTypeScreen@UI@@EAEX_K@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B2764(this, arg);
}

_extern void _sub_5B2767(LobbyEvent * const, unsigned long long);
_inline void UI::ConnectionTypeScreen::OnLobbySessionUpdated(unsigned long long) // 0x5B2767
{
    mangled_assert("?OnLobbySessionUpdated@ConnectionTypeScreen@UI@@EAEX_K@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B2767(this, arg);
}

_extern void _sub_5B2758(UI::ConnectionTypeScreen *const, bool);
_inline void UI::ConnectionTypeScreen::OnLobbyRoomJoined(bool) // 0x5B2758
{
    mangled_assert("?OnLobbyRoomJoined@ConnectionTypeScreen@UI@@EAEX_N@Z");
    todo("implement");
    _sub_5B2758(this, arg);
}

_extern void _sub_5B275B(LobbyEvent * const, LobbyRoomType, bool);
_inline void UI::ConnectionTypeScreen::OnLobbyRoomJoinedResult(LobbyRoomType, bool) // 0x5B275B
{
    mangled_assert("?OnLobbyRoomJoinedResult@ConnectionTypeScreen@UI@@EAEXW4LobbyRoomType@@_N@Z");
    // __shifted(UI::ConnectionTypeScreen, 412);
    todo("implement");
    _sub_5B275B(this, arg, arg);
}

/* ---------- private code */

#endif // __CONNECTIONTYPESCREEN_H__
#endif

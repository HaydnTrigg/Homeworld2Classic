#if 0
#ifndef __LOBBYTITLEROOM_H__
#define __LOBBYTITLEROOM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::LobbyTitleRoom :
    public UI::NewUIScreen,
    private LobbyEvent
{
public:
    LobbyTitleRoom(UI::LobbyTitleRoom const &); /* compiler_generated() */
    LobbyTitleRoom(char const *);
    virtual ~LobbyTitleRoom() override;
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
    virtual void OnLobbyRoomAdded(unsigned long long) override;
    virtual void OnLobbyRoomJoinedResult(LobbyRoomType, bool) override;
    virtual void OnLobbyDisconnected(wchar_t const *) override;
    virtual _inline void OnLobbyCDAuthenticate(bool, wchar_t const *) override;
    virtual _inline void OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) override;
    virtual _inline void OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) override;
    virtual _inline void OnLobbySessionDeleted(unsigned long long) override;
    virtual _inline void OnLobbySessionUpdated(unsigned long long) override;
    virtual _inline void OnLobbyChatConnectResult(bool, unsigned __int32) override;
    static void OnSendClicked(UI::InterfaceElement *sender);
    static void OnJoinClicked(UI::InterfaceElement *sender);
    static void OnRefreshClicked(UI::InterfaceElement *sender);
    static void OnBackClicked(UI::InterfaceElement *sender);
    static void OnErrorClicked_BackToMainMenu(UI::InterfaceElement *sender);
    static void OnSortRooms(UI::InterfaceElement *sender);
    static void OnRowDoubleClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b);
    void DoRefreshRooms();
    unsigned __int32 FindRoomIndex(unsigned __int32);
    void AddRoomRow(unsigned __int32, wchar_t const *, unsigned __int32, unsigned __int32);
    void UpdateRoomRow(unsigned __int32, wchar_t const *, unsigned __int32, unsigned __int32);
    class Data;
    UI::LobbyTitleRoom::Data *m_pimpl; // 0x1A0
public:
    UI::LobbyTitleRoom &operator=(UI::LobbyTitleRoom const &); /* compiler_generated() */
};
static_assert(sizeof(UI::LobbyTitleRoom) == 420, "Invalid UI::LobbyTitleRoom size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_5B8183(LobbyEvent * const, bool, wchar_t const *);
_inline void UI::LobbyTitleRoom::OnLobbyCDAuthenticate(bool, wchar_t const *) // 0x5B8183
{
    mangled_assert("?OnLobbyCDAuthenticate@LobbyTitleRoom@UI@@EAEX_NPB_W@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
    _sub_5B8183(this, arg, arg);
}

_extern void _sub_5B8408(LobbyEvent * const, LobbySessionDesc const &, unsigned long long);
_inline void UI::LobbyTitleRoom::OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) // 0x5B8408
{
    mangled_assert("?OnLobbySessionAdded@LobbyTitleRoom@UI@@EAEXABVLobbySessionDesc@@_K@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
    _sub_5B8408(this, arg, arg);
}

_extern void _sub_5B840B(LobbyEvent * const, LobbySessionDesc const &, unsigned long long);
_inline void UI::LobbyTitleRoom::OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) // 0x5B840B
{
    mangled_assert("?OnLobbySessionAddedDirect@LobbyTitleRoom@UI@@EAEXABVLobbySessionDesc@@_K@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
    _sub_5B840B(this, arg, arg);
}

_extern void _sub_5B840E(LobbyEvent * const, unsigned long long);
_inline void UI::LobbyTitleRoom::OnLobbySessionDeleted(unsigned long long) // 0x5B840E
{
    mangled_assert("?OnLobbySessionDeleted@LobbyTitleRoom@UI@@EAEX_K@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
    _sub_5B840E(this, arg);
}

_extern void _sub_5B8411(LobbyEvent * const, unsigned long long);
_inline void UI::LobbyTitleRoom::OnLobbySessionUpdated(unsigned long long) // 0x5B8411
{
    mangled_assert("?OnLobbySessionUpdated@LobbyTitleRoom@UI@@EAEX_K@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
    _sub_5B8411(this, arg);
}

_extern void _sub_5B81A1(LobbyEvent * const, bool, unsigned __int32);
_inline void UI::LobbyTitleRoom::OnLobbyChatConnectResult(bool, unsigned __int32) // 0x5B81A1
{
    mangled_assert("?OnLobbyChatConnectResult@LobbyTitleRoom@UI@@EAEX_NI@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
    _sub_5B81A1(this, arg, arg);
}

/* ---------- private code */

#endif // __LOBBYTITLEROOM_H__
#endif

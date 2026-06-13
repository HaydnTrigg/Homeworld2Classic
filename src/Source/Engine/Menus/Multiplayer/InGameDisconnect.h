#if 0
#ifndef __INGAMEDISCONNECT_H__
#define __INGAMEDISCONNECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class InGameDisconnect :
    public LobbyEvent
{
public:
    virtual _inline void OnLobbyPlayerConnect(wchar_t const *, bool) override;
    virtual _inline void OnLobbyPlayerDisconnect(wchar_t const *) override;
    virtual _inline void OnLobbyPlayerChanged(wchar_t const *) override;
    virtual _inline void OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) override;
    virtual _inline void OnLobbyChatConnectResult(bool, unsigned __int32) override;
    virtual _inline void OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) override;
    virtual _inline void OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) override;
    virtual _inline void OnLobbySessionDeleted(unsigned long long) override;
    virtual _inline void OnLobbySessionUpdated(unsigned long long) override;
    virtual _inline void OnLobbyRoomAdded(unsigned long long) override;
    virtual _inline void OnLobbyCDAuthenticate(bool, wchar_t const *) override;
    virtual _inline void OnLobbyRoomJoinedResult(LobbyRoomType, bool) override;
    virtual void OnLobbyDisconnected(wchar_t const *) override;
    InGameDisconnect(InGameDisconnect const &); /* compiler_generated() */
    _inline InGameDisconnect(); /* compiler_generated() */
    InGameDisconnect &operator=(InGameDisconnect const &); /* compiler_generated() */
};
static_assert(sizeof(InGameDisconnect) == 4, "Invalid InGameDisconnect size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_46D6AF(InGameDisconnect *const, wchar_t const *, bool);
_inline void InGameDisconnect::OnLobbyPlayerConnect(wchar_t const *, bool) // 0x46D6AF
{
    mangled_assert("?OnLobbyPlayerConnect@InGameDisconnect@@UAEXPB_W_N@Z");
    todo("implement");
    _sub_46D6AF(this, arg, arg);
}

_extern void _sub_46D6B2(InGameDisconnect *const, wchar_t const *);
_inline void InGameDisconnect::OnLobbyPlayerDisconnect(wchar_t const *) // 0x46D6B2
{
    mangled_assert("?OnLobbyPlayerDisconnect@InGameDisconnect@@UAEXPB_W@Z");
    todo("implement");
    _sub_46D6B2(this, arg);
}

_extern void _sub_46D6AC(InGameDisconnect *const, wchar_t const *);
_inline void InGameDisconnect::OnLobbyPlayerChanged(wchar_t const *) // 0x46D6AC
{
    mangled_assert("?OnLobbyPlayerChanged@InGameDisconnect@@UAEXPB_W@Z");
    todo("implement");
    _sub_46D6AC(this, arg);
}

_extern void _sub_46D6A6(InGameDisconnect *const, LobbyChatType, wchar_t const *, wchar_t const *);
_inline void InGameDisconnect::OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) // 0x46D6A6
{
    mangled_assert("?OnLobbyChat@InGameDisconnect@@UAEXW4LobbyChatType@@PB_W1@Z");
    todo("implement");
    _sub_46D6A6(this, arg, arg, arg);
}

_extern void _sub_46D6A9(InGameDisconnect *const, bool, unsigned __int32);
_inline void InGameDisconnect::OnLobbyChatConnectResult(bool, unsigned __int32) // 0x46D6A9
{
    mangled_assert("?OnLobbyChatConnectResult@InGameDisconnect@@UAEX_NI@Z");
    todo("implement");
    _sub_46D6A9(this, arg, arg);
}

_extern void _sub_46D6BB(InGameDisconnect *const, LobbySessionDesc const &, unsigned long long);
_inline void InGameDisconnect::OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) // 0x46D6BB
{
    mangled_assert("?OnLobbySessionAdded@InGameDisconnect@@UAEXABVLobbySessionDesc@@_K@Z");
    todo("implement");
    _sub_46D6BB(this, arg, arg);
}

_extern void _sub_46D6BE(InGameDisconnect *const, LobbySessionDesc const &, unsigned long long);
_inline void InGameDisconnect::OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) // 0x46D6BE
{
    mangled_assert("?OnLobbySessionAddedDirect@InGameDisconnect@@UAEXABVLobbySessionDesc@@_K@Z");
    todo("implement");
    _sub_46D6BE(this, arg, arg);
}

_extern void _sub_46D6C1(InGameDisconnect *const, unsigned long long);
_inline void InGameDisconnect::OnLobbySessionDeleted(unsigned long long) // 0x46D6C1
{
    mangled_assert("?OnLobbySessionDeleted@InGameDisconnect@@UAEX_K@Z");
    todo("implement");
    _sub_46D6C1(this, arg);
}

_extern void _sub_46D6C4(InGameDisconnect *const, unsigned long long);
_inline void InGameDisconnect::OnLobbySessionUpdated(unsigned long long) // 0x46D6C4
{
    mangled_assert("?OnLobbySessionUpdated@InGameDisconnect@@UAEX_K@Z");
    todo("implement");
    _sub_46D6C4(this, arg);
}

_extern void _sub_46D6B5(InGameDisconnect *const, unsigned long long);
_inline void InGameDisconnect::OnLobbyRoomAdded(unsigned long long) // 0x46D6B5
{
    mangled_assert("?OnLobbyRoomAdded@InGameDisconnect@@UAEX_K@Z");
    todo("implement");
    _sub_46D6B5(this, arg);
}

_extern void _sub_46D6A3(InGameDisconnect *const, bool, wchar_t const *);
_inline void InGameDisconnect::OnLobbyCDAuthenticate(bool, wchar_t const *) // 0x46D6A3
{
    mangled_assert("?OnLobbyCDAuthenticate@InGameDisconnect@@UAEX_NPB_W@Z");
    todo("implement");
    _sub_46D6A3(this, arg, arg);
}

_extern void _sub_46D6B8(InGameDisconnect *const, LobbyRoomType, bool);
_inline void InGameDisconnect::OnLobbyRoomJoinedResult(LobbyRoomType, bool) // 0x46D6B8
{
    mangled_assert("?OnLobbyRoomJoinedResult@InGameDisconnect@@UAEXW4LobbyRoomType@@_N@Z");
    todo("implement");
    _sub_46D6B8(this, arg, arg);
}

/* ---------- private code */

#endif // __INGAMEDISCONNECT_H__
#endif

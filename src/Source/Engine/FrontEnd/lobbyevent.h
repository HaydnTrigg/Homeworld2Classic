#if 0
#ifndef __LOBBYEVENT_H__
#define __LOBBYEVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LobbyEvent
{
public:
    virtual void OnLobbyPlayerConnect(wchar_t const *, bool) = 0;
    virtual void OnLobbyPlayerDisconnect(wchar_t const *) = 0;
    virtual void OnLobbyPlayerChanged(wchar_t const *) = 0;
    virtual void OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) = 0;
    virtual void OnLobbyChatConnectResult(bool, unsigned __int32) = 0;
    virtual void OnLobbySessionAdded(LobbySessionDesc const &, unsigned long long) = 0;
    virtual void OnLobbySessionAddedDirect(LobbySessionDesc const &, unsigned long long) = 0;
    virtual void OnLobbySessionDeleted(unsigned long long) = 0;
    virtual void OnLobbySessionUpdated(unsigned long long) = 0;
    virtual void OnLobbyRoomAdded(unsigned long long) = 0;
    virtual void OnLobbyCDAuthenticate(bool, wchar_t const *) = 0;
    virtual void OnLobbyRoomJoinedResult(LobbyRoomType, bool) = 0;
    virtual void OnLobbyDisconnected(wchar_t const *) = 0;
    LobbyEvent(LobbyEvent const &); /* compiler_generated() */
    _inline LobbyEvent(); /* compiler_generated() */
    LobbyEvent &operator=(LobbyEvent const &); /* compiler_generated() */
};
static_assert(sizeof(LobbyEvent) == 4, "Invalid LobbyEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOBBYEVENT_H__
#endif

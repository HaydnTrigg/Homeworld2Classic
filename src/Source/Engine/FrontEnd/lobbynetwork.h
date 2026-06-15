#if 0
#ifndef __LOBBYNETWORK_H__
#define __LOBBYNETWORK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LobbyNetwork
{
public:
    typedef std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > PlayerList;
    virtual _inline ~LobbyNetwork();
    virtual void Think() = 0;
    virtual bool GetMessage(BufferMessage &) = 0;
    virtual void SessionList() = 0;
    virtual void SessionListStop() = 0;
    virtual void SessionJoin(wchar_t const *) = 0;
    virtual void SessionHost(LobbySessionDesc const &, Net::Session *) = 0;
    virtual void SessionCancel() = 0;
    virtual void SessionEnableJoin(bool) = 0;
    virtual void SessionChangeSettings(LobbySessionDesc const &, Net::Session *) = 0;
    virtual bool SessionGetDescription(unsigned long long, LobbySessionDesc &) const = 0;
    virtual void SessionStarted() = 0;
    virtual bool SessionCreateVisible() const = 0;
    virtual bool SessionUpdate(unsigned long long) const = 0;
    virtual void RoomList() = 0;
    virtual bool RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const = 0;
    virtual bool RoomJoinTitle() = 0;
    virtual bool RoomJoin(unsigned __int32) = 0;
    virtual bool RoomLeave() = 0;
    virtual bool RoomLeaveTitle() = 0;
    virtual void PlayerUpdateList() = 0;
    virtual void PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &) = 0;
    virtual bool PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) = 0;
    virtual void PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) = 0;
    virtual void PlayerChangeSettings() = 0;
    virtual void PlayerSetViewingRoom(LobbyRoomType) = 0;
    virtual void PlayerSetPlaying(bool) = 0;
    virtual LobbyChatStatus ChatGetStatus() = 0;
    virtual void ChatConnect(char const *) = 0;
    virtual void ChatDisconnect() = 0;
    virtual void ChatSend(LobbyChatType, wchar_t const *, wchar_t const *) = 0;
    virtual unsigned long long GetLobbyID() = 0;
    virtual bool CDAuthenticate(char const *) = 0;
    LobbyNetwork(LobbyNetwork const &); /* compiler_generated() */
    _inline LobbyNetwork(); /* compiler_generated() */
    LobbyNetwork &operator=(LobbyNetwork const &); /* compiler_generated() */
};
static_assert(sizeof(LobbyNetwork) == 4, "Invalid LobbyNetwork size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline LobbyNetwork::~LobbyNetwork() // 0x44B127
{
    mangled_assert("??1LobbyNetwork@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __LOBBYNETWORK_H__
#endif

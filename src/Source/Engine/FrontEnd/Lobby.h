#if 0
#ifndef __LOBBY_H__
#define __LOBBY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Lobby
{
public:
    Lobby();
    ~Lobby();
    void SetNetwork(LobbyNetwork *);
    LobbyNetwork *GetNetwork() const;
    void Initialize();
    void Shutdown();
    void SetEventCallback(LobbyEvent *);
    LobbyEvent *GetInGameLobbyEvent();
    void Think();
    void Update();
    void RefreshPlayers();
    void RefreshRooms();
    void GetHostLobbySessionDesc(LobbySessionDesc &) const;
    void SessionGetList();
    void SessionGetListStop();
    void SessionHost(Net::Session *, LobbySessionDesc const &);
    void SessionJoin(wchar_t const *);
    void SessionStart();
    void SessionCancel();
    void SessionEnableJoin(bool);
    bool SessionGetDescription(unsigned long long, LobbySessionDesc &) const;
    void SessionChangeSettings(LobbySessionDesc const &, Net::Session *);
    bool SessionUpdate(unsigned long long) const;
    bool SessionIsCreateVisible() const;
    void SessionUpdated(unsigned long long);
    void PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) const;
    bool PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &);
    bool PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) const;
    void PlayerSetViewingRoom(LobbyRoomType);
    void PlayerSetPlaying(bool);
    bool RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const;
    bool RoomJoinTitle();
    bool RoomJoin(unsigned __int32);
    bool RoomLeave();
    bool RoomLeaveTitle();
    unsigned __int32 RoomGetLastJoined() const;
    void ChatConnect(char const *);
    void ChatDisconnect();
    void ChatSendMessage(LobbyChatType, wchar_t const *, wchar_t const *);
    void ChatReceiveMessage(LobbyChatType, wchar_t const *, wchar_t const *);
    bool HasChat() const;
    void ChatIgnore(wchar_t const *, bool);
    bool CDAuthenticate(char const *);
private:
    void ProcessMessage(BufferMessage const &);
    void ConnectComplete();
    bool IsIgnoring(wchar_t const *);
    class Data;
    Lobby::Data *m_pimpl; // 0x0
};
static_assert(sizeof(Lobby) == 4, "Invalid Lobby size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOBBY_H__
#endif

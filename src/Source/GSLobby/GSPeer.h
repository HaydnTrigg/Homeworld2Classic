#if 0
#ifndef __GSPEER_H__
#define __GSPEER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSPeer
{
public:
    class Dispatch;
    typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PlayerCont;
    GSPeer();
    ~GSPeer();
    bool Initialize(char const *, char const *, GSEvent *);
    void Release();
    char const *GetWantedNickname() const;
    char const *GetActualNickname() const;
    void Think();
    void SessionGetList();
    void SessionGetListStop();
    void SessionHost(GSLobbySessionDesc const &);
    void SessionJoin(char const *);
    void SessionCancel();
    void SessionStart();
    void SessionChangeSettings(GSLobbySessionDesc const &);
    bool SessionGetDesc(unsigned long long, GSLobbySessionDesc &) const;
    bool SessionUpdate(unsigned long long) const;
    GSLobbySessionDesc const &GetLocalSession() const;
    void PlayerUpdateList();
    void PlayerGetList(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
    char const *PlayerGetName() const;
    bool PlayerGetDesc(char const *, GSLobbyPlayerDesc &) const;
    void PlayerSetViewingRoom(GSLobbyRoomType);
    void PlayerSetPlaying(bool);
    void RoomGetList();
    bool RoomGetDesc(unsigned __int32, GSLobbyRoomDesc &) const;
    bool RoomJoinTitle();
    bool RoomJoin(unsigned __int32);
    bool RoomLeave();
    bool RoomLeaveTitle();
    void ChatConnect(char const *);
    void ChatDisconnect();
    void ChatMessage(GSLobbyChatType, char const *, char const *);
    bool CDAuthenticate(char const *);
private:
    GSPeer::Dispatch *m_dispatch; // 0x0
    GSPeer::Data *m_pimpl; // 0x4
    class Data;
};
static_assert(sizeof(GSPeer) == 8, "Invalid GSPeer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSPEER_H__
#endif

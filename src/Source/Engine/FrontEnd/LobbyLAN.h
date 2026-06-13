#if 0
#ifndef __LOBBYLAN_H__
#define __LOBBYLAN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LobbyLAN :
    public LobbyNetwork
{
public:
    LobbyLAN(LobbyLAN &); /* compiler_generated() */
    LobbyLAN();
    virtual ~LobbyLAN() override;
    virtual void Think() override;
    virtual bool GetMessage(BufferMessage &) override;
    virtual void SessionList() override;
    virtual void SessionListStop() override;
    virtual void SessionJoin(wchar_t const *) override;
    virtual void SessionHost(LobbySessionDesc const &, Net::Session *) override;
    virtual void SessionCancel() override;
    virtual void SessionEnableJoin(bool) override;
    virtual void SessionChangeSettings(LobbySessionDesc const &, Net::Session *) override;
    virtual bool SessionGetDescription(unsigned long long, LobbySessionDesc &) const override;
    virtual void SessionStarted() override;
    virtual bool SessionCreateVisible() const override;
    virtual bool SessionUpdate(unsigned long long) const override;
    virtual void RoomList() override;
    virtual bool RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const override;
    virtual bool RoomJoinTitle() override;
    virtual bool RoomJoin(unsigned __int32) override;
    virtual bool RoomLeave() override;
    virtual bool RoomLeaveTitle() override;
    virtual void PlayerUpdateList() override;
    virtual void PlayerGetList(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > &) override;
    virtual bool PlayerGetDescription(wchar_t const *, LobbyPlayerDesc &) override;
    virtual void PlayerGetName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) override;
    virtual void PlayerChangeSettings() override;
    virtual void PlayerSetViewingRoom(LobbyRoomType) override;
    virtual void PlayerSetPlaying(bool) override;
    virtual LobbyChatStatus ChatGetStatus() override;
    virtual void ChatConnect(char const *) override;
    virtual void ChatDisconnect() override;
    virtual void ChatSend(LobbyChatType, wchar_t const *, wchar_t const *) override;
    virtual _inline unsigned long long GetLobbyID() override;
    virtual bool CDAuthenticate(char const *) override;
    typedef std::queue<BufferMessage,std::list<BufferMessage,std::allocator<BufferMessage> > > MessageQueue;
private:
    void UpdateSessionList();
    std::queue<BufferMessage,std::list<BufferMessage,std::allocator<BufferMessage> > > m_messages; // 0x4
    std::auto_ptr<Net::SessionEnumerator> m_sessionEnumerator; // 0xC
    std::vector<Net::SessionInfo,std::allocator<Net::SessionInfo> > m_sessions; // 0x10
public:
    LobbyLAN &operator=(LobbyLAN &); /* compiler_generated() */
};
static_assert(sizeof(LobbyLAN) == 28, "Invalid LobbyLAN size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned long long _sub_471E54(LobbyLAN *const);
_inline unsigned long long LobbyLAN::GetLobbyID() // 0x471E54
{
    mangled_assert("?GetLobbyID@LobbyLAN@@UAE_KXZ");
    todo("implement");
    unsigned long long __result = _sub_471E54(this);
    return __result;
}

/* ---------- private code */

#endif // __LOBBYLAN_H__
#endif

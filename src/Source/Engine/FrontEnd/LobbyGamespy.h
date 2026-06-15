#if 0
#ifndef __LOBBYGAMESPY_H__
#define __LOBBYGAMESPY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LobbyGamespy :
    public LobbyNetwork
{
public:
    LobbyGamespy(LobbyGamespy const &); /* compiler_generated() */
    LobbyGamespy();
    virtual ~LobbyGamespy() override;
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
    class Dispatch;
private:
    LobbyGamespy::Dispatch *m_dispatch; // 0x4
    LobbyGamespy::Data *m_pimpl; // 0x8
    class Data;
public:
    LobbyGamespy &operator=(LobbyGamespy const &); /* compiler_generated() */
};
static_assert(sizeof(LobbyGamespy) == 12, "Invalid LobbyGamespy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned long long LobbyGamespy::GetLobbyID() // 0x46FA98
{
    mangled_assert("?GetLobbyID@LobbyGamespy@@UAE_KXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __LOBBYGAMESPY_H__
#endif

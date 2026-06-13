#if 0
#ifndef __LOBBYSTEAM_H__
#define __LOBBYSTEAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LobbySteam :
    public LobbyNetwork
{
public:
    LobbySteam(LobbySteam const &); /* compiler_generated() */
    LobbySteam();
    virtual ~LobbySteam() override;
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
    virtual bool RoomLeave() override;
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
    virtual bool CDAuthenticate(char const *) override;
    virtual unsigned long long GetLobbyID() override;
    virtual _inline void RoomList() override;
    virtual _inline bool RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const override;
    virtual _inline bool RoomJoinTitle() override;
    virtual _inline bool RoomJoin(unsigned __int32) override;
    virtual _inline bool RoomLeaveTitle() override;
    class Dispatch;
private:
    LobbySteam::Dispatch *m_dispatch; // 0x4
    LobbySteam::Data *m_pimpl; // 0x8
    class Data;
public:
    LobbySteam &operator=(LobbySteam const &); /* compiler_generated() */
};
static_assert(sizeof(LobbySteam) == 12, "Invalid LobbySteam size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_44BDAA(LobbySteam *const);
_inline void LobbySteam::RoomList() // 0x44BDAA
{
    mangled_assert("?RoomList@LobbySteam@@UAEXXZ");
    todo("implement");
    _sub_44BDAA(this);
}

_extern bool _sub_44BD97(LobbySteam const *const, unsigned __int32, LobbyRoomDesc &);
_inline bool LobbySteam::RoomGetDescription(unsigned __int32, LobbyRoomDesc &) const // 0x44BD97
{
    mangled_assert("?RoomGetDescription@LobbySteam@@UBE_NIAAVLobbyRoomDesc@@@Z");
    todo("implement");
    bool __result = _sub_44BD97(this, arg, arg);
    return __result;
}

_extern bool _sub_44BDA1(LobbySteam *const);
_inline bool LobbySteam::RoomJoinTitle() // 0x44BDA1
{
    mangled_assert("?RoomJoinTitle@LobbySteam@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_44BDA1(this);
    return __result;
}

_extern bool _sub_44BD9C(LobbySteam *const, unsigned __int32);
_inline bool LobbySteam::RoomJoin(unsigned __int32) // 0x44BD9C
{
    mangled_assert("?RoomJoin@LobbySteam@@UAE_NI@Z");
    todo("implement");
    bool __result = _sub_44BD9C(this, arg);
    return __result;
}

_extern bool _sub_44BDA7(LobbySteam *const);
_inline bool LobbySteam::RoomLeaveTitle() // 0x44BDA7
{
    mangled_assert("?RoomLeaveTitle@LobbySteam@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_44BDA7(this);
    return __result;
}

/* ---------- private code */

#endif // __LOBBYSTEAM_H__
#endif

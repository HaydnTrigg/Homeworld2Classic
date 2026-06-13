#if 0
#ifndef __SESSION_H__
#define __SESSION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum Net::SendMode
{
    Sequential = 0,
    NonSequential,
};

enum Net::SendPriority
{
    PriorityLow = 0,
    PriorityNormal,
    PriorityHigh,
};

/* ---------- definitions */

class Net::Session :
    private Net::DirectPlay
{
public:
    Session(Net::Session &); /* compiler_generated() */
    Session(Net::Authentication const &, Net::SessionDescription const &, Net::PlayerDescription const &, unsigned short);
    Session(_GUID const &, Net::Authentication const &, Net::Address const *, wchar_t const *, Net::PlayerDescription const &);
    virtual ~Session() override;
    __int32 GetNumberPlayer() const;
    unsigned long GetLocalPlayerID() const;
    unsigned long GetHostID() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > GetPlayerName(unsigned long) const;
    bool DropPlayer(unsigned long);
    bool GetDescription(Net::SessionDescription &) const;
    bool SetDescription(Net::SessionDescription const &);
    bool GetPlayerDescription(unsigned long, Net::PlayerDescription &) const;
    Net::Address GetHostAddress() const;
    bool SetLocalPlayerDescription(Net::PlayerDescription const &);
    bool IsHost() const;
    bool SetName(unsigned long, wchar_t const *);
    void SetJoinable(bool);
    void SetVisible(bool);
    bool Broadcast(void const *, unsigned __int32, Net::SendMode, Net::SendPriority) const;
    bool SendTo(unsigned long, void const *, unsigned __int32, Net::SendMode, Net::SendPriority) const;
    bool GetMessageA(Net::Message &);
    bool GetConnectionInfo(unsigned long, _DPN_CONNECTION_INFO &) const;
    bool GetSendQueueInfo(unsigned long, unsigned long &, unsigned long &) const;
    _inline HRESULT GetConnectResult() const;
    _inline std::vector<unsigned char,std::allocator<unsigned char> > const &GetReplyData() const;
private:
    virtual HRESULT Callback(unsigned long, void *) override;
    HRESULT CB_ApplicationDesc();
    HRESULT CB_ConnectComplete(_DPNMSG_CONNECT_COMPLETE const &);
    HRESULT CB_EnumHostQuery(_DPNMSG_ENUM_HOSTS_QUERY &);
    HRESULT CB_HostMigrate(_DPNMSG_HOST_MIGRATE const &);
    HRESULT CB_PeerInfo(_DPNMSG_PEER_INFO const &);
    HRESULT CB_PlayerConnect(_DPNMSG_INDICATE_CONNECT &);
    HRESULT CB_PlayerCreate(_DPNMSG_CREATE_PLAYER const &);
    HRESULT CB_PlayerDestroy(_DPNMSG_DESTROY_PLAYER const &);
    HRESULT CB_ReceiveMessage(_DPNMSG_RECEIVE const &);
    HRESULT CB_ReturnBuffer(_DPNMSG_RETURN_BUFFER const &);
    bool GetPlayerInfo(unsigned long, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, bool &, bool &) const;
    void TweakTimeoutParams();
    typedef std::map<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > > PlayerList;
    typedef std::queue<Net::Message,std::list<Net::Message,std::allocator<Net::Message> > > MessageQueue;
    typedef std::map<unsigned long,CBlowFish,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,CBlowFish> > > CryptoMap;
    Net::CriticalSection m_csPlayers; // 0xC
    Net::CriticalSection m_csMessages; // 0x24
    std::map<unsigned long,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > > m_players; // 0x3C
    std::queue<Net::Message,std::list<Net::Message,std::allocator<Net::Message> > > m_messages; // 0x44
    unsigned long m_playerID; // 0x4C
    unsigned long m_hostID; // 0x50
    bool m_bHost; // 0x54
    bool m_visible; // 0x55
    bool m_joinable; // 0x56
    unsigned long m_hConnect; // 0x58
    HRESULT m_connectResult; // 0x5C
    std::map<unsigned long,CBlowFish,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,CBlowFish> > > m_crypto; // 0x60
    Net::Authentication m_authentication; // 0x68
    Net::CriticalSection m_csEnumData; // 0x8C
    std::vector<unsigned char,std::allocator<unsigned char> > m_enumData; // 0xA4
    std::vector<unsigned char,std::allocator<unsigned char> > m_replyData; // 0xB0
public:
    Net::Session &operator=(Net::Session &); /* compiler_generated() */
};
static_assert(sizeof(Net::Session) == 188, "Invalid Net::Session size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4F7AD6(Net::Session *const, std::back_insert_iterator<std::list<unsigned long,std::allocator<unsigned long> > >);
_inline bool Net::Session::GetPlayerList<std::back_insert_iterator<std::list<unsigned long,std::allocator<unsigned long> > > >(std::back_insert_iterator<std::list<unsigned long,std::allocator<unsigned long> > >) // 0x4F7AD6
{
    mangled_assert("??$GetPlayerList@V?$back_insert_iterator@V?$list@KV?$allocator@K@std@@@std@@@std@@@Session@Net@@QAE_NV?$back_insert_iterator@V?$list@KV?$allocator@K@std@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_4F7AD6(this, arg);
    return __result;
}

_extern bool _sub_45E7A6(Net::Session *const, std::back_insert_iterator<std::vector<unsigned long,std::allocator<unsigned long> > >);
_inline bool Net::Session::GetPlayerList<std::back_insert_iterator<std::vector<unsigned long,std::allocator<unsigned long> > > >(std::back_insert_iterator<std::vector<unsigned long,std::allocator<unsigned long> > >) // 0x45E7A6
{
    mangled_assert("??$GetPlayerList@V?$back_insert_iterator@V?$vector@KV?$allocator@K@std@@@std@@@std@@@Session@Net@@QAE_NV?$back_insert_iterator@V?$vector@KV?$allocator@K@std@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_45E7A6(this, arg);
    return __result;
}

_extern HRESULT _sub_5B91E8(Net::Session const *const);
_inline HRESULT Net::Session::GetConnectResult() const // 0x5B91E8
{
    mangled_assert("?GetConnectResult@Session@Net@@QBEJXZ");
    todo("implement");
    HRESULT __result = _sub_5B91E8(this);
    return __result;
}

_extern void _sub_470F46(Net::Session *const, EnumInfo const &);
_inline void Net::Session::SetEnumResponseData<EnumInfo>(EnumInfo const &) // 0x470F46
{
    mangled_assert("??$SetEnumResponseData@UEnumInfo@@@Session@Net@@QAEXABUEnumInfo@@@Z");
    todo("implement");
    _sub_470F46(this, arg);
}

_extern std::vector<unsigned char,std::allocator<unsigned char> > const &_sub_5B9216(Net::Session const *const);
_inline std::vector<unsigned char,std::allocator<unsigned char> > const &Net::Session::GetReplyData() const // 0x5B9216
{
    mangled_assert("?GetReplyData@Session@Net@@QBEABV?$vector@EV?$allocator@E@std@@@std@@XZ");
    todo("implement");
    std::vector<unsigned char,std::allocator<unsigned char> > const & __result = _sub_5B9216(this);
    return __result;
}

/* ---------- private code */

#endif // __SESSION_H__
#endif

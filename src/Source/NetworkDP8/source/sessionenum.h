#if 0
#ifndef __SESSIONENUM_H__
#define __SESSIONENUM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Net::SessionEnumerator :
    private Net::DirectPlay
{
public:
    SessionEnumerator(Net::SessionEnumerator &); /* compiler_generated() */
    SessionEnumerator(_GUID const &, Net::Address const *);
    virtual ~SessionEnumerator() override;
    _inline unsigned __int32 GetNumberSession() const;
private:
    virtual HRESULT Callback(unsigned long, void *) override;
    HRESULT CB_EnumHost(_DPNMSG_ENUM_HOSTS_RESPONSE const &);
    typedef std::vector<Net::SessionInfo,std::allocator<Net::SessionInfo> > SessionList;
    unsigned long m_handle; // 0xC
    Net::CriticalSection m_cs; // 0x10
    std::vector<Net::SessionInfo,std::allocator<Net::SessionInfo> > m_sessions; // 0x28
public:
    Net::SessionEnumerator &operator=(Net::SessionEnumerator &); /* compiler_generated() */
};
static_assert(sizeof(Net::SessionEnumerator) == 52, "Invalid Net::SessionEnumerator size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_470EEF(Net::SessionEnumerator const *const, std::back_insert_iterator<std::vector<Net::SessionInfo,std::allocator<Net::SessionInfo> > >);
_inline bool Net::SessionEnumerator::GetSessionList<std::back_insert_iterator<std::vector<Net::SessionInfo,std::allocator<Net::SessionInfo> > > >(std::back_insert_iterator<std::vector<Net::SessionInfo,std::allocator<Net::SessionInfo> > >) const // 0x470EEF
{
    mangled_assert("??$GetSessionList@V?$back_insert_iterator@V?$vector@USessionInfo@Net@@V?$allocator@USessionInfo@Net@@@std@@@std@@@std@@@SessionEnumerator@Net@@QBE_NV?$back_insert_iterator@V?$vector@USessionInfo@Net@@V?$allocator@USessionInfo@Net@@@std@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_470EEF(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_471ED1(Net::SessionEnumerator const *const);
_inline unsigned __int32 Net::SessionEnumerator::GetNumberSession() const // 0x471ED1
{
    mangled_assert("?GetNumberSession@SessionEnumerator@Net@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_471ED1(this);
    return __result;
}

/* ---------- private code */

#endif // __SESSIONENUM_H__
#endif

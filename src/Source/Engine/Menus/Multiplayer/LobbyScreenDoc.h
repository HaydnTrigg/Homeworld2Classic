#if 0
#ifndef __LOBBYSCREENDOC_H__
#define __LOBBYSCREENDOC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::LobbyScreenDoc
{
public:
    typedef std::map<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > > SessionMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,LobbySessionDesc> > > > iterator;
    typedef std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,LobbySessionDesc> > > > const_iterator;
    LobbyScreenDoc(UI::LobbyScreenDoc const &); /* compiler_generated() */
    LobbyScreenDoc();
    void Clear();
    void OnSessionAdded(unsigned long long, LobbySessionDesc const &);
    void OnSessionAddedDirect(unsigned long long, LobbySessionDesc const &);
    void OnSessionUpdated(unsigned long long, LobbySessionDesc const &);
    void OnSessionDeleted(unsigned long long);
    std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,LobbySessionDesc> > > > begin() const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,LobbySessionDesc> > > > begin();
    std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,LobbySessionDesc> > > > end() const;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,LobbySessionDesc> > > > end();
private:
    std::map<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > > m_sessions; // 0x0
    std::map<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > > m_pendingUpdate; // 0x8
public:
    _inline ~LobbyScreenDoc(); /* compiler_generated() */
    UI::LobbyScreenDoc &operator=(UI::LobbyScreenDoc const &); /* compiler_generated() */
};
static_assert(sizeof(UI::LobbyScreenDoc) == 16, "Invalid UI::LobbyScreenDoc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,LobbySessionDesc> > > > UI::LobbyScreenDoc::begin() // 0x5B7AEE
{
    mangled_assert("?begin@LobbyScreenDoc@UI@@QAE?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KVLobbySessionDesc@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,LobbySessionDesc> > > > UI::LobbyScreenDoc::end() // 0x5B7AFB
{
    mangled_assert("?end@LobbyScreenDoc@UI@@QAE?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KVLobbySessionDesc@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __LOBBYSCREENDOC_H__
#endif

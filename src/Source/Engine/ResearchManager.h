#if 0
#ifndef __RESEARCHMANAGER_H__
#define __RESEARCHMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ResearchManager :
    public Saveable
{
public:
    ResearchManager(ResearchManager const &); /* compiler_generated() */
    ResearchManager(Player *);
    virtual ~ResearchManager() override;
    bool update(float);
    void LoadScripts(char const *);
    void AddResearchItem(ResearchData *);
    void ApplyAllUpgradesToShip(Ship *);
    bool CanResearchDisplayFamily(unsigned __int32);
private:
    std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getLockedResearchBegin();
public:
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getLockedResearchBegin() const;
private:
    std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getLockedResearchEnd();
public:
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getLockedResearchEnd() const;
private:
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getDoneResearchBegin();
public:
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getDoneResearchBegin() const;
private:
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getDoneResearchEnd();
public:
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getDoneResearchEnd() const;
private:
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getResearchQueueBegin();
public:
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getResearchQueueBegin() const;
private:
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getResearchQueueEnd();
public:
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getResearchQueueEnd() const;
private:
    std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getPendingResearchBegin();
public:
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getPendingResearchBegin() const;
private:
    std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getPendingResearchEnd();
public:
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getPendingResearchEnd() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getUIResearchQueueBegin() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > getUIResearchQueueEnd() const;
    std::list<ResearchData *,std::allocator<ResearchData *> > const &getMasterResearchList() const;
    _inline std::list<ResearchData *,std::allocator<ResearchData *> > const &getRestrictedResearchList() const;
    _inline bool getPaused() const;
    _inline void setPaused(bool);
    _inline bool getUIPaused() const;
    _inline void setUIPaused(bool);
    bool StartResearch(unsigned __int32, float, bool);
    bool CancelResearch(unsigned __int32, bool);
    bool MoveResearchToTop(unsigned __int32, bool);
    void CancelAllResearch();
    bool RestrictResearch(unsigned __int32);
    bool UnrestrictResearch(unsigned __int32);
    bool GrantResearch(unsigned __int32);
    void GrantAllResearch();
    bool ResearchItemIsDone(unsigned __int32) const;
    bool ResearchItemIsDone(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    unsigned __int32 getNumberOfActiveResearchItems() const;
    void CheckLockedResearch();
    void CheckPendingResearch();
    void CheckResearchTree();
    bool UIResearchListChangedSinceLastCheck();
    ResearchData *GetResearchData(unsigned __int32);
private:
    void ResearchListsChanged();
    Player *m_pPlayer; // 0x4
    std::list<ResearchData *,std::allocator<ResearchData *> > m_RestrictedResearch; // 0x8
    std::list<ResearchData *,std::allocator<ResearchData *> > m_DoneResearch; // 0x10
    std::list<ResearchData *,std::allocator<ResearchData *> > m_ResearchQueue; // 0x18
    std::list<ResearchData *,std::allocator<ResearchData *> > m_PendingResearch; // 0x20
    std::list<ResearchData *,std::allocator<ResearchData *> > m_LockedResearch; // 0x28
    std::list<ResearchData *,std::allocator<ResearchData *> > m_MasterList; // 0x30
    bool m_bResearchChangedSinceLastCheck; // 0x38
    bool m_paused; // 0x39
    std::list<ResearchData *,std::allocator<ResearchData *> > m_visibleList; // 0x3C
    bool m_UIPaused; // 0x44
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ResearchManager &operator=(ResearchManager const &); /* compiler_generated() */
};
static_assert(sizeof(ResearchManager) == 72, "Invalid ResearchManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getDoneResearchBegin() const // 0x48C134
{
    mangled_assert("?getDoneResearchBegin@ResearchManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getDoneResearchEnd() const // 0x48C142
{
    mangled_assert("?getDoneResearchEnd@ResearchManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getResearchQueueBegin() const // 0x538931
{
    mangled_assert("?getResearchQueueBegin@ResearchManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getResearchQueueEnd() const // 0x53893F
{
    mangled_assert("?getResearchQueueEnd@ResearchManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getPendingResearchBegin() const // 0x6385B6
{
    mangled_assert("?getPendingResearchBegin@ResearchManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getPendingResearchEnd() const // 0x6385C4
{
    mangled_assert("?getPendingResearchEnd@ResearchManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getUIResearchQueueBegin() const // 0x570A5A
{
    mangled_assert("?getUIResearchQueueBegin@ResearchManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getUIResearchQueueEnd() const // 0x570A68
{
    mangled_assert("?getUIResearchQueueEnd@ResearchManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::list<ResearchData *,std::allocator<ResearchData *> > const &ResearchManager::getRestrictedResearchList() const // 0x5107F7
{
    mangled_assert("?getRestrictedResearchList@ResearchManager@@QBEABV?$list@PAVResearchData@@V?$allocator@PAVResearchData@@@std@@@std@@XZ");
    todo("implement");
}

_inline bool ResearchManager::getPaused() const // 0x4EEA3E
{
    mangled_assert("?getPaused@ResearchManager@@QBE_NXZ");
    todo("implement");
}

_inline void ResearchManager::setPaused(bool) // 0x615A75
{
    mangled_assert("?setPaused@ResearchManager@@QAEX_N@Z");
    todo("implement");
}

_inline bool ResearchManager::getUIPaused() const // 0x570A56
{
    mangled_assert("?getUIPaused@ResearchManager@@QBE_NXZ");
    todo("implement");
}

_inline void ResearchManager::setUIPaused(bool) // 0x69787C
{
    mangled_assert("?setUIPaused@ResearchManager@@QAEX_N@Z");
    todo("implement");
}

_inline std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getDoneResearchBegin() // 0x4EE9FF
{
    mangled_assert("?getDoneResearchBegin@ResearchManager@@AAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getDoneResearchEnd() // 0x4EEA0D
{
    mangled_assert("?getDoneResearchEnd@ResearchManager@@AAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getResearchQueueBegin() // 0x4EEA42
{
    mangled_assert("?getResearchQueueBegin@ResearchManager@@AAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_iterator<std::_List_val<std::_List_simple_types<ResearchData *> > > ResearchManager::getResearchQueueEnd() // 0x4EEA50
{
    mangled_assert("?getResearchQueueEnd@ResearchManager@@AAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVResearchData@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline bool ResearchManager::isDeterministic() // 0x4EEA6E
{
    mangled_assert("?isDeterministic@ResearchManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *ResearchManager::saveToken() // 0x4EEB71
{
    mangled_assert("?saveToken@ResearchManager@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RESEARCHMANAGER_H__
#endif

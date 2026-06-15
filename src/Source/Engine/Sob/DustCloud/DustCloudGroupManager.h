#if 0
#ifndef __DUSTCLOUDGROUPMANAGER_H__
#define __DUSTCLOUDGROUPMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DustCloudGroupManager :
    public Saveable
{
public:
    DustCloudGroup *findGroup(char const *) const;
    DustCloudGroup *findOrCreateGroup(char const *, DustCloud *);
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > DustCloudGroupMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > DustCloudGroupMapIterator;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > begin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > end();
    void update(float);
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > m_DustCloudGroup; // 0x4
    static void saveDustCloudGroup(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreDustCloudGroup(void *objectPtr, SaveGameData *saveGameData);
public:
    static DustCloudGroupManager *instance();
    static bool release();
    static bool startup();
    static bool shutdown();
    static bool saveStatics(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreStatics(SaveGameData *saveGameData);
    static bool recomputeDustCloudGroups();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    DustCloudGroupManager(DustCloudGroupManager const &); /* compiler_generated() */
private:
    DustCloudGroupManager();
    virtual ~DustCloudGroupManager() override;
    static DustCloudGroupManager *s_instance;
public:
    DustCloudGroupManager &operator=(DustCloudGroupManager const &); /* compiler_generated() */
};
static_assert(sizeof(DustCloudGroupManager) == 12, "Invalid DustCloudGroupManager size");

class DustCloudGroupManager :
    public Saveable
{
public:
    DustCloudGroup *findGroup(char const *) const;
    DustCloudGroup *findOrCreateGroup(char const *, DustCloud *);
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > DustCloudGroupMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > DustCloudGroupMapIterator;
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > begin();
    _inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > end();
    void update(float);
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > m_DustCloudGroup; // 0x4
    static void saveDustCloudGroup(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreDustCloudGroup(void *objectPtr, SaveGameData *saveGameData);
public:
    static DustCloudGroupManager *instance();
    static bool release();
    static bool startup();
    static bool shutdown();
    static bool saveStatics(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreStatics(SaveGameData *saveGameData);
    static bool recomputeDustCloudGroups();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    DustCloudGroupManager(DustCloudGroupManager const &); /* compiler_generated() */
private:
    DustCloudGroupManager();
    virtual ~DustCloudGroupManager() override;
    static DustCloudGroupManager *s_instance;
public:
    DustCloudGroupManager &operator=(DustCloudGroupManager const &); /* compiler_generated() */
};
static_assert(sizeof(DustCloudGroupManager) == 12, "Invalid DustCloudGroupManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > DustCloudGroupManager::begin() // 0x616804
{
    mangled_assert("?begin@DustCloudGroupManager@@QAE?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > > DustCloudGroupManager::end() // 0x618B5A
{
    mangled_assert("?end@DustCloudGroupManager@@QAE?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline bool DustCloudGroupManager::isDeterministic() // 0x4C6CC5
{
    mangled_assert("?isDeterministic@DustCloudGroupManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *DustCloudGroupManager::saveToken() // 0x4C6DF8
{
    mangled_assert("?saveToken@DustCloudGroupManager@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DUSTCLOUDGROUPMANAGER_H__
#endif

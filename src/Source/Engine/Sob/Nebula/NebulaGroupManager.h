#if 0
#ifndef __NEBULAGROUPMANAGER_H__
#define __NEBULAGROUPMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NebulaGroupManager :
    public Saveable
{
public:
    NebulaGroup *findGroup(char const *) const;
    NebulaGroup *findOrCreateGroup(char const *, Nebula *);
    void update(float);
    void applyMultipliersAndAbilities();
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > > NebulaGroupMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > > > NebulaGroupMapIterator;
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > > m_nebulaGroup; // 0x4
    static void saveNebulaGroup(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreNebulaGroup(void *objectPtr, SaveGameData *saveGameData);
public:
    static NebulaGroupManager *instance();
    static bool release();
    static bool startup();
    static bool shutdown();
    static bool saveStatics(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreStatics(SaveGameData *saveGameData);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    NebulaGroupManager(NebulaGroupManager const &); /* compiler_generated() */
private:
    NebulaGroupManager();
    virtual ~NebulaGroupManager() override;
    static NebulaGroupManager *s_instance;
public:
    NebulaGroupManager &operator=(NebulaGroupManager const &); /* compiler_generated() */
};
static_assert(sizeof(NebulaGroupManager) == 12, "Invalid NebulaGroupManager size");

class NebulaGroupManager :
    public Saveable
{
public:
    NebulaGroup *findGroup(char const *) const;
    NebulaGroup *findOrCreateGroup(char const *, Nebula *);
    void update(float);
    void applyMultipliersAndAbilities();
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > > NebulaGroupMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > > > NebulaGroupMapIterator;
private:
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > > m_nebulaGroup; // 0x4
    static void saveNebulaGroup(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreNebulaGroup(void *objectPtr, SaveGameData *saveGameData);
public:
    static NebulaGroupManager *instance();
    static bool release();
    static bool startup();
    static bool shutdown();
    static bool saveStatics(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreStatics(SaveGameData *saveGameData);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    NebulaGroupManager(NebulaGroupManager const &); /* compiler_generated() */
private:
    NebulaGroupManager();
    virtual ~NebulaGroupManager() override;
    static NebulaGroupManager *s_instance;
public:
    NebulaGroupManager &operator=(NebulaGroupManager const &); /* compiler_generated() */
};
static_assert(sizeof(NebulaGroupManager) == 12, "Invalid NebulaGroupManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool NebulaGroupManager::isDeterministic() // 0x4C3242
{
    mangled_assert("?isDeterministic@NebulaGroupManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *NebulaGroupManager::saveToken() // 0x4C333B
{
    mangled_assert("?saveToken@NebulaGroupManager@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NEBULAGROUPMANAGER_H__
#endif

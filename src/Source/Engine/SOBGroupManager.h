#if 0
#ifndef __SOBGROUPMANAGER_H__
#define __SOBGROUPMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SOBGroupManager :
    public Saveable
{
public:
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > SobGroupMap;
    SOBGroupManager(SOBGroupManager const &); /* compiler_generated() */
    SOBGroupManager();
    virtual ~SOBGroupManager() override;
    SOBGroup *addSOBGroup(char const *, SquadronList &, unsigned __int32);
    SOBGroup *addSOBGroup(char const *);
    SOBGroup *createRunTimeSOBGroup();
    char const *getSOBGroup(Squadron const *) const;
    SOBGroup *getSOBGroup(char const *) const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > begin() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > end() const;
    unsigned __int32 size() const;
    bool empty() const;
private:
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > m_SOBGroups; // 0x4
    unsigned __int32 m_id; // 0x24
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveGroups(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreGroups(void *objectPtr, SaveGameData *saveGameData);
    SOBGroupManager &operator=(SOBGroupManager const &); /* compiler_generated() */
};
static_assert(sizeof(SOBGroupManager) == 40, "Invalid SOBGroupManager size");

class SOBGroupManager :
    public Saveable
{
public:
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > SobGroupMap;
    SOBGroupManager(SOBGroupManager const &); /* compiler_generated() */
    SOBGroupManager();
    virtual ~SOBGroupManager() override;
    SOBGroup *addSOBGroup(char const *, SquadronList &, unsigned __int32);
    SOBGroup *addSOBGroup(char const *);
    SOBGroup *createRunTimeSOBGroup();
    char const *getSOBGroup(Squadron const *) const;
    SOBGroup *getSOBGroup(char const *) const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > begin() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > end() const;
    unsigned __int32 size() const;
    bool empty() const;
private:
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > m_SOBGroups; // 0x4
    unsigned __int32 m_id; // 0x24
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveGroups(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreGroups(void *objectPtr, SaveGameData *saveGameData);
    SOBGroupManager &operator=(SOBGroupManager const &); /* compiler_generated() */
};
static_assert(sizeof(SOBGroupManager) == 40, "Invalid SOBGroupManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > _sub_5C6B19(SOBGroupManager const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > SOBGroupManager::begin() const // 0x5C6B19
{
    mangled_assert("?begin@SOBGroupManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSOBGroup@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > __result = _sub_5C6B19(this);
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > _sub_5C6B5D(SOBGroupManager const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > SOBGroupManager::end() const // 0x5C6B5D
{
    mangled_assert("?end@SOBGroupManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSOBGroup@@@std@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > > __result = _sub_5C6B5D(this);
    return __result;
}

_extern bool _sub_63AD6F(SOBGroupManager *const);
_inline bool SOBGroupManager::isDeterministic() // 0x63AD6F
{
    mangled_assert("?isDeterministic@SOBGroupManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_63AD6F(this);
    return __result;
}

_extern char const *_sub_63AF79(SOBGroupManager *const);
_inline char const *SOBGroupManager::saveToken() // 0x63AF79
{
    mangled_assert("?saveToken@SOBGroupManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_63AF79(this);
    return __result;
}

/* ---------- private code */

#endif // __SOBGROUPMANAGER_H__
#endif

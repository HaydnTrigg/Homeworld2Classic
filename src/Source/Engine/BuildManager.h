#if 0
#ifndef __BUILDMANAGER_H__
#define __BUILDMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BuildManager :
    public Saveable
{
public:
    BuildManager(BuildManager const &); /* compiler_generated() */
    BuildManager(Player *);
    virtual ~BuildManager() override;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildListBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildListBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildListEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildListEnd();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > RestrictedBuildListBegin() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > RestrictedBuildListEnd() const;
    BuildData const *GetBuildData(unsigned __int32);
    unsigned __int32 BuildListSize() const;
    bool BuildListEmpty() const;
    void LoadScripts(char *);
    void AddBuildItem(BuildData *);
    bool Restrict(unsigned __int32);
    bool Unrestrict(unsigned __int32);
    bool IsRestricted(unsigned __int32);
    bool canBuild(BuildData *) const;
    bool canBuildDisplayFamily(unsigned __int32) const;
    bool UIBuildListChangedSinceLastCheck();
private:
    void BuildListsChanged();
    Player *m_pPlayer; // 0x4
    std::list<BuildData *,std::allocator<BuildData *> > m_BuildData; // 0x8
    std::list<BuildData *,std::allocator<BuildData *> > m_RestrictedData; // 0x10
    bool m_bBuildListsChangedSinceLastCheck; // 0x18
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    BuildManager &operator=(BuildManager const &); /* compiler_generated() */
};
static_assert(sizeof(BuildManager) == 28, "Invalid BuildManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > _sub_52A591(BuildManager *const);
_inline std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildManager::BuildListBegin() // 0x52A591
{
    mangled_assert("?BuildListBegin@BuildManager@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVBuildData@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > __result = _sub_52A591(this);
    return __result;
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > _sub_52A59F(BuildManager *const);
_inline std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildManager::BuildListEnd() // 0x52A59F
{
    mangled_assert("?BuildListEnd@BuildManager@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVBuildData@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > __result = _sub_52A59F(this);
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > _sub_5CCE51(BuildManager const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildManager::BuildListBegin() const // 0x5CCE51
{
    mangled_assert("?BuildListBegin@BuildManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVBuildData@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > __result = _sub_5CCE51(this);
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > _sub_5CCE5F(BuildManager const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildManager::BuildListEnd() const // 0x5CCE5F
{
    mangled_assert("?BuildListEnd@BuildManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVBuildData@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > __result = _sub_5CCE5F(this);
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > _sub_581C53(BuildManager const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildManager::RestrictedBuildListBegin() const // 0x581C53
{
    mangled_assert("?RestrictedBuildListBegin@BuildManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVBuildData@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > __result = _sub_581C53(this);
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > _sub_581C61(BuildManager const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > BuildManager::RestrictedBuildListEnd() const // 0x581C61
{
    mangled_assert("?RestrictedBuildListEnd@BuildManager@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVBuildData@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<BuildData *> > > __result = _sub_581C61(this);
    return __result;
}

_extern bool _sub_5CD26E(BuildManager *const);
_inline bool BuildManager::isDeterministic() // 0x5CD26E
{
    mangled_assert("?isDeterministic@BuildManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5CD26E(this);
    return __result;
}

_extern char const *_sub_5CD311(BuildManager *const);
_inline char const *BuildManager::saveToken() // 0x5CD311
{
    mangled_assert("?saveToken@BuildManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_5CD311(this);
    return __result;
}

/* ---------- private code */

#endif // __BUILDMANAGER_H__
#endif

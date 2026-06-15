#if 0
#ifndef __OBJECTIVES_H__
#define __OBJECTIVES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Objective
{
public:
    enum Type
    {
        OT_Primary = 0,
        OT_Secondary,
        OT_NumTypes,
    };
    enum State
    {
        OS_Off = 0,
        OS_Incomplete,
        OS_Complete,
        OS_Failed,
        OS_NumStates,
    };
    typedef std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > DescriptionList;
    void SetState(unsigned __int32);
    _inline unsigned __int32 GetState() const;
    _inline unsigned __int32 GetId() const;
    _inline wchar_t const *GetString() const;
    _inline unsigned __int32 GetType() const;
    _inline std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &GetDescription() const;
    _inline void AddDescription(wchar_t const *);
    Objective(Objective const &); /* compiler_generated() */
private:
    Objective(unsigned __int32, wchar_t const *, unsigned __int32);
    ~Objective();
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_objectiveString; // 0x0
    std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > m_objectiveDescription; // 0x18
    unsigned __int32 m_id; // 0x20
    unsigned __int32 m_objectiveType; // 0x24
    unsigned __int32 m_currentState; // 0x28
public:
    Objective &operator=(Objective const &); /* compiler_generated() */
};
static_assert(sizeof(Objective) == 44, "Invalid Objective size");

class ObjectiveList :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    static ObjectiveList *i();
    typedef std::list<Objective *,std::allocator<Objective *> > List;
    Objective *AddObjective(wchar_t const *, unsigned __int32);
    Objective *GetObjective(unsigned __int32);
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Objective *> > > begin() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Objective *> > > end() const;
    bool empty() const;
    _inline unsigned __int32 size() const;
private:
    std::list<Objective *,std::allocator<Objective *> > m_objectiveList; // 0x4
    unsigned __int32 m_idCnt; // 0xC
public:
    ObjectiveList(ObjectiveList const &); /* compiler_generated() */
private:
    ObjectiveList();
    virtual ~ObjectiveList() override;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveObjectiveList(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreObjectiveList(void *objectPtr, SaveGameData *saveGameData);
public:
    ObjectiveList &operator=(ObjectiveList const &); /* compiler_generated() */
};
static_assert(sizeof(ObjectiveList) == 16, "Invalid ObjectiveList size");

class ObjectiveList :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    static ObjectiveList *i();
    typedef std::list<Objective *,std::allocator<Objective *> > List;
    Objective *AddObjective(wchar_t const *, unsigned __int32);
    Objective *GetObjective(unsigned __int32);
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Objective *> > > begin() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Objective *> > > end() const;
    bool empty() const;
    _inline unsigned __int32 size() const;
private:
    std::list<Objective *,std::allocator<Objective *> > m_objectiveList; // 0x4
    unsigned __int32 m_idCnt; // 0xC
public:
    ObjectiveList(ObjectiveList const &); /* compiler_generated() */
private:
    ObjectiveList();
    virtual ~ObjectiveList() override;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveObjectiveList(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreObjectiveList(void *objectPtr, SaveGameData *saveGameData);
public:
    ObjectiveList &operator=(ObjectiveList const &); /* compiler_generated() */
};
static_assert(sizeof(ObjectiveList) == 16, "Invalid ObjectiveList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 Objective::GetState() const // 0x5776A4
{
    mangled_assert("?GetState@Objective@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 Objective::GetId() const // 0x57765E
{
    mangled_assert("?GetId@Objective@@QBEIXZ");
    todo("implement");
}

_inline wchar_t const *Objective::GetString() const // 0x5776A8
{
    mangled_assert("?GetString@Objective@@QBEPB_WXZ");
    todo("implement");
}

_inline unsigned __int32 Objective::GetType() const // 0x59C4F6
{
    mangled_assert("?GetType@Objective@@QBEIXZ");
    todo("implement");
}

_inline std::list<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &Objective::GetDescription() const // 0x59C4F2
{
    mangled_assert("?GetDescription@Objective@@QBEABV?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ");
    todo("implement");
}

_inline void Objective::AddDescription(wchar_t const *) // 0x61090F
{
    mangled_assert("?AddDescription@Objective@@QAEXPB_W@Z");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Objective *> > > ObjectiveList::begin() const // 0x59CAEF
{
    mangled_assert("?begin@ObjectiveList@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVObjective@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Objective *> > > ObjectiveList::end() const // 0x59CB13
{
    mangled_assert("?end@ObjectiveList@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVObjective@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline unsigned __int32 ObjectiveList::size() const // 0x610D11
{
    mangled_assert("?size@ObjectiveList@@QBEIXZ");
    todo("implement");
}

_inline char const *ObjectiveList::saveToken() // 0x610D03
{
    mangled_assert("?saveToken@ObjectiveList@@UAEPBDXZ");
    todo("implement");
}

_inline bool ObjectiveList::isDeterministic() // 0x610C64
{
    mangled_assert("?isDeterministic@ObjectiveList@@UAE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __OBJECTIVES_H__
#endif

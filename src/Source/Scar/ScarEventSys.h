#if 0
#ifndef __SCAREVENTSYS_H__
#define __SCAREVENTSYS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ScarEventSystem :
    public Saveable
{
public:
    ScarEventSystem(ScarEventSystem const &); /* compiler_generated() */
    _inline ScarEventSystem();
    virtual ~ScarEventSystem() override;
    void Initialize(LuaConfig *);
    void Shutdown();
    void StartEvent(char const *);
    bool IsEventDone(char const *) const;
    void StopEvent(char const *);
    void Update();
    typedef std::vector<ScarEvent *,std::allocator<ScarEvent *> > EventList;
private:
    void Load(LuaConfig *);
    std::vector<ScarEvent *,std::allocator<ScarEvent *> > m_eventList; // 0x4
    std::vector<ScarEvent *,std::allocator<ScarEvent *> > m_playList; // 0x10
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x1C
    LuaConfig *m_state; // 0x28
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveEventSys(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreEventSys(void *objectPtr, SaveGameData *saveGameData);
public:
    ScarEventSystem &operator=(ScarEventSystem const &); /* compiler_generated() */
};
static_assert(sizeof(ScarEventSystem) == 44, "Invalid ScarEventSystem size");

class ScarEventSystem :
    public Saveable
{
public:
    ScarEventSystem(ScarEventSystem const &); /* compiler_generated() */
    _inline ScarEventSystem();
    virtual ~ScarEventSystem() override;
    void Initialize(LuaConfig *);
    void Shutdown();
    void StartEvent(char const *);
    bool IsEventDone(char const *) const;
    void StopEvent(char const *);
    void Update();
    typedef std::vector<ScarEvent *,std::allocator<ScarEvent *> > EventList;
private:
    void Load(LuaConfig *);
    std::vector<ScarEvent *,std::allocator<ScarEvent *> > m_eventList; // 0x4
    std::vector<ScarEvent *,std::allocator<ScarEvent *> > m_playList; // 0x10
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x1C
    LuaConfig *m_state; // 0x28
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveEventSys(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreEventSys(void *objectPtr, SaveGameData *saveGameData);
public:
    ScarEventSystem &operator=(ScarEventSystem const &); /* compiler_generated() */
};
static_assert(sizeof(ScarEventSystem) == 44, "Invalid ScarEventSystem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_726E08(ScarEventSystem *const);
_inline ScarEventSystem::ScarEventSystem() // 0x726E08
{
    mangled_assert("??0ScarEventSystem@@QAE@XZ");
    todo("implement");
    _sub_726E08(this);
}

_extern char const *_sub_727675(ScarEventSystem *const);
_inline char const *ScarEventSystem::saveToken() // 0x727675
{
    mangled_assert("?saveToken@ScarEventSystem@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_727675(this);
    return __result;
}

_extern bool _sub_7275C3(ScarEventSystem *const);
_inline bool ScarEventSystem::isDeterministic() // 0x7275C3
{
    mangled_assert("?isDeterministic@ScarEventSystem@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_7275C3(this);
    return __result;
}

/* ---------- private code */

#endif // __SCAREVENTSYS_H__
#endif

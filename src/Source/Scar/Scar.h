#if 0
#ifndef __SCAR_H__
#define __SCAR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Scar :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    static Scar *i();
    static void HandleInput(__int32 keyId, __int32 eventType);
    bool LoadScript(char const *);
    bool StartScript();
    void DoStartOrLoad();
    void Pause(bool);
    bool IsPaused() const;
    void update(float);
    void DumpRules();
    void Reload();
    void ReloadFile(char const *);
    _inline LuaConfig *getState() const;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_scriptName; // 0x4
    LuaConfig *m_state; // 0x1C
    LuaRuleSystem m_ruleSys; // 0x20
    ScarEventSystem m_eventSys; // 0x28
    std::map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_keyMap; // 0x54
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x5C
    typedef std::map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > KeyMap;
    void BindKeyEvent(__int32, char const *);
    void UnBindKeyEvent(__int32);
public:
    Scar(Scar const &); /* compiler_generated() */
private:
    Scar();
    virtual ~Scar() override;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveLuaState(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreLuaState(void *objectPtr, SaveGameData *saveGameData);
public:
    Scar &operator=(Scar const &); /* compiler_generated() */
};
static_assert(sizeof(Scar) == 104, "Invalid Scar size");

class Scar :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static bool Save(SaveGameData *saveGameData, SaveType saveType);
    static bool Restore(SaveGameData *saveGameData);
    static Scar *i();
    static void HandleInput(__int32 keyId, __int32 eventType);
    bool LoadScript(char const *);
    bool StartScript();
    void DoStartOrLoad();
    void Pause(bool);
    bool IsPaused() const;
    void update(float);
    void DumpRules();
    void Reload();
    void ReloadFile(char const *);
    _inline LuaConfig *getState() const;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_scriptName; // 0x4
    LuaConfig *m_state; // 0x1C
    LuaRuleSystem m_ruleSys; // 0x20
    ScarEventSystem m_eventSys; // 0x28
    std::map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_keyMap; // 0x54
    std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > m_exported; // 0x5C
    typedef std::map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > KeyMap;
    void BindKeyEvent(__int32, char const *);
    void UnBindKeyEvent(__int32);
public:
    Scar(Scar const &); /* compiler_generated() */
private:
    Scar();
    virtual ~Scar() override;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveLuaState(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreLuaState(void *objectPtr, SaveGameData *saveGameData);
public:
    Scar &operator=(Scar const &); /* compiler_generated() */
};
static_assert(sizeof(Scar) == 104, "Invalid Scar size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern LuaConfig *_sub_5564A3(Scar const *const);
_inline LuaConfig *Scar::getState() const // 0x5564A3
{
    mangled_assert("?getState@Scar@@QBEPAVLuaConfig@@XZ");
    todo("implement");
    LuaConfig * __result = _sub_5564A3(this);
    return __result;
}

_extern char const *_sub_72766F(Scar *const);
_inline char const *Scar::saveToken() // 0x72766F
{
    mangled_assert("?saveToken@Scar@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_72766F(this);
    return __result;
}

_extern bool _sub_7275C0(Scar *const);
_inline bool Scar::isDeterministic() // 0x7275C0
{
    mangled_assert("?isDeterministic@Scar@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_7275C0(this);
    return __result;
}

/* ---------- private code */

#endif // __SCAR_H__
#endif

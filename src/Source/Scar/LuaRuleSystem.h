#if 0
#ifndef __LUARULESYSTEM_H__
#define __LUARULESYSTEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaRuleSystem :
    private boost::noncopyable,
    public Saveable
{
public:
    LuaRuleSystem(LuaRuleSystem const &); /* compiler_generated() */
    LuaRuleSystem();
    virtual ~LuaRuleSystem() override;
    void Init(LuaConfig *);
    void Shutdown();
    void RunRules(float);
    void DumpRules();
private:
    void Rule_Add(char const *);
    void Rule_Remove(char const *);
    void Rule_AddInterval(char const *, float);
    bool Rule_Exists(char const *);
    class Data;
    boost::scoped_ptr<LuaRuleSystem::Data> m_pimpl; // 0x4
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void savePimpl(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restorePimpl(void *objectPtr, SaveGameData *saveGameData);
public:
    LuaRuleSystem &operator=(LuaRuleSystem const &); /* compiler_generated() */
};
static_assert(sizeof(LuaRuleSystem) == 8, "Invalid LuaRuleSystem size");

class LuaRuleSystem :
    private boost::noncopyable,
    public Saveable
{
public:
    LuaRuleSystem(LuaRuleSystem const &); /* compiler_generated() */
    LuaRuleSystem();
    virtual ~LuaRuleSystem() override;
    void Init(LuaConfig *);
    void Shutdown();
    void RunRules(float);
    void DumpRules();
private:
    void Rule_Add(char const *);
    void Rule_Remove(char const *);
    void Rule_AddInterval(char const *, float);
    bool Rule_Exists(char const *);
    class Data;
    boost::scoped_ptr<LuaRuleSystem::Data> m_pimpl; // 0x4
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void savePimpl(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restorePimpl(void *objectPtr, SaveGameData *saveGameData);
public:
    LuaRuleSystem &operator=(LuaRuleSystem const &); /* compiler_generated() */
};
static_assert(sizeof(LuaRuleSystem) == 8, "Invalid LuaRuleSystem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_70F941(LuaRuleSystem *const);
_inline char const *LuaRuleSystem::saveToken() // 0x70F941
{
    mangled_assert("?saveToken@LuaRuleSystem@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_70F941(this);
    return __result;
}

_extern bool _sub_70F88D(LuaRuleSystem *const);
_inline bool LuaRuleSystem::isDeterministic() // 0x70F88D
{
    mangled_assert("?isDeterministic@LuaRuleSystem@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_70F88D(this);
    return __result;
}

/* ---------- private code */

#endif // __LUARULESYSTEM_H__
#endif

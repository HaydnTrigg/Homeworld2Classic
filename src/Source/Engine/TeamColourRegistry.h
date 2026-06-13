#if 0
#ifndef __TEAMCOLOURREGISTRY_H__
#define __TEAMCOLOURREGISTRY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TeamColourRegistry :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static TeamColourRegistry *Instance();
    static bool SaveSingleton(SaveGameData *saveGameData, SaveType saveType);
    static bool RestoreSingleton(SaveGameData *saveGameData);
    typedef unsigned __int32 Handle;
    static unsigned __int32 INVALID_HANDLE;
    unsigned __int32 AddTeamColour(TeamColour const &);
    TeamColour const *GetTeamColour(unsigned __int32);
    void ModifyTeamColour(unsigned __int32, TeamColour const &);
    void SavePersistentData(LuaConfig &);
    void LoadPersistentData(LuaConfig &);
    unsigned __int32 AdjustPersistentHandle(unsigned __int32);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveData(void *, SaveGameData *, SaveType);
    static void restoreData(void *, SaveGameData *);
public:
    TeamColourRegistry(TeamColourRegistry const &); /* compiler_generated() */
private:
    TeamColourRegistry();
    virtual ~TeamColourRegistry() override;
    void clear();
    typedef std::vector<TeamColour *,std::allocator<TeamColour *> > TeamColourList;
    std::vector<TeamColour *,std::allocator<TeamColour *> > m_teamColours; // 0x4
    unsigned __int32 m_handleOffset; // 0x10
public:
    TeamColourRegistry &operator=(TeamColourRegistry const &); /* compiler_generated() */
};
static_assert(sizeof(TeamColourRegistry) == 20, "Invalid TeamColourRegistry size");

class TeamColourRegistry :
    public Saveable
{
public:
    static bool Startup();
    static bool Shutdown();
    static TeamColourRegistry *Instance();
    static bool SaveSingleton(SaveGameData *saveGameData, SaveType saveType);
    static bool RestoreSingleton(SaveGameData *saveGameData);
    typedef unsigned __int32 Handle;
    static unsigned __int32 INVALID_HANDLE;
    unsigned __int32 AddTeamColour(TeamColour const &);
    TeamColour const *GetTeamColour(unsigned __int32);
    void ModifyTeamColour(unsigned __int32, TeamColour const &);
    void SavePersistentData(LuaConfig &);
    void LoadPersistentData(LuaConfig &);
    unsigned __int32 AdjustPersistentHandle(unsigned __int32);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveData(void *, SaveGameData *, SaveType);
    static void restoreData(void *, SaveGameData *);
public:
    TeamColourRegistry(TeamColourRegistry const &); /* compiler_generated() */
private:
    TeamColourRegistry();
    virtual ~TeamColourRegistry() override;
    void clear();
    typedef std::vector<TeamColour *,std::allocator<TeamColour *> > TeamColourList;
    std::vector<TeamColour *,std::allocator<TeamColour *> > m_teamColours; // 0x4
    unsigned __int32 m_handleOffset; // 0x10
public:
    TeamColourRegistry &operator=(TeamColourRegistry const &); /* compiler_generated() */
};
static_assert(sizeof(TeamColourRegistry) == 20, "Invalid TeamColourRegistry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_647FCB(TeamColourRegistry *const);
_inline char const *TeamColourRegistry::saveToken() // 0x647FCB
{
    mangled_assert("?saveToken@TeamColourRegistry@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_647FCB(this);
    return __result;
}

_extern bool _sub_647ED1(TeamColourRegistry *const);
_inline bool TeamColourRegistry::isDeterministic() // 0x647ED1
{
    mangled_assert("?isDeterministic@TeamColourRegistry@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_647ED1(this);
    return __result;
}

/* ---------- private code */

#endif // __TEAMCOLOURREGISTRY_H__
#endif

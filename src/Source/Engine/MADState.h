#if 0
#ifndef __MADSTATE_H__
#define __MADSTATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MADSTATE
{
    MADS_Normal = 0,
    MADS_Open,
    MADS_Closed,
    MADS_CodeRed,
    MADS_CodeGreen,
    MADS_ResourceStart,
    MADS_ResourceDo,
    MADS_ResourceEnd,
    MADS_RepairStart,
    MADS_RepairDo,
    MADS_RepairEnd,
    MADS_DockPathOpen,
    MADS_DockPathClosed,
    MADS_Launched,
    MADS_Docked,
    MADS_DefenseFieldActivate,
    MADS_DefenseFieldDeActivate,
    MADS_CloakFieldActivate,
    MADS_CloakFieldDeactivate,
    MADS_HyperspaceGateActivate,
    MADS_HyperspaceGateDeActivate,
    MADS_DoingFlightManeuver,
    MADS_CaptureActive,
    MADS_CaptureInActive,
    MADS_NIS00,
    MADS_NIS01,
    MADS_NIS02,
    MADS_NumberStates,
    MADS_NoState,
};

/* ---------- definitions */

class MadStateStatic
{
public:
    MadStateStatic(char const *, char const *, RenderModel const *);
    ~MadStateStatic();
    char const *getLuaFunctionName(MADSTATE, char const *);
    __int32 m_luaCallOnSet[27]; // 0x0
    __int32 m_luaCallOnPause[27]; // 0x6C
    __int32 m_luaCallOnEnd[27]; // 0xD8
    std::bitset<27> m_effectEventOnSet; // 0x144
    std::bitset<27> m_effectEventOnPause; // 0x148
    std::bitset<27> m_effectEventOnEnd; // 0x14C
    char const *m_shipName; // 0x150
    bool m_bCode; // 0x154
};
static_assert(sizeof(MadStateStatic) == 344, "Invalid MadStateStatic size");

class MadState
{
public:
    MadState(MadState const &); /* compiler_generated() */
    MadState(SaveGameData *);
    MadState();
    ~MadState();
    void setOwner(SobWithMesh *);
    bool setState(MADSTATE);
    bool setStateClean(MADSTATE, bool);
    bool getState(MADSTATE);
    bool callLuaSetFunction(MADSTATE);
    bool callLuaPauseFunction(MADSTATE);
    bool callLuaEndFunction(MADSTATE);
    bool triggerSetEffectEvent(MADSTATE);
    bool triggerPauseEffectEvent(MADSTATE);
    bool triggerEndEffectEvent(MADSTATE);
    void addAnimatorReference(AnimatorMad *);
    bool removeAnimatorReference(AnimatorMad *);
    AnimatorMad *findAnimatorReferenceByName(char const *);
    bool save(SaveGameData *, SaveType);
    bool restore(SaveGameData *);
    _inline bool isDeterministic();
    void postRestore();
    char const *saveToken();
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveAnimators(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreAnimators(void *objectPtr, SaveGameData *saveGameData);
private:
    SobWithMesh *m_owner; // 0x0
    bool m_bState[27]; // 0x4
    MadStateStatic const *m_madStatic; // 0x20
    std::vector<AnimatorMad *,std::allocator<AnimatorMad *> > m_animators; // 0x24
public:
    MadState &operator=(MadState const &); /* compiler_generated() */
};
static_assert(sizeof(MadState) == 48, "Invalid MadState size");

class MadState
{
public:
    MadState(MadState const &); /* compiler_generated() */
    MadState(SaveGameData *);
    MadState();
    ~MadState();
    void setOwner(SobWithMesh *);
    bool setState(MADSTATE);
    bool setStateClean(MADSTATE, bool);
    bool getState(MADSTATE);
    bool callLuaSetFunction(MADSTATE);
    bool callLuaPauseFunction(MADSTATE);
    bool callLuaEndFunction(MADSTATE);
    bool triggerSetEffectEvent(MADSTATE);
    bool triggerPauseEffectEvent(MADSTATE);
    bool triggerEndEffectEvent(MADSTATE);
    void addAnimatorReference(AnimatorMad *);
    bool removeAnimatorReference(AnimatorMad *);
    AnimatorMad *findAnimatorReferenceByName(char const *);
    bool save(SaveGameData *, SaveType);
    bool restore(SaveGameData *);
    _inline bool isDeterministic();
    void postRestore();
    char const *saveToken();
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveAnimators(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreAnimators(void *objectPtr, SaveGameData *saveGameData);
private:
    SobWithMesh *m_owner; // 0x0
    bool m_bState[27]; // 0x4
    MadStateStatic const *m_madStatic; // 0x20
    std::vector<AnimatorMad *,std::allocator<AnimatorMad *> > m_animators; // 0x24
public:
    MadState &operator=(MadState const &); /* compiler_generated() */
};
static_assert(sizeof(MadState) == 48, "Invalid MadState size");

class MadsSystem
{
public:
    static bool Startup();
    static bool Shutdown();
    static void BindToLua(LuaConfig &lc);
    static void UnBindFromLua(LuaConfig &lc);
    static LuaConfig *s_madsLuaState;
    static std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > s_exported;
};
static_assert(sizeof(MadsSystem) == 1, "Invalid MadsSystem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool MadState::isDeterministic() // 0x606D56
{
    mangled_assert("?isDeterministic@MadState@@QAE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MADSTATE_H__
#endif

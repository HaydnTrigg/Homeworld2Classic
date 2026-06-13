#if 0
#ifndef __TIMERMAP_H__
#define __TIMERMAP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TimerMap :
    public Saveable
{
public:
    TimerMap(TimerMap const &); /* compiler_generated() */
    TimerMap(SaveGameData *);
private:
    TimerMap();
public:
    static bool Initialize();
    static bool Shutdown();
    static TimerMap &Instance();
    static bool IsInitialized();
    unsigned __int32 StartTimer(float);
    bool CheckTimer(unsigned __int32);
    float GetRemainingTime(unsigned __int32);
    void Pause(bool);
    void Update();
    _inline float GetDelta() const;
    float GetCurrentTime() const;
    typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > timerMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > timerMapI;
private:
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_timerMap; // 0x4
    unsigned __int32 m_timeruid; // 0xC
    bool m_isPause; // 0x10
    Timer m_maintimer; // 0x18
    float m_currentTime; // 0x38
    float m_deltaTime; // 0x3C
    float m_lastTime; // 0x40
    static TimerMap *ms_instance;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveTimerMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadTimerMap(void *objectPtr, SaveGameData *saveGameData);
    virtual _inline ~TimerMap() override; /* compiler_generated() */
    TimerMap &operator=(TimerMap const &); /* compiler_generated() */
};
static_assert(sizeof(TimerMap) == 72, "Invalid TimerMap size");

class TimerMap :
    public Saveable
{
public:
    TimerMap(TimerMap const &); /* compiler_generated() */
    TimerMap(SaveGameData *);
private:
    TimerMap();
public:
    static bool Initialize();
    static bool Shutdown();
    static TimerMap &Instance();
    static bool IsInitialized();
    unsigned __int32 StartTimer(float);
    bool CheckTimer(unsigned __int32);
    float GetRemainingTime(unsigned __int32);
    void Pause(bool);
    void Update();
    _inline float GetDelta() const;
    float GetTickCount() const;
    typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > timerMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > timerMapI;
private:
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_timerMap; // 0x4
    unsigned __int32 m_timeruid; // 0xC
    bool m_isPause; // 0x10
    Timer m_maintimer; // 0x18
    float m_currentTime; // 0x38
    float m_deltaTime; // 0x3C
    float m_lastTime; // 0x40
    static TimerMap *ms_instance;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveTimerMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadTimerMap(void *objectPtr, SaveGameData *saveGameData);
    virtual _inline ~TimerMap() override; /* compiler_generated() */
    TimerMap &operator=(TimerMap const &); /* compiler_generated() */
};
static_assert(sizeof(TimerMap) == 72, "Invalid TimerMap size");

class TimerMap :
    public Saveable
{
public:
    TimerMap(TimerMap const &); /* compiler_generated() */
    TimerMap(SaveGameData *);
private:
    TimerMap();
public:
    static bool Initialize();
    static bool Shutdown();
    static TimerMap &Instance();
    static bool IsInitialized();
    unsigned __int32 StartTimer(float);
    bool CheckTimer(unsigned __int32);
    float GetRemainingTime(unsigned __int32);
    void Pause(bool);
    void Update();
    _inline float GetDelta() const;
    float GetCurrentTime() const;
    typedef std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > timerMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,float> > > > timerMapI;
private:
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_timerMap; // 0x4
    unsigned __int32 m_timeruid; // 0xC
    bool m_isPause; // 0x10
    Timer m_maintimer; // 0x18
    float m_currentTime; // 0x38
    float m_deltaTime; // 0x3C
    float m_lastTime; // 0x40
    static TimerMap *ms_instance;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveTimerMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadTimerMap(void *objectPtr, SaveGameData *saveGameData);
    virtual _inline ~TimerMap() override; /* compiler_generated() */
    TimerMap &operator=(TimerMap const &); /* compiler_generated() */
};
static_assert(sizeof(TimerMap) == 72, "Invalid TimerMap size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_468042(TimerMap const *const);
_inline float TimerMap::GetDelta() const // 0x468042
{
    mangled_assert("?GetDelta@TimerMap@@QBEMXZ");
    todo("implement");
    float __result = _sub_468042(this);
    return __result;
}

_extern bool _sub_648382(TimerMap *const);
_inline bool TimerMap::isDeterministic() // 0x648382
{
    mangled_assert("?isDeterministic@TimerMap@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_648382(this);
    return __result;
}

_extern char const *_sub_64841F(TimerMap *const);
_inline char const *TimerMap::saveToken() // 0x64841F
{
    mangled_assert("?saveToken@TimerMap@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_64841F(this);
    return __result;
}

/* ---------- private code */

#endif // __TIMERMAP_H__
#endif

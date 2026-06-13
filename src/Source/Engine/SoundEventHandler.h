#if 0
#ifndef __SOUNDEVENTHANDLER_H__
#define __SOUNDEVENTHANDLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct probabilityInfo
{
    unsigned __int32 randomWeight; // 0x0
    float maxDistance; // 0x4
    float expDistance; // 0x8
    float minWavelength; // 0xC
    float expWavelength; // 0x10
    float minRepeatProximity; // 0x14
    float expRepeatProximity; // 0x18
};
static_assert(sizeof(probabilityInfo) == 28, "Invalid probabilityInfo size");

class SoundEventHandler :
    private GameEventSys::Listener
{
public:
    static bool initialise();
    static bool shutDown();
    static SoundEventHandler *i();
    bool PublishEvent(chatterevent const);
    void setGlobalFrequencyModifier(unsigned __int32);
    void setGlobalFrequencyMin(float);
    void setGlobalFrequencyMax(float);
    ChatterEvent *getChatterEventPtr(chatterevent);
    bool m_bUseloc; // 0x4
    vector3 m_currLoc; // 0x8
private:
    LuaConfig m_lc; // 0x14
    std::vector<probabilityInfo,std::allocator<probabilityInfo> > m_vecProbabilities; // 0x18
    std::vector<ChatterEvent *,std::allocator<ChatterEvent *> > m_vecChatterEvents; // 0x24
    std::set<unsigned int,std::less<unsigned int>,std::allocator<unsigned int> > m_seenAvailableBuilds; // 0x30
    bool m_bHasInited; // 0x38
    typedef std::vector<ChatterEvent *,std::allocator<ChatterEvent *> > ChatterEventList;
    typedef std::vector<probabilityInfo,std::allocator<probabilityInfo> > probabilityList;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,int> > > indexMap;
public:
    SoundEventHandler(SoundEventHandler const &); /* compiler_generated() */
private:
    SoundEventHandler();
    ~SoundEventHandler();
    virtual void OnEvent(GameEventSys::Event const &) override;
    bool passFilter(chatterevent, vector3 const &);
    long queueEvent(chatterevent);
    bool passFilterDistance(ChatterEvent *, vector3 const &);
    bool passFilterRepeatProximity(ChatterEvent *, vector3 const &);
    bool passFilterWavelength(ChatterEvent *);
    void loadChatter();
    __int32 getChatterEvent(GameEventSys::Event const &, vector3 &);
    chatterevent helpLoad(chatterevent, char const *, char const *, float const *, float const *);
    static SoundEventHandler *s_instance;
    static unsigned __int32 m_chtGlobalFrequencyModifier;
    static float m_chtGlobalFrequencyMin;
    static float m_chtGlobalFrequencyMax;
    __int32 getGroupNumber(Selection const &);
public:
    SoundEventHandler &operator=(SoundEventHandler const &); /* compiler_generated() */
};
static_assert(sizeof(SoundEventHandler) == 60, "Invalid SoundEventHandler size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOUNDEVENTHANDLER_H__
#endif

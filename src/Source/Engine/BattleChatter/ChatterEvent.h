#if 0
#ifndef __CHATTEREVENT_H__
#define __CHATTEREVENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum chatterevent
{
    CE_NONE = -1,
    CE_CMD_MOVE = 0,
    CE_CMD_WPMOVE,
    CE_CMD_MOVETOSOB,
    CE_CMD_IDLE,
    CE_CMD_RESOURCE,
    CE_CMD_CAPTURE,
    CE_CMD_ATTACK,
    CE_CMD_LAUNCH,
    CE_CMD_GUARD,
    CE_CMD_DOCK,
    CE_CMD_PARADE,
    CE_CMD_RETIRE,
    CE_CMD_COULDNOT,
    CE_CMD_CLOAKON,
    CE_CMD_CLOAKOFF,
    CE_CMD_CLOAKPOWEROUT,
    CE_CMD_CLOAKLOWPOWER,
    CE_CMD_TACTICSCHANGE,
    CE_CMD_RANGECHANGE,
    CE_CMD_RANCEFORCECHANGE,
    CE_CMD_HOTKEYGRP,
    CE_CMD_SHIPSELECTED,
    CE_CMD_CONSTRUCTIONCOMPLETE,
    CE_CMD_CONSTRUCTIONSTARTED,
    CE_CMD_RESOURCESDEPLETED,
    CE_CMD_STRIKEGROUPFORMED,
    CE_STS_RETALIATING,
    CE_STS_UNDERFIRENEEDORDERS,
    CE_STS_ATTACKCOMPLETE,
    CE_STS_CAPTURECOMPLETE,
    CE_STS_CAPTUREFAILED,
    CE_STS_REPAIRS,
    CE_STS_SHIPDESTROYED,
    CE_STS_COLLECTORFULL,
    CE_STS_RESOURCESTRANSFERRED,
    CE_STS_SHIPDOCKED,
    CE_STS_LIGHTDAMAGE,
    CE_STS_HEAVYDAMAGE,
    CE_STS_DAMAGED,
    CE_STS_INMINEFIELD,
    CE_STS_CRITICALDAMAGE,
    CE_STS_BATTLEMOMENTUM,
    CE_CMD_HYPERSPACE,
    CE_CMD_HYPERSPACEFORMGATE,
    CE_CMD_HYPERSPACEGATELINKED,
    CE_CMD_BUILD,
    CE_CMD_LAYMINES,
    CE_CMD_REPAIR,
    CE_CMD_CANCEL,
    CE_CHT_DOCK,
    CE_CHT_FIGHTERCHASED,
    CE_CMD_MOVEATTACK,
    CE_CMD_COMBATMAN,
    CE_STS_HYPERSPACEEXIT,
    CE_CMD_DEFENSEFIELDCHANGED,
    CE_CHT_MISC,
    CE_STS_UNDERATTACK,
    CE_STS_SUBSYS,
    CE_STS_CAPWELCOME,
    CE_STS_CLOUD,
    CE_CHT_SMALLHITRESPONSE,
    CE_STS_RESOURCERSTOOBUSY,
    CE_STS_RESEARCHCOMPLETE,
    CE_CHT_BUILDINGSHIP,
    CE_CMD_BUILDPAUSE,
    CE_CHT_BATTLEMISC,
    CE_STS_BUILDAVAILABLE,
    CE_STS_HYPERSPACEINTERRUPTED,
    CE_STS_RESEARCHAVAILABLE,
    CE_STS_RESEARCHNORUS,
    CE_STS_UPGRADECOMPLETE,
    CE_STS_UPGRADEAVAILABLE,
    CE_STS_UPGRADENORUS,
    CE_STS_INHIBITORONLINE,
    CE_CHT_LOSERESPONSE,
    CE_CHT_WINRESPONSE,
    CE_STS_RESOURCESDEPLETED,
    CE_CHT_ADVRESPONSE,
    CE_CHT_FAIRRESPONSE,
    CE_CHT_MISCHI,
    CE_CHT_MULTIPLAY,
    CE_LAST,
};

/* ---------- definitions */

class ChatterEvent
{
public:
    enum functionType
    {
        FUNCTION_NONE = 0,
        FUNCTION_S,
        FUNCTION_N,
        FUNCTION_SS,
        FUNCTION_SN,
        FUNCTION_SSN,
        FUNCTION_SNN,
    };
    ChatterEvent(ChatterEvent const &); /* compiler_generated() */
    ChatterEvent(char const *, char const *, __int32, ChatterEvent::functionType, char const *);
    ChatterEvent();
    ~ChatterEvent();
    char const *getAction();
    char const *getActor();
    bool hasSpoken();
    void update(float const &, vector3 *);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_eventName; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_strAction; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_actorName; // 0x30
    __int32 m_probabilityIndex; // 0x48
    float m_PlayFrequency; // 0x4C
    ChatterEvent::functionType m_FunctionType; // 0x50
    float lastTimeSpoken; // 0x54
    vector3 lastPlaceSpoken; // 0x58
    chatterevent m_iNext; // 0x64
    std::vector<float,std::allocator<float> > m_vecNumbers; // 0x68
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_vecStrings; // 0x74
private:
    bool m_bSpoken; // 0x80
public:
    static __int32 const MAX_PARAMS;
private:
    void clear();
public:
    ChatterEvent &operator=(ChatterEvent const &); /* compiler_generated() */
};
static_assert(sizeof(ChatterEvent) == 132, "Invalid ChatterEvent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CHATTEREVENT_H__
#endif

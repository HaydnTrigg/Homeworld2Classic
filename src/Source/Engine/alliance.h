#if 0
#ifndef __ALLIANCE_H__
#define __ALLIANCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum AllianceOrderAction
{
    ALLIANCE_Form = 0,
    ALLIANCE_Break,
    ALLIANCE_ShareVision,
    ALLIANCE_PrivateVision,
    ALLIANCE_TransferGoods,
};

enum AllianceEventType
{
    AllianceEvent_form = 0,
    AllianceEvent_break,
    AllianceEvent_resultAccepted,
    AllianceEvent_resultDeclined,
    AllianceEvent_resultBroken,
    AllianceEvent_xferRUs,
    AllianceEvent_xferShips,
    AllianceEvent_MAX,
};

/* ---------- definitions */

struct AllianceEvent
{
    AllianceEventType m_type; // 0x0
    unsigned __int32 m_player1; // 0x4
    unsigned __int32 m_player2; // 0x8
    unsigned __int32 m_frame; // 0xC
};
static_assert(sizeof(AllianceEvent) == 16, "Invalid AllianceEvent size");

class Alliance
{
public:
    Alliance(Alliance const &); /* compiler_generated() */
    Alliance();
    ~Alliance();
    static Alliance *instance();
    static _inline Alliance *i();
    void release();
    void setAlliance(unsigned __int32, unsigned __int32);
    void breakAlliance(unsigned __int32);
    void breakAlliance(unsigned __int32, unsigned __int32);
    bool isAllied(unsigned __int32);
    bool isAllied(unsigned __int32, unsigned __int32);
    bool isAllianceSet(unsigned __int32, unsigned __int32);
    void setSharedVision(unsigned __int32, unsigned __int32, bool);
    bool getSharedVision(unsigned __int32, unsigned __int32);
    __int32 transferRUs(unsigned __int32, __int32);
    __int32 transferRUs(unsigned __int32, unsigned __int32, __int32);
    void transferSquadrons(unsigned __int32, SquadronList const *);
    bool transferSquadrons(unsigned __int32, unsigned __int32, SquadronList const *);
    void formAlliance(unsigned __int32);
    void ignorePlayer(unsigned __int32, bool);
    bool isPlayerIgnored(unsigned __int32);
    void processOrder(AllianceOrderAction, unsigned __int32, unsigned __int32, unsigned __int32, SquadronList const *);
    void removeAllyFromAttack(unsigned __int32, unsigned __int32);
    _inline unsigned __int32 getNumAllianceEvents();
    void popAllianceEvent(AllianceEvent *);
    void addAllianceEvent(AllianceEventType, unsigned __int32, unsigned __int32);
protected:
    void publishEvent(unsigned __int32, unsigned __int32, unsigned __int32, __int32);
    typedef std::deque<AllianceEvent,std::allocator<AllianceEvent> > AllianceEventList;
    std::deque<AllianceEvent,std::allocator<AllianceEvent> > m_allianceEventsList; // 0x0
    unsigned __int32 m_ignoreFlags; // 0x14
    static Alliance *m_instance;
public:
    Alliance &operator=(Alliance const &); /* compiler_generated() */
};
static_assert(sizeof(Alliance) == 24, "Invalid Alliance size");

class Alliance
{
public:
    Alliance(Alliance const &); /* compiler_generated() */
    Alliance();
    ~Alliance();
    static Alliance *instance();
    static _inline Alliance *i();
    void release();
    void setAlliance(unsigned __int32, unsigned __int32);
    void breakAlliance(unsigned __int32);
    void breakAlliance(unsigned __int32, unsigned __int32);
    bool isAllied(unsigned __int32);
    bool isAllied(unsigned __int32, unsigned __int32);
    bool isAllianceSet(unsigned __int32, unsigned __int32);
    void setSharedVision(unsigned __int32, unsigned __int32, bool);
    bool getSharedVision(unsigned __int32, unsigned __int32);
    __int32 transferRUs(unsigned __int32, __int32);
    __int32 transferRUs(unsigned __int32, unsigned __int32, __int32);
    void transferSquadrons(unsigned __int32, SquadronList const *);
    bool transferSquadrons(unsigned __int32, unsigned __int32, SquadronList const *);
    void formAlliance(unsigned __int32);
    void ignorePlayer(unsigned __int32, bool);
    bool isPlayerIgnored(unsigned __int32);
    void processOrder(AllianceOrderAction, unsigned __int32, unsigned __int32, unsigned __int32, SquadronList const *);
    void removeAllyFromAttack(unsigned __int32, unsigned __int32);
    _inline unsigned __int32 getNumAllianceEvents();
    void popAllianceEvent(AllianceEvent *);
    void addAllianceEvent(AllianceEventType, unsigned __int32, unsigned __int32);
protected:
    void publishEvent(unsigned __int32, unsigned __int32, unsigned __int32, __int32);
    typedef std::deque<AllianceEvent,std::allocator<AllianceEvent> > AllianceEventList;
    std::deque<AllianceEvent,std::allocator<AllianceEvent> > m_allianceEventsList; // 0x0
    unsigned __int32 m_ignoreFlags; // 0x14
    static Alliance *m_instance;
public:
    Alliance &operator=(Alliance const &); /* compiler_generated() */
};
static_assert(sizeof(Alliance) == 24, "Invalid Alliance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Alliance *_sub_454B2A();
_inline Alliance *Alliance::i() // 0x454B2A
{
    mangled_assert("?i@Alliance@@SGPAV1@XZ");
    todo("implement");
    Alliance * __result = _sub_454B2A();
    return __result;
}

_extern unsigned __int32 _sub_57510A(Alliance *const);
_inline unsigned __int32 Alliance::getNumAllianceEvents() // 0x57510A
{
    mangled_assert("?getNumAllianceEvents@Alliance@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_57510A(this);
    return __result;
}

/* ---------- private code */

#endif // __ALLIANCE_H__
#endif

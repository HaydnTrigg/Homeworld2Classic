#if 0
#ifndef __CPUTARGET_H__
#define __CPUTARGET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum TargetType
{
    TT_MotherShip = 0,
    TT_Builder,
    TT_Refinery,
    TT_Custom,
    TT_Max,
};

/* ---------- definitions */

class BaseTarget
{
public:
    BaseTarget(BaseTarget const &); /* compiler_generated() */
protected:
    BaseTarget(SaveStream *);
    BaseTarget(unsigned __int32, Squadron *, unsigned __int32, TargetType, float, float);
    BaseTarget(unsigned __int32, vector3 const &, unsigned __int32, TargetType, float, float);
public:
    ~BaseTarget();
    void save(SaveStream *);
    void Analyze(Player *);
    vector3 const &getPosition() const;
    _inline unsigned __int32 getId() const;
    _inline unsigned __int32 getPriority() const;
    _inline SquadronList const &getSquadList() const;
    _inline bool isPosTarget() const;
    _inline TargetType getTargetType() const;
    _inline void reset();
    _inline void setPriority(unsigned __int32);
    void setRadius(float);
    CpuBlob *m_blob; // 0x0
    CounterValue m_enemyRating; // 0x4
    CounterValue m_friendlyRating; // 0x20
    __int32 m_threat; // 0x3C
protected:
    bool m_isPosTarget; // 0x40
    vector3 m_pos; // 0x44
    float m_radius; // 0x50
    SquadronList m_squadList; // 0x54
    unsigned __int32 m_priority; // 0x74
    bool m_scouted; // 0x78
    TargetType m_type; // 0x7C
    bool m_analyzed; // 0x80
    unsigned __int32 m_id; // 0x84
    float m_lastAttackTime; // 0x88
    float m_clearTime; // 0x8C
public:
    BaseTarget &operator=(BaseTarget const &); /* compiler_generated() */
};
static_assert(sizeof(BaseTarget) == 144, "Invalid BaseTarget size");

class DefendTarget :
    public BaseTarget
{
public:
    DefendTarget(DefendTarget const &); /* compiler_generated() */
    _inline DefendTarget(SaveStream *);
    _inline DefendTarget(unsigned __int32, Squadron *, unsigned __int32, TargetType, float, float);
    _inline DefendTarget(unsigned __int32, vector3 const &, unsigned __int32, TargetType, float, float);
    ~DefendTarget(); /* compiler_generated() */
    DefendTarget &operator=(DefendTarget const &); /* compiler_generated() */
};
static_assert(sizeof(DefendTarget) == 144, "Invalid DefendTarget size");

class AttackTarget :
    public BaseTarget
{
public:
    AttackTarget(AttackTarget const &); /* compiler_generated() */
    _inline AttackTarget(SaveStream *);
    _inline AttackTarget(unsigned __int32, Squadron *, unsigned __int32, TargetType, float, float);
    ~AttackTarget(); /* compiler_generated() */
    AttackTarget &operator=(AttackTarget const &); /* compiler_generated() */
};
static_assert(sizeof(AttackTarget) == 144, "Invalid AttackTarget size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 BaseTarget::getId() const // 0x525A54
{
    mangled_assert("?getId@BaseTarget@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 BaseTarget::getPriority() const // 0x52E69B
{
    mangled_assert("?getPriority@BaseTarget@@QBEIXZ");
    todo("implement");
}

_inline SquadronList const &BaseTarget::getSquadList() const // 0x525A5F
{
    mangled_assert("?getSquadList@BaseTarget@@QBEABVSquadronList@@XZ");
    todo("implement");
}

_inline bool BaseTarget::isPosTarget() const // 0x540BAC
{
    mangled_assert("?isPosTarget@BaseTarget@@QBE_NXZ");
    todo("implement");
}

_inline TargetType BaseTarget::getTargetType() const // 0x540BA8
{
    mangled_assert("?getTargetType@BaseTarget@@QBE?AW4TargetType@@XZ");
    todo("implement");
}

_inline void BaseTarget::reset() // 0x540CB0
{
    mangled_assert("?reset@BaseTarget@@QAEXXZ");
    todo("implement");
}

_inline void BaseTarget::setPriority(unsigned __int32) // 0x5336F3
{
    mangled_assert("?setPriority@BaseTarget@@QAEXI@Z");
    todo("implement");
}

_inline DefendTarget::DefendTarget(unsigned __int32, vector3 const &, unsigned __int32, TargetType, float, float) // 0x52F8CA
{
    mangled_assert("??0DefendTarget@@QAE@IABVvector3@@IW4TargetType@@MM@Z");
    todo("implement");
}

_inline DefendTarget::DefendTarget(unsigned __int32, Squadron *, unsigned __int32, TargetType, float, float) // 0x52F8FF
{
    mangled_assert("??0DefendTarget@@QAE@IPAVSquadron@@IW4TargetType@@MM@Z");
    todo("implement");
}

_inline DefendTarget::DefendTarget(SaveStream *) // 0x540956
{
    mangled_assert("??0DefendTarget@@QAE@PAVSaveStream@@@Z");
    todo("implement");
}

_inline AttackTarget::AttackTarget(unsigned __int32, Squadron *, unsigned __int32, TargetType, float, float) // 0x52F700
{
    mangled_assert("??0AttackTarget@@QAE@IPAVSquadron@@IW4TargetType@@MM@Z");
    todo("implement");
}

_inline AttackTarget::AttackTarget(SaveStream *) // 0x540944
{
    mangled_assert("??0AttackTarget@@QAE@PAVSaveStream@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUTARGET_H__
#endif

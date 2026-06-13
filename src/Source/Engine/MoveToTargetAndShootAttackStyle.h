#if 0
#ifndef __MOVETOTARGETANDSHOOTATTACKSTYLE_H__
#define __MOVETOTARGETANDSHOOTATTACKSTYLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MoveToTargetAndShootStatic :
    public AttackStyleStatic
{
public:
    MoveToTargetAndShootStatic(MoveToTargetAndShootStatic const &); /* compiler_generated() */
    MoveToTargetAndShootStatic();
    virtual _inline ~MoveToTargetAndShootStatic() override;
    virtual bool loadData(LuaConfig &) override;
    float m_inRangeMultiplier; // 0x24
    float m_happilySameHeight; // 0x28
    float m_tooLongOutOfRange; // 0x2C
    bool m_tryToGetAboveTarget; // 0x30
    float m_cosAngleFromUp; // 0x34
    float *m_stateTransitionTimes; // 0x38
    float m_maxTimeToSpendFlyingToAbove; // 0x3C
    float m_maxTimeToSpendTryingToMatchHeight; // 0x40
    MoveToTargetAndShootStatic &operator=(MoveToTargetAndShootStatic const &); /* compiler_generated() */
};
static_assert(sizeof(MoveToTargetAndShootStatic) == 68, "Invalid MoveToTargetAndShootStatic size");

class MoveToTargetAndShootAttackStyle :
    public AttackStyle
{
public:
    MoveToTargetAndShootAttackStyle(MoveToTargetAndShootAttackStyle const &); /* compiler_generated() */
    MoveToTargetAndShootAttackStyle(SaveGameData *);
    MoveToTargetAndShootAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~MoveToTargetAndShootAttackStyle() override;
    virtual void SetStateToStart() override;
    virtual AttackStyle::AttackStyleResult update(float) override;
    virtual _inline AttackStyle::AttackStyleType GetType() const override;
    virtual bool handleMoveRequest(vector3 const &) override;
    virtual bool canHandleMoveRequests() const override;
    virtual _inline Sob *getSobToNotAvoid() const override;
    virtual _inline bool doesAttackStyleDictateTargetPoint() override;
    enum AttackState
    {
        Initial = 0,
        GiveMoveToInRange,
        MovingToInRange,
        GiveMoveToSameHeight,
        MovingToSameHeight,
        GiveMoveToAboveTarget,
        MovingToAboveTarget,
        MovingToRequestedDestination,
        GiveClearLineOfFire,
        ClearingLineOfFire,
        NumberOfStates,
    };
protected:
    _inline MoveToTargetAndShootStatic const *getStaticInfo() const;
private:
    void moveToTarget(Sob const *);
    void moveToLevelOffsetWithTarget(Sob const *, float);
    void flyToAboveTarget(Ship *, WeaponTargetInfo const &, float);
    bool aboveTarget(Ship *, Sob *) const;
    void setState(MoveToTargetAndShootAttackStyle::AttackState);
    void transitionToState(MoveToTargetAndShootAttackStyle::AttackState);
    bool shouldWeTryToGetAboveTarget(Sob *);
    void clearLineOfFire(Ship *, WeaponTargetInfo const &);
    MoveToTargetAndShootAttackStyle::AttackState m_nState; // 0x90
    vector3 m_moveDestination; // 0x94
    float m_outOfRangeTime; // 0xA0
    float m_stateTransitionTime; // 0xA4
    MoveToTargetAndShootAttackStyle::AttackState m_desiredState; // 0xA8
    float m_timeToSucceed; // 0xAC
    bool m_canHandleMoveRequests; // 0xB0
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    MoveToTargetAndShootAttackStyle &operator=(MoveToTargetAndShootAttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(MoveToTargetAndShootAttackStyle) == 180, "Invalid MoveToTargetAndShootAttackStyle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6AF719(MoveToTargetAndShootStatic *const);
_inline MoveToTargetAndShootStatic::~MoveToTargetAndShootStatic() // 0x6AF719
{
    mangled_assert("??1MoveToTargetAndShootStatic@@UAE@XZ");
    todo("implement");
    _sub_6AF719(this);
}

_extern AttackStyle::AttackStyleType _sub_6AF775(MoveToTargetAndShootAttackStyle const *const);
_inline AttackStyle::AttackStyleType MoveToTargetAndShootAttackStyle::GetType() const // 0x6AF775
{
    mangled_assert("?GetType@MoveToTargetAndShootAttackStyle@@UBE?AW4AttackStyleType@AttackStyle@@XZ");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6AF775(this);
    return __result;
}

_extern Sob *_sub_6AFADC(MoveToTargetAndShootAttackStyle const *const);
_inline Sob *MoveToTargetAndShootAttackStyle::getSobToNotAvoid() const // 0x6AFADC
{
    mangled_assert("?getSobToNotAvoid@MoveToTargetAndShootAttackStyle@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6AFADC(this);
    return __result;
}

_extern bool _sub_6AF9B3(MoveToTargetAndShootAttackStyle *const);
_inline bool MoveToTargetAndShootAttackStyle::doesAttackStyleDictateTargetPoint() // 0x6AF9B3
{
    mangled_assert("?doesAttackStyleDictateTargetPoint@MoveToTargetAndShootAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AF9B3(this);
    return __result;
}

_extern MoveToTargetAndShootStatic const *_sub_6AFADF(MoveToTargetAndShootAttackStyle const *const);
_inline MoveToTargetAndShootStatic const *MoveToTargetAndShootAttackStyle::getStaticInfo() const // 0x6AFADF
{
    mangled_assert("?getStaticInfo@MoveToTargetAndShootAttackStyle@@IBEPBVMoveToTargetAndShootStatic@@XZ");
    todo("implement");
    MoveToTargetAndShootStatic const * __result = _sub_6AFADF(this);
    return __result;
}

_extern bool _sub_6AFBA0(MoveToTargetAndShootAttackStyle *const);
_inline bool MoveToTargetAndShootAttackStyle::isDeterministic() // 0x6AFBA0
{
    mangled_assert("?isDeterministic@MoveToTargetAndShootAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AFBA0(this);
    return __result;
}

_extern char const *_sub_6AFF97(MoveToTargetAndShootAttackStyle *const);
_inline char const *MoveToTargetAndShootAttackStyle::saveToken() // 0x6AFF97
{
    mangled_assert("?saveToken@MoveToTargetAndShootAttackStyle@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AFF97(this);
    return __result;
}

/* ---------- private code */

#endif // __MOVETOTARGETANDSHOOTATTACKSTYLE_H__
#endif

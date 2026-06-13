#if 0
#ifndef __FLYROUNDATTACKSTYLE_H__
#define __FLYROUNDATTACKSTYLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FlyRoundStatic :
    public AttackStyleStatic
{
public:
    FlyRoundStatic(FlyRoundStatic const &); /* compiler_generated() */
    FlyRoundStatic();
    virtual _inline ~FlyRoundStatic() override;
    virtual bool loadData(LuaConfig &) override;
    float m_axisRotation; // 0x24
    float m_circleSegmentAngle; // 0x28
    float m_cosMaxAxisRotation; // 0x2C
    float m_distanceFromTarget; // 0x30
    float m_percentChanceOfCuttingCircle; // 0x34
    float m_variationOnDistance; // 0x38
    float m_variationOnSegmentAngle; // 0x3C
    unsigned __int32 m_minSegmentsToCut; // 0x40
    unsigned __int32 m_maxSegmentsToCut; // 0x44
    float m_circleHeight; // 0x48
    FlyRoundStatic &operator=(FlyRoundStatic const &); /* compiler_generated() */
};
static_assert(sizeof(FlyRoundStatic) == 76, "Invalid FlyRoundStatic size");

class FlyRoundAttackStyle :
    public AttackStyle
{
public:
    FlyRoundAttackStyle(FlyRoundAttackStyle const &); /* compiler_generated() */
    FlyRoundAttackStyle(SaveGameData *);
    FlyRoundAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~FlyRoundAttackStyle() override;
    virtual AttackStyle::AttackStyleResult update(float) override;
    virtual _inline void SetStateToStart() override;
    virtual _inline AttackStyle::AttackStyleType GetType() const override;
    virtual _inline Sob *getSobToNotAvoid() const override;
    virtual _inline bool doesAttackStyleDictateTargetPoint() override;
protected:
    _inline FlyRoundStatic const *getStaticInfo() const;
private:
    vector3 calculateNextCirclePoint();
    void recalculateCircle(Ship *, Sob *);
    enum AttackState
    {
        Initial = 0,
        FlyingToPoint,
        PerformingAction,
        NUMBER_OF_ATTACK_STATES,
    };
    FlyRoundAttackStyle::AttackState m_State; // 0x90
    float m_circlestrafeRadius; // 0x94
    quat m_circleStrafeAdder; // 0x98
    quat m_circleStrafeCurrent; // 0xA8
    SobID m_circleStrafeTarget; // 0xB8
    vector3 m_Axis; // 0xC4
    bool m_bClockWise; // 0xD0
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    FlyRoundAttackStyle &operator=(FlyRoundAttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(FlyRoundAttackStyle) == 212, "Invalid FlyRoundAttackStyle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6B26BE(FlyRoundStatic *const);
_inline FlyRoundStatic::~FlyRoundStatic() // 0x6B26BE
{
    mangled_assert("??1FlyRoundStatic@@UAE@XZ");
    todo("implement");
    _sub_6B26BE(this);
}

_extern void _sub_6B270B(FlyRoundAttackStyle *const);
_inline void FlyRoundAttackStyle::SetStateToStart() // 0x6B270B
{
    mangled_assert("?SetStateToStart@FlyRoundAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6B270B(this);
}

_extern AttackStyle::AttackStyleType _sub_6B2707(FlyRoundAttackStyle const *const);
_inline AttackStyle::AttackStyleType FlyRoundAttackStyle::GetType() const // 0x6B2707
{
    mangled_assert("?GetType@FlyRoundAttackStyle@@UBE?AW4AttackStyleType@AttackStyle@@XZ");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6B2707(this);
    return __result;
}

_extern Sob *_sub_6B2A0F(FlyRoundAttackStyle const *const);
_inline Sob *FlyRoundAttackStyle::getSobToNotAvoid() const // 0x6B2A0F
{
    mangled_assert("?getSobToNotAvoid@FlyRoundAttackStyle@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B2A0F(this);
    return __result;
}

_extern bool _sub_6B2A0C(FlyRoundAttackStyle *const);
_inline bool FlyRoundAttackStyle::doesAttackStyleDictateTargetPoint() // 0x6B2A0C
{
    mangled_assert("?doesAttackStyleDictateTargetPoint@FlyRoundAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B2A0C(this);
    return __result;
}

_extern FlyRoundStatic const *_sub_6B2A12(FlyRoundAttackStyle const *const);
_inline FlyRoundStatic const *FlyRoundAttackStyle::getStaticInfo() const // 0x6B2A12
{
    mangled_assert("?getStaticInfo@FlyRoundAttackStyle@@IBEPBVFlyRoundStatic@@XZ");
    todo("implement");
    FlyRoundStatic const * __result = _sub_6B2A12(this);
    return __result;
}

_extern bool _sub_6B2A17(FlyRoundAttackStyle *const);
_inline bool FlyRoundAttackStyle::isDeterministic() // 0x6B2A17
{
    mangled_assert("?isDeterministic@FlyRoundAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B2A17(this);
    return __result;
}

_extern char const *_sub_6B335F(FlyRoundAttackStyle *const);
_inline char const *FlyRoundAttackStyle::saveToken() // 0x6B335F
{
    mangled_assert("?saveToken@FlyRoundAttackStyle@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6B335F(this);
    return __result;
}

/* ---------- private code */

#endif // __FLYROUNDATTACKSTYLE_H__
#endif

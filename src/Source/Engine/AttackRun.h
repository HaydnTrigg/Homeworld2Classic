#if 0
#ifndef __ATTACKRUN_H__
#define __ATTACKRUN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AttackRunStatic :
    public AttackStyleStatic
{
public:
    AttackRunStatic(AttackRunStatic const &); /* compiler_generated() */
    AttackRunStatic();
    virtual ~AttackRunStatic() override;
    virtual bool loadData(LuaConfig &) override;
    float m_distanceFromTargetAtWhichToBreak; // 0x24
    float m_safeDistanceFromTargetToDoActions; // 0x28
    float m_maxDistanceToTravelWhenBreaking; // 0x2C
    AttackRunStatic::CoordSysChoice m_coordSysChoice; // 0x30
    float m_horizontalMin; // 0x34
    float m_horizontalMax; // 0x38
    bool m_canInvertHorizontal; // 0x3C
    float m_verticalMin; // 0x40
    float m_verticalMax; // 0x44
    bool m_canInvertVertical; // 0x48
    enum CoordSysChoice
    {
        TargetPoint = 0,
        Target,
        Attacker,
        NUMBER_OF_TARGET_CHOICES,
    };
    static char const *getStringForCoordSysChoice(AttackRunStatic::CoordSysChoice n);
    AttackRunStatic &operator=(AttackRunStatic const &); /* compiler_generated() */
};
static_assert(sizeof(AttackRunStatic) == 76, "Invalid AttackRunStatic size");

class AttackRunAttackStyle :
    public AttackStyle
{
public:
    AttackRunAttackStyle(AttackRunAttackStyle const &); /* compiler_generated() */
    AttackRunAttackStyle(SaveGameData *);
    AttackRunAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~AttackRunAttackStyle() override;
    virtual AttackStyle::AttackStyleResult update(float) override;
    virtual _inline AttackStyle::AttackStyleType GetType() const override;
    virtual _inline bool doesAttackStyleDictateTargetPoint() override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual _inline void SetStateToStart() override;
protected:
    _inline AttackRunStatic const *getStaticInfo() const;
private:
    vector3 determineBreakDestination();
    void getUpOfEnemy(vector3 &, Sob *, WeaponTargetInfo const &, Ship *);
    enum AttackState
    {
        Initial = 0,
        FlyingToAbove,
        ApproachStart,
        ApproachMoving,
        KillStart,
        KillDoing,
        BreakStart,
        BreakDoing,
        PerformingAction,
        StartOver,
        NUMBER_OF_STATES,
    };
    AttackRunAttackStyle::AttackState m_State; // 0x90
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    AttackRunAttackStyle &operator=(AttackRunAttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(AttackRunAttackStyle) == 148, "Invalid AttackRunAttackStyle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline AttackStyle::AttackStyleType AttackRunAttackStyle::GetType() const // 0x6B51B0
{
    mangled_assert("?GetType@AttackRunAttackStyle@@UBE?AW4AttackStyleType@AttackStyle@@XZ");
    todo("implement");
}

_inline bool AttackRunAttackStyle::doesAttackStyleDictateTargetPoint() // 0x6B554B
{
    mangled_assert("?doesAttackStyleDictateTargetPoint@AttackRunAttackStyle@@UAE_NXZ");
    todo("implement");
}

_inline void AttackRunAttackStyle::SetStateToStart() // 0x6B51B4
{
    mangled_assert("?SetStateToStart@AttackRunAttackStyle@@UAEXXZ");
    todo("implement");
}

_inline AttackRunStatic const *AttackRunAttackStyle::getStaticInfo() const // 0x6B5589
{
    mangled_assert("?getStaticInfo@AttackRunAttackStyle@@IBEPBVAttackRunStatic@@XZ");
    todo("implement");
}

_inline bool AttackRunAttackStyle::isDeterministic() // 0x6B5633
{
    mangled_assert("?isDeterministic@AttackRunAttackStyle@@UAE_NXZ");
    todo("implement");
}

_inline char const *AttackRunAttackStyle::saveToken() // 0x6B577A
{
    mangled_assert("?saveToken@AttackRunAttackStyle@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ATTACKRUN_H__
#endif

#if 0
#ifndef __CIRCLESTRAFEBASE_H__
#define __CIRCLESTRAFEBASE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CircleStrafeBaseStatic :
    public AttackStyleStatic
{
public:
    CircleStrafeBaseStatic(CircleStrafeBaseStatic const &); /* compiler_generated() */
    _inline CircleStrafeBaseStatic();
    virtual _inline ~CircleStrafeBaseStatic() override;
    CircleStrafeBaseStatic &operator=(CircleStrafeBaseStatic const &); /* compiler_generated() */
};
static_assert(sizeof(CircleStrafeBaseStatic) == 36, "Invalid CircleStrafeBaseStatic size");

class CircleStrafeBase :
    public AttackStyle
{
public:
    CircleStrafeBase(CircleStrafeBase const &); /* compiler_generated() */
    CircleStrafeBase(SaveGameData *);
    CircleStrafeBase(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~CircleStrafeBase() = 0;
    virtual _inline void SetStateToStart() override;
    virtual AttackStyle::AttackStyleResult update(float) override;
    virtual vector3 getAxisOfCircle() = 0;
    virtual float getHeightOfCircle() = 0;
    virtual float getRadiusOfCircle() = 0;
    virtual bool getClockwiseCircle() = 0;
    virtual void startingToCircle();
    virtual bool shouldWeStopCircling();
protected:
    _inline CircleStrafeBaseStatic const *getStaticInfo() const;
    enum AttackState
    {
        Start = 0,
        MovingToTarget,
        StartCircling,
        CirclingTarget,
        Firing,
        NUMBER_OF_ATTACK_STATES,
    };
private:
    CircleStrafeBase::AttackState m_State; // 0x90
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    CircleStrafeBase &operator=(CircleStrafeBase const &); /* compiler_generated() */
};
static_assert(sizeof(CircleStrafeBase) == 148, "Invalid CircleStrafeBase size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline CircleStrafeBaseStatic::CircleStrafeBaseStatic() // 0x6AF032
{
    mangled_assert("??0CircleStrafeBaseStatic@@QAE@XZ");
    todo("implement");
}

_inline CircleStrafeBaseStatic::~CircleStrafeBaseStatic() // 0x6AF076
{
    mangled_assert("??1CircleStrafeBaseStatic@@UAE@XZ");
    todo("implement");
}

_inline void CircleStrafeBase::SetStateToStart() // 0x6AF0FA
{
    mangled_assert("?SetStateToStart@CircleStrafeBase@@UAEXXZ");
    todo("implement");
}

_inline CircleStrafeBaseStatic const *CircleStrafeBase::getStaticInfo() const // 0x6AF20A
{
    mangled_assert("?getStaticInfo@CircleStrafeBase@@IBEPBVCircleStrafeBaseStatic@@XZ");
    todo("implement");
}

_inline bool CircleStrafeBase::isDeterministic() // 0x6BD71B
{
    mangled_assert("?isDeterministic@CircleStrafeBase@@UAE_NXZ");
    todo("implement");
}

_inline char const *CircleStrafeBase::saveToken() // 0x6BD7B7
{
    mangled_assert("?saveToken@CircleStrafeBase@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CIRCLESTRAFEBASE_H__
#endif

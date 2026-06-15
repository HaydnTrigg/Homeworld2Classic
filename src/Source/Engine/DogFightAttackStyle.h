#if 0
#ifndef __DOGFIGHTATTACKSTYLE_H__
#define __DOGFIGHTATTACKSTYLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DogFightStatic :
    public AttackStyleStatic
{
public:
    DogFightStatic(DogFightStatic const &); /* compiler_generated() */
    DogFightStatic();
    virtual _inline ~DogFightStatic() override;
    virtual bool loadData(LuaConfig &) override;
    float m_minSpeedFraction; // 0x24
    DogFightStatic &operator=(DogFightStatic const &); /* compiler_generated() */
};
static_assert(sizeof(DogFightStatic) == 40, "Invalid DogFightStatic size");

class DogFightAttackStyle :
    public AttackStyle
{
public:
    DogFightAttackStyle(DogFightAttackStyle const &); /* compiler_generated() */
    DogFightAttackStyle(SaveGameData *);
    DogFightAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~DogFightAttackStyle() override;
    virtual AttackStyle::AttackStyleResult update(float) override;
    virtual _inline void SetStateToStart() override;
    virtual _inline AttackStyle::AttackStyleType GetType() const override;
    virtual _inline bool doesAttackStyleDictateTargetPoint() override;
protected:
    _inline DogFightStatic const *getStaticInfo() const;
    enum AttackState
    {
        Start = 0,
        TryingToGetBehind,
        PerformingAction,
        NUMBER_OF_STATES,
    };
private:
    DogFightAttackStyle::AttackState m_State; // 0x90
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    DogFightAttackStyle &operator=(DogFightAttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(DogFightAttackStyle) == 148, "Invalid DogFightAttackStyle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline DogFightStatic::~DogFightStatic() // 0x6AF370
{
    mangled_assert("??1DogFightStatic@@UAE@XZ");
    todo("implement");
}

_inline void DogFightAttackStyle::SetStateToStart() // 0x6AF3C3
{
    mangled_assert("?SetStateToStart@DogFightAttackStyle@@UAEXXZ");
    todo("implement");
}

_inline AttackStyle::AttackStyleType DogFightAttackStyle::GetType() const // 0x6AF3BF
{
    mangled_assert("?GetType@DogFightAttackStyle@@UBE?AW4AttackStyleType@AttackStyle@@XZ");
    todo("implement");
}

_inline bool DogFightAttackStyle::doesAttackStyleDictateTargetPoint() // 0x6AF3D3
{
    mangled_assert("?doesAttackStyleDictateTargetPoint@DogFightAttackStyle@@UAE_NXZ");
    todo("implement");
}

_inline DogFightStatic const *DogFightAttackStyle::getStaticInfo() const // 0x6AF3D6
{
    mangled_assert("?getStaticInfo@DogFightAttackStyle@@IBEPBVDogFightStatic@@XZ");
    todo("implement");
}

_inline bool DogFightAttackStyle::isDeterministic() // 0x6AF3DB
{
    mangled_assert("?isDeterministic@DogFightAttackStyle@@UAE_NXZ");
    todo("implement");
}

_inline char const *DogFightAttackStyle::saveToken() // 0x6AF49C
{
    mangled_assert("?saveToken@DogFightAttackStyle@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DOGFIGHTATTACKSTYLE_H__
#endif

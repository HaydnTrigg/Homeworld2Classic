#if 0
#ifndef __JUSTSHOOTATTACKSTYLE_H__
#define __JUSTSHOOTATTACKSTYLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class JustShootStatic :
    public AttackStyleStatic
{
public:
    JustShootStatic(JustShootStatic const &); /* compiler_generated() */
    JustShootStatic();
    virtual _inline ~JustShootStatic() override;
    virtual bool loadData(LuaConfig &) override;
    bool m_faceTargetHorizontal; // 0x24
    bool m_faceTargetVertical; // 0x25
    JustShootStatic &operator=(JustShootStatic const &); /* compiler_generated() */
};
static_assert(sizeof(JustShootStatic) == 40, "Invalid JustShootStatic size");

class JustShootAttackStyle :
    public AttackStyle
{
public:
    JustShootAttackStyle(JustShootAttackStyle const &); /* compiler_generated() */
    JustShootAttackStyle(SaveGameData *);
    JustShootAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~JustShootAttackStyle() override;
    virtual AttackStyle::AttackStyleResult update(float) override;
    virtual void SetStateToStart() override;
    virtual _inline AttackStyle::AttackStyleType GetType() const override;
    virtual _inline bool doesAttackStyleDictateTargetPoint() override;
protected:
    _inline JustShootStatic const *getStaticInfo() const;
    enum State
    {
        Initial = 0,
        DealingWithTarget,
        NUMBER_OF_STATES,
    };
    JustShootAttackStyle::State m_State; // 0x90
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    JustShootAttackStyle &operator=(JustShootAttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(JustShootAttackStyle) == 148, "Invalid JustShootAttackStyle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6B5E25(JustShootStatic *const);
_inline JustShootStatic::~JustShootStatic() // 0x6B5E25
{
    mangled_assert("??1JustShootStatic@@UAE@XZ");
    todo("implement");
    _sub_6B5E25(this);
}

_extern AttackStyle::AttackStyleType _sub_6B5E74(JustShootAttackStyle const *const);
_inline AttackStyle::AttackStyleType JustShootAttackStyle::GetType() const // 0x6B5E74
{
    mangled_assert("?GetType@JustShootAttackStyle@@UBE?AW4AttackStyleType@AttackStyle@@XZ");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6B5E74(this);
    return __result;
}

_extern bool _sub_6B5E87(JustShootAttackStyle *const);
_inline bool JustShootAttackStyle::doesAttackStyleDictateTargetPoint() // 0x6B5E87
{
    mangled_assert("?doesAttackStyleDictateTargetPoint@JustShootAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B5E87(this);
    return __result;
}

_extern JustShootStatic const *_sub_6B5E8A(JustShootAttackStyle const *const);
_inline JustShootStatic const *JustShootAttackStyle::getStaticInfo() const // 0x6B5E8A
{
    mangled_assert("?getStaticInfo@JustShootAttackStyle@@IBEPBVJustShootStatic@@XZ");
    todo("implement");
    JustShootStatic const * __result = _sub_6B5E8A(this);
    return __result;
}

_extern bool _sub_6B5E8F(JustShootAttackStyle *const);
_inline bool JustShootAttackStyle::isDeterministic() // 0x6B5E8F
{
    mangled_assert("?isDeterministic@JustShootAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B5E8F(this);
    return __result;
}

_extern char const *_sub_6B5F63(JustShootAttackStyle *const);
_inline char const *JustShootAttackStyle::saveToken() // 0x6B5F63
{
    mangled_assert("?saveToken@JustShootAttackStyle@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6B5F63(this);
    return __result;
}

/* ---------- private code */

#endif // __JUSTSHOOTATTACKSTYLE_H__
#endif

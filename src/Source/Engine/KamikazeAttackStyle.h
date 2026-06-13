#if 0
#ifndef __KAMIKAZEATTACKSTYLE_H__
#define __KAMIKAZEATTACKSTYLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class KamikazeStatic :
    public AttackStyleStatic
{
public:
    KamikazeStatic(KamikazeStatic const &); /* compiler_generated() */
    _inline KamikazeStatic();
    virtual _inline ~KamikazeStatic() override;
    KamikazeStatic &operator=(KamikazeStatic const &); /* compiler_generated() */
};
static_assert(sizeof(KamikazeStatic) == 36, "Invalid KamikazeStatic size");

class KamikazeAttackStyle :
    public AttackStyle
{
public:
    KamikazeAttackStyle(KamikazeAttackStyle const &); /* compiler_generated() */
    KamikazeAttackStyle(SaveGameData *);
    KamikazeAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~KamikazeAttackStyle() override;
    virtual AttackStyle::AttackStyleResult update(float) override;
    virtual _inline void SetStateToStart() override;
    virtual _inline AttackStyle::AttackStyleType GetType() const override;
    virtual _inline bool doesAttackStyleDictateTargetPoint() override;
protected:
    KamikazeStatic const *getStaticInfo() const;
    enum AttackState
    {
        Initial = 0,
        FlyingAt,
        PerformingAction,
        NUMBER_OF_ATTACK_STATES,
    };
private:
    KamikazeAttackStyle::AttackState m_State; // 0x90
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    KamikazeAttackStyle &operator=(KamikazeAttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(KamikazeAttackStyle) == 148, "Invalid KamikazeAttackStyle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6BB5CD(KamikazeStatic *const);
_inline KamikazeStatic::KamikazeStatic() // 0x6BB5CD
{
    mangled_assert("??0KamikazeStatic@@QAE@XZ");
    todo("implement");
    _sub_6BB5CD(this);
}

_extern void _sub_6BB6C0(KamikazeStatic *const);
_inline KamikazeStatic::~KamikazeStatic() // 0x6BB6C0
{
    mangled_assert("??1KamikazeStatic@@UAE@XZ");
    todo("implement");
    _sub_6BB6C0(this);
}

_extern void _sub_6B2368(KamikazeAttackStyle *const);
_inline void KamikazeAttackStyle::SetStateToStart() // 0x6B2368
{
    mangled_assert("?SetStateToStart@KamikazeAttackStyle@@UAEXXZ");
    todo("implement");
    _sub_6B2368(this);
}

_extern AttackStyle::AttackStyleType _sub_6B2364(KamikazeAttackStyle const *const);
_inline AttackStyle::AttackStyleType KamikazeAttackStyle::GetType() const // 0x6B2364
{
    mangled_assert("?GetType@KamikazeAttackStyle@@UBE?AW4AttackStyleType@AttackStyle@@XZ");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6B2364(this);
    return __result;
}

_extern bool _sub_6B2378(KamikazeAttackStyle *const);
_inline bool KamikazeAttackStyle::doesAttackStyleDictateTargetPoint() // 0x6B2378
{
    mangled_assert("?doesAttackStyleDictateTargetPoint@KamikazeAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B2378(this);
    return __result;
}

_extern bool _sub_6B237B(KamikazeAttackStyle *const);
_inline bool KamikazeAttackStyle::isDeterministic() // 0x6B237B
{
    mangled_assert("?isDeterministic@KamikazeAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B237B(this);
    return __result;
}

_extern char const *_sub_6B2417(KamikazeAttackStyle *const);
_inline char const *KamikazeAttackStyle::saveToken() // 0x6B2417
{
    mangled_assert("?saveToken@KamikazeAttackStyle@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6B2417(this);
    return __result;
}

/* ---------- private code */

#endif // __KAMIKAZEATTACKSTYLE_H__
#endif

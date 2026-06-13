#if 0
#ifndef __CIRCLESTRAFE_H__
#define __CIRCLESTRAFE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CircleStrafeStatic :
    public CircleStrafeBaseStatic
{
public:
    CircleStrafeStatic(CircleStrafeStatic const &); /* compiler_generated() */
    CircleStrafeStatic();
    virtual _inline ~CircleStrafeStatic() override;
    virtual bool loadData(LuaConfig &) override;
    float m_inRangeMultiplier; // 0x24
    float m_optimumRangeMultiplier; // 0x28
    float m_rangeMultiplierForHeight; // 0x2C
    CircleStrafeStatic &operator=(CircleStrafeStatic const &); /* compiler_generated() */
};
static_assert(sizeof(CircleStrafeStatic) == 48, "Invalid CircleStrafeStatic size");

class CircleStrafeAttackStyle :
    public CircleStrafeBase
{
public:
    CircleStrafeAttackStyle(CircleStrafeAttackStyle const &); /* compiler_generated() */
    CircleStrafeAttackStyle(SaveGameData *);
    CircleStrafeAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~CircleStrafeAttackStyle() override;
    virtual _inline AttackStyle::AttackStyleType GetType() const override;
    virtual vector3 getAxisOfCircle() override;
    virtual float getHeightOfCircle() override;
    virtual float getRadiusOfCircle() override;
    virtual bool getClockwiseCircle() override;
    virtual _inline bool doesAttackStyleDictateTargetPoint() override;
protected:
    _inline CircleStrafeStatic const *getStaticInfo() const;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    CircleStrafeAttackStyle &operator=(CircleStrafeAttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(CircleStrafeAttackStyle) == 148, "Invalid CircleStrafeAttackStyle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6AF081(CircleStrafeStatic *const);
_inline CircleStrafeStatic::~CircleStrafeStatic() // 0x6AF081
{
    mangled_assert("??1CircleStrafeStatic@@UAE@XZ");
    todo("implement");
    _sub_6AF081(this);
}

_extern AttackStyle::AttackStyleType _sub_6AF0F6(CircleStrafeAttackStyle const *const);
_inline AttackStyle::AttackStyleType CircleStrafeAttackStyle::GetType() const // 0x6AF0F6
{
    mangled_assert("?GetType@CircleStrafeAttackStyle@@UBE?AW4AttackStyleType@AttackStyle@@XZ");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6AF0F6(this);
    return __result;
}

_extern bool _sub_6AF109(CircleStrafeAttackStyle *const);
_inline bool CircleStrafeAttackStyle::doesAttackStyleDictateTargetPoint() // 0x6AF109
{
    mangled_assert("?doesAttackStyleDictateTargetPoint@CircleStrafeAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AF109(this);
    return __result;
}

_extern CircleStrafeStatic const *_sub_6AF205(CircleStrafeAttackStyle const *const);
_inline CircleStrafeStatic const *CircleStrafeAttackStyle::getStaticInfo() const // 0x6AF205
{
    mangled_assert("?getStaticInfo@CircleStrafeAttackStyle@@IBEPBVCircleStrafeStatic@@XZ");
    todo("implement");
    CircleStrafeStatic const * __result = _sub_6AF205(this);
    return __result;
}

_extern bool _sub_6AF219(CircleStrafeAttackStyle *const);
_inline bool CircleStrafeAttackStyle::isDeterministic() // 0x6AF219
{
    mangled_assert("?isDeterministic@CircleStrafeAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AF219(this);
    return __result;
}

_extern char const *_sub_6AF2FC(CircleStrafeAttackStyle *const);
_inline char const *CircleStrafeAttackStyle::saveToken() // 0x6AF2FC
{
    mangled_assert("?saveToken@CircleStrafeAttackStyle@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AF2FC(this);
    return __result;
}

/* ---------- private code */

#endif // __CIRCLESTRAFE_H__
#endif

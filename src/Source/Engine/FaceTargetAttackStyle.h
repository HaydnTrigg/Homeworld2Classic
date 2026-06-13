#if 0
#ifndef __FACETARGETATTACKSTYLE_H__
#define __FACETARGETATTACKSTYLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FaceTargetStatic :
    public AttackStyleStatic
{
public:
    FaceTargetStatic(FaceTargetStatic const &); /* compiler_generated() */
    FaceTargetStatic();
    virtual ~FaceTargetStatic() override;
    virtual bool loadData(LuaConfig &) override;
    float m_tooSlowSpeed; // 0x24
    float m_tooFastMultiplier; // 0x28
    float m_inRangeFactor; // 0x2C
    float m_facingAngle; // 0x30
    bool m_tryToGetAboveTarget; // 0x34
    float m_cosAngleFromUp; // 0x38
    float m_maxTimeToSpendFlyingToAbove; // 0x3C
    float *m_stateTransitionTimes; // 0x40
    bool m_tryToMatchHeight; // 0x44
    float m_slideDistanceMultiplier; // 0x48
    FaceTargetStatic &operator=(FaceTargetStatic const &); /* compiler_generated() */
};
static_assert(sizeof(FaceTargetStatic) == 76, "Invalid FaceTargetStatic size");

class FaceTargetAttackStyle :
    public AttackStyle
{
public:
    FaceTargetAttackStyle(FaceTargetAttackStyle const &); /* compiler_generated() */
    FaceTargetAttackStyle(SaveGameData *);
    FaceTargetAttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~FaceTargetAttackStyle() override;
    virtual _inline AttackStyle::AttackStyleType GetType() const override;
    virtual AttackStyle::AttackStyleResult update(float) override;
    virtual void SetStateToStart() override;
    virtual bool handleMoveRequest(vector3 const &) override;
    virtual bool canHandleMoveRequests() const override;
    virtual _inline Sob *getSobToNotAvoid() const override;
    virtual _inline bool doesAttackStyleDictateTargetPoint() override;
    enum AttackState
    {
        Initial = 0,
        GiveFlyToTarget,
        FlyingToTarget,
        GiveSlideToTarget,
        SlidingToTarget,
        GiveStopAndFace,
        InRangeAndFacingTarget,
        GiveFlyToAbove,
        FlyingToAboveTargetWhileFacing,
        MovingToRequestedDestination,
        PerformingAction,
        GiveClearLineOfFire,
        ClearingLineOfFire,
        NUMBER_OF_ATTACK_STATES,
    };
protected:
    _inline FaceTargetStatic const *getStaticInfo() const;
    virtual bool chooseInterpolationTarget() override;
    virtual bool interpolateTarget(float) override;
    float getFacing(Ship *, Sob *) const;
private:
    float getIdealRangeFromTarget(Ship *, WeaponTargetInfo const &) const;
    void moveToOffsetAndMaintain(Ship *, WeaponTargetInfo const &);
    void stopAndFace(Ship *, WeaponTargetInfo const &);
    void flyToTarget(Ship *, WeaponTargetInfo const &);
    vector3 getBestFiringPosition(Ship *, WeaponTargetInfo const &) const;
    void pointTo(Ship *, WeaponTargetInfo const &, FormationTargetInfo &);
    bool twoHeadingAwayFromOne(Sob *, Sob *) const;
    bool aboveTarget(Ship *, Sob *) const;
    void flyToAboveTarget(Ship *, WeaponTargetInfo const &);
    void clearLineOfFire(Ship *, WeaponTargetInfo const &);
    void setState(FaceTargetAttackStyle::AttackState);
    void transitionToState(FaceTargetAttackStyle::AttackState);
    bool shouldWeTryToGetAboveTarget(Sob *);
    FaceTargetAttackStyle::AttackState m_State; // 0x90
    vector3 m_moveDestination; // 0x94
    WeaponTargetInfo m_interpolationTarget; // 0xA0
    float m_stateTransitionTime; // 0xD4
    FaceTargetAttackStyle::AttackState m_desiredState; // 0xD8
    float m_timeToSucceed; // 0xDC
    bool m_canHandleMoveRequests; // 0xE0
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    FaceTargetAttackStyle &operator=(FaceTargetAttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(FaceTargetAttackStyle) == 228, "Invalid FaceTargetAttackStyle size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern AttackStyle::AttackStyleType _sub_6B3748(FaceTargetAttackStyle const *const);
_inline AttackStyle::AttackStyleType FaceTargetAttackStyle::GetType() const // 0x6B3748
{
    mangled_assert("?GetType@FaceTargetAttackStyle@@UBE?AW4AttackStyleType@AttackStyle@@XZ");
    todo("implement");
    AttackStyle::AttackStyleType __result = _sub_6B3748(this);
    return __result;
}

_extern Sob *_sub_6B408A(FaceTargetAttackStyle const *const);
_inline Sob *FaceTargetAttackStyle::getSobToNotAvoid() const // 0x6B408A
{
    mangled_assert("?getSobToNotAvoid@FaceTargetAttackStyle@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B408A(this);
    return __result;
}

_extern bool _sub_6B3A36(FaceTargetAttackStyle *const);
_inline bool FaceTargetAttackStyle::doesAttackStyleDictateTargetPoint() // 0x6B3A36
{
    mangled_assert("?doesAttackStyleDictateTargetPoint@FaceTargetAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B3A36(this);
    return __result;
}

_extern FaceTargetStatic const *_sub_6B408D(FaceTargetAttackStyle const *const);
_inline FaceTargetStatic const *FaceTargetAttackStyle::getStaticInfo() const // 0x6B408D
{
    mangled_assert("?getStaticInfo@FaceTargetAttackStyle@@IBEPBVFaceTargetStatic@@XZ");
    todo("implement");
    FaceTargetStatic const * __result = _sub_6B408D(this);
    return __result;
}

_extern bool _sub_6B4520(FaceTargetAttackStyle *const);
_inline bool FaceTargetAttackStyle::isDeterministic() // 0x6B4520
{
    mangled_assert("?isDeterministic@FaceTargetAttackStyle@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B4520(this);
    return __result;
}

_extern char const *_sub_6B48DE(FaceTargetAttackStyle *const);
_inline char const *FaceTargetAttackStyle::saveToken() // 0x6B48DE
{
    mangled_assert("?saveToken@FaceTargetAttackStyle@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6B48DE(this);
    return __result;
}

/* ---------- private code */

#endif // __FACETARGETATTACKSTYLE_H__
#endif

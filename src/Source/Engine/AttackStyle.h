#if 0
#ifndef __ATTACKSTYLE_H__
#define __ATTACKSTYLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AttackAction
{
public:
    enum AttackActionType
    {
        NoAction = 0,
        PickNewTarget,
        FlightManeuver,
        InterpolateTarget,
        MoveRoundTarget,
        NUMBER_OF_ATTACK_ACTION_TYPES,
    };
    static AttackAction::AttackActionType getAttackActionTypeFromString(char const *pszString);
    static char const *getStringFromAttackActionType(AttackAction::AttackActionType nType);
    _inline AttackAction();
    _inline ~AttackAction();
    AttackAction::AttackActionType m_Type; // 0x0
    float m_Param1; // 0x4
    float m_Param2; // 0x8
    unsigned __int32 m_fmaneuverID; // 0xC
    unsigned __int32 m_Priority; // 0x10
};
static_assert(sizeof(AttackAction) == 20, "Invalid AttackAction size");

class AttackStyle :
    public SaveObject
{
public:
    enum AttackStyleType
    {
        JustShootStyle = 0,
        MoveToTargetAndShootStyle,
        DogFightStyle,
        CircleStrafeStyle,
        FlyRoundStyle,
        FaceTargetStyle,
        KamikazeStyle,
        AttackRunStyle,
        NUMBER_OF_STYLES,
    };
    enum BreakStyleType
    {
        StraightAndScatter = 0,
        ClimbAndPeelOff,
        BreakImmediately,
        NUMBER_OF_BREAK_STYLES,
    };
    enum AttackStyleResult
    {
        Done = 0,
        StillProcessing,
        DoneAndReplaced,
    };
    static char const *getStringForAttackStyle(AttackStyle::AttackStyleType nType);
    static AttackStyle::AttackStyleType getAttackStyleFromString(char const *pszString);
    static AttackStyle *CreateAttackStyle(FormationAttackCommand const *pParent, Formation *pAttackers, Selection const &pTargets);
    static AttackStyle::AttackStyleType getAttackStyleTypeFor(Ship *pAttacker, Sob *pTarget);
    static char const *getStringForBreakStyle(AttackStyle::BreakStyleType nType);
    static AttackStyle::BreakStyleType getBreakStyleFromString(char const *pszString);
    static void exportAttackStyleEnums(LuaConfig &lc);
    AttackStyle(AttackStyle const &); /* compiler_generated() */
    AttackStyle(SaveGameData *);
    AttackStyle(FormationAttackCommand const *, Formation *, Selection const &, __int32);
    virtual ~AttackStyle() = 0;
    virtual void SetStateToStart() = 0;
    virtual bool doesAttackStyleDictateTargetPoint() = 0;
    virtual AttackStyle::AttackStyleResult update(float) = 0;
    virtual AttackStyle::AttackStyleType GetType() const = 0;
    _inline Selection const &getTargetList();
    virtual Sob *getSobToNotAvoid() const;
    _inline Sob *getTargetNonDeterministicSafe() const;
    virtual _inline bool handleMoveRequest(vector3 const &);
    virtual _inline bool canHandleMoveRequests() const;
    bool handleNewTargets(Selection const &);
    _inline __int32 getTargetAttackFamily() const;
protected:
    _inline WeaponTargetInfo const &GetCurrentTarget() const;
    WeaponTargetInfo const &GetAndUpdateCurrentTarget();
    void updateCurrentTargetPoint(vector3 const &);
    _inline float GetRangeToCurrentTarget() const;
    void PickFreshTarget();
    AttackStyleStatic const *getStaticInfo() const;
    void RepickAttackPointOnTarget();
    float getHealthOfOurShips();
    _inline float getTime();
    void setTime(float);
    bool PerformActions();
    bool ActionFinished();
    virtual _inline bool chooseInterpolationTarget();
    virtual _inline bool interpolateTarget(float);
    FormationAttackCommand const *m_pParent; // 0xC
    Formation *m_pAttackers; // 0x10
    Selection m_Targets; // 0x14
private:
    WeaponTargetInfo m_CurrentTarget; // 0x48
    float m_rangeToCurrentTarget; // 0x7C
    float m_Time; // 0x80
    float m_nLastRecordedHealth; // 0x84
    AttackAction::AttackActionType m_currentActionType; // 0x88
    __int32 m_targetAttackFamily; // 0x8C
    bool PerformAction(AttackAction *);
    Sob *findBestTarget();
    void processActions(float);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    AttackStyle &operator=(AttackStyle const &); /* compiler_generated() */
};
static_assert(sizeof(AttackStyle) == 144, "Invalid AttackStyle size");

class AttackStyleStatic
{
public:
    AttackStyleStatic(AttackStyleStatic const &); /* compiler_generated() */
    AttackStyleStatic();
    virtual ~AttackStyleStatic();
    virtual bool loadData(LuaConfig &);
    static AttackStyleStatic *createStatic(AttackStyle::AttackStyleType type);
    AttackStyle::BreakStyleType m_BreakType; // 0x4
    std::list<AttackAction *,std::allocator<AttackAction *> > m_RandomActions; // 0x8
    std::list<AttackAction *,std::allocator<AttackAction *> > m_BeingAttackedActions; // 0x10
    std::list<AttackAction *,std::allocator<AttackAction *> > m_FireActions; // 0x18
    float m_moveAttackMaxDistanceMultiplier; // 0x20
private:
    void deleteActions(std::list<AttackAction *,std::allocator<AttackAction *> > &);
    void loadActions(char const *, std::list<AttackAction *,std::allocator<AttackAction *> > &, LuaConfig &);
    AttackAction *loadAction(LuaConfig &);
public:
    AttackStyleStatic &operator=(AttackStyleStatic const &); /* compiler_generated() */
};
static_assert(sizeof(AttackStyleStatic) == 36, "Invalid AttackStyleStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline AttackAction::AttackAction() // 0x6BB47E
{
    mangled_assert("??0AttackAction@@QAE@XZ");
    todo("implement");
}

_inline AttackAction::~AttackAction() // 0x6BB603
{
    mangled_assert("??1AttackAction@@QAE@XZ");
    todo("implement");
}

_inline Selection const &AttackStyle::getTargetList() // 0x6B0F68
{
    mangled_assert("?getTargetList@AttackStyle@@QAEABVSelection@@XZ");
    todo("implement");
}

_inline Sob *AttackStyle::getTargetNonDeterministicSafe() const // 0x6B0F6C
{
    mangled_assert("?getTargetNonDeterministicSafe@AttackStyle@@QBEPAVSob@@XZ");
    todo("implement");
}

_inline bool AttackStyle::handleMoveRequest(vector3 const &) // 0x6AF20F
{
    mangled_assert("?handleMoveRequest@AttackStyle@@UAE_NABVvector3@@@Z");
    todo("implement");
}

_inline bool AttackStyle::canHandleMoveRequests() const // 0x6AF102
{
    mangled_assert("?canHandleMoveRequests@AttackStyle@@UBE_NXZ");
    todo("implement");
}

_inline __int32 AttackStyle::getTargetAttackFamily() const // 0x6BC896
{
    mangled_assert("?getTargetAttackFamily@AttackStyle@@QBEHXZ");
    todo("implement");
}

_inline WeaponTargetInfo const &AttackStyle::GetCurrentTarget() const // 0x6AF0F2
{
    mangled_assert("?GetCurrentTarget@AttackStyle@@IBEABVWeaponTargetInfo@@XZ");
    todo("implement");
}

_inline float AttackStyle::GetRangeToCurrentTarget() const // 0x6AF771
{
    mangled_assert("?GetRangeToCurrentTarget@AttackStyle@@IBEMXZ");
    todo("implement");
}

_inline float AttackStyle::getTime() // 0x6B55BA
{
    mangled_assert("?getTime@AttackStyle@@IAEMXZ");
    todo("implement");
}

_inline bool AttackStyle::chooseInterpolationTarget() // 0x6AF105
{
    mangled_assert("?chooseInterpolationTarget@AttackStyle@@MAE_NXZ");
    todo("implement");
}

_inline bool AttackStyle::interpolateTarget(float) // 0x6AF214
{
    mangled_assert("?interpolateTarget@AttackStyle@@MAE_NM@Z");
    todo("implement");
}

_inline bool AttackStyle::isDeterministic() // 0x6BC8E7
{
    mangled_assert("?isDeterministic@AttackStyle@@UAE_NXZ");
    todo("implement");
}

_inline char const *AttackStyle::saveToken() // 0x6BCC4E
{
    mangled_assert("?saveToken@AttackStyle@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ATTACKSTYLE_H__
#endif

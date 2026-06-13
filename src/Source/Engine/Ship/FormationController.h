#if 0
#ifndef __FORMATIONCONTROLLER_H__
#define __FORMATIONCONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ForceBehaviour
{
    ForceBehaviour_None = 0,
    ForceBehaviour_Close,
    ForceBehaviour_Far,
};

/* ---------- definitions */

class FormationController :
    public AdvRigidBodyController
{
public:
    FormationController(FormationController const &); /* compiler_generated() */
    FormationController(SaveGameData *);
    FormationController();
    virtual ~FormationController() override;
    _inline DynamicPoint const &getGoal();
    void setGoal(DynamicPoint const &);
    bool reachedGoal(bool, float) const;
    _inline void setGoalReachEpsilon(float);
    _inline float getGoalReachEpsilonSqr();
    void setForwardEpsilon(float);
    _inline float getForwardEpsilonSqr();
    void setUpEpsilon(float);
    _inline float getUpEpsilonSqr();
    _inline void setPointInDirectionFlying(bool);
    DynamicPoint const &getPointToTarget() const;
    float getPointToTargetAngle() const;
    _inline void setPointToTarget(DynamicPoint const &, float);
    _inline void setForceBehaviour(ForceBehaviour);
    _inline void setMatchGoalHeading(bool);
    void mirror();
    _inline void setNeverReturnFinished(bool);
    _inline void setDontSlowDown(bool);
    _inline void setUseMaxSpeed(bool, float);
    _inline void setUseMinSpeed(bool, float);
    _inline void setEnforceMaximumAngles(bool);
    _inline bool getEnforceMaximumAngles();
    _inline bool isNewGoal();
    _inline void setThrusterUsage(float);
    _inline void setCosAccelerationAngle(float);
    void stop();
protected:
    virtual void doBehaviour(float) override;
    void doCloseToDestinationBehaviour(float);
    void doFarFromDestinationBehaviour(float);
    void doHeading(vector3 const &, vector3 const &);
    bool isTargetInDescentPath(vector3 const &);
    virtual void doStabilize(float);
    void doAngleToTarget(vector3 &, vector3 &);
    float m_positionEpsilonSqr; // 0x9C
    float m_forwardEpsilonSqr; // 0xA0
    float m_upEpsilonSqr; // 0xA4
    bool m_pointInDirectionFlying; // 0xA8
    bool m_newGoal; // 0xA9
    DynamicPoint m_goal; // 0xAC
    DynamicPoint m_target; // 0x168
    float m_angleToTarget; // 0x224
    bool m_slowDownAtGoal; // 0x228
    bool m_neverReturnFinished; // 0x229
    bool m_matchGoalHeading; // 0x22A
    ForceBehaviour m_forceBehaviour; // 0x22C
    bool m_useMaxSpeed; // 0x230
    float m_maxSpeed; // 0x234
    bool m_useMinSpeed; // 0x238
    float m_minSpeed; // 0x23C
    float m_thrusterUsage; // 0x240
    bool m_enforceMaximumAngles; // 0x244
    float m_cosAccelerationAngle; // 0x248
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    FormationController &operator=(FormationController const &); /* compiler_generated() */
};
static_assert(sizeof(FormationController) == 588, "Invalid FormationController size");

class FormationController :
    public AdvRigidBodyController
{
public:
    FormationController(FormationController const &); /* compiler_generated() */
    FormationController(SaveGameData *);
    FormationController();
    virtual ~FormationController() override;
    _inline DynamicPoint const &getGoal();
    void setGoal(DynamicPoint const &);
    bool reachedGoal(bool, float) const;
    _inline void setGoalReachEpsilon(float);
    _inline float getGoalReachEpsilonSqr();
    void setForwardEpsilon(float);
    _inline float getForwardEpsilonSqr();
    void setUpEpsilon(float);
    _inline float getUpEpsilonSqr();
    _inline void setPointInDirectionFlying(bool);
    DynamicPoint const &getPointToTarget() const;
    float getPointToTargetAngle() const;
    _inline void setPointToTarget(DynamicPoint const &, float);
    _inline void setForceBehaviour(ForceBehaviour);
    _inline void setMatchGoalHeading(bool);
    void mirror();
    _inline void setNeverReturnFinished(bool);
    _inline void setDontSlowDown(bool);
    _inline void setUseMaxSpeed(bool, float);
    _inline void setUseMinSpeed(bool, float);
    _inline void setEnforceMaximumAngles(bool);
    _inline bool getEnforceMaximumAngles();
    _inline bool isNewGoal();
    _inline void setThrusterUsage(float);
    _inline void setCosAccelerationAngle(float);
    void stop();
protected:
    virtual void doBehaviour(float) override;
    void doCloseToDestinationBehaviour(float);
    void doFarFromDestinationBehaviour(float);
    void doHeading(vector3 const &, vector3 const &);
    bool isTargetInDescentPath(vector3 const &);
    virtual void doStabilize(float);
    void doAngleToTarget(vector3 &, vector3 &);
    float m_positionEpsilonSqr; // 0x9C
    float m_forwardEpsilonSqr; // 0xA0
    float m_upEpsilonSqr; // 0xA4
    bool m_pointInDirectionFlying; // 0xA8
    bool m_newGoal; // 0xA9
    DynamicPoint m_goal; // 0xAC
    DynamicPoint m_target; // 0x168
    float m_angleToTarget; // 0x224
    bool m_slowDownAtGoal; // 0x228
    bool m_neverReturnFinished; // 0x229
    bool m_matchGoalHeading; // 0x22A
    ForceBehaviour m_forceBehaviour; // 0x22C
    bool m_useMaxSpeed; // 0x230
    float m_maxSpeed; // 0x234
    bool m_useMinSpeed; // 0x238
    float m_minSpeed; // 0x23C
    float m_thrusterUsage; // 0x240
    bool m_enforceMaximumAngles; // 0x244
    float m_cosAccelerationAngle; // 0x248
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    FormationController &operator=(FormationController const &); /* compiler_generated() */
};
static_assert(sizeof(FormationController) == 588, "Invalid FormationController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern DynamicPoint const &_sub_65799D(FormationController *const);
_inline DynamicPoint const &FormationController::getGoal() // 0x65799D
{
    mangled_assert("?getGoal@FormationController@@QAEABVDynamicPoint@@XZ");
    todo("implement");
    DynamicPoint const & __result = _sub_65799D(this);
    return __result;
}

_extern void _sub_658C97(FormationController *const, float);
_inline void FormationController::setGoalReachEpsilon(float) // 0x658C97
{
    mangled_assert("?setGoalReachEpsilon@FormationController@@QAEXM@Z");
    todo("implement");
    _sub_658C97(this, arg);
}

_extern float _sub_6579A4(FormationController *const);
_inline float FormationController::getGoalReachEpsilonSqr() // 0x6579A4
{
    mangled_assert("?getGoalReachEpsilonSqr@FormationController@@QAEMXZ");
    todo("implement");
    float __result = _sub_6579A4(this);
    return __result;
}

_extern float _sub_657996(FormationController *const);
_inline float FormationController::getForwardEpsilonSqr() // 0x657996
{
    mangled_assert("?getForwardEpsilonSqr@FormationController@@QAEMXZ");
    todo("implement");
    float __result = _sub_657996(this);
    return __result;
}

_extern float _sub_657C0F(FormationController *const);
_inline float FormationController::getUpEpsilonSqr() // 0x657C0F
{
    mangled_assert("?getUpEpsilonSqr@FormationController@@QAEMXZ");
    todo("implement");
    float __result = _sub_657C0F(this);
    return __result;
}

_extern void _sub_4B569F(FormationController *const, bool);
_inline void FormationController::setPointInDirectionFlying(bool) // 0x4B569F
{
    mangled_assert("?setPointInDirectionFlying@FormationController@@QAEX_N@Z");
    todo("implement");
    _sub_4B569F(this, arg);
}

_extern void _sub_658DDF(FormationController *const, DynamicPoint const &, float);
_inline void FormationController::setPointToTarget(DynamicPoint const &, float) // 0x658DDF
{
    mangled_assert("?setPointToTarget@FormationController@@QAEXABVDynamicPoint@@M@Z");
    todo("implement");
    _sub_658DDF(this, arg, arg);
}

_extern void _sub_658C8A(FormationController *const, ForceBehaviour);
_inline void FormationController::setForceBehaviour(ForceBehaviour) // 0x658C8A
{
    mangled_assert("?setForceBehaviour@FormationController@@QAEXW4ForceBehaviour@@@Z");
    todo("implement");
    _sub_658C8A(this, arg);
}

_extern void _sub_658CAC(FormationController *const, bool);
_inline void FormationController::setMatchGoalHeading(bool) // 0x658CAC
{
    mangled_assert("?setMatchGoalHeading@FormationController@@QAEX_N@Z");
    todo("implement");
    _sub_658CAC(this, arg);
}

_extern void _sub_658D2A(FormationController *const, bool);
_inline void FormationController::setNeverReturnFinished(bool) // 0x658D2A
{
    mangled_assert("?setNeverReturnFinished@FormationController@@QAEX_N@Z");
    todo("implement");
    _sub_658D2A(this, arg);
}

_extern void _sub_658C6C(FormationController *const, bool);
_inline void FormationController::setDontSlowDown(bool) // 0x658C6C
{
    mangled_assert("?setDontSlowDown@FormationController@@QAEX_N@Z");
    todo("implement");
    _sub_658C6C(this, arg);
}

_extern void _sub_659115(FormationController *const, bool, float);
_inline void FormationController::setUseMaxSpeed(bool, float) // 0x659115
{
    mangled_assert("?setUseMaxSpeed@FormationController@@QAEX_NM@Z");
    todo("implement");
    _sub_659115(this, arg, arg);
}

_extern void _sub_659130(FormationController *const, bool, float);
_inline void FormationController::setUseMinSpeed(bool, float) // 0x659130
{
    mangled_assert("?setUseMinSpeed@FormationController@@QAEX_NM@Z");
    todo("implement");
    _sub_659130(this, arg, arg);
}

_extern void _sub_658C7D(FormationController *const, bool);
_inline void FormationController::setEnforceMaximumAngles(bool) // 0x658C7D
{
    mangled_assert("?setEnforceMaximumAngles@FormationController@@QAEX_N@Z");
    todo("implement");
    _sub_658C7D(this, arg);
}

_extern bool _sub_657511(FormationController *const);
_inline bool FormationController::getEnforceMaximumAngles() // 0x657511
{
    mangled_assert("?getEnforceMaximumAngles@FormationController@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_657511(this);
    return __result;
}

_extern bool _sub_657C67(FormationController *const);
_inline bool FormationController::isNewGoal() // 0x657C67
{
    mangled_assert("?isNewGoal@FormationController@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_657C67(this);
    return __result;
}

_extern void _sub_65901C(FormationController *const, float);
_inline void FormationController::setThrusterUsage(float) // 0x65901C
{
    mangled_assert("?setThrusterUsage@FormationController@@QAEXM@Z");
    todo("implement");
    _sub_65901C(this, arg);
}

_extern void _sub_658C5B(FormationController *const, float);
_inline void FormationController::setCosAccelerationAngle(float) // 0x658C5B
{
    mangled_assert("?setCosAccelerationAngle@FormationController@@QAEXM@Z");
    todo("implement");
    _sub_658C5B(this, arg);
}

_extern bool _sub_4B526C(FormationController *const);
_inline bool FormationController::isDeterministic() // 0x4B526C
{
    mangled_assert("?isDeterministic@FormationController@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4B526C(this);
    return __result;
}

_extern char const *_sub_4B567C(FormationController *const);
_inline char const *FormationController::saveToken() // 0x4B567C
{
    mangled_assert("?saveToken@FormationController@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B567C(this);
    return __result;
}

/* ---------- private code */

#endif // __FORMATIONCONTROLLER_H__
#endif

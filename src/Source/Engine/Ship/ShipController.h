#if 0
#ifndef __SHIPCONTROLLER_H__
#define __SHIPCONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ShipController :
    public AdvRigidBodyController
{
public:
    typedef AdvRigidBodyController SuperClass;
    ShipController(ShipController const &); /* compiler_generated() */
    ShipController(SaveGameData *);
    ShipController();
    virtual ~ShipController() override;
    void setGoal(DynamicPoint const &);
    void stop();
    _inline void setStopAtGoal(bool);
    _inline bool getStopAtGoal() const;
    enum PointToBehaviour
    {
        PointInDirFlying = 0,
        PointAtTarget,
        PointInHeadingGoal,
    };
    _inline void setPointToBehaviour(ShipController::PointToBehaviour);
    _inline void setPointToTarget(DynamicPoint const &, float);
    _inline void setMaxSpeed(float);
    _inline float getMaxSpeed() const;
    _inline void setUseMaxSpeed(bool);
    bool getUseMaxSpeed() const;
    _inline void setEnforceMaximumAngles(bool);
    bool getEnforceMaximumAngles() const;
    _inline void setGoalReachEpsilon(float);
    _inline float getThrusterUsage() const;
    _inline void setThrusterUsage(float);
    virtual void doBehaviour(float) override;
    virtual void doFrameCleanup() override;
    bool avoidingForALongTime() const;
protected:
    virtual void doNormalBehaviour(float);
    DynamicPoint m_finalGoal; // 0x9C
    DynamicPoint m_goal; // 0x158
    ShipController::PointToBehaviour m_pointToBehaviour; // 0x214
    DynamicPoint m_pointToTarget; // 0x218
    float m_positionEpsilonSqr; // 0x2D4
    float m_forwardEpsilon; // 0x2D8
    float m_upEpsilon; // 0x2DC
    float m_thrusterUsage; // 0x2E0
    float m_angleToTarget; // 0x2E4
    float m_maxSpeed; // 0x2E8
    bool m_stopAtGoal; // 0x2EC
    bool m_flyStraighToTarget; // 0x2ED
    bool m_useMaxSpeed; // 0x2EE
    bool m_enforceMaximumAngles; // 0x2EF
    ShipController::MovementState m_movementState; // 0x2F0
    bool m_flightManeuverFinished; // 0x2F4
    unsigned __int32 m_flightManeuverID; // 0x2F8
    unsigned __int32 m_flightManeuverCurrentPoint; // 0x2FC
    float m_flightManeuverTimeCurrentPoint; // 0x300
    matrix3 m_flightManeuverSpace; // 0x304
    float m_flightManeuverPreDelay; // 0x328
    PathFinder *m_pathFinder; // 0x32C
    vector3 m_avoidExtent; // 0x330
private:
    unsigned __int32 m_avoidanceTurnsCount; // 0x33C
protected:
    void doFarFromDestinationBehaviour(float);
    void doCloseToDestinationBehaviour(float);
    void doAngleToTarget(vector3 &, vector3 &);
    virtual void doHeading(vector3 const &, vector3 const &, bool);
public:
    void performFlightManeuver(unsigned __int32, float);
    _inline bool isFlightManeuverFinished() const;
    _inline bool isFlightManeuverInProgress() const;
protected:
    void doFlightManeuver(float);
    void doFlightManeuverHeading(vector3 const &, vector3 const &);
    bool reachedFlightManeuverPoint(float);
    enum MovementState
    {
        Movement_Normal = 0,
        Movement_FlightManeuver,
    };
public:
    void avoid(Sob const *);
    _inline void setExtent(vector3 const &);
protected:
    void doAvoidance();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    ShipController &operator=(ShipController const &); /* compiler_generated() */
};
static_assert(sizeof(ShipController) == 832, "Invalid ShipController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void ShipController::setStopAtGoal(bool) // 0x488A85
{
    mangled_assert("?setStopAtGoal@ShipController@@QAEX_N@Z");
    todo("implement");
}

_inline bool ShipController::getStopAtGoal() const // 0x49BA92
{
    mangled_assert("?getStopAtGoal@ShipController@@QBE_NXZ");
    todo("implement");
}

_inline void ShipController::setPointToBehaviour(ShipController::PointToBehaviour) // 0x48F910
{
    mangled_assert("?setPointToBehaviour@ShipController@@QAEXW4PointToBehaviour@1@@Z");
    todo("implement");
}

_inline void ShipController::setPointToTarget(DynamicPoint const &, float) // 0x48F949
{
    mangled_assert("?setPointToTarget@ShipController@@QAEXABVDynamicPoint@@M@Z");
    todo("implement");
}

_inline void ShipController::setMaxSpeed(float) // 0x488A3D
{
    mangled_assert("?setMaxSpeed@ShipController@@QAEXM@Z");
    todo("implement");
}

_inline float ShipController::getMaxSpeed() const // 0x49BA8B
{
    mangled_assert("?getMaxSpeed@ShipController@@QBEMXZ");
    todo("implement");
}

_inline void ShipController::setUseMaxSpeed(bool) // 0x488ADA
{
    mangled_assert("?setUseMaxSpeed@ShipController@@QAEX_N@Z");
    todo("implement");
}

_inline void ShipController::setEnforceMaximumAngles(bool) // 0x48F6B7
{
    mangled_assert("?setEnforceMaximumAngles@ShipController@@QAEX_N@Z");
    todo("implement");
}

_inline void ShipController::setGoalReachEpsilon(float) // 0x4889E6
{
    mangled_assert("?setGoalReachEpsilon@ShipController@@QAEXM@Z");
    todo("implement");
}

_inline float ShipController::getThrusterUsage() const // 0x49AF09
{
    mangled_assert("?getThrusterUsage@ShipController@@QBEMXZ");
    todo("implement");
}

_inline void ShipController::setThrusterUsage(float) // 0x488AC9
{
    mangled_assert("?setThrusterUsage@ShipController@@QAEXM@Z");
    todo("implement");
}

_inline bool ShipController::isFlightManeuverFinished() const // 0x48DED4
{
    mangled_assert("?isFlightManeuverFinished@ShipController@@QBE_NXZ");
    todo("implement");
}

_inline bool ShipController::isFlightManeuverInProgress() const // 0x48DEDB
{
    mangled_assert("?isFlightManeuverInProgress@ShipController@@QBE_NXZ");
    todo("implement");
}

_inline void ShipController::setExtent(vector3 const &) // 0x48F6C4
{
    mangled_assert("?setExtent@ShipController@@QAEXABVvector3@@@Z");
    todo("implement");
}

_inline bool ShipController::isDeterministic() // 0x49AF10
{
    mangled_assert("?isDeterministic@ShipController@@UAE_NXZ");
    todo("implement");
}

_inline char const *ShipController::saveToken() // 0x49B1D9
{
    mangled_assert("?saveToken@ShipController@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SHIPCONTROLLER_H__
#endif

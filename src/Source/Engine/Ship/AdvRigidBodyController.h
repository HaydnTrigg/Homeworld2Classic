#if 0
#ifndef __ADVRIGIDBODYCONTROLLER_H__
#define __ADVRIGIDBODYCONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AdvRigidBodyController :
    public RigidBodyController
{
public:
    typedef RigidBodyController SuperClass;
    AdvRigidBodyController(AdvRigidBodyController const &); /* compiler_generated() */
protected:
    AdvRigidBodyController(SaveGameData *);
public:
    AdvRigidBodyController();
    virtual ~AdvRigidBodyController() override;
    virtual void applyForcesAndTorques(float) override;
    _inline void setThrusterAcceleration(float);
    _inline void setMainEngineAcceleration(float);
    _inline void setRotationAcceleration(float);
    _inline void setThrusterBrake(float);
    _inline void setMainEngineBrake(float);
    _inline void setRotationBrake(float);
    _inline void setThrusterMaxSpeed(float);
    _inline void setMainEngineMaxSpeed(float);
    _inline void setRotationMaxSpeed(float);
    _inline void setDescendPitch(float);
    _inline void setMaxBankAmount(float);
    float getThrusterAcceleration();
    float getMainEngineAcceleration();
    float getRotationAcceleration();
    float getThrusterBrake();
    float getMainEngineBrake();
    float getRotationBrake();
    float getThrusterMaxSpeed();
    _inline float getMainEngineMaxSpeed();
    _inline float getRotationMaxSpeed();
    float getDescendPitch();
    _inline float getMaxBankAmount();
    _inline float getMaxStopDistance();
    _inline float getWishForwardBackwardSpeed();
    float getWishLeftRightSpeed();
    float getWishUpDownSpeed();
    _inline float getWishTurnXAxisSpeed();
    _inline float getWishTurnYAxisSpeed();
    float getWishTurnZAxisSpeed();
    _inline float getForwardBackwardThrust();
    _inline float getHorizonalRotationThrust();
    _inline float getVerticalRotationThrust();
    _inline bool getEnabled();
    _inline void setEnabled(bool);
protected:
    bool m_enabled; // 0x10
    float m_wishForwardBackwardSpeed; // 0x14
    float m_wishLeftRightSpeed; // 0x18
    float m_wishUpDownSpeed; // 0x1C
    float m_wishTurnXAxisSpeed; // 0x20
    float m_wishTurnYAxisSpeed; // 0x24
    float m_wishTurnZAxisSpeed; // 0x28
    float m_lastForwardBackwardThrust; // 0x2C
    float m_lastHorizonalRotationThrust; // 0x30
    float m_lastVerticalRotationThrust; // 0x34
    float m_maxStopDistance; // 0x38
    float m_thrusterAccel; // 0x3C
    float m_mainEngineAccel; // 0x40
    float m_rotationAccel; // 0x44
    float m_thrusterBrake; // 0x48
    float m_mainEngineBrake; // 0x4C
    float m_rotationBrake; // 0x50
    float m_thrusterMaxSpeed; // 0x54
    float m_mainEngineMaxSpeed; // 0x58
    float m_rotationMaxSpeed; // 0x5C
    float m_descendPitch; // 0x60
    float m_maxBankingAmount; // 0x64
    matrix3 m_cachedMatrix; // 0x68
    bool m_ignoreMaximumSpeeds; // 0x8C
    float m_multiplierMainAccel; // 0x90
    float m_multiplierThrusterAccel; // 0x94
    float m_multiplierRotationAccel; // 0x98
    virtual void doBehaviour(float) = 0;
    virtual _inline void doFrameCleanup();
    void recalcMaxStopDistance();
    void doThruster(float, vector3 const &, float, float, float, float, float *);
    void doTurnThruster(float, vector3 const &, float, float, float, float, float *);
    void adjustHeadingAndUpForMaximumAngles(vector3 &, vector3 &);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
public:
    static bool initTweaks();
    static bool registerTweaks();
protected:
    static float spaceFriction;
public:
    AdvRigidBodyController &operator=(AdvRigidBodyController const &); /* compiler_generated() */
};
static_assert(sizeof(AdvRigidBodyController) == 156, "Invalid AdvRigidBodyController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_488A9F(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setThrusterAcceleration(float) // 0x488A9F
{
    mangled_assert("?setThrusterAcceleration@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488A9F(this, arg);
}

_extern void _sub_4889FB(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setMainEngineAcceleration(float) // 0x4889FB
{
    mangled_assert("?setMainEngineAcceleration@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_4889FB(this, arg);
}

_extern void _sub_488A5B(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setRotationAcceleration(float) // 0x488A5B
{
    mangled_assert("?setRotationAcceleration@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488A5B(this, arg);
}

_extern void _sub_488AAD(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setThrusterBrake(float) // 0x488AAD
{
    mangled_assert("?setThrusterBrake@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488AAD(this, arg);
}

_extern void _sub_488A09(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setMainEngineBrake(float) // 0x488A09
{
    mangled_assert("?setMainEngineBrake@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488A09(this, arg);
}

_extern void _sub_488A69(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setRotationBrake(float) // 0x488A69
{
    mangled_assert("?setRotationBrake@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488A69(this, arg);
}

_extern void _sub_488ABB(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setThrusterMaxSpeed(float) // 0x488ABB
{
    mangled_assert("?setThrusterMaxSpeed@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488ABB(this, arg);
}

_extern void _sub_488A1C(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setMainEngineMaxSpeed(float) // 0x488A1C
{
    mangled_assert("?setMainEngineMaxSpeed@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488A1C(this, arg);
}

_extern void _sub_488A77(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setRotationMaxSpeed(float) // 0x488A77
{
    mangled_assert("?setRotationMaxSpeed@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488A77(this, arg);
}

_extern void _sub_4889D8(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setDescendPitch(float) // 0x4889D8
{
    mangled_assert("?setDescendPitch@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_4889D8(this, arg);
}

_extern void _sub_488A2F(AdvRigidBodyController *const, float);
_inline void AdvRigidBodyController::setMaxBankAmount(float) // 0x488A2F
{
    mangled_assert("?setMaxBankAmount@AdvRigidBodyController@@QAEXM@Z");
    todo("implement");
    _sub_488A2F(this, arg);
}

_extern float _sub_48C487(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getMainEngineMaxSpeed() // 0x48C487
{
    mangled_assert("?getMainEngineMaxSpeed@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_48C487(this);
    return __result;
}

_extern float _sub_48CB72(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getRotationMaxSpeed() // 0x48CB72
{
    mangled_assert("?getRotationMaxSpeed@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_48CB72(this);
    return __result;
}

_extern float _sub_6579F5(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getMaxBankAmount() // 0x6579F5
{
    mangled_assert("?getMaxBankAmount@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_6579F5(this);
    return __result;
}

_extern float _sub_6579F9(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getMaxStopDistance() // 0x6579F9
{
    mangled_assert("?getMaxStopDistance@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_6579F9(this);
    return __result;
}

_extern float _sub_48D61C(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getWishForwardBackwardSpeed() // 0x48D61C
{
    mangled_assert("?getWishForwardBackwardSpeed@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_48D61C(this);
    return __result;
}

_extern float _sub_48D620(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getWishTurnXAxisSpeed() // 0x48D620
{
    mangled_assert("?getWishTurnXAxisSpeed@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_48D620(this);
    return __result;
}

_extern float _sub_48D624(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getWishTurnYAxisSpeed() // 0x48D624
{
    mangled_assert("?getWishTurnYAxisSpeed@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_48D624(this);
    return __result;
}

_extern float _sub_48C152(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getForwardBackwardThrust() // 0x48C152
{
    mangled_assert("?getForwardBackwardThrust@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_48C152(this);
    return __result;
}

_extern float _sub_48C1CA(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getHorizonalRotationThrust() // 0x48C1CA
{
    mangled_assert("?getHorizonalRotationThrust@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_48C1CA(this);
    return __result;
}

_extern float _sub_48D450(AdvRigidBodyController *const);
_inline float AdvRigidBodyController::getVerticalRotationThrust() // 0x48D450
{
    mangled_assert("?getVerticalRotationThrust@AdvRigidBodyController@@QAEMXZ");
    todo("implement");
    float __result = _sub_48D450(this);
    return __result;
}

_extern bool _sub_48465E(AdvRigidBodyController *const);
_inline bool AdvRigidBodyController::getEnabled() // 0x48465E
{
    mangled_assert("?getEnabled@AdvRigidBodyController@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_48465E(this);
    return __result;
}

_extern void _sub_484769(AdvRigidBodyController *const, bool);
_inline void AdvRigidBodyController::setEnabled(bool) // 0x484769
{
    mangled_assert("?setEnabled@AdvRigidBodyController@@QAEX_N@Z");
    todo("implement");
    _sub_484769(this, arg);
}

_extern void _sub_498E76(AdvRigidBodyController *const);
_inline void AdvRigidBodyController::doFrameCleanup() // 0x498E76
{
    mangled_assert("?doFrameCleanup@AdvRigidBodyController@@MAEXXZ");
    todo("implement");
    _sub_498E76(this);
}

_extern bool _sub_4991F8(AdvRigidBodyController *const);
_inline bool AdvRigidBodyController::isDeterministic() // 0x4991F8
{
    mangled_assert("?isDeterministic@AdvRigidBodyController@@MAE_NXZ");
    todo("implement");
    bool __result = _sub_4991F8(this);
    return __result;
}

_extern char const *_sub_4992CE(AdvRigidBodyController *const);
_inline char const *AdvRigidBodyController::saveToken() // 0x4992CE
{
    mangled_assert("?saveToken@AdvRigidBodyController@@MAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4992CE(this);
    return __result;
}

/* ---------- private code */

#endif // __ADVRIGIDBODYCONTROLLER_H__
#endif

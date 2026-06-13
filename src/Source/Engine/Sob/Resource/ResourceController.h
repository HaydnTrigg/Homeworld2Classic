#if 0
#ifndef __RESOURCECONTROLLER_H__
#define __RESOURCECONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ResourceController :
    public RigidBodyController
{
public:
    typedef RigidBodyController SuperClass;
    ResourceController(ResourceController const &); /* compiler_generated() */
    ResourceController(SaveGameData *);
    ResourceController();
    virtual void applyForcesAndTorques(float) override;
    _inline void setMaxVelocity(float);
    _inline void setMaxAngularVelocity(float);
    _inline void setLinearFriction(float);
    _inline void setAngularFriction(float);
protected:
    float m_maxVelocity; // 0x10
    float m_maxAngularVelocity; // 0x14
    float m_linearFriction; // 0x18
    float m_angularFriction; // 0x1C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual _inline ~ResourceController() override; /* compiler_generated() */
    ResourceController &operator=(ResourceController const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceController) == 32, "Invalid ResourceController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4B0E7C(ResourceController *const, float);
_inline void ResourceController::setMaxVelocity(float) // 0x4B0E7C
{
    mangled_assert("?setMaxVelocity@ResourceController@@QAEXM@Z");
    todo("implement");
    _sub_4B0E7C(this, arg);
}

_extern void _sub_4B0E6E(ResourceController *const, float);
_inline void ResourceController::setMaxAngularVelocity(float) // 0x4B0E6E
{
    mangled_assert("?setMaxAngularVelocity@ResourceController@@QAEXM@Z");
    todo("implement");
    _sub_4B0E6E(this, arg);
}

_extern void _sub_4B0E60(ResourceController *const, float);
_inline void ResourceController::setLinearFriction(float) // 0x4B0E60
{
    mangled_assert("?setLinearFriction@ResourceController@@QAEXM@Z");
    todo("implement");
    _sub_4B0E60(this, arg);
}

_extern void _sub_4B0E45(ResourceController *const, float);
_inline void ResourceController::setAngularFriction(float) // 0x4B0E45
{
    mangled_assert("?setAngularFriction@ResourceController@@QAEXM@Z");
    todo("implement");
    _sub_4B0E45(this, arg);
}

_extern bool _sub_4B110E(ResourceController *const);
_inline bool ResourceController::isDeterministic() // 0x4B110E
{
    mangled_assert("?isDeterministic@ResourceController@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4B110E(this);
    return __result;
}

_extern char const *_sub_4B11AA(ResourceController *const);
_inline char const *ResourceController::saveToken() // 0x4B11AA
{
    mangled_assert("?saveToken@ResourceController@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B11AA(this);
    return __result;
}

/* ---------- private code */

#endif // __RESOURCECONTROLLER_H__
#endif

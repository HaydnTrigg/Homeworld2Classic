#if 0
#ifndef __RIGIDBODYCONTROLLER_H__
#define __RIGIDBODYCONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RigidBodyController :
    public SaveObject
{
public:
    RigidBodyController(RigidBodyController const &); /* compiler_generated() */
protected:
    RigidBodyController(SaveGameData *);
public:
    RigidBodyController();
    virtual ~RigidBodyController() override;
    virtual void applyForcesAndTorques(float) = 0;
    void setRigidBody(RigidBody *);
    RigidBody *getRigidBody();
    bool isControllingRigidBody();
protected:
    RigidBody *m_rigidBody; // 0xC
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
public:
    RigidBodyController &operator=(RigidBodyController const &); /* compiler_generated() */
};
static_assert(sizeof(RigidBodyController) == 16, "Invalid RigidBodyController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool RigidBodyController::isDeterministic() // 0x475D38
{
    mangled_assert("?isDeterministic@RigidBodyController@@MAE_NXZ");
    todo("implement");
}

_inline char const *RigidBodyController::saveToken() // 0x475DAF
{
    mangled_assert("?saveToken@RigidBodyController@@MAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RIGIDBODYCONTROLLER_H__
#endif

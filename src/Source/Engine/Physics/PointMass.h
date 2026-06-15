#if 0
#ifndef __POINTMASS_H__
#define __POINTMASS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PointMass :
    public PhysicsObject
{
public:
    PointMass(SaveGameData *);
    PointMass(PointMass const &);
    PointMass(bool);
    virtual ~PointMass() override;
    virtual void simulateTimeStep(float) override;
    vector3 const &getPosition() const;
    void setPosition(vector3 const &);
    vector3 const &getVelocity() const;
    void setVelocity(vector3 const &);
    vector3 const &getOldPosition() const;
    vector3 const &getOldVelocity() const;
    float getMass() const;
    void setMass(float);
    void addForce(vector3 const &);
    void addController(PointMassController *);
    void removeController(PointMassController *);
    void removeAllControllers();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
private:
    float m_massInv; // 0x10
    PointMass::BodyState m_bodystates[2]; // 0x14
    PointMass::BodyState *m_oldBodyState; // 0x5C
    PointMass::BodyState *m_currentBodyState; // 0x60
    bool m_currentIsZero; // 0x64
    vector3 m_force; // 0x68
    vector3 m_controllersForce; // 0x74
    std::list<PointMassController *,std::allocator<PointMassController *> > m_controllers; // 0x80
    bool m_inTimeStep; // 0x88
    struct BodyState
    {
        vector3 x; // 0x0
        vector3 v; // 0xC
        vector3 force; // 0x18
        _inline BodyState(); /* compiler_generated() */
    };
    static_assert(sizeof(BodyState) == 36, "Invalid BodyState size");
    void setDefaultBodyStates();
    void swapBodyStates();
    void solveEuler(float);
    void applyForces(float);
public:
    _inline PointMass &operator=(PointMass const &); /* compiler_generated() */
};
static_assert(sizeof(PointMass) == 140, "Invalid PointMass size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool PointMass::isDeterministic() // 0x4765FD
{
    mangled_assert("?isDeterministic@PointMass@@UAE_NXZ");
    todo("implement");
}

_inline char const *PointMass::saveToken() // 0x476761
{
    mangled_assert("?saveToken@PointMass@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __POINTMASS_H__
#endif

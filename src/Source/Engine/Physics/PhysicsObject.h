#if 0
#ifndef __PHYSICSOBJECT_H__
#define __PHYSICSOBJECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PhysicsObject :
    public SaveObject
{
public:
    PhysicsObject(PhysicsObject const &); /* compiler_generated() */
    PhysicsObject(SaveGameData *);
    PhysicsObject(bool);
    virtual _inline ~PhysicsObject() override;
    _inline void setInSimulation(bool);
    _inline bool getInSimulation() const;
    virtual void simulateTimeStep(float) = 0;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
protected:
    bool m_simulationEnabled; // 0xC
public:
    _inline PhysicsObject &operator=(PhysicsObject const &); /* compiler_generated() */
};
static_assert(sizeof(PhysicsObject) == 16, "Invalid PhysicsObject size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_47399E(PhysicsObject *const);
_inline PhysicsObject::~PhysicsObject() // 0x47399E
{
    mangled_assert("??1PhysicsObject@@UAE@XZ");
    todo("implement");
    _sub_47399E(this);
}

_extern void _sub_48F7A6(PhysicsObject *const, bool);
_inline void PhysicsObject::setInSimulation(bool) // 0x48F7A6
{
    mangled_assert("?setInSimulation@PhysicsObject@@QAEX_N@Z");
    todo("implement");
    _sub_48F7A6(this, arg);
}

_extern bool _sub_4736C6(PhysicsObject const *const);
_inline bool PhysicsObject::getInSimulation() const // 0x4736C6
{
    mangled_assert("?getInSimulation@PhysicsObject@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4736C6(this);
    return __result;
}

_extern bool _sub_4739D0(PhysicsObject *const);
_inline bool PhysicsObject::isDeterministic() // 0x4739D0
{
    mangled_assert("?isDeterministic@PhysicsObject@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4739D0(this);
    return __result;
}

_extern char const *_sub_473A47(PhysicsObject *const);
_inline char const *PhysicsObject::saveToken() // 0x473A47
{
    mangled_assert("?saveToken@PhysicsObject@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_473A47(this);
    return __result;
}

/* ---------- private code */

#endif // __PHYSICSOBJECT_H__
#endif

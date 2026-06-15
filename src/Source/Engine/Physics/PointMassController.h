#if 0
#ifndef __POINTMASSCONTROLLER_H__
#define __POINTMASSCONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PointMassController :
    public SaveObject
{
public:
    PointMassController(PointMassController const &); /* compiler_generated() */
    PointMassController(SaveGameData *);
    PointMassController();
    virtual void applyForces(float) = 0;
    void setPointMass(PointMass *);
    PointMass *getPointMass();
    bool isControllingPointMass();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
protected:
    PointMass *m_pointMass; // 0xC
public:
    virtual _inline ~PointMassController() override; /* compiler_generated() */
    PointMassController &operator=(PointMassController const &); /* compiler_generated() */
};
static_assert(sizeof(PointMassController) == 16, "Invalid PointMassController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool PointMassController::isDeterministic() // 0x476977
{
    mangled_assert("?isDeterministic@PointMassController@@UAE_NXZ");
    todo("implement");
}

_inline char const *PointMassController::saveToken() // 0x4769EE
{
    mangled_assert("?saveToken@PointMassController@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __POINTMASSCONTROLLER_H__
#endif

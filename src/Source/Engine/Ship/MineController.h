#if 0
#ifndef __MINECONTROLLER_H__
#define __MINECONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MineController :
    public ShipController
{
public:
    MineController(MineController const &); /* compiler_generated() */
    MineController(SaveGameData *);
    MineController();
    virtual ~MineController() override;
    virtual void doBehaviour(float) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
protected:
    bool reachedGoal() const;
public:
    MineController &operator=(MineController const &); /* compiler_generated() */
};
static_assert(sizeof(MineController) == 832, "Invalid MineController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool MineController::isDeterministic() // 0x49BA99
{
    mangled_assert("?isDeterministic@MineController@@UAE_NXZ");
    todo("implement");
}

_inline char const *MineController::saveToken() // 0x49BB35
{
    mangled_assert("?saveToken@MineController@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MINECONTROLLER_H__
#endif

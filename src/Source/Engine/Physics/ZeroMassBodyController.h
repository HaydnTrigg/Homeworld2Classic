#if 0
#ifndef __ZEROMASSBODYCONTROLLER_H__
#define __ZEROMASSBODYCONTROLLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ZeroMassBodyController :
    public SaveObject
{
public:
    ZeroMassBodyController(ZeroMassBodyController const &); /* compiler_generated() */
    ZeroMassBodyController(SaveGameData *);
    ZeroMassBodyController();
    virtual void applyVelocities(float) = 0;
    void setZeroMassBody(ZeroMassBody *);
    ZeroMassBody *getZeroMassBody();
    bool isControllingZeroMassBody();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
protected:
    ZeroMassBody *m_zeroMassBody; // 0xC
public:
    virtual _inline ~ZeroMassBodyController() override; /* compiler_generated() */
    ZeroMassBodyController &operator=(ZeroMassBodyController const &); /* compiler_generated() */
};
static_assert(sizeof(ZeroMassBodyController) == 16, "Invalid ZeroMassBodyController size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4772A9(ZeroMassBodyController *const);
_inline bool ZeroMassBodyController::isDeterministic() // 0x4772A9
{
    mangled_assert("?isDeterministic@ZeroMassBodyController@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4772A9(this);
    return __result;
}

_extern char const *_sub_477320(ZeroMassBodyController *const);
_inline char const *ZeroMassBodyController::saveToken() // 0x477320
{
    mangled_assert("?saveToken@ZeroMassBodyController@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_477320(this);
    return __result;
}

/* ---------- private code */

#endif // __ZEROMASSBODYCONTROLLER_H__
#endif

#if 0
#ifndef __SOBUNMOVEABLE_H__
#define __SOBUNMOVEABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobUnmoveable :
    public Sob
{
public:
    SobUnmoveable(SobUnmoveable &); /* compiler_generated() */
    SobUnmoveable(SobType, SaveGameData *);
    SobUnmoveable(SobType, char const *, bool);
    virtual ~SobUnmoveable() override;
    virtual vector3 const &getPosition() const override;
    virtual void setPosition(vector3 const &) override;
    virtual void setTransform(vector3 const &, matrix3 const &) override;
    virtual quat const &getCoordSysQuat() const override;
    virtual matrix3 const &getCoordSys() const override;
    virtual void setCoordSys(matrix3 const &) override;
    virtual void setCoordSys(quat const &) override;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    virtual _inline bool update(float) override;
protected:
    vector3 m_position; // 0x1CC
    matrix3 m_orientation; // 0x1D8
    quat m_cachedQuat; // 0x1FC
    unsigned __int32 m_lastFrame; // 0x20C
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
public:
    SobUnmoveable &operator=(SobUnmoveable &); /* compiler_generated() */
};
static_assert(sizeof(SobUnmoveable) == 528, "Invalid SobUnmoveable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4B1ED1(SobUnmoveable *const, float);
_inline bool SobUnmoveable::update(float) // 0x4B1ED1
{
    mangled_assert("?update@SobUnmoveable@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4B1ED1(this, arg);
    return __result;
}

_extern bool _sub_4B2B7B(SobUnmoveable *const);
_inline bool SobUnmoveable::isDeterministic() // 0x4B2B7B
{
    mangled_assert("?isDeterministic@SobUnmoveable@@MAE_NXZ");
    todo("implement");
    bool __result = _sub_4B2B7B(this);
    return __result;
}

_extern char const *_sub_4B2C1D(SobUnmoveable *const);
_inline char const *SobUnmoveable::saveToken() // 0x4B2C1D
{
    mangled_assert("?saveToken@SobUnmoveable@@MAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B2C1D(this);
    return __result;
}

/* ---------- private code */

#endif // __SOBUNMOVEABLE_H__
#endif

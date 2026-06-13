#if 0
#ifndef __SENSORPINGMANAGER_H__
#define __SENSORPINGMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SensorPingManager :
    public SaveObject
{
public:
    SensorPingManager(SensorPingManager const &); /* compiler_generated() */
    SensorPingManager(SaveGameData *);
    SensorPingManager(Ship *);
    virtual ~SensorPingManager() override;
    void update(float);
    void onPing();
    bool isPinging() const;
    float getPingRadius() const;
private:
    SensorPingStatic const *getStatic() const;
    SobID m_managedShip; // 0xC
    float m_remainingPingTime; // 0x18
    float m_remainingExpandTime; // 0x1C
    float m_pingRadius; // 0x20
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    SensorPingManager &operator=(SensorPingManager const &); /* compiler_generated() */
};
static_assert(sizeof(SensorPingManager) == 36, "Invalid SensorPingManager size");

class SensorPingStatic
{
public:
    _inline SensorPingStatic(bool, float, float);
    _inline ~SensorPingStatic();
    _inline bool pingUniverse() const;
    _inline float getDuration() const;
    _inline float getExpandTime() const;
protected:
    bool m_bPingUniverse; // 0x0
    float m_duration; // 0x4
    float m_expandTime; // 0x8
};
static_assert(sizeof(SensorPingStatic) == 12, "Invalid SensorPingStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_489668(SensorPingManager *const);
_inline bool SensorPingManager::isDeterministic() // 0x489668
{
    mangled_assert("?isDeterministic@SensorPingManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_489668(this);
    return __result;
}

_extern char const *_sub_489738(SensorPingManager *const);
_inline char const *SensorPingManager::saveToken() // 0x489738
{
    mangled_assert("?saveToken@SensorPingManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_489738(this);
    return __result;
}

_extern _sub_4CE709(SensorPingStatic *const, bool, float, float);
_inline SensorPingStatic::SensorPingStatic(bool, float, float) // 0x4CE709
{
    mangled_assert("??0SensorPingStatic@@QAE@_NMM@Z");
    todo("implement");
    _sub_4CE709(this, arg, arg, arg);
}

_extern void _sub_496FDB(SensorPingStatic *const);
_inline SensorPingStatic::~SensorPingStatic() // 0x496FDB
{
    mangled_assert("??1SensorPingStatic@@QAE@XZ");
    todo("implement");
    _sub_496FDB(this);
}

_extern bool _sub_4896C1(SensorPingStatic const *const);
_inline bool SensorPingStatic::pingUniverse() const // 0x4896C1
{
    mangled_assert("?pingUniverse@SensorPingStatic@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4896C1(this);
    return __result;
}

_extern float _sub_489641(SensorPingStatic const *const);
_inline float SensorPingStatic::getDuration() const // 0x489641
{
    mangled_assert("?getDuration@SensorPingStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_489641(this);
    return __result;
}

_extern float _sub_489645(SensorPingStatic const *const);
_inline float SensorPingStatic::getExpandTime() const // 0x489645
{
    mangled_assert("?getExpandTime@SensorPingStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_489645(this);
    return __result;
}

/* ---------- private code */

#endif // __SENSORPINGMANAGER_H__
#endif

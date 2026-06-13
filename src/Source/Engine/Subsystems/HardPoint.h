#if 0
#ifndef __HARDPOINT_H__
#define __HARDPOINT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HardPoint :
    public SaveObject
{
public:
    HardPoint(HardPoint const &); /* compiler_generated() */
    HardPoint(SaveGameData *);
    HardPoint();
    virtual ~HardPoint() override;
    void init();
    SubSystem *getSubSystem();
    void setSubSystem(SubSystem *);
    SubSystem *createSubSystem(unsigned __int32);
    void destroySubSystem(bool);
    void removeSubSystem();
    void update(float);
    _inline bool isOccupied() const;
    _inline bool doesSubSystemFit(unsigned __int32) const;
    _inline vector3 const &getPosition() const;
    _inline matrix3 const &getOrientation() const;
    void getWorldCoords(vector3 &, matrix3 &);
    _inline SubSystemType getType() const;
    _inline HardPointHealthType getHealthType() const;
    _inline void setHardPointStatic(HardPointStatic *);
    HardPointManager *getHardPointManager() const;
    _inline void setHardPointManager(HardPointManager *);
    Ship *getShip() const;
    _inline HardPointStatic const *getStatic() const;
protected:
    HardPointStatic *m_static; // 0xC
    SobID m_deployedSubSystem; // 0x10
    HardPointManager *m_hardPointManager; // 0x1C
    SubSystem *addSubSystem(unsigned __int32);
public:
    void defaultSettings();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    HardPoint &operator=(HardPoint const &); /* compiler_generated() */
};
static_assert(sizeof(HardPoint) == 32, "Invalid HardPoint size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_48DF8B(HardPoint const *const);
_inline bool HardPoint::isOccupied() const // 0x48DF8B
{
    mangled_assert("?isOccupied@HardPoint@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48DF8B(this);
    return __result;
}

_extern bool _sub_48B869(HardPoint const *const, unsigned __int32);
_inline bool HardPoint::doesSubSystemFit(unsigned __int32) const // 0x48B869
{
    mangled_assert("?doesSubSystemFit@HardPoint@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_48B869(this, arg);
    return __result;
}

_extern vector3 const &_sub_4EF02F(HardPoint const *const);
_inline vector3 const &HardPoint::getPosition() const // 0x4EF02F
{
    mangled_assert("?getPosition@HardPoint@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4EF02F(this);
    return __result;
}

_extern matrix3 const &_sub_4EF020(HardPoint const *const);
_inline matrix3 const &HardPoint::getOrientation() const // 0x4EF020
{
    mangled_assert("?getOrientation@HardPoint@@QBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_4EF020(this);
    return __result;
}

_extern SubSystemType _sub_48D447(HardPoint const *const);
_inline SubSystemType HardPoint::getType() const // 0x48D447
{
    mangled_assert("?getType@HardPoint@@QBE?AW4SubSystemType@@XZ");
    todo("implement");
    SubSystemType __result = _sub_48D447(this);
    return __result;
}

_extern HardPointHealthType _sub_4F0AE3(HardPoint const *const);
_inline HardPointHealthType HardPoint::getHealthType() const // 0x4F0AE3
{
    mangled_assert("?getHealthType@HardPoint@@QBE?AW4HardPointHealthType@@XZ");
    todo("implement");
    HardPointHealthType __result = _sub_4F0AE3(this);
    return __result;
}

_extern void _sub_4EFF0C(HardPoint *const, HardPointStatic *);
_inline void HardPoint::setHardPointStatic(HardPointStatic *) // 0x4EFF0C
{
    mangled_assert("?setHardPointStatic@HardPoint@@QAEXPAVHardPointStatic@@@Z");
    todo("implement");
    _sub_4EFF0C(this, arg);
}

_extern void _sub_4EFF02(HardPoint *const, HardPointManager *);
_inline void HardPoint::setHardPointManager(HardPointManager *) // 0x4EFF02
{
    mangled_assert("?setHardPointManager@HardPoint@@QAEXPAVHardPointManager@@@Z");
    todo("implement");
    _sub_4EFF02(this, arg);
}

_extern HardPointStatic const *_sub_48CD09(HardPoint const *const);
_inline HardPointStatic const *HardPoint::getStatic() const // 0x48CD09
{
    mangled_assert("?getStatic@HardPoint@@QBEPBVHardPointStatic@@XZ");
    todo("implement");
    HardPointStatic const * __result = _sub_48CD09(this);
    return __result;
}

_extern bool _sub_4EF18C(HardPoint *const);
_inline bool HardPoint::isDeterministic() // 0x4EF18C
{
    mangled_assert("?isDeterministic@HardPoint@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4EF18C(this);
    return __result;
}

_extern char const *_sub_4EF232(HardPoint *const);
_inline char const *HardPoint::saveToken() // 0x4EF232
{
    mangled_assert("?saveToken@HardPoint@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4EF232(this);
    return __result;
}

/* ---------- private code */

#endif // __HARDPOINT_H__
#endif

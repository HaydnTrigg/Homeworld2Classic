#if 0
#ifndef __DYNAMICPOINT_H__
#define __DYNAMICPOINT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DynamicPoint :
    public Saveable
{
public:
    DynamicPoint(DynamicPoint const &);
    DynamicPoint();
    virtual ~DynamicPoint() override;
    DynamicPoint &operator=(DynamicPoint const &);
    void UseVector(vector3 const &);
    void UseDynamicPosition(DynamicPoint const &);
    void UseSpaceObject(Sob const *);
    void UseSquadron(Squadron const *);
    void UseInterceptPoint(Sob const *, Sob const *);
    _inline void SetOffset(vector3 const &, bool);
    _inline void SetHeading(vector3 const &);
    _inline void SetUp(vector3 const &);
    _inline void SetLeft(vector3 const &);
    _inline void SetMatrix(matrix3 const &);
    vector3 const &getPosition() const;
    matrix3 const &getMatrix() const;
    _inline SobID getSobID() const;
    Squadron const *getSquadron() const;
    _inline vector3 const &getOffset() const;
    _inline void setForceZeroVelocity(bool);
    _inline void setVelocity(vector3 const &);
    vector3 const &getVelocity() const;
    enum PointType
    {
        Static = 0,
        FollowObject,
        FollowIntersection,
        FollowSquadron,
        NUMBER_OF_TYPES,
    };
    _inline DynamicPoint::PointType getType();
private:
    _inline void invalidate();
    vector3 m_Position; // 0x4
    vector3 m_Offset; // 0x10
    bool m_OffsetInBodySpace; // 0x1C
    matrix3 m_orientation; // 0x20
    vector3 m_velocity; // 0x44
    SobID m_SobID; // 0x50
    SobID m_SobIDForTracking; // 0x5C
    bool m_forceZeroVelocity; // 0x68
    DynamicPoint::PointType m_Type; // 0x6C
    unsigned __int32 m_squadronID; // 0x70
    vector3 m_cachedPosition; // 0x74
    unsigned __int32 m_cachedPositionFrame; // 0x80
    matrix3 m_cachedMatrix; // 0x84
    unsigned __int32 m_cachedMatrixFrame; // 0xA8
    vector3 m_cachedVelocity; // 0xAC
    unsigned __int32 m_cachedVelocityFrame; // 0xB8
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
};
static_assert(sizeof(DynamicPoint) == 188, "Invalid DynamicPoint size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_48739B(DynamicPoint *const, vector3 const &, bool);
_inline void DynamicPoint::SetOffset(vector3 const &, bool) // 0x48739B
{
    mangled_assert("?SetOffset@DynamicPoint@@QAEXABVvector3@@_N@Z");
    todo("implement");
    _sub_48739B(this, arg, arg);
}

_extern void _sub_48A8EE(DynamicPoint *const, vector3 const &);
_inline void DynamicPoint::SetHeading(vector3 const &) // 0x48A8EE
{
    mangled_assert("?SetHeading@DynamicPoint@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_48A8EE(this, arg);
}

_extern void _sub_48A918(DynamicPoint *const, vector3 const &);
_inline void DynamicPoint::SetUp(vector3 const &) // 0x48A918
{
    mangled_assert("?SetUp@DynamicPoint@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_48A918(this, arg);
}

_extern void _sub_69B8BA(DynamicPoint *const, vector3 const &);
_inline void DynamicPoint::SetLeft(vector3 const &) // 0x69B8BA
{
    mangled_assert("?SetLeft@DynamicPoint@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_69B8BA(this, arg);
}

_extern void _sub_4B6FC5(DynamicPoint *const, matrix3 const &);
_inline void DynamicPoint::SetMatrix(matrix3 const &) // 0x4B6FC5
{
    mangled_assert("?SetMatrix@DynamicPoint@@QAEXABVmatrix3@@@Z");
    todo("implement");
    _sub_4B6FC5(this, arg);
}

_extern SobID _sub_657A7A(DynamicPoint const *const);
_inline SobID DynamicPoint::getSobID() const // 0x657A7A
{
    mangled_assert("?getSobID@DynamicPoint@@QBE?AVSobID@@XZ");
    todo("implement");
    SobID __result = _sub_657A7A(this);
    return __result;
}

_extern vector3 const &_sub_50AC51(DynamicPoint const *const);
_inline vector3 const &DynamicPoint::getOffset() const // 0x50AC51
{
    mangled_assert("?getOffset@DynamicPoint@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_50AC51(this);
    return __result;
}

_extern void _sub_6B1465(DynamicPoint *const, bool);
_inline void DynamicPoint::setForceZeroVelocity(bool) // 0x6B1465
{
    mangled_assert("?setForceZeroVelocity@DynamicPoint@@QAEX_N@Z");
    todo("implement");
    _sub_6B1465(this, arg);
}

_extern void _sub_4B6FEF(DynamicPoint *const, vector3 const &);
_inline void DynamicPoint::setVelocity(vector3 const &) // 0x4B6FEF
{
    mangled_assert("?setVelocity@DynamicPoint@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_4B6FEF(this, arg);
}

_extern DynamicPoint::PointType _sub_657C0B(DynamicPoint *const);
_inline DynamicPoint::PointType DynamicPoint::getType() // 0x657C0B
{
    mangled_assert("?getType@DynamicPoint@@QAE?AW4PointType@1@XZ");
    todo("implement");
    DynamicPoint::PointType __result = _sub_657C0B(this);
    return __result;
}

_extern void _sub_48D9CF(DynamicPoint *const);
_inline void DynamicPoint::invalidate() // 0x48D9CF
{
    mangled_assert("?invalidate@DynamicPoint@@AAEXXZ");
    todo("implement");
    _sub_48D9CF(this);
}

_extern bool _sub_5EC4EB(DynamicPoint *const);
_inline bool DynamicPoint::isDeterministic() // 0x5EC4EB
{
    mangled_assert("?isDeterministic@DynamicPoint@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5EC4EB(this);
    return __result;
}

_extern char const *_sub_5EC562(DynamicPoint *const);
_inline char const *DynamicPoint::saveToken() // 0x5EC562
{
    mangled_assert("?saveToken@DynamicPoint@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_5EC562(this);
    return __result;
}

/* ---------- private code */

#endif // __DYNAMICPOINT_H__
#endif

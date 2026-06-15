#if 0
#ifndef __WEAPONTARGETINFO_H__
#define __WEAPONTARGETINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponTargetInfo :
    public Saveable
{
public:
    WeaponTargetInfo(WeaponTargetInfo const &);
    WeaponTargetInfo(Sob *, vector3 const &, vector3 const &, vector3 const &);
    WeaponTargetInfo();
    WeaponTargetInfo &operator=(WeaponTargetInfo const &);
    _inline bool isValid() const;
    _inline Sob *getSob() const;
    _inline SobID const &getSobID() const;
    _inline vector3 const &getLocalTarget() const;
    _inline vector3 const &getLocalNormal() const;
    _inline vector3 const &getRangeTarget() const;
    _inline float getRangeToTargetSqr(vector3 const &) const;
    vector3 getWSTargetPosition() const;
    vector3 getWSTargetPosition(Weapon const *) const;
    vector3 getWSTargetPositionPredicted(vector3 const &, float) const;
    vector3 getWSTargetNormal() const;
    void reset(Sob *, vector3 const &, vector3 const &, vector3 const &);
    _inline void updateRangeTarget(vector3 const &);
    static WeaponTargetInfo const zero;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline char const *saveToken() override;
private:
    SobID m_sobID; // 0x4
    vector3 m_localPoint; // 0x10
    vector3 m_localNormal; // 0x1C
    vector3 m_rangeTarget; // 0x28
public:
    virtual _inline ~WeaponTargetInfo() override; /* compiler_generated() */
};
static_assert(sizeof(WeaponTargetInfo) == 52, "Invalid WeaponTargetInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool WeaponTargetInfo::isValid() const // 0x49E12D
{
    mangled_assert("?isValid@WeaponTargetInfo@@QBE_NXZ");
    todo("implement");
}

_inline Sob *WeaponTargetInfo::getSob() const // 0x487F37
{
    mangled_assert("?getSob@WeaponTargetInfo@@QBEPAVSob@@XZ");
    todo("implement");
}

_inline SobID const &WeaponTargetInfo::getSobID() const // 0x487F5C
{
    mangled_assert("?getSobID@WeaponTargetInfo@@QBEABVSobID@@XZ");
    todo("implement");
}

_inline vector3 const &WeaponTargetInfo::getLocalTarget() const // 0x487EF3
{
    mangled_assert("?getLocalTarget@WeaponTargetInfo@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &WeaponTargetInfo::getLocalNormal() const // 0x6B4086
{
    mangled_assert("?getLocalNormal@WeaponTargetInfo@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &WeaponTargetInfo::getRangeTarget() const // 0x49DD0B
{
    mangled_assert("?getRangeTarget@WeaponTargetInfo@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline float WeaponTargetInfo::getRangeToTargetSqr(vector3 const &) const // 0x49F68A
{
    mangled_assert("?getRangeToTargetSqr@WeaponTargetInfo@@QBEMABVvector3@@@Z");
    todo("implement");
}

_inline void WeaponTargetInfo::updateRangeTarget(vector3 const &) // 0x49EA4C
{
    mangled_assert("?updateRangeTarget@WeaponTargetInfo@@QAEXABVvector3@@@Z");
    todo("implement");
}

_inline bool WeaponTargetInfo::isDeterministic() // 0x4A4FA6
{
    mangled_assert("?isDeterministic@WeaponTargetInfo@@UAE_NXZ");
    todo("implement");
}

_inline char const *WeaponTargetInfo::saveToken() // 0x4A5067
{
    mangled_assert("?saveToken@WeaponTargetInfo@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __WEAPONTARGETINFO_H__
#endif

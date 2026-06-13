#if 0
#ifndef __WEAPONFIRETYPES_H__
#define __WEAPONFIRETYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum WeaponFireResultType
{
    WFRT_ModifyHealth = 0,
    WFRT_ModifySensors,
    WFRT_Push,
    WFRT_Tumble,
    WFRT_Disable,
    WFRT_SpawnWeaponFire,
    WFRT_LatchWithTarget,
};

enum WeaponFireAffectee
{
    WFA_Target = 0,
    WFA_Owner,
    WFA_EnemyShips,
    WFA_FriendlyShips,
};

/* ---------- definitions */

class WeaponResult
{
public:
    WeaponFireResultType m_type; // 0x0
    WeaponFireAffectee m_affectee; // 0x4
    float m_fParam1; // 0x8
    float m_fParam2; // 0xC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_spawnedName; // 0x10
    _inline WeaponResult(WeaponResult const &); /* compiler_generated() */
    _inline WeaponResult(); /* compiler_generated() */
    _inline ~WeaponResult(); /* compiler_generated() */
    WeaponResult &operator=(WeaponResult const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponResult) == 40, "Invalid WeaponResult size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WEAPONFIRETYPES_H__
#endif

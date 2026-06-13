#if 0
#ifndef __WEAPONINFO_H__
#define __WEAPONINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponInfo
{
public:
    std::vector<Weapon *,std::allocator<Weapon *> > m_weapons; // 0x0
    WeaponInfo(WeaponInfo const &); /* compiler_generated() */
    _inline WeaponInfo(); /* compiler_generated() */
    _inline ~WeaponInfo(); /* compiler_generated() */
    WeaponInfo &operator=(WeaponInfo const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponInfo) == 12, "Invalid WeaponInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WEAPONINFO_H__
#endif

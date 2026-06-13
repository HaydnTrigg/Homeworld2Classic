#if 0
#ifndef __WEAPONSTATICINFO_H__
#define __WEAPONSTATICINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponStaticInfo
{
public:
    virtual _inline ~WeaponStaticInfo();
    std::vector<WeaponClassSpecificInfo *,std::allocator<WeaponClassSpecificInfo *> > m_weaponClassSpecificInfo; // 0x4
    std::vector<GunBinding,std::allocator<GunBinding> > m_gunBindings; // 0x10
    WeaponStaticInfo(WeaponStaticInfo const &); /* compiler_generated() */
    _inline WeaponStaticInfo(); /* compiler_generated() */
    WeaponStaticInfo &operator=(WeaponStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponStaticInfo) == 28, "Invalid WeaponStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_49731B(WeaponStaticInfo *const);
_inline WeaponStaticInfo::~WeaponStaticInfo() // 0x49731B
{
    mangled_assert("??1WeaponStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_49731B(this);
}

/* ---------- private code */

#endif // __WEAPONSTATICINFO_H__
#endif

#if 0
#ifndef __WEAPONCLASSSPECIFICINFO_H__
#define __WEAPONCLASSSPECIFICINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponClassSpecificInfo
{
public:
    WeaponClassSpecificInfo(WeaponClassSpecificInfo const &); /* compiler_generated() */
    WeaponClassSpecificInfo();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_jointName; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fireEvent; // 0x30
    HierarchyJoint *m_muzzleJoint; // 0x48
    vector3 m_position; // 0x4C
    vector3 m_direction; // 0x58
    vector3 m_restDirection; // 0x64
    vector3 m_latitudeOffset; // 0x70
    vector3 m_muzzleOffset; // 0x7C
    vector3 m_left; // 0x88
    matrix3 m_coordSys; // 0x94
    __int32 m_slaveDriverIndex; // 0xB8
    __int32 m_offsetFireDriver; // 0xBC
    void bindStaticCoordSys();
    _inline ~WeaponClassSpecificInfo(); /* compiler_generated() */
    WeaponClassSpecificInfo &operator=(WeaponClassSpecificInfo const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponClassSpecificInfo) == 192, "Invalid WeaponClassSpecificInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WEAPONCLASSSPECIFICINFO_H__
#endif

#if 0
#ifndef __GUNBINDING_H__
#define __GUNBINDING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GunBinding
{
public:
    GunBinding();
    ~GunBinding();
    HierarchyJoint *m_jointToBind; // 0x0
    float m_recoilDistance; // 0x4
    unsigned char m_iGun; // 0x8
    unsigned char m_axes; // 0x9
};
static_assert(sizeof(GunBinding) == 12, "Invalid GunBinding size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GUNBINDING_H__
#endif

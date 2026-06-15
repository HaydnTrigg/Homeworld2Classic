#if 0
#ifndef __FAMILYLISTMGR_H__
#define __FAMILYLISTMGR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FamilyListMgr
{
public:
    FamilyListMgr(FamilyListMgr const &); /* compiler_generated() */
    FamilyListMgr();
    ~FamilyListMgr();
    static _inline FamilyListMgr *i();
    static FamilyListMgr *instance();
    static void release();
    static FamilyListMgr *s_instance;
    FamilyList m_attackFamilyList; // 0x0
    FamilyList m_avoidanceFamilyList; // 0xC
    FamilyList m_collisionFamilyList; // 0x18
    FamilyList m_buildFamilyList; // 0x24
    FamilyList m_dockFamilyList; // 0x30
    FamilyList m_displayFamilyList; // 0x3C
    FamilyList m_autoFormationFamilyList; // 0x48
    FamilyList m_armourFamilyList; // 0x54
    FamilyList m_ucFamilyFamilyList; // 0x60
    FamilyList m_ucShipTypeFamilyList; // 0x6C
    static bool startup();
    static bool shutdown();
    FamilyListMgr &operator=(FamilyListMgr const &); /* compiler_generated() */
};
static_assert(sizeof(FamilyListMgr) == 120, "Invalid FamilyListMgr size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FamilyListMgr *FamilyListMgr::i() // 0x47EDEC
{
    mangled_assert("?i@FamilyListMgr@@SGPAV1@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FAMILYLISTMGR_H__
#endif

#if 0
#ifndef __MISSILESTATIC_H__
#define __MISSILESTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MissileStatic :
    public SobWithMeshStatic
{
public:
    typedef SobWithMeshStatic SuperClass;
    virtual _inline ~MissileStatic() override;
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_defaultMissileWeaponName; // 0x2AC
    float m_lifeTime; // 0x2C4
    float m_detectionDistance; // 0x2C8
    float m_launchTime; // 0x2CC
    float m_proximityDetonationDistance; // 0x2D0
    float m_clusterSeparationDistance; // 0x2D4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_clusterMunitionName; // 0x2D8
    unsigned __int32 m_numberOfClusterMunitionsToSpawn; // 0x2F0
    float m_clusterRadiansAngle; // 0x2F4
    float m_tumbleSpeed; // 0x2F8
    float m_trackingSpeedMultiplier; // 0x2FC
    float m_tanTargetAngle; // 0x300
    float m_addedAngleMin; // 0x304
    float m_addedAngleMax; // 0x308
    float m_slowdownFactor; // 0x30C
    float m_cosAccelerationAngle; // 0x310
    MissileStatic(MissileStatic const &); /* compiler_generated() */
protected:
    MissileStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    MissileStatic &operator=(MissileStatic const &); /* compiler_generated() */
};
static_assert(sizeof(MissileStatic) == 788, "Invalid MissileStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline MissileStatic::~MissileStatic() // 0x488F4E
{
    mangled_assert("??1MissileStatic@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MISSILESTATIC_H__
#endif

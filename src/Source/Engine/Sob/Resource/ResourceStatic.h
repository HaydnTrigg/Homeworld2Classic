#if 0
#ifndef __RESOURCESTATIC_H__
#define __RESOURCESTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ResourceStatic :
    public SobWithMeshStatic
{
public:
    typedef SobWithMeshStatic SuperClass;
    ResourceStatic(ResourceStatic const &); /* compiler_generated() */
protected:
    ResourceStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
    virtual ~ResourceStatic() override;
public:
    void initialiseResourcingPoints();
    std::vector<std::pair<vector3,matrix3> *,std::allocator<std::pair<vector3,matrix3> *> > m_resourcingPoints; // 0x2AC
    unsigned __int32 m_resourceValue; // 0x2B8
    float m_blobRadius; // 0x2BC
    float m_maxVelocity; // 0x2C0
    float m_maxAngularVelocity; // 0x2C4
    float m_linearFriction; // 0x2C8
    float m_angularFriction; // 0x2CC
    ResourceStatic &operator=(ResourceStatic const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceStatic) == 720, "Invalid ResourceStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RESOURCESTATIC_H__
#endif

#if 0
#ifndef __BUILDQUEUESTATIC_H__
#define __BUILDQUEUESTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BuildQueueStatic
{
public:
    BuildQueueStatic(BuildQueueStatic const &); /* compiler_generated() */
    BuildQueueStatic();
    ~BuildQueueStatic();
    void addBuildableFamily(char const *);
    void addBuildableDisplayFamily(char const *);
    bool canBuildFamily(unsigned __int32);
    bool canBuildFamily(char const *);
    bool canBuildDisplayFamily(unsigned __int32);
private:
    std::list<unsigned int,std::allocator<unsigned int> > m_buildFamilies; // 0x0
    std::list<unsigned int,std::allocator<unsigned int> > m_buildDisplayFamilies; // 0x8
public:
    BuildQueueStatic &operator=(BuildQueueStatic const &); /* compiler_generated() */
};
static_assert(sizeof(BuildQueueStatic) == 16, "Invalid BuildQueueStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BUILDQUEUESTATIC_H__
#endif

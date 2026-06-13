#if 0
#ifndef __STATISTICIAN_H__
#define __STATISTICIAN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Statistician
{
public:
    Statistician(unsigned __int32);
    ~Statistician();
    void initializeNames(char **);
    unsigned __int32 getSize();
    __int32 getStat(unsigned __int32);
    char const *getName(unsigned __int32);
    __int32 incStat(unsigned __int32);
    __int32 decStat(unsigned __int32);
    __int32 addStat(unsigned __int32, __int32);
    __int32 subStat(unsigned __int32, __int32);
    void setStat(unsigned __int32, __int32);
    void clearStat(unsigned __int32);
    void clearAllStats();
private:
    char **m_names; // 0x0
    unsigned __int32 m_size; // 0x4
    __int32 *m_stats; // 0x8
};
static_assert(sizeof(Statistician) == 12, "Invalid Statistician size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STATISTICIAN_H__
#endif

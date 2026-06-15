#if 0
#ifndef __FILTER_H__
#define __FILTER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct FilterElement
{
    unsigned char compareLength; // 0x0
    char string[17]; // 0x1
};
static_assert(sizeof(FilterElement) == 18, "Invalid FilterElement size");

class DebugFilter
{
public:
    DebugFilter();
    ~DebugFilter();
    __int32 setFilters(char *);
    __int32 getFilters(char *, __int32);
    void enumerateFilters(void (*)(char const *));
    bool compare(char const *);
private:
    bool addFilter(char const *, FilterElement *, __int32 *);
    bool compareAgainstFilters(char const *, FilterElement *, __int32);
    __int32 m_nPassFilters; // 0x0
    __int32 m_nFailFilters; // 0x4
    FilterElement m_passFilters[64]; // 0x8
    FilterElement m_failFilters[64]; // 0x488
};
static_assert(sizeof(DebugFilter) == 2312, "Invalid DebugFilter size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILTER_H__
#endif

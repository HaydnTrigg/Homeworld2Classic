#if 0
#ifndef __WILDCARD_H__
#define __WILDCARD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WildcardMatcher
{
public:
    WildcardMatcher(char const *);
    bool FileMatch(char const *);
private:
    char m_wildcard[260]; // 0x0
};
static_assert(sizeof(WildcardMatcher) == 260, "Invalid WildcardMatcher size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WILDCARD_H__
#endif

#if 0
#ifndef __NISCARD_H__
#define __NISCARD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISCard
{
public:
    NISCard(NISCard const &); /* compiler_generated() */
    NISCard();
    ~NISCard();
    Texture *pTexture; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename; // 0x4
    vector2 leftTop; // 0x1C
    vector2 rightBottom; // 0x24
    float startPercentage; // 0x2C
    float endPercentage; // 0x30
    float startTime; // 0x34
    float numSeconds; // 0x38
    NISCard &operator=(NISCard const &); /* compiler_generated() */
};
static_assert(sizeof(NISCard) == 60, "Invalid NISCard size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NISCARD_H__
#endif

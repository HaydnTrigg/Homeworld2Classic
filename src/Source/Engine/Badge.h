#if 0
#ifndef __BADGE_H__
#define __BADGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Badge
{
public:
    enum Location
    {
        LOC_Data = 0,
        LOC_Profiles,
        LOC_Builtin,
        LOC_NUMBER,
    };
    Badge();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > GetName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > GetPath() const;
    void SetDefault();
    void SetFromPath(char const *);
private:
    unsigned char m_location; // 0x0
    char m_filename[32]; // 0x1
};
static_assert(sizeof(Badge) == 33, "Invalid Badge size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BADGE_H__
#endif

#if 0
#ifndef __GAMESPYID_H__
#define __GAMESPYID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameSpyID
{
public:
    GameSpyID(GameSpyID const &); /* compiler_generated() */
    GameSpyID();
    void Setup();
    char const *GetGameName() const;
    char const *GetSecretKey() const;
    __int32 GetPatchProductID() const;
    __int32 GetTrackingProductID() const;
    char const *GetVersionUniqueID() const;
    __int32 GetDistributionID() const;
private:
    __int32 m_distributionID; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_gamename; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_secretkey; // 0x1C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_versionUniqueString; // 0x34
public:
    _inline ~GameSpyID(); /* compiler_generated() */
    GameSpyID &operator=(GameSpyID const &); /* compiler_generated() */
};
static_assert(sizeof(GameSpyID) == 76, "Invalid GameSpyID size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMESPYID_H__
#endif

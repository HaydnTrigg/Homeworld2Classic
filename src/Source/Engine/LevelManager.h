#if 0
#ifndef __LEVELMANAGER_H__
#define __LEVELMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LevelManager
{
public:
    typedef unsigned __int32 LevelHandle;
    typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int> LevelEntry;
    typedef std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int> > > LevelList;
    LevelDesc const *GetLevel(MD5Hash const &) const;
    LevelDesc const *GetLevel(LevelDesc::Source, char const *) const;
    LevelDesc const *GetLevel(unsigned __int32 const &) const;
    bool GetMultiplayerLevels(std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int> > > &);
    bool LoadLevel(char const *, bool);
    bool SaveLevelFile(MD5Hash const &, char const *, unsigned char const *, unsigned char const *) const;
    void FindCampaignlevels();
    void GetDirectory(LevelDesc::Source, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const;
private:
    void FindMultiplayerLevels(char const *, LevelDesc::Source);
    LevelDesc const *LoadProfileLevel(MD5Hash const &) const;
    typedef std::map<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> > > LevelMap;
    std::map<unsigned int,LevelDesc,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,LevelDesc> > > m_levels; // 0x0
    unsigned __int32 m_lastHandle; // 0x8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_MPLevelDirectory; // 0xC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_profileLevelDirectory; // 0x24
public:
    static bool Restart(char const *levelDir0, char const *levelDir1);
    static bool Shutdown();
    static LevelManager *instance();
    LevelManager(LevelManager const &); /* compiler_generated() */
private:
    LevelManager(char const *, char const *);
    _inline ~LevelManager();
    bool LoadDescription(LevelDesc::Source, char const *, LevelDesc &) const;
public:
    LevelManager &operator=(LevelManager const &); /* compiler_generated() */
};
static_assert(sizeof(LevelManager) == 60, "Invalid LevelManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline LevelManager::~LevelManager() // 0x6026F3
{
    mangled_assert("??1LevelManager@@AAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __LEVELMANAGER_H__
#endif

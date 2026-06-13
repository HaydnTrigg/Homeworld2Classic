#if 0
#ifndef __GAMERULESLIBRARY_H__
#define __GAMERULESLIBRARY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameRulesLibrary
{
public:
    GameRulesLibrary(GameRulesLibrary const &); /* compiler_generated() */
    GameRulesLibrary();
    ~GameRulesLibrary();
    static bool Startup();
    static GameRulesLibrary *Instance();
    static bool Shutdown();
    static __int32 const DESCRIPTION_MAX;
    struct GameRulesDescription
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_rulesName; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_rulesFileName; // 0x18
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_localizedName; // 0x30
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_archiveName; // 0x48
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_description; // 0x60
        _inline GameRulesDescription(GameRulesLibrary::GameRulesDescription const &); /* compiler_generated() */
        _inline GameRulesDescription(); /* compiler_generated() */
        _inline ~GameRulesDescription(); /* compiler_generated() */
        _inline GameRulesLibrary::GameRulesDescription &operator=(GameRulesLibrary::GameRulesDescription const &); /* compiler_generated() */
    };
    static_assert(sizeof(GameRulesDescription) == 120, "Invalid GameRulesDescription size");
    MD5Hash const *GetGuid(unsigned __int32) const;
    MD5Hash const *GetGuid(wchar_t const *) const;
    MD5Hash const *GetGuid(char const *) const;
    GameRulesLibrary::GameRulesDescription const *GetDescription(MD5Hash const &) const;
    __int32 GetAllGameRuleSets(std::vector<MD5Hash const *,std::allocator<MD5Hash const *> > &) const;
    void GetDefaultRules(MD5Hash &) const;
    typedef std::map<MD5Hash,GameRulesLibrary::GameRulesDescription,std::less<MD5Hash>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> > > GameRulesMap;
private:
    std::map<MD5Hash,GameRulesLibrary::GameRulesDescription,std::less<MD5Hash>,std::allocator<std::pair<MD5Hash const ,GameRulesLibrary::GameRulesDescription> > > m_library; // 0x0
    static GameRulesLibrary *s_instance;
    bool ReadAllGameRules();
    void ReadGameRulesFromArchives(char const *);
    bool ParseGameRulesInfo(GameRulesLibrary::GameRulesDescription &, LuaConfig &);
public:
    GameRulesLibrary &operator=(GameRulesLibrary const &); /* compiler_generated() */
};
static_assert(sizeof(GameRulesLibrary) == 8, "Invalid GameRulesLibrary size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMERULESLIBRARY_H__
#endif

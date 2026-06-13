#if 0
#ifndef __GAMEOPTIONS_H__
#define __GAMEOPTIONS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameOptions
{
public:
    static bool Reload(MD5Hash const &gameRules);
    static bool Shutdown();
    static GameOptions *i();
    GameOptions(GameOptions const &); /* compiler_generated() */
private:
    GameOptions(MD5Hash const &);
    ~GameOptions();
    class Option
    {
    public:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_value; // 0x0
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0x18
        void ParseOption(LuaConfig &);
        _inline Option(GameOptions::Option const &); /* compiler_generated() */
        _inline Option(); /* compiler_generated() */
        _inline ~Option(); /* compiler_generated() */
        GameOptions::Option &operator=(GameOptions::Option const &); /* compiler_generated() */
    };
    static_assert(sizeof(Option) == 48, "Invalid Option size");
    class Choice
    {
    public:
        void ParseOptionSet(char const *, LuaConfig &);
        _inline char const *GetName() const;
        wchar_t const *GetLocName() const;
        wchar_t const *GetTooltip() const;
        __int32 GetNumOptions() const;
        __int32 GetDefault() const;
        wchar_t const *GetOptionName(unsigned __int32) const;
        char const *GetOptionValue(unsigned __int32) const;
        bool IsVisible() const;
    protected:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_locName; // 0x18
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_toolTip; // 0x30
        long m_default; // 0x48
        bool m_bVisible; // 0x4C
        std::vector<GameOptions::Option,std::allocator<GameOptions::Option> > m_options; // 0x50
    public:
        _inline Choice(GameOptions::Choice const &); /* compiler_generated() */
        _inline Choice(); /* compiler_generated() */
        _inline ~Choice(); /* compiler_generated() */
        GameOptions::Choice &operator=(GameOptions::Choice const &); /* compiler_generated() */
    };
    static_assert(sizeof(Choice) == 92, "Invalid Choice size");
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > choiceiterator;
public:
    unsigned __int32 size() const;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > begin() const;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > end() const;
    GameOptions::Choice const *find(unsigned __int32) const;
    GameOptions::Choice const *find(char const *) const;
    _inline MD5Hash const &GetGameRules() const;
    char const *GetGameRulesArchive();
    char const *GetDirectory(char const *);
private:
    std::vector<GameOptions::Choice,std::allocator<GameOptions::Choice> > m_options; // 0x0
    MD5Hash m_gameRules; // 0xC
    __int32 m_archiveHandle; // 0x78
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_directories; // 0x7C
    bool LoadGameRulesFile(MD5Hash const &);
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > DirectoryList;
    static GameOptions *s_instance;
    static bool m_archiveContainsLocale;
public:
    GameOptions &operator=(GameOptions const &); /* compiler_generated() */
};
static_assert(sizeof(GameOptions) == 132, "Invalid GameOptions size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_46A151(GameOptions::Choice const *const);
_inline char const *GameOptions::Choice::GetName() const // 0x46A151
{
    mangled_assert("?GetName@Choice@GameOptions@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_46A151(this);
    return __result;
}

_extern std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > _sub_46A37E(GameOptions const *const);
_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > GameOptions::begin() const // 0x46A37E
{
    mangled_assert("?begin@GameOptions@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VChoice@GameOptions@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > __result = _sub_46A37E(this);
    return __result;
}

_extern std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > _sub_46A3C7(GameOptions const *const);
_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > GameOptions::end() const // 0x46A3C7
{
    mangled_assert("?end@GameOptions@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VChoice@GameOptions@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<GameOptions::Choice> > > __result = _sub_46A3C7(this);
    return __result;
}

_extern MD5Hash const &_sub_587CEF(GameOptions const *const);
_inline MD5Hash const &GameOptions::GetGameRules() const // 0x587CEF
{
    mangled_assert("?GetGameRules@GameOptions@@QBEABVMD5Hash@@XZ");
    todo("implement");
    MD5Hash const & __result = _sub_587CEF(this);
    return __result;
}

/* ---------- private code */

#endif // __GAMEOPTIONS_H__
#endif

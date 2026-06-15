#if 0
#ifndef __STEAMLOBBYSESSIONDESC_H__
#define __STEAMLOBBYSESSIONDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamLobbySessionDesc
{
public:
    struct Param
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > value; // 0x18
        _inline Param(SteamLobbySessionDesc::Param const &); /* compiler_generated() */
        Param(); /* compiler_generated() */
        _inline ~Param(); /* compiler_generated() */
        _inline SteamLobbySessionDesc::Param &operator=(SteamLobbySessionDesc::Param const &); /* compiler_generated() */
    };
    static_assert(sizeof(Param) == 48, "Invalid Param size");
    _inline SteamLobbySessionDesc(SteamLobbySessionDesc const &); /* compiler_generated() */
    SteamLobbySessionDesc();
    void Clear();
    unsigned __int32 GetParamCount() const;
    char const *GetName(unsigned __int32) const;
    char const *GetValue(unsigned __int32) const;
    void SetParam(char const *, unsigned long long const);
    void SetParam(char const *, char const *);
    char const *FindParam(char const *) const;
    bool FindIntParam(char const *, unsigned long long &) const;
    _inline void SetUserData(unsigned __int32);
    _inline unsigned __int32 GetUserData() const;
private:
    __int32 FindParamIndex(char const *) const;
    typedef std::vector<SteamLobbySessionDesc::Param,std::allocator<SteamLobbySessionDesc::Param> > ParamCont;
    std::vector<SteamLobbySessionDesc::Param,std::allocator<SteamLobbySessionDesc::Param> > m_param; // 0x0
    unsigned __int32 m_userData; // 0xC
public:
    _inline ~SteamLobbySessionDesc(); /* compiler_generated() */
    _inline SteamLobbySessionDesc &operator=(SteamLobbySessionDesc const &); /* compiler_generated() */
};
static_assert(sizeof(SteamLobbySessionDesc) == 16, "Invalid SteamLobbySessionDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void SteamLobbySessionDesc::SetUserData(unsigned __int32) // 0x44C042
{
    mangled_assert("?SetUserData@SteamLobbySessionDesc@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 SteamLobbySessionDesc::GetUserData() const // 0x44BA6B
{
    mangled_assert("?GetUserData@SteamLobbySessionDesc@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STEAMLOBBYSESSIONDESC_H__
/* combined */
#ifndef __STEAMLOBBYSESSIONDESC_H__
#define __STEAMLOBBYSESSIONDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamLobbySessionDesc
{
public:
    struct Param
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > value; // 0x18
        _inline Param(SteamLobbySessionDesc::Param const &); /* compiler_generated() */
        Param(); /* compiler_generated() */
        _inline ~Param(); /* compiler_generated() */
        _inline SteamLobbySessionDesc::Param &operator=(SteamLobbySessionDesc::Param const &); /* compiler_generated() */
    };
    static_assert(sizeof(Param) == 48, "Invalid Param size");
    _inline SteamLobbySessionDesc(SteamLobbySessionDesc const &); /* compiler_generated() */
    SteamLobbySessionDesc();
    void Clear();
    unsigned __int32 GetParamCount() const;
    char const *GetName(unsigned __int32) const;
    char const *GetValue(unsigned __int32) const;
    void SetParam(char const *, unsigned long long const);
    void SetParam(char const *, char const *);
    char const *FindParam(char const *) const;
    bool FindIntParam(char const *, unsigned long long &) const;
    _inline void SetUserData(unsigned __int32);
    _inline unsigned __int32 GetUserData() const;
private:
    __int32 FindParamIndex(char const *) const;
    typedef std::vector<SteamLobbySessionDesc::Param,std::allocator<SteamLobbySessionDesc::Param> > ParamCont;
    std::vector<SteamLobbySessionDesc::Param,std::allocator<SteamLobbySessionDesc::Param> > m_param; // 0x0
    unsigned __int32 m_userData; // 0xC
public:
    _inline ~SteamLobbySessionDesc(); /* compiler_generated() */
    _inline SteamLobbySessionDesc &operator=(SteamLobbySessionDesc const &); /* compiler_generated() */
};
static_assert(sizeof(SteamLobbySessionDesc) == 16, "Invalid SteamLobbySessionDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void SteamLobbySessionDesc::SetUserData(unsigned __int32) // 0x10001ED2
{
    mangled_assert("?SetUserData@SteamLobbySessionDesc@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 SteamLobbySessionDesc::GetUserData() const // 0x10001C8D
{
    mangled_assert("?GetUserData@SteamLobbySessionDesc@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STEAMLOBBYSESSIONDESC_H__
#endif

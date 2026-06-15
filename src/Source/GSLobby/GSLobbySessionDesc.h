#if 0
#ifndef __GSLOBBYSESSIONDESC_H__
#define __GSLOBBYSESSIONDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSLobbySessionDesc
{
public:
    struct Param
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > value; // 0x18
        _inline Param(GSLobbySessionDesc::Param const &); /* compiler_generated() */
        Param(); /* compiler_generated() */
        _inline ~Param(); /* compiler_generated() */
        _inline GSLobbySessionDesc::Param &operator=(GSLobbySessionDesc::Param const &); /* compiler_generated() */
    };
    static_assert(sizeof(Param) == 48, "Invalid Param size");
    _inline GSLobbySessionDesc(GSLobbySessionDesc const &); /* compiler_generated() */
    GSLobbySessionDesc();
    void Clear();
    unsigned __int32 GetParamCount() const;
    char const *GetName(unsigned __int32) const;
    char const *GetValue(unsigned __int32) const;
    void SetParam(char const *, __int32 const);
    void SetParam(char const *, char const *);
    char const *FindParam(char const *) const;
    bool FindIntParam(char const *, __int32 &) const;
    _inline void SetUserData(unsigned __int32);
    _inline unsigned __int32 GetUserData() const;
private:
    __int32 FindParamIndex(char const *) const;
    typedef std::vector<GSLobbySessionDesc::Param,std::allocator<GSLobbySessionDesc::Param> > ParamCont;
    std::vector<GSLobbySessionDesc::Param,std::allocator<GSLobbySessionDesc::Param> > m_param; // 0x0
    unsigned __int32 m_userData; // 0xC
public:
    _inline ~GSLobbySessionDesc(); /* compiler_generated() */
    _inline GSLobbySessionDesc &operator=(GSLobbySessionDesc const &); /* compiler_generated() */
};
static_assert(sizeof(GSLobbySessionDesc) == 16, "Invalid GSLobbySessionDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void GSLobbySessionDesc::SetUserData(unsigned __int32) // 0x10001F4D
{
    mangled_assert("?SetUserData@GSLobbySessionDesc@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 GSLobbySessionDesc::GetUserData() const // 0x10001D6A
{
    mangled_assert("?GetUserData@GSLobbySessionDesc@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __GSLOBBYSESSIONDESC_H__
/* combined */
#ifndef __GSLOBBYSESSIONDESC_H__
#define __GSLOBBYSESSIONDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSLobbySessionDesc
{
public:
    struct Param
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > value; // 0x18
        _inline Param(GSLobbySessionDesc::Param const &); /* compiler_generated() */
        Param(); /* compiler_generated() */
        _inline ~Param(); /* compiler_generated() */
        _inline GSLobbySessionDesc::Param &operator=(GSLobbySessionDesc::Param const &); /* compiler_generated() */
    };
    static_assert(sizeof(Param) == 48, "Invalid Param size");
    _inline GSLobbySessionDesc(GSLobbySessionDesc const &); /* compiler_generated() */
    GSLobbySessionDesc();
    void Clear();
    unsigned __int32 GetParamCount() const;
    char const *GetName(unsigned __int32) const;
    char const *GetValue(unsigned __int32) const;
    void SetParam(char const *, __int32 const);
    void SetParam(char const *, char const *);
    char const *FindParam(char const *) const;
    bool FindIntParam(char const *, __int32 &) const;
    _inline void SetUserData(unsigned __int32);
    _inline unsigned __int32 GetUserData() const;
private:
    __int32 FindParamIndex(char const *) const;
    typedef std::vector<GSLobbySessionDesc::Param,std::allocator<GSLobbySessionDesc::Param> > ParamCont;
    std::vector<GSLobbySessionDesc::Param,std::allocator<GSLobbySessionDesc::Param> > m_param; // 0x0
    unsigned __int32 m_userData; // 0xC
public:
    _inline ~GSLobbySessionDesc(); /* compiler_generated() */
    _inline GSLobbySessionDesc &operator=(GSLobbySessionDesc const &); /* compiler_generated() */
};
static_assert(sizeof(GSLobbySessionDesc) == 16, "Invalid GSLobbySessionDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void GSLobbySessionDesc::SetUserData(unsigned __int32) // 0x4708D2
{
    mangled_assert("?SetUserData@GSLobbySessionDesc@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 GSLobbySessionDesc::GetUserData() const // 0x46FB1C
{
    mangled_assert("?GetUserData@GSLobbySessionDesc@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __GSLOBBYSESSIONDESC_H__
#endif

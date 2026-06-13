#if 0
#ifndef __LOBBYSESSIONDESC_H__
#define __LOBBYSESSIONDESC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LobbySessionDesc
{
public:
    struct Param
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x0
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > value; // 0x18
        _inline Param(LobbySessionDesc::Param const &); /* compiler_generated() */
        _inline Param(); /* compiler_generated() */
        _inline ~Param(); /* compiler_generated() */
        _inline LobbySessionDesc::Param &operator=(LobbySessionDesc::Param const &); /* compiler_generated() */
    };
    static_assert(sizeof(Param) == 48, "Invalid Param size");
    _inline LobbySessionDesc(LobbySessionDesc const &); /* compiler_generated() */
    LobbySessionDesc();
    void Clear();
    unsigned __int32 GetParamCount() const;
    char const *GetName(unsigned __int32) const;
    wchar_t const *GetValue(unsigned __int32) const;
    void SetParam(char const *, __int32 const);
    void SetParam(char const *, wchar_t const *);
    wchar_t const *FindParam(char const *) const;
    bool FindIntParam(char const *, __int32 &) const;
private:
    __int32 FindParamIndex(char const *) const;
    typedef std::vector<LobbySessionDesc::Param,std::allocator<LobbySessionDesc::Param> > ParamCont;
    std::vector<LobbySessionDesc::Param,std::allocator<LobbySessionDesc::Param> > m_param; // 0x0
public:
    _inline ~LobbySessionDesc(); /* compiler_generated() */
    _inline LobbySessionDesc &operator=(LobbySessionDesc const &); /* compiler_generated() */
};
static_assert(sizeof(LobbySessionDesc) == 12, "Invalid LobbySessionDesc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOBBYSESSIONDESC_H__
#endif

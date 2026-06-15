#if 0
#ifndef __LUAUTILS_H__
#define __LUAUTILS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class __LCMsg
{
public:
    virtual void Write(char const *) const = 0;
    __LCMsg(__LCMsg const &); /* compiler_generated() */
    __LCMsg(); /* compiler_generated() */
    __LCMsg &operator=(__LCMsg const &); /* compiler_generated() */
};
static_assert(sizeof(__LCMsg) == 4, "Invalid __LCMsg size");

class __LCMsgTrace :
    public __LCMsg
{
public:
    virtual void Write(char const *) const override;
    __LCMsgTrace(__LCMsgTrace const &); /* compiler_generated() */
    __LCMsgTrace(); /* compiler_generated() */
    __LCMsgTrace &operator=(__LCMsgTrace const &); /* compiler_generated() */
};
static_assert(sizeof(__LCMsgTrace) == 4, "Invalid __LCMsgTrace size");

class __LCMsgWarning :
    public __LCMsg
{
private:
    unsigned long const m_id; // 0x4
public:
    __LCMsgWarning(__LCMsgWarning const &); /* compiler_generated() */
    __LCMsgWarning(unsigned long);
    virtual void Write(char const *) const override;
};
static_assert(sizeof(__LCMsgWarning) == 8, "Invalid __LCMsgWarning size");

/* ---------- prototypes */

extern void __LCGetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &min, long const &max, long &value, __LCMsg const &output);
extern void __LCGetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &min, float const &max, float &value, __LCMsg const &output);
extern void __LCGetVal<unsigned long>(LuaConfig &lua, char const *header, char const *field, unsigned long const &defval, unsigned long &value, __LCMsg const &output);
extern void __LCGetVal<vector3>(LuaConfig &lua, char const *header, char const *field, vector3 const &defval, vector3 &value, __LCMsg const &output);
extern void __LCGetVal<vector4>(LuaConfig &lua, char const *header, char const *field, vector4 const &defval, vector4 &value, __LCMsg const &output);
extern void __LCGetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &defval, long &value, __LCMsg const &output);
extern void __LCGetVal<bool>(LuaConfig &lua, char const *header, char const *field, bool const &defval, bool &value, __LCMsg const &output);
extern void __LCGetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &defval, float &value, __LCMsg const &output);
extern void __LCGetSetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &defval, long &value, __LCMsg const &output);
extern void __LCGetSetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &defval, float &value, __LCMsg const &output);
extern void __LCGetSetVal<bool>(LuaConfig &lua, char const *header, char const *field, bool const &defval, bool &value, __LCMsg const &output);
extern _inline void LCGetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &min, long const &max, long &value);
extern _inline void LCGetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &min, float const &max, float &value);
extern _inline void LCGetVal<unsigned long>(LuaConfig &lua, char const *header, char const *field, unsigned long const &defval, unsigned long &value);
extern _inline void LCGetVal<vector3>(LuaConfig &lua, char const *header, char const *field, vector3 const &defval, vector3 &value);
extern _inline void LCGetVal<vector4>(LuaConfig &lua, char const *header, char const *field, vector4 const &defval, vector4 &value);
extern _inline void LCGetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &defval, long &value);
extern _inline void LCGetVal<bool>(LuaConfig &lua, char const *header, char const *field, bool const &defval, bool &value);
extern _inline void LCGetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &defval, float &value);
extern _inline void LCGetSetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &defval, long &value);
extern _inline void LCGetSetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &defval, float &value);
extern _inline void LCGetSetVal<bool>(LuaConfig &lua, char const *header, char const *field, bool const &defval, bool &value);
extern _inline void LCGetString(LuaConfig &lua, char const *header, char const *field, char const *defstring, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &outstring);

/* ---------- globals */

/* ---------- public code */

void __LCGetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &min, long const &max, long &value, __LCMsg const &output) // 0x5FEAAE
{
    mangled_assert("??$__LCGetVal@J@@YGXAAVLuaConfig@@PBD1ABJ2AAJABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &min, float const &max, float &value, __LCMsg const &output) // 0x5FBA2D
{
    mangled_assert("??$__LCGetVal@M@@YGXAAVLuaConfig@@PBD1ABM2AAMABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetVal<unsigned long>(LuaConfig &lua, char const *header, char const *field, unsigned long const &defval, unsigned long &value, __LCMsg const &output) // 0x5FB9CA
{
    mangled_assert("??$__LCGetVal@K@@YGXAAVLuaConfig@@PBD1ABKAAKABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetVal<vector3>(LuaConfig &lua, char const *header, char const *field, vector3 const &defval, vector3 &value, __LCMsg const &output) // 0x5FBAFA
{
    mangled_assert("??$__LCGetVal@Vvector3@@@@YGXAAVLuaConfig@@PBD1ABVvector3@@AAV1@ABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetVal<vector4>(LuaConfig &lua, char const *header, char const *field, vector4 const &defval, vector4 &value, __LCMsg const &output) // 0x5FBB5A
{
    mangled_assert("??$__LCGetVal@Vvector4@@@@YGXAAVLuaConfig@@PBD1ABVvector4@@AAV1@ABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &defval, long &value, __LCMsg const &output) // 0x4FC124
{
    mangled_assert("??$__LCGetVal@J@@YGXAAVLuaConfig@@PBD1ABJAAJABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetVal<bool>(LuaConfig &lua, char const *header, char const *field, bool const &defval, bool &value, __LCMsg const &output) // 0x4FC187
{
    mangled_assert("??$__LCGetVal@_N@@YGXAAVLuaConfig@@PBD1AB_NAA_NABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &defval, float &value, __LCMsg const &output) // 0x4A33FF
{
    mangled_assert("??$__LCGetVal@M@@YGXAAVLuaConfig@@PBD1ABMAAMABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetSetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &defval, long &value, __LCMsg const &output) // 0x6C9A51
{
    mangled_assert("??$__LCGetSetVal@J@@YGXAAVLuaConfig@@PBD1ABJAAJABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetSetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &defval, float &value, __LCMsg const &output) // 0x6C9AC1
{
    mangled_assert("??$__LCGetSetVal@M@@YGXAAVLuaConfig@@PBD1ABMAAMABV__LCMsg@@@Z");
    todo("implement");
}

void __LCGetSetVal<bool>(LuaConfig &lua, char const *header, char const *field, bool const &defval, bool &value, __LCMsg const &output) // 0x6C9B3E
{
    mangled_assert("??$__LCGetSetVal@_N@@YGXAAVLuaConfig@@PBD1AB_NAA_NABV__LCMsg@@@Z");
    todo("implement");
}

_inline void LCGetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &min, long const &max, long &value) // 0x5FE81F
{
    mangled_assert("??$LCGetVal@J@@YGXAAVLuaConfig@@PBD1ABJ2AAJ@Z");
    todo("implement");
}

_inline void LCGetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &min, float const &max, float &value) // 0x5FB955
{
    mangled_assert("??$LCGetVal@M@@YGXAAVLuaConfig@@PBD1ABM2AAM@Z");
    todo("implement");
}

_inline void LCGetVal<unsigned long>(LuaConfig &lua, char const *header, char const *field, unsigned long const &defval, unsigned long &value) // 0x5FB92F
{
    mangled_assert("??$LCGetVal@K@@YGXAAVLuaConfig@@PBD1ABKAAK@Z");
    todo("implement");
}

_inline void LCGetVal<vector3>(LuaConfig &lua, char const *header, char const *field, vector3 const &defval, vector3 &value) // 0x5FB97E
{
    mangled_assert("??$LCGetVal@Vvector3@@@@YGXAAVLuaConfig@@PBD1ABVvector3@@AAV1@@Z");
    todo("implement");
}

_inline void LCGetVal<vector4>(LuaConfig &lua, char const *header, char const *field, vector4 const &defval, vector4 &value) // 0x5FB9A4
{
    mangled_assert("??$LCGetVal@Vvector4@@@@YGXAAVLuaConfig@@PBD1ABVvector4@@AAV1@@Z");
    todo("implement");
}

_inline void LCGetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &defval, long &value) // 0x4FBDD6
{
    mangled_assert("??$LCGetVal@J@@YGXAAVLuaConfig@@PBD1ABJAAJ@Z");
    todo("implement");
}

_inline void LCGetVal<bool>(LuaConfig &lua, char const *header, char const *field, bool const &defval, bool &value) // 0x4FBDFC
{
    mangled_assert("??$LCGetVal@_N@@YGXAAVLuaConfig@@PBD1AB_NAA_N@Z");
    todo("implement");
}

_inline void LCGetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &defval, float &value) // 0x4A2F97
{
    mangled_assert("??$LCGetVal@M@@YGXAAVLuaConfig@@PBD1ABMAAM@Z");
    todo("implement");
}

_inline void LCGetSetVal<long>(LuaConfig &lua, char const *header, char const *field, long const &defval, long &value) // 0x6C97E5
{
    mangled_assert("??$LCGetSetVal@J@@YGXAAVLuaConfig@@PBD1ABJAAJ@Z");
    todo("implement");
}

_inline void LCGetSetVal<float>(LuaConfig &lua, char const *header, char const *field, float const &defval, float &value) // 0x6C980B
{
    mangled_assert("??$LCGetSetVal@M@@YGXAAVLuaConfig@@PBD1ABMAAM@Z");
    todo("implement");
}

_inline void LCGetSetVal<bool>(LuaConfig &lua, char const *header, char const *field, bool const &defval, bool &value) // 0x6C9831
{
    mangled_assert("??$LCGetSetVal@_N@@YGXAAVLuaConfig@@PBD1AB_NAA_N@Z");
    todo("implement");
}

_inline void LCGetString(LuaConfig &lua, char const *header, char const *field, char const *defstring, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &outstring) // 0x5FBE31
{
    mangled_assert("?LCGetString@@YGXAAVLuaConfig@@PBD11AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __LUAUTILS_H__
/* combined */
#ifndef __LUAUTILS_H__
#define __LUAUTILS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class __LCMsg
{
public:
    virtual void Write(char const *) const = 0;
    __LCMsg(__LCMsg const &); /* compiler_generated() */
    __LCMsg(); /* compiler_generated() */
    __LCMsg &operator=(__LCMsg const &); /* compiler_generated() */
};
static_assert(sizeof(__LCMsg) == 4, "Invalid __LCMsg size");

class __LCMsgTrace :
    public __LCMsg
{
public:
    virtual void Write(char const *) const override;
    _inline __LCMsgTrace(__LCMsgTrace const &); /* compiler_generated() */
    _inline __LCMsgTrace(); /* compiler_generated() */
    _inline __LCMsgTrace &operator=(__LCMsgTrace const &); /* compiler_generated() */
};
static_assert(sizeof(__LCMsgTrace) == 4, "Invalid __LCMsgTrace size");

class __LCMsgWarning :
    public __LCMsg
{
private:
    unsigned long const m_id; // 0x4
public:
    _inline __LCMsgWarning(__LCMsgWarning const &); /* compiler_generated() */
    __LCMsgWarning(unsigned long);
    virtual void Write(char const *) const override;
};
static_assert(sizeof(__LCMsgWarning) == 8, "Invalid __LCMsgWarning size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUAUTILS_H__
#endif

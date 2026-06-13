#if 0
#ifndef __ATITEMPLATE_H__
#define __ATITEMPLATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ATITemplateHealth :
    public ATITemplate
{
public:
    ATITemplateHealth(ATITemplateHealth const &); /* compiler_generated() */
    ATITemplateHealth(LuaConfig &, char const *);
    vector4 const *ATIGetHealthColour(float) const;
    vector4 const *ATIGetHealthBackgroundColour(float) const;
private:
    vector4 m_healthColourOK; // 0x18
    vector4 m_healthColourHurt; // 0x28
    vector4 m_healthColourDying; // 0x38
    vector4 m_healthColourBGOK; // 0x48
    vector4 m_healthColourBGHurt; // 0x58
    vector4 m_healthColourBGDying; // 0x68
    static _inline bool sortCB(ATIItem2D const *a, ATIItem2D const *b);
public:
    _inline ~ATITemplateHealth(); /* compiler_generated() */
    ATITemplateHealth &operator=(ATITemplateHealth const &); /* compiler_generated() */
};
static_assert(sizeof(ATITemplateHealth) == 120, "Invalid ATITemplateHealth size");

class ATITemplateSobs :
    public ATITemplateHealth
{
public:
    ATITemplateSobs(ATITemplateSobs const &); /* compiler_generated() */
    ATITemplateSobs(LuaConfig &, char const *);
    void display(SobWithMesh const *, float, vector4 const &, unsigned __int32);
    void display(Sob *, unsigned __int32);
    void display(Missile *, unsigned __int32);
    void display(Selection const &, OrderFeedbackValue const &, unsigned __int32);
    void display(Squadron const *, OrderFeedbackValue const &, unsigned __int32);
    unsigned __int32 computeTOParams(vector4 *, ATIParameter *, SobWithMesh const *, vector4 const *, vector4 const *, unsigned __int32);
private:
    vector4 m_tacticalIconColour; // 0x78
    vector4 m_tacticalIconColourFar; // 0x88
    float m_clampATIWidth; // 0x98
    float m_clampATIHeight; // 0x9C
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_RUFormatString; // 0xA0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_totalRUFormatString; // 0xB8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_unknownRUFormatString; // 0xD0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_unknownTotalRUFormatString; // 0xE8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_gateCostFormatString; // 0x100
    vector4 m_commandColourScalar; // 0x118
    vector4 m_cloakColour; // 0x128
    vector4 m_defenseFieldColour; // 0x138
    vector4 m_EMPColour; // 0x148
    float m_EMPShieldLevelIgnore; // 0x158
public:
    _inline ~ATITemplateSobs(); /* compiler_generated() */
    ATITemplateSobs &operator=(ATITemplateSobs const &); /* compiler_generated() */
};
static_assert(sizeof(ATITemplateSobs) == 348, "Invalid ATITemplateSobs size");

class ATITemplateSubsystem :
    public ATITemplateHealth
{
public:
    ATITemplateSubsystem(ATITemplateSubsystem const &); /* compiler_generated() */
    ATITemplateSubsystem(LuaConfig &, char const *);
    void display(SubSystem *, OrderFeedbackValue const &, unsigned __int32);
    _inline ~ATITemplateSubsystem(); /* compiler_generated() */
    ATITemplateSubsystem &operator=(ATITemplateSubsystem const &); /* compiler_generated() */
};
static_assert(sizeof(ATITemplateSubsystem) == 120, "Invalid ATITemplateSubsystem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_5E4707(ATIItem2D const *, ATIItem2D const *);
_inline bool ATITemplateHealth::sortCB(ATIItem2D const *a, ATIItem2D const *b) // 0x5E4707
{
    mangled_assert("?sortCB@ATITemplateHealth@@CG_NPBVATIItem2D@@0@Z");
    todo("implement");
    bool __result = _sub_5E4707(a, b);
    return __result;
}

/* ---------- private code */

#endif // __ATITEMPLATE_H__
#endif

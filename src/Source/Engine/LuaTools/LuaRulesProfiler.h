#if 0
#ifndef __LUARULESPROFILER_H__
#define __LUARULESPROFILER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum LuaRulesProfilerType
{
    RP_None = 0,
    RP_Scar,
    RP_Max,
};

/* ---------- definitions */

class LuaRulesProfiler
{
public:
    struct LuaRulesProfilerElement
    {
        _inline LuaRulesProfilerElement(LuaRulesProfiler::LuaRulesProfilerElement const &); /* compiler_generated() */
        _inline LuaRulesProfilerElement(char const *, float, LuaRulesProfilerType);
        LuaRulesProfilerType m_type; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_ruleName; // 0x4
        float m_fpsArray[20]; // 0x1C
        unsigned __int32 m_size; // 0x6C
        float m_totalFps; // 0x70
        float m_averageFps; // 0x74
        unsigned __int32 m_fpsIndex; // 0x78
        bool m_updated; // 0x7C
        _inline ~LuaRulesProfilerElement(); /* compiler_generated() */
        LuaRulesProfiler::LuaRulesProfilerElement &operator=(LuaRulesProfiler::LuaRulesProfilerElement const &); /* compiler_generated() */
    };
    static_assert(sizeof(LuaRulesProfilerElement) == 128, "Invalid LuaRulesProfilerElement size");
    class LuaRulesProfilerSearch :
        public std::binary_function<LuaRulesProfiler::LuaRulesProfilerElement,char const *,bool>
    {
    public:
        bool operator()(LuaRulesProfiler::LuaRulesProfilerElement const &, char const *) const;
    };
    static_assert(sizeof(LuaRulesProfilerSearch) == 1, "Invalid LuaRulesProfilerSearch size");
    static _inline void SetActiveType(LuaRulesProfilerType type);
    static void PreUpdate();
    static void Update(char const *ruleName, float timer);
    static void PostUpdate(float totalTime);
    static void Display();
    static _inline void Activate(bool on);
    static bool IsRunning();
    typedef std::list<LuaRulesProfiler::LuaRulesProfilerElement,std::allocator<LuaRulesProfiler::LuaRulesProfilerElement> > LuaRulesProfilerContainer;
private:
    static std::list<LuaRulesProfiler::LuaRulesProfilerElement,std::allocator<LuaRulesProfiler::LuaRulesProfilerElement> > m_listofitems;
    static LuaRulesProfilerType m_activetype;
    static bool m_running;
};
static_assert(sizeof(LuaRulesProfiler) == 1, "Invalid LuaRulesProfiler size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline LuaRulesProfiler::LuaRulesProfilerElement::LuaRulesProfilerElement(char const *, float, LuaRulesProfilerType) // 0x5CBB27
{
    mangled_assert("??0LuaRulesProfilerElement@LuaRulesProfiler@@QAE@PBDMW4LuaRulesProfilerType@@@Z");
    todo("implement");
}

_inline bool LuaRulesProfiler::LuaRulesProfilerSearch::operator()(LuaRulesProfiler::LuaRulesProfilerElement const &, char const *) const // 0x5CBC43
{
    mangled_assert("??RLuaRulesProfilerSearch@LuaRulesProfiler@@QBE_NABULuaRulesProfilerElement@1@PBD@Z");
    todo("implement");
}

_inline void LuaRulesProfiler::SetActiveType(LuaRulesProfilerType type) // 0x5CBF05
{
    mangled_assert("?SetActiveType@LuaRulesProfiler@@SGXW4LuaRulesProfilerType@@@Z");
    todo("implement");
}

_inline void LuaRulesProfiler::Activate(bool on) // 0x5C5244
{
    mangled_assert("?Activate@LuaRulesProfiler@@SGX_N@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __LUARULESPROFILER_H__
#endif

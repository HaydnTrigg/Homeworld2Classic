#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Engine\LuaTools\LuaRulesProfiler.h>
#include <luaconfig\luabinding.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <algorithm>
#include <xutility>
#include <profile\profile.h>
#include <utility>
#include <boost\config.hpp>
#include <iosfwd>
#include <iostream>
#include <map>
#include <xtree>
#include <xmemory>
#include <platform\timer.h>
#include <Scar\LuaRuleSystem.h>
#include <boost\utility.hpp>
#include <boost\utility\addressof.hpp>
#include <fileio\bytestream.h>
#include <Engine\savestream.h>
#include <fileio\fileioexports.h>
#include <boost\utility\base_from_member.hpp>
#include <boost\utility_fwd.hpp>
#include <luaconfig\luaconfig.h>
#include <vector>
#include <boost\detail\workaround.hpp>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <boost\next_prior.hpp>
#include <boost\noncopyable.hpp>
#include <Engine\savegamedef.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\savegameimpl.h>
#include <boost\checked_delete.hpp>
#include <Engine\savegamedata.h>
#include <fileio\filestream.h>
#include <list>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::Rule
{
    fstring<256> funcName; // 0x0
    bool killed; // 0x101
    float timer; // 0x104
    float interval; // 0x108
    Rule(); /* compiler_generated() */
    ~Rule(); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::Rule) == 268, "Invalid `anonymous-namespace'::Rule size");

struct ByRuleName
{
    _inline ByRuleName(char const *);
    bool operator()(`anonymous-namespace'::Rule *);
    char const *m_funcName; // 0x0
};
static_assert(sizeof(ByRuleName) == 4, "Invalid ByRuleName size");

typedef std::list<`anonymous namespace'::Rule *,std::allocator<`anonymous namespace'::Rule *> > RuleList;
typedef `anonymous-namespace'::Rule ?A0xdc2ba060::Rule;

/* ---------- prototypes */

/* ---------- globals */

extern bool g_profile; // 0x8611EA
extern SaveData const LuaRuleSystem::m_saveData[1]; // 0x7BF5A0
extern char const LuaRuleSystem::m_saveToken[14]; // 0x7BF5C0

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_70F30E(LuaRuleSystem *const, LuaConfig *);
void LuaRuleSystem::Init(LuaConfig *) // 0x70F30E
{
    mangled_assert("?Init@LuaRuleSystem@@QAEXPAVLuaConfig@@@Z");
    todo("implement");
    _sub_70F30E(this, arg);
}

_extern void _sub_70F69D(LuaRuleSystem *const);
void LuaRuleSystem::Shutdown() // 0x70F69D
{
    mangled_assert("?Shutdown@LuaRuleSystem@@QAEXXZ");
    todo("implement");
    _sub_70F69D(this);
}

_extern _sub_70EF04(LuaRuleSystem *const);
LuaRuleSystem::LuaRuleSystem() // 0x70EF04
{
    mangled_assert("??0LuaRuleSystem@@QAE@XZ");
    todo("implement");
    _sub_70EF04(this);
}

_extern void _sub_70EF59(LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,LuaRuleSystem> > *const);
_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,LuaRuleSystem> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,LuaRuleSystem> >() // 0x70EF59
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVLuaRuleSystem@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_70EF59(this);
}

_extern void _sub_70EF5F(LuaBinding::ObjInternal1<char const *,bool,LuaBinding::Functor1MemberNonConst<char const *,bool,LuaRuleSystem> > *const);
_inline LuaBinding::ObjInternal1<char const *,bool,LuaBinding::Functor1MemberNonConst<char const *,bool,LuaRuleSystem> >::~ObjInternal1<char const *,bool,LuaBinding::Functor1MemberNonConst<char const *,bool,LuaRuleSystem> >() // 0x70EF5F
{
    mangled_assert("??1?$ObjInternal1@PBD_NV?$Functor1MemberNonConst@PBD_NVLuaRuleSystem@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_70EF5F(this);
}

_extern void _sub_70EF65(LuaBinding::ObjInternal2<char const *,float,void,LuaBinding::Functor2MemberNonConst<char const *,float,void,LuaRuleSystem> > *const);
_inline LuaBinding::ObjInternal2<char const *,float,void,LuaBinding::Functor2MemberNonConst<char const *,float,void,LuaRuleSystem> >::~ObjInternal2<char const *,float,void,LuaBinding::Functor2MemberNonConst<char const *,float,void,LuaRuleSystem> >() // 0x70EF65
{
    mangled_assert("??1?$ObjInternal2@PBDMXV?$Functor2MemberNonConst@PBDMXVLuaRuleSystem@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_70EF65(this);
}

_extern void _sub_70EF97(LuaRuleSystem::Data *const);
_inline LuaRuleSystem::Data::~Data() // 0x70EF97
{
    mangled_assert("??1Data@LuaRuleSystem@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_70EF97(this);
}

_extern void _sub_70EFB6(LuaRuleSystem *const);
LuaRuleSystem::~LuaRuleSystem() // 0x70EFB6
{
    mangled_assert("??1LuaRuleSystem@@UAE@XZ");
    todo("implement");
    _sub_70EFB6(this);
}

_extern void _sub_70F5A3(LuaRuleSystem *const, float);
void LuaRuleSystem::RunRules(float) // 0x70F5A3
{
    mangled_assert("?RunRules@LuaRuleSystem@@QAEXM@Z");
    todo("implement");
    _sub_70F5A3(this, arg);
}

_extern void _sub_70F2DE(LuaRuleSystem *const);
void LuaRuleSystem::DumpRules() // 0x70F2DE
{
    mangled_assert("?DumpRules@LuaRuleSystem@@QAEXXZ");
    todo("implement");
    _sub_70F2DE(this);
}

_extern _sub_70EEB6(ByRuleName *const, char const *);
_inline ByRuleName::ByRuleName(char const *) // 0x70EEB6
{
    mangled_assert("??0ByRuleName@@QAE@PBD@Z");
    todo("implement");
    _sub_70EEB6(this, arg);
}

_extern _sub_70EEC1(LuaRuleSystem::Data *const);
_inline LuaRuleSystem::Data::Data() // 0x70EEC1
{
    mangled_assert("??0Data@LuaRuleSystem@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_70EEC1(this);
}

_extern void _sub_70F41A(LuaRuleSystem *const, char const *);
void LuaRuleSystem::Rule_Add(char const *) // 0x70F41A
{
    mangled_assert("?Rule_Add@LuaRuleSystem@@AAEXPBD@Z");
    todo("implement");
    _sub_70F41A(this, arg);
}

_extern bool _sub_70F530(LuaRuleSystem *const, char const *);
bool LuaRuleSystem::Rule_Exists(char const *) // 0x70F530
{
    mangled_assert("?Rule_Exists@LuaRuleSystem@@AAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_70F530(this, arg);
    return __result;
}

_extern void _sub_70F555(LuaRuleSystem *const, char const *);
void LuaRuleSystem::Rule_Remove(char const *) // 0x70F555
{
    mangled_assert("?Rule_Remove@LuaRuleSystem@@AAEXPBD@Z");
    todo("implement");
    _sub_70F555(this, arg);
}

_extern void _sub_70F49E(LuaRuleSystem *const, char const *, float);
void LuaRuleSystem::Rule_AddInterval(char const *, float) // 0x70F49E
{
    mangled_assert("?Rule_AddInterval@LuaRuleSystem@@AAEXPBDM@Z");
    todo("implement");
    _sub_70F49E(this, arg, arg);
}

_extern void _sub_70E73D(void *, SaveGameData *, SaveType);
void LuaRuleSystem::savePimpl(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x70E73D
{
    mangled_assert("?savePimpl@LuaRuleSystem@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_70E73D(objectPtr, saveGameData, savetype);
}

_extern void _sub_70E7E4(void *, SaveGameData *);
void LuaRuleSystem::restorePimpl(void *objectPtr, SaveGameData *saveGameData) // 0x70E7E4
{
    mangled_assert("?restorePimpl@LuaRuleSystem@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_70E7E4(objectPtr, saveGameData);
}

_extern void _sub_70F8BF(LuaRuleSystem *const);
void LuaRuleSystem::postRestore() // 0x70F8BF
{
    mangled_assert("?postRestore@LuaRuleSystem@@UAEXXZ");
    todo("implement");
    _sub_70F8BF(this);
}

_extern bool _sub_70F8CE(LuaRuleSystem *const, SaveGameData *);
bool LuaRuleSystem::restore(SaveGameData *) // 0x70F8CE
{
    mangled_assert("?restore@LuaRuleSystem@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_70F8CE(this, arg);
    return __result;
}

_extern bool _sub_70F90C(LuaRuleSystem *const, SaveGameData *, SaveType);
bool LuaRuleSystem::save(SaveGameData *, SaveType) // 0x70F90C
{
    mangled_assert("?save@LuaRuleSystem@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_70F90C(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <luaconfig\luabinding.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <math.h>
#include <list>
#include <luaconfig\luaconfig.h>
#include <Mathlib\vector3.h>
#include <lua.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\luamathbinding.h>
#include <profile\profile.h>
#include <iostream>
#include <fileio\filepath.h>
#include <Ship\FormationPatternManager.h>
#include <Ship\FormationPattern.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void formationSlot(vector3 position, vector3 heading, vector3 up);
extern bool formationPatternManagerStartup();
extern bool formationPatternManagerShutdown();

/* ---------- globals */

extern FormationPatternManager *FormationPatternManager::s_instance; // 0x843F04

/* ---------- private variables */

_static
{
    extern FormationPattern *currentFormationPattern; // 0x843F08
}

/* ---------- public code */

FormationPatternManager *FormationPatternManager::getInstance() // 0x4B60AB
{
    mangled_assert("?getInstance@FormationPatternManager@@SGPAV1@XZ");
    todo("implement");
}

bool FormationPatternManager::release() // 0x4B63A6
{
    mangled_assert("?release@FormationPatternManager@@SG_NXZ");
    todo("implement");
}

FormationPatternManager *FormationPatternManager::create() // 0x4B6002
{
    mangled_assert("?create@FormationPatternManager@@CGPAV1@XZ");
    todo("implement");
}

FormationPatternManager::FormationPatternManager() // 0x4B5B3F
{
    mangled_assert("??0FormationPatternManager@@AAE@XZ");
    todo("implement");
}

_inline FormationPattern::FormationSlot::FormationSlot() // 0x4B5B4C
{
    mangled_assert("??0FormationSlot@FormationPattern@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<vector3,vector3,vector3,void,LuaBinding::Functor3Free<vector3,vector3,vector3,void> >::~ObjInternal3<vector3,vector3,vector3,void,LuaBinding::Functor3Free<vector3,vector3,vector3,void> >() // 0x4B5B4F
{
    mangled_assert("??1?$ObjInternal3@Vvector3@@V1@V1@XV?$Functor3Free@Vvector3@@V1@V1@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline FormationPattern::~FormationPattern() // 0x4B5B5F
{
    mangled_assert("??1FormationPattern@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

FormationPatternManager::~FormationPatternManager() // 0x4B5B72
{
    mangled_assert("??1FormationPatternManager@@AAE@XZ");
    todo("implement");
}

void FormationPatternManager::resetPatterns() // 0x4B63CA
{
    mangled_assert("?resetPatterns@FormationPatternManager@@QAEXXZ");
    todo("implement");
}

FormationPattern *FormationPatternManager::getPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4B60CF
{
    mangled_assert("?getPattern@FormationPatternManager@@QAEPAVFormationPattern@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void formationSlot(vector3 position, vector3 heading, vector3 up) // 0x4B6060
{
    mangled_assert("?formationSlot@@YGXVvector3@@00@Z");
    todo("implement");
}

FormationPattern *FormationPatternManager::loadPattern(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4B6111
{
    mangled_assert("?loadPattern@FormationPatternManager@@AAEPAVFormationPattern@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool formationPatternManagerStartup() // 0x4B6055
{
    mangled_assert("?formationPatternManagerStartup@@YG_NXZ");
    todo("implement");
}

bool formationPatternManagerShutdown() // 0x4B6050
{
    mangled_assert("?formationPatternManagerShutdown@@YG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif

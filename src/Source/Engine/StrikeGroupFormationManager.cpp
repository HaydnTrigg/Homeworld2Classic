#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\luamathbinding.h>
#include <Tactics.h>
#include <Mathlib\mathutil.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <fileio\filepath.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <StrikeGroup.h>
#include <SquadronList.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <luaconfig\luabinding.h>
#include <boost\scoped_ptr.hpp>
#include <FamilyListMgr.h>
#include <FamilyList.h>
#include <Family.h>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <StrikeGroupFormationNode.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <savegamedef.h>
#include <StrikeGroupFormationManager.h>
#include <StrikeGroupFormation.h>
#include <wchar.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<StrikeGroupFormation *,std::allocator<StrikeGroupFormation *> > StrikeGroupFormationVector;

/* ---------- prototypes */

/* ---------- globals */

extern StrikeGroupFormationManager *StrikeGroupFormationManager::s_instance; // 0x84450C

/* ---------- private variables */

_static
{
    extern StrikeGroupFormation *g_currentStrikeGroupFormation; // 0x844510
}

/* ---------- public code */

StrikeGroupFormationManager *StrikeGroupFormationManager::getInstance() // 0x508EE8
{
    mangled_assert("?getInstance@StrikeGroupFormationManager@@SGPAV1@XZ");
    todo("implement");
}

bool StrikeGroupFormationManager::release() // 0x509103
{
    mangled_assert("?release@StrikeGroupFormationManager@@SG_NXZ");
    todo("implement");
}

StrikeGroupFormationManager *StrikeGroupFormationManager::create() // 0x508DFF
{
    mangled_assert("?create@StrikeGroupFormationManager@@CGPAV1@XZ");
    todo("implement");
}

StrikeGroupFormationManager::StrikeGroupFormationManager() // 0x508A3F
{
    mangled_assert("??0StrikeGroupFormationManager@@AAE@XZ");
    todo("implement");
}

StrikeGroupFormationManager::~StrikeGroupFormationManager() // 0x508BD2
{
    mangled_assert("??1StrikeGroupFormationManager@@AAE@XZ");
    todo("implement");
}

StrikeGroupFormation *StrikeGroupFormationManager::getFormation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x508E4B
{
    mangled_assert("?getFormation@StrikeGroupFormationManager@@QAEPAVStrikeGroupFormation@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

StrikeGroupFormation *StrikeGroupFormationManager::loadFormation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x508EFF
{
    mangled_assert("?loadFormation@StrikeGroupFormationManager@@AAEPAVStrikeGroupFormation@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

char const *StrikeGroupFormationManager::getFormationNameFromID(unsigned __int32) // 0x508E93
{
    mangled_assert("?getFormationNameFromID@StrikeGroupFormationManager@@QAEPBDI@Z");
    todo("implement");
}

bool StrikeGroupFormationManager::startup() // 0x509135
{
    mangled_assert("?startup@StrikeGroupFormationManager@@SG_NXZ");
    todo("implement");
}

bool StrikeGroupFormationManager::shutdown() // 0x509127
{
    mangled_assert("?shutdown@StrikeGroupFormationManager@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif

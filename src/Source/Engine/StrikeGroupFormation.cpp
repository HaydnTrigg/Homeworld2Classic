#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <Mathlib\vector3.h>
#include <savegamedef.h>
#include <StrikeGroupFormationNode.h>
#include <StrikeGroupFormation.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_508785(StrikeGroupFormation *const);
StrikeGroupFormation::StrikeGroupFormation() // 0x508785
{
    mangled_assert("??0StrikeGroupFormation@@QAE@XZ");
    todo("implement");
    _sub_508785(this);
}

_extern _sub_508747(StrikeGroupFormation *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
StrikeGroupFormation::StrikeGroupFormation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x508747
{
    mangled_assert("??0StrikeGroupFormation@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_508747(this, arg);
}

_extern void _sub_5087E8(StrikeGroupFormation *const);
StrikeGroupFormation::~StrikeGroupFormation() // 0x5087E8
{
    mangled_assert("??1StrikeGroupFormation@@QAE@XZ");
    todo("implement");
    _sub_5087E8(this);
}

_extern StrikeGroupFormationNode *_sub_508822(StrikeGroupFormation *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
StrikeGroupFormationNode *StrikeGroupFormation::getNodeByName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x508822
{
    mangled_assert("?getNodeByName@StrikeGroupFormation@@QAEPAVStrikeGroupFormationNode@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    StrikeGroupFormationNode * __result = _sub_508822(this, arg);
    return __result;
}

_extern void _sub_508837(StrikeGroupFormation *const, StrikeGroupFormationNode *);
void StrikeGroupFormation::setRootNode(StrikeGroupFormationNode *) // 0x508837
{
    mangled_assert("?setRootNode@StrikeGroupFormation@@QAEXPAVStrikeGroupFormationNode@@@Z");
    todo("implement");
    _sub_508837(this, arg);
}

/* ---------- private code */
#endif

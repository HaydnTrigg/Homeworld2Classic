#if 0
/* ---------- headers */

#include "decomp.h"
#include <weaponstaticinfo.h>
#include <xstring>
#include <GunBinding.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <profile\profile.h>
#include <iostream>
#include <Collision\Primitives\obb.h>
#include <Mathlib\matrix3.h>
#include <Race.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <App\Hw2Identify.h>
#include <task.h>
#include <stack>
#include <new>
#include <WeaponClassSpecificInfo.h>
#include <xstddef>
#include <type_traits>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <BuildManager.h>
#include <Modifiers\ModifierEffect.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <playerresourcetype.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <list>
#include <commandtype.h>
#include <Mathlib\vector4.h>
#include <GameEventDefs.h>
#include <map>
#include <GameEventSys.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <ResearchData.h>
#include <DependencyData.h>
#include <Modifiers\ModifierAbility.h>
#include <savegameimpl.h>
#include <Player.h>
#include <SquadronList.h>
#include <debug\db.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <selection.h>
#include <shipstatic.h>
#include <savegamedef.h>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <boost\detail\shared_count.hpp>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <boost\detail\lwm_win32.hpp>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <ShieldTypes.h>
#include <lua.h>
#include <ResearchManager.h>
#include <wchar.h>
#include <Tactics.h>
#include <string>
#include <sobid.h>
#include <algorithm>
#include <abilities.h>

/* ---------- constants */

/* ---------- definitions */

class ByIDSearch
{
public:
    _inline ByIDSearch(unsigned __int32);
    bool operator()(ResearchData *);
private:
    unsigned __int32 m_researchId; // 0x0
};
static_assert(sizeof(ByIDSearch) == 4, "Invalid ByIDSearch size");

/* ---------- prototypes */

/* ---------- globals */

extern char const ResearchManager::m_saveToken[16]; // 0x798B98
extern SaveData const ResearchManager::m_saveData[8]; // 0x798BA8

/* ---------- private variables */

/* ---------- public code */

ResearchManager::ResearchManager(Player *) // 0x4EDD37
{
    mangled_assert("??0ResearchManager@@QAE@PAVPlayer@@@Z");
    todo("implement");
}

_inline std::_List_buy<ResearchData *,std::allocator<ResearchData *> >::~_List_buy<ResearchData *,std::allocator<ResearchData *> >() // 0x4EDE1B
{
    mangled_assert("??1?$_List_buy@PAVResearchData@@V?$allocator@PAVResearchData@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaConfig::Iterator::~Iterator() // 0x4EDE36
{
    mangled_assert("??1Iterator@LuaConfig@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ResearchManager::~ResearchManager() // 0x4EDE3B
{
    mangled_assert("??1ResearchManager@@UAE@XZ");
    todo("implement");
}

_inline ByIDSearch::ByIDSearch(unsigned __int32) // 0x4EDD1B
{
    mangled_assert("??0ByIDSearch@@QAE@I@Z");
    todo("implement");
}

_inline bool ByIDSearch::operator()(ResearchData *) // 0x4EDF9D
{
    mangled_assert("??RByIDSearch@@QAE_NPAVResearchData@@@Z");
    todo("implement");
}

void ResearchManager::LoadScripts(char const *) // 0x4EE4F3
{
    mangled_assert("?LoadScripts@ResearchManager@@QAEXPBD@Z");
    todo("implement");
}

bool ResearchManager::CanResearchDisplayFamily(unsigned __int32) // 0x4EE031
{
    mangled_assert("?CanResearchDisplayFamily@ResearchManager@@QAE_NI@Z");
    todo("implement");
}

void ResearchManager::AddResearchItem(ResearchData *) // 0x4EDFC8
{
    mangled_assert("?AddResearchItem@ResearchManager@@QAEXPAVResearchData@@@Z");
    todo("implement");
}

ResearchData *ResearchManager::GetResearchData(unsigned __int32) // 0x4EE331
{
    mangled_assert("?GetResearchData@ResearchManager@@QAEPAVResearchData@@I@Z");
    todo("implement");
}

bool ResearchManager::ResearchItemIsDone(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x4EE69E
{
    mangled_assert("?ResearchItemIsDone@ResearchManager@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool ResearchManager::ResearchItemIsDone(unsigned __int32) const // 0x4EE6B6
{
    mangled_assert("?ResearchItemIsDone@ResearchManager@@QBE_NI@Z");
    todo("implement");
}

bool ResearchManager::update(float) // 0x4EEB81
{
    mangled_assert("?update@ResearchManager@@QAE_NM@Z");
    todo("implement");
}

void ResearchManager::CheckLockedResearch() // 0x4EE1AA
{
    mangled_assert("?CheckLockedResearch@ResearchManager@@QAEXXZ");
    todo("implement");
}

void ResearchManager::CheckPendingResearch() // 0x4EE2CD
{
    mangled_assert("?CheckPendingResearch@ResearchManager@@QAEXXZ");
    todo("implement");
}

unsigned __int32 ResearchManager::getNumberOfActiveResearchItems() const // 0x4EEA1D
{
    mangled_assert("?getNumberOfActiveResearchItems@ResearchManager@@QBEIXZ");
    todo("implement");
}

std::list<ResearchData *,std::allocator<ResearchData *> > const &ResearchManager::getMasterResearchList() const // 0x4EEA19
{
    mangled_assert("?getMasterResearchList@ResearchManager@@QBEABV?$list@PAVResearchData@@V?$allocator@PAVResearchData@@@std@@@std@@XZ");
    todo("implement");
}

bool ResearchManager::StartResearch(unsigned __int32, float, bool) // 0x4EE75B
{
    mangled_assert("?StartResearch@ResearchManager@@QAE_NIM_N@Z");
    todo("implement");
}

bool ResearchManager::MoveResearchToTop(unsigned __int32, bool) // 0x4EE607
{
    mangled_assert("?MoveResearchToTop@ResearchManager@@QAE_NI_N@Z");
    todo("implement");
}

void ResearchManager::CancelAllResearch() // 0x4EE07E
{
    mangled_assert("?CancelAllResearch@ResearchManager@@QAEXXZ");
    todo("implement");
}

bool ResearchManager::CancelResearch(unsigned __int32, bool) // 0x4EE0E4
{
    mangled_assert("?CancelResearch@ResearchManager@@QAE_NI_N@Z");
    todo("implement");
}

bool ResearchManager::RestrictResearch(unsigned __int32) // 0x4EE6DB
{
    mangled_assert("?RestrictResearch@ResearchManager@@QAE_NI@Z");
    todo("implement");
}

bool ResearchManager::UnrestrictResearch(unsigned __int32) // 0x4EE899
{
    mangled_assert("?UnrestrictResearch@ResearchManager@@QAE_NI@Z");
    todo("implement");
}

void ResearchManager::GrantAllResearch() // 0x4EE359
{
    mangled_assert("?GrantAllResearch@ResearchManager@@QAEXXZ");
    todo("implement");
}

bool ResearchManager::GrantResearch(unsigned __int32) // 0x4EE432
{
    mangled_assert("?GrantResearch@ResearchManager@@QAE_NI@Z");
    todo("implement");
}

bool ResearchManager::UIResearchListChangedSinceLastCheck() // 0x4EE889
{
    mangled_assert("?UIResearchListChangedSinceLastCheck@ResearchManager@@QAE_NXZ");
    todo("implement");
}

void ResearchManager::ResearchListsChanged() // 0x4EE6D6
{
    mangled_assert("?ResearchListsChanged@ResearchManager@@AAEXXZ");
    todo("implement");
}

void ResearchManager::ApplyAllUpgradesToShip(Ship *) // 0x4EE011
{
    mangled_assert("?ApplyAllUpgradesToShip@ResearchManager@@QAEXPAVShip@@@Z");
    todo("implement");
}

void ResearchManager::CheckResearchTree() // 0x4EE31C
{
    mangled_assert("?CheckResearchTree@ResearchManager@@QAEXXZ");
    todo("implement");
}

void ResearchManager::postRestore() // 0x4EEA82
{
    mangled_assert("?postRestore@ResearchManager@@UAEXXZ");
    todo("implement");
}

bool ResearchManager::restore(SaveGameData *) // 0x4EEAFE
{
    mangled_assert("?restore@ResearchManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ResearchManager::save(SaveGameData *, SaveType) // 0x4EEB3C
{
    mangled_assert("?save@ResearchManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

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

_extern _sub_4EDD37(ResearchManager *const, Player *);
ResearchManager::ResearchManager(Player *) // 0x4EDD37
{
    mangled_assert("??0ResearchManager@@QAE@PAVPlayer@@@Z");
    todo("implement");
    _sub_4EDD37(this, arg);
}

_extern void _sub_4EDE1B(std::_List_buy<ResearchData *,std::allocator<ResearchData *> > *const);
_inline std::_List_buy<ResearchData *,std::allocator<ResearchData *> >::~_List_buy<ResearchData *,std::allocator<ResearchData *> >() // 0x4EDE1B
{
    mangled_assert("??1?$_List_buy@PAVResearchData@@V?$allocator@PAVResearchData@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4EDE1B(this);
}

_extern void _sub_4EDE36(LuaConfig::Iterator *const);
_inline LuaConfig::Iterator::~Iterator() // 0x4EDE36
{
    mangled_assert("??1Iterator@LuaConfig@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4EDE36(this);
}

_extern void _sub_4EDE3B(ResearchManager *const);
ResearchManager::~ResearchManager() // 0x4EDE3B
{
    mangled_assert("??1ResearchManager@@UAE@XZ");
    todo("implement");
    _sub_4EDE3B(this);
}

_extern _sub_4EDD1B(ByIDSearch *const, unsigned __int32);
_inline ByIDSearch::ByIDSearch(unsigned __int32) // 0x4EDD1B
{
    mangled_assert("??0ByIDSearch@@QAE@I@Z");
    todo("implement");
    _sub_4EDD1B(this, arg);
}

_extern bool _sub_4EDF9D(ByIDSearch *const, ResearchData *);
_inline bool ByIDSearch::operator()(ResearchData *) // 0x4EDF9D
{
    mangled_assert("??RByIDSearch@@QAE_NPAVResearchData@@@Z");
    todo("implement");
    bool __result = _sub_4EDF9D(this, arg);
    return __result;
}

_extern void _sub_4EE4F3(ResearchManager *const, char const *);
void ResearchManager::LoadScripts(char const *) // 0x4EE4F3
{
    mangled_assert("?LoadScripts@ResearchManager@@QAEXPBD@Z");
    todo("implement");
    _sub_4EE4F3(this, arg);
}

_extern bool _sub_4EE031(ResearchManager *const, unsigned __int32);
bool ResearchManager::CanResearchDisplayFamily(unsigned __int32) // 0x4EE031
{
    mangled_assert("?CanResearchDisplayFamily@ResearchManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_4EE031(this, arg);
    return __result;
}

_extern void _sub_4EDFC8(ResearchManager *const, ResearchData *);
void ResearchManager::AddResearchItem(ResearchData *) // 0x4EDFC8
{
    mangled_assert("?AddResearchItem@ResearchManager@@QAEXPAVResearchData@@@Z");
    todo("implement");
    _sub_4EDFC8(this, arg);
}

_extern ResearchData *_sub_4EE331(ResearchManager *const, unsigned __int32);
ResearchData *ResearchManager::GetResearchData(unsigned __int32) // 0x4EE331
{
    mangled_assert("?GetResearchData@ResearchManager@@QAEPAVResearchData@@I@Z");
    todo("implement");
    ResearchData * __result = _sub_4EE331(this, arg);
    return __result;
}

_extern bool _sub_4EE69E(ResearchManager const *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool ResearchManager::ResearchItemIsDone(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x4EE69E
{
    mangled_assert("?ResearchItemIsDone@ResearchManager@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_4EE69E(this, arg);
    return __result;
}

_extern bool _sub_4EE6B6(ResearchManager const *const, unsigned __int32);
bool ResearchManager::ResearchItemIsDone(unsigned __int32) const // 0x4EE6B6
{
    mangled_assert("?ResearchItemIsDone@ResearchManager@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_4EE6B6(this, arg);
    return __result;
}

_extern bool _sub_4EEB81(ResearchManager *const, float);
bool ResearchManager::update(float) // 0x4EEB81
{
    mangled_assert("?update@ResearchManager@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_4EEB81(this, arg);
    return __result;
}

_extern void _sub_4EE1AA(ResearchManager *const);
void ResearchManager::CheckLockedResearch() // 0x4EE1AA
{
    mangled_assert("?CheckLockedResearch@ResearchManager@@QAEXXZ");
    todo("implement");
    _sub_4EE1AA(this);
}

_extern void _sub_4EE2CD(ResearchManager *const);
void ResearchManager::CheckPendingResearch() // 0x4EE2CD
{
    mangled_assert("?CheckPendingResearch@ResearchManager@@QAEXXZ");
    todo("implement");
    _sub_4EE2CD(this);
}

_extern unsigned __int32 _sub_4EEA1D(ResearchManager const *const);
unsigned __int32 ResearchManager::getNumberOfActiveResearchItems() const // 0x4EEA1D
{
    mangled_assert("?getNumberOfActiveResearchItems@ResearchManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4EEA1D(this);
    return __result;
}

_extern std::list<ResearchData *,std::allocator<ResearchData *> > const &_sub_4EEA19(ResearchManager const *const);
std::list<ResearchData *,std::allocator<ResearchData *> > const &ResearchManager::getMasterResearchList() const // 0x4EEA19
{
    mangled_assert("?getMasterResearchList@ResearchManager@@QBEABV?$list@PAVResearchData@@V?$allocator@PAVResearchData@@@std@@@std@@XZ");
    todo("implement");
    std::list<ResearchData *,std::allocator<ResearchData *> > const & __result = _sub_4EEA19(this);
    return __result;
}

_extern bool _sub_4EE75B(ResearchManager *const, unsigned __int32, float, bool);
bool ResearchManager::StartResearch(unsigned __int32, float, bool) // 0x4EE75B
{
    mangled_assert("?StartResearch@ResearchManager@@QAE_NIM_N@Z");
    todo("implement");
    bool __result = _sub_4EE75B(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_4EE607(ResearchManager *const, unsigned __int32, bool);
bool ResearchManager::MoveResearchToTop(unsigned __int32, bool) // 0x4EE607
{
    mangled_assert("?MoveResearchToTop@ResearchManager@@QAE_NI_N@Z");
    todo("implement");
    bool __result = _sub_4EE607(this, arg, arg);
    return __result;
}

_extern void _sub_4EE07E(ResearchManager *const);
void ResearchManager::CancelAllResearch() // 0x4EE07E
{
    mangled_assert("?CancelAllResearch@ResearchManager@@QAEXXZ");
    todo("implement");
    _sub_4EE07E(this);
}

_extern bool _sub_4EE0E4(ResearchManager *const, unsigned __int32, bool);
bool ResearchManager::CancelResearch(unsigned __int32, bool) // 0x4EE0E4
{
    mangled_assert("?CancelResearch@ResearchManager@@QAE_NI_N@Z");
    todo("implement");
    bool __result = _sub_4EE0E4(this, arg, arg);
    return __result;
}

_extern bool _sub_4EE6DB(ResearchManager *const, unsigned __int32);
bool ResearchManager::RestrictResearch(unsigned __int32) // 0x4EE6DB
{
    mangled_assert("?RestrictResearch@ResearchManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_4EE6DB(this, arg);
    return __result;
}

_extern bool _sub_4EE899(ResearchManager *const, unsigned __int32);
bool ResearchManager::UnrestrictResearch(unsigned __int32) // 0x4EE899
{
    mangled_assert("?UnrestrictResearch@ResearchManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_4EE899(this, arg);
    return __result;
}

_extern void _sub_4EE359(ResearchManager *const);
void ResearchManager::GrantAllResearch() // 0x4EE359
{
    mangled_assert("?GrantAllResearch@ResearchManager@@QAEXXZ");
    todo("implement");
    _sub_4EE359(this);
}

_extern bool _sub_4EE432(ResearchManager *const, unsigned __int32);
bool ResearchManager::GrantResearch(unsigned __int32) // 0x4EE432
{
    mangled_assert("?GrantResearch@ResearchManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_4EE432(this, arg);
    return __result;
}

_extern bool _sub_4EE889(ResearchManager *const);
bool ResearchManager::UIResearchListChangedSinceLastCheck() // 0x4EE889
{
    mangled_assert("?UIResearchListChangedSinceLastCheck@ResearchManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_4EE889(this);
    return __result;
}

_extern void _sub_4EE6D6(ResearchManager *const);
void ResearchManager::ResearchListsChanged() // 0x4EE6D6
{
    mangled_assert("?ResearchListsChanged@ResearchManager@@AAEXXZ");
    todo("implement");
    _sub_4EE6D6(this);
}

_extern void _sub_4EE011(ResearchManager *const, Ship *);
void ResearchManager::ApplyAllUpgradesToShip(Ship *) // 0x4EE011
{
    mangled_assert("?ApplyAllUpgradesToShip@ResearchManager@@QAEXPAVShip@@@Z");
    todo("implement");
    _sub_4EE011(this, arg);
}

_extern void _sub_4EE31C(ResearchManager *const);
void ResearchManager::CheckResearchTree() // 0x4EE31C
{
    mangled_assert("?CheckResearchTree@ResearchManager@@QAEXXZ");
    todo("implement");
    _sub_4EE31C(this);
}

_extern void _sub_4EEA82(ResearchManager *const);
void ResearchManager::postRestore() // 0x4EEA82
{
    mangled_assert("?postRestore@ResearchManager@@UAEXXZ");
    todo("implement");
    _sub_4EEA82(this);
}

_extern bool _sub_4EEAFE(ResearchManager *const, SaveGameData *);
bool ResearchManager::restore(SaveGameData *) // 0x4EEAFE
{
    mangled_assert("?restore@ResearchManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4EEAFE(this, arg);
    return __result;
}

_extern bool _sub_4EEB3C(ResearchManager *const, SaveGameData *, SaveType);
bool ResearchManager::save(SaveGameData *, SaveType) // 0x4EEB3C
{
    mangled_assert("?save@ResearchManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4EEB3C(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

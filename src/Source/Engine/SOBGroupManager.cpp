#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Collision\Primitives\aabb.h>
#include <platform\timer.h>
#include <xmemory0>
#include <platform\platformexports.h>
#include <pch.h>
#include <sobid.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <SOBGroup.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <xutility>
#include <SquadronList.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <utility>
#include <seInterface2\SoundParams.h>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <savestream.h>
#include <list>
#include <Mathlib\vector3.h>
#include <HyperspaceManager.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\cstdint.hpp>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Mathlib\quat.h>
#include <Universe.h>
#include <dbdefines.h>
#include <Waypoint.h>
#include <UnitCaps\UnitCaps.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <profile\profile.h>
#include <iostream>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <TeamColourRegistry.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegame.h>
#include <selection.h>
#include <task.h>
#include <savegamedef.h>
#include <stack>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\obb.h>
#include <BuildManager.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <playerresourcetype.h>
#include <Collision\primitivesfwd.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <wchar.h>
#include <string>
#include <xhash>
#include <Race.h>
#include <Interpolation.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const SOBGroupManager::m_saveToken[16]; // 0x7AFEB8
extern SaveData const SOBGroupManager::m_saveData[2]; // 0x7AFEC8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_639EBA(SOBGroupManager *const);
SOBGroupManager::SOBGroupManager() // 0x639EBA
{
    mangled_assert("??0SOBGroupManager@@QAE@XZ");
    todo("implement");
    _sub_639EBA(this);
}

_extern void _sub_639F27(std::_List_buy<SOBGroup *,std::allocator<SOBGroup *> > *const);
_inline std::_List_buy<SOBGroup *,std::allocator<SOBGroup *> >::~_List_buy<SOBGroup *,std::allocator<SOBGroup *> >() // 0x639F27
{
    mangled_assert("??1?$_List_buy@PAVSOBGroup@@V?$allocator@PAVSOBGroup@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_639F27(this);
}

_extern void _sub_639F30(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > >() // 0x639F30
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSOBGroup@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSOBGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_639F30(this);
}

_extern void _sub_639F39(stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > > *const);
_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> > >() // 0x639F39
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSOBGroup@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSOBGroup@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_639F39(this);
}

_extern void _sub_639F62(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SOBGroup *>() // 0x639F62
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSOBGroup@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_639F62(this);
}

_extern void _sub_639F67(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SOBGroup *>() // 0x639F67
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSOBGroup@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_639F67(this);
}

_extern void _sub_639F71(SOBGroupManager *const);
SOBGroupManager::~SOBGroupManager() // 0x639F71
{
    mangled_assert("??1SOBGroupManager@@UAE@XZ");
    todo("implement");
    _sub_639F71(this);
}

_extern SOBGroup *_sub_63ACD2(SOBGroupManager const *const, char const *);
SOBGroup *SOBGroupManager::getSOBGroup(char const *) const // 0x63ACD2
{
    mangled_assert("?getSOBGroup@SOBGroupManager@@QBEPAVSOBGroup@@PBD@Z");
    todo("implement");
    SOBGroup * __result = _sub_63ACD2(this, arg);
    return __result;
}

_extern SOBGroup *_sub_63A832(SOBGroupManager *const, char const *);
SOBGroup *SOBGroupManager::addSOBGroup(char const *) // 0x63A832
{
    mangled_assert("?addSOBGroup@SOBGroupManager@@QAEPAVSOBGroup@@PBD@Z");
    todo("implement");
    SOBGroup * __result = _sub_63A832(this, arg);
    return __result;
}

_extern SOBGroup *_sub_63A8DA(SOBGroupManager *const, char const *, SquadronList &, unsigned __int32);
SOBGroup *SOBGroupManager::addSOBGroup(char const *, SquadronList &, unsigned __int32) // 0x63A8DA
{
    mangled_assert("?addSOBGroup@SOBGroupManager@@QAEPAVSOBGroup@@PBDAAVSquadronList@@I@Z");
    todo("implement");
    SOBGroup * __result = _sub_63A8DA(this, arg, arg, arg);
    return __result;
}

_extern char const *_sub_63AD12(SOBGroupManager const *const, Squadron const *);
char const *SOBGroupManager::getSOBGroup(Squadron const *) const // 0x63AD12
{
    mangled_assert("?getSOBGroup@SOBGroupManager@@QBEPBDPBVSquadron@@@Z");
    todo("implement");
    char const * __result = _sub_63AD12(this, arg);
    return __result;
}

_extern SOBGroup *_sub_63AAC0(SOBGroupManager *const);
SOBGroup *SOBGroupManager::createRunTimeSOBGroup() // 0x63AAC0
{
    mangled_assert("?createRunTimeSOBGroup@SOBGroupManager@@QAEPAVSOBGroup@@XZ");
    todo("implement");
    SOBGroup * __result = _sub_63AAC0(this);
    return __result;
}

_extern void _sub_63AEF7(SOBGroupManager *const);
void SOBGroupManager::postRestore() // 0x63AEF7
{
    mangled_assert("?postRestore@SOBGroupManager@@UAEXXZ");
    todo("implement");
    _sub_63AEF7(this);
}

_extern void _sub_639516(void *, SaveGameData *, SaveType);
void SOBGroupManager::saveGroups(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x639516
{
    mangled_assert("?saveGroups@SOBGroupManager@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_639516(objectPtr, saveGameData, savetype);
}

_extern void _sub_6395E2(void *, SaveGameData *);
void SOBGroupManager::restoreGroups(void *objectPtr, SaveGameData *saveGameData) // 0x6395E2
{
    mangled_assert("?restoreGroups@SOBGroupManager@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_6395E2(objectPtr, saveGameData);
}

_extern bool _sub_63AF06(SOBGroupManager *const, SaveGameData *);
bool SOBGroupManager::restore(SaveGameData *) // 0x63AF06
{
    mangled_assert("?restore@SOBGroupManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_63AF06(this, arg);
    return __result;
}

_extern bool _sub_63AF44(SOBGroupManager *const, SaveGameData *, SaveType);
bool SOBGroupManager::save(SaveGameData *, SaveType) // 0x63AF44
{
    mangled_assert("?save@SOBGroupManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_63AF44(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

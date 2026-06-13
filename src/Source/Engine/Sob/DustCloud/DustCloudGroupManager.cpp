#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\matrix3.h>
#include <new>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <xstddef>
#include <MultiplierTypes.h>
#include <type_traits>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <seInterface2\PatchID.h>
#include <savestream.h>
#include <list>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Mathlib\quat.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Sob\DustCloud\DustCloudGroup.h>
#include <sobid.h>
#include <Interpolation.h>
#include <BillboardRender.h>
#include <Graphics\meshrenderproxy.h>
#include <Collision\Primitives\aabb.h>
#include <savegamedata.h>
#include <Sob\DustCloud\DustCloud.h>
#include <sob.h>
#include <sobstatic.h>
#include <debug\db.h>
#include <Collision\Primitives\sphere.h>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <SelTarg.h>
#include <prim.h>
#include <Sob\DustCloud\DustCloudGroupManager.h>
#include <wchar.h>
#include <string>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\profiling.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const DustCloudGroupManager::m_saveData[1]; // 0x792DF0
extern char const DustCloudGroupManager::m_saveToken[22]; // 0x792E10
extern DustCloudGroupManager *DustCloudGroupManager::s_instance; // 0x843F8C

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4C636A(DustCloudGroupManager *const);
DustCloudGroupManager::DustCloudGroupManager() // 0x4C636A
{
    mangled_assert("??0DustCloudGroupManager@@AAE@XZ");
    todo("implement");
    _sub_4C636A(this);
}

_extern void _sub_4C63CF(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > >() // 0x4C63CF
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C63CF(this);
}

_extern void _sub_4C63D8(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> >,0> >() // 0x4C63D8
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C63D8(this);
}

_extern void _sub_4C63E1(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > >() // 0x4C63E1
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C63E1(this);
}

_extern void _sub_4C63E6(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>() // 0x4C63E6
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C63E6(this);
}

_extern void _sub_4C63EB(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *>() // 0x4C63EB
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C63EB(this);
}

_extern void _sub_4C63F0(DustCloudGroupManager *const);
DustCloudGroupManager::~DustCloudGroupManager() // 0x4C63F0
{
    mangled_assert("??1DustCloudGroupManager@@EAE@XZ");
    todo("implement");
    _sub_4C63F0(this);
}

_extern void _sub_4C6D18(DustCloudGroupManager *const);
void DustCloudGroupManager::postRestore() // 0x4C6D18
{
    mangled_assert("?postRestore@DustCloudGroupManager@@UAEXXZ");
    todo("implement");
    _sub_4C6D18(this);
}

_extern DustCloudGroup *_sub_4C6BDB(DustCloudGroupManager *const, char const *, DustCloud *);
DustCloudGroup *DustCloudGroupManager::findOrCreateGroup(char const *, DustCloud *) // 0x4C6BDB
{
    mangled_assert("?findOrCreateGroup@DustCloudGroupManager@@QAEPAVDustCloudGroup@@PBDPAVDustCloud@@@Z");
    todo("implement");
    DustCloudGroup * __result = _sub_4C6BDB(this, arg, arg);
    return __result;
}

_extern DustCloudGroup *_sub_4C6B9B(DustCloudGroupManager const *const, char const *);
DustCloudGroup *DustCloudGroupManager::findGroup(char const *) const // 0x4C6B9B
{
    mangled_assert("?findGroup@DustCloudGroupManager@@QBEPAVDustCloudGroup@@PBD@Z");
    todo("implement");
    DustCloudGroup * __result = _sub_4C6B9B(this, arg);
    return __result;
}

_extern DustCloudGroupManager *_sub_4C6C85();
DustCloudGroupManager *DustCloudGroupManager::instance() // 0x4C6C85
{
    mangled_assert("?instance@DustCloudGroupManager@@SGPAV1@XZ");
    todo("implement");
    DustCloudGroupManager * __result = _sub_4C6C85();
    return __result;
}

_extern bool _sub_4C6D53();
bool DustCloudGroupManager::release() // 0x4C6D53
{
    mangled_assert("?release@DustCloudGroupManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4C6D53();
    return __result;
}

_extern bool _sub_4C6D19();
bool DustCloudGroupManager::recomputeDustCloudGroups() // 0x4C6D19
{
    mangled_assert("?recomputeDustCloudGroups@DustCloudGroupManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4C6D19();
    return __result;
}

_extern void _sub_4C6E12(DustCloudGroupManager *const, float);
void DustCloudGroupManager::update(float) // 0x4C6E12
{
    mangled_assert("?update@DustCloudGroupManager@@QAEXM@Z");
    todo("implement");
    _sub_4C6E12(this, arg);
}

_extern void _sub_4C5B9D(void *, SaveGameData *, SaveType);
void DustCloudGroupManager::saveDustCloudGroup(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x4C5B9D
{
    mangled_assert("?saveDustCloudGroup@DustCloudGroupManager@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_4C5B9D(objectPtr, saveGameData, savetype);
}

_extern void _sub_4C5BFD(void *, SaveGameData *);
void DustCloudGroupManager::restoreDustCloudGroup(void *objectPtr, SaveGameData *saveGameData) // 0x4C5BFD
{
    mangled_assert("?restoreDustCloudGroup@DustCloudGroupManager@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_4C5BFD(objectPtr, saveGameData);
}

_extern bool _sub_4C6D6D(DustCloudGroupManager *const, SaveGameData *);
bool DustCloudGroupManager::restore(SaveGameData *) // 0x4C6D6D
{
    mangled_assert("?restore@DustCloudGroupManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4C6D6D(this, arg);
    return __result;
}

_extern bool _sub_4C6DB7(DustCloudGroupManager *const, SaveGameData *, SaveType);
bool DustCloudGroupManager::save(SaveGameData *, SaveType) // 0x4C6DB7
{
    mangled_assert("?save@DustCloudGroupManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4C6DB7(this, arg, arg);
    return __result;
}

_extern bool _sub_4C6E0A();
bool DustCloudGroupManager::startup() // 0x4C6E0A
{
    mangled_assert("?startup@DustCloudGroupManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4C6E0A();
    return __result;
}

_extern bool _sub_4C6DFE();
bool DustCloudGroupManager::shutdown() // 0x4C6DFE
{
    mangled_assert("?shutdown@DustCloudGroupManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4C6DFE();
    return __result;
}

_extern bool _sub_4C6DEC(SaveGameData *, SaveType);
bool DustCloudGroupManager::saveStatics(SaveGameData *saveGameData, SaveType saveType) // 0x4C6DEC
{
    mangled_assert("?saveStatics@DustCloudGroupManager@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4C6DEC(saveGameData, saveType);
    return __result;
}

_extern bool _sub_4C6DAB(SaveGameData *);
bool DustCloudGroupManager::restoreStatics(SaveGameData *saveGameData) // 0x4C6DAB
{
    mangled_assert("?restoreStatics@DustCloudGroupManager@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4C6DAB(saveGameData);
    return __result;
}

/* ---------- private code */
#endif

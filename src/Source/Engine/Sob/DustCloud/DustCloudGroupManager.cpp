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

DustCloudGroupManager::DustCloudGroupManager() // 0x4C636A
{
    mangled_assert("??0DustCloudGroupManager@@AAE@XZ");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > >() // 0x4C63CF
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> >,0> >() // 0x4C63D8
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *> > >() // 0x4C63E1
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DustCloudGroup *>() // 0x4C63E6
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DustCloudGroup *>() // 0x4C63EB
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVDustCloudGroup@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

DustCloudGroupManager::~DustCloudGroupManager() // 0x4C63F0
{
    mangled_assert("??1DustCloudGroupManager@@EAE@XZ");
    todo("implement");
}

void DustCloudGroupManager::postRestore() // 0x4C6D18
{
    mangled_assert("?postRestore@DustCloudGroupManager@@UAEXXZ");
    todo("implement");
}

DustCloudGroup *DustCloudGroupManager::findOrCreateGroup(char const *, DustCloud *) // 0x4C6BDB
{
    mangled_assert("?findOrCreateGroup@DustCloudGroupManager@@QAEPAVDustCloudGroup@@PBDPAVDustCloud@@@Z");
    todo("implement");
}

DustCloudGroup *DustCloudGroupManager::findGroup(char const *) const // 0x4C6B9B
{
    mangled_assert("?findGroup@DustCloudGroupManager@@QBEPAVDustCloudGroup@@PBD@Z");
    todo("implement");
}

DustCloudGroupManager *DustCloudGroupManager::instance() // 0x4C6C85
{
    mangled_assert("?instance@DustCloudGroupManager@@SGPAV1@XZ");
    todo("implement");
}

bool DustCloudGroupManager::release() // 0x4C6D53
{
    mangled_assert("?release@DustCloudGroupManager@@SG_NXZ");
    todo("implement");
}

bool DustCloudGroupManager::recomputeDustCloudGroups() // 0x4C6D19
{
    mangled_assert("?recomputeDustCloudGroups@DustCloudGroupManager@@SG_NXZ");
    todo("implement");
}

void DustCloudGroupManager::update(float) // 0x4C6E12
{
    mangled_assert("?update@DustCloudGroupManager@@QAEXM@Z");
    todo("implement");
}

void DustCloudGroupManager::saveDustCloudGroup(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x4C5B9D
{
    mangled_assert("?saveDustCloudGroup@DustCloudGroupManager@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void DustCloudGroupManager::restoreDustCloudGroup(void *objectPtr, SaveGameData *saveGameData) // 0x4C5BFD
{
    mangled_assert("?restoreDustCloudGroup@DustCloudGroupManager@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

bool DustCloudGroupManager::restore(SaveGameData *) // 0x4C6D6D
{
    mangled_assert("?restore@DustCloudGroupManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DustCloudGroupManager::save(SaveGameData *, SaveType) // 0x4C6DB7
{
    mangled_assert("?save@DustCloudGroupManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool DustCloudGroupManager::startup() // 0x4C6E0A
{
    mangled_assert("?startup@DustCloudGroupManager@@SG_NXZ");
    todo("implement");
}

bool DustCloudGroupManager::shutdown() // 0x4C6DFE
{
    mangled_assert("?shutdown@DustCloudGroupManager@@SG_NXZ");
    todo("implement");
}

bool DustCloudGroupManager::saveStatics(SaveGameData *saveGameData, SaveType saveType) // 0x4C6DEC
{
    mangled_assert("?saveStatics@DustCloudGroupManager@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool DustCloudGroupManager::restoreStatics(SaveGameData *saveGameData) // 0x4C6DAB
{
    mangled_assert("?restoreStatics@DustCloudGroupManager@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

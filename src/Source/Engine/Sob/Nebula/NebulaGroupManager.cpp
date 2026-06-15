#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\matrix3.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <new>
#include <seInterface2\SoundParams.h>
#include <exception>
#include <xstddef>
#include <savestream.h>
#include <type_traits>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <xutility>
#include <task.h>
#include <utility>
#include <iosfwd>
#include <stack>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <list>
#include <MeshAnimation.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Collision\BVH\octree.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\span.h>
#include <Mathlib\vector4.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <map>
#include <Collision\intersect.h>
#include <xtree>
#include <Collision\primitivesfwd.h>
#include <boost\scoped_ptr.hpp>
#include <BillboardRender.h>
#include <Graphics\meshrenderproxy.h>
#include <Sob\Nebula\NebulaGroup.h>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <boost\cstdint.hpp>
#include <Sob\Nebula\Nebula.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\quat.h>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <SelTarg.h>
#include <savegamedata.h>
#include <prim.h>
#include <debug\db.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <boost\shared_ptr.hpp>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\profiling.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Sob\Nebula\NebulaGroupManager.h>
#include <profile\profile.h>
#include <wchar.h>
#include <iostream>
#include <string>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > > > NebulaGroupMapIterator;

/* ---------- prototypes */

/* ---------- globals */

extern char const NebulaGroupManager::m_saveToken[19]; // 0x7924C8
extern NebulaGroupManager *NebulaGroupManager::s_instance; // 0x843F84
extern SaveData const NebulaGroupManager::m_saveData[1]; // 0x7924DC

/* ---------- private variables */

/* ---------- public code */

NebulaGroupManager::NebulaGroupManager() // 0x4C28BE
{
    mangled_assert("??0NebulaGroupManager@@AAE@XZ");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > >() // 0x4C2923
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNebulaGroup@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNebulaGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> >,0> >() // 0x4C292C
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNebulaGroup@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNebulaGroup@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *> > >() // 0x4C2935
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNebulaGroup@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNebulaGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,NebulaGroup *>() // 0x4C293A
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNebulaGroup@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,NebulaGroup *>() // 0x4C293F
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVNebulaGroup@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NebulaGroupManager::~NebulaGroupManager() // 0x4C2944
{
    mangled_assert("??1NebulaGroupManager@@EAE@XZ");
    todo("implement");
}

void NebulaGroupManager::postRestore() // 0x4C3295
{
    mangled_assert("?postRestore@NebulaGroupManager@@UAEXXZ");
    todo("implement");
}

NebulaGroup *NebulaGroupManager::findOrCreateGroup(char const *, Nebula *) // 0x4C3158
{
    mangled_assert("?findOrCreateGroup@NebulaGroupManager@@QAEPAVNebulaGroup@@PBDPAVNebula@@@Z");
    todo("implement");
}

NebulaGroup *NebulaGroupManager::findGroup(char const *) const // 0x4C3118
{
    mangled_assert("?findGroup@NebulaGroupManager@@QBEPAVNebulaGroup@@PBD@Z");
    todo("implement");
}

void NebulaGroupManager::applyMultipliersAndAbilities() // 0x4C2DC0
{
    mangled_assert("?applyMultipliersAndAbilities@NebulaGroupManager@@QAEXXZ");
    todo("implement");
}

NebulaGroupManager *NebulaGroupManager::instance() // 0x4C3202
{
    mangled_assert("?instance@NebulaGroupManager@@SGPAV1@XZ");
    todo("implement");
}

void NebulaGroupManager::update(float) // 0x4C3355
{
    mangled_assert("?update@NebulaGroupManager@@QAEXM@Z");
    todo("implement");
}

bool NebulaGroupManager::release() // 0x4C3296
{
    mangled_assert("?release@NebulaGroupManager@@SG_NXZ");
    todo("implement");
}

void NebulaGroupManager::saveNebulaGroup(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x4C20F1
{
    mangled_assert("?saveNebulaGroup@NebulaGroupManager@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void NebulaGroupManager::restoreNebulaGroup(void *objectPtr, SaveGameData *saveGameData) // 0x4C2151
{
    mangled_assert("?restoreNebulaGroup@NebulaGroupManager@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

bool NebulaGroupManager::restore(SaveGameData *) // 0x4C32B0
{
    mangled_assert("?restore@NebulaGroupManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool NebulaGroupManager::save(SaveGameData *, SaveType) // 0x4C32FA
{
    mangled_assert("?save@NebulaGroupManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool NebulaGroupManager::startup() // 0x4C334D
{
    mangled_assert("?startup@NebulaGroupManager@@SG_NXZ");
    todo("implement");
}

bool NebulaGroupManager::shutdown() // 0x4C3341
{
    mangled_assert("?shutdown@NebulaGroupManager@@SG_NXZ");
    todo("implement");
}

bool NebulaGroupManager::saveStatics(SaveGameData *saveGameData, SaveType saveType) // 0x4C332F
{
    mangled_assert("?saveStatics@NebulaGroupManager@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

bool NebulaGroupManager::restoreStatics(SaveGameData *saveGameData) // 0x4C32EE
{
    mangled_assert("?restoreStatics@NebulaGroupManager@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

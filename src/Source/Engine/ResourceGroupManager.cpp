#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <Mathlib\matrix3.h>
#include <SobRigidBodyStatic.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MeshAnimation.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <vector>
#include <Collision\intersect.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <Interpolation.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <debug\db.h>
#include <ResourceGroupManager.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <hash_map>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <xhash>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <Sob\Resource\ResourceStatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <Sob\Resource\Resource.h>
#include <SobWithMesh.h>
#include <wchar.h>
#include <string>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool rgmStartup();
extern bool rgmShutdown();

/* ---------- globals */

extern ResourceGroupManager *ResourceGroupManager::s_instance; // 0x84AEB0

/* ---------- private variables */

/* ---------- public code */

bool rgmStartup() // 0x626FE7
{
    mangled_assert("?rgmStartup@@YG_NXZ");
    todo("implement");
}

bool rgmShutdown() // 0x626FDF
{
    mangled_assert("?rgmShutdown@@YG_NXZ");
    todo("implement");
}

ResourceGroupManager::ResourceGroupManager() // 0x626312
{
    mangled_assert("??0ResourceGroupManager@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > >() // 0x626362
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSelection@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSelection@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Selection *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Selection *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > >() // 0x62636B
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSelection@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSelection@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *>() // 0x626382
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSelection@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Selection *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Selection *>() // 0x626387
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSelection@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ResourceGroupManager::~ResourceGroupManager() // 0x626391
{
    mangled_assert("??1ResourceGroupManager@@QAE@XZ");
    todo("implement");
}

ResourceGroupManager *ResourceGroupManager::i() // 0x626DE1
{
    mangled_assert("?i@ResourceGroupManager@@SGPAV1@XZ");
    todo("implement");
}

void ResourceGroupManager::release() // 0x626FBD
{
    mangled_assert("?release@ResourceGroupManager@@SGXXZ");
    todo("implement");
}

Selection *ResourceGroupManager::findGroup(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x626D8B
{
    mangled_assert("?findGroup@ResourceGroupManager@@AAEPAVSelection@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void ResourceGroupManager::makeNiceName(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x626F14
{
    mangled_assert("?makeNiceName@ResourceGroupManager@@AAEXPBDAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

Selection const *ResourceGroupManager::addToGroup(Resource *, char const *) // 0x626B17
{
    mangled_assert("?addToGroup@ResourceGroupManager@@QAEPBVSelection@@PAVResource@@PBD@Z");
    todo("implement");
}

Selection const *ResourceGroupManager::getGroup(char const *) // 0x626DB8
{
    mangled_assert("?getGroup@ResourceGroupManager@@QAEPBVSelection@@PBD@Z");
    todo("implement");
}

Selection const *ResourceGroupManager::iteratorBegin() // 0x626E3C
{
    mangled_assert("?iteratorBegin@ResourceGroupManager@@QAEPBVSelection@@XZ");
    todo("implement");
}

Selection const *ResourceGroupManager::iteratorNext() // 0x626E4E
{
    mangled_assert("?iteratorNext@ResourceGroupManager@@QAEPBVSelection@@XZ");
    todo("implement");
}

/* ---------- private code */
#endif

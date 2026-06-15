#if 0
/* ---------- headers */

#include "decomp.h"
#include <Interpolation.h>
#include <profile\profile.h>
#include <iostream>
#include <xstring>
#include <xmemory0>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <savestream.h>
#include <sobid.h>
#include <abilities.h>
#include <Mathlib\matrix3.h>
#include <ParadeStaticData.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <utility>
#include <seInterface2\PatchBase.h>
#include <iosfwd>
#include <prim.h>
#include <vector>
#include <seInterface2\SoundParams.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <luaconfig\luabinding.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <math.h>
#include <Collision\BVH\profiling.h>
#include <list>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Mathlib\vector2.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\bvh.h>
#include <Mathlib\quat.h>
#include <ship.h>
#include <luaconfig\luaconfig.h>
#include <SobWithMesh.h>
#include <lua.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <weaponinfo.h>
#include <savegameimpl.h>
#include <playerresourcetype.h>
#include <debug\db.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <ITweak.h>
#include <savegamedef.h>
#include <SobRigidBodyStatic.h>
#include <Tactics.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPoint.h>
#include <ParadeManager.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointStatic.h>
#include <Mathlib\luamathbinding.h>
#include <hash_map>
#include <wchar.h>
#include <Subsystems\SubSystemType.h>
#include <string>
#include <xhash>

/* ---------- constants */

/* ---------- definitions */

typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > > NameToStaticParadeDataMap;

/* ---------- prototypes */

/* ---------- globals */

extern StaticParadeData *ParadeManager::currentParadeData; // 0x8486BC
extern ParadeManager *ParadeManager::s_instance; // 0x8486C0

/* ---------- private variables */

/* ---------- public code */

ParadeManager::ParadeManager() // 0x5D97F3
{
    mangled_assert("??0ParadeManager@@AAE@XZ");
    todo("implement");
}

_inline StaticParadeData::StaticParadeData() // 0x5D980C
{
    mangled_assert("??0StaticParadeData@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline StaticParadeSlotData::StaticParadeSlotData() // 0x5D9825
{
    mangled_assert("??0StaticParadeSlotData@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal5<char const *,vector3,vector3,vector3,float,void,LuaBinding::Functor5Free<char const *,vector3,vector3,vector3,float,void> >::~ObjInternal5<char const *,vector3,vector3,vector3,float,void,LuaBinding::Functor5Free<char const *,vector3,vector3,vector3,float,void> >() // 0x5D9828
{
    mangled_assert("??1?$ObjInternal5@PBDVvector3@@V1@V1@MXV?$Functor5Free@PBDVvector3@@V1@V1@MX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > >() // 0x5D9878
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > >() // 0x5D9881
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > >() // 0x5D988A
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > >() // 0x5D988F
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>() // 0x5D98B8
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>() // 0x5D98BD
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *>() // 0x5D98C2
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ParadeManager::~ParadeManager() // 0x5D98D1
{
    mangled_assert("??1ParadeManager@@AAE@XZ");
    todo("implement");
}

_inline StaticParadeData::~StaticParadeData() // 0x5D9915
{
    mangled_assert("??1StaticParadeData@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void ParadeManager::paradeSlot(char const *slotname, vector3 offset, vector3 heading, vector3 dirGrowth, float sizeGrowth) // 0x5DABA9
{
    mangled_assert("?paradeSlot@ParadeManager@@CGXPBDVvector3@@11M@Z");
    todo("implement");
}

StaticParadeData *ParadeManager::loadStaticParadeData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x5DA962
{
    mangled_assert("?loadStaticParadeData@ParadeManager@@AAEPAVStaticParadeData@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

StaticParadeData *ParadeManager::getStaticParadeData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x5DA8E4
{
    mangled_assert("?getStaticParadeData@ParadeManager@@QAEPAVStaticParadeData@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

ParadeManager *ParadeManager::create() // 0x5DA720
{
    mangled_assert("?create@ParadeManager@@CGPAV1@XZ");
    todo("implement");
}

bool ParadeManager::release() // 0x5DAC4D
{
    mangled_assert("?release@ParadeManager@@SG_NXZ");
    todo("implement");
}

ParadeManager *ParadeManager::instance() // 0x5DA94E
{
    mangled_assert("?instance@ParadeManager@@SGPAV1@XZ");
    todo("implement");
}

bool ParadeManager::startup() // 0x5DAC90
{
    mangled_assert("?startup@ParadeManager@@SG_NXZ");
    todo("implement");
}

bool ParadeManager::shutdown() // 0x5DAC71
{
    mangled_assert("?shutdown@ParadeManager@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif

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

_extern _sub_5D97F3(ParadeManager *const);
ParadeManager::ParadeManager() // 0x5D97F3
{
    mangled_assert("??0ParadeManager@@AAE@XZ");
    todo("implement");
    _sub_5D97F3(this);
}

_extern _sub_5D980C(StaticParadeData *const);
_inline StaticParadeData::StaticParadeData() // 0x5D980C
{
    mangled_assert("??0StaticParadeData@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D980C(this);
}

_extern _sub_5D9825(StaticParadeSlotData *const);
_inline StaticParadeSlotData::StaticParadeSlotData() // 0x5D9825
{
    mangled_assert("??0StaticParadeSlotData@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D9825(this);
}

_extern void _sub_5D9828(LuaBinding::ObjInternal5<char const *,vector3,vector3,vector3,float,void,LuaBinding::Functor5Free<char const *,vector3,vector3,vector3,float,void> > *const);
_inline LuaBinding::ObjInternal5<char const *,vector3,vector3,vector3,float,void,LuaBinding::Functor5Free<char const *,vector3,vector3,vector3,float,void> >::~ObjInternal5<char const *,vector3,vector3,vector3,float,void,LuaBinding::Functor5Free<char const *,vector3,vector3,vector3,float,void> >() // 0x5D9828
{
    mangled_assert("??1?$ObjInternal5@PBDVvector3@@V1@V1@MXV?$Functor5Free@PBDVvector3@@V1@V1@MX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D9828(this);
}

_extern void _sub_5D9878(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > >() // 0x5D9878
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D9878(this);
}

_extern void _sub_5D9881(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > >() // 0x5D9881
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D9881(this);
}

_extern void _sub_5D988A(stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > > *const);
_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> > >() // 0x5D988A
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D988A(this);
}

_extern void _sub_5D988F(stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > > *const);
_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeSlotData,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> > >() // 0x5D988F
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D988F(this);
}

_extern void _sub_5D98B8(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeData *>() // 0x5D98B8
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D98B8(this);
}

_extern void _sub_5D98BD(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StaticParadeSlotData>() // 0x5D98BD
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStaticParadeSlotData@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D98BD(this);
}

_extern void _sub_5D98C2(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,StaticParadeData *>() // 0x5D98C2
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticParadeData@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D98C2(this);
}

_extern void _sub_5D98D1(ParadeManager *const);
ParadeManager::~ParadeManager() // 0x5D98D1
{
    mangled_assert("??1ParadeManager@@AAE@XZ");
    todo("implement");
    _sub_5D98D1(this);
}

_extern void _sub_5D9915(StaticParadeData *const);
_inline StaticParadeData::~StaticParadeData() // 0x5D9915
{
    mangled_assert("??1StaticParadeData@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5D9915(this);
}

_extern void _sub_5DABA9(char const *, vector3, vector3, vector3, float);
void ParadeManager::paradeSlot(char const *slotname, vector3 offset, vector3 heading, vector3 dirGrowth, float sizeGrowth) // 0x5DABA9
{
    mangled_assert("?paradeSlot@ParadeManager@@CGXPBDVvector3@@11M@Z");
    todo("implement");
    _sub_5DABA9(slotname, offset, heading, dirGrowth, sizeGrowth);
}

_extern StaticParadeData *_sub_5DA962(ParadeManager *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
StaticParadeData *ParadeManager::loadStaticParadeData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x5DA962
{
    mangled_assert("?loadStaticParadeData@ParadeManager@@AAEPAVStaticParadeData@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    StaticParadeData * __result = _sub_5DA962(this, arg);
    return __result;
}

_extern StaticParadeData *_sub_5DA8E4(ParadeManager *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
StaticParadeData *ParadeManager::getStaticParadeData(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x5DA8E4
{
    mangled_assert("?getStaticParadeData@ParadeManager@@QAEPAVStaticParadeData@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    StaticParadeData * __result = _sub_5DA8E4(this, arg);
    return __result;
}

_extern ParadeManager *_sub_5DA720();
ParadeManager *ParadeManager::create() // 0x5DA720
{
    mangled_assert("?create@ParadeManager@@CGPAV1@XZ");
    todo("implement");
    ParadeManager * __result = _sub_5DA720();
    return __result;
}

_extern bool _sub_5DAC4D();
bool ParadeManager::release() // 0x5DAC4D
{
    mangled_assert("?release@ParadeManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5DAC4D();
    return __result;
}

_extern ParadeManager *_sub_5DA94E();
ParadeManager *ParadeManager::instance() // 0x5DA94E
{
    mangled_assert("?instance@ParadeManager@@SGPAV1@XZ");
    todo("implement");
    ParadeManager * __result = _sub_5DA94E();
    return __result;
}

_extern bool _sub_5DAC90();
bool ParadeManager::startup() // 0x5DAC90
{
    mangled_assert("?startup@ParadeManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5DAC90();
    return __result;
}

_extern bool _sub_5DAC71();
bool ParadeManager::shutdown() // 0x5DAC71
{
    mangled_assert("?shutdown@ParadeManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5DAC71();
    return __result;
}

/* ---------- private code */
#endif

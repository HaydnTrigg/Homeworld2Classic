#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\proxy.h>
#include <weaponstaticinfo.h>
#include <Collision\intersect.h>
#include <GunBinding.h>
#include <Collision\primitivesfwd.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <playerresourcetype.h>
#include <pch.h>
#include <sobid.h>
#include <Interpolation.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <WeaponClassSpecificInfo.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <SelTarg.h>
#include <prim.h>
#include <list>
#include <Modifiers\ModifierAbility.h>
#include <Mathlib\vector3.h>
#include <shipstatic.h>
#include <Mathlib\vector4.h>
#include <commandtype.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <map>
#include <Collision\BVH\profiling.h>
#include <abilities.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <savestream.h>
#include <boost\cstdint.hpp>
#include <Tactics.h>
#include <Mathlib\quat.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Subsystems\Subsystem.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Modifiers\ModifierTargetCache.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <debug\db.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <savegamedef.h>
#include <task.h>
#include <boost\detail\shared_count.hpp>
#include <stack>
#include <Subsystems\SubsystemStatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Modifiers\ModifierUIInfo.h>
#include <sob.h>
#include <Modifiers\ModifierMultiplier.h>
#include <sobstatic.h>
#include <Modifiers\ModifierEffect.h>
#include <Collision\Primitives\sphere.h>
#include <SobRigidBodyStatic.h>
#include <profile\profile.h>
#include <iostream>
#include <MeshAnimation.h>
#include <Subsystems\HardPointManager.h>
#include <ShieldTypes.h>
#include <Subsystems\HardPoint.h>
#include <wchar.h>
#include <Subsystems\HardPointStatic.h>
#include <config.h>
#include <Subsystems\SubSystemType.h>
#include <Modifiers\ModifierApplier.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <weaponinfo.h>
#include <Collision\BVH\Internal\span_i.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<HardPoint *> > > HardPointVectorIterator;

/* ---------- prototypes */

/* ---------- globals */

extern char const HardPointManager::m_saveToken[17]; // 0x798E00
extern SaveData const HardPointManager::m_saveData[1]; // 0x798E14

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4EF548(HardPointManager *const, Ship *);
HardPointManager::HardPointManager(Ship *) // 0x4EF548
{
    mangled_assert("??0HardPointManager@@QAE@PAVShip@@@Z");
    todo("implement");
    _sub_4EF548(this, arg);
}

_extern void _sub_4EF56A(HardPointManager *const);
HardPointManager::~HardPointManager() // 0x4EF56A
{
    mangled_assert("??1HardPointManager@@UAE@XZ");
    todo("implement");
    _sub_4EF56A(this);
}

_extern void _sub_4EF606(HardPointManager *const);
void HardPointManager::RemoveAllSimData() // 0x4EF606
{
    mangled_assert("?RemoveAllSimData@HardPointManager@@QAEXXZ");
    todo("implement");
    _sub_4EF606(this);
}

_extern void _sub_4EFBC7(HardPointManager *const);
void HardPointManager::init() // 0x4EFBC7
{
    mangled_assert("?init@HardPointManager@@QAEXXZ");
    todo("implement");
    _sub_4EFBC7(this);
}

_extern void _sub_4EFF5B(HardPointManager *const);
void HardPointManager::updateHardPointStatics() // 0x4EFF5B
{
    mangled_assert("?updateHardPointStatics@HardPointManager@@IAEXXZ");
    todo("implement");
    _sub_4EFF5B(this);
}

_extern unsigned __int32 _sub_4EFA0A(HardPointManager const *const, SubSystemFamily);
unsigned __int32 HardPointManager::getNumberOfFamilyHardpoints(SubSystemFamily) const // 0x4EFA0A
{
    mangled_assert("?getNumberOfFamilyHardpoints@HardPointManager@@QBEIW4SubSystemFamily@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4EFA0A(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_4EFA35(HardPointManager const *const, SubSystemFamily);
unsigned __int32 HardPointManager::getNumberOfFreeFamilyHardpoints(SubSystemFamily) const // 0x4EFA35
{
    mangled_assert("?getNumberOfFreeFamilyHardpoints@HardPointManager@@QBEIW4SubSystemFamily@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4EFA35(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_4EFAAE(HardPointManager const *const, unsigned __int32);
unsigned __int32 HardPointManager::getNumberOfHardPoints(unsigned __int32) const // 0x4EFAAE
{
    mangled_assert("?getNumberOfHardPoints@HardPointManager@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4EFAAE(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_4EFADD(HardPointManager const *const);
unsigned __int32 HardPointManager::getNumberOfHardPoints() const // 0x4EFADD
{
    mangled_assert("?getNumberOfHardPoints@HardPointManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4EFADD(this);
    return __result;
}

_extern unsigned __int32 _sub_4EFA71(HardPointManager const *const, unsigned __int32);
unsigned __int32 HardPointManager::getNumberOfFreeHardPoints(unsigned __int32) const // 0x4EFA71
{
    mangled_assert("?getNumberOfFreeHardPoints@HardPointManager@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4EFA71(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_4EFAE7(HardPointManager const *const, unsigned __int32);
unsigned __int32 HardPointManager::getNumberOfOccupiedHardPoints(unsigned __int32) const // 0x4EFAE7
{
    mangled_assert("?getNumberOfOccupiedHardPoints@HardPointManager@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4EFAE7(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_4EFB20(HardPointManager const *const, unsigned __int32);
unsigned __int32 HardPointManager::getNumberOfOccupiedHardPointsByGenericType(unsigned __int32) const // 0x4EFB20
{
    mangled_assert("?getNumberOfOccupiedHardPointsByGenericType@HardPointManager@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4EFB20(this, arg);
    return __result;
}

_extern void _sub_4EFB7B(HardPointManager const *const, std::vector<SubSystem *,std::allocator<SubSystem *> > &);
void HardPointManager::getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const // 0x4EFB7B
{
    mangled_assert("?getSubSystems@HardPointManager@@QBEXAAV?$vector@PAVSubSystem@@V?$allocator@PAVSubSystem@@@std@@@std@@@Z");
    todo("implement");
    _sub_4EFB7B(this, arg);
}

_extern bool _sub_4EFC57(HardPointManager *const, unsigned __int32);
bool HardPointManager::isSubSystemTypePresent(unsigned __int32) // 0x4EFC57
{
    mangled_assert("?isSubSystemTypePresent@HardPointManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_4EFC57(this, arg);
    return __result;
}

_extern void _sub_4EF9BC(HardPointManager *const, std::vector<HardPoint *,std::allocator<HardPoint *> > &);
void HardPointManager::getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &) // 0x4EF9BC
{
    mangled_assert("?getFreeHardpoints@HardPointManager@@QAEXAAV?$vector@PAVHardPoint@@V?$allocator@PAVHardPoint@@@std@@@std@@@Z");
    todo("implement");
    _sub_4EF9BC(this, arg);
}

_extern void _sub_4EFF1F(HardPointManager *const, float);
void HardPointManager::update(float) // 0x4EFF1F
{
    mangled_assert("?update@HardPointManager@@QAEXM@Z");
    todo("implement");
    _sub_4EFF1F(this, arg);
}

_extern Player *_sub_4EFB63(HardPointManager *const);
Player *HardPointManager::getPlayerOwner() // 0x4EFB63
{
    mangled_assert("?getPlayerOwner@HardPointManager@@QAEPAVPlayer@@XZ");
    todo("implement");
    Player * __result = _sub_4EFB63(this);
    return __result;
}

_extern bool _sub_4EF88B(HardPointManager *const, unsigned __int32);
bool HardPointManager::availableSpaceForSubSystem(unsigned __int32) // 0x4EF88B
{
    mangled_assert("?availableSpaceForSubSystem@HardPointManager@@QAE_NI@Z");
    todo("implement");
    bool __result = _sub_4EF88B(this, arg);
    return __result;
}

_extern SubSystem *_sub_4EF8DD(HardPointManager *const, unsigned __int32);
SubSystem *HardPointManager::buildSubSystem(unsigned __int32) // 0x4EF8DD
{
    mangled_assert("?buildSubSystem@HardPointManager@@QAEPAVSubSystem@@I@Z");
    todo("implement");
    SubSystem * __result = _sub_4EF8DD(this, arg);
    return __result;
}

_extern void _sub_4EF994(HardPointManager *const);
void HardPointManager::defaultSettings() // 0x4EF994
{
    mangled_assert("?defaultSettings@HardPointManager@@QAEXXZ");
    todo("implement");
    _sub_4EF994(this);
}

_extern void _sub_4EFCC8(HardPointManager *const);
void HardPointManager::postRestore() // 0x4EFCC8
{
    mangled_assert("?postRestore@HardPointManager@@UAEXXZ");
    todo("implement");
    _sub_4EFCC8(this);
}

_extern bool _sub_4EFEA1(HardPointManager *const, SaveGameData *, SaveType);
bool HardPointManager::save(SaveGameData *, SaveType) // 0x4EFEA1
{
    mangled_assert("?save@HardPointManager@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4EFEA1(this, arg, arg);
    return __result;
}

_extern bool _sub_4EFE23(HardPointManager *const, SaveGameData *);
bool HardPointManager::restore(SaveGameData *) // 0x4EFE23
{
    mangled_assert("?restore@HardPointManager@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4EFE23(this, arg);
    return __result;
}

/* ---------- private code */
#endif

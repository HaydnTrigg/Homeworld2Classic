#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Interpolation.h>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Modifiers\ModifierAbility.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <shipstatic.h>
#include <commandtype.h>
#include <Mathlib\matrix3.h>
#include <abilities.h>
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
#include <Tactics.h>
#include <SelTarg.h>
#include <prim.h>
#include <ParadeStaticData.h>
#include <list>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Modifiers\ModifierTargetCache.h>
#include <seInterface2\PatchID.h>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <Mathlib\vector2.h>
#include <util\fixed.h>
#include <sobid.h>
#include <boost\cstdint.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <savestream.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Mathlib\quat.h>
#include <Modifiers\ModifierEffect.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <weaponinfo.h>
#include <weaponstaticinfo.h>
#include <savegameimpl.h>
#include <GunBinding.h>
#include <savegamedata.h>
#include <debug\db.h>
#include <playerresourcetype.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <boost\shared_ptr.hpp>
#include <ship.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <SobWithMesh.h>
#include <boost\throw_exception.hpp>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SobRigidBody.h>
#include <savegamedef.h>
#include <sob.h>
#include <sobstatic.h>
#include <boost\detail\shared_count.hpp>
#include <WeaponClassSpecificInfo.h>
#include <Collision\Primitives\sphere.h>
#include <boost\detail\lwm_win32.hpp>
#include <SobRigidBodyStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <Parade.h>
#include <Collision\BVH\span.h>
#include <hash_map>
#include <wchar.h>
#include <Collision\BVH\Internal\span_i.h>
#include <string>
#include <xhash>
#include <Collision\BVH\proxy.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\intersect.h>
#include <Subsystems\HardPoint.h>
#include <Collision\primitivesfwd.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > > TypeToIndexMapIterator;

/* ---------- prototypes */

/* ---------- globals */

extern char const ParadeFormation::m_saveToken[0]; // 0x7A7EE8
extern SaveData const ParadeType::m_saveData[1]; // 0x7A7E10
extern char const ParadeType::m_saveToken[11]; // 0x7A7E30
extern char const SlotID::m_saveToken[7]; // 0x7A7E3C
extern SaveData const SlotID::m_saveData[2]; // 0x7A7E48
extern SaveData const ParadeFormation::m_saveData[3]; // 0x7A7E88

/* ---------- private variables */

/* ---------- public code */

ParadeFormation::ParadeFormation(Ship *) // 0x5D731F
{
    mangled_assert("??0ParadeFormation@@QAE@PAVShip@@@Z");
    todo("implement");
}

_inline ParadeType::ParadeType(ParadeType const &) // 0x5D739A
{
    mangled_assert("??0ParadeType@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline ParadeType::ParadeType() // 0x5D73D5
{
    mangled_assert("??0ParadeType@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SlotID::SlotID(SlotID const &) // 0x5D73E9
{
    mangled_assert("??0SlotID@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >() // 0x5D743A
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >() // 0x5D7443
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ParadeFormation::ParadeFormation(SaveGameData *) // 0x5D72B7
{
    mangled_assert("??0ParadeFormation@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

ParadeFormation::~ParadeFormation() // 0x5D7469
{
    mangled_assert("??1ParadeFormation@@UAE@XZ");
    todo("implement");
}

_inline ParadeType::~ParadeType() // 0x5D74B8
{
    mangled_assert("??1ParadeType@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SlotID::~SlotID() // 0x5D74CB
{
    mangled_assert("??1SlotID@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ParadeType &ParadeType::operator=(ParadeType const &) // 0x5D75C4
{
    mangled_assert("??4ParadeType@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void ParadeFormation::defaultSettings() // 0x5D83DA
{
    mangled_assert("?defaultSettings@ParadeFormation@@QAEXXZ");
    todo("implement");
}

void ParadeFormation::postRestore() // 0x5D86A8
{
    mangled_assert("?postRestore@ParadeFormation@@UAEXXZ");
    todo("implement");
}

SlotID ParadeFormation::reserveSlot(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 &, vector3 &) // 0x5D8772
{
    mangled_assert("?reserveSlot@ParadeFormation@@QAE?AVSlotID@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVvector3@@1@Z");
    todo("implement");
}

void ParadeFormation::clearReservation(SlotID &) // 0x5D82D5
{
    mangled_assert("?clearReservation@ParadeFormation@@QAEXAAVSlotID@@@Z");
    todo("implement");
}

unsigned __int32 ParadeType::findAndReserveFreeSpot() // 0x5D8513
{
    mangled_assert("?findAndReserveFreeSpot@ParadeType@@QAEIXZ");
    todo("implement");
}

void ParadeType::postRestore() // 0x5D86A9
{
    mangled_assert("?postRestore@ParadeType@@UAEXXZ");
    todo("implement");
}

bool ParadeType::restore(SaveGameData *) // 0x5D8ADE
{
    mangled_assert("?restore@ParadeType@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ParadeType::save(SaveGameData *, SaveType) // 0x5D8B8F
{
    mangled_assert("?save@ParadeType@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ParadeType::saveParadeSlotStati(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x5D6406
{
    mangled_assert("?saveParadeSlotStati@ParadeType@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ParadeType::restoreParadeSlotStati(void *objectPtr, SaveGameData *saveGameData) // 0x5D6454
{
    mangled_assert("?restoreParadeSlotStati@ParadeType@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

bool ParadeFormation::restore(SaveGameData *) // 0x5D8AA0
{
    mangled_assert("?restore@ParadeFormation@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool ParadeFormation::save(SaveGameData *, SaveType) // 0x5D8B5A
{
    mangled_assert("?save@ParadeFormation@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ParadeFormation::saveParadeTypes(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x5D6363
{
    mangled_assert("?saveParadeTypes@ParadeFormation@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ParadeFormation::restoreParadeTypes(void *objectPtr, SaveGameData *saveGameData) // 0x5D63AD
{
    mangled_assert("?restoreParadeTypes@ParadeFormation@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

void ParadeFormation::saveTypeToIndex(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x5D64B4
{
    mangled_assert("?saveTypeToIndex@ParadeFormation@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void ParadeFormation::restoreTypeToIndex(void *objectPtr, SaveGameData *saveGameData) // 0x5D64FD
{
    mangled_assert("?restoreTypeToIndex@ParadeFormation@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

void SlotID::postRestore() // 0x5D86AA
{
    mangled_assert("?postRestore@SlotID@@UAEXXZ");
    todo("implement");
}

bool SlotID::restore(SaveGameData *) // 0x5D8B1C
{
    mangled_assert("?restore@SlotID@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool SlotID::save(SaveGameData *, SaveType) // 0x5D8BC4
{
    mangled_assert("?save@SlotID@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

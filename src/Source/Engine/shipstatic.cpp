#if 0
/* ---------- headers */

#include "decomp.h"
#include <stack>
#include <set>
#include <ShieldTypes.h>
#include <assist\stlexsmallvector.h>
#include <DefenseFieldManager.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <weaponTargetInfo.h>
#include <Tactics.h>
#include <StaticModelRegistry.h>
#include <abilities.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <SelTarg.h>
#include <new>
#include <prim.h>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <shipHold.h>
#include <Collision\Primitives\capsule.h>
#include <SquadronList.h>
#include <Collision\Primitives\segment.h>
#include <command.h>
#include <Collision\BVH\profiling.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <WeaponClassSpecificInfo.h>
#include <platform\osdef.h>
#include <RepairManager.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <list>
#include <Modifiers\ModifierEffect.h>
#include <NavLights.h>
#include <Render\objects\light.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <config.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matvec.h>
#include <Modifiers\ModifierApplier.h>
#include <Mathlib\vector4.h>
#include <BuildQueueStatic.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <map>
#include <visibility.h>
#include <xhash>
#include <xtree>
#include <MultiplierContainer.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Render\gl\lotypes.h>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_types.h>
#include <commandtype.h>
#include <boost\cstdint.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <Subsystems\HardPointStatic.h>
#include <seInterface2\SoundParams.h>
#include <Subsystems\SubSystemType.h>
#include <Mathlib\quat.h>
#include <HyperspaceInhibitorManager.h>
#include <WeaponStatic.h>
#include <sctObjectLoad.h>
#include <fileio\iff.h>
#include <Mathlib\mathlibdll.h>
#include <weaponfiretypes.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_defines.h>
#include <SensorPingManager.h>
#include <Render\gl\glext.h>
#include <debug\db.h>
#include <Collision\Collision.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\octree.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\span.h>
#include <Modifiers\ModifierAbility.h>
#include <selection.h>
#include <Collision\BVH\Internal\span_i.h>
#include <savegamedef.h>
#include <Collision\BVH\proxy.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\intersect.h>
#include <DefenseFieldShieldStatic.h>
#include <Collision\primitivesfwd.h>
#include <CloakManager.h>
#include <boost\detail\lwm_win32.hpp>
#include <SalvageManager.h>
#include <LatchPointManager.h>
#include <Interpolation.h>
#include <shipstatic.h>
#include <SobZeroMassBody.h>
#include <Render\objects\texture.h>
#include <SobWithMeshStatic.h>
#include <wchar.h>
#include <Collision\Primitives\aabb.h>
#include <Render\objects\core.h>
#include <SobRigidBodyStatic.h>
#include <sobzeromassbodystatic.h>
#include <App\Hw2Identify.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <weapon.h>
#include <WeaponFire\WeaponFire.h>
#include <algorithm>
#include <sob.h>
#include <CaptureManager.h>
#include <sobid.h>
#include <savegame.h>
#include <task.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const *ShipStatic::k_buildIconTextureBaseName; // 0x83532C

/* ---------- private variables */

/* ---------- public code */

_inline HardPointStaticInfo::HardPointStaticInfo() // 0x4969FD
{
    mangled_assert("??0HardPointStaticInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ModifierApplier::ModifierApplier() // 0x496A0A
{
    mangled_assert("??0ModifierApplier@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

unsigned __int32 ShipStatic::GenerateRaceHash(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4976A5
{
    mangled_assert("?GenerateRaceHash@ShipStatic@@SGIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool ShipStatic::CanDockWith(ShipStatic const *) const // 0x497589
{
    mangled_assert("?CanDockWith@ShipStatic@@QBE_NPBV1@@Z");
    todo("implement");
}

ShipStatic::ShipStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x496A17
{
    mangled_assert("??0ShipStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
}

_inline WeaponStaticInfo::WeaponStaticInfo() // 0x496EAA
{
    mangled_assert("??0WeaponStaticInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ShipStatic::spawnDustCloud::spawnDustCloud(ShipStatic::spawnDustCloud const &) // 0x496EC7
{
    mangled_assert("??0spawnDustCloud@ShipStatic@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline ShipStatic::spawnSalvage::spawnSalvage(ShipStatic::spawnSalvage const &) // 0x496F2C
{
    mangled_assert("??0spawnSalvage@ShipStatic@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline DefenseFieldManagerStatic::~DefenseFieldManagerStatic() // 0x496FC4
{
    mangled_assert("??1DefenseFieldManagerStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DefenseFieldShieldStatic::~DefenseFieldShieldStatic() // 0x496FCC
{
    mangled_assert("??1DefenseFieldShieldStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline HardPointStaticInfo::~HardPointStaticInfo() // 0x496FD1
{
    mangled_assert("??1HardPointStaticInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ModifierUIInfo::~ModifierUIInfo() // 0x496FD6
{
    mangled_assert("??1ModifierUIInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ShipStatic::~ShipStatic() // 0x496FDC
{
    mangled_assert("??1ShipStatic@@UAE@XZ");
    todo("implement");
}

_inline WeaponClassSpecificInfo::~WeaponClassSpecificInfo() // 0x497300
{
    mangled_assert("??1WeaponClassSpecificInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ShipStatic::spawnDustCloud::~spawnDustCloud() // 0x497373
{
    mangled_assert("??1spawnDustCloud@ShipStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ShipStatic::spawnSalvage::~spawnSalvage() // 0x497378
{
    mangled_assert("??1spawnSalvage@ShipStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void ShipStatic::addSalvageToSpawnWhenDying(ShipStatic::spawnSalvage const &) // 0x497CB8
{
    mangled_assert("?addSalvageToSpawnWhenDying@ShipStatic@@QAEXABUspawnSalvage@1@@Z");
    todo("implement");
}

void ShipStatic::addDustCloudToSpawnWhenDying(ShipStatic::spawnDustCloud const &) // 0x497C99
{
    mangled_assert("?addDustCloudToSpawnWhenDying@ShipStatic@@QAEXABUspawnDustCloud@1@@Z");
    todo("implement");
}

SobStatic *ShipStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found) // 0x4975B7
{
    mangled_assert("?Create@ShipStatic@@SGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV2@@Z");
    todo("implement");
}

void ShipStatic::postStaticLoad() // 0x497EC8
{
    mangled_assert("?postStaticLoad@ShipStatic@@UAEXXZ");
    todo("implement");
}

void ShipStatic::setShipHoldStatic(ShipHoldStatic *) // 0x4980FD
{
    mangled_assert("?setShipHoldStatic@ShipStatic@@QAEXPAVShipHoldStatic@@@Z");
    todo("implement");
}

bool ShipStatic::LoadModelBegin(SobType, char const *) // 0x497732
{
    mangled_assert("?LoadModelBegin@ShipStatic@@MAE_NW4SobType@@PBD@Z");
    todo("implement");
}

void ShipStatic::LoadModelExecute() // 0x4977BE
{
    mangled_assert("?LoadModelExecute@ShipStatic@@MAEXXZ");
    todo("implement");
}

void ShipStatic::LoadModelEnd(char const *) // 0x497784
{
    mangled_assert("?LoadModelEnd@ShipStatic@@MAEXPBD@Z");
    todo("implement");
}

bool ShipStatic::LoadModelFromCache(char const *) // 0x4977C3
{
    mangled_assert("?LoadModelFromCache@ShipStatic@@MAE_NPBD@Z");
    todo("implement");
}

void ShipStatic::OnHandlingDTRM(IFF *, IFFChunk *, void *, void *) // 0x4977FE
{
    mangled_assert("?OnHandlingDTRM@ShipStatic@@MAEXPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

/* ---------- private code */
#endif

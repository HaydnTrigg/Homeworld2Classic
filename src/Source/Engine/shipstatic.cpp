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

_extern _sub_4969FD(HardPointStaticInfo *const);
_inline HardPointStaticInfo::HardPointStaticInfo() // 0x4969FD
{
    mangled_assert("??0HardPointStaticInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4969FD(this);
}

_extern _sub_496A0A(ModifierApplier *const);
_inline ModifierApplier::ModifierApplier() // 0x496A0A
{
    mangled_assert("??0ModifierApplier@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_496A0A(this);
}

_extern unsigned __int32 _sub_4976A5(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
unsigned __int32 ShipStatic::GenerateRaceHash(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4976A5
{
    mangled_assert("?GenerateRaceHash@ShipStatic@@SGIABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4976A5(name);
    return __result;
}

_extern bool _sub_497589(ShipStatic const *const, ShipStatic const *);
bool ShipStatic::CanDockWith(ShipStatic const *) const // 0x497589
{
    mangled_assert("?CanDockWith@ShipStatic@@QBE_NPBV1@@Z");
    todo("implement");
    bool __result = _sub_497589(this, arg);
    return __result;
}

_extern _sub_496A17(ShipStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
ShipStatic::ShipStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x496A17
{
    mangled_assert("??0ShipStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    _sub_496A17(this, arg, arg);
}

_extern _sub_496EAA(WeaponStaticInfo *const);
_inline WeaponStaticInfo::WeaponStaticInfo() // 0x496EAA
{
    mangled_assert("??0WeaponStaticInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_496EAA(this);
}

_extern _sub_496EC7(ShipStatic::spawnDustCloud *const, ShipStatic::spawnDustCloud const &);
_inline ShipStatic::spawnDustCloud::spawnDustCloud(ShipStatic::spawnDustCloud const &) // 0x496EC7
{
    mangled_assert("??0spawnDustCloud@ShipStatic@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_496EC7(this, arg);
}

_extern _sub_496F2C(ShipStatic::spawnSalvage *const, ShipStatic::spawnSalvage const &);
_inline ShipStatic::spawnSalvage::spawnSalvage(ShipStatic::spawnSalvage const &) // 0x496F2C
{
    mangled_assert("??0spawnSalvage@ShipStatic@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_496F2C(this, arg);
}

_extern void _sub_496FC4(DefenseFieldManagerStatic *const);
_inline DefenseFieldManagerStatic::~DefenseFieldManagerStatic() // 0x496FC4
{
    mangled_assert("??1DefenseFieldManagerStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_496FC4(this);
}

_extern void _sub_496FCC(DefenseFieldShieldStatic *const);
_inline DefenseFieldShieldStatic::~DefenseFieldShieldStatic() // 0x496FCC
{
    mangled_assert("??1DefenseFieldShieldStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_496FCC(this);
}

_extern void _sub_496FD1(HardPointStaticInfo *const);
_inline HardPointStaticInfo::~HardPointStaticInfo() // 0x496FD1
{
    mangled_assert("??1HardPointStaticInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_496FD1(this);
}

_extern void _sub_496FD6(ModifierUIInfo *const);
_inline ModifierUIInfo::~ModifierUIInfo() // 0x496FD6
{
    mangled_assert("??1ModifierUIInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_496FD6(this);
}

_extern void _sub_496FDC(ShipStatic *const);
ShipStatic::~ShipStatic() // 0x496FDC
{
    mangled_assert("??1ShipStatic@@UAE@XZ");
    todo("implement");
    _sub_496FDC(this);
}

_extern void _sub_497300(WeaponClassSpecificInfo *const);
_inline WeaponClassSpecificInfo::~WeaponClassSpecificInfo() // 0x497300
{
    mangled_assert("??1WeaponClassSpecificInfo@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_497300(this);
}

_extern void _sub_497373(ShipStatic::spawnDustCloud *const);
_inline ShipStatic::spawnDustCloud::~spawnDustCloud() // 0x497373
{
    mangled_assert("??1spawnDustCloud@ShipStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_497373(this);
}

_extern void _sub_497378(ShipStatic::spawnSalvage *const);
_inline ShipStatic::spawnSalvage::~spawnSalvage() // 0x497378
{
    mangled_assert("??1spawnSalvage@ShipStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_497378(this);
}

_extern void _sub_497CB8(ShipStatic *const, ShipStatic::spawnSalvage const &);
void ShipStatic::addSalvageToSpawnWhenDying(ShipStatic::spawnSalvage const &) // 0x497CB8
{
    mangled_assert("?addSalvageToSpawnWhenDying@ShipStatic@@QAEXABUspawnSalvage@1@@Z");
    todo("implement");
    _sub_497CB8(this, arg);
}

_extern void _sub_497C99(ShipStatic *const, ShipStatic::spawnDustCloud const &);
void ShipStatic::addDustCloudToSpawnWhenDying(ShipStatic::spawnDustCloud const &) // 0x497C99
{
    mangled_assert("?addDustCloudToSpawnWhenDying@ShipStatic@@QAEXABUspawnDustCloud@1@@Z");
    todo("implement");
    _sub_497C99(this, arg);
}

_extern SobStatic *_sub_4975B7(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobStatic *);
SobStatic *ShipStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found) // 0x4975B7
{
    mangled_assert("?Create@ShipStatic@@SGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV2@@Z");
    todo("implement");
    SobStatic * __result = _sub_4975B7(name, found);
    return __result;
}

_extern void _sub_497EC8(ShipStatic *const);
void ShipStatic::postStaticLoad() // 0x497EC8
{
    mangled_assert("?postStaticLoad@ShipStatic@@UAEXXZ");
    todo("implement");
    _sub_497EC8(this);
}

_extern void _sub_4980FD(ShipStatic *const, ShipHoldStatic *);
void ShipStatic::setShipHoldStatic(ShipHoldStatic *) // 0x4980FD
{
    mangled_assert("?setShipHoldStatic@ShipStatic@@QAEXPAVShipHoldStatic@@@Z");
    todo("implement");
    _sub_4980FD(this, arg);
}

_extern bool _sub_497732(ShipStatic *const, SobType, char const *);
bool ShipStatic::LoadModelBegin(SobType, char const *) // 0x497732
{
    mangled_assert("?LoadModelBegin@ShipStatic@@MAE_NW4SobType@@PBD@Z");
    todo("implement");
    bool __result = _sub_497732(this, arg, arg);
    return __result;
}

_extern void _sub_4977BE(ShipStatic *const);
void ShipStatic::LoadModelExecute() // 0x4977BE
{
    mangled_assert("?LoadModelExecute@ShipStatic@@MAEXXZ");
    todo("implement");
    _sub_4977BE(this);
}

_extern void _sub_497784(ShipStatic *const, char const *);
void ShipStatic::LoadModelEnd(char const *) // 0x497784
{
    mangled_assert("?LoadModelEnd@ShipStatic@@MAEXPBD@Z");
    todo("implement");
    _sub_497784(this, arg);
}

_extern bool _sub_4977C3(ShipStatic *const, char const *);
bool ShipStatic::LoadModelFromCache(char const *) // 0x4977C3
{
    mangled_assert("?LoadModelFromCache@ShipStatic@@MAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_4977C3(this, arg);
    return __result;
}

_extern void _sub_4977FE(ShipStatic *const, IFF *, IFFChunk *, void *, void *);
void ShipStatic::OnHandlingDTRM(IFF *, IFFChunk *, void *, void *) // 0x4977FE
{
    mangled_assert("?OnHandlingDTRM@ShipStatic@@MAEXPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    _sub_4977FE(this, arg, arg, arg, arg);
}

/* ---------- private code */
#endif

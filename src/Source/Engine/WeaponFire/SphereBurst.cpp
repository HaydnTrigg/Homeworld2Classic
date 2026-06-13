#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <memory\mmfixedpool.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <boost\static_assert.hpp>
#include <crtdefs.h>
#include <GameObj.h>
#include <Collision\Primitives\mesh.h>
#include <config.h>
#include <Collision\Primitives\triangle.h>
#include <task.h>
#include <stack>
#include <Mathlib\matrix3.h>
#include <weaponfiretypes.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\Collision.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <EffectCreate.h>
#include <xutility>
#include <Collision\BVH\proxy.h>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <vector>
#include <Collision\primitivesfwd.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <WeaponStatic.h>
#include <Interpolation.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <SobZeroMassBody.h>
#include <Mathlib\vector4.h>
#include <sobid.h>
#include <sobzeromassbodystatic.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <iostream>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <boost\cstdint.hpp>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <boost\config.hpp>
#include <SOBGroupManager.h>
#include <hash_map>
#include <assert.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <xhash>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <savegameimpl.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierTypes.h>
#include <HyperspaceManager.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <SquadronList.h>
#include <boost\detail\lwm_win32.hpp>
#include <Universe.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <WeaponFire\SphereBurst.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <WeaponFire\WeaponFire.h>
#include <wchar.h>
#include <savestream.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const SphereBurst::m_saveToken[0]; // 0x78F020
extern SaveData const SphereBurst::m_saveData[2]; // 0x78F030

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<SphereBurst,500> s_SphereBurstAllocator; // 0x843EB4
}

/* ---------- public code */

_extern void *_sub_4A869B(unsigned __int32);
void *SphereBurst::operator new(unsigned __int32 size) // 0x4A869B
{
    mangled_assert("??2SphereBurst@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_4A869B(size);
    return __result;
}

_extern void _sub_4A86A8(void *, unsigned __int32);
void SphereBurst::operator delete(void *p, unsigned __int32 size) // 0x4A86A8
{
    mangled_assert("??3SphereBurst@@SGXPAXI@Z");
    todo("implement");
    _sub_4A86A8(p, size);
}

_extern void _sub_4A8E76(SphereBurst *const);
void SphereBurst::postRestore() // 0x4A8E76
{
    mangled_assert("?postRestore@SphereBurst@@UAEXXZ");
    todo("implement");
    _sub_4A8E76(this);
}

_extern _sub_4A8524(SphereBurst *const, SaveGameData *);
SphereBurst::SphereBurst(SaveGameData *) // 0x4A8524
{
    mangled_assert("??0SphereBurst@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4A8524(this, arg);
}

_extern void _sub_4A8D91(SphereBurst *const);
void SphereBurst::defaultSettings() // 0x4A8D91
{
    mangled_assert("?defaultSettings@SphereBurst@@QAEXXZ");
    todo("implement");
    _sub_4A8D91(this);
}

_extern void _sub_4A8055(void *, SaveGameData *, SaveType);
void SphereBurst::saveHitSobs(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x4A8055
{
    mangled_assert("?saveHitSobs@SphereBurst@@CGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_4A8055(objectPtr, saveGameData, savetype);
}

_extern void _sub_4A8095(void *, SaveGameData *);
void SphereBurst::loadHitSobs(void *objectPtr, SaveGameData *saveGameData) // 0x4A8095
{
    mangled_assert("?loadHitSobs@SphereBurst@@CGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_4A8095(objectPtr, saveGameData);
}

_extern bool _sub_4A8F01(SphereBurst *const, SaveGameData *);
bool SphereBurst::restore(SaveGameData *) // 0x4A8F01
{
    mangled_assert("?restore@SphereBurst@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4A8F01(this, arg);
    return __result;
}

_extern bool _sub_4A8F4E(SphereBurst *const, SaveGameData *, SaveType);
bool SphereBurst::save(SaveGameData *, SaveType) // 0x4A8F4E
{
    mangled_assert("?save@SphereBurst@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4A8F4E(this, arg, arg);
    return __result;
}

_extern _sub_4A857B(SphereBurst *const, char const *, Sob *);
SphereBurst::SphereBurst(char const *, Sob *) // 0x4A857B
{
    mangled_assert("??0SphereBurst@@QAE@PBDPAVSob@@@Z");
    todo("implement");
    _sub_4A857B(this, arg, arg);
}

_extern void _sub_4A8653(std::_List_buy<unsigned int,std::allocator<unsigned int> > *const);
_inline std::_List_buy<unsigned int,std::allocator<unsigned int> >::~_List_buy<unsigned int,std::allocator<unsigned int> >() // 0x4A8653
{
    mangled_assert("??1?$_List_buy@IV?$allocator@I@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4A8653(this);
}

_extern void _sub_4A8673(SphereBurst *const);
SphereBurst::~SphereBurst() // 0x4A8673
{
    mangled_assert("??1SphereBurst@@UAE@XZ");
    todo("implement");
    _sub_4A8673(this);
}

_extern void _sub_4A8A37(SphereBurst *const);
void SphereBurst::RemoveFromSimulation() // 0x4A8A37
{
    mangled_assert("?RemoveFromSimulation@SphereBurst@@MAEXXZ");
    todo("implement");
    _sub_4A8A37(this);
}

_extern void _sub_4A8A36(SphereBurst *const);
void SphereBurst::RemoveAllSimData() // 0x4A8A36
{
    mangled_assert("?RemoveAllSimData@SphereBurst@@IAEXXZ");
    todo("implement");
    _sub_4A8A36(this);
}

_extern void _sub_4A8E33(SphereBurst *const, WeaponStatic const *);
void SphereBurst::initialize(WeaponStatic const *) // 0x4A8E33
{
    mangled_assert("?initialize@SphereBurst@@UAEXPBVWeaponStatic@@@Z");
    todo("implement");
    _sub_4A8E33(this, arg);
}

_extern void _sub_4A8DBE(SphereBurst *const, vector3 *, float *);
void SphereBurst::getCollisionSphere(vector3 *, float *) // 0x4A8DBE
{
    mangled_assert("?getCollisionSphere@SphereBurst@@UAEXPAVvector3@@PAM@Z");
    todo("implement");
    _sub_4A8DBE(this, arg, arg);
}

_extern float _sub_4A8DEB(SphereBurst *const);
float SphereBurst::getCollisionSphereRadius() // 0x4A8DEB
{
    mangled_assert("?getCollisionSphereRadius@SphereBurst@@UAEMXZ");
    todo("implement");
    float __result = _sub_4A8DEB(this);
    return __result;
}

_extern bool _sub_4A8FAB(SphereBurst *const, float);
bool SphereBurst::update(float) // 0x4A8FAB
{
    mangled_assert("?update@SphereBurst@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_4A8FAB(this, arg);
    return __result;
}

_extern bool _sub_4A8A3C(SphereBurst *const, Sob *);
bool SphereBurst::ShouldIgnore(Sob *) // 0x4A8A3C
{
    mangled_assert("?ShouldIgnore@SphereBurst@@MAE_NPAVSob@@@Z");
    todo("implement");
    bool __result = _sub_4A8A3C(this, arg);
    return __result;
}

_extern bool _sub_4A8DF2(SphereBurst *const, Sob *, vector3 const &, vector3 const &);
bool SphereBurst::hitsSob(Sob *, vector3 const &, vector3 const &) // 0x4A8DF2
{
    mangled_assert("?hitsSob@SphereBurst@@UAE_NPAVSob@@ABVvector3@@1@Z");
    todo("implement");
    bool __result = _sub_4A8DF2(this, arg, arg, arg);
    return __result;
}

_extern void _sub_4A88A4(SphereBurst *const);
void SphereBurst::PerformCollisionDetection() // 0x4A88A4
{
    mangled_assert("?PerformCollisionDetection@SphereBurst@@UAEXXZ");
    todo("implement");
    _sub_4A88A4(this);
}

_extern void _sub_4A884C(SphereBurst *const, std::vector<SphereBurst::CollisionInfo,std::allocator<SphereBurst::CollisionInfo> > const &);
void SphereBurst::CollisionResponse(std::vector<SphereBurst::CollisionInfo,std::allocator<SphereBurst::CollisionInfo> > const &) // 0x4A884C
{
    mangled_assert("?CollisionResponse@SphereBurst@@AAEXABV?$vector@UCollisionInfo@SphereBurst@@V?$allocator@UCollisionInfo@SphereBurst@@@std@@@std@@@Z");
    todo("implement");
    _sub_4A884C(this, arg);
}

/* ---------- private code */
#endif

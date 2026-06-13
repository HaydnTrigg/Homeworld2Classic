#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Collision\Primitives\obb.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <WeaponClassSpecificInfo.h>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <new>
#include <Collision\BVH\profiling.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Modifiers\ModifierTargetCache.h>
#include <xutility>
#include <utility>
#include <gameSettings.h>
#include <iosfwd>
#include <vector>
#include <config.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <syncChecking.h>
#include <fileio\fileioexports.h>
#include <fixedpoint.h>
#include <Modifiers\ModifierAbility.h>
#include <memory\mmfixedpool.h>
#include <util\fixed.h>
#include <Collision\BVH\bvh.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <Mathlib\vector3.h>
#include <seInterface2\PatchBase.h>
#include <Mathlib\vector4.h>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <weaponinfo.h>
#include <savestream.h>
#include <assert.h>
#include <playerresourcetype.h>
#include <Mathlib\quat.h>
#include <TeamColourRegistry.h>
#include <SelTarg.h>
#include <savegame.h>
#include <prim.h>
#include <task.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <MeshAnimation.h>
#include <savegamedata.h>
#include <ShieldTypes.h>
#include <Collision\BVH\octree.h>
#include <gamestructimpl.h>
#include <debug\db.h>
#include <Collision\BVH\span.h>
#include <Badge.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <sob.h>
#include <Subsystems\HardPointManager.h>
#include <sobstatic.h>
#include <Subsystems\HardPoint.h>
#include <Collision\Primitives\sphere.h>
#include <Subsystems\HardPointStatic.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Subsystems\SubSystemType.h>
#include <Modifiers\ModifierUIInfo.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MultiplierContainer.h>
#include <Collision\Primitives\aabb.h>
#include <MultiplierTypes.h>
#include <Modifiers\ModifierApplier.h>
#include <boost\static_assert.hpp>
#include <Subsystems\Subsystem.h>
#include <visibility.h>
#include <Subsystems\SubsystemStatic.h>
#include <sobid.h>
#include <wchar.h>
#include <weaponstaticinfo.h>
#include <abilities.h>
#include <GunBinding.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const Visibility::m_saveData[4]; // 0x78BEE0
extern char const Visibility::m_saveToken[11]; // 0x78BF60

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<Visibility,1000> s_VisibilityAllocator; // 0x843C20
}

/* ---------- public code */

_extern void *_sub_483C92(unsigned __int32);
void *Visibility::operator new(unsigned __int32 size) // 0x483C92
{
    mangled_assert("??2Visibility@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_483C92(size);
    return __result;
}

_extern void _sub_483C9F(void *, unsigned __int32);
void Visibility::operator delete(void *p, unsigned __int32 size) // 0x483C9F
{
    mangled_assert("??3Visibility@@SGXPAXI@Z");
    todo("implement");
    _sub_483C9F(p, size);
}

_extern _sub_483AEB(Visibility *const);
Visibility::Visibility() // 0x483AEB
{
    mangled_assert("??0Visibility@@QAE@XZ");
    todo("implement");
    _sub_483AEB(this);
}

_extern void _sub_483C31(Visibility *const);
Visibility::~Visibility() // 0x483C31
{
    mangled_assert("??1Visibility@@UAE@XZ");
    todo("implement");
    _sub_483C31(this);
}

_extern void _sub_4840AC(Visibility *const, unsigned __int32, float);
void Visibility::cloakByPlayer(unsigned __int32, float) // 0x4840AC
{
    mangled_assert("?cloakByPlayer@Visibility@@QAEXIM@Z");
    todo("implement");
    _sub_4840AC(this, arg, arg);
}

_extern void _sub_48412E(Visibility *const, unsigned __int32, float);
void Visibility::detectByPlayer(unsigned __int32, float) // 0x48412E
{
    mangled_assert("?detectByPlayer@Visibility@@QAEXIM@Z");
    todo("implement");
    _sub_48412E(this, arg, arg);
}

_extern void _sub_484451(Visibility *const, unsigned __int32);
void Visibility::visualSpot(unsigned __int32) // 0x484451
{
    mangled_assert("?visualSpot@Visibility@@QAEXI@Z");
    todo("implement");
    _sub_484451(this, arg);
}

_extern void _sub_484261(Visibility *const, unsigned __int32);
void Visibility::primarySensorsSpot(unsigned __int32) // 0x484261
{
    mangled_assert("?primarySensorsSpot@Visibility@@QAEXI@Z");
    todo("implement");
    _sub_484261(this, arg);
}

_extern void _sub_484433(Visibility *const, unsigned __int32);
void Visibility::secondarySensorsSpot(unsigned __int32) // 0x484433
{
    mangled_assert("?secondarySensorsSpot@Visibility@@QAEXI@Z");
    todo("implement");
    _sub_484433(this, arg);
}

_extern void _sub_484079(Visibility *const);
void Visibility::clearCloaking() // 0x484079
{
    mangled_assert("?clearCloaking@Visibility@@QAEXXZ");
    todo("implement");
    _sub_484079(this);
}

_extern void _sub_484097(Visibility *const, unsigned __int32);
void Visibility::clearVisibilityAndDetectionBy(unsigned __int32) // 0x484097
{
    mangled_assert("?clearVisibilityAndDetectionBy@Visibility@@QAEXI@Z");
    todo("implement");
    _sub_484097(this, arg);
}

_extern void _sub_484047(Visibility *const);
void Visibility::clearAll() // 0x484047
{
    mangled_assert("?clearAll@Visibility@@QAEXXZ");
    todo("implement");
    _sub_484047(this);
}

_extern bool _sub_4841FD(Visibility const *const);
bool Visibility::isCloaked() const // 0x4841FD
{
    mangled_assert("?isCloaked@Visibility@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4841FD(this);
    return __result;
}

_extern bool _sub_4841E2(Visibility const *const, unsigned __int32);
bool Visibility::isCloakDetected(unsigned __int32) const // 0x4841E2
{
    mangled_assert("?isCloakDetected@Visibility@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_4841E2(this, arg);
    return __result;
}

_extern void _sub_484149(Visibility *const);
void Visibility::finaliseVisibilityForThisUpdate() // 0x484149
{
    mangled_assert("?finaliseVisibilityForThisUpdate@Visibility@@QAEXXZ");
    todo("implement");
    _sub_484149(this);
}

_extern _sub_483A96(Visibility *const, SaveGameData *);
Visibility::Visibility(SaveGameData *) // 0x483A96
{
    mangled_assert("??0Visibility@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_483A96(this, arg);
}

_extern void _sub_48412D(Visibility *const);
void Visibility::defaultSettings() // 0x48412D
{
    mangled_assert("?defaultSettings@Visibility@@QAEXXZ");
    todo("implement");
    _sub_48412D(this);
}

_extern void _sub_484260(Visibility *const);
void Visibility::postRestore() // 0x484260
{
    mangled_assert("?postRestore@Visibility@@UAEXXZ");
    todo("implement");
    _sub_484260(this);
}

_extern bool _sub_4843BA(Visibility *const, SaveGameData *);
bool Visibility::restore(SaveGameData *) // 0x4843BA
{
    mangled_assert("?restore@Visibility@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4843BA(this, arg);
    return __result;
}

_extern bool _sub_4843F8(Visibility *const, SaveGameData *, SaveType);
bool Visibility::save(SaveGameData *, SaveType) // 0x4843F8
{
    mangled_assert("?save@Visibility@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4843F8(this, arg, arg);
    return __result;
}

_extern void _sub_48362C(void *, SaveGameData *, SaveType);
void Visibility::saveReal32Vector(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x48362C
{
    mangled_assert("?saveReal32Vector@Visibility@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_48362C(objectPtr, saveGameData, savetype);
}

_extern void _sub_483678(void *, SaveGameData *);
void Visibility::loadReal32Vector(void *objectPtr, SaveGameData *saveGameData) // 0x483678
{
    mangled_assert("?loadReal32Vector@Visibility@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_483678(objectPtr, saveGameData);
}

_extern void _sub_4836D0(void *, SaveGameData *, SaveType);
void Visibility::saveVisVector(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x4836D0
{
    mangled_assert("?saveVisVector@Visibility@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_4836D0(objectPtr, saveGameData, savetype);
}

_extern void _sub_483718(void *, SaveGameData *);
void Visibility::loadVisVector(void *objectPtr, SaveGameData *saveGameData) // 0x483718
{
    mangled_assert("?loadVisVector@Visibility@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_483718(objectPtr, saveGameData);
}

/* ---------- private code */
#endif

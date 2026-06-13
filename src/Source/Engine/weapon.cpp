#if 0
/* ---------- headers */

#include "decomp.h"
#include <dbdefines.h>
#include <assist\stlexsmallvector.h>
#include <UnitCaps\UnitCaps.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Render\gl\r_types.h>
#include <pch.h>
#include <WeaponStatic.h>
#include <Mathlib\matrix3.h>
#include <weaponfiretypes.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <WeaponClassSpecificInfo.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\Collision.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Collision\BVH\span.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Modifiers\ModifierEffect.h>
#include <xutility>
#include <Collision\BVH\proxy.h>
#include <utility>
#include <iosfwd>
#include <Collision\intersect.h>
#include <abilities.h>
#include <vector>
#include <Collision\primitivesfwd.h>
#include <Render\gl\r_defines.h>
#include <Render\objects\core.h>
#include <xmemory>
#include <Render\gl\glext.h>
#include <Modifiers\ModifierApplier.h>
#include <Render\objects\cliprect.h>
#include <SOBGroupManager.h>
#include <Interpolation.h>
#include <hash_map>
#include <xhash>
#include <HyperspaceManager.h>
#include <gameRandom.h>
#include <list>
#include <SquadronList.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <SobZeroMassBody.h>
#include <Mathlib\vector4.h>
#include <gameRenderDebug.h>
#include <sobid.h>
#include <Render\objects\fontsystem.h>
#include <sobzeromassbodystatic.h>
#include <Render\objects\objects.h>
#include <map>
#include <Render\objects\bitmapfont.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <weaponinfo.h>
#include <Modifiers\ModifierTargetCache.h>
#include <boost\cstdint.hpp>
#include <config.h>
#include <CoordSysUtilities.h>
#include <weaponTargetInfo.h>
#include <Subsystems\Subsystem.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <Subsystems\SubsystemStatic.h>
#include <seInterface2\SoundParams.h>
#include <TeamColourRegistry.h>
#include <weaponstaticinfo.h>
#include <savegame.h>
#include <GunBinding.h>
#include <task.h>
#include <Mathlib\quat.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <Collision\Primitives\capsule.h>
#include <ship.h>
#include <Race.h>
#include <Collision\Primitives\segment.h>
#include <SobWithMesh.h>
#include <Collision\BVH\profiling.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <Mathlib\mathlibdll.h>
#include <ShieldTypes.h>
#include <Mathlib\fastmath.h>
#include <MeshAnimation.h>
#include <Universe.h>
#include <Render\objects\compiledtext.h>
#include <Modifiers\ModifierAbility.h>
#include <BuildManager.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <pathpoints.h>
#include <random.h>
#include <Subsystems\HardPointManager.h>
#include <ITweak.h>
#include <debug\db.h>
#include <Subsystems\HardPoint.h>
#include <Tactics.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <selection.h>
#include <savegamedef.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\BVH\bvh.h>
#include <platform\osdef.h>
#include <boost\detail\lwm_win32.hpp>
#include <playerresourcetype.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <profile\profile.h>
#include <weapon.h>
#include <Mathlib\matvec.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Player.h>
#include <iostream>
#include <WeaponFire\WeaponFire.h>
#include <wchar.h>
#include <ResearchManager.h>
#include <sob.h>
#include <sobstatic.h>
#include <fixedpoint.h>
#include <Collision\Primitives\sphere.h>
#include <util\fixed.h>
#include <Render\gl\lotypes.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SaveData const Weapon::m_saveData[15]; // 0x78E310
extern char const Weapon::m_saveToken[7]; // 0x78E4F0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_49D759(WeaponFireParameters *const);
WeaponFireParameters::WeaponFireParameters() // 0x49D759
{
    mangled_assert("??0WeaponFireParameters@@QAE@XZ");
    todo("implement");
    _sub_49D759(this);
}

_extern void _sub_49D7D1(WeaponFireParameters *const);
WeaponFireParameters::~WeaponFireParameters() // 0x49D7D1
{
    mangled_assert("??1WeaponFireParameters@@QAE@XZ");
    todo("implement");
    _sub_49D7D1(this);
}

_extern _sub_49D705(Weapon *const, Sob *);
Weapon::Weapon(Sob *) // 0x49D705
{
    mangled_assert("??0Weapon@@QAE@PAVSob@@@Z");
    todo("implement");
    _sub_49D705(this, arg);
}

_extern _sub_49D6BC(Weapon *const, SaveGameData *);
Weapon::Weapon(SaveGameData *) // 0x49D6BC
{
    mangled_assert("??0Weapon@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_49D6BC(this, arg);
}

_extern void _sub_49DBF1(Weapon *const);
void Weapon::defaultSettings() // 0x49DBF1
{
    mangled_assert("?defaultSettings@Weapon@@QAEXXZ");
    todo("implement");
    _sub_49DBF1(this);
}

_extern void _sub_49E247(Weapon *const);
void Weapon::postRestore() // 0x49E247
{
    mangled_assert("?postRestore@Weapon@@UAEXXZ");
    todo("implement");
    _sub_49E247(this);
}

_extern bool _sub_49E25B(Weapon *const, SaveGameData *);
bool Weapon::restore(SaveGameData *) // 0x49E25B
{
    mangled_assert("?restore@Weapon@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_49E25B(this, arg);
    return __result;
}

_extern bool _sub_49E299(Weapon *const, SaveGameData *, SaveType);
bool Weapon::save(SaveGameData *, SaveType) // 0x49E299
{
    mangled_assert("?save@Weapon@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_49E299(this, arg, arg);
    return __result;
}

_extern void _sub_49D77F(Weapon *const);
Weapon::~Weapon() // 0x49D77F
{
    mangled_assert("??1Weapon@@UAE@XZ");
    todo("implement");
    _sub_49D77F(this);
}

_extern bool _sub_49E196(Weapon *const);
bool Weapon::ourTurnToFire() // 0x49E196
{
    mangled_assert("?ourTurnToFire@Weapon@@IAE_NXZ");
    todo("implement");
    bool __result = _sub_49E196(this);
    return __result;
}

_extern bool _sub_49DA4E(Weapon *const, WeaponTargetInfo const &);
bool Weapon::canShoot(WeaponTargetInfo const &) // 0x49DA4E
{
    mangled_assert("?canShoot@Weapon@@MAE_NABVWeaponTargetInfo@@@Z");
    todo("implement");
    bool __result = _sub_49DA4E(this, arg);
    return __result;
}

_extern vector3 _sub_49E901(Weapon const *const, vector3 const &);
vector3 Weapon::transformToLocalCoords(vector3 const &) const // 0x49E901
{
    mangled_assert("?transformToLocalCoords@Weapon@@IBE?AVvector3@@ABV2@@Z");
    todo("implement");
    vector3 __result = _sub_49E901(this, arg);
    return __result;
}

_extern vector3 _sub_49DD85(Weapon const *const);
vector3 Weapon::getWSPosition() const // 0x49DD85
{
    mangled_assert("?getWSPosition@Weapon@@IBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_49DD85(this);
    return __result;
}

_extern vector3 _sub_49DE56(Weapon const *const);
vector3 Weapon::getWSVelocity() const // 0x49DE56
{
    mangled_assert("?getWSVelocity@Weapon@@IBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_49DE56(this);
    return __result;
}

_extern vector3 _sub_49DD5C(Weapon const *const);
vector3 Weapon::getTargetInGunRestCoords() const // 0x49DD5C
{
    mangled_assert("?getTargetInGunRestCoords@Weapon@@IBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_49DD5C(this);
    return __result;
}

_extern vector3 _sub_49DD33(Weapon const *const, WeaponTargetInfo const &);
vector3 Weapon::getTargetInGunRestCoords(WeaponTargetInfo const &) const // 0x49DD33
{
    mangled_assert("?getTargetInGunRestCoords@Weapon@@IBE?AVvector3@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
    vector3 __result = _sub_49DD33(this, arg);
    return __result;
}

_extern void _sub_49E248(Weapon *const);
void Weapon::resetTarget() // 0x49E248
{
    mangled_assert("?resetTarget@Weapon@@QAEXXZ");
    todo("implement");
    _sub_49E248(this);
}

_extern bool _sub_49E4F9(Weapon *const, WeaponTargetInfo const &, Selection const &);
bool Weapon::target(WeaponTargetInfo const &, Selection const &) // 0x49E4F9
{
    mangled_assert("?target@Weapon@@AAE_NABVWeaponTargetInfo@@ABVSelection@@@Z");
    todo("implement");
    bool __result = _sub_49E4F9(this, arg, arg);
    return __result;
}

_extern void _sub_49EA5D(Weapon *const, float);
void Weapon::updateTimers(float) // 0x49EA5D
{
    mangled_assert("?updateTimers@Weapon@@IAEXM@Z");
    todo("implement");
    _sub_49EA5D(this, arg);
}

_extern bool _sub_49E2D4(Weapon *const, float);
bool Weapon::shoot(float) // 0x49E2D4
{
    mangled_assert("?shoot@Weapon@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_49E2D4(this, arg);
    return __result;
}

_extern bool _sub_49E13C(Weapon *const, WeaponTargetInfo const &, Selection const &);
bool Weapon::lockOn(WeaponTargetInfo const &, Selection const &) // 0x49E13C
{
    mangled_assert("?lockOn@Weapon@@QAE_NABVWeaponTargetInfo@@ABVSelection@@@Z");
    todo("implement");
    bool __result = _sub_49E13C(this, arg, arg);
    return __result;
}

_extern bool _sub_49DEC7(Weapon *const, vector3 const &);
bool Weapon::isLineOfFireClear(vector3 const &) // 0x49DEC7
{
    mangled_assert("?isLineOfFireClear@Weapon@@IAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_49DEC7(this, arg);
    return __result;
}

_extern WeaponActivate _sub_49DE92(Weapon const *const);
WeaponActivate Weapon::getWeaponActivation() const // 0x49DE92
{
    mangled_assert("?getWeaponActivation@Weapon@@IBE?AW4WeaponActivate@@XZ");
    todo("implement");
    WeaponActivate __result = _sub_49DE92(this);
    return __result;
}

_extern void _sub_49D93F(Weapon *const, WeaponStatic *, WeaponClassSpecificInfo *);
void Weapon::bindStatics(WeaponStatic *, WeaponClassSpecificInfo *) // 0x49D93F
{
    mangled_assert("?bindStatics@Weapon@@UAEXPAVWeaponStatic@@PAVWeaponClassSpecificInfo@@@Z");
    todo("implement");
    _sub_49D93F(this, arg, arg);
}

_extern void _sub_49D87A(Weapon *const, WeaponStatic *, WeaponClassSpecificInfo *);
void Weapon::bindData(WeaponStatic *, WeaponClassSpecificInfo *) // 0x49D87A
{
    mangled_assert("?bindData@Weapon@@UAEXPAVWeaponStatic@@PAVWeaponClassSpecificInfo@@@Z");
    todo("implement");
    _sub_49D87A(this, arg, arg);
}

_extern bool _sub_49E4CE(Weapon *const);
bool Weapon::slave() // 0x49E4CE
{
    mangled_assert("?slave@Weapon@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_49E4CE(this);
    return __result;
}

_extern Sob *_sub_49D950(Weapon *const, WeaponActivate, vector3 const &);
Sob *Weapon::blindFire(WeaponActivate, vector3 const &) // 0x49D950
{
    mangled_assert("?blindFire@Weapon@@QAEPAVSob@@W4WeaponActivate@@ABVvector3@@@Z");
    todo("implement");
    Sob * __result = _sub_49D950(this, arg, arg);
    return __result;
}

_extern void _sub_49D839(Weapon *const);
void Weapon::MoveToHomePosition() // 0x49D839
{
    mangled_assert("?MoveToHomePosition@Weapon@@MAEXXZ");
    todo("implement");
    _sub_49D839(this);
}

_extern float _sub_49DC2B(Weapon *const, unsigned __int32);
float Weapon::getAccuracy(unsigned __int32) // 0x49DC2B
{
    mangled_assert("?getAccuracy@Weapon@@QAEMI@Z");
    todo("implement");
    float __result = _sub_49DC2B(this, arg);
    return __result;
}

_extern float _sub_49DCB4(Weapon *const);
float Weapon::getDamageMultiplier() // 0x49DCB4
{
    mangled_assert("?getDamageMultiplier@Weapon@@QAEMXZ");
    todo("implement");
    float __result = _sub_49DCB4(this);
    return __result;
}

_extern float _sub_49DCF0(Weapon const *const);
float Weapon::getPerSecondDamageRating() const // 0x49DCF0
{
    mangled_assert("?getPerSecondDamageRating@Weapon@@QBEMXZ");
    todo("implement");
    float __result = _sub_49DCF0(this);
    return __result;
}

_extern Ship *_sub_49DD0F(Weapon const *const);
Ship *Weapon::getShipOwner() const // 0x49DD0F
{
    mangled_assert("?getShipOwner@Weapon@@QBEPAVShip@@XZ");
    todo("implement");
    Ship * __result = _sub_49DD0F(this);
    return __result;
}

_extern Player *_sub_49DCF8(Weapon const *const);
Player *Weapon::getPlayerOwner() const // 0x49DCF8
{
    mangled_assert("?getPlayerOwner@Weapon@@QBEPAVPlayer@@XZ");
    todo("implement");
    Player * __result = _sub_49DCF8(this);
    return __result;
}

/* ---------- private code */
#endif

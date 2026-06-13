#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SimVis\LodFX.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <type_traits>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <WeaponFire\WeaponFire.h>
#include <sob.h>
#include <math.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector4.h>
#include <map>
#include <SimVis\EffectContainer.h>
#include <xtree>
#include <Render\FxGL\FXManager.h>
#include <boost\smart_ptr.hpp>
#include <Render\FxGL\VarMulti.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\mathutil.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <weaponfiretypes.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\cstdint.hpp>
#include <Collision\Collision.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <boost\scoped_array.hpp>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <CoordSysUtilities.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Interpolation.h>
#include <Mathlib\mathlibdll.h>
#include <profile\profile.h>
#include <SimVis\CullFX.h>
#include <Mathlib\fastmath.h>
#include <iostream>
#include <seInterface2\SampleID.h>
#include <Collision\Primitives\aabb.h>
#include <seInterface2\SampleBase.h>
#include <SobZeroMassBody.h>
#include <sobzeromassbodystatic.h>
#include <debug\db.h>
#include <sobid.h>
#include <SimVis\SobVis.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <EffectCreate.h>
#include <seInterface2\sedefinesshared.h>
#include <wchar.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void makeDirectionalTransform(vector3 const &forward, matrix3 &transform);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_DefaultDeath; // 0x83633C
    extern char const *k_DefaultRadiation; // 0x836340
    extern char const *k_DefaultChargedDustCloud; // 0x836344
    extern char const *k_DefaultMissileTrail; // 0x836348
    extern char const *k_DefaultClusterMissile; // 0x83634C
    extern char const *k_DefaultLatchStart; // 0x836350
    extern char const *k_DefaultLatchEnd; // 0x836354
    extern char const *k_DefaultFullResourcing; // 0x836358
    extern char const *k_DefaultRepairing; // 0x83635C
    extern char const *k_DefaultBoarding; // 0x836360
    extern char const *k_DefaultCloakGen; // 0x836364
}

/* ---------- public code */

_extern unsigned __int32 _sub_4E1F13(WeaponFire *);
unsigned __int32 EffectCreate::bulletEffect(WeaponFire *wf) // 0x4E1F13
{
    mangled_assert("?bulletEffect@EffectCreate@@SGIPAVWeaponFire@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4E1F13(wf);
    return __result;
}

_extern unsigned __int32 _sub_4E1D89(WeaponFire *, Sob *);
unsigned __int32 EffectCreate::beamEffect(WeaponFire *wf, Sob *pShip) // 0x4E1D89
{
    mangled_assert("?beamEffect@EffectCreate@@SGIPAVWeaponFire@@PAVSob@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4E1D89(wf, pShip);
    return __result;
}

_extern void _sub_4E2436(char const *, char const *, float, Sob *, vector3 const &, vector3 const &, float, bool);
void EffectCreate::hitEffectInternal(char const *fxname, char const *soundname, float scale, Sob *hitSob, vector3 const &hitPosition, vector3 const &hitNormal, float nlips, bool bFarMode) // 0x4E2436
{
    mangled_assert("?hitEffectInternal@EffectCreate@@CGXPBD0MPAVSob@@ABVvector3@@2M_N@Z");
    todo("implement");
    _sub_4E2436(fxname, soundname, scale, hitSob, hitPosition, hitNormal, nlips, bFarMode);
}

_extern void _sub_4E2351(WeaponFireStatic const *, Sob *, float, vector3 const &, vector3 const &);
void EffectCreate::hitEffect(WeaponFireStatic const *pStatic, Sob *hitSob, float damage, vector3 const &hitPosition, vector3 const &hitNormal) // 0x4E2351
{
    mangled_assert("?hitEffect@EffectCreate@@SGXPBVWeaponFireStatic@@PAVSob@@MABVvector3@@2@Z");
    todo("implement");
    _sub_4E2351(pStatic, hitSob, damage, hitPosition, hitNormal);
}

_extern void _sub_4E218A(char const *, vector3 const &, vector3 const &);
void EffectCreate::defenseFieldHitEffect(char const *fxname, vector3 const &hitPosition, vector3 const &hitNormal) // 0x4E218A
{
    mangled_assert("?defenseFieldHitEffect@EffectCreate@@SGXPBDABVvector3@@1@Z");
    todo("implement");
    _sub_4E218A(fxname, hitPosition, hitNormal);
}

_extern void _sub_4E1E4A(WeaponFire const *, Sob *, float, vector3 const &, vector3 const &);
void EffectCreate::blowthroughEffect(WeaponFire const *wf, Sob *hitSob, float damage, vector3 const &hitPosition, vector3 const &hitNormal) // 0x4E1E4A
{
    mangled_assert("?blowthroughEffect@EffectCreate@@SGXPBVWeaponFire@@PAVSob@@MABVvector3@@2@Z");
    todo("implement");
    _sub_4E1E4A(wf, hitSob, damage, hitPosition, hitNormal);
}

_extern void _sub_4E227D(WeaponFireStatic const *, Sob *, vector3 const &, vector3 const &);
void EffectCreate::fireEffect(WeaponFireStatic const *wfStatic, Sob *pOwner, vector3 const &position, vector3 const &normal) // 0x4E227D
{
    mangled_assert("?fireEffect@EffectCreate@@SGXPBVWeaponFireStatic@@PAVSob@@ABVvector3@@2@Z");
    todo("implement");
    _sub_4E227D(wfStatic, pOwner, position, normal);
}

_extern void _sub_4E2246(WeaponFire *, float, Sob *, char const *);
void EffectCreate::fireEffect(WeaponFire *wf, float strength, Sob *pOwner, char const *fireEvent) // 0x4E2246
{
    mangled_assert("?fireEffect@EffectCreate@@SGXPAVWeaponFire@@MPAVSob@@PBD@Z");
    todo("implement");
    _sub_4E2246(wf, strength, pOwner, fireEvent);
}

_extern void _sub_4E2BA5(Sob *, char const *, bool);
void EffectCreate::radiationEffect(Sob *pSob, char const *effectName, bool start) // 0x4E2BA5
{
    mangled_assert("?radiationEffect@EffectCreate@@SGXPAVSob@@PBD_N@Z");
    todo("implement");
    _sub_4E2BA5(pSob, effectName, start);
}

_extern void _sub_4E2031(Sob *, char const *, bool);
void EffectCreate::chargedDustCloudEffect(Sob *pSob, char const *effectName, bool start) // 0x4E2031
{
    mangled_assert("?chargedDustCloudEffect@EffectCreate@@SGXPAVSob@@PBD_N@Z");
    todo("implement");
    _sub_4E2031(pSob, effectName, start);
}

_extern void _sub_4E22F2(Sob *, char const *, bool);
void EffectCreate::fullResourcesEffect(Sob *pSob, char const *effectName, bool start) // 0x4E22F2
{
    mangled_assert("?fullResourcesEffect@EffectCreate@@SGXPAVSob@@PBD_N@Z");
    todo("implement");
    _sub_4E22F2(pSob, effectName, start);
}

_extern void _sub_4E2090(Sob *, char const *, bool);
void EffectCreate::cloakGenEffect(Sob *pSob, char const *effectName, bool start) // 0x4E2090
{
    mangled_assert("?cloakGenEffect@EffectCreate@@SGXPAVSob@@PBD_N@Z");
    todo("implement");
    _sub_4E2090(pSob, effectName, start);
}

_extern void _sub_4E2C04(Sob *, char const *, bool);
void EffectCreate::repairingEffect(Sob *pSob, char const *effectName, bool start) // 0x4E2C04
{
    mangled_assert("?repairingEffect@EffectCreate@@SGXPAVSob@@PBD_N@Z");
    todo("implement");
    _sub_4E2C04(pSob, effectName, start);
}

_extern void _sub_4E1EBD(Sob *, char const *, bool);
void EffectCreate::boardingEffect(Sob *pSob, char const *effectName, bool start) // 0x4E1EBD
{
    mangled_assert("?boardingEffect@EffectCreate@@SGXPAVSob@@PBD_N@Z");
    todo("implement");
    _sub_4E1EBD(pSob, effectName, start);
}

_extern void _sub_4E2B53(Sob *, char const *);
void EffectCreate::missileTrailEffect(Sob *pSob, char const *effectName) // 0x4E2B53
{
    mangled_assert("?missileTrailEffect@EffectCreate@@SGXPAVSob@@PBD@Z");
    todo("implement");
    _sub_4E2B53(pSob, effectName);
}

_extern void _sub_4E20EF(Sob *, char const *);
void EffectCreate::clusterMissileEffect(Sob *pSob, char const *effectName) // 0x4E20EF
{
    mangled_assert("?clusterMissileEffect@EffectCreate@@SGXPAVSob@@PBD@Z");
    todo("implement");
    _sub_4E20EF(pSob, effectName);
}

_extern void _sub_4E2830(Sob *, char const *);
void EffectCreate::latchStartEffect(Sob *pSob, char const *effectName) // 0x4E2830
{
    mangled_assert("?latchStartEffect@EffectCreate@@SGXPAVSob@@PBD@Z");
    todo("implement");
    _sub_4E2830(pSob, effectName);
}

_extern void _sub_4E27DE(Sob *, char const *);
void EffectCreate::latchEndEffect(Sob *pSob, char const *effectName) // 0x4E27DE
{
    mangled_assert("?latchEndEffect@EffectCreate@@SGXPAVSob@@PBD@Z");
    todo("implement");
    _sub_4E27DE(pSob, effectName);
}

_extern void _sub_4E2141(Sob *, char const *);
void EffectCreate::deathEffect(Sob *pSob, char const *deathName) // 0x4E2141
{
    mangled_assert("?deathEffect@EffectCreate@@SGXPAVSob@@PBD@Z");
    todo("implement");
    _sub_4E2141(pSob, deathName);
}

_extern void _sub_4E2882(vector3 const &, vector3 const &, char const *);
void EffectCreate::lightningEffect(vector3 const &fromPosition, vector3 const &toPosition, char const *lightningName) // 0x4E2882
{
    mangled_assert("?lightningEffect@EffectCreate@@SGXABVvector3@@0PBD@Z");
    todo("implement");
    _sub_4E2882(fromPosition, toPosition, lightningName);
}

_extern void _sub_4E2CAC(WeaponFire *, float);
void EffectCreate::setWeaponFireLength(WeaponFire *wf, float length) // 0x4E2CAC
{
    mangled_assert("?setWeaponFireLength@EffectCreate@@SGXPAVWeaponFire@@M@Z");
    todo("implement");
    _sub_4E2CAC(wf, length);
}

_extern void _sub_4E2CF5(WeaponFire *, float);
void EffectCreate::setWeaponFireScale(WeaponFire *wf, float scale) // 0x4E2CF5
{
    mangled_assert("?setWeaponFireScale@EffectCreate@@SGXPAVWeaponFire@@M@Z");
    todo("implement");
    _sub_4E2CF5(wf, scale);
}

_extern void _sub_4E2C63(WeaponFire *, float);
void EffectCreate::setWeaponFireFadeT(WeaponFire *wf, float fadeT) // 0x4E2C63
{
    mangled_assert("?setWeaponFireFadeT@EffectCreate@@SGXPAVWeaponFire@@M@Z");
    todo("implement");
    _sub_4E2C63(wf, fadeT);
}

_extern unsigned __int32 _sub_4E2724(Sob *, vector3 const &, matrix3 const &, float const, float const, float const, char const *);
unsigned __int32 EffectCreate::hyperspaceEffect(Sob *pShip, vector3 const &position, matrix3 const &orientation, float const width, float const height, float const length, char const *name) // 0x4E2724
{
    mangled_assert("?hyperspaceEffect@EffectCreate@@SGIPAVSob@@ABVvector3@@ABVmatrix3@@MMMPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4E2724(pShip, position, orientation, width, height, length, name);
    return __result;
}

/* ---------- private code */

_extern void _sub_4E2B10(vector3 const &, matrix3 &);
_static void makeDirectionalTransform(vector3 const &forward, matrix3 &transform) // 0x4E2B10
{
    mangled_assert("makeDirectionalTransform");
    todo("implement");
    _sub_4E2B10(forward, transform);
}
#endif

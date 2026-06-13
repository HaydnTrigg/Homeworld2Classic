#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <HyperspaceManager.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <SquadronList.h>
#include <crtdefs.h>
#include <SelTarg.h>
#include <seInterface2\PatchID.h>
#include <prim.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\matrix3.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <platform\timer.h>
#include <Collision\BVH\profiling.h>
#include <platform\platformexports.h>
#include <playerresourcetype.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <memory\memoryalloc.h>
#include <Race.h>
#include <SimVis\EffectContainer.h>
#include <Render\FxGL\FXManager.h>
#include <BuildManager.h>
#include <xutility>
#include <Render\FxGL\VarMulti.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <list>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <SOBGroupManager.h>
#include <Mathlib\vector3.h>
#include <hash_map>
#include <Mathlib\vector4.h>
#include <xhash>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Player.h>
#include <RenderAnim\RenderModelInstance.h>
#include <ResearchManager.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <Mathlib\vector2.h>
#include <memory\memorysmall.h>
#include <sob.h>
#include <util\types.h>
#include <sobstatic.h>
#include <SimVis\effectcontainervisupdate.h>
#include <Collision\Primitives\sphere.h>
#include <boost\cstdint.hpp>
#include <TeamColourRegistry.h>
#include <boost\config.hpp>
#include <savegame.h>
#include <task.h>
#include <assert.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <Mathlib\quat.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <SobRigidBodyStatic.h>
#include <WeaponFire\WeaponFire.h>
#include <SimVis\RenderModelEventSink.h>
#include <weaponfiretypes.h>
#include <RenderAnim\AnimEventSink.h>
#include <MeshAnimation.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <Mathlib\mathutil.h>
#include <Collision\Collision.h>
#include <dbdefines.h>
#include <Collision\BVH\octree.h>
#include <pathpoints.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\span.h>
#include <debug\db.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Universe.h>
#include <Collision\primitivesfwd.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <Interpolation.h>
#include <boost\detail\shared_count.hpp>
#include <memory\mmfixedpool.h>
#include <boost\detail\lwm_win32.hpp>
#include <boost\static_assert.hpp>
#include <Collision\Primitives\aabb.h>
#include <RenderAnim\MarkerInstance.h>
#include <SimVis\FogOfWarVis.h>
#include <SobZeroMassBody.h>
#include <sobzeromassbodystatic.h>
#include <sobid.h>
#include <SimVis\WeaponFireVis.h>
#include <SimVis\SobVis.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > VarPairCont;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<WeaponFireVis,1000> s_WeaponFireVisAllocator; // 0x8448EC
}

/* ---------- public code */

_extern void *_sub_5241A1(unsigned __int32);
void *WeaponFireVis::operator new(unsigned __int32 size) // 0x5241A1
{
    mangled_assert("??2WeaponFireVis@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_5241A1(size);
    return __result;
}

_extern void _sub_5241AE(void *, unsigned __int32);
void WeaponFireVis::operator delete(void *p, unsigned __int32 size) // 0x5241AE
{
    mangled_assert("??3WeaponFireVis@@SGXPAXI@Z");
    todo("implement");
    _sub_5241AE(p, size);
}

_extern _sub_523FDB(WeaponFireVis::ECVisUpdate *const);
WeaponFireVis::ECVisUpdate::ECVisUpdate() // 0x523FDB
{
    mangled_assert("??0ECVisUpdate@WeaponFireVis@@QAE@XZ");
    todo("implement");
    _sub_523FDB(this);
}

_extern _sub_523FE8(EffectContainerVisUpdate *const);
_inline EffectContainerVisUpdate::EffectContainerVisUpdate() // 0x523FE8
{
    mangled_assert("??0EffectContainerVisUpdate@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_523FE8(this);
}

_extern bool _sub_5242BB(WeaponFireVis::ECVisUpdate *const, Sob const *);
bool WeaponFireVis::ECVisUpdate::IsVisible(Sob const *) // 0x5242BB
{
    mangled_assert("?IsVisible@ECVisUpdate@WeaponFireVis@@UAE_NPBVSob@@@Z");
    todo("implement");
    bool __result = _sub_5242BB(this, arg);
    return __result;
}

_extern _sub_523FF1(WeaponFireVis *const, Sob const *);
WeaponFireVis::WeaponFireVis(Sob const *) // 0x523FF1
{
    mangled_assert("??0WeaponFireVis@@QAE@PBVSob@@@Z");
    todo("implement");
    _sub_523FF1(this, arg);
}

_extern _sub_524067(WeaponFireVis *const, Sob const *, SaveGameData *);
WeaponFireVis::WeaponFireVis(Sob const *, SaveGameData *) // 0x524067
{
    mangled_assert("??0WeaponFireVis@@QAE@PBVSob@@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_524067(this, arg, arg);
}

_extern void _sub_524152(WeaponFireVis *const);
WeaponFireVis::~WeaponFireVis() // 0x524152
{
    mangled_assert("??1WeaponFireVis@@UAE@XZ");
    todo("implement");
    _sub_524152(this);
}

_extern void _sub_5243CE(WeaponFireVis *const, HierarchyDynamic const *);
void WeaponFireVis::setHierarchy(HierarchyDynamic const *) // 0x5243CE
{
    mangled_assert("?setHierarchy@WeaponFireVis@@UAEXPBVHierarchyDynamic@@@Z");
    todo("implement");
    _sub_5243CE(this, arg);
}

_extern bool _sub_524338(WeaponFireVis const *const, char const *);
bool WeaponFireVis::hasEffectEvent(char const *) const // 0x524338
{
    mangled_assert("?hasEffectEvent@WeaponFireVis@@UBE_NPBD@Z");
    todo("implement");
    bool __result = _sub_524338(this, arg);
    return __result;
}

_extern void _sub_5243D1(WeaponFireVis *const, char const *, float);
void WeaponFireVis::startEffectEvent(char const *, float) // 0x5243D1
{
    mangled_assert("?startEffectEvent@WeaponFireVis@@UAEXPBDM@Z");
    todo("implement");
    _sub_5243D1(this, arg, arg);
}

_extern void _sub_5243D4(WeaponFireVis *const, char const *);
void WeaponFireVis::stopEffectEvent(char const *) // 0x5243D4
{
    mangled_assert("?stopEffectEvent@WeaponFireVis@@UAEXPBD@Z");
    todo("implement");
    _sub_5243D4(this, arg);
}

_extern void _sub_5243CB(WeaponFireVis *const, char const *, float, float);
void WeaponFireVis::setEffectVariable(char const *, float, float) // 0x5243CB
{
    mangled_assert("?setEffectVariable@WeaponFireVis@@UAEXPBDMM@Z");
    todo("implement");
    _sub_5243CB(this, arg, arg, arg);
}

_extern void _sub_5243D7(WeaponFireVis *const, Camera const &, float, float, __int32);
void WeaponFireVis::update(Camera const &, float, float, __int32) // 0x5243D7
{
    mangled_assert("?update@WeaponFireVis@@UAEXABVCamera@@MMH@Z");
    todo("implement");
    _sub_5243D7(this, arg, arg, arg, arg);
}

_extern void _sub_52433E(WeaponFireVis *const);
void WeaponFireVis::onHealthChange() // 0x52433E
{
    mangled_assert("?onHealthChange@WeaponFireVis@@UAEXXZ");
    todo("implement");
    _sub_52433E(this);
}

_extern bool _sub_5243C6(WeaponFireVis *const, SaveGameData *);
bool WeaponFireVis::save(SaveGameData *) // 0x5243C6
{
    mangled_assert("?save@WeaponFireVis@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5243C6(this, arg);
    return __result;
}

_extern bool _sub_5243C1(WeaponFireVis *const, SaveGameData *);
bool WeaponFireVis::restore(SaveGameData *) // 0x5243C1
{
    mangled_assert("?restore@WeaponFireVis@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_5243C1(this, arg);
    return __result;
}

_extern void _sub_52433D(WeaponFireVis *const);
void WeaponFireVis::init() // 0x52433D
{
    mangled_assert("?init@WeaponFireVis@@UAEXXZ");
    todo("implement");
    _sub_52433D(this);
}

_extern void _sub_5243BC(WeaponFireVis *const);
void WeaponFireVis::postRestore() // 0x5243BC
{
    mangled_assert("?postRestore@WeaponFireVis@@UAEXXZ");
    todo("implement");
    _sub_5243BC(this);
}

/* ---------- private code */
#endif

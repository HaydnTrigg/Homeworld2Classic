#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\BVH\profiling.h>
#include <stack>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <BuildManager.h>
#include <crtdefs.h>
#include <playerresourcetype.h>
#include <RenderAnim\EffectAnimation.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <Race.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <SimVis\effectcontainervisupdate.h>
#include <memory\memoryalloc.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <Player.h>
#include <RenderAnim\MarkerInstance.h>
#include <ResearchManager.h>
#include <RenderAnim\MarkerAnimation.h>
#include <sob.h>
#include <list>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <RenderAnim\RenderModelInstance.h>
#include <util\types.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>
#include <SimVis\SobVis.h>
#include <assist\callback.h>
#include <fixedpoint.h>
#include <memory\memorysmall.h>
#include <util\fixed.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <assert.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <SOBGroupManager.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\span.h>
#include <hash_map>
#include <profile\profile.h>
#include <Collision\BVH\Internal\span_i.h>
#include <xhash>
#include <iostream>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <assist\faststring.h>
#include <memory\mmfixedpool.h>
#include <Interpolation.h>
#include <boost\static_assert.hpp>
#include <Collision\Primitives\aabb.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <sobid.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <RenderAnim\RenderModel.h>
#include <RenderAnim\Marker.h>
#include <boost\detail\lwm_win32.hpp>
#include <Animation.h>
#include <Camera\Camera.h>
#include <HyperspaceManager.h>
#include <Camera\Frustum.h>
#include <SquadronList.h>
#include <Camera\Plane3.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <SimVis\EffectContainer.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <Render\FxGL\FXManager.h>
#include <seInterface2\SoundParams.h>
#include <wchar.h>
#include <Render\FxGL\VarMulti.h>
#include <Universe.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <TeamColourRegistry.h>
#include <Collision\Primitives\capsule.h>
#include <savegame.h>
#include <Collision\Primitives\segment.h>
#include <task.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectContainer::Effect> > > EffectListI;

/* ---------- prototypes */

extern _inline void makeTransform(matrix4 &out, matrix3 const &coordsys, vector3 const &pos);
extern _inline float effectNlipsFromParent(Sob const *pOwner);
extern _inline float effectNlipsDynamic(Camera const &camera, vector3 const &position, float nlips);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<EffectContainer,1000> s_EffectContainerAllocator; // 0x844758
}

/* ---------- public code */

_inline EffectContainer::Effect::Effect() // 0x519B16
{
    mangled_assert("??0Effect@EffectContainer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void *EffectContainer::operator new(unsigned __int32 size) // 0x519C55
{
    mangled_assert("??2EffectContainer@@SGPAXI@Z");
    todo("implement");
}

void EffectContainer::operator delete(void *p, unsigned __int32 size) // 0x519C62
{
    mangled_assert("??3EffectContainer@@SGXPAXI@Z");
    todo("implement");
}

_inline void makeTransform(matrix4 &out, matrix3 const &coordsys, vector3 const &pos) // 0x51A63F
{
    mangled_assert("?makeTransform@@YGXAAVmatrix4@@ABVmatrix3@@ABVvector3@@@Z");
    todo("implement");
}

EffectContainer::EffectContainer(SobVis *, RenderModelInstance *) // 0x519B2B
{
    mangled_assert("??0EffectContainer@@QAE@PAVSobVis@@PAVRenderModelInstance@@@Z");
    todo("implement");
}

EffectContainer::~EffectContainer() // 0x519BD0
{
    mangled_assert("??1EffectContainer@@QAE@XZ");
    todo("implement");
}

void EffectContainer::addVisUpdate(EffectContainerVisUpdate *) // 0x51A08F
{
    mangled_assert("?addVisUpdate@EffectContainer@@QAEXPAVEffectContainerVisUpdate@@@Z");
    todo("implement");
}

void EffectContainer::addEffectFlag(unsigned __int32, unsigned __int32) // 0x51A06F
{
    mangled_assert("?addEffectFlag@EffectContainer@@QAEXII@Z");
    todo("implement");
}

void EffectContainer::setEffectNlips(unsigned __int32, float) // 0x51A882
{
    mangled_assert("?setEffectNlips@EffectContainer@@QAEXIM@Z");
    todo("implement");
}

void EffectContainer::removeEffectFlag(unsigned __int32, unsigned __int32) // 0x51A760
{
    mangled_assert("?removeEffectFlag@EffectContainer@@QAEXII@Z");
    todo("implement");
}

bool EffectContainer::effectVisible(Sob const *) // 0x51A501
{
    mangled_assert("?effectVisible@EffectContainer@@IAE_NPBVSob@@@Z");
    todo("implement");
}

_inline float effectNlipsFromParent(Sob const *pOwner) // 0x51A4F7
{
    mangled_assert("?effectNlipsFromParent@@YGMPBVSob@@@Z");
    todo("implement");
}

_inline float effectNlipsDynamic(Camera const &camera, vector3 const &position, float nlips) // 0x51A469
{
    mangled_assert("?effectNlipsDynamic@@YGMABVCamera@@ABVvector3@@M@Z");
    todo("implement");
}

void EffectContainer::updateEffect(Camera const *, EffectContainer::Effect &, bool) // 0x51AA3D
{
    mangled_assert("?updateEffect@EffectContainer@@IAEXPBVCamera@@AAUEffect@1@_N@Z");
    todo("implement");
}

void EffectContainer::update(Camera const &, float, float, bool) // 0x51AA03
{
    mangled_assert("?update@EffectContainer@@QAEXABVCamera@@MM_N@Z");
    todo("implement");
}

unsigned __int32 EffectContainer::attachEffect(char const *, char const *, unsigned long, float, vector3 const &, matrix3 const &) // 0x51A0DE
{
    mangled_assert("?attachEffect@EffectContainer@@QAEIPBD0KMABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

void EffectContainer::stopEffect(unsigned __int32) // 0x51A9BC
{
    mangled_assert("?stopEffect@EffectContainer@@QAEXI@Z");
    todo("implement");
}

void EffectContainer::deleteEffect(unsigned __int32) // 0x51A422
{
    mangled_assert("?deleteEffect@EffectContainer@@QAEXI@Z");
    todo("implement");
}

void EffectContainer::setEffectVisibility(unsigned __int32, bool) // 0x51A928
{
    mangled_assert("?setEffectVisibility@EffectContainer@@QAEXI_N@Z");
    todo("implement");
}

void EffectContainer::setEffectLength(unsigned __int32, float) // 0x51A840
{
    mangled_assert("?setEffectLength@EffectContainer@@QAEXIM@Z");
    todo("implement");
}

void EffectContainer::setEffectFadeT(unsigned __int32, float) // 0x51A782
{
    mangled_assert("?setEffectFadeT@EffectContainer@@QAEXIM@Z");
    todo("implement");
}

void EffectContainer::setEffectScale(unsigned __int32, float) // 0x51A8AC
{
    mangled_assert("?setEffectScale@EffectContainer@@QAEXIM@Z");
    todo("implement");
}

void EffectContainer::setEffectHeight(unsigned __int32, float) // 0x51A7FE
{
    mangled_assert("?setEffectHeight@EffectContainer@@QAEXIM@Z");
    todo("implement");
}

void EffectContainer::setEffectVisible(unsigned __int32, bool) // 0x51A96D
{
    mangled_assert("?setEffectVisible@EffectContainer@@QAEXI_N@Z");
    todo("implement");
}

void EffectContainer::setEffectTransform(unsigned __int32, matrix4 const &) // 0x51A8EE
{
    mangled_assert("?setEffectTransform@EffectContainer@@QAEXIABVmatrix4@@@Z");
    todo("implement");
}

void EffectContainer::setEffectFarMode(unsigned __int32, bool) // 0x51A7C4
{
    mangled_assert("?setEffectFarMode@EffectContainer@@QAEXI_N@Z");
    todo("implement");
}

bool EffectContainer::isEffectDead(unsigned __int32) const // 0x51A5F0
{
    mangled_assert("?isEffectDead@EffectContainer@@QBE_NI@Z");
    todo("implement");
}

bool EffectContainer::getEffectOffset(unsigned __int32, vector3 &) const // 0x51A587
{
    mangled_assert("?getEffectOffset@EffectContainer@@QBE_NIAAVvector3@@@Z");
    todo("implement");
}

bool EffectContainer::getEffectTransform(unsigned __int32, matrix4 &) const // 0x51A5B8
{
    mangled_assert("?getEffectTransform@EffectContainer@@QBE_NIAAVmatrix4@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

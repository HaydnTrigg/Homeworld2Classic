#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\sedefinesshared.h>
#include <xstring>
#include <SelTarg.h>
#include <Mathlib\matrix4.h>
#include <seInterface2\PatchID.h>
#include <xmemory0>
#include <prim.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <memory\memorylib.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <crtdefs.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\profiling.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <profile\profile.h>
#include <list>
#include <iostream>
#include <RenderAnim\MarkerInstance.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <SimVis\RenderModelUtil.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <SoundManager\SoundManager.h>
#include <boost\config.hpp>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <assert.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <memory\mmfixedpool.h>
#include <boost\static_assert.hpp>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <memory\memoryalloc.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <debug\db.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <boost\shared_ptr.hpp>
#include <Interpolation.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Collision\Primitives\aabb.h>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <sobid.h>
#include <SimVis\RenderModelSoundUpdate.h>
#include <RenderAnim\RenderModelInstance.h>
#include <wchar.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <memory\memorysmall.h>
#include <SoundManager\SoundEntityHandle.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<RenderModelSoundUpdate,1000> s_RenderModelSoundUpdateAllocator; // 0x8448C0
}

/* ---------- public code */

_extern void *_sub_522448(unsigned __int32);
void *RenderModelSoundUpdate::operator new(unsigned __int32 size) // 0x522448
{
    mangled_assert("??2RenderModelSoundUpdate@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_522448(size);
    return __result;
}

_extern void _sub_522455(void *, unsigned __int32);
void RenderModelSoundUpdate::operator delete(void *p, unsigned __int32 size) // 0x522455
{
    mangled_assert("??3RenderModelSoundUpdate@@SGXPAXI@Z");
    todo("implement");
    _sub_522455(p, size);
}

_extern _sub_52238A(RenderModelSoundUpdate *const, Sob const *);
RenderModelSoundUpdate::RenderModelSoundUpdate(Sob const *) // 0x52238A
{
    mangled_assert("??0RenderModelSoundUpdate@@QAE@PBVSob@@@Z");
    todo("implement");
    _sub_52238A(this, arg);
}

_extern void _sub_522441(RenderModelSoundUpdate *const);
RenderModelSoundUpdate::~RenderModelSoundUpdate() // 0x522441
{
    mangled_assert("??1RenderModelSoundUpdate@@UAE@XZ");
    todo("implement");
    _sub_522441(this);
}

_extern void _sub_522575(RenderModelSoundUpdate *const, RenderModelInstance *, SoundEntityHandle const &, __int32);
void RenderModelSoundUpdate::setup(RenderModelInstance *, SoundEntityHandle const &, __int32) // 0x522575
{
    mangled_assert("?setup@RenderModelSoundUpdate@@QAEXPAVRenderModelInstance@@ABVSoundEntityHandle@@H@Z");
    todo("implement");
    _sub_522575(this, arg, arg, arg);
}

_extern void _sub_522563(RenderModelSoundUpdate const *const, matrix4 &);
void RenderModelSoundUpdate::getSelfTransform(matrix4 &) const // 0x522563
{
    mangled_assert("?getSelfTransform@RenderModelSoundUpdate@@EBEXAAVmatrix4@@@Z");
    todo("implement");
    _sub_522563(this, arg);
}

_extern bool _sub_522572(RenderModelSoundUpdate const *const);
bool RenderModelSoundUpdate::isAudible() const // 0x522572
{
    mangled_assert("?isAudible@RenderModelSoundUpdate@@EBE_NXZ");
    todo("implement");
    bool __result = _sub_522572(this);
    return __result;
}

_extern bool _sub_522595(RenderModelSoundUpdate *const);
bool RenderModelSoundUpdate::update() // 0x522595
{
    mangled_assert("?update@RenderModelSoundUpdate@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_522595(this);
    return __result;
}

/* ---------- private code */
#endif

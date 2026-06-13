#if 0
/* ---------- headers */

#include "decomp.h"
#include <Animation.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <xstring>
#include <Collision\Primitives\triangle.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <Mathlib\matrix3.h>
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
#include <RenderAnim\EffectAnimation.h>
#include <list>
#include <RenderAnim\MarkerInstance.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <RenderAnim\AnimEventContainer.h>
#include <RenderAnim\AnimEventData.h>
#include <assist\stlexvector.h>
#include <util\dictionary.h>
#include <RenderAnim\MarkerAnimation.h>
#include <util\utilexports.h>
#include <boost\cstdint.hpp>
#include <HierarchyDynamic.h>
#include <Collision\primitivesfwd.h>
#include <RenderAnim\AnimEventSink.h>
#include <HierarchyStatic.h>
#include <Collision\Primitives\obb.h>
#include <memory\memoryalloc.h>
#include <debug\db.h>
#include <util\colour.h>
#include <profile\profile.h>
#include <iostream>
#include <RenderAnim\RenderModelInstance.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <memory\memorysmall.h>
#include <algorithm>
#include <RenderAnim\RenderModel.h>
#include <RenderAnim\Marker.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 EventID;
typedef std::vector<AnimEventContainer::Animation,std::allocator<AnimEventContainer::Animation> > AnimationCont;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5184AE(RenderModelInstance *const, AnimEventSink *);
RenderModelInstance::RenderModelInstance(AnimEventSink *) // 0x5184AE
{
    mangled_assert("??0RenderModelInstance@@QAE@PAVAnimEventSink@@@Z");
    todo("implement");
    _sub_5184AE(this, arg);
}

_extern void _sub_518560(RenderModelInstance *const);
RenderModelInstance::~RenderModelInstance() // 0x518560
{
    mangled_assert("??1RenderModelInstance@@QAE@XZ");
    todo("implement");
    _sub_518560(this);
}

_extern void _sub_5185EC(RenderModelInstance::TriggerAnimEvent *const);
_inline RenderModelInstance::TriggerAnimEvent::~TriggerAnimEvent() // 0x5185EC
{
    mangled_assert("??1TriggerAnimEvent@RenderModelInstance@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5185EC(this);
}

_extern void _sub_518DFE(RenderModelInstance *const, RenderModel const *);
void RenderModelInstance::setRenderModel(RenderModel const *) // 0x518DFE
{
    mangled_assert("?setRenderModel@RenderModelInstance@@QAEXPBVRenderModel@@@Z");
    todo("implement");
    _sub_518DFE(this, arg);
}

_extern void _sub_518DC6(RenderModelInstance *const, HierarchyDynamic const *);
void RenderModelInstance::setHierarchy(HierarchyDynamic const *) // 0x518DC6
{
    mangled_assert("?setHierarchy@RenderModelInstance@@QAEXPBVHierarchyDynamic@@@Z");
    todo("implement");
    _sub_518DC6(this, arg);
}

_extern void _sub_518E36(RenderModelInstance *const);
void RenderModelInstance::setupMarkers() // 0x518E36
{
    mangled_assert("?setupMarkers@RenderModelInstance@@QAEXXZ");
    todo("implement");
    _sub_518E36(this);
}

_extern bool _sub_518C26(RenderModelInstance const *const, char const *);
bool RenderModelInstance::hasEffectAnimation(char const *) const // 0x518C26
{
    mangled_assert("?hasEffectAnimation@RenderModelInstance@@QBE_NPBD@Z");
    todo("implement");
    bool __result = _sub_518C26(this, arg);
    return __result;
}

_extern void _sub_518EE7(RenderModelInstance *const, char const *, float);
void RenderModelInstance::startEffectAnimation(char const *, float) // 0x518EE7
{
    mangled_assert("?startEffectAnimation@RenderModelInstance@@QAEXPBDM@Z");
    todo("implement");
    _sub_518EE7(this, arg, arg);
}

_extern void _sub_518F1F(RenderModelInstance *const, char const *);
void RenderModelInstance::stopEffectAnimation(char const *) // 0x518F1F
{
    mangled_assert("?stopEffectAnimation@RenderModelInstance@@QAEXPBD@Z");
    todo("implement");
    _sub_518F1F(this, arg);
}

_extern void _sub_518D86(RenderModelInstance *const, char const *, float, float);
void RenderModelInstance::setEffectVariable(char const *, float, float) // 0x518D86
{
    mangled_assert("?setEffectVariable@RenderModelInstance@@QAEXPBDMM@Z");
    todo("implement");
    _sub_518D86(this, arg, arg, arg);
}

_extern void _sub_5189E3(RenderModelInstance *const, RenderModelInstance::ExtUpdate *);
void RenderModelInstance::addExtUpdate(RenderModelInstance::ExtUpdate *) // 0x5189E3
{
    mangled_assert("?addExtUpdate@RenderModelInstance@@QAEXPAVExtUpdate@1@@Z");
    todo("implement");
    _sub_5189E3(this, arg);
}

_extern void _sub_519038(RenderModelInstance *const);
void RenderModelInstance::updateExternals() // 0x519038
{
    mangled_assert("?updateExternals@RenderModelInstance@@AAEXXZ");
    todo("implement");
    _sub_519038(this);
}

_extern void _sub_518FC3(RenderModelInstance *const, Sob const *, float, float);
void RenderModelInstance::update(Sob const *, float, float) // 0x518FC3
{
    mangled_assert("?update@RenderModelInstance@@QAEXPBVSob@@MM@Z");
    todo("implement");
    _sub_518FC3(this, arg, arg, arg);
}

_extern void _sub_518DD0(RenderModelInstance *const, __int32, matrix4 const &);
void RenderModelInstance::setMarkerTransform(__int32, matrix4 const &) // 0x518DD0
{
    mangled_assert("?setMarkerTransform@RenderModelInstance@@QAEXHABVmatrix4@@@Z");
    todo("implement");
    _sub_518DD0(this, arg, arg);
}

_extern unsigned __int32 _sub_518BA0(RenderModelInstance const *const);
unsigned __int32 RenderModelInstance::getMarkerCount() const // 0x518BA0
{
    mangled_assert("?getMarkerCount@RenderModelInstance@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_518BA0(this);
    return __result;
}

_extern void _sub_518BAD(RenderModelInstance const *const, __int32, matrix4 &);
void RenderModelInstance::getMarkerTransform(__int32, matrix4 &) const // 0x518BAD
{
    mangled_assert("?getMarkerTransform@RenderModelInstance@@QBEXHAAVmatrix4@@@Z");
    todo("implement");
    _sub_518BAD(this, arg, arg);
}

_extern _sub_518542(RenderModelInstance::TriggerAnimEvent *const);
RenderModelInstance::TriggerAnimEvent::TriggerAnimEvent() // 0x518542
{
    mangled_assert("??0TriggerAnimEvent@RenderModelInstance@@QAE@XZ");
    todo("implement");
    _sub_518542(this);
}

_extern void _sub_518559(RenderModelInstance::MarkerAnimUpdate *const);
_inline RenderModelInstance::MarkerAnimUpdate::~MarkerAnimUpdate() // 0x518559
{
    mangled_assert("??1MarkerAnimUpdate@RenderModelInstance@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_518559(this);
}

_extern void _sub_518E1A(RenderModelInstance::TriggerAnimEvent *const, RenderModelInstance *);
void RenderModelInstance::TriggerAnimEvent::setRenderModelInstance(RenderModelInstance *) // 0x518E1A
{
    mangled_assert("?setRenderModelInstance@TriggerAnimEvent@RenderModelInstance@@QAEXPAV2@@Z");
    todo("implement");
    _sub_518E1A(this, arg);
}

_extern bool _sub_518EBF(RenderModelInstance::TriggerAnimEvent *const, EffectAnimation const &, AnimEventContext *);
bool RenderModelInstance::TriggerAnimEvent::start(EffectAnimation const &, AnimEventContext *) // 0x518EBF
{
    mangled_assert("?start@TriggerAnimEvent@RenderModelInstance@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@@Z");
    todo("implement");
    bool __result = _sub_518EBF(this, arg, arg);
    return __result;
}

_extern bool _sub_518FF7(RenderModelInstance::TriggerAnimEvent *const, EffectAnimation const &, AnimEventContext *, float, float);
bool RenderModelInstance::TriggerAnimEvent::update(EffectAnimation const &, AnimEventContext *, float, float) // 0x518FF7
{
    mangled_assert("?update@TriggerAnimEvent@RenderModelInstance@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@MM@Z");
    todo("implement");
    bool __result = _sub_518FF7(this, arg, arg, arg, arg);
    return __result;
}

_extern _sub_5184A1(RenderModelInstance::MarkerAnimUpdate *const);
RenderModelInstance::MarkerAnimUpdate::MarkerAnimUpdate() // 0x5184A1
{
    mangled_assert("??0MarkerAnimUpdate@RenderModelInstance@@QAE@XZ");
    todo("implement");
    _sub_5184A1(this);
}

_extern void _sub_518E10(RenderModelInstance::MarkerAnimUpdate *const, RenderModelInstance *);
void RenderModelInstance::MarkerAnimUpdate::setRenderModelInstance(RenderModelInstance *) // 0x518E10
{
    mangled_assert("?setRenderModelInstance@MarkerAnimUpdate@RenderModelInstance@@QAEXPAV2@@Z");
    todo("implement");
    _sub_518E10(this, arg);
}

_extern bool _sub_518EB5(RenderModelInstance::MarkerAnimUpdate *const, EffectAnimation const &, AnimEventContext *);
bool RenderModelInstance::MarkerAnimUpdate::start(EffectAnimation const &, AnimEventContext *) // 0x518EB5
{
    mangled_assert("?start@MarkerAnimUpdate@RenderModelInstance@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@@Z");
    todo("implement");
    bool __result = _sub_518EB5(this, arg, arg);
    return __result;
}

_extern bool _sub_518F46(RenderModelInstance::MarkerAnimUpdate *const, EffectAnimation const &, AnimEventContext *, float, float);
bool RenderModelInstance::MarkerAnimUpdate::update(EffectAnimation const &, AnimEventContext *, float, float) // 0x518F46
{
    mangled_assert("?update@MarkerAnimUpdate@RenderModelInstance@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@MM@Z");
    todo("implement");
    bool __result = _sub_518F46(this, arg, arg, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

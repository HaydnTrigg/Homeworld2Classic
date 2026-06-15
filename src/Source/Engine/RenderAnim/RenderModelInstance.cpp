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

RenderModelInstance::RenderModelInstance(AnimEventSink *) // 0x5184AE
{
    mangled_assert("??0RenderModelInstance@@QAE@PAVAnimEventSink@@@Z");
    todo("implement");
}

RenderModelInstance::~RenderModelInstance() // 0x518560
{
    mangled_assert("??1RenderModelInstance@@QAE@XZ");
    todo("implement");
}

_inline RenderModelInstance::TriggerAnimEvent::~TriggerAnimEvent() // 0x5185EC
{
    mangled_assert("??1TriggerAnimEvent@RenderModelInstance@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void RenderModelInstance::setRenderModel(RenderModel const *) // 0x518DFE
{
    mangled_assert("?setRenderModel@RenderModelInstance@@QAEXPBVRenderModel@@@Z");
    todo("implement");
}

void RenderModelInstance::setHierarchy(HierarchyDynamic const *) // 0x518DC6
{
    mangled_assert("?setHierarchy@RenderModelInstance@@QAEXPBVHierarchyDynamic@@@Z");
    todo("implement");
}

void RenderModelInstance::setupMarkers() // 0x518E36
{
    mangled_assert("?setupMarkers@RenderModelInstance@@QAEXXZ");
    todo("implement");
}

bool RenderModelInstance::hasEffectAnimation(char const *) const // 0x518C26
{
    mangled_assert("?hasEffectAnimation@RenderModelInstance@@QBE_NPBD@Z");
    todo("implement");
}

void RenderModelInstance::startEffectAnimation(char const *, float) // 0x518EE7
{
    mangled_assert("?startEffectAnimation@RenderModelInstance@@QAEXPBDM@Z");
    todo("implement");
}

void RenderModelInstance::stopEffectAnimation(char const *) // 0x518F1F
{
    mangled_assert("?stopEffectAnimation@RenderModelInstance@@QAEXPBD@Z");
    todo("implement");
}

void RenderModelInstance::setEffectVariable(char const *, float, float) // 0x518D86
{
    mangled_assert("?setEffectVariable@RenderModelInstance@@QAEXPBDMM@Z");
    todo("implement");
}

void RenderModelInstance::addExtUpdate(RenderModelInstance::ExtUpdate *) // 0x5189E3
{
    mangled_assert("?addExtUpdate@RenderModelInstance@@QAEXPAVExtUpdate@1@@Z");
    todo("implement");
}

void RenderModelInstance::updateExternals() // 0x519038
{
    mangled_assert("?updateExternals@RenderModelInstance@@AAEXXZ");
    todo("implement");
}

void RenderModelInstance::update(Sob const *, float, float) // 0x518FC3
{
    mangled_assert("?update@RenderModelInstance@@QAEXPBVSob@@MM@Z");
    todo("implement");
}

void RenderModelInstance::setMarkerTransform(__int32, matrix4 const &) // 0x518DD0
{
    mangled_assert("?setMarkerTransform@RenderModelInstance@@QAEXHABVmatrix4@@@Z");
    todo("implement");
}

unsigned __int32 RenderModelInstance::getMarkerCount() const // 0x518BA0
{
    mangled_assert("?getMarkerCount@RenderModelInstance@@QBEIXZ");
    todo("implement");
}

void RenderModelInstance::getMarkerTransform(__int32, matrix4 &) const // 0x518BAD
{
    mangled_assert("?getMarkerTransform@RenderModelInstance@@QBEXHAAVmatrix4@@@Z");
    todo("implement");
}

RenderModelInstance::TriggerAnimEvent::TriggerAnimEvent() // 0x518542
{
    mangled_assert("??0TriggerAnimEvent@RenderModelInstance@@QAE@XZ");
    todo("implement");
}

_inline RenderModelInstance::MarkerAnimUpdate::~MarkerAnimUpdate() // 0x518559
{
    mangled_assert("??1MarkerAnimUpdate@RenderModelInstance@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void RenderModelInstance::TriggerAnimEvent::setRenderModelInstance(RenderModelInstance *) // 0x518E1A
{
    mangled_assert("?setRenderModelInstance@TriggerAnimEvent@RenderModelInstance@@QAEXPAV2@@Z");
    todo("implement");
}

bool RenderModelInstance::TriggerAnimEvent::start(EffectAnimation const &, AnimEventContext *) // 0x518EBF
{
    mangled_assert("?start@TriggerAnimEvent@RenderModelInstance@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@@Z");
    todo("implement");
}

bool RenderModelInstance::TriggerAnimEvent::update(EffectAnimation const &, AnimEventContext *, float, float) // 0x518FF7
{
    mangled_assert("?update@TriggerAnimEvent@RenderModelInstance@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@MM@Z");
    todo("implement");
}

RenderModelInstance::MarkerAnimUpdate::MarkerAnimUpdate() // 0x5184A1
{
    mangled_assert("??0MarkerAnimUpdate@RenderModelInstance@@QAE@XZ");
    todo("implement");
}

void RenderModelInstance::MarkerAnimUpdate::setRenderModelInstance(RenderModelInstance *) // 0x518E10
{
    mangled_assert("?setRenderModelInstance@MarkerAnimUpdate@RenderModelInstance@@QAEXPAV2@@Z");
    todo("implement");
}

bool RenderModelInstance::MarkerAnimUpdate::start(EffectAnimation const &, AnimEventContext *) // 0x518EB5
{
    mangled_assert("?start@MarkerAnimUpdate@RenderModelInstance@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@@Z");
    todo("implement");
}

bool RenderModelInstance::MarkerAnimUpdate::update(EffectAnimation const &, AnimEventContext *, float, float) // 0x518F46
{
    mangled_assert("?update@MarkerAnimUpdate@RenderModelInstance@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@MM@Z");
    todo("implement");
}

/* ---------- private code */
#endif

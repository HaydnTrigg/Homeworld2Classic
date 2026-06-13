#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <SimVis\RenderModelFXUpdate.h>
#include <RenderAnim\RenderModelInstance.h>
#include <Mathlib\matrix3.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <memory\memorysmall.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <assist\asciictype.h>
#include <RenderAnim\EffectAnimation.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <HierarchyStatic.h>
#include <Collision\Primitives\obb.h>
#include <RenderAnim\MarkerInstance.h>
#include <list>
#include <Mathlib\vector3.h>
#include <RenderAnim\MarkerAnimation.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_ptr.hpp>
#include <boost\cstdint.hpp>
#include <fileio\iff.h>
#include <assist\faststring.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <Decal\DecalRefMesh.h>
#include <debug\db.h>
#include <SimVis\LodFX.h>
#include <util\colour.h>
#include <fileio\filepath.h>
#include <RenderAnim\AnimEventContainer.h>
#include <RenderAnim\AnimEventData.h>
#include <util\dictionary.h>
#include <memory\memoryalloc.h>
#include <util\utilexports.h>
#include <RenderAnim\AnimEvent.h>
#include <RenderAnim\RenderModel.h>
#include <RenderAnim\Marker.h>
#include <Animation.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static bool ReadEvent(LuaConfig &lc, AnimEventData &data);
_static void PrecacheFX(AnimEventData const &data);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_rootSoundDir; // 0x837468
}

/* ---------- public code */

_extern _sub_517269(RenderModel *const, HierarchyStatic const *);
RenderModel::RenderModel(HierarchyStatic const *) // 0x517269
{
    mangled_assert("??0RenderModel@@QAE@PBVHierarchyStatic@@@Z");
    todo("implement");
    _sub_517269(this, arg);
}

_extern void _sub_5172D4(EffectAnimation *const);
_inline EffectAnimation::~EffectAnimation() // 0x5172D4
{
    mangled_assert("??1EffectAnimation@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5172D4(this);
}

_extern void _sub_5172F7(RenderModel *const);
RenderModel::~RenderModel() // 0x5172F7
{
    mangled_assert("??1RenderModel@@QAE@XZ");
    todo("implement");
    _sub_5172F7(this);
}

_extern void _sub_517FAB(RenderModel *const, Mesh const *);
void RenderModel::setMesh(Mesh const *) // 0x517FAB
{
    mangled_assert("?setMesh@RenderModel@@QAEXPBVMesh@@@Z");
    todo("implement");
    _sub_517FAB(this, arg);
}

_extern __int32 _sub_517435(IFF *, IFFChunk *, void *, void *);
__int32 RenderModel::HandleMRKR(IFF *iff, IFFChunk *pChunk, void *voidRenderModel, void *pContext2) // 0x517435
{
    mangled_assert("?HandleMRKR@RenderModel@@CGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_517435(iff, pChunk, voidRenderModel, pContext2);
    return __result;
}

_extern void _sub_517756(IFF &, RenderModel *);
void RenderModel::addParseHandlers(IFF &iff, RenderModel *pRenderModel) // 0x517756
{
    mangled_assert("?addParseHandlers@RenderModel@@SGXAAVIFF@@PAV1@@Z");
    todo("implement");
    _sub_517756(iff, pRenderModel);
}

_extern bool _sub_517D6F(RenderModel *const, LuaConfig &, EffectAnimation *);
bool RenderModel::readAnimation(LuaConfig &, EffectAnimation *) // 0x517D6F
{
    mangled_assert("?readAnimation@RenderModel@@AAE_NAAVLuaConfig@@PAVEffectAnimation@@@Z");
    todo("implement");
    bool __result = _sub_517D6F(this, arg, arg);
    return __result;
}

_extern bool _sub_517A37(RenderModel *const, LuaConfig &);
bool RenderModel::loadEffectAnimations(LuaConfig &) // 0x517A37
{
    mangled_assert("?loadEffectAnimations@RenderModel@@AAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_517A37(this, arg);
    return __result;
}

_extern void _sub_517CC4(RenderModel *const);
void RenderModel::postAnimationLoad() // 0x517CC4
{
    mangled_assert("?postAnimationLoad@RenderModel@@AAEXXZ");
    todo("implement");
    _sub_517CC4(this);
}

_extern bool _sub_517B0E(RenderModel *const, char const *);
bool RenderModel::loadEvents(char const *) // 0x517B0E
{
    mangled_assert("?loadEvents@RenderModel@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_517B0E(this, arg);
    return __result;
}

_extern __int32 _sub_517857(RenderModel const *const, char const *);
__int32 RenderModel::findMarker(char const *) const // 0x517857
{
    mangled_assert("?findMarker@RenderModel@@QBEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_517857(this, arg);
    return __result;
}

_extern void _sub_51798F(RenderModel const *const, __int32, matrix4 &);
void RenderModel::getMarkerTransform(__int32, matrix4 &) const // 0x51798F
{
    mangled_assert("?getMarkerTransform@RenderModel@@QBEXHAAVmatrix4@@@Z");
    todo("implement");
    _sub_51798F(this, arg, arg);
}

_extern void _sub_5179C8(RenderModel const *const, __int32, float, matrix4 &);
void RenderModel::getMarkerTransform(__int32, float, matrix4 &) const // 0x5179C8
{
    mangled_assert("?getMarkerTransform@RenderModel@@QBEXHMAAVmatrix4@@@Z");
    todo("implement");
    _sub_5179C8(this, arg, arg, arg);
}

_extern unsigned __int32 _sub_51795D(RenderModel const *const);
unsigned __int32 RenderModel::getMarkerCount() const // 0x51795D
{
    mangled_assert("?getMarkerCount@RenderModel@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_51795D(this);
    return __result;
}

_extern __int32 _sub_517967(RenderModel const *const, __int32);
__int32 RenderModel::getMarkerParentID(__int32) const // 0x517967
{
    mangled_assert("?getMarkerParentID@RenderModel@@QBEHH@Z");
    todo("implement");
    __int32 __result = _sub_517967(this, arg);
    return __result;
}

_extern __int32 _sub_517809(RenderModel const *const, char const *);
__int32 RenderModel::findEffectAnimation(char const *) const // 0x517809
{
    mangled_assert("?findEffectAnimation@RenderModel@@QBEHPBD@Z");
    todo("implement");
    __int32 __result = _sub_517809(this, arg);
    return __result;
}

_extern EffectAnimation const *_sub_51793A(RenderModel const *const, __int32);
EffectAnimation const *RenderModel::getEffectAnimation(__int32) const // 0x51793A
{
    mangled_assert("?getEffectAnimation@RenderModel@@QBEPBVEffectAnimation@@H@Z");
    todo("implement");
    EffectAnimation const * __result = _sub_51793A(this, arg);
    return __result;
}

_extern void _sub_517746(RenderModel *const, EffectAnimation const *);
void RenderModel::addEffectAnimation(EffectAnimation const *) // 0x517746
{
    mangled_assert("?addEffectAnimation@RenderModel@@QAEXPBVEffectAnimation@@@Z");
    todo("implement");
    _sub_517746(this, arg);
}

/* ---------- private code */

_extern bool _sub_517575(LuaConfig &, AnimEventData &);
_static bool ReadEvent(LuaConfig &lc, AnimEventData &data) // 0x517575
{
    mangled_assert("ReadEvent");
    todo("implement");
    bool __result = _sub_517575(lc, data);
    return __result;
}

_extern void _sub_51748F(AnimEventData const &);
_static void PrecacheFX(AnimEventData const &data) // 0x51748F
{
    mangled_assert("PrecacheFX");
    todo("implement");
    _sub_51748F(data);
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <memory\memorylib.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <crtdefs.h>
#include <Collision\BVH\bvh.h>
#include <SimVis\RenderModelFXUpdate.h>
#include <RenderAnim\RenderModelInstance.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <Mathlib\matrix3.h>
#include <memory\memorysmall.h>
#include <RenderAnim\AnimEvent.h>
#include <new>
#include <exception>
#include <xstddef>
#include <SimVis\RenderModelUtil.h>
#include <type_traits>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <assist\asciictype.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <RenderAnim\RenderModel.h>
#include <Mathlib\vector3.h>
#include <RenderAnim\Marker.h>
#include <Animation.h>
#include <Mathlib\vector4.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <assist\faststring.h>
#include <SimVis\LodFX.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <memory\mmfixedpool.h>
#include <SoundManager\SoundManager.h>
#include <Collision\BVH\octree.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\span.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\vector2.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <util\types.h>
#include <Collision\primitivesfwd.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <RenderAnim\MarkerInstance.h>
#include <boost\cstdint.hpp>
#include <gameSettings.h>
#include <boost\config.hpp>
#include <config.h>
#include <syncChecking.h>
#include <assert.h>
#include <Interpolation.h>
#include <boost\static_assert.hpp>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <Collision\Primitives\aabb.h>
#include <RenderAnim\EffectAnimation.h>
#include <sobid.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <debug\db.h>
#include <GameEventDefs.h>
#include <SimVis\RenderModelSoundUpdate.h>
#include <GameEventSys.h>
#include <SoundManager\SoundEntityHandle.h>
#include <SelTarg.h>
#include <util\colour.h>
#include <seInterface2\PatchID.h>
#include <boost\shared_ptr.hpp>
#include <prim.h>
#include <seInterface2\PatchBase.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <seInterface2\SoundParams.h>
#include <RenderAnim\MarkerAnimation.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <memory\memoryalloc.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <SimVis\RenderModelEventSink.h>
#include <seInterface2\sedefinesshared.h>
#include <RenderAnim\AnimEventSink.h>
#include <wchar.h>
#include <SimVis\CullFX.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::CBToFxHandle :
    public Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>
{
public:
    typedef bool (*Func)(AnimEventContext::ModeChange, FXManager::Handle);
private:
    bool (*m_function)(AnimEventContext::ModeChange, FXManager::Handle); // 0x8
    FXManager::Handle m_handle; // 0xC
    CBToFxHandle(`anonymous-namespace'::CBToFxHandle const &);
public:
    CBToFxHandle(bool (*)(AnimEventContext::ModeChange, FXManager::Handle), FXManager::Handle);
private:
    `anonymous-namespace'::CBToFxHandle &operator=(`anonymous-namespace'::CBToFxHandle const &);
public:
    static void *operator new(unsigned __int32);
    static void operator delete(void *, unsigned __int32);
    virtual bool Do(AnimEventContext::ModeChange) const override;
    virtual ~CBToFxHandle() override; /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::CBToFxHandle) == 20, "Invalid `anonymous-namespace'::CBToFxHandle size");

class `anonymous-namespace'::CBToSoundHandle :
    public Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>
{
public:
    typedef bool (*Func)(AnimEventContext::ModeChange, long);
private:
    bool (*m_function)(AnimEventContext::ModeChange, long); // 0x8
    long m_handle; // 0xC
    CBToSoundHandle(`anonymous-namespace'::CBToSoundHandle const &);
public:
    CBToSoundHandle(bool (*)(AnimEventContext::ModeChange, long), long);
private:
    `anonymous-namespace'::CBToSoundHandle &operator=(`anonymous-namespace'::CBToSoundHandle const &);
public:
    static void *operator new(unsigned __int32);
    static void operator delete(void *, unsigned __int32);
    virtual bool Do(AnimEventContext::ModeChange) const override;
    virtual ~CBToSoundHandle() override; /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::CBToSoundHandle) == 16, "Invalid `anonymous-namespace'::CBToSoundHandle size");

class `anonymous-namespace'::CBToEmitterHandle :
    public Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>
{
public:
    typedef bool (*Func)(AnimEventContext::ModeChange, SoundEntityHandle const &);
private:
    bool (*m_function)(AnimEventContext::ModeChange, SoundEntityHandle const &); // 0x8
    SoundEntityHandle m_handle; // 0xC
    CBToEmitterHandle(`anonymous-namespace'::CBToEmitterHandle const &);
public:
    CBToEmitterHandle(bool (*)(AnimEventContext::ModeChange, SoundEntityHandle const &), SoundEntityHandle const &);
private:
    `anonymous-namespace'::CBToEmitterHandle &operator=(`anonymous-namespace'::CBToEmitterHandle const &);
public:
    static void *operator new(unsigned __int32);
    static void operator delete(void *, unsigned __int32);
    virtual bool Do(AnimEventContext::ModeChange) const override;
    virtual ~CBToEmitterHandle() override; /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::CBToEmitterHandle) == 20, "Invalid `anonymous-namespace'::CBToEmitterHandle size");

typedef `anonymous-namespace'::CBToFxHandle ?A0x341afcda::CBToFxHandle;
typedef bool (*Func)(AnimEventContext::ModeChange, FXManager::Handle);
typedef `anonymous-namespace'::CBToSoundHandle ?A0x341afcda::CBToSoundHandle;
typedef `anonymous-namespace'::CBToEmitterHandle ?A0x341afcda::CBToEmitterHandle;

/* ---------- prototypes */


_static bool FXAnimUpdate(AnimEventContext::ModeChange mode, FXManager::Handle handle);
_static void LoadSoundPatch(char const *filename, PatchID &pID);
_static bool SoundKillKillKill(AnimEventContext::ModeChange mode, long handle);
_static bool SoundAmbientKillKillKill(AnimEventContext::ModeChange mode, SoundEntityHandle const &handle);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_rootSoundDir; // 0x8375BC
}

/* ---------- public code */

_inline Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>() // 0x51E254
{
    mangled_assert("??0?$Obj1wRetInternal@_NW4ModeChange@AnimEventContext@@@Callback@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AnimEventSink::AnimEventSink() // 0x51E28D
{
    mangled_assert("??0AnimEventSink@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

RenderModelEventSink::RenderModelEventSink(Sob const *, RenderModelInstance *) // 0x51E362
{
    mangled_assert("??0RenderModelEventSink@@QAE@PBVSob@@PAVRenderModelInstance@@@Z");
    todo("implement");
}

_inline Callback::Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>::~Obj1wRetInternal<bool,enum AnimEventContext::ModeChange>() // 0x51E4E5
{
    mangled_assert("??1?$Obj1wRetInternal@_NW4ModeChange@AnimEventContext@@@Callback@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NDGameEvent_RenderModel::~NDGameEvent_RenderModel() // 0x51E508
{
    mangled_assert("??1NDGameEvent_RenderModel@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline RenderModelEventSink::~RenderModelEventSink() // 0x51E51B
{
    mangled_assert("??1RenderModelEventSink@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

bool RenderModelEventSink::shouldSpawnThings() // 0x51F044
{
    mangled_assert("?shouldSpawnThings@RenderModelEventSink@@IAE_NXZ");
    todo("implement");
}

void RenderModelEventSink::onEvent(AnimEvent &, AnimEventContext *) // 0x51EA09
{
    mangled_assert("?onEvent@RenderModelEventSink@@UAEXAAVAnimEvent@@PAVAnimEventContext@@@Z");
    todo("implement");
}

void RenderModelEventSink::detach() // 0x51EA04
{
    mangled_assert("?detach@RenderModelEventSink@@UAEXXZ");
    todo("implement");
}

/* ---------- private code */

_static bool FXAnimUpdate(AnimEventContext::ModeChange mode, FXManager::Handle handle) // 0x51E906
{
    mangled_assert("FXAnimUpdate");
    todo("implement");
}

_static void LoadSoundPatch(char const *filename, PatchID &pID) // 0x51E966
{
    mangled_assert("LoadSoundPatch");
    todo("implement");
}

_static bool SoundKillKillKill(AnimEventContext::ModeChange mode, long handle) // 0x51E9DF
{
    mangled_assert("SoundKillKillKill");
    todo("implement");
}

_static bool SoundAmbientKillKillKill(AnimEventContext::ModeChange mode, SoundEntityHandle const &handle) // 0x51E9A0
{
    mangled_assert("SoundAmbientKillKillKill");
    todo("implement");
}
#endif

#if 0
#ifndef __MMFIXEDPOOL_H__
#define __MMFIXEDPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FixedSizeObjAllocator<EngineTrailFrameBlock,512>
{
public:
    FixedSizeObjAllocator<EngineTrailFrameBlock,512>(FixedSizeObjAllocator<EngineTrailFrameBlock,512> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<EngineTrailFrameBlock,512>();
    virtual _inline ~FixedSizeObjAllocator<EngineTrailFrameBlock,512>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<EngineTrailFrameBlock,512> &operator=(FixedSizeObjAllocator<EngineTrailFrameBlock,512> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<EngineTrailFrameBlock,512>) == 36, "Invalid FixedSizeObjAllocator<EngineTrailFrameBlock,512> size");

class FixedSizeObjAllocator<ZeroMassBody,1000>
{
public:
    FixedSizeObjAllocator<ZeroMassBody,1000>(FixedSizeObjAllocator<ZeroMassBody,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<ZeroMassBody,1000>();
    virtual _inline ~FixedSizeObjAllocator<ZeroMassBody,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<ZeroMassBody,1000> &operator=(FixedSizeObjAllocator<ZeroMassBody,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<ZeroMassBody,1000>) == 36, "Invalid FixedSizeObjAllocator<ZeroMassBody,1000> size");

class FixedSizeObjAllocator<SobIDShared,2000>
{
public:
    FixedSizeObjAllocator<SobIDShared,2000>(FixedSizeObjAllocator<SobIDShared,2000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<SobIDShared,2000>();
    virtual _inline ~FixedSizeObjAllocator<SobIDShared,2000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<SobIDShared,2000> &operator=(FixedSizeObjAllocator<SobIDShared,2000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<SobIDShared,2000>) == 36, "Invalid FixedSizeObjAllocator<SobIDShared,2000> size");

class FixedSizeObjAllocator<Visibility,1000>
{
public:
    FixedSizeObjAllocator<Visibility,1000>(FixedSizeObjAllocator<Visibility,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<Visibility,1000>();
    virtual _inline ~FixedSizeObjAllocator<Visibility,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<Visibility,1000> &operator=(FixedSizeObjAllocator<Visibility,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<Visibility,1000>) == 36, "Invalid FixedSizeObjAllocator<Visibility,1000> size");

class FixedSizeObjAllocator<Bullet,1000>
{
public:
    FixedSizeObjAllocator<Bullet,1000>(FixedSizeObjAllocator<Bullet,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<Bullet,1000>();
    virtual _inline ~FixedSizeObjAllocator<Bullet,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<Bullet,1000> &operator=(FixedSizeObjAllocator<Bullet,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<Bullet,1000>) == 36, "Invalid FixedSizeObjAllocator<Bullet,1000> size");

class FixedSizeObjAllocator<InstantHit,500>
{
public:
    FixedSizeObjAllocator<InstantHit,500>(FixedSizeObjAllocator<InstantHit,500> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<InstantHit,500>();
    virtual _inline ~FixedSizeObjAllocator<InstantHit,500>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<InstantHit,500> &operator=(FixedSizeObjAllocator<InstantHit,500> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<InstantHit,500>) == 36, "Invalid FixedSizeObjAllocator<InstantHit,500> size");

class FixedSizeObjAllocator<SphereBurst,500>
{
public:
    FixedSizeObjAllocator<SphereBurst,500>(FixedSizeObjAllocator<SphereBurst,500> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<SphereBurst,500>();
    virtual _inline ~FixedSizeObjAllocator<SphereBurst,500>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<SphereBurst,500> &operator=(FixedSizeObjAllocator<SphereBurst,500> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<SphereBurst,500>) == 36, "Invalid FixedSizeObjAllocator<SphereBurst,500> size");

class FixedSizeObjAllocator<PathFinderObstacleOBB,500>
{
public:
    FixedSizeObjAllocator<PathFinderObstacleOBB,500>(FixedSizeObjAllocator<PathFinderObstacleOBB,500> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<PathFinderObstacleOBB,500>();
    virtual _inline ~FixedSizeObjAllocator<PathFinderObstacleOBB,500>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<PathFinderObstacleOBB,500> &operator=(FixedSizeObjAllocator<PathFinderObstacleOBB,500> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<PathFinderObstacleOBB,500>) == 36, "Invalid FixedSizeObjAllocator<PathFinderObstacleOBB,500> size");

class FixedSizeObjAllocator<EffectContainer,1000>
{
public:
    FixedSizeObjAllocator<EffectContainer,1000>(FixedSizeObjAllocator<EffectContainer,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<EffectContainer,1000>();
    virtual _inline ~FixedSizeObjAllocator<EffectContainer,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<EffectContainer,1000> &operator=(FixedSizeObjAllocator<EffectContainer,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<EffectContainer,1000>) == 36, "Invalid FixedSizeObjAllocator<EffectContainer,1000> size");

class FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32>
{
public:
    FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32>(FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32> const &); /* compiler_generated() */
    FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32>();
    virtual ~FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32>();
    void *Allocate();
    void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    void AllocateNewBlock();
public:
    FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32> &operator=(FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32>) == 36, "Invalid FixedSizeObjAllocator<`anonymous namespace'::CBToFxHandle,32> size");

class FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32>
{
public:
    FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32>(FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32> const &); /* compiler_generated() */
    FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32>();
    virtual ~FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32>();
    void *Allocate();
    void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    void AllocateNewBlock();
public:
    FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32> &operator=(FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32>) == 36, "Invalid FixedSizeObjAllocator<`anonymous namespace'::CBToSoundHandle,32> size");

class FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32>
{
public:
    FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32>(FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32> const &); /* compiler_generated() */
    FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32>();
    virtual ~FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32>();
    void *Allocate();
    void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    void AllocateNewBlock();
public:
    FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32> &operator=(FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32>) == 36, "Invalid FixedSizeObjAllocator<`anonymous namespace'::CBToEmitterHandle,32> size");

class FixedSizeObjAllocator<RenderModelFXUpdate,1000>
{
public:
    FixedSizeObjAllocator<RenderModelFXUpdate,1000>(FixedSizeObjAllocator<RenderModelFXUpdate,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<RenderModelFXUpdate,1000>();
    virtual _inline ~FixedSizeObjAllocator<RenderModelFXUpdate,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<RenderModelFXUpdate,1000> &operator=(FixedSizeObjAllocator<RenderModelFXUpdate,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<RenderModelFXUpdate,1000>) == 36, "Invalid FixedSizeObjAllocator<RenderModelFXUpdate,1000> size");

class FixedSizeObjAllocator<RenderModelSoundUpdate,1000>
{
public:
    FixedSizeObjAllocator<RenderModelSoundUpdate,1000>(FixedSizeObjAllocator<RenderModelSoundUpdate,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<RenderModelSoundUpdate,1000>();
    virtual _inline ~FixedSizeObjAllocator<RenderModelSoundUpdate,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<RenderModelSoundUpdate,1000> &operator=(FixedSizeObjAllocator<RenderModelSoundUpdate,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<RenderModelSoundUpdate,1000>) == 36, "Invalid FixedSizeObjAllocator<RenderModelSoundUpdate,1000> size");

class FixedSizeObjAllocator<WeaponFireVis,1000>
{
public:
    FixedSizeObjAllocator<WeaponFireVis,1000>(FixedSizeObjAllocator<WeaponFireVis,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<WeaponFireVis,1000>();
    virtual _inline ~FixedSizeObjAllocator<WeaponFireVis,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<WeaponFireVis,1000> &operator=(FixedSizeObjAllocator<WeaponFireVis,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<WeaponFireVis,1000>) == 36, "Invalid FixedSizeObjAllocator<WeaponFireVis,1000> size");

class FixedSizeObjAllocator<SensorsBlob,1000>
{
public:
    FixedSizeObjAllocator<SensorsBlob,1000>(FixedSizeObjAllocator<SensorsBlob,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<SensorsBlob,1000>();
    virtual _inline ~FixedSizeObjAllocator<SensorsBlob,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<SensorsBlob,1000> &operator=(FixedSizeObjAllocator<SensorsBlob,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<SensorsBlob,1000>) == 36, "Invalid FixedSizeObjAllocator<SensorsBlob,1000> size");

class FixedSizeObjAllocator<SoundEntityList::Entry,64>
{
public:
    FixedSizeObjAllocator<SoundEntityList::Entry,64>(FixedSizeObjAllocator<SoundEntityList::Entry,64> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<SoundEntityList::Entry,64>();
    virtual _inline ~FixedSizeObjAllocator<SoundEntityList::Entry,64>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<SoundEntityList::Entry,64> &operator=(FixedSizeObjAllocator<SoundEntityList::Entry,64> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<SoundEntityList::Entry,64>) == 36, "Invalid FixedSizeObjAllocator<SoundEntityList::Entry,64> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FixedSizeObjAllocator<SensorsBlob,1000>::FixedSizeObjAllocator<SensorsBlob,1000>() // 0x633BC1
{
    mangled_assert("??0?$FixedSizeObjAllocator@VSensorsBlob@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<WeaponFireVis,1000>::FixedSizeObjAllocator<WeaponFireVis,1000>() // 0x523F95
{
    mangled_assert("??0?$FixedSizeObjAllocator@VWeaponFireVis@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<RenderModelSoundUpdate,1000>::FixedSizeObjAllocator<RenderModelSoundUpdate,1000>() // 0x522344
{
    mangled_assert("??0?$FixedSizeObjAllocator@VRenderModelSoundUpdate@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<RenderModelFXUpdate,1000>::FixedSizeObjAllocator<RenderModelFXUpdate,1000>() // 0x51F047
{
    mangled_assert("??0?$FixedSizeObjAllocator@VRenderModelFXUpdate@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<EffectContainer,1000>::FixedSizeObjAllocator<EffectContainer,1000>() // 0x519A46
{
    mangled_assert("??0?$FixedSizeObjAllocator@VEffectContainer@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<PathFinderObstacleOBB,500>::FixedSizeObjAllocator<PathFinderObstacleOBB,500>() // 0x4E62E6
{
    mangled_assert("??0?$FixedSizeObjAllocator@VPathFinderObstacleOBB@@$0BPE@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<SphereBurst,500>::FixedSizeObjAllocator<SphereBurst,500>() // 0x4A83F0
{
    mangled_assert("??0?$FixedSizeObjAllocator@VSphereBurst@@$0BPE@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<InstantHit,500>::FixedSizeObjAllocator<InstantHit,500>() // 0x4A665D
{
    mangled_assert("??0?$FixedSizeObjAllocator@VInstantHit@@$0BPE@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<Bullet,1000>::FixedSizeObjAllocator<Bullet,1000>() // 0x4A506D
{
    mangled_assert("??0?$FixedSizeObjAllocator@VBullet@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<Visibility,1000>::FixedSizeObjAllocator<Visibility,1000>() // 0x483A21
{
    mangled_assert("??0?$FixedSizeObjAllocator@VVisibility@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<SobIDShared,2000>::FixedSizeObjAllocator<SobIDShared,2000>() // 0x47ABB7
{
    mangled_assert("??0?$FixedSizeObjAllocator@VSobIDShared@@$0HNA@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<ZeroMassBody,1000>::FixedSizeObjAllocator<ZeroMassBody,1000>() // 0x4769FE
{
    mangled_assert("??0?$FixedSizeObjAllocator@VZeroMassBody@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<EngineTrailFrameBlock,512>::FixedSizeObjAllocator<EngineTrailFrameBlock,512>() // 0x446B34
{
    mangled_assert("??0?$FixedSizeObjAllocator@VEngineTrailFrameBlock@@$0CAA@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<SoundEntityList::Entry,64>::FixedSizeObjAllocator<SoundEntityList::Entry,64>() // 0x6CF1CA
{
    mangled_assert("??0?$FixedSizeObjAllocator@UEntry@SoundEntityList@@$0EA@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<SensorsBlob,1000>::~FixedSizeObjAllocator<SensorsBlob,1000>() // 0x6341FD
{
    mangled_assert("??1?$FixedSizeObjAllocator@VSensorsBlob@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<WeaponFireVis,1000>::~FixedSizeObjAllocator<WeaponFireVis,1000>() // 0x5240DD
{
    mangled_assert("??1?$FixedSizeObjAllocator@VWeaponFireVis@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<RenderModelSoundUpdate,1000>::~FixedSizeObjAllocator<RenderModelSoundUpdate,1000>() // 0x5223CC
{
    mangled_assert("??1?$FixedSizeObjAllocator@VRenderModelSoundUpdate@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<RenderModelFXUpdate,1000>::~FixedSizeObjAllocator<RenderModelFXUpdate,1000>() // 0x51F0BC
{
    mangled_assert("??1?$FixedSizeObjAllocator@VRenderModelFXUpdate@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<EffectContainer,1000>::~FixedSizeObjAllocator<EffectContainer,1000>() // 0x519B51
{
    mangled_assert("??1?$FixedSizeObjAllocator@VEffectContainer@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<PathFinderObstacleOBB,500>::~FixedSizeObjAllocator<PathFinderObstacleOBB,500>() // 0x4E66EF
{
    mangled_assert("??1?$FixedSizeObjAllocator@VPathFinderObstacleOBB@@$0BPE@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<SphereBurst,500>::~FixedSizeObjAllocator<SphereBurst,500>() // 0x4A85D5
{
    mangled_assert("??1?$FixedSizeObjAllocator@VSphereBurst@@$0BPE@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<InstantHit,500>::~FixedSizeObjAllocator<InstantHit,500>() // 0x4A68C4
{
    mangled_assert("??1?$FixedSizeObjAllocator@VInstantHit@@$0BPE@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<Bullet,1000>::~FixedSizeObjAllocator<Bullet,1000>() // 0x4A517E
{
    mangled_assert("??1?$FixedSizeObjAllocator@VBullet@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<Visibility,1000>::~FixedSizeObjAllocator<Visibility,1000>() // 0x483BB7
{
    mangled_assert("??1?$FixedSizeObjAllocator@VVisibility@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<SobIDShared,2000>::~FixedSizeObjAllocator<SobIDShared,2000>() // 0x47AC08
{
    mangled_assert("??1?$FixedSizeObjAllocator@VSobIDShared@@$0HNA@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<ZeroMassBody,1000>::~FixedSizeObjAllocator<ZeroMassBody,1000>() // 0x476AD5
{
    mangled_assert("??1?$FixedSizeObjAllocator@VZeroMassBody@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<EngineTrailFrameBlock,512>::~FixedSizeObjAllocator<EngineTrailFrameBlock,512>() // 0x446BC2
{
    mangled_assert("??1?$FixedSizeObjAllocator@VEngineTrailFrameBlock@@$0CAA@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<SoundEntityList::Entry,64>::~FixedSizeObjAllocator<SoundEntityList::Entry,64>() // 0x6CF309
{
    mangled_assert("??1?$FixedSizeObjAllocator@UEntry@SoundEntityList@@$0EA@@@UAE@XZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<SensorsBlob,1000>::Allocate() // 0x634984
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VSensorsBlob@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<WeaponFireVis,1000>::Allocate() // 0x524208
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VWeaponFireVis@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<RenderModelSoundUpdate,1000>::Allocate() // 0x5224B0
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VRenderModelSoundUpdate@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<RenderModelFXUpdate,1000>::Allocate() // 0x51F1C4
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VRenderModelFXUpdate@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<EffectContainer,1000>::Allocate() // 0x519D1B
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VEffectContainer@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<PathFinderObstacleOBB,500>::Allocate() // 0x4E67AE
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VPathFinderObstacleOBB@@$0BPE@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<SphereBurst,500>::Allocate() // 0x4A87AD
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VSphereBurst@@$0BPE@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<InstantHit,500>::Allocate() // 0x4A6BF3
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VInstantHit@@$0BPE@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<Bullet,1000>::Allocate() // 0x4A52B2
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VBullet@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<Visibility,1000>::Allocate() // 0x483D11
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VVisibility@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<SobIDShared,2000>::Allocate() // 0x47ACC7
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VSobIDShared@@$0HNA@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<ZeroMassBody,1000>::Allocate() // 0x476C3E
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VZeroMassBody@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<EngineTrailFrameBlock,512>::Allocate() // 0x446CD7
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VEngineTrailFrameBlock@@$0CAA@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<SoundEntityList::Entry,64>::Allocate() // 0x6CF64A
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@UEntry@SoundEntityList@@$0EA@@@QAEPAXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<SensorsBlob,1000>::Deallocate(void *) // 0x634A6D
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VSensorsBlob@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<WeaponFireVis,1000>::Deallocate(void *) // 0x5242A4
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VWeaponFireVis@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<RenderModelSoundUpdate,1000>::Deallocate(void *) // 0x52254C
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VRenderModelSoundUpdate@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<RenderModelFXUpdate,1000>::Deallocate(void *) // 0x51F260
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VRenderModelFXUpdate@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<EffectContainer,1000>::Deallocate(void *) // 0x519DB7
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VEffectContainer@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<PathFinderObstacleOBB,500>::Deallocate(void *) // 0x4E684A
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VPathFinderObstacleOBB@@$0BPE@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<SphereBurst,500>::Deallocate(void *) // 0x4A887D
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VSphereBurst@@$0BPE@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<InstantHit,500>::Deallocate(void *) // 0x4A6E10
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VInstantHit@@$0BPE@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<Bullet,1000>::Deallocate(void *) // 0x4A5410
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VBullet@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<Visibility,1000>::Deallocate(void *) // 0x483DAD
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VVisibility@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<SobIDShared,2000>::Deallocate(void *) // 0x47AD63
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VSobIDShared@@$0HNA@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<ZeroMassBody,1000>::Deallocate(void *) // 0x476CDD
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VZeroMassBody@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<EngineTrailFrameBlock,512>::Deallocate(void *) // 0x446D76
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VEngineTrailFrameBlock@@$0CAA@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<SoundEntityList::Entry,64>::Deallocate(void *) // 0x6CF70C
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@UEntry@SoundEntityList@@$0EA@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<SensorsBlob,1000>::AllocateNewBlock() // 0x6349AE
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VSensorsBlob@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<WeaponFireVis,1000>::AllocateNewBlock() // 0x524232
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VWeaponFireVis@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<RenderModelSoundUpdate,1000>::AllocateNewBlock() // 0x5224DA
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VRenderModelSoundUpdate@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<RenderModelFXUpdate,1000>::AllocateNewBlock() // 0x51F1EE
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VRenderModelFXUpdate@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<EffectContainer,1000>::AllocateNewBlock() // 0x519D45
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VEffectContainer@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<PathFinderObstacleOBB,500>::AllocateNewBlock() // 0x4E67D8
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VPathFinderObstacleOBB@@$0BPE@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<SphereBurst,500>::AllocateNewBlock() // 0x4A87D7
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VSphereBurst@@$0BPE@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<InstantHit,500>::AllocateNewBlock() // 0x4A6C1D
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VInstantHit@@$0BPE@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<Bullet,1000>::AllocateNewBlock() // 0x4A52DC
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VBullet@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<Visibility,1000>::AllocateNewBlock() // 0x483D3B
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VVisibility@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<SobIDShared,2000>::AllocateNewBlock() // 0x47ACF1
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VSobIDShared@@$0HNA@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<ZeroMassBody,1000>::AllocateNewBlock() // 0x476C68
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VZeroMassBody@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<EngineTrailFrameBlock,512>::AllocateNewBlock() // 0x446D01
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VEngineTrailFrameBlock@@$0CAA@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<SoundEntityList::Entry,64>::AllocateNewBlock() // 0x6CF674
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@UEntry@SoundEntityList@@$0EA@@@AAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MMFIXEDPOOL_H__
/* combined */
#ifndef __MMFIXEDPOOL_H__
#define __MMFIXEDPOOL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FixedSizeObjAllocator<Light,32>
{
public:
    FixedSizeObjAllocator<Light,32>(FixedSizeObjAllocator<Light,32> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<Light,32>();
    virtual _inline ~FixedSizeObjAllocator<Light,32>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<Light,32> &operator=(FixedSizeObjAllocator<Light,32> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<Light,32>) == 36, "Invalid FixedSizeObjAllocator<Light,32> size");

class FixedSizeObjAllocator<StateVariableInstance,1000>
{
public:
    FixedSizeObjAllocator<StateVariableInstance,1000>(FixedSizeObjAllocator<StateVariableInstance,1000> const &); /* compiler_generated() */
    _inline FixedSizeObjAllocator<StateVariableInstance,1000>();
    virtual _inline ~FixedSizeObjAllocator<StateVariableInstance,1000>();
    _inline void *Allocate();
    _inline void Deallocate(void *);
private:
    unsigned __int32 m_nrObjectsPerBlock; // 0x4
    std::vector<void *,std::allocator<void *> > m_blocks; // 0x8
    std::vector<void *,std::allocator<void *> > m_freeSpots; // 0x14
    unsigned __int32 nrObjectsAllocated; // 0x20
    _inline void AllocateNewBlock();
public:
    FixedSizeObjAllocator<StateVariableInstance,1000> &operator=(FixedSizeObjAllocator<StateVariableInstance,1000> const &); /* compiler_generated() */
};
static_assert(sizeof(FixedSizeObjAllocator<StateVariableInstance,1000>) == 36, "Invalid FixedSizeObjAllocator<StateVariableInstance,1000> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FixedSizeObjAllocator<StateVariableInstance,1000>::FixedSizeObjAllocator<StateVariableInstance,1000>() // 0x100BD580
{
    mangled_assert("??0?$FixedSizeObjAllocator@VStateVariableInstance@@$0DOI@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<Light,32>::FixedSizeObjAllocator<Light,32>() // 0x1006B950
{
    mangled_assert("??0?$FixedSizeObjAllocator@VLight@@$0CA@@@QAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<StateVariableInstance,1000>::~FixedSizeObjAllocator<StateVariableInstance,1000>() // 0x100BD6C0
{
    mangled_assert("??1?$FixedSizeObjAllocator@VStateVariableInstance@@$0DOI@@@UAE@XZ");
    todo("implement");
}

_inline FixedSizeObjAllocator<Light,32>::~FixedSizeObjAllocator<Light,32>() // 0x1006BE70
{
    mangled_assert("??1?$FixedSizeObjAllocator@VLight@@$0CA@@@UAE@XZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<StateVariableInstance,1000>::Allocate() // 0x100BD830
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VStateVariableInstance@@$0DOI@@@QAEPAXXZ");
    todo("implement");
}

_inline void *FixedSizeObjAllocator<Light,32>::Allocate() // 0x1006C540
{
    mangled_assert("?Allocate@?$FixedSizeObjAllocator@VLight@@$0CA@@@QAEPAXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<StateVariableInstance,1000>::Deallocate(void *) // 0x100BD9B0
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VStateVariableInstance@@$0DOI@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<Light,32>::Deallocate(void *) // 0x1006C6C0
{
    mangled_assert("?Deallocate@?$FixedSizeObjAllocator@VLight@@$0CA@@@QAEXPAX@Z");
    todo("implement");
}

_inline void FixedSizeObjAllocator<StateVariableInstance,1000>::AllocateNewBlock() // 0x100BD860
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VStateVariableInstance@@$0DOI@@@AAEXXZ");
    todo("implement");
}

_inline void FixedSizeObjAllocator<Light,32>::AllocateNewBlock() // 0x1006C570
{
    mangled_assert("?AllocateNewBlock@?$FixedSizeObjAllocator@VLight@@$0CA@@@AAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MMFIXEDPOOL_H__
#endif

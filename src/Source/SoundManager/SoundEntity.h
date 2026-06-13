#if 0
#ifndef __SOUNDENTITY_H__
#define __SOUNDENTITY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SoundEntity :
    private boost::noncopyable
{
private:
    long m_chanHandle; // 0x0
    vector3 m_pos; // 0x4
    vector3 m_lastpos; // 0x10
    vector3 m_velocity; // 0x1C
    vector3 m_heading; // 0x28
    long m_patchID; // 0x34
    PatchID m_pID; // 0x38
public:
    SoundEntity(SoundEntity const &); /* compiler_generated() */
    _inline SoundEntity();
    _inline ~SoundEntity();
    void SetSoundID(long);
    long GetSoundID() const;
    _inline void SetHandle(long);
    _inline long GetHandle() const;
    _inline void SetPatchID(PatchID const &);
    _inline PatchID const &GetPatchID() const;
    void SetPos(vector3 const &);
    _inline vector3 const &GetPos() const;
    void SetLastPos(vector3 const &);
    _inline vector3 const &GetLastPos() const;
    _inline void SetVel(vector3 const &);
    vector3 const &GetVel() const;
    _inline void SetHead(vector3 const &);
    vector3 const &GetHead() const;
    SoundEntity &operator=(SoundEntity const &); /* compiler_generated() */
};
static_assert(sizeof(SoundEntity) == 60, "Invalid SoundEntity size");

class SoundEntityList
{
public:
    struct Entry
    {
        SoundEntity entity; // 0x0
        float distanceSqr; // 0x3C
        bool mute; // 0x40
        unsigned short signature; // 0x42
        unsigned short use; // 0x44
        SoundEntityList::Entry *next; // 0x48
        static void *operator new(unsigned __int32 size);
        static void operator delete(void *p, unsigned __int32 size);
        Entry(SoundEntityList::Entry const &); /* compiler_generated() */
        _inline Entry(); /* compiler_generated() */
        _inline ~Entry(); /* compiler_generated() */
        SoundEntityList::Entry &operator=(SoundEntityList::Entry const &); /* compiler_generated() */
    };
    static_assert(sizeof(Entry) == 76, "Invalid Entry size");
    typedef std::vector<SoundEntityList::Entry *,std::allocator<SoundEntityList::Entry *> > SEList;
    SoundEntityList(SoundEntityList const &); /* compiler_generated() */
    SoundEntityList();
    ~SoundEntityList();
    SoundEntityHandle AddEntity(PatchID const &, vector3 const &);
    void RmvEntity(SoundEntityHandle const &, bool);
    void Clear();
    void StopAll();
    void UpdateCamera(vector3 const &, unsigned __int32, float);
    long SetPosition(SoundEntityHandle const &, vector3 const &);
    long SetVelocity(SoundEntityHandle const &, vector3 const &);
    long SetHeading(SoundEntityHandle const &, vector3 const &);
    long SetMute(SoundEntityHandle const &, bool);
    bool IsValid(SoundEntityHandle const &);
private:
    std::vector<SoundEntityList::Entry *,std::allocator<SoundEntityList::Entry *> > m_entities; // 0x0
    boost::scoped_ptr<SoundEntityList::Memory> m_memory; // 0xC
    class Memory;
    void Play(SoundEntityList::Entry &, float);
    void Stop(SoundEntityList::Entry &, bool);
public:
    SoundEntityList &operator=(SoundEntityList const &); /* compiler_generated() */
};
static_assert(sizeof(SoundEntityList) == 16, "Invalid SoundEntityList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6CF279(SoundEntity *const);
_inline SoundEntity::SoundEntity() // 0x6CF279
{
    mangled_assert("??0SoundEntity@@QAE@XZ");
    todo("implement");
    _sub_6CF279(this);
}

_extern void _sub_6CF3BF(SoundEntity *const);
_inline SoundEntity::~SoundEntity() // 0x6CF3BF
{
    mangled_assert("??1SoundEntity@@QAE@XZ");
    todo("implement");
    _sub_6CF3BF(this);
}

_extern void _sub_6CF904(SoundEntity *const, long);
_inline void SoundEntity::SetHandle(long) // 0x6CF904
{
    mangled_assert("?SetHandle@SoundEntity@@QAEXJ@Z");
    todo("implement");
    _sub_6CF904(this, arg);
}

_extern long _sub_6CF723(SoundEntity const *const);
_inline long SoundEntity::GetHandle() const // 0x6CF723
{
    mangled_assert("?GetHandle@SoundEntity@@QBEJXZ");
    todo("implement");
    long __result = _sub_6CF723(this);
    return __result;
}

_extern void _sub_6CF9C6(SoundEntity *const, PatchID const &);
_inline void SoundEntity::SetPatchID(PatchID const &) // 0x6CF9C6
{
    mangled_assert("?SetPatchID@SoundEntity@@QAEXABVPatchID@@@Z");
    todo("implement");
    _sub_6CF9C6(this, arg);
}

_extern PatchID const &_sub_6CF72A(SoundEntity const *const);
_inline PatchID const &SoundEntity::GetPatchID() const // 0x6CF72A
{
    mangled_assert("?GetPatchID@SoundEntity@@QBEABVPatchID@@XZ");
    todo("implement");
    PatchID const & __result = _sub_6CF72A(this);
    return __result;
}

_extern vector3 const &_sub_6CF72E(SoundEntity const *const);
_inline vector3 const &SoundEntity::GetPos() const // 0x6CF72E
{
    mangled_assert("?GetPos@SoundEntity@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6CF72E(this);
    return __result;
}

_extern vector3 const &_sub_6CF726(SoundEntity const *const);
_inline vector3 const &SoundEntity::GetLastPos() const // 0x6CF726
{
    mangled_assert("?GetLastPos@SoundEntity@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6CF726(this);
    return __result;
}

_extern void _sub_6CFA53(SoundEntity *const, vector3 const &);
_inline void SoundEntity::SetVel(vector3 const &) // 0x6CFA53
{
    mangled_assert("?SetVel@SoundEntity@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_6CFA53(this, arg);
}

_extern void _sub_6CF90D(SoundEntity *const, vector3 const &);
_inline void SoundEntity::SetHead(vector3 const &) // 0x6CF90D
{
    mangled_assert("?SetHead@SoundEntity@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_6CF90D(this, arg);
}

/* ---------- private code */

#endif // __SOUNDENTITY_H__
#endif

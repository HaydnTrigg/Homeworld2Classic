#if 0
#ifndef __EMITTERCONTAINER_H__
#define __EMITTERCONTAINER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EmitterContainer
{
public:
    typedef std::pair<unsigned int,SoundEntityHandle> EmmiterHandlePair;
    typedef std::map<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > > EmmiterHandleMap;
    EmitterContainer(EmitterContainer const &); /* compiler_generated() */
    EmitterContainer();
    void AddEmitter(unsigned __int32, SoundEntityHandle const &);
    void RemoveEmitter(unsigned __int32);
    SoundEntityHandle FindEmitter(unsigned __int32);
    _inline void SetElapsedStopTime(float);
    _inline float GetElapsedStopTime() const;
    _inline void SetElapsedTriggerTime(float);
    _inline float GetElapsedTriggerTime() const;
private:
    std::map<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > > m_EmmiterHandleMap; // 0x0
    float m_elapsedTriggerTime; // 0x8
    float m_elapsedStopTime; // 0xC
public:
    _inline ~EmitterContainer(); /* compiler_generated() */
    EmitterContainer &operator=(EmitterContainer const &); /* compiler_generated() */
};
static_assert(sizeof(EmitterContainer) == 16, "Invalid EmitterContainer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_48A8D2(EmitterContainer *const, float);
_inline void EmitterContainer::SetElapsedStopTime(float) // 0x48A8D2
{
    mangled_assert("?SetElapsedStopTime@EmitterContainer@@QAEXM@Z");
    todo("implement");
    _sub_48A8D2(this, arg);
}

_extern float _sub_48A686(EmitterContainer const *const);
_inline float EmitterContainer::GetElapsedStopTime() const // 0x48A686
{
    mangled_assert("?GetElapsedStopTime@EmitterContainer@@QBEMXZ");
    todo("implement");
    float __result = _sub_48A686(this);
    return __result;
}

_extern void _sub_48A8E0(EmitterContainer *const, float);
_inline void EmitterContainer::SetElapsedTriggerTime(float) // 0x48A8E0
{
    mangled_assert("?SetElapsedTriggerTime@EmitterContainer@@QAEXM@Z");
    todo("implement");
    _sub_48A8E0(this, arg);
}

_extern float _sub_48A68A(EmitterContainer const *const);
_inline float EmitterContainer::GetElapsedTriggerTime() const // 0x48A68A
{
    mangled_assert("?GetElapsedTriggerTime@EmitterContainer@@QBEMXZ");
    todo("implement");
    float __result = _sub_48A68A(this);
    return __result;
}

/* ---------- private code */

#endif // __EMITTERCONTAINER_H__
#endif

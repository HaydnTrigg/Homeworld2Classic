#if 0
#ifndef __SOUNDMANDATA_H__
#define __SOUNDMANDATA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MusicTuning
{
public:
    float m_volMax; // 0x0
    float m_volMin; // 0x4
    float m_volMinActive; // 0x8
    float m_distanceMax; // 0xC
    float m_distanceMin; // 0x10
    float m_fadeTime; // 0x14
};
static_assert(sizeof(MusicTuning) == 24, "Invalid MusicTuning size");

class SpeechQueue
{
public:
    _inline SpeechQueue(SpeechQueue const &); /* compiler_generated() */
    _inline SpeechQueue(PatchID, float, float, long, void (*)(long), __int32, long, float, float, long);
    _inline void SetRefHandle(long);
    _inline void SetPlaying(bool);
    _inline void Callback();
    _inline long GetHandle();
    _inline long GetRefHandle();
    _inline __int32 GetIndex();
    _inline PatchID &GetPatchID();
    _inline long GetPriority();
    _inline bool GetPlaying();
    _inline float GetTimeout();
    _inline float GetTimein();
    _inline float GetFrequency();
    _inline float GetVolume();
    _inline long GetLinkedHanlde();
private:
    PatchID m_patchID; // 0x0
    float m_timein; // 0x4
    float m_timeout; // 0x8
    float m_frequency; // 0xC
    long m_priority; // 0x10
    void (*m_func)(long); // 0x14
    __int32 m_index; // 0x18
    long m_handle; // 0x1C
    long m_refHandle; // 0x20
    bool m_playing; // 0x24
    float m_vol; // 0x28
    long m_linkedHandle; // 0x2C
public:
    _inline ~SpeechQueue(); /* compiler_generated() */
    _inline SpeechQueue &operator=(SpeechQueue const &); /* compiler_generated() */
};
static_assert(sizeof(SpeechQueue) == 48, "Invalid SpeechQueue size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SpeechQueue::SpeechQueue(PatchID, float, float, long, void (*)(long), __int32, long, float, float, long) // 0x6CDF64
{
    mangled_assert("??0SpeechQueue@@QAE@VPatchID@@MMJP6GXJ@ZHJMMJ@Z");
    todo("implement");
}

_inline void SpeechQueue::SetRefHandle(long) // 0x6CE162
{
    mangled_assert("?SetRefHandle@SpeechQueue@@QAEXJ@Z");
    todo("implement");
}

_inline void SpeechQueue::SetPlaying(bool) // 0x6CE158
{
    mangled_assert("?SetPlaying@SpeechQueue@@QAEX_N@Z");
    todo("implement");
}

_inline void SpeechQueue::Callback() // 0x6CE0B3
{
    mangled_assert("?Callback@SpeechQueue@@QAEXXZ");
    todo("implement");
}

_inline long SpeechQueue::GetHandle() // 0x6CE131
{
    mangled_assert("?GetHandle@SpeechQueue@@QAEJXZ");
    todo("implement");
}

_inline long SpeechQueue::GetRefHandle() // 0x6CE148
{
    mangled_assert("?GetRefHandle@SpeechQueue@@QAEJXZ");
    todo("implement");
}

_inline __int32 SpeechQueue::GetIndex() // 0x6CE135
{
    mangled_assert("?GetIndex@SpeechQueue@@QAEHXZ");
    todo("implement");
}

_inline PatchID &SpeechQueue::GetPatchID() // 0x6CE13D
{
    mangled_assert("?GetPatchID@SpeechQueue@@QAEAAVPatchID@@XZ");
    todo("implement");
}

_inline long SpeechQueue::GetPriority() // 0x6CE144
{
    mangled_assert("?GetPriority@SpeechQueue@@QAEJXZ");
    todo("implement");
}

_inline bool SpeechQueue::GetPlaying() // 0x6CE140
{
    mangled_assert("?GetPlaying@SpeechQueue@@QAE_NXZ");
    todo("implement");
}

_inline float SpeechQueue::GetTimeout() // 0x6CE150
{
    mangled_assert("?GetTimeout@SpeechQueue@@QAEMXZ");
    todo("implement");
}

_inline float SpeechQueue::GetTimein() // 0x6CE14C
{
    mangled_assert("?GetTimein@SpeechQueue@@QAEMXZ");
    todo("implement");
}

_inline float SpeechQueue::GetFrequency() // 0x6CE12D
{
    mangled_assert("?GetFrequency@SpeechQueue@@QAEMXZ");
    todo("implement");
}

_inline float SpeechQueue::GetVolume() // 0x6CE154
{
    mangled_assert("?GetVolume@SpeechQueue@@QAEMXZ");
    todo("implement");
}

_inline long SpeechQueue::GetLinkedHanlde() // 0x6CE139
{
    mangled_assert("?GetLinkedHanlde@SpeechQueue@@QAEJXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SOUNDMANDATA_H__
#endif

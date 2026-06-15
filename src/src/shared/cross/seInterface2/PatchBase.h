#if 0
#ifndef __PATCHBASE_H__
#define __PATCHBASE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PatchBase
{
public:
    PatchBase(PatchBase const &); /* compiler_generated() */
    PatchBase(PatchBase *);
    PatchBase();
    virtual ~PatchBase();
    virtual bool Save(char const *) const = 0;
    virtual bool Open(char const *) = 0;
    static void Reset();
    SampleID AddSample(char const *, long, long, __int32, long *, short *, short *, long *);
    void PushSample(SampleID &, long, long, __int32);
    SampleID ReplaceSample(char const *, long, long, __int32);
    bool RemoveSample(__int32);
    bool RemoveSample(SampleID);
    SampleID GetSample(__int32) const;
    SampleID GetSample(char const *) const;
    SampleID GetSample(SampleID) const;
    SampleID *GetSamplePointer(__int32);
    bool SampleGroupExist(long);
    long GetSampleTotal() const;
    long GetWeight(long) const;
    _inline long GetWeightTotal() const;
    void SetName(char const *);
    _inline char *GetName() const;
    void SetPriority(long);
    _inline long GetPriority() const;
    void SetReverb(float);
    _inline float GetReverb() const;
    void SetDoppler(float);
    _inline float GetDoppler() const;
    void Set3D(bool);
    _inline bool Get3D() const;
    void SetDistances(float, float);
    _inline float GetMinDistance() const;
    _inline float GetMaxDistance() const;
    _inline float GetMaxDistSqr() const;
    void SetVolume(float);
    _inline float GetVolume() const;
    _inline unsigned long GetPatchID() const;
    void SetDestType(unsigned long);
    _inline unsigned long GetDestType() const;
    void SetGroupID(long);
    _inline long GetGroupID() const;
    _inline long GetCurrentPlayed() const;
    void SetCurrentPlayed(long);
    _inline bool DecCurrentPlayed();
    _inline bool IncCurrentPlayed();
    _inline long GetMaxAllowed() const;
    void SetMaxAllowed(long);
    _inline bool IsPatchAvailable() const;
    _inline float GetDelayTime() const;
    void SetDelayTime(float);
    _inline float GetLastPlayTime() const;
    _inline void SetLastPlayTime(float);
    bool IsPatchTimeUp(float) const;
    _inline long GetLatestSample() const;
    _inline void SetLatestSample(long);
    void SetPatchType(unsigned short);
    _inline unsigned short GetPatchType() const;
    void SetPatchType3D(unsigned short);
    _inline unsigned short GetPatchType3D() const;
    void SetForceSW3D(bool);
    _inline bool GetForceSW3D() const;
    void SetForceHW3D(bool);
    _inline bool GetForceHW3D() const;
    void SetConeInner(float);
    _inline float GetConeInner() const;
    void SetConeOuter(float);
    _inline float GetConeOuter() const;
    void SetConeVolume(float);
    _inline float GetConeVolume() const;
    void SetBits(short);
    _inline short GetBits() const;
    void SetChannels(short);
    _inline short GetChannels() const;
    void SetRate(long);
    _inline long GetRate() const;
    void SetCompression(long);
    _inline long GetCompression() const;
    void SetStreamed(bool);
    bool GetStreamed() const;
    void SetVolRandom(float);
    _inline float GetVolRandom() const;
    void SetFrequency(long);
    _inline long GetFrequency() const;
    void SetFreqRandom(long);
    _inline long GetFreqRandom() const;
    void SetCardiodScale(float);
    _inline float GetCardiodScale() const;
    void SetCardiodLowFreq(long);
    _inline long GetCardiodLowFreq() const;
    void SetCardiodHighFreq(long);
    _inline long GetCardiodHighFreq() const;
    void SetSilenceBreak(float);
    _inline float GetSilenceBreak() const;
    void SetSilenceRandom(float);
    _inline float GetSilenceRandom() const;
    _inline SoundParams::EnvelopePoint const *GetEnvelope();
    _inline SoundParams::EffectContainer const &GetEffects();
protected:
    unsigned long m_nID; // 0x4
    unsigned long m_nDestType; // 0x8
    char *m_name; // 0xC
    long m_priority; // 0x10
    bool m_3d; // 0x14
    float m_doppler; // 0x18
    float m_reverb; // 0x1C
    float m_mindistance; // 0x20
    float m_maxdistance; // 0x24
    float m_maxdistsqr; // 0x28
    float m_fConeInnerAngle; // 0x2C
    float m_fConeOuterAngle; // 0x30
    float m_fConeOutsideVolume; // 0x34
    bool m_forceSW3D; // 0x38
    bool m_forceHW3D; // 0x39
    unsigned short m_patchType3D; // 0x3A
    unsigned short m_patchType; // 0x3C
    long m_groupID; // 0x40
    unsigned char m_max_allowed; // 0x44
    unsigned char m_current_played; // 0x45
    long m_random_lastsample; // 0x48
    long m_weight_total; // 0x4C
    float m_time_delay; // 0x50
    float m_time_previous; // 0x54
    std::vector<SampleID,std::allocator<SampleID> > m_samples; // 0x58
    unsigned __int32 m_iterIndex; // 0x64
    bool m_streamed; // 0x68
    float m_volume; // 0x6C
    float m_vol_random; // 0x70
    long m_frequency; // 0x74
    long m_freq_random; // 0x78
    short m_channels; // 0x7C
    short m_bits; // 0x7E
    long m_rate; // 0x80
    long m_compressionrate; // 0x84
    float m_cardiodScale; // 0x88
    long m_cardiodLowFreq; // 0x8C
    long m_cardiodHighFreq; // 0x90
    float m_silenceBreak; // 0x94
    float m_silenceRand; // 0x98
    SoundParams::EnvelopePoint m_envelope[5]; // 0x9C
    SoundParams::EffectContainer m_effects; // 0x18C
public:
    PatchBase &operator=(PatchBase const &); /* compiler_generated() */
};
static_assert(sizeof(PatchBase) == 508, "Invalid PatchBase size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline long PatchBase::GetWeightTotal() const // 0x6BE497
{
    mangled_assert("?GetWeightTotal@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline char *PatchBase::GetName() const // 0x6C0F20
{
    mangled_assert("?GetName@PatchBase@@QBEPADXZ");
    todo("implement");
}

_inline long PatchBase::GetPriority() const // 0x6C0F2D
{
    mangled_assert("?GetPriority@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline float PatchBase::GetReverb() const // 0x6C0F31
{
    mangled_assert("?GetReverb@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline float PatchBase::GetDoppler() const // 0x6C0EFF
{
    mangled_assert("?GetDoppler@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline bool PatchBase::Get3D() const // 0x6C0EE2
{
    mangled_assert("?Get3D@PatchBase@@QBE_NXZ");
    todo("implement");
}

_inline float PatchBase::GetMinDistance() const // 0x6C0F1C
{
    mangled_assert("?GetMinDistance@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline float PatchBase::GetMaxDistance() const // 0x6C0F18
{
    mangled_assert("?GetMaxDistance@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline float PatchBase::GetMaxDistSqr() const // 0x6CD09B
{
    mangled_assert("?GetMaxDistSqr@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline float PatchBase::GetVolume() const // 0x6C1171
{
    mangled_assert("?GetVolume@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline unsigned long PatchBase::GetPatchID() const // 0x6C0F24
{
    mangled_assert("?GetPatchID@PatchBase@@QBEKXZ");
    todo("implement");
}

_inline unsigned long PatchBase::GetDestType() const // 0x6C0EFB
{
    mangled_assert("?GetDestType@PatchBase@@QBEKXZ");
    todo("implement");
}

_inline long PatchBase::GetGroupID() const // 0x6C0F0B
{
    mangled_assert("?GetGroupID@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline long PatchBase::GetCurrentPlayed() const // 0x6C0EF2
{
    mangled_assert("?GetCurrentPlayed@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline bool PatchBase::DecCurrentPlayed() // 0x6C69DA
{
    mangled_assert("?DecCurrentPlayed@PatchBase@@QAE_NXZ");
    todo("implement");
}

_inline bool PatchBase::IncCurrentPlayed() // 0x6C6B61
{
    mangled_assert("?IncCurrentPlayed@PatchBase@@QAE_NXZ");
    todo("implement");
}

_inline long PatchBase::GetMaxAllowed() const // 0x6C0F13
{
    mangled_assert("?GetMaxAllowed@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline bool PatchBase::IsPatchAvailable() const // 0x73AC4D
{
    mangled_assert("?IsPatchAvailable@PatchBase@@QBE_NXZ");
    todo("implement");
}

_inline float PatchBase::GetDelayTime() const // 0x6C0EF7
{
    mangled_assert("?GetDelayTime@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline float PatchBase::GetLastPlayTime() const // 0x6C0F0F
{
    mangled_assert("?GetLastPlayTime@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline void PatchBase::SetLastPlayTime(float) // 0x6C71BB
{
    mangled_assert("?SetLastPlayTime@PatchBase@@QAEXM@Z");
    todo("implement");
}

_inline long PatchBase::GetLatestSample() const // 0x6BE487
{
    mangled_assert("?GetLatestSample@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline void PatchBase::SetLatestSample(long) // 0x6BEC60
{
    mangled_assert("?SetLatestSample@PatchBase@@QAEXJ@Z");
    todo("implement");
}

_inline unsigned short PatchBase::GetPatchType() const // 0x51E961
{
    mangled_assert("?GetPatchType@PatchBase@@QBEGXZ");
    todo("implement");
}

_inline unsigned short PatchBase::GetPatchType3D() const // 0x6C0F28
{
    mangled_assert("?GetPatchType3D@PatchBase@@QBEGXZ");
    todo("implement");
}

_inline bool PatchBase::GetForceSW3D() const // 0x6C0F07
{
    mangled_assert("?GetForceSW3D@PatchBase@@QBE_NXZ");
    todo("implement");
}

_inline bool PatchBase::GetForceHW3D() const // 0x6C0F03
{
    mangled_assert("?GetForceHW3D@PatchBase@@QBE_NXZ");
    todo("implement");
}

_inline float PatchBase::GetConeInner() const // 0x6C0EE6
{
    mangled_assert("?GetConeInner@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline float PatchBase::GetConeOuter() const // 0x6C0EEA
{
    mangled_assert("?GetConeOuter@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline float PatchBase::GetConeVolume() const // 0x6C0EEE
{
    mangled_assert("?GetConeVolume@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline short PatchBase::GetBits() const // 0x6C69EE
{
    mangled_assert("?GetBits@PatchBase@@QBEFXZ");
    todo("implement");
}

_inline short PatchBase::GetChannels() const // 0x6C6A5E
{
    mangled_assert("?GetChannels@PatchBase@@QBEFXZ");
    todo("implement");
}

_inline long PatchBase::GetRate() const // 0x6C6B40
{
    mangled_assert("?GetRate@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline long PatchBase::GetCompression() const // 0x6C6A63
{
    mangled_assert("?GetCompression@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline float PatchBase::GetVolRandom() const // 0x6C6B5D
{
    mangled_assert("?GetVolRandom@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline long PatchBase::GetFrequency() const // 0x6C6A80
{
    mangled_assert("?GetFrequency@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline long PatchBase::GetFreqRandom() const // 0x6C6A7C
{
    mangled_assert("?GetFreqRandom@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline float PatchBase::GetCardiodScale() const // 0x6C6A57
{
    mangled_assert("?GetCardiodScale@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline long PatchBase::GetCardiodLowFreq() const // 0x6C6A50
{
    mangled_assert("?GetCardiodLowFreq@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline long PatchBase::GetCardiodHighFreq() const // 0x6C6A49
{
    mangled_assert("?GetCardiodHighFreq@PatchBase@@QBEJXZ");
    todo("implement");
}

_inline float PatchBase::GetSilenceBreak() const // 0x6C6B47
{
    mangled_assert("?GetSilenceBreak@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline float PatchBase::GetSilenceRandom() const // 0x6C6B4E
{
    mangled_assert("?GetSilenceRandom@PatchBase@@QBEMXZ");
    todo("implement");
}

_inline SoundParams::EnvelopePoint const *PatchBase::GetEnvelope() // 0x6C6A71
{
    mangled_assert("?GetEnvelope@PatchBase@@QAEPBVEnvelopePoint@SoundParams@@XZ");
    todo("implement");
}

_inline SoundParams::EffectContainer const &PatchBase::GetEffects() // 0x6C6A6A
{
    mangled_assert("?GetEffects@PatchBase@@QAEABVEffectContainer@SoundParams@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PATCHBASE_H__
#endif

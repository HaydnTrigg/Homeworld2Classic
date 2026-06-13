#if 0
#ifndef __SOUNDPARAMS_H__
#define __SOUNDPARAMS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SoundParams
{
public:
    enum CompressionType
    {
        CT_None = 0,
        CT_MP3,
        CT_FDA_BR176,
        CT_FDA_BR88,
        CT_FDA_BR44,
        CT_FDA_BR22,
        CT_COUNT,
    };
    enum DestinationType
    {
        DT_Stream = 0,
        DT_2D,
        DT_3D,
        DT_StreamPlayList,
        DT_COUNT,
    };
    enum PatchType
    {
        PT_Stream = 0,
        PT_2D,
        PT_3D,
        PT_StreamPlayList,
        PT_COUNT,
    };
    enum SoundType3D
    {
        S3_None = 0,
        S3_Cone,
        S3_Cardiod,
        S3_COUNT,
    };
    enum SpecialValues
    {
        SV_NoVolumeRandom = 0,
        SV_FreqFromSource,
        SV_NoFrequencyRand,
        SV_LoopEndAtSrcEnd,
        SV_LoopForever,
        SV_NonLooping,
        SV_NoLoopCountRand,
        SV_COUNT,
        SV_None,
    };
    enum RangeType
    {
        RNG_Priority = 0,
        RNG_Compression,
        RNG_Volume,
        RNG_Frequency,
        RNG_Destination,
        RNG_Patch,
        RNG_NumChannels,
        RNG_MaxPolyphony,
        RNG_Sample,
        RNG_LoopCount,
        RNG_Type3D,
        RNG_Doppler,
        RNG_Reverb,
        RNG_Cone,
        RNG_Equalizer,
        RNG_Duration,
        RNG_Scalar,
        RNG_Silence,
        RNG_Bool,
        RNG_COUNT,
        RNG_None,
    };
    enum ParamType
    {
        PRM_Priority = 0,
        PRM_Compression,
        PRM_Volume,
        PRM_VolumeRand,
        PRM_Frequency,
        PRM_FrequencyRand,
        PRM_Destination,
        PRM_Patch,
        PRM_NumChannels,
        PRM_MaxPolyphony,
        PRM_LoopStart,
        PRM_LoopEnd,
        PRM_StartOffset,
        PRM_LoopCount,
        PRM_LoopCountRand,
        PRM_SoundType3D,
        PRM_Doppler,
        PRM_ConeInner,
        PRM_ConeOuter,
        PRM_Envelope,
        PRM_Effects,
        PRM_CardiodScale,
        PRM_CardiodLowFreq,
        PRM_CardiodHighFreq,
        PRM_Container,
        PRM_Playlist,
        PRM_ContainerRandom,
        PRM_ContainerLooping,
        PRM_SilenceBreak,
        PRM_SilenceRandom,
        PRM_COUNT,
    };
    enum
    {
        NumEnvelopePoints = 5, // 0x0005
    };
    enum
    {
        NumEqSamples = 8, // 0x0008
    };
    class EnvelopePoint
    {
    public:
        EnvelopePoint();
        bool operator==(SoundParams::EnvelopePoint const &) const;
        SoundParams::EnvelopePoint &operator=(SoundParams::EnvelopePoint const &);
        float distance; // 0x0
        float volume; // 0x4
        float reverb; // 0x8
        __int32 duration; // 0xC
        float equalizer[8]; // 0x10
    };
    static_assert(sizeof(EnvelopePoint) == 48, "Invalid EnvelopePoint size");
    class EffectContainer
    {
    public:
        EffectContainer();
        bool operator==(SoundParams::EffectContainer const &) const;
        SoundParams::EffectContainer &operator=(SoundParams::EffectContainer const &);
        bool EffectsAreValid() const;
        static long const DEF_freq;
        static unsigned long const DEF_zero;
        long filterMinFreq; // 0x0
        long filterMaxFreq; // 0x4
        long toneMinFreq; // 0x8
        long toneMaxFreq; // 0xC
        unsigned long toneDur; // 0x10
        unsigned long toneMute; // 0x14
        unsigned long toneCount; // 0x18
        unsigned long breakMaxRate; // 0x1C
        unsigned long breakMaxDur; // 0x20
        unsigned long qnoiseMaxRate; // 0x24
        unsigned long qnoiseMaxDur; // 0x28
        float scaleLev; // 0x2C
        float noiseLev; // 0x30
        float toneLev; // 0x34
        float limitLev; // 0x38
        float pitchShift; // 0x3C
        SoundParams::EnvelopePoint eq; // 0x40
    };
    static_assert(sizeof(EffectContainer) == 112, "Invalid EffectContainer size");
    SoundParams();
    bool operator==(SoundParams const &) const;
    long m_priority; // 0x0
    SoundParams::CompressionType m_compression; // 0x4
    float m_volume; // 0x8
    float m_volumeRand; // 0xC
    long m_frequency; // 0x10
    long m_frequencyRand; // 0x14
    SoundParams::DestinationType m_destination; // 0x18
    SoundParams::PatchType m_patchType; // 0x1C
    long m_numChannels; // 0x20
    long m_maxPolyphony; // 0x24
    long m_loopStart; // 0x28
    long m_loopEnd; // 0x2C
    long m_startOffset; // 0x30
    long m_loopCount; // 0x34
    long m_loopCountRand; // 0x38
    SoundParams::SoundType3D m_type3D; // 0x3C
    float m_doppler; // 0x40
    float m_coneInner; // 0x44
    float m_coneOuter; // 0x48
    float m_cardiodScale; // 0x4C
    long m_cardiodLowFreq; // 0x50
    long m_cardiodHighFreq; // 0x54
    long m_bContainer; // 0x58
    long m_bPlaylist; // 0x5C
    long m_bRandomContainer; // 0x60
    long m_bLoopingPlaylist; // 0x64
    float m_silenceBreak; // 0x68
    float m_silenceRandom; // 0x6C
    SoundParams::EnvelopePoint m_envelope[5]; // 0x70
    SoundParams::EffectContainer m_effects; // 0x160
    static void getRange(SoundParams::RangeType type, long &min, long &max);
    static void getRange(SoundParams::RangeType type, float &min, float &max);
    static void getSpecialVal(SoundParams::SpecialValues type, long &val);
    static void getSpecialVal(SoundParams::SpecialValues type, float &val);
    static void copy(SoundParams const &from, SoundParams &to, SoundParams::ParamType type);
    static void copy(SoundParams::EnvelopePoint const *from, SoundParams::EnvelopePoint *to);
    _inline SoundParams &operator=(SoundParams const &); /* compiler_generated() */
};
static_assert(sizeof(SoundParams) == 464, "Invalid SoundParams size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOUNDPARAMS_H__
/* combined */
#ifndef __SOUNDPARAMS_H__
#define __SOUNDPARAMS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SoundParams
{
public:
    enum CompressionType
    {
        CT_None = 0,
        CT_MP3,
        CT_FDA_BR176,
        CT_FDA_BR88,
        CT_FDA_BR44,
        CT_FDA_BR22,
        CT_COUNT,
    };
    enum DestinationType
    {
        DT_Stream = 0,
        DT_2D,
        DT_3D,
        DT_StreamPlayList,
        DT_COUNT,
    };
    enum PatchType
    {
        PT_Stream = 0,
        PT_2D,
        PT_3D,
        PT_StreamPlayList,
        PT_COUNT,
    };
    enum SoundType3D
    {
        S3_None = 0,
        S3_Cone,
        S3_Cardiod,
        S3_COUNT,
    };
    enum SpecialValues
    {
        SV_NoVolumeRandom = 0,
        SV_FreqFromSource,
        SV_NoFrequencyRand,
        SV_LoopEndAtSrcEnd,
        SV_LoopForever,
        SV_NonLooping,
        SV_NoLoopCountRand,
        SV_COUNT,
        SV_None,
    };
    enum RangeType
    {
        RNG_Priority = 0,
        RNG_Compression,
        RNG_Volume,
        RNG_Frequency,
        RNG_Destination,
        RNG_Patch,
        RNG_NumChannels,
        RNG_MaxPolyphony,
        RNG_Sample,
        RNG_LoopCount,
        RNG_Type3D,
        RNG_Doppler,
        RNG_Reverb,
        RNG_Cone,
        RNG_Equalizer,
        RNG_Duration,
        RNG_Scalar,
        RNG_Silence,
        RNG_Bool,
        RNG_COUNT,
        RNG_None,
    };
    enum ParamType
    {
        PRM_Priority = 0,
        PRM_Compression,
        PRM_Volume,
        PRM_VolumeRand,
        PRM_Frequency,
        PRM_FrequencyRand,
        PRM_Destination,
        PRM_Patch,
        PRM_NumChannels,
        PRM_MaxPolyphony,
        PRM_LoopStart,
        PRM_LoopEnd,
        PRM_StartOffset,
        PRM_LoopCount,
        PRM_LoopCountRand,
        PRM_SoundType3D,
        PRM_Doppler,
        PRM_ConeInner,
        PRM_ConeOuter,
        PRM_Envelope,
        PRM_Effects,
        PRM_CardiodScale,
        PRM_CardiodLowFreq,
        PRM_CardiodHighFreq,
        PRM_Container,
        PRM_Playlist,
        PRM_ContainerRandom,
        PRM_ContainerLooping,
        PRM_SilenceBreak,
        PRM_SilenceRandom,
        PRM_COUNT,
    };
    enum
    {
        NumEnvelopePoints = 5, // 0x0005
    };
    enum
    {
        NumEqSamples = 8, // 0x0008
    };
    class EnvelopePoint
    {
    public:
        EnvelopePoint();
        bool operator==(SoundParams::EnvelopePoint const &) const;
        SoundParams::EnvelopePoint &operator=(SoundParams::EnvelopePoint const &);
        float distance; // 0x0
        float volume; // 0x4
        float reverb; // 0x8
        __int32 duration; // 0xC
        float equalizer[8]; // 0x10
    };
    static_assert(sizeof(EnvelopePoint) == 48, "Invalid EnvelopePoint size");
    class EffectContainer
    {
    public:
        EffectContainer();
        bool operator==(SoundParams::EffectContainer const &) const;
        SoundParams::EffectContainer &operator=(SoundParams::EffectContainer const &);
        bool EffectsAreValid() const;
        static long const DEF_freq;
        static unsigned long const DEF_zero;
        long filterMinFreq; // 0x0
        long filterMaxFreq; // 0x4
        long toneMinFreq; // 0x8
        long toneMaxFreq; // 0xC
        unsigned long toneDur; // 0x10
        unsigned long toneMute; // 0x14
        unsigned long toneCount; // 0x18
        unsigned long breakMaxRate; // 0x1C
        unsigned long breakMaxDur; // 0x20
        unsigned long qnoiseMaxRate; // 0x24
        unsigned long qnoiseMaxDur; // 0x28
        float scaleLev; // 0x2C
        float noiseLev; // 0x30
        float toneLev; // 0x34
        float limitLev; // 0x38
        float pitchShift; // 0x3C
        SoundParams::EnvelopePoint eq; // 0x40
    };
    static_assert(sizeof(EffectContainer) == 112, "Invalid EffectContainer size");
    SoundParams();
    bool operator==(SoundParams const &) const;
    long m_priority; // 0x0
    SoundParams::CompressionType m_compression; // 0x4
    float m_volume; // 0x8
    float m_volumeRand; // 0xC
    long m_frequency; // 0x10
    long m_frequencyRand; // 0x14
    SoundParams::DestinationType m_destination; // 0x18
    SoundParams::PatchType m_patchType; // 0x1C
    long m_numChannels; // 0x20
    long m_maxPolyphony; // 0x24
    long m_loopStart; // 0x28
    long m_loopEnd; // 0x2C
    long m_startOffset; // 0x30
    long m_loopCount; // 0x34
    long m_loopCountRand; // 0x38
    SoundParams::SoundType3D m_type3D; // 0x3C
    float m_doppler; // 0x40
    float m_coneInner; // 0x44
    float m_coneOuter; // 0x48
    float m_cardiodScale; // 0x4C
    long m_cardiodLowFreq; // 0x50
    long m_cardiodHighFreq; // 0x54
    long m_bContainer; // 0x58
    long m_bPlaylist; // 0x5C
    long m_bRandomContainer; // 0x60
    long m_bLoopingPlaylist; // 0x64
    float m_silenceBreak; // 0x68
    float m_silenceRandom; // 0x6C
    SoundParams::EnvelopePoint m_envelope[5]; // 0x70
    SoundParams::EffectContainer m_effects; // 0x160
    static void getRange(SoundParams::RangeType, long &, long &);
    static void getRange(SoundParams::RangeType, float &, float &);
    static void getSpecialVal(SoundParams::SpecialValues, long &);
    static void getSpecialVal(SoundParams::SpecialValues, float &);
    static void copy(SoundParams const &, SoundParams &, SoundParams::ParamType);
    static void copy(SoundParams::EnvelopePoint const *, SoundParams::EnvelopePoint *);
    SoundParams &operator=(SoundParams const &); /* compiler_generated() */
};
static_assert(sizeof(SoundParams) == 464, "Invalid SoundParams size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOUNDPARAMS_H__
/* combined */
#ifndef __SOUNDPARAMS_H__
#define __SOUNDPARAMS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SoundParams
{
public:
    enum CompressionType
    {
        CT_None = 0,
        CT_MP3,
        CT_FDA_BR176,
        CT_FDA_BR88,
        CT_FDA_BR44,
        CT_FDA_BR22,
        CT_COUNT,
    };
    enum DestinationType
    {
        DT_Stream = 0,
        DT_2D,
        DT_3D,
        DT_StreamPlayList,
        DT_COUNT,
    };
    enum PatchType
    {
        PT_Stream = 0,
        PT_2D,
        PT_3D,
        PT_StreamPlayList,
        PT_COUNT,
    };
    enum SoundType3D
    {
        S3_None = 0,
        S3_Cone,
        S3_Cardiod,
        S3_COUNT,
    };
    enum SpecialValues
    {
        SV_NoVolumeRandom = 0,
        SV_FreqFromSource,
        SV_NoFrequencyRand,
        SV_LoopEndAtSrcEnd,
        SV_LoopForever,
        SV_NonLooping,
        SV_NoLoopCountRand,
        SV_COUNT,
        SV_None,
    };
    enum RangeType
    {
        RNG_Priority = 0,
        RNG_Compression,
        RNG_Volume,
        RNG_Frequency,
        RNG_Destination,
        RNG_Patch,
        RNG_NumChannels,
        RNG_MaxPolyphony,
        RNG_Sample,
        RNG_LoopCount,
        RNG_Type3D,
        RNG_Doppler,
        RNG_Reverb,
        RNG_Cone,
        RNG_Equalizer,
        RNG_Duration,
        RNG_Scalar,
        RNG_Silence,
        RNG_Bool,
        RNG_COUNT,
        RNG_None,
    };
    enum ParamType
    {
        PRM_Priority = 0,
        PRM_Compression,
        PRM_Volume,
        PRM_VolumeRand,
        PRM_Frequency,
        PRM_FrequencyRand,
        PRM_Destination,
        PRM_Patch,
        PRM_NumChannels,
        PRM_MaxPolyphony,
        PRM_LoopStart,
        PRM_LoopEnd,
        PRM_StartOffset,
        PRM_LoopCount,
        PRM_LoopCountRand,
        PRM_SoundType3D,
        PRM_Doppler,
        PRM_ConeInner,
        PRM_ConeOuter,
        PRM_Envelope,
        PRM_Effects,
        PRM_CardiodScale,
        PRM_CardiodLowFreq,
        PRM_CardiodHighFreq,
        PRM_Container,
        PRM_Playlist,
        PRM_ContainerRandom,
        PRM_ContainerLooping,
        PRM_SilenceBreak,
        PRM_SilenceRandom,
        PRM_COUNT,
    };
    enum
    {
        NumEnvelopePoints = 5, // 0x0005
    };
    enum
    {
        NumEqSamples = 8, // 0x0008
    };
    class EnvelopePoint
    {
    public:
        EnvelopePoint();
        bool operator==(SoundParams::EnvelopePoint const &) const;
        SoundParams::EnvelopePoint &operator=(SoundParams::EnvelopePoint const &);
        float distance; // 0x0
        float volume; // 0x4
        float reverb; // 0x8
        __int32 duration; // 0xC
        float equalizer[8]; // 0x10
    };
    static_assert(sizeof(EnvelopePoint) == 48, "Invalid EnvelopePoint size");
    class EffectContainer
    {
    public:
        EffectContainer();
        bool operator==(SoundParams::EffectContainer const &) const;
        SoundParams::EffectContainer &operator=(SoundParams::EffectContainer const &);
        bool EffectsAreValid() const;
        static long const DEF_freq;
        static unsigned long const DEF_zero;
        long filterMinFreq; // 0x0
        long filterMaxFreq; // 0x4
        long toneMinFreq; // 0x8
        long toneMaxFreq; // 0xC
        unsigned long toneDur; // 0x10
        unsigned long toneMute; // 0x14
        unsigned long toneCount; // 0x18
        unsigned long breakMaxRate; // 0x1C
        unsigned long breakMaxDur; // 0x20
        unsigned long qnoiseMaxRate; // 0x24
        unsigned long qnoiseMaxDur; // 0x28
        float scaleLev; // 0x2C
        float noiseLev; // 0x30
        float toneLev; // 0x34
        float limitLev; // 0x38
        float pitchShift; // 0x3C
        SoundParams::EnvelopePoint eq; // 0x40
    };
    static_assert(sizeof(EffectContainer) == 112, "Invalid EffectContainer size");
    SoundParams();
    bool operator==(SoundParams const &) const;
    long m_priority; // 0x0
    SoundParams::CompressionType m_compression; // 0x4
    float m_volume; // 0x8
    float m_volumeRand; // 0xC
    long m_frequency; // 0x10
    long m_frequencyRand; // 0x14
    SoundParams::DestinationType m_destination; // 0x18
    SoundParams::PatchType m_patchType; // 0x1C
    long m_numChannels; // 0x20
    long m_maxPolyphony; // 0x24
    long m_loopStart; // 0x28
    long m_loopEnd; // 0x2C
    long m_startOffset; // 0x30
    long m_loopCount; // 0x34
    long m_loopCountRand; // 0x38
    SoundParams::SoundType3D m_type3D; // 0x3C
    float m_doppler; // 0x40
    float m_coneInner; // 0x44
    float m_coneOuter; // 0x48
    float m_cardiodScale; // 0x4C
    long m_cardiodLowFreq; // 0x50
    long m_cardiodHighFreq; // 0x54
    long m_bContainer; // 0x58
    long m_bPlaylist; // 0x5C
    long m_bRandomContainer; // 0x60
    long m_bLoopingPlaylist; // 0x64
    float m_silenceBreak; // 0x68
    float m_silenceRandom; // 0x6C
    SoundParams::EnvelopePoint m_envelope[5]; // 0x70
    SoundParams::EffectContainer m_effects; // 0x160
    static void getRange(SoundParams::RangeType, long &, long &);
    static void getRange(SoundParams::RangeType, float &, float &);
    static void getSpecialVal(SoundParams::SpecialValues, long &);
    static void getSpecialVal(SoundParams::SpecialValues, float &);
    static void copy(SoundParams const &, SoundParams &, SoundParams::ParamType);
    static void copy(SoundParams::EnvelopePoint const *, SoundParams::EnvelopePoint *);
    SoundParams &operator=(SoundParams const &); /* compiler_generated() */
};
static_assert(sizeof(SoundParams) == 464, "Invalid SoundParams size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOUNDPARAMS_H__
#endif

#if 0
#ifndef __DXAUDIOTYPES_H__
#define __DXAUDIOTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CSLock
{
private:
    _RTL_CRITICAL_SECTION &m_cs; // 0x0
public:
    CSLock(_RTL_CRITICAL_SECTION &);
    ~CSLock();
};
static_assert(sizeof(CSLock) == 4, "Invalid CSLock size");

class Channel
{
public:
    Channel();
    _inline void reset();
    enum Status
    {
        SOUND_FREE = 0,
        SOUND_STOPPED,
        SOUND_INUSE,
        SOUND_STARTING,
        SOUND_WRITING,
        SOUND_PLAYING,
        SOUND_WAITING,
        SOUND_SILENCE,
        SOUND_STOPPING,
        SOUND_STREAMSTOPPING,
        SOUND_FADING,
        SOUND_LOOPEND,
        SOUND_RESTART,
        SOUND_PAUSED,
    };
    __int32 priority; // 0x0
    Channel::Status m_state; // 0x4
    __int32 handle; // 0x8
    bool m_muted; // 0xC
    bool m_stream; // 0xD
    unsigned __int32 m_streamindex; // 0x10
    short m_numChannels; // 0x14
    long m_bitRate; // 0x18
    long m_frequency; // 0x1C
    float uservol; // 0x20
    float volume; // 0x24
    float volfade; // 0x28
    float voltarget; // 0x2C
    short volticksleft; // 0x30
    short pan; // 0x32
    short pantarget; // 0x34
    short panfade; // 0x36
    short panticksleft; // 0x38
    float m_pitch; // 0x3C
    float pitchtarget; // 0x40
    float pitchfade; // 0x44
    __int32 pitchticksleft; // 0x48
    bool m_looping; // 0x4C
    long m_loopCounter; // 0x50
    long m_loopTotal; // 0x54
    char *m_loopStart; // 0x58
    char *m_loopEnd; // 0x5C
    char *m_dataStart; // 0x60
    char *m_dataEnd; // 0x64
    char *m_currentPos; // 0x68
    long m_amountPlayed; // 0x6C
    vector3 m_position; // 0x70
    vector3 m_velocity; // 0x7C
    vector3 m_facing; // 0x88
    float m_distance; // 0x94
    SoundParams::EnvelopePoint const *m_envelope; // 0x98
    long m_numEnvelopePoints; // 0x9C
    float volfactorL; // 0xA0
    float volfactorR; // 0xA4
    float m_currentEQ[9]; // 0xA8
    long m_delayposL; // 0xCC
    long m_delayposR; // 0xD0
    float m_delaybufferL[8192]; // 0xD4
    float m_delaybufferR[8192]; // 0x80D4
    bool m_useEffects; // 0x100D4
    bool m_usecardiod; // 0x100D5
    float m_cardiodScale; // 0x100D8
    long m_cardiodLowBand; // 0x100DC
    long m_cardiodHighBand; // 0x100E0
    float m_doppler; // 0x100E4
    long datasize; // 0x100E8
    unsigned __int32 m_heading; // 0x100EC
    __int32 amountread; // 0x100F0
    float shift; // 0x100F4
    char *freqdata; // 0x100F8
    float filter[9]; // 0x100FC
    float cardiodfilter[9]; // 0x10120
};
static_assert(sizeof(Channel) == 65860, "Invalid Channel size");

class StreamChannel :
    public Channel
{
public:
    _inline StreamChannel();
    _inline void reset();
    enum BlockState
    {
        BS_Empty = 0,
        BS_Writing,
        BS_Reading,
    };
    static long const Num_Blocks;
    unsigned long m_filehandle; // 0x10144
    long m_buffersize; // 0x10148
    unsigned __int32 m_blocksize; // 0x1014C
    char *m_writepos; // 0x10150
    char *m_bufferend; // 0x10154
    long m_fileoffset; // 0x10158
    bool m_loopingStream; // 0x1015C
    StreamChannel::BlockState m_blockstatus[2]; // 0x10160
    long m_readblock; // 0x10168
    long m_writeblock; // 0x1016C
    long m_dataleft; // 0x10170
    __int32 lastpos; // 0x10174
    __int32 status; // 0x10178
    __int32 filepos; // 0x1017C
    __int32 playing; // 0x10180
    __int32 handle; // 0x10184
};
static_assert(sizeof(StreamChannel) == 65928, "Invalid StreamChannel size");

class MixerData
{
public:
    IDirectSound8 *m_lpDirectSound; // 0x0
    IDirectSoundBuffer *m_lpPrimaryBuffer; // 0x4
    IDirectSoundBuffer *m_lpMixBuffer; // 0x8
    long m_mixerInit; // 0xC
    float m_mixAccumL[256]; // 0x10
    float m_mixAccumR[256]; // 0x410
    unsigned long m_mixerticks; // 0x810
    long m_buffersize; // 0x814
    unsigned long m_dwBlockSize; // 0x818
    unsigned long m_dwWritePos; // 0x81C
    unsigned long m_dwMixAhead; // 0x820
    long m_hwnd; // 0x824
    void *m_hMixerThread; // 0x828
    void *m_hRunMutex; // 0x82C
    void *m_hStreamerThread; // 0x830
    void *m_hStreamerMutex; // 0x834
    Channel *m_channels[64]; // 0x838
    long m_channelcount; // 0x938
    StreamChannel *m_streams[8]; // 0x93C
    long m_streamcount; // 0x95C
    float m_cardiod[180]; // 0x960
    Channel::Status m_status; // 0xC30
};
static_assert(sizeof(MixerData) == 3124, "Invalid MixerData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10002114(Channel *const);
_inline void Channel::reset() // 0x10002114
{
    mangled_assert("?reset@Channel@@QAEXXZ");
    todo("implement");
    _sub_10002114(this);
}

_extern _sub_100023D7(StreamChannel *const);
_inline StreamChannel::StreamChannel() // 0x100023D7
{
    mangled_assert("??0StreamChannel@@QAE@XZ");
    todo("implement");
    _sub_100023D7(this);
}

_extern void _sub_100031CB(StreamChannel *const);
_inline void StreamChannel::reset() // 0x100031CB
{
    mangled_assert("?reset@StreamChannel@@QAEXXZ");
    todo("implement");
    _sub_100031CB(this);
}

/* ---------- private code */

#endif // __DXAUDIOTYPES_H__
#endif

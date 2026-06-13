#if 0
#ifndef __FDAUDIODATA_H__
#define __FDAUDIODATA_H__
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
    short m_bitRate; // 0x16
    long m_frequency; // 0x18
    float uservol; // 0x1C
    float volume; // 0x20
    float volfade; // 0x24
    float voltarget; // 0x28
    short volticksleft; // 0x2C
    short pan; // 0x2E
    short pantarget; // 0x30
    short panfade; // 0x32
    short panticksleft; // 0x34
    float m_pitch; // 0x38
    float pitchtarget; // 0x3C
    float pitchfade; // 0x40
    __int32 pitchticksleft; // 0x44
    bool m_looping; // 0x48
    long m_loopCounter; // 0x4C
    long m_loopTotal; // 0x50
    char *m_loopStart; // 0x54
    char *m_loopEnd; // 0x58
    char *m_dataStart; // 0x5C
    char *m_dataEnd; // 0x60
    char *m_currentPos; // 0x64
    long m_amountPlayed; // 0x68
    vector3 m_position; // 0x6C
    vector3 m_velocity; // 0x78
    vector3 m_facing; // 0x84
    float m_distance; // 0x90
    SoundParams::EnvelopePoint const *m_envelope; // 0x94
    long m_numEnvelopePoints; // 0x98
    float volfactorL; // 0x9C
    float volfactorR; // 0xA0
    float m_currentEQ[9]; // 0xA4
    long m_delayposL; // 0xC8
    long m_delayposR; // 0xCC
    float m_delaybufferL[4608]; // 0xD0
    float m_delaybufferR[4608]; // 0x48D0
    bool m_useEffects; // 0x90D0
    EFFECT m_effect; // 0x90D4
    bool m_usecardiod; // 0x911C
    float m_cardiodScale; // 0x9120
    long m_cardiodLowBand; // 0x9124
    long m_cardiodHighBand; // 0x9128
    float m_doppler; // 0x912C
    long datasize; // 0x9130
    unsigned __int32 m_heading; // 0x9134
    __int32 fqsize; // 0x9138
    __int32 amountread; // 0x913C
    float shift; // 0x9140
    char *freqdata; // 0x9144
    float filter[9]; // 0x9148
    float cardiodfilter[9]; // 0x916C
    unsigned char m_exponentblockL[256]; // 0x9190
    unsigned char m_exponentblockR[256]; // 0x9290
    float m_mixbufferL1[256]; // 0x9390
    float m_mixbufferL2[256]; // 0x9790
    float m_mixbufferR1[256]; // 0x9B90
    float m_mixbufferR2[256]; // 0x9F90
};
static_assert(sizeof(Channel) == 41872, "Invalid Channel size");

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
    unsigned long m_filehandle; // 0xA390
    long m_buffersize; // 0xA394
    unsigned __int32 m_blocksize; // 0xA398
    char *m_writepos; // 0xA39C
    char *m_bufferend; // 0xA3A0
    long m_fileoffset; // 0xA3A4
    bool m_loopingStream; // 0xA3A8
    StreamChannel::BlockState m_blockstatus[2]; // 0xA3AC
    long m_readblock; // 0xA3B4
    long m_writeblock; // 0xA3B8
    long m_dataleft; // 0xA3BC
    __int32 lastpos; // 0xA3C0
    __int32 status; // 0xA3C4
    __int32 filepos; // 0xA3C8
    __int32 playing; // 0xA3CC
    __int32 handle; // 0xA3D0
};
static_assert(sizeof(StreamChannel) == 41940, "Invalid StreamChannel size");

class MixerData
{
public:
    IDirectSound8 *m_lpDirectSound; // 0x0
    IDirectSoundBuffer *m_lpPrimaryBuffer; // 0x4
    IDirectSoundBuffer *m_lpMixBuffer; // 0x8
    float m_masterEQ[256]; // 0xC
    long m_mixerInit; // 0x40C
    float m_timebufferL[512]; // 0x410
    float m_timebufferR[512]; // 0xC10
    float m_temptimeL[512]; // 0x1410
    float m_temptimeR[512]; // 0x1C10
    float m_mixbuffer1L[256]; // 0x2410
    float m_mixbuffer1R[256]; // 0x2810
    float m_mixbuffer2L[256]; // 0x2C10
    float m_mixbuffer2R[256]; // 0x3010
    long m_dctmode; // 0x3410
    long m_dctsize; // 0x3414
    unsigned long m_mixerticks; // 0x3418
    long m_buffersize; // 0x341C
    unsigned long m_dwBlockSize; // 0x3420
    unsigned long m_dwWritePos; // 0x3424
    unsigned long m_dwMixAhead; // 0x3428
    long m_hwnd; // 0x342C
    void *m_hMixerThread; // 0x3430
    void *m_hRunMutex; // 0x3434
    void *m_hStreamerThread; // 0x3438
    void *m_hStreamerMutex; // 0x343C
    Channel *m_channels[64]; // 0x3440
    long m_channelcount; // 0x3540
    StreamChannel *m_streams[8]; // 0x3544
    long m_streamcount; // 0x3564
    float m_cardiod[180]; // 0x3568
    Channel::Status m_status; // 0x3838
};
static_assert(sizeof(MixerData) == 14396, "Invalid MixerData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_100028BE(Channel *const);
_inline void Channel::reset() // 0x100028BE
{
    mangled_assert("?reset@Channel@@QAEXXZ");
    todo("implement");
    _sub_100028BE(this);
}

_extern _sub_10002C99(StreamChannel *const);
_inline StreamChannel::StreamChannel() // 0x10002C99
{
    mangled_assert("??0StreamChannel@@QAE@XZ");
    todo("implement");
    _sub_10002C99(this);
}

_extern void _sub_10003CC9(StreamChannel *const);
_inline void StreamChannel::reset() // 0x10003CC9
{
    mangled_assert("?reset@StreamChannel@@QAEXXZ");
    todo("implement");
    _sub_10003CC9(this);
}

/* ---------- private code */

#endif // __FDAUDIODATA_H__
#endif

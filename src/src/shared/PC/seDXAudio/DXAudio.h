#if 0
#ifndef __DXAUDIO_H__
#define __DXAUDIO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DXAudioDevice :
    public seDevice
{
public:
    DXAudioDevice(DXAudioDevice const &); /* compiler_generated() */
    DXAudioDevice();
    static long const Max_Channels;
    static long const Max_Streams;
    static long const Cardiod_Points;
    static long const EQ_Size;
private:
    ~DXAudioDevice();
public:
    virtual void Release() override;
    virtual long Open(long, char const *, long, long, long, long, long) override;
    virtual void Close() override;
    virtual bool SetMode() override;
    virtual bool DeviceMode(seModeInfo *) override;
    virtual void Update(float) override;
    virtual void FuncSetup(seInterfaceFunc *) override;
    virtual long TimerAddFreq(void (*)(unsigned long), unsigned long, unsigned long) override;
    virtual long TimerAddPeriod(void (*)(unsigned long), float, unsigned long) override;
    virtual bool TimerStart(long) override;
    virtual bool TimerStop(long) override;
    virtual bool TimerRemove(long) override;
    virtual void GetSpeakerConfig() override;
    virtual bool ProviderQuery(char const *) override;
    virtual bool ProviderSupported(char const *) override;
    virtual long ProviderCreate(char const *, long) override;
    virtual void ProviderRelease(long) override;
    virtual long FilterCreate(char const *) override;
    virtual long SetEnvironmentType(long, long, long) override;
    virtual long ListenerCreate(long, long) override;
    virtual void ListenerRelease(long) override;
    virtual void ListenerSetPosition(long, float, float, float) override;
    virtual void ListenerSetOrientation(long, float, float, float, float, float, float) override;
    virtual void ListenerSetVelocity(long, float, float, float) override;
    virtual void ListenerSetDistanceFactor(long, float) override;
    virtual void ListenerSetDopplerFactor(long, float) override;
    virtual void ListenerSetRolloffFactor(long, float) override;
    virtual void ListenerGetPosition(long, float *, float *, float *) override;
    virtual long ChannelAddEOSCallback(long *, long, long, void (*)(unsigned long)) override;
    virtual long ChannelCreate(long *, long, long) override;
    virtual long ChannelRelease(long *, long) override;
    virtual long ChannelReset(long *, long) override;
    virtual long ChannelSetData(long *, long, void *, long, char const *, __int32, __int32, long, long, long) override;
    virtual long ChannelSetDistances(long *, long, float, float) override;
    virtual long ChannelSetCone(long *, long, float, float, float) override;
    virtual long ChannelSetOrientation(long *, long, float, float, float, float, float, float) override;
    virtual long ChannelSetReverb(long *, long, float) override;
    virtual long ChannelSetLoop(long *, long, long, long, long) override;
    virtual long ChannelSetPosition(long *, long, float, float, float, float) override;
    virtual long ChannelSetVelocity(long *, long, float, float, float) override;
    virtual long ChannelSetRate(long *, long, long) override;
    virtual long ChannelSetVolume(long *, long, float) override;
    virtual long ChannelSetSamplePosition(long *, long, long) override;
    virtual long ChannelStart(long *, long, long) override;
    virtual long ChannelStatus(long *, long) override;
    virtual long ChannelStop(long *, long) override;
    virtual long ChannelGetMSPosition(long *, long) override;
    virtual long ChannelGetBytePosition(long *, long) override;
    virtual long ChannelGetMSLength(long *, long) override;
    virtual long ChannelPause(long *, long) override;
    virtual long ChannelResume(long *, long) override;
    virtual long ChannelSetObstruction(long *, long, float) override;
    virtual float ChannelGetObstruction(long *, long) override;
    virtual long ChannelSetOcclusion(long *, long, float) override;
    virtual float ChannelGetOcclusion(long *, long) override;
    virtual long ChannelSetPan(long *, long, float) override;
    virtual long ChannelSetUserData(long *, long, unsigned long, long) override;
    virtual _inline long ChannelGetUserData(long *, long, unsigned long, long *) override;
    virtual long ChannelSetEnvelope(long *, long, SoundParams::EnvelopePoint const *, long) override;
    virtual long ChannelSetEffects(long *, long, SoundParams::EffectContainer const &) override;
    virtual long ChannelSetCardiod(long *, long, float, long, long) override;
    virtual long ChannelSetDopplerFactor(long *, long, float) override;
    virtual long ResamplePCM(void *, long, void *, long) override;
    virtual long ResampledPCMSize(long, long, void *) override;
    virtual void *PlayRawWAVE(char const *, __int32, __int32) override;
    virtual void StopRawWAVE(void *) override;
    virtual long GetPreference(void *, void *) override;
    virtual long SetPreference(void *, void *) override;
private:
    long internalStartDSound(HWND__ *, tWAVEFORMATEX *);
    void internalStopDSound();
    long internalMixerInit(tWAVEFORMATEX *);
    long internalCreateDSoundBuffer(tWAVEFORMATEX *);
    long internalInitMixBuffer(tWAVEFORMATEX *);
    static unsigned __int32 internalMixerThread(void *dummy);
    __int32 internalDoMix(void *, unsigned __int32, void *, unsigned __int32);
    static unsigned __int32 internalStreamerThread(void *dummy);
    long internalChannelOver(Channel *);
    float internalGetPanAngle(vector3);
    void internalCalcVolume(Channel *, float *, float *, float *, unsigned long *);
    long internalCalcShipCardiod(Channel *);
    float internalCalcVelocityFactor(Channel *);
    struct Provider
    {
        long hProvider; // 0x0
        long hListener; // 0x4
    };
    static_assert(sizeof(Provider) == 8, "Invalid Provider size");
    long m_hDriver; // 0x4
    DXAudioDevice::Provider *m_providers; // 0x8
    long m_reverbFilter; // 0xC
    float m_roomType; // 0x10
    long m_numProviders; // 0x14
    vector3 m_listenerPos; // 0x18
    vector3 m_listenerUp; // 0x24
    vector3 m_listenerOrient; // 0x30
    vector3 m_listenerVel; // 0x3C
public:
    DXAudioDevice &operator=(DXAudioDevice const &); /* compiler_generated() */
};
static_assert(sizeof(DXAudioDevice) == 72, "Invalid DXAudioDevice size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline long DXAudioDevice::ChannelGetUserData(long *, long, unsigned long, long *) // 0x10002B05
{
    mangled_assert("?ChannelSetUserData@DXAudioDevice@@UAEJPAJJKJ@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __DXAUDIO_H__
#endif

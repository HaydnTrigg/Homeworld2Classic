#if 0
#ifndef __SENULL_H__
#define __SENULL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NullAudioDevice :
    public seDevice
{
public:
    NullAudioDevice(NullAudioDevice const &); /* compiler_generated() */
    NullAudioDevice();
    virtual void Release() override;
    virtual long Open(long, char const *, long, long, long, long, long) override;
    virtual void Close() override;
    virtual bool SetMode() override;
    virtual bool DeviceMode(seModeInfo *) override;
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
    long ChannelAddEOSCallback(long, long, long, void (*)(unsigned long));
    long ChannelCreate(long, long);
    long ChannelRelease(long, long);
    long ChannelReset(long, long);
    long ChannelSetData(long, long, void *, long, char const *, __int32, __int32, long, long, long);
    long ChannelSetDistances(long, long, float, float);
    long ChannelSetCone(long, long, float, float, float);
    long ChannelSetOrientation(long, long, float, float, float, float, float, float);
    long ChannelSetReverb(long, long, float);
    long ChannelSetLoop(long, long, long, long, long);
    virtual long ChannelSetPosition(long *, long, float, float, float, float) override;
    long ChannelSetVelocity(long, long, float, float, float);
    virtual long ChannelSetVelocity(long *, long, float, float, float) override;
    long ChannelSetRate(long, long, long);
    long ChannelSetVolume(long, long, float);
    virtual long ChannelSetSamplePosition(long *, long, long) override;
    long ChannelStart(long, long, long);
    long ChannelStop(long, long);
    long ChannelStatus(long, long);
    long ChannelGetMSPosition(long, long);
    long ChannelGetBytePosition(long, long);
    long ChannelGetMSLength(long, long);
    long ChannelPause(long, long);
    long ChannelResume(long, long);
    long ChannelSetObstruction(long, long, float);
    float ChannelGetObstruction(long, long);
    long ChannelSetOcclusion(long, long, float);
    float ChannelGetOcclusion(long, long);
    long ChannelSetPan(long, long, float);
    virtual long ChannelSetUserData(long *, long, unsigned long, long) override;
    virtual long ChannelGetUserData(long *, long, unsigned long, long *) override;
    virtual long ChannelSetEnvelope(long *, long, SoundParams::EnvelopePoint const *, long) override;
    virtual long ChannelSetEffects(long *, long, SoundParams::EffectContainer const &) override;
    virtual long ChannelSetCardiod(long *, long, float, long, long) override;
    virtual long ChannelSetDopplerFactor(long *, long, float) override;
    virtual void Update(float) override;
    virtual long ResamplePCM(void *, long, void *, long) override;
    virtual long ResampledPCMSize(long, long, void *) override;
    virtual long GetPreference(void *, void *) override;
    virtual long SetPreference(void *, void *) override;
    virtual void *PlayRawWAVE(char const *, __int32, __int32) override;
    virtual void StopRawWAVE(void *) override;
protected:
    ~NullAudioDevice();
public:
    NullAudioDevice &operator=(NullAudioDevice const &); /* compiler_generated() */
};
static_assert(sizeof(NullAudioDevice) == 4, "Invalid NullAudioDevice size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SENULL_H__
#endif

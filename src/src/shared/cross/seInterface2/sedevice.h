#if 0
#ifndef __SEDEVICE_H__
#define __SEDEVICE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class seDevice
{
public:
    virtual void Release() = 0;
    virtual long Open(long, char const *, long, long, long, long, long) = 0;
    virtual void Close() = 0;
    virtual bool SetMode() = 0;
    virtual bool DeviceMode(seModeInfo *) = 0;
    virtual void Update(float) = 0;
    virtual void FuncSetup(seInterfaceFunc *) = 0;
    virtual long TimerAddFreq(void (*)(unsigned long), unsigned long, unsigned long) = 0;
    virtual long TimerAddPeriod(void (*)(unsigned long), float, unsigned long) = 0;
    virtual bool TimerStart(long) = 0;
    virtual bool TimerStop(long) = 0;
    virtual bool TimerRemove(long) = 0;
    virtual void GetSpeakerConfig() = 0;
    virtual bool ProviderQuery(char const *) = 0;
    virtual bool ProviderSupported(char const *) = 0;
    virtual long ProviderCreate(char const *, long) = 0;
    virtual void ProviderRelease(long) = 0;
    virtual long FilterCreate(char const *) = 0;
    virtual long SetEnvironmentType(long, long, long) = 0;
    virtual long ListenerCreate(long, long) = 0;
    virtual void ListenerRelease(long) = 0;
    virtual void ListenerSetPosition(long, float, float, float) = 0;
    virtual void ListenerSetOrientation(long, float, float, float, float, float, float) = 0;
    virtual void ListenerSetVelocity(long, float, float, float) = 0;
    virtual void ListenerSetDistanceFactor(long, float) = 0;
    virtual void ListenerSetDopplerFactor(long, float) = 0;
    virtual void ListenerSetRolloffFactor(long, float) = 0;
    virtual void ListenerGetPosition(long, float *, float *, float *) = 0;
    virtual long ChannelAddEOSCallback(long *, long, long, void (*)(unsigned long)) = 0;
    virtual long ChannelCreate(long *, long, long) = 0;
    virtual long ChannelRelease(long *, long) = 0;
    virtual long ChannelReset(long *, long) = 0;
    virtual long ChannelSetData(long *, long, void *, long, char const *, __int32, __int32, long, long, long) = 0;
    virtual long ChannelSetDistances(long *, long, float, float) = 0;
    virtual long ChannelSetCone(long *, long, float, float, float) = 0;
    virtual long ChannelSetOrientation(long *, long, float, float, float, float, float, float) = 0;
    virtual long ChannelSetReverb(long *, long, float) = 0;
    virtual long ChannelSetLoop(long *, long, long, long, long) = 0;
    virtual long ChannelSetPosition(long *, long, float, float, float, float) = 0;
    virtual long ChannelSetVelocity(long *, long, float, float, float) = 0;
    virtual long ChannelSetRate(long *, long, long) = 0;
    virtual long ChannelSetVolume(long *, long, float) = 0;
    virtual long ChannelSetSamplePosition(long *, long, long) = 0;
    virtual long ChannelStart(long *, long, long) = 0;
    virtual long ChannelStatus(long *, long) = 0;
    virtual long ChannelStop(long *, long) = 0;
    virtual long ChannelGetMSPosition(long *, long) = 0;
    virtual long ChannelGetBytePosition(long *, long) = 0;
    virtual long ChannelGetMSLength(long *, long) = 0;
    virtual long ChannelPause(long *, long) = 0;
    virtual long ChannelResume(long *, long) = 0;
    virtual long ChannelSetObstruction(long *, long, float) = 0;
    virtual float ChannelGetObstruction(long *, long) = 0;
    virtual long ChannelSetOcclusion(long *, long, float) = 0;
    virtual float ChannelGetOcclusion(long *, long) = 0;
    virtual long ChannelSetPan(long *, long, float) = 0;
    virtual long ChannelSetUserData(long *, long, unsigned long, long) = 0;
    virtual long ChannelGetUserData(long *, long, unsigned long, long *) = 0;
    virtual long ChannelSetEnvelope(long *, long, SoundParams::EnvelopePoint const *, long) = 0;
    virtual long ChannelSetEffects(long *, long, SoundParams::EffectContainer const &) = 0;
    virtual long ChannelSetCardiod(long *, long, float, long, long) = 0;
    virtual long ChannelSetDopplerFactor(long *, long, float) = 0;
    virtual long ResamplePCM(void *, long, void *, long) = 0;
    virtual long ResampledPCMSize(long, long, void *) = 0;
    virtual void *PlayRawWAVE(char const *, __int32, __int32) = 0;
    virtual void StopRawWAVE(void *) = 0;
    virtual long GetPreference(void *, void *) = 0;
    virtual long SetPreference(void *, void *) = 0;
    seDevice(seDevice const &); /* compiler_generated() */
    seDevice(); /* compiler_generated() */
    seDevice &operator=(seDevice const &); /* compiler_generated() */
};
static_assert(sizeof(seDevice) == 4, "Invalid seDevice size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SEDEVICE_H__
#endif

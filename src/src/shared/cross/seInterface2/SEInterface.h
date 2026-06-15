#if 0
#ifndef __SEINTERFACE_H__
#define __SEINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class seInterface
{
public:
    enum SampleType
    {
        ST_UNKNOWN = 0, // 0x0000
        ST_WAVE = 1, // 0x0001
        ST_AIFF = 2, // 0x0002
        ST_MP3 = 3, // 0x0003
        ST_FDA = 4, // 0x0004
        ST_ERROR = -1, // 0xFF
    };
    seInterface(seInterface const &); /* compiler_generated() */
protected:
    seInterface();
    virtual ~seInterface();
public:
    static _inline seInterface *i();
    static long Initialize(char const *driverPath, long hAppWnd, seDestModeInfo *modeinfo, seInterfaceFunc *pfuncs, char const *driverName);
    static bool IsInitialized();
    static void fadeTimerCallback(unsigned long info);
    long CreateDestination(long, char const *, long, long, seDestModeInfo *, bool);
    long DestroyDestination(long);
    bool DestinationSupported(char const *);
    long DestinationChansInUse(long);
    long DestinationStop(long, float);
    void Shutdown();
    bool GetDeviceMode(seModeInfo *);
    __int32 SpeakerMode();
    bool SetSpeakerMode(__int32);
    bool SetMode();
    long SetEnvironmentType(long);
    long SetEnvironmentType(long, long);
    void ListenerSetPosition(long, float, float, float);
    void ListenerSetVelocity(long, float, float, float);
    void ListenerSetOrientation(long, float, float, float, float, float, float);
    void LoadPatchID(PatchID &, char const *);
    void FindPatchID(PatchID &, char const *);
    void NewPatchID(PatchID &);
    void SavePatchID(PatchID &, char const *);
    void LoadSampleID(SampleID &, char const *, long, bool, long *, short *, short *, long *);
    void FindSampleID(SampleID &, char const *);
    void NewSampleID(SampleID &);
    long SampleLoadWAV(char const *, void **, bool, long *, long *, short *, short *, long *, long *, long *, long *, long *);
    void SaveSampleID(SampleID &, char const *);
    void Flush();
    void Reload();
    long ChannelPlay(PatchID const &, float, float, float, float, float, __int32, void (*)(long), long, float, bool);
    long ChannelSetPosition(long, float, float, float, float);
    long ChannelSetVelocity(long, float, float, float);
    long ChannelSetHeading(long, float, float, float);
    long ChannelSetVolume(long, float, float);
    long ChannelSetPitch(long, float, float);
    long ChannelStop(long, float, bool);
    bool ChannelIsPlaying(long);
    bool ChannelIsPaused(long);
    bool ChannelIsLooping(long);
    long FindEnvelope(char *);
    seEnvelope *GetEnvelopePtr(long);
    long AddEnvelope(seEnvelope *);
    void RemoveEnvelope(long);
    long GroupFunc(long, long, long, long, float, float);
    void ChannelStopAll(float);
    long ChannelPause(long, float);
    void ChannelPauseAll(float);
    void ChannelPauseDestination(long, float);
    long ChannelResume(long, float);
    void ChannelResumeAll(float);
    void ChannelResumeDestination(long, float);
    long ChannelSetObstruction(long, float);
    float ChannelGetObstruction(long);
    long ChannelSetOcclusion(long, float);
    float ChannelGetOcclusion(long);
    long ChannelSetPan(long, float);
    long ChannelSetOrientation(long, float, float, float, float, float, float);
    long ChannelSetReverb(long, float);
    long ChannelSetLoop(long, long, long, long);
    long ChannelGetMSPosition(long);
    long ChannelGetBytePosition(long);
    long ChannelGetMSLength(long);
    void Update(float);
    long GetPreference(void *, void *);
    long SetPreference(void *, void *);
    void *PlayRawWAVE(char const *, __int32, __int32);
    void StopRawWAVE(void *);
    seInterface::SampleType GetHeaderWAVE(char const *, long *, short *, short *, long *, long *, short *, long *, long *);
private:
    static seInterface *s_instance;
    class Channel;
    class Destination;
    class Mixer;
    seInterface::Mixer *m_mixerData; // 0x4
    seInterfaceFunc *m_functions; // 0x8
    seInterface::seInterfacePrivate *m_private; // 0xC
    std::vector<seInterface::Callback,std::allocator<seInterface::Callback> > m_callbackfuncs; // 0x10
    class seInterfacePrivate;
    struct Callback
    {
        void (*func)(long); // 0x0
        long handle; // 0x4
    };
    static_assert(sizeof(Callback) == 8, "Invalid Callback size");
    void internalDestinationDestroy(seInterface::Destination *);
    long internalDestinationStop(seInterface::Destination *, float);
    seDevice *FindProvider(char const *);
    std::vector<seDeviceInfo *,std::allocator<seDeviceInfo *> > const &InspectDevices(char const *, char const *);
    bool Open(seDeviceInfo const &, char const *, long);
    bool OpenInternal(seDeviceInfo const &, char const *, long);
    static SampleID PatchSelectSample(PatchID const &pID, __int32 index, long group);
    seInterface::Channel *ChanTranslate(long);
    seInterface::Channel *ChanFind(PatchID &, SampleID);
    bool ChannelSetNonFinitePosition(seInterface::Channel *, float, float, float);
    void CreateGlobalEnvelopeList(void *);
    void DestroyGlobalEnvelopeList();
    long ProcessEnvelope(long, float *, float *, __int32 *, short *, short *);
protected:
    _inline seInterfaceFunc *GetFunctions();
    seInterface::Destination *GetDestination(long);
public:
    seInterface &operator=(seInterface const &); /* compiler_generated() */
};
static_assert(sizeof(seInterface) == 28, "Invalid seInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline seInterfaceFunc *seInterface::GetFunctions() // 0x6C6A84
{
    mangled_assert("?GetFunctions@seInterface@@IAEPAVseInterfaceFunc@@XZ");
    todo("implement");
}

_inline seInterface *seInterface::i() // 0x6BDB4C
{
    mangled_assert("?i@seInterface@@SGPAV1@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SEINTERFACE_H__
#endif

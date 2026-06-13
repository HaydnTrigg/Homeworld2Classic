#if 0
#ifndef __RECORDER_H__
#define __RECORDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Recorder
{
public:
    static void release();
    static Recorder *i();
    enum RecordedGameState
    {
        REC_FILE_LOADED = -1, // 0xFF
        REC_FILE_LOADED_NO_SIZE = -2, // 0xFE
        REC_FILE_NOT_FOUND = -3, // 0xFD
        REC_WRONG_VERSION = -4, // 0xFC
        REC_FILE_SIZE_ERROR = -5, // 0xFB
        REC_OVER = -6, // 0xFA
        REC_OUT_OF_SYNC = -7, // 0xF9
        REC_NULL = -8, // 0xF8
    };
    static bool startRecorderInGame();
    static bool shutdownRecorderInGame();
    static bool shutdown();
    _inline bool isSavingPackets() const;
    _inline bool isPlayingRecordedGame() const;
    bool enableRecorder(bool);
    void saveGameSettings();
    long playRecordedGame(long);
    long getRecordedGameState() const;
    _inline long setRecordedGameState(Recorder::RecordedGameState);
    Recorder::RecordedGameState loadRecordedGame(char const *, bool);
    void savePacket(Order const *);
    unsigned __int32 getLocalPlayerID() const;
    void setLocalPlayerID(unsigned __int32);
    bool saveRecordedGameAs(char const *) const;
    void snapshot(unsigned __int32, bool);
    unsigned __int32 getMaxFrame() const;
    struct RecordPacket
    {
        long m_universeFrame; // 0x0
        unsigned __int32 m_lenBuffer; // 0x4
        char m_buffer[1]; // 0x8
        _inline unsigned __int32 size() const;
    };
    static_assert(sizeof(RecordPacket) == 9, "Invalid RecordPacket size");
    _inline void SwitchPlayer();
    void updateSwitchPlayer();
private:
    Recorder();
    ~Recorder();
    static Recorder *ms_instance;
    enum RecorderState
    {
        REC_OFF = 0,
        REC_PLAYING,
        REC_RECORDING,
    };
    long getRecordSystemVersion() const;
    FileStream *m_packetsFileStream; // 0x0
    bool m_bPlayRecordedGame; // 0x4
    bool m_bSavePackets; // 0x5
    Recorder::RecordedGameState m_recordedGameState; // 0x8
    Recorder::RecorderState m_recorderState; // 0xC
    RecordedGame *m_recordedGame; // 0x10
    bool m_debuggingOutOfSync; // 0x14
    SyncCheckingLevel m_debugOutOfSyncSyncCheckLevel; // 0x18
    unsigned __int32 m_localPlayerID; // 0x1C
    bool m_switchPlayer; // 0x20
    unsigned __int32 (*m_debugOutOfSyncProcessSyncCheck)(bool); // 0x24
};
static_assert(sizeof(Recorder) == 40, "Invalid Recorder size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_463A54(Recorder const *const);
_inline bool Recorder::isSavingPackets() const // 0x463A54
{
    mangled_assert("?isSavingPackets@Recorder@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_463A54(this);
    return __result;
}

_extern bool _sub_450988(Recorder const *const);
_inline bool Recorder::isPlayingRecordedGame() const // 0x450988
{
    mangled_assert("?isPlayingRecordedGame@Recorder@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_450988(this);
    return __result;
}

_extern long _sub_6244D0(Recorder *const, Recorder::RecordedGameState);
_inline long Recorder::setRecordedGameState(Recorder::RecordedGameState) // 0x6244D0
{
    mangled_assert("?setRecordedGameState@Recorder@@QAEJW4RecordedGameState@1@@Z");
    todo("implement");
    long __result = _sub_6244D0(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_624589(Recorder::RecordPacket const *const);
_inline unsigned __int32 Recorder::RecordPacket::size() const // 0x624589
{
    mangled_assert("?size@RecordPacket@Recorder@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_624589(this);
    return __result;
}

_extern void _sub_5C6A31(Recorder *const);
_inline void Recorder::SwitchPlayer() // 0x5C6A31
{
    mangled_assert("?SwitchPlayer@Recorder@@QAEXXZ");
    todo("implement");
    _sub_5C6A31(this);
}

/* ---------- private code */

#endif // __RECORDER_H__
#endif

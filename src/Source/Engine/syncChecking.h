#if 0
#ifndef __SYNCCHECKING_H__
#define __SYNCCHECKING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SyncErrorXferStatus
{
    SyncErrorXfer_notStarted = 0,
    SyncErrorXfer_started,
    SyncErrorXfer_completed,
};

enum SyncCheckingLevel
{
    SYNCLVL_NONE = 0,
    SYNCLVL_MINIMAL_LOG,
    SYNCLVL_EXTREME_TEXT,
    SYNCLVL_EXTREME_FAST,
    SYNCLVL_EXTREME_BINARY,
    SYNCLVL_MAX_NB,
};

/* ---------- definitions */

class SyncCheckObj
{
public:
    SyncCheckObj();
    ~SyncCheckObj();
    SaveGameData *m_saveGameData; // 0x0
    unsigned __int32 m_frame; // 0x4
};
static_assert(sizeof(SyncCheckObj) == 8, "Invalid SyncCheckObj size");

class SyncCheckUser
{
public:
    SyncCheckUser(SyncCheckUser const &); /* compiler_generated() */
    SyncCheckUser();
    ~SyncCheckUser();
    void setDefaultValue();
    _inline __int32 getLastestFrameAck() const;
    unsigned __int32 getID() const;
    _inline bool bManageSyncCheckObj() const;
    _inline void setManageSyncCheckObj(bool);
    bool isOutOfSync() const;
    unsigned __int32 getNbOutOfSync() const;
    __int32 getOutOfSyncFrame() const;
    bool isSyncErrorRecoveryEnable() const;
    SyncErrorXferStatus getTransferStatus() const;
    void setTransferStatus(SyncErrorXferStatus);
protected:
    void subscribe(long);
    void ackFrame(__int32);
    void setOutOfSync(bool, __int32);
    long m_networkID; // 0x0
    __int32 m_lastFrameAck; // 0x4
    bool m_isOutOfSync; // 0x8
    bool m_bManageSyncCheckObj; // 0x9
    __int32 m_outOfSyncFrame; // 0xC
    bool m_enableSyncErrorRecovery; // 0x10
    SyncErrorXferStatus m_transferStatus; // 0x14
    std::vector<int,std::allocator<int> > m_outOfSyncFrameList; // 0x18
    typedef std::vector<int,std::allocator<int> > OutOfSyncFrameList;
public:
    SyncCheckUser &operator=(SyncCheckUser const &); /* compiler_generated() */
};
static_assert(sizeof(SyncCheckUser) == 36, "Invalid SyncCheckUser size");

class SyncChecking
{
public:
    SyncChecking(SyncChecking const &); /* compiler_generated() */
    SyncChecking();
    ~SyncChecking();
    static bool startupInGame();
    static bool shutdownInGame();
    _inline void setForceOutOfSync(__int32);
    _inline __int32 getForceOutOfSync();
    void reset();
    void enableSaveSyncCheckObj(bool);
    bool isSavingSyncCheckObj();
    static void generateSaveGameOutOfSyncFile();
    SyncCheckingLevel getLevel();
    bool setLevel(SyncCheckingLevel);
    static bool isLevelValid(SyncCheckingLevel level);
    static char const *getLevelDescription(SyncCheckingLevel level);
    unsigned __int32 process();
    static unsigned __int32 syncCheckingNone(bool bDummy);
    static unsigned __int32 syncCheckingMinimal(bool bException);
    static unsigned __int32 syncCheckingExtremeCRC(bool bDummy);
    static unsigned __int32 syncCheckingExtremeText(bool bDummy);
    static unsigned __int32 syncCheckingExtremeBinary(bool bDummy);
    bool isSubscribed(SyncCheckUser *);
    void subscribeUser(SyncCheckUser *, long);
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SyncCheckUser *> > > unsubscribeUser(SyncCheckUser *);
    void dumpOutOfSync();
    void ackFrame(SyncCheckUser *, unsigned __int32);
    bool isUserKickedOut();
    void writeToDiskSyncObject();
    bool isSyncErrorRecoveryEnable();
    bool enableSyncErrorRecovery(SyncCheckUser *, bool);
    unsigned __int32 getNbOutOfSyncForAPeriod(SyncCheckUser *, unsigned __int32, unsigned __int32);
    enum SyncCheckType
    {
        Binary = 0,
        Text,
        CRC,
    };
protected:
    static unsigned __int32 syncCheckingExtreme(SyncChecking::SyncCheckType type);
    unsigned __int32 (*m_processSyncCheck)(bool); // 0x0
    SyncCheckingLevel m_level; // 0x4
    std::deque<SyncCheckObj *,std::allocator<SyncCheckObj *> > m_syncCheckObjList; // 0x8
    std::vector<SyncCheckUser *,std::allocator<SyncCheckUser *> > m_syncCheckUserList; // 0x1C
    bool m_bSaveSyncCheckObj; // 0x28
    unsigned __int32 m_writeFrameNb; // 0x2C
    __int32 m_maxSyncCheckObj; // 0x30
    SyncCheckObj m_syncCheckObj; // 0x34
    bool m_userKickedOut; // 0x3C
    __int32 m_forceOutOfSync; // 0x40
    void manageSyncCheckObjList();
    SyncCheckObj *getSyncCheckObj(long);
public:
    SyncChecking &operator=(SyncChecking const &); /* compiler_generated() */
};
static_assert(sizeof(SyncChecking) == 68, "Invalid SyncChecking size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern __int32 _sub_642DE3(SyncCheckUser const *const);
_inline __int32 SyncCheckUser::getLastestFrameAck() const // 0x642DE3
{
    mangled_assert("?getLastestFrameAck@SyncCheckUser@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_642DE3(this);
    return __result;
}

_extern bool _sub_642921(SyncCheckUser const *const);
_inline bool SyncCheckUser::bManageSyncCheckObj() const // 0x642921
{
    mangled_assert("?bManageSyncCheckObj@SyncCheckUser@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_642921(this);
    return __result;
}

_extern void _sub_6432C0(SyncCheckUser *const, bool);
_inline void SyncCheckUser::setManageSyncCheckObj(bool) // 0x6432C0
{
    mangled_assert("?setManageSyncCheckObj@SyncCheckUser@@QAEX_N@Z");
    todo("implement");
    _sub_6432C0(this, arg);
}

_extern void _sub_5C6DF3(SyncChecking *const, __int32);
_inline void SyncChecking::setForceOutOfSync(__int32) // 0x5C6DF3
{
    mangled_assert("?setForceOutOfSync@SyncChecking@@QAEXH@Z");
    todo("implement");
    _sub_5C6DF3(this, arg);
}

_extern __int32 _sub_5C6BE1(SyncChecking *const);
_inline __int32 SyncChecking::getForceOutOfSync() // 0x5C6BE1
{
    mangled_assert("?getForceOutOfSync@SyncChecking@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_5C6BE1(this);
    return __result;
}

/* ---------- private code */

#endif // __SYNCCHECKING_H__
#endif

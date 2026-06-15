#if 0
#ifndef __STEAM_API_H__
#define __STEAM_API_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CCallbackBase
{
public:
    _inline CCallbackBase(CCallbackBase const &); /* compiler_generated() */
    _inline CCallbackBase();
    virtual void Run(void *, bool, unsigned long long) = 0;
    virtual void Run(void *) = 0;
    __int32 GetICallback();
    virtual __int32 GetCallbackSizeBytes() = 0;
    enum
    {
        k_ECallbackFlagsRegistered = 1, // 0x0001
        k_ECallbackFlagsGameServer = 2, // 0x0002
    };
protected:
    unsigned char m_nCallbackFlags; // 0x4
    __int32 m_iCallback; // 0x8
public:
    _inline CCallbackBase &operator=(CCallbackBase const &); /* compiler_generated() */
};
static_assert(sizeof(CCallbackBase) == 12, "Invalid CCallbackBase size");

class CCallResult<SteamPeer,LobbyCreated_t> :
    private CCallbackBase
{
public:
    typedef void *func_t(LobbyCreated_t *, bool);
    _inline CCallResult<SteamPeer,LobbyCreated_t>(CCallResult<SteamPeer,LobbyCreated_t> const &); /* compiler_generated() */
    CCallResult<SteamPeer,LobbyCreated_t>();
    void Set(unsigned long long, SteamPeer *, void *(LobbyCreated_t *, bool));
    bool IsActive() const;
    _inline void Cancel();
    _inline ~CCallResult<SteamPeer,LobbyCreated_t>();
    void SetGameserverFlag();
private:
    virtual _inline void Run(void *, bool, unsigned long long) override;
    virtual _inline void Run(void *) override;
    virtual _inline __int32 GetCallbackSizeBytes() override;
    unsigned long long m_hAPICall; // 0x10
    SteamPeer *m_pObj; // 0x18
    void *m_Func(LobbyCreated_t *, bool); // 0x1C
public:
    _inline CCallResult<SteamPeer,LobbyCreated_t> &operator=(CCallResult<SteamPeer,LobbyCreated_t> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallResult<SteamPeer,LobbyCreated_t>) == 32, "Invalid CCallResult<SteamPeer,LobbyCreated_t> size");

class CCallResult<SteamPeer,LobbyEnter_t> :
    private CCallbackBase
{
public:
    typedef void *func_t(LobbyEnter_t *, bool);
    _inline CCallResult<SteamPeer,LobbyEnter_t>(CCallResult<SteamPeer,LobbyEnter_t> const &); /* compiler_generated() */
    CCallResult<SteamPeer,LobbyEnter_t>();
    void Set(unsigned long long, SteamPeer *, void *(LobbyEnter_t *, bool));
    bool IsActive() const;
    _inline void Cancel();
    _inline ~CCallResult<SteamPeer,LobbyEnter_t>();
    void SetGameserverFlag();
private:
    virtual _inline void Run(void *, bool, unsigned long long) override;
    virtual _inline void Run(void *) override;
    virtual _inline __int32 GetCallbackSizeBytes() override;
    unsigned long long m_hAPICall; // 0x10
    SteamPeer *m_pObj; // 0x18
    void *m_Func(LobbyEnter_t *, bool); // 0x1C
public:
    _inline CCallResult<SteamPeer,LobbyEnter_t> &operator=(CCallResult<SteamPeer,LobbyEnter_t> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallResult<SteamPeer,LobbyEnter_t>) == 32, "Invalid CCallResult<SteamPeer,LobbyEnter_t> size");

class CCallback<SteamPeer,LobbyChatMsg_t,0> :
    protected CCallbackBase
{
public:
    typedef void *func_t(LobbyChatMsg_t *);
    _inline CCallback<SteamPeer,LobbyChatMsg_t,0>(CCallback<SteamPeer,LobbyChatMsg_t,0> const &); /* compiler_generated() */
    CCallback<SteamPeer,LobbyChatMsg_t,0>(SteamPeer *, void *(LobbyChatMsg_t *));
    _inline ~CCallback<SteamPeer,LobbyChatMsg_t,0>();
    void Register(SteamPeer *, void *(LobbyChatMsg_t *));
    _inline void Unregister();
    void SetGameserverFlag();
protected:
    virtual _inline void Run(void *, bool, unsigned long long) override;
    virtual _inline void Run(void *) override;
    virtual _inline __int32 GetCallbackSizeBytes() override;
    SteamPeer *m_pObj; // 0xC
    void *m_Func(LobbyChatMsg_t *); // 0x10
public:
    _inline CCallback<SteamPeer,LobbyChatMsg_t,0> &operator=(CCallback<SteamPeer,LobbyChatMsg_t,0> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallback<SteamPeer,LobbyChatMsg_t,0>) == 20, "Invalid CCallback<SteamPeer,LobbyChatMsg_t,0> size");

class CCallback<SteamPeer,LobbyDataUpdate_t,0> :
    protected CCallbackBase
{
public:
    typedef void *func_t(LobbyDataUpdate_t *);
    _inline CCallback<SteamPeer,LobbyDataUpdate_t,0>(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &); /* compiler_generated() */
    CCallback<SteamPeer,LobbyDataUpdate_t,0>(SteamPeer *, void *(LobbyDataUpdate_t *));
    _inline ~CCallback<SteamPeer,LobbyDataUpdate_t,0>();
    void Register(SteamPeer *, void *(LobbyDataUpdate_t *));
    _inline void Unregister();
    void SetGameserverFlag();
protected:
    virtual _inline void Run(void *, bool, unsigned long long) override;
    virtual _inline void Run(void *) override;
    virtual _inline __int32 GetCallbackSizeBytes() override;
    SteamPeer *m_pObj; // 0xC
    void *m_Func(LobbyDataUpdate_t *); // 0x10
public:
    _inline CCallback<SteamPeer,LobbyDataUpdate_t,0> &operator=(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallback<SteamPeer,LobbyDataUpdate_t,0>) == 20, "Invalid CCallback<SteamPeer,LobbyDataUpdate_t,0> size");

class CCallback<AppObj::Data,ScreenshotRequested_t,0> :
    protected CCallbackBase
{
public:
    typedef void *func_t(ScreenshotRequested_t *);
    CCallback<AppObj::Data,ScreenshotRequested_t,0>(CCallback<AppObj::Data,ScreenshotRequested_t,0> const &); /* compiler_generated() */
    _inline CCallback<AppObj::Data,ScreenshotRequested_t,0>(AppObj::Data *, void *(ScreenshotRequested_t *));
    _inline ~CCallback<AppObj::Data,ScreenshotRequested_t,0>();
    _inline void Register(AppObj::Data *, void *(ScreenshotRequested_t *));
    _inline void Unregister();
    void SetGameserverFlag();
protected:
    virtual _inline void Run(void *, bool, unsigned long long) override;
    virtual _inline void Run(void *) override;
    virtual _inline __int32 GetCallbackSizeBytes() override;
    AppObj::Data *m_pObj; // 0xC
    void *m_Func(ScreenshotRequested_t *); // 0x10
public:
    CCallback<AppObj::Data,ScreenshotRequested_t,0> &operator=(CCallback<AppObj::Data,ScreenshotRequested_t,0> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallback<AppObj::Data,ScreenshotRequested_t,0>) == 20, "Invalid CCallback<AppObj::Data,ScreenshotRequested_t,0> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline CCallbackBase::CCallbackBase() // 0x4F6508
{
    mangled_assert("??0CCallbackBase@@QAE@XZ");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyCreated_t>::Cancel() // 0x44B69C
{
    mangled_assert("?Cancel@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAEXXZ");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyEnter_t>::Cancel() // 0x44B6C1
{
    mangled_assert("?Cancel@?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAEXXZ");
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyCreated_t>::~CCallResult<SteamPeer,LobbyCreated_t>() // 0x44B0CC
{
    mangled_assert("??1?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAE@XZ");
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyEnter_t>::~CCallResult<SteamPeer,LobbyEnter_t>() // 0x44B0D7
{
    mangled_assert("??1?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAE@XZ");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyCreated_t>::Run(void *) // 0x44BDAB
{
    mangled_assert("?Run@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@EAEXPAX@Z");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyEnter_t>::Run(void *) // 0x44BDF0
{
    mangled_assert("?Run@?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@EAEXPAX@Z");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyCreated_t>::Run(void *, bool, unsigned long long) // 0x44BDC3
{
    mangled_assert("?Run@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@EAEXPAX_N_K@Z");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyEnter_t>::Run(void *, bool, unsigned long long) // 0x44BE08
{
    mangled_assert("?Run@?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@EAEXPAX_N_K@Z");
    todo("implement");
}

_inline __int32 CCallResult<SteamPeer,LobbyCreated_t>::GetCallbackSizeBytes() // 0x44BA4C
{
    mangled_assert("?GetCallbackSizeBytes@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@EAEHXZ");
    todo("implement");
}

_inline __int32 CCallResult<SteamPeer,LobbyEnter_t>::GetCallbackSizeBytes() // 0x44BA50
{
    mangled_assert("?GetCallbackSizeBytes@?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@EAEHXZ");
    todo("implement");
}

_inline CCallback<AppObj::Data,ScreenshotRequested_t,0>::CCallback<AppObj::Data,ScreenshotRequested_t,0>(AppObj::Data *, void *(ScreenshotRequested_t *)) // 0x4F62B5
{
    mangled_assert("??0?$CCallback@VData@AppObj@@UScreenshotRequested_t@@$0A@@@QAE@PAVData@AppObj@@P812@AEXPAUScreenshotRequested_t@@@Z@Z");
    todo("implement");
}

_inline CCallback<AppObj::Data,ScreenshotRequested_t,0>::~CCallback<AppObj::Data,ScreenshotRequested_t,0>() // 0x4F65C5
{
    mangled_assert("??1?$CCallback@VData@AppObj@@UScreenshotRequested_t@@$0A@@@QAE@XZ");
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyChatMsg_t,0>::~CCallback<SteamPeer,LobbyChatMsg_t,0>() // 0x44B0E2
{
    mangled_assert("??1?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAE@XZ");
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyDataUpdate_t,0>::~CCallback<SteamPeer,LobbyDataUpdate_t,0>() // 0x44B0F7
{
    mangled_assert("??1?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAE@XZ");
    todo("implement");
}

_inline void CCallback<AppObj::Data,ScreenshotRequested_t,0>::Register(AppObj::Data *, void *(ScreenshotRequested_t *)) // 0x4F6A2A
{
    mangled_assert("?Register@?$CCallback@VData@AppObj@@UScreenshotRequested_t@@$0A@@@QAEXPAVData@AppObj@@P823@AEXPAUScreenshotRequested_t@@@Z@Z");
    todo("implement");
}

_inline void CCallback<AppObj::Data,ScreenshotRequested_t,0>::Unregister() // 0x4F71F2
{
    mangled_assert("?Unregister@?$CCallback@VData@AppObj@@UScreenshotRequested_t@@$0A@@@QAEXXZ");
    todo("implement");
}

_inline void CCallback<SteamPeer,LobbyChatMsg_t,0>::Unregister() // 0x44C158
{
    mangled_assert("?Unregister@?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAEXXZ");
    todo("implement");
}

_inline void CCallback<SteamPeer,LobbyDataUpdate_t,0>::Unregister() // 0x44C161
{
    mangled_assert("?Unregister@?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAEXXZ");
    todo("implement");
}

_inline void CCallback<AppObj::Data,ScreenshotRequested_t,0>::Run(void *) // 0x4F6AD6
{
    mangled_assert("?Run@?$CCallback@VData@AppObj@@UScreenshotRequested_t@@$0A@@@MAEXPAX@Z");
    todo("implement");
}

_inline void CCallback<SteamPeer,LobbyChatMsg_t,0>::Run(void *) // 0x44BE35
{
    mangled_assert("?Run@?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@MAEXPAX@Z");
    todo("implement");
}

_inline void CCallback<SteamPeer,LobbyDataUpdate_t,0>::Run(void *) // 0x44BE4C
{
    mangled_assert("?Run@?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@MAEXPAX@Z");
    todo("implement");
}

_inline void CCallback<AppObj::Data,ScreenshotRequested_t,0>::Run(void *, bool, unsigned long long) // 0x4F6ADE
{
    mangled_assert("?Run@?$CCallback@VData@AppObj@@UScreenshotRequested_t@@$0A@@@MAEXPAX_N_K@Z");
    todo("implement");
}

_inline void CCallback<SteamPeer,LobbyChatMsg_t,0>::Run(void *, bool, unsigned long long) // 0x44BE3D
{
    mangled_assert("?Run@?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@MAEXPAX_N_K@Z");
    todo("implement");
}

_inline void CCallback<SteamPeer,LobbyDataUpdate_t,0>::Run(void *, bool, unsigned long long) // 0x44BE54
{
    mangled_assert("?Run@?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@MAEXPAX_N_K@Z");
    todo("implement");
}

_inline __int32 CCallback<AppObj::Data,ScreenshotRequested_t,0>::GetCallbackSizeBytes() // 0x4F6881
{
    mangled_assert("?GetCallbackSizeBytes@?$CCallback@VData@AppObj@@UScreenshotRequested_t@@$0A@@@MAEHXZ");
    todo("implement");
}

_inline __int32 CCallback<SteamPeer,LobbyChatMsg_t,0>::GetCallbackSizeBytes() // 0x44BA54
{
    mangled_assert("?GetCallbackSizeBytes@?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@MAEHXZ");
    todo("implement");
}

_inline __int32 CCallback<SteamPeer,LobbyDataUpdate_t,0>::GetCallbackSizeBytes() // 0x44BA58
{
    mangled_assert("?GetCallbackSizeBytes@?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@MAEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STEAM_API_H__
/* combined */
#ifndef __STEAM_API_H__
#define __STEAM_API_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CCallbackBase
{
public:
    CCallbackBase(CCallbackBase const &); /* compiler_generated() */
    CCallbackBase();
    virtual void Run(void *, bool, unsigned long long) = 0;
    virtual void Run(void *) = 0;
    __int32 GetICallback();
    virtual __int32 GetCallbackSizeBytes() = 0;
    enum
    {
        k_ECallbackFlagsRegistered = 1, // 0x0001
        k_ECallbackFlagsGameServer = 2, // 0x0002
    };
protected:
    unsigned char m_nCallbackFlags; // 0x4
    __int32 m_iCallback; // 0x8
public:
    CCallbackBase &operator=(CCallbackBase const &); /* compiler_generated() */
};
static_assert(sizeof(CCallbackBase) == 12, "Invalid CCallbackBase size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STEAM_API_H__
/* combined */
#ifndef __STEAM_API_H__
#define __STEAM_API_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CCallbackBase
{
public:
    CCallbackBase(CCallbackBase const &); /* compiler_generated() */
    CCallbackBase();
    virtual void Run(void *, bool, unsigned long long) = 0;
    virtual void Run(void *) = 0;
    __int32 GetICallback();
    virtual __int32 GetCallbackSizeBytes() = 0;
    enum
    {
        k_ECallbackFlagsRegistered = 1, // 0x0001
        k_ECallbackFlagsGameServer = 2, // 0x0002
    };
protected:
    unsigned char m_nCallbackFlags; // 0x4
    __int32 m_iCallback; // 0x8
public:
    CCallbackBase &operator=(CCallbackBase const &); /* compiler_generated() */
};
static_assert(sizeof(CCallbackBase) == 12, "Invalid CCallbackBase size");

class CCallResult<SteamPeer,LobbyCreated_t> :
    private CCallbackBase
{
public:
    typedef void *func_t(LobbyCreated_t *, bool);
    _inline CCallResult<SteamPeer,LobbyCreated_t>(CCallResult<SteamPeer,LobbyCreated_t> const &); /* compiler_generated() */
    _inline CCallResult<SteamPeer,LobbyCreated_t>();
    _inline void Set(unsigned long long, SteamPeer *, void *(LobbyCreated_t *, bool));
    bool IsActive() const;
    _inline void Cancel();
    _inline ~CCallResult<SteamPeer,LobbyCreated_t>();
    void SetGameserverFlag();
private:
    virtual _inline void Run(void *, bool, unsigned long long) override;
    virtual _inline void Run(void *) override;
    virtual _inline __int32 GetCallbackSizeBytes() override;
    unsigned long long m_hAPICall; // 0x10
    SteamPeer *m_pObj; // 0x18
    void *m_Func(LobbyCreated_t *, bool); // 0x1C
public:
    _inline CCallResult<SteamPeer,LobbyCreated_t> &operator=(CCallResult<SteamPeer,LobbyCreated_t> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallResult<SteamPeer,LobbyCreated_t>) == 32, "Invalid CCallResult<SteamPeer,LobbyCreated_t> size");

class CCallResult<SteamPeer,LobbyEnter_t> :
    private CCallbackBase
{
public:
    typedef void *func_t(LobbyEnter_t *, bool);
    _inline CCallResult<SteamPeer,LobbyEnter_t>(CCallResult<SteamPeer,LobbyEnter_t> const &); /* compiler_generated() */
    _inline CCallResult<SteamPeer,LobbyEnter_t>();
    void Set(unsigned long long, SteamPeer *, void *(LobbyEnter_t *, bool));
    bool IsActive() const;
    void Cancel();
    _inline ~CCallResult<SteamPeer,LobbyEnter_t>();
    void SetGameserverFlag();
private:
    virtual void Run(void *, bool, unsigned long long) override;
    virtual void Run(void *) override;
    virtual _inline __int32 GetCallbackSizeBytes() override;
    unsigned long long m_hAPICall; // 0x10
    SteamPeer *m_pObj; // 0x18
    void *m_Func(LobbyEnter_t *, bool); // 0x1C
public:
    CCallResult<SteamPeer,LobbyEnter_t> &operator=(CCallResult<SteamPeer,LobbyEnter_t> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallResult<SteamPeer,LobbyEnter_t>) == 32, "Invalid CCallResult<SteamPeer,LobbyEnter_t> size");

class CCallback<SteamPeer,LobbyChatMsg_t,0> :
    protected CCallbackBase
{
public:
    typedef void *func_t(LobbyChatMsg_t *);
    _inline CCallback<SteamPeer,LobbyChatMsg_t,0>(CCallback<SteamPeer,LobbyChatMsg_t,0> const &); /* compiler_generated() */
    _inline CCallback<SteamPeer,LobbyChatMsg_t,0>(SteamPeer *, void *(LobbyChatMsg_t *));
    _inline ~CCallback<SteamPeer,LobbyChatMsg_t,0>();
    _inline void Register(SteamPeer *, void *(LobbyChatMsg_t *));
    void Unregister();
    void SetGameserverFlag();
protected:
    virtual void Run(void *, bool, unsigned long long) override;
    virtual void Run(void *) override;
    virtual __int32 GetCallbackSizeBytes() override;
    SteamPeer *m_pObj; // 0xC
    void *m_Func(LobbyChatMsg_t *); // 0x10
public:
    CCallback<SteamPeer,LobbyChatMsg_t,0> &operator=(CCallback<SteamPeer,LobbyChatMsg_t,0> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallback<SteamPeer,LobbyChatMsg_t,0>) == 20, "Invalid CCallback<SteamPeer,LobbyChatMsg_t,0> size");

class CCallback<SteamPeer,LobbyDataUpdate_t,0> :
    protected CCallbackBase
{
public:
    typedef void *func_t(LobbyDataUpdate_t *);
    _inline CCallback<SteamPeer,LobbyDataUpdate_t,0>(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &); /* compiler_generated() */
    _inline CCallback<SteamPeer,LobbyDataUpdate_t,0>(SteamPeer *, void *(LobbyDataUpdate_t *));
    _inline ~CCallback<SteamPeer,LobbyDataUpdate_t,0>();
    void Register(SteamPeer *, void *(LobbyDataUpdate_t *));
    void Unregister();
    void SetGameserverFlag();
protected:
    virtual void Run(void *, bool, unsigned long long) override;
    virtual void Run(void *) override;
    virtual __int32 GetCallbackSizeBytes() override;
    SteamPeer *m_pObj; // 0xC
    void *m_Func(LobbyDataUpdate_t *); // 0x10
public:
    CCallback<SteamPeer,LobbyDataUpdate_t,0> &operator=(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallback<SteamPeer,LobbyDataUpdate_t,0>) == 20, "Invalid CCallback<SteamPeer,LobbyDataUpdate_t,0> size");

class CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0> :
    protected CCallbackBase
{
public:
    typedef void *func_t(LobbyMatchList_t *);
    CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>(CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0> const &); /* compiler_generated() */
    _inline CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>(SteamPeer::Dispatch *, void *(LobbyMatchList_t *));
    _inline ~CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>();
    _inline void Register(SteamPeer::Dispatch *, void *(LobbyMatchList_t *));
    void Unregister();
    void SetGameserverFlag();
protected:
    virtual void Run(void *, bool, unsigned long long) override;
    virtual void Run(void *) override;
    virtual _inline __int32 GetCallbackSizeBytes() override;
    SteamPeer::Dispatch *m_pObj; // 0xC
    void *m_Func(LobbyMatchList_t *); // 0x10
public:
    CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0> &operator=(CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>) == 20, "Invalid CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0> size");

class CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0> :
    protected CCallbackBase
{
public:
    typedef void *func_t(LobbyDataUpdate_t *);
    CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>(CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0> const &); /* compiler_generated() */
    _inline CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>(SteamPeer::Dispatch *, void *(LobbyDataUpdate_t *));
    _inline ~CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>();
    _inline void Register(SteamPeer::Dispatch *, void *(LobbyDataUpdate_t *));
    void Unregister();
    void SetGameserverFlag();
protected:
    virtual _inline void Run(void *, bool, unsigned long long) override;
    virtual _inline void Run(void *) override;
    virtual __int32 GetCallbackSizeBytes() override;
    SteamPeer::Dispatch *m_pObj; // 0xC
    void *m_Func(LobbyDataUpdate_t *); // 0x10
public:
    CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0> &operator=(CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0> const &); /* compiler_generated() */
};
static_assert(sizeof(CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>) == 20, "Invalid CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline CCallResult<SteamPeer,LobbyCreated_t>::CCallResult<SteamPeer,LobbyCreated_t>() // 0x100026FF
{
    mangled_assert("??0?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAE@XZ");
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyEnter_t>::CCallResult<SteamPeer,LobbyEnter_t>() // 0x10002759
{
    mangled_assert("??0?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAE@XZ");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyCreated_t>::Set(unsigned long long, SteamPeer *, void *(LobbyCreated_t *, bool)) // 0x10003B4A
{
    mangled_assert("?Set@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAEX_KPAVSteamPeer@@P82@AEXPAULobbyCreated_t@@_N@Z@Z");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyCreated_t>::Cancel() // 0x10002ED3
{
    mangled_assert("?Cancel@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAEXXZ");
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyCreated_t>::~CCallResult<SteamPeer,LobbyCreated_t>() // 0x10002B15
{
    mangled_assert("??1?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAE@XZ");
    todo("implement");
}

_inline CCallResult<SteamPeer,LobbyEnter_t>::~CCallResult<SteamPeer,LobbyEnter_t>() // 0x10002B20
{
    mangled_assert("??1?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAE@XZ");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyCreated_t>::Run(void *) // 0x100038C0
{
    mangled_assert("?Run@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@EAEXPAX@Z");
    todo("implement");
}

_inline void CCallResult<SteamPeer,LobbyCreated_t>::Run(void *, bool, unsigned long long) // 0x10003893
{
    mangled_assert("?Run@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@EAEXPAX_N_K@Z");
    todo("implement");
}

_inline __int32 CCallResult<SteamPeer,LobbyCreated_t>::GetCallbackSizeBytes() // 0x10002F2E
{
    mangled_assert("?GetCallbackSizeBytes@?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@EAEHXZ");
    todo("implement");
}

_inline __int32 CCallResult<SteamPeer,LobbyEnter_t>::GetCallbackSizeBytes() // 0x10002F36
{
    mangled_assert("?GetCallbackSizeBytes@?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@EAEHXZ");
    todo("implement");
}

_inline CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>::CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>(SteamPeer::Dispatch *, void *(LobbyDataUpdate_t *)) // 0x1000277A
{
    mangled_assert("??0?$CCallback@VDispatch@SteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAE@PAVDispatch@SteamPeer@@P812@AEXPAULobbyDataUpdate_t@@@Z@Z");
    todo("implement");
}

_inline CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>::CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>(SteamPeer::Dispatch *, void *(LobbyMatchList_t *)) // 0x100027B0
{
    mangled_assert("??0?$CCallback@VDispatch@SteamPeer@@ULobbyMatchList_t@@$0A@@@QAE@PAVDispatch@SteamPeer@@P812@AEXPAULobbyMatchList_t@@@Z@Z");
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyChatMsg_t,0>::CCallback<SteamPeer,LobbyChatMsg_t,0>(SteamPeer *, void *(LobbyChatMsg_t *)) // 0x10002813
{
    mangled_assert("??0?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAE@PAVSteamPeer@@P81@AEXPAULobbyChatMsg_t@@@Z@Z");
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyDataUpdate_t,0>::CCallback<SteamPeer,LobbyDataUpdate_t,0>(SteamPeer *, void *(LobbyDataUpdate_t *)) // 0x10002876
{
    mangled_assert("??0?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAE@PAVSteamPeer@@P81@AEXPAULobbyDataUpdate_t@@@Z@Z");
    todo("implement");
}

_inline CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>::~CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>() // 0x10002B2B
{
    mangled_assert("??1?$CCallback@VDispatch@SteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAE@XZ");
    todo("implement");
}

_inline CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>::~CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>() // 0x10002B40
{
    mangled_assert("??1?$CCallback@VDispatch@SteamPeer@@ULobbyMatchList_t@@$0A@@@QAE@XZ");
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyChatMsg_t,0>::~CCallback<SteamPeer,LobbyChatMsg_t,0>() // 0x10002B55
{
    mangled_assert("??1?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAE@XZ");
    todo("implement");
}

_inline CCallback<SteamPeer,LobbyDataUpdate_t,0>::~CCallback<SteamPeer,LobbyDataUpdate_t,0>() // 0x10002B6A
{
    mangled_assert("??1?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAE@XZ");
    todo("implement");
}

_inline void CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>::Register(SteamPeer::Dispatch *, void *(LobbyDataUpdate_t *)) // 0x100037B4
{
    mangled_assert("?Register@?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAEXPAVSteamPeer@@P82@AEXPAULobbyDataUpdate_t@@@Z@Z");
    todo("implement");
}

_inline void CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>::Register(SteamPeer::Dispatch *, void *(LobbyMatchList_t *)) // 0x100037F1
{
    mangled_assert("?Register@?$CCallback@VDispatch@SteamPeer@@ULobbyMatchList_t@@$0A@@@QAEXPAVDispatch@SteamPeer@@P823@AEXPAULobbyMatchList_t@@@Z@Z");
    todo("implement");
}

_inline void CCallback<SteamPeer,LobbyChatMsg_t,0>::Register(SteamPeer *, void *(LobbyChatMsg_t *)) // 0x1000382E
{
    mangled_assert("?Register@?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAEXPAVSteamPeer@@P82@AEXPAULobbyChatMsg_t@@@Z@Z");
    todo("implement");
}

_inline void CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>::Run(void *) // 0x100038E7
{
    mangled_assert("?Run@?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@MAEXPAX@Z");
    todo("implement");
}

_inline void CCallback<SteamPeer::Dispatch,LobbyDataUpdate_t,0>::Run(void *, bool, unsigned long long) // 0x100038D8
{
    mangled_assert("?Run@?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@MAEXPAX_N_K@Z");
    todo("implement");
}

_inline __int32 CCallback<SteamPeer::Dispatch,LobbyMatchList_t,0>::GetCallbackSizeBytes() // 0x10002F32
{
    mangled_assert("?GetCallbackSizeBytes@?$CCallback@VDispatch@SteamPeer@@ULobbyMatchList_t@@$0A@@@MAEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STEAM_API_H__
#endif

#if 0
#ifndef __GSHTTP_H__
#define __GSHTTP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSHTTP
{
public:
    enum DownloadStatus
    {
        DS_Invalid = 0,
        DS_HostLookup,
        DS_Connecting,
        DS_SendingRequest,
        DS_Posting,
        DS_Waiting,
        DS_ReceivingStatus,
        DS_ReceivingHeaders,
        DS_ReceivingFile,
        DS_NUMBER,
    };
    enum CompletionResult
    {
        CR_Invalid = 0,
        CR_Success,
        CR_OutOfMemory,
        CR_BufferOverflow,
        CR_ParseURLFailed,
        CR_HostLookupFailed,
        CR_SocketFailed,
        CR_ConnectFailed,
        CR_BadResponse,
        CR_RequestRejected,
        CR_Unauthorized,
        CR_Forbidden,
        CR_FileNotFound,
        CR_ServerError,
        CR_FileWriteFailed,
        CR_FileReadFailed,
        CR_NUMBER,
    };
    static bool Startup();
    static bool Shutdown();
    _inline GSHTTP(GSHTTP const &); /* compiler_generated() */
    GSHTTP();
    ~GSHTTP();
    bool DownloadFile(char const *, char const *);
    bool GetFileSize(char const *);
    void CancelDownload();
    void Think();
    virtual _inline void OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32);
    virtual _inline void OnDownloadComplete(GSHTTP::CompletionResult);
    class Data;
private:
    GSHTTP::Data *m_pimpl; // 0x4
public:
    _inline GSHTTP &operator=(GSHTTP const &); /* compiler_generated() */
};
static_assert(sizeof(GSHTTP) == 8, "Invalid GSHTTP size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10001543(GSHTTP *const, GSHTTP::DownloadStatus, __int32, __int32);
_inline void GSHTTP::OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32) // 0x10001543
{
    mangled_assert("?OnDownloadProgress@GSHTTP@@UAEXW4DownloadStatus@1@HH@Z");
    todo("implement");
    _sub_10001543(this, arg, arg, arg);
}

_extern void _sub_100096FE(GSHTTP *const, GSHTTP::CompletionResult);
_inline void GSHTTP::OnDownloadComplete(GSHTTP::CompletionResult) // 0x100096FE
{
    _sub_100096FE(this, arg);
}

/* ---------- private code */

#endif // __GSHTTP_H__
/* combined */
#ifndef __GSHTTP_H__
#define __GSHTTP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSHTTP
{
public:
    enum DownloadStatus
    {
        DS_Invalid = 0,
        DS_HostLookup,
        DS_Connecting,
        DS_SendingRequest,
        DS_Posting,
        DS_Waiting,
        DS_ReceivingStatus,
        DS_ReceivingHeaders,
        DS_ReceivingFile,
        DS_NUMBER,
    };
    enum CompletionResult
    {
        CR_Invalid = 0,
        CR_Success,
        CR_OutOfMemory,
        CR_BufferOverflow,
        CR_ParseURLFailed,
        CR_HostLookupFailed,
        CR_SocketFailed,
        CR_ConnectFailed,
        CR_BadResponse,
        CR_RequestRejected,
        CR_Unauthorized,
        CR_Forbidden,
        CR_FileNotFound,
        CR_ServerError,
        CR_FileWriteFailed,
        CR_FileReadFailed,
        CR_NUMBER,
    };
    static bool Startup();
    static bool Shutdown();
    _inline GSHTTP(GSHTTP const &); /* compiler_generated() */
    GSHTTP();
    ~GSHTTP();
    bool DownloadFile(char const *, char const *);
    bool GetFileSize(char const *);
    void CancelDownload();
    void Think();
    virtual _inline void OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32);
    virtual _inline void OnDownloadComplete(GSHTTP::CompletionResult);
    class Data;
private:
    GSHTTP::Data *m_pimpl; // 0x4
public:
    _inline GSHTTP &operator=(GSHTTP const &); /* compiler_generated() */
};
static_assert(sizeof(GSHTTP) == 8, "Invalid GSHTTP size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_59EDA5(GSHTTP *const, GSHTTP::DownloadStatus, __int32, __int32);
_inline void GSHTTP::OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32) // 0x59EDA5
{
    mangled_assert("?OnDownloadProgress@GSHTTP@@UAEXW4DownloadStatus@1@HH@Z");
    todo("implement");
    _sub_59EDA5(this, arg, arg, arg);
}

_extern void _sub_59EB1A(GSHTTP *const, GSHTTP::CompletionResult);
_inline void GSHTTP::OnDownloadComplete(GSHTTP::CompletionResult) // 0x59EB1A
{
    mangled_assert("?OnDownloadComplete@GSHTTP@@UAEXW4CompletionResult@1@@Z");
    todo("implement");
    _sub_59EB1A(this, arg);
}

/* ---------- private code */

#endif // __GSHTTP_H__
#endif

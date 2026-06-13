#if 0
#ifndef __GSPATCHER_H__
#define __GSPATCHER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSPatcher
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
    class CheckCallback
    {
    public:
        virtual void OnPatchCheckComplete(bool, bool, char const *, __int32, char const *) = 0;
        CheckCallback(GSPatcher::CheckCallback const &); /* compiler_generated() */
        CheckCallback(); /* compiler_generated() */
        GSPatcher::CheckCallback &operator=(GSPatcher::CheckCallback const &); /* compiler_generated() */
    };
    static_assert(sizeof(CheckCallback) == 4, "Invalid CheckCallback size");
    class DownloadCallback
    {
    public:
        virtual void OnDownloadProgress(GSPatcher::DownloadStatus, __int32, __int32) = 0;
        virtual void OnDownloadComplete(GSPatcher::CompletionResult) = 0;
        DownloadCallback(GSPatcher::DownloadCallback const &); /* compiler_generated() */
        DownloadCallback(); /* compiler_generated() */
        GSPatcher::DownloadCallback &operator=(GSPatcher::DownloadCallback const &); /* compiler_generated() */
    };
    static_assert(sizeof(DownloadCallback) == 4, "Invalid DownloadCallback size");
    static void StartupHTTP();
    static void ShutdownHTTP();
    static bool CheckForPatch(__int32 productID, char const *versionUniqueID, __int32 distributionID, bool bBlocking, GSPatcher::CheckCallback &callback);
    static char const *GetDownloadStatusString(GSPatcher::DownloadStatus ds);
    static char const *GetCompletionResultString(GSPatcher::CompletionResult cr);
    GSPatcher();
    ~GSPatcher();
    void ThinkHTTP();
    bool GetPatchSize(char const *, GSPatcher::DownloadCallback &);
    bool DownloadPatch(char const *, char const *, GSPatcher::DownloadCallback &);
    void CancelDownload();
    class Data;
private:
    GSPatcher::Data *m_pimpl; // 0x0
};
static_assert(sizeof(GSPatcher) == 4, "Invalid GSPatcher size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSPATCHER_H__
/* combined */
#ifndef __GSPATCHER_H__
#define __GSPATCHER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSPatcher
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
    class CheckCallback
    {
    public:
        virtual void OnPatchCheckComplete(bool, bool, char const *, __int32, char const *) = 0;
        CheckCallback(GSPatcher::CheckCallback const &); /* compiler_generated() */
        _inline CheckCallback(); /* compiler_generated() */
        GSPatcher::CheckCallback &operator=(GSPatcher::CheckCallback const &); /* compiler_generated() */
    };
    static_assert(sizeof(CheckCallback) == 4, "Invalid CheckCallback size");
    class DownloadCallback
    {
    public:
        virtual void OnDownloadProgress(GSPatcher::DownloadStatus, __int32, __int32) = 0;
        virtual void OnDownloadComplete(GSPatcher::CompletionResult) = 0;
        DownloadCallback(GSPatcher::DownloadCallback const &); /* compiler_generated() */
        DownloadCallback(); /* compiler_generated() */
        GSPatcher::DownloadCallback &operator=(GSPatcher::DownloadCallback const &); /* compiler_generated() */
    };
    static_assert(sizeof(DownloadCallback) == 4, "Invalid DownloadCallback size");
    static void StartupHTTP();
    static void ShutdownHTTP();
    static bool CheckForPatch(__int32, char const *, __int32, bool, GSPatcher::CheckCallback &);
    static char const *GetDownloadStatusString(GSPatcher::DownloadStatus);
    static char const *GetCompletionResultString(GSPatcher::CompletionResult);
    GSPatcher();
    ~GSPatcher();
    void ThinkHTTP();
    bool GetPatchSize(char const *, GSPatcher::DownloadCallback &);
    bool DownloadPatch(char const *, char const *, GSPatcher::DownloadCallback &);
    void CancelDownload();
    class Data;
private:
    GSPatcher::Data *m_pimpl; // 0x0
};
static_assert(sizeof(GSPatcher) == 4, "Invalid GSPatcher size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSPATCHER_H__
#endif

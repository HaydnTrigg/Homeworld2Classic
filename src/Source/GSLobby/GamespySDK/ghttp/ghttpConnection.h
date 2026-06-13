#if 0
#ifndef __GHTTPCONNECTION_H__
#define __GHTTPCONNECTION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum GHIRequestType
{
    GHIGET = 0,
    GHISAVE,
    GHISTREAM,
    GHIHEAD,
    GHIPOST,
};

enum CRState
{
    CRHeader = 0,
    CRChunk,
    CRCRLF,
    CRFooter,
};

/* ---------- definitions */

struct GHIConnection
{
    GHTTPBool inUse; // 0x0
    __int32 request; // 0x4
    __int32 uniqueID; // 0x8
    GHIRequestType type; // 0xC
    GHTTPState state; // 0x10
    char *URL; // 0x14
    char *serverAddress; // 0x18
    unsigned __int32 serverIP; // 0x1C
    unsigned short serverPort; // 0x20
    char *requestPath; // 0x24
    char *sendHeaders; // 0x28
    _iobuf *saveFile; // 0x2C
    GHTTPBool blocking; // 0x30
    GHTTPResult result; // 0x34
    void (*progressCallback)(__int32, GHTTPState, char const *, __int32, __int32, __int32, void *); // 0x38
    GHTTPBool (*completedCallback)(__int32, GHTTPResult, char *, __int32, void *); // 0x3C
    void *callbackParam; // 0x40
    unsigned __int32 socket; // 0x44
    __int32 socketError; // 0x48
    GHIBuffer sendBuffer; // 0x4C
    GHIBuffer recvBuffer; // 0x6C
    GHIBuffer getFileBuffer; // 0x8C
    GHTTPBool userBufferSupplied; // 0xAC
    __int32 statusMajorVersion; // 0xB0
    __int32 statusMinorVersion; // 0xB4
    __int32 statusCode; // 0xB8
    __int32 statusStringIndex; // 0xBC
    GHTTPBool completed; // 0xC0
    __int32 fileBytesReceived; // 0xC4
    __int32 totalSize; // 0xC8
    char *redirectURL; // 0xCC
    __int32 redirectCount; // 0xD0
    GHTTPBool chunkedTransfer; // 0xD4
    char chunkHeader[11]; // 0xD8
    __int32 chunkHeaderLen; // 0xE4
    __int32 chunkBytesLeft; // 0xE8
    CRState chunkReadingState; // 0xEC
    GHTTPBool processing; // 0xF0
    GHTTPBool connectionClosed; // 0xF4
    GHTTPBool throttle; // 0xF8
    unsigned long lastThrottleRecv; // 0xFC
    GHIPost *post; // 0x100
    GHIPostingState postingState; // 0x104
};
static_assert(sizeof(GHIConnection) == 284, "Invalid GHIConnection size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GHTTPCONNECTION_H__
#endif

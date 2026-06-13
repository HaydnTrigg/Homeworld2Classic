#if 0
#ifndef __GHTTP_H__
#define __GHTTP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum GHTTPBool
{
    GHTTPFalse = 0,
    GHTTPTrue,
};

enum GHTTPState
{
    GHTTPHostLookup = 0,
    GHTTPConnecting,
    GHTTPSendingRequest,
    GHTTPPosting,
    GHTTPWaiting,
    GHTTPReceivingStatus,
    GHTTPReceivingHeaders,
    GHTTPReceivingFile,
};

enum GHTTPResult
{
    GHTTPSuccess = 0,
    GHTTPOutOfMemory,
    GHTTPBufferOverflow,
    GHTTPParseURLFailed,
    GHTTPHostLookupFailed,
    GHTTPSocketFailed,
    GHTTPConnectFailed,
    GHTTPBadResponse,
    GHTTPRequestRejected,
    GHTTPUnauthorized,
    GHTTPForbidden,
    GHTTPFileNotFound,
    GHTTPServerError,
    GHTTPFileWriteFailed,
    GHTTPFileReadFailed,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GHTTP_H__
#endif

#if 0
#ifndef __GHTTPCOMMON_H__
#define __GHTTPCOMMON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum GHIRecvResult
{
    GHIRecvData = 0,
    GHINoData,
    GHIConnClosed,
    GHIError,
};

enum GHITrySendResult
{
    GHITrySendError = 0,
    GHITrySendSent,
    GHITrySendBuffered,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GHTTPCOMMON_H__
#endif

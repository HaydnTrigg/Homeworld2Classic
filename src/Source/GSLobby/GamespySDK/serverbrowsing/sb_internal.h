#if 0
#ifndef __SB_INTERNAL_H__
#define __SB_INTERNAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SBListParseState
{
    pi_cryptheader = 0,
    pi_fixedheader,
    pi_keylist,
    pi_uniquevaluelist,
    pi_servers,
    pi_finished,
};

enum SBServerListState
{
    sl_lanbrowse = 0,
    sl_disconnected,
    sl_connected,
    sl_mainlist,
};

enum SBListCallbackReason
{
    slc_serveradded = 0,
    slc_serverupdated,
    slc_serverdeleted,
    slc_initiallistcomplete,
    slc_disconnected,
    slc_queryerror,
    slc_publicipdetermined,
};

enum SBQueryEngineCallbackReason
{
    qe_updatesuccess = 0,
    qe_updatefailed,
    qe_engineidle,
};

/* ---------- definitions */

struct _SBKeyValuePair
{
    char const *key; // 0x0
    char const *value; // 0x4
};
static_assert(sizeof(_SBKeyValuePair) == 8, "Invalid _SBKeyValuePair size");

struct _SBRefString
{
    char const *str; // 0x0
    __int32 refcount; // 0x4
};
static_assert(sizeof(_SBRefString) == 8, "Invalid _SBRefString size");

struct _KeyInfo
{
    char const *keyName; // 0x0
    __int32 keyType; // 0x4
};
static_assert(sizeof(_KeyInfo) == 8, "Invalid _KeyInfo size");

struct _SBServerList
{
    SBServerListState state; // 0x0
    DArrayImplementation *servers; // 0x4
    DArrayImplementation *keylist; // 0x8
    char queryforgamename[32]; // 0xC
    char queryfromgamename[32]; // 0x2C
    char queryfromkey[32]; // 0x4C
    char mychallenge[8]; // 0x6C
    char *inbuffer; // 0x74
    __int32 inbufferlen; // 0x78
    char const *popularvalues[255]; // 0x7C
    __int32 numpopularvalues; // 0x478
    __int32 expectedelements; // 0x47C
    void (*ListCallback)(_SBServerList *, SBListCallbackReason, _SBServer *, void *); // 0x480
    void *instance; // 0x484
    char *sortkey; // 0x488
    SBBool sortascending; // 0x48C
    unsigned __int32 mypublicip; // 0x490
    unsigned __int32 srcip; // 0x494
    unsigned short defaultport; // 0x498
    char *lasterror; // 0x49C
    unsigned __int32 slsocket; // 0x4A0
    unsigned long lanstarttime; // 0x4A4
    __int32 fromgamever; // 0x4A8
    _GOACryptState cryptkey; // 0x4AC
    __int32 queryoptions; // 0x5B4
    SBListParseState pstate; // 0x5B8
    _SBServer *deadlist; // 0x5BC
};
static_assert(sizeof(_SBServerList) == 1472, "Invalid _SBServerList size");

struct _SBServer
{
    unsigned __int32 publicip; // 0x0
    unsigned short publicport; // 0x4
    unsigned __int32 privateip; // 0x8
    unsigned short privateport; // 0xC
    unsigned __int32 icmpip; // 0x10
    unsigned char state; // 0x14
    unsigned char flags; // 0x15
    HashImplementation *keyvals; // 0x18
    unsigned long updatetime; // 0x1C
    _SBServer *next; // 0x20
};
static_assert(sizeof(_SBServer) == 36, "Invalid _SBServer size");

struct _SBServerFIFO
{
    _SBServer *first; // 0x0
    _SBServer *last; // 0x4
    __int32 count; // 0x8
};
static_assert(sizeof(_SBServerFIFO) == 12, "Invalid _SBServerFIFO size");

struct _SBQueryEngine
{
    __int32 queryversion; // 0x0
    __int32 maxupdates; // 0x4
    _SBServerFIFO querylist; // 0x8
    _SBServerFIFO pendinglist; // 0x14
    unsigned __int32 querysock; // 0x20
    unsigned __int32 mypublicip; // 0x24
    unsigned char serverkeys[20]; // 0x28
    __int32 numserverkeys; // 0x3C
    void (*ListCallback)(_SBQueryEngine *, SBQueryEngineCallbackReason, _SBServer *, void *); // 0x40
    void *instance; // 0x44
};
static_assert(sizeof(_SBQueryEngine) == 72, "Invalid _SBQueryEngine size");

struct _ServerBrowser
{
    _SBQueryEngine engine; // 0x0
    _SBServerList list; // 0x48
    SBBool disconnectFlag; // 0x608
    SBBool dontUpdate; // 0x60C
    unsigned __int32 triggerIP; // 0x610
    unsigned short triggerPort; // 0x614
    void (*BrowserCallback)(_ServerBrowser *, SBCallbackReason, _SBServer *, void *); // 0x618
    void *instance; // 0x61C
};
static_assert(sizeof(_ServerBrowser) == 1568, "Invalid _ServerBrowser size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SB_INTERNAL_H__
#endif

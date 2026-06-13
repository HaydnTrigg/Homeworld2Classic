#if 0
#ifndef __SB_SERVERBROWSING_H__
#define __SB_SERVERBROWSING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SBBool
{
    SBFalse = 0,
    SBTrue,
};

enum SBError
{
    sbe_noerror = 0,
    sbe_socketerror,
    sbe_dnserror,
    sbe_connecterror,
    sbe_dataerror,
    sbe_allocerror,
    sbe_paramerror,
};

enum SBState
{
    sb_disconnected = 0,
    sb_listxfer,
    sb_querying,
    sb_connected,
};

enum SBCallbackReason
{
    sbc_serveradded = 0,
    sbc_serverupdated,
    sbc_serverupdatefailed,
    sbc_serverdeleted,
    sbc_updatecomplete,
    sbc_queryerror,
};

enum SBCompareMode
{
    sbcm_int = 0,
    sbcm_float,
    sbcm_strcase,
    sbcm_stricase,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SB_SERVERBROWSING_H__
#endif

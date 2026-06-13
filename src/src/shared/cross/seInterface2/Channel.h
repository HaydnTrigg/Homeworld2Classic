#if 0
#ifndef __CHANNEL_H__
#define __CHANNEL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6C046F(seInterface::Channel *const, long);
_inline bool seInterface::Channel::Validate(long) // 0x6C046F
{
    mangled_assert("?Validate@Channel@seInterface@@QAE_NJ@Z");
    todo("implement");
    bool __result = _sub_6C046F(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __CHANNEL_H__
#endif

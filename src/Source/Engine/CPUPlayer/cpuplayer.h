#if 0
#ifndef __CPUPLAYER_H__
#define __CPUPLAYER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuPlayer
{
public:
    virtual _inline ~CpuPlayer();
    virtual bool Init(__int32, char const *) = 0;
    virtual bool Shutdown() = 0;
    virtual void Enable(bool) = 0;
    virtual bool IsEnabled() const = 0;
    virtual void Think(float) = 0;
    virtual __int32 GetPlayerID() const = 0;
    virtual bool Save(SaveGameData *, SaveType) = 0;
    virtual bool Restore(SaveGameData *) = 0;
    CpuPlayer(CpuPlayer const &); /* compiler_generated() */
    _inline CpuPlayer(); /* compiler_generated() */
    CpuPlayer &operator=(CpuPlayer const &); /* compiler_generated() */
};
static_assert(sizeof(CpuPlayer) == 4, "Invalid CpuPlayer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_541719(CpuPlayer *const);
_inline CpuPlayer::~CpuPlayer() // 0x541719
{
    mangled_assert("??1CpuPlayer@@UAE@XZ");
    todo("implement");
    _sub_541719(this);
}

/* ---------- private code */

#endif // __CPUPLAYER_H__
#endif

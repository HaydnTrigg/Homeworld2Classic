#if 0
/* ---------- headers */

#include "decomp.h"
#include <SoundManager\pch.h>
#include <SoundManager\SoundEntityHandle.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern SoundEntityHandle SoundEntityHandle::Invalid; // 0x84CB2C

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6CED03(SoundEntityHandle *const);
SoundEntityHandle::SoundEntityHandle() // 0x6CED03
{
    mangled_assert("??0SoundEntityHandle@@QAE@XZ");
    todo("implement");
    _sub_6CED03(this);
}

_extern bool _sub_6CED09(SoundEntityHandle const *const, SoundEntityHandle const &);
bool SoundEntityHandle::operator==(SoundEntityHandle const &) const // 0x6CED09
{
    mangled_assert("??8SoundEntityHandle@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_6CED09(this, arg);
    return __result;
}

_extern bool _sub_6CED19(SoundEntityHandle const *const, SoundEntityHandle const &);
bool SoundEntityHandle::operator!=(SoundEntityHandle const &) const // 0x6CED19
{
    mangled_assert("??9SoundEntityHandle@@QBE_NABV0@@Z");
    todo("implement");
    bool __result = _sub_6CED19(this, arg);
    return __result;
}

/* ---------- private code */
#endif

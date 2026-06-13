#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <utility>
#include <iosfwd>
#include <savegameimpl.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <WeaponFire\WeaponFireEvent.h>
#include <sobid.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const WeaponFireEvent::m_saveToken[0]; // 0x78F6F0
extern SaveData const WeaponFireEvent::m_saveData[4]; // 0x78F700

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4AAFB0(WeaponFireEvent *const, SobID const &, SobID const &, char const *);
WeaponFireEvent::WeaponFireEvent(SobID const &, SobID const &, char const *) // 0x4AAFB0
{
    mangled_assert("??0WeaponFireEvent@@QAE@ABVSobID@@0PBD@Z");
    todo("implement");
    _sub_4AAFB0(this, arg, arg, arg);
}

_extern _sub_4AB010(WeaponFireEvent *const, SaveGameData *);
WeaponFireEvent::WeaponFireEvent(SaveGameData *) // 0x4AB010
{
    mangled_assert("??0WeaponFireEvent@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_4AB010(this, arg);
}

_extern void _sub_4AB06C(WeaponFireEvent *const);
_inline WeaponFireEvent::~WeaponFireEvent() // 0x4AB06C
{
    mangled_assert("??1WeaponFireEvent@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4AB06C(this);
}

_extern void _sub_4AB0DF(WeaponFireEvent *const);
void WeaponFireEvent::postRestore() // 0x4AB0DF
{
    mangled_assert("?postRestore@WeaponFireEvent@@UAEXXZ");
    todo("implement");
    _sub_4AB0DF(this);
}

_extern bool _sub_4AB0E0(WeaponFireEvent *const, SaveGameData *);
bool WeaponFireEvent::restore(SaveGameData *) // 0x4AB0E0
{
    mangled_assert("?restore@WeaponFireEvent@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_4AB0E0(this, arg);
    return __result;
}

_extern bool _sub_4AB11E(WeaponFireEvent *const, SaveGameData *, SaveType);
bool WeaponFireEvent::save(SaveGameData *, SaveType) // 0x4AB11E
{
    mangled_assert("?save@WeaponFireEvent@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_4AB11E(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif

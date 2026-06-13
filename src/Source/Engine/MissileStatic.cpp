#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <Mathlib\mathutil.h>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <iosfwd>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <debug\db.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <sctObjectLoad.h>
#include <MissileStatic.h>
#include <SobWithMeshStatic.h>
#include <wchar.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_488EB5(MissileStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
MissileStatic::MissileStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x488EB5
{
    mangled_assert("??0MissileStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    _sub_488EB5(this, arg, arg);
}

_extern SobStatic *_sub_488F91(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobStatic *);
SobStatic *MissileStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found) // 0x488F91
{
    mangled_assert("?Create@MissileStatic@@SGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV2@@Z");
    todo("implement");
    SobStatic * __result = _sub_488F91(name, found);
    return __result;
}

/* ---------- private code */
#endif

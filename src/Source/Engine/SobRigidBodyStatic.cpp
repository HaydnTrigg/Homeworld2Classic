#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <iosfwd>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <wchar.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4B3381(SobRigidBodyStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
SobRigidBodyStatic::SobRigidBodyStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4B3381
{
    mangled_assert("??0SobRigidBodyStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    _sub_4B3381(this, arg, arg);
}

_extern SobStatic *_sub_4B33D4(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
SobStatic *SobRigidBodyStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobType type) // 0x4B33D4
{
    mangled_assert("?Create@SobRigidBodyStatic@@SGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    SobStatic * __result = _sub_4B33D4(name, type);
    return __result;
}

_extern void _sub_4B33A7(SobRigidBodyStatic *const);
SobRigidBodyStatic::~SobRigidBodyStatic() // 0x4B33A7
{
    mangled_assert("??1SobRigidBodyStatic@@UAE@XZ");
    todo("implement");
    _sub_4B33A7(this);
}

/* ---------- private code */
#endif

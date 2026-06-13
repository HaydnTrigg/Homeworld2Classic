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
#include <sctObjectLoad.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <Sob\Cloud\CloudStatic.h>
#include <sobstatic.h>
#include <wchar.h>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern SobStatic *_sub_4C4689(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobStatic *);
SobStatic *CloudStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found) // 0x4C4689
{
    mangled_assert("?Create@CloudStatic@@SGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV2@@Z");
    todo("implement");
    SobStatic * __result = _sub_4C4689(name, found);
    return __result;
}

_extern _sub_4C464C(CloudStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
CloudStatic::CloudStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4C464C
{
    mangled_assert("??0CloudStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    _sub_4C464C(this, arg, arg);
}

_extern void _sub_4C4668(CloudStatic *const);
_inline CloudStatic::~CloudStatic() // 0x4C4668
{
    mangled_assert("??1CloudStatic@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C4668(this);
}

/* ---------- private code */
#endif

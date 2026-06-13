#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <luaconfig\luaconfig.h>
#include <type_traits>
#include <lua.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <TacticalOverlay.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_types.h>
#include <util\colour.h>
#include <UIGraphic.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <TacticalIcon.h>
#include <prim.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_643BDF(TacticalIcon *const);
TacticalIcon::TacticalIcon() // 0x643BDF
{
    mangled_assert("??0TacticalIcon@@QAE@XZ");
    todo("implement");
    _sub_643BDF(this);
}

_extern void _sub_643BFE(TacticalIcon *const);
TacticalIcon::~TacticalIcon() // 0x643BFE
{
    mangled_assert("??1TacticalIcon@@QAE@XZ");
    todo("implement");
    _sub_643BFE(this);
}

_extern bool _sub_643C53(TacticalIcon *const, char const *, char const *);
bool TacticalIcon::initialize(char const *, char const *) // 0x643C53
{
    mangled_assert("?initialize@TacticalIcon@@QAE_NPBD0@Z");
    todo("implement");
    bool __result = _sub_643C53(this, arg, arg);
    return __result;
}

_extern void _sub_643E2C(TacticalIcon *const, vector4 const *, PrimRectangle const *, float, bool);
void TacticalIcon::render(vector4 const *, PrimRectangle const *, float, bool) // 0x643E2C
{
    mangled_assert("?render@TacticalIcon@@QAEXPBVvector4@@PBUPrimRectangle@@M_N@Z");
    todo("implement");
    _sub_643E2C(this, arg, arg, arg, arg);
}

_extern __int32 _sub_643C89(LuaConfig &);
__int32 TacticalIcon::parseTacticalIcon(LuaConfig &lc) // 0x643C89
{
    mangled_assert("?parseTacticalIcon@TacticalIcon@@SGHAAVLuaConfig@@@Z");
    todo("implement");
    __int32 __result = _sub_643C89(lc);
    return __result;
}

/* ---------- private code */
#endif

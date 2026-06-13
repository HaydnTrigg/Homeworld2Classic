#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <list>
#include <algorithm>
#include <util\types.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <Objects\CoreInventory.h>
#include <Objects\Core.h>
#include <Objects\Objects.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<Core *,std::allocator<Core *> > CoreInventoryType;

/* ---------- prototypes */


_static _inline void release_core(Core *o);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_100331B0(CoreInventory *const, CoreInventory const &);
_inline CoreInventory::CoreInventory(CoreInventory const &) // 0x100331B0
{
    mangled_assert("??0CoreInventory@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_100331B0(this, arg);
}

_extern _sub_100331D0(CoreInventory *const);
CoreInventory::CoreInventory() // 0x100331D0
{
    mangled_assert("??0CoreInventory@@QAE@XZ");
    todo("implement");
    _sub_100331D0(this);
}

_extern void _sub_10033230(std::_List_buy<Core *,std::allocator<Core *> > *const);
_inline std::_List_buy<Core *,std::allocator<Core *> >::~_List_buy<Core *,std::allocator<Core *> >() // 0x10033230
{
    mangled_assert("??1?$_List_buy@PAVCore@@V?$allocator@PAVCore@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10033230(this);
}

_extern void _sub_10033280(CoreInventory *const);
CoreInventory::~CoreInventory() // 0x10033280
{
    mangled_assert("??1CoreInventory@@QAE@XZ");
    todo("implement");
    _sub_10033280(this);
}

_extern CoreInventory &_sub_10033310(CoreInventory *const, CoreInventory const &);
_inline CoreInventory &CoreInventory::operator=(CoreInventory const &) // 0x10033310
{
    mangled_assert("??4CoreInventory@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CoreInventory & __result = _sub_10033310(this, arg);
    return __result;
}

_extern void _sub_100335F0(CoreInventory *const, Core *);
void CoreInventory::add(Core *) // 0x100335F0
{
    mangled_assert("?add@CoreInventory@@QAEXPAVCore@@@Z");
    todo("implement");
    _sub_100335F0(this, arg);
}

_extern void _sub_10033900(CoreInventory *const, Core *);
void CoreInventory::remove(Core *) // 0x10033900
{
    mangled_assert("?remove@CoreInventory@@QAEXPAVCore@@@Z");
    todo("implement");
    _sub_10033900(this, arg);
}

_extern void _sub_10033970(CoreInventory *const);
void CoreInventory::shutdown() // 0x10033970
{
    mangled_assert("?shutdown@CoreInventory@@QAEXXZ");
    todo("implement");
    _sub_10033970(this);
}

/* ---------- private code */

_extern void _sub_100338B0(Core *);
_static _inline void release_core(Core *o) // 0x100338B0
{
    mangled_assert("release_core");
    todo("implement");
    _sub_100338B0(o);
}
#endif

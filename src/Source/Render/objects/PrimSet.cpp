#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Objects\VertexArray.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <xutility>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <gl\r_types.h>
#include <math.h>
#include <list>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <algorithm>
#include <util\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Objects\Constructor.h>
#include <Objects\Objects.h>
#include <Objects\VertexArrayInternal.h>
#include <Objects\PrimSet.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > ListI;

/* ---------- prototypes */

extern __int32 *new_Indices(__int32 nIndices);
extern bool delete_Indices(__int32 *o);

_static _inline void delete_primset(PrimSet *p);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

__int32 *new_Indices(__int32 nIndices) // 0x1008BA40
{
    mangled_assert("?new_Indices@@YGPAHH@Z");
    todo("implement");
}

bool delete_Indices(__int32 *o) // 0x1008B9B0
{
    mangled_assert("?delete_Indices@@YG_NPAH@Z");
    todo("implement");
}

PrimSetList::PrimSetList() // 0x1008B190
{
    mangled_assert("??0PrimSetList@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<PrimSet *,std::allocator<PrimSet *> >::~_List_buy<PrimSet *,std::allocator<PrimSet *> >() // 0x1008B210
{
    mangled_assert("??1?$_List_buy@PAVPrimSet@@V?$allocator@PAVPrimSet@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

PrimSetList::~PrimSetList() // 0x1008B2A0
{
    mangled_assert("??1PrimSetList@@UAE@XZ");
    todo("implement");
}

PrimSetList *PrimSetList::create() // 0x1008B980
{
    mangled_assert("?create@PrimSetList@@SGPAV1@XZ");
    todo("implement");
}

void PrimSetList::add(PrimSet *) // 0x1008B790
{
    mangled_assert("?add@PrimSetList@@QAEXPAVPrimSet@@@Z");
    todo("implement");
}

std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > PrimSetList::begin() // 0x1008B8E0
{
    mangled_assert("?begin@PrimSetList@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVPrimSet@@@std@@@std@@@std@@XZ");
    todo("implement");
}

std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > PrimSetList::end() // 0x1008B9F0
{
    mangled_assert("?end@PrimSetList@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVPrimSet@@@std@@@std@@@std@@XZ");
    todo("implement");
}

PrimSet::PrimSet() // 0x1008B160
{
    mangled_assert("??0PrimSet@@QAE@XZ");
    todo("implement");
}

PrimSet::~PrimSet() // 0x1008B260
{
    mangled_assert("??1PrimSet@@UAE@XZ");
    todo("implement");
}

PrimSet *PrimSet::create() // 0x1008B970
{
    mangled_assert("?create@PrimSet@@SGPAV1@XZ");
    todo("implement");
}

PrimSet::PrimSet(PrimSet const &) // 0x1008B0C0
{
    mangled_assert("??0PrimSet@@QAE@ABV0@@Z");
    todo("implement");
}

PrimSet &PrimSet::operator=(PrimSet const &) // 0x1008B370
{
    mangled_assert("??4PrimSet@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

void PrimSet::assign(PrimSet &, PrimSet const &) // 0x1008B860
{
    mangled_assert("?assign@PrimSet@@AAEXAAV1@ABV1@@Z");
    todo("implement");
}

void PrimSet::clear() // 0x1008B930
{
    mangled_assert("?clear@PrimSet@@QAEXXZ");
    todo("implement");
}

void PrimSet::add(PrimitiveType, __int32, __int32 *, bool) // 0x1008B710
{
    mangled_assert("?add@PrimSet@@QAEXW4PrimitiveType@@HPAH_N@Z");
    todo("implement");
}

bool PrimSet::containsData() const // 0x1008B960
{
    mangled_assert("?containsData@PrimSet@@QBE_NXZ");
    todo("implement");
}

void PrimSet::render(VertexArray *, bool, unsigned __int32, __int32 *) const // 0x1008BAA0
{
    mangled_assert("?render@PrimSet@@QBEXPAVVertexArray@@_NIPAH@Z");
    todo("implement");
}

void PrimSet::renderDirect(VertexArray *, unsigned __int32, __int32 *, __int32 *) const // 0x1008BB10
{
    mangled_assert("?renderDirect@PrimSet@@QBEXPAVVertexArray@@IPAH1@Z");
    todo("implement");
}

void PrimSet::setPrim(PrimitiveType) // 0x1008BC30
{
    mangled_assert("?setPrim@PrimSet@@QAEXW4PrimitiveType@@@Z");
    todo("implement");
}

void PrimSet::setNumIndices(__int32) // 0x1008BC20
{
    mangled_assert("?setNumIndices@PrimSet@@QAEXH@Z");
    todo("implement");
}

void PrimSet::setIndices(__int32 *, bool) // 0x1008BBC0
{
    mangled_assert("?setIndices@PrimSet@@QAEXPAH_N@Z");
    todo("implement");
}

/* ---------- private code */

_static _inline void delete_primset(PrimSet *p) // 0x1008B9D0
{
    mangled_assert("delete_primset");
    todo("implement");
}
#endif

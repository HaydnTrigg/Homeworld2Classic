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

_extern __int32 *_sub_1008BA40(__int32);
__int32 *new_Indices(__int32 nIndices) // 0x1008BA40
{
    mangled_assert("?new_Indices@@YGPAHH@Z");
    todo("implement");
    __int32 * __result = _sub_1008BA40(nIndices);
    return __result;
}

_extern bool _sub_1008B9B0(__int32 *);
bool delete_Indices(__int32 *o) // 0x1008B9B0
{
    mangled_assert("?delete_Indices@@YG_NPAH@Z");
    todo("implement");
    bool __result = _sub_1008B9B0(o);
    return __result;
}

_extern _sub_1008B190(PrimSetList *const);
PrimSetList::PrimSetList() // 0x1008B190
{
    mangled_assert("??0PrimSetList@@QAE@XZ");
    todo("implement");
    _sub_1008B190(this);
}

_extern void _sub_1008B210(std::_List_buy<PrimSet *,std::allocator<PrimSet *> > *const);
_inline std::_List_buy<PrimSet *,std::allocator<PrimSet *> >::~_List_buy<PrimSet *,std::allocator<PrimSet *> >() // 0x1008B210
{
    mangled_assert("??1?$_List_buy@PAVPrimSet@@V?$allocator@PAVPrimSet@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1008B210(this);
}

_extern void _sub_1008B2A0(PrimSetList *const);
PrimSetList::~PrimSetList() // 0x1008B2A0
{
    mangled_assert("??1PrimSetList@@UAE@XZ");
    todo("implement");
    _sub_1008B2A0(this);
}

_extern PrimSetList *_sub_1008B980();
PrimSetList *PrimSetList::create() // 0x1008B980
{
    mangled_assert("?create@PrimSetList@@SGPAV1@XZ");
    todo("implement");
    PrimSetList * __result = _sub_1008B980();
    return __result;
}

_extern void _sub_1008B790(PrimSetList *const, PrimSet *);
void PrimSetList::add(PrimSet *) // 0x1008B790
{
    mangled_assert("?add@PrimSetList@@QAEXPAVPrimSet@@@Z");
    todo("implement");
    _sub_1008B790(this, arg);
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > _sub_1008B8E0(PrimSetList *const);
std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > PrimSetList::begin() // 0x1008B8E0
{
    mangled_assert("?begin@PrimSetList@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVPrimSet@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > __result = _sub_1008B8E0(this);
    return __result;
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > _sub_1008B9F0(PrimSetList *const);
std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > PrimSetList::end() // 0x1008B9F0
{
    mangled_assert("?end@PrimSetList@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVPrimSet@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<PrimSet *> > > __result = _sub_1008B9F0(this);
    return __result;
}

_extern _sub_1008B160(PrimSet *const);
PrimSet::PrimSet() // 0x1008B160
{
    mangled_assert("??0PrimSet@@QAE@XZ");
    todo("implement");
    _sub_1008B160(this);
}

_extern void _sub_1008B260(PrimSet *const);
PrimSet::~PrimSet() // 0x1008B260
{
    mangled_assert("??1PrimSet@@UAE@XZ");
    todo("implement");
    _sub_1008B260(this);
}

_extern PrimSet *_sub_1008B970();
PrimSet *PrimSet::create() // 0x1008B970
{
    mangled_assert("?create@PrimSet@@SGPAV1@XZ");
    todo("implement");
    PrimSet * __result = _sub_1008B970();
    return __result;
}

_extern _sub_1008B0C0(PrimSet *const, PrimSet const &);
PrimSet::PrimSet(PrimSet const &) // 0x1008B0C0
{
    mangled_assert("??0PrimSet@@QAE@ABV0@@Z");
    todo("implement");
    _sub_1008B0C0(this, arg);
}

_extern PrimSet &_sub_1008B370(PrimSet *const, PrimSet const &);
PrimSet &PrimSet::operator=(PrimSet const &) // 0x1008B370
{
    mangled_assert("??4PrimSet@@QAEAAV0@ABV0@@Z");
    todo("implement");
    PrimSet & __result = _sub_1008B370(this, arg);
    return __result;
}

_extern void _sub_1008B860(PrimSet *const, PrimSet &, PrimSet const &);
void PrimSet::assign(PrimSet &, PrimSet const &) // 0x1008B860
{
    mangled_assert("?assign@PrimSet@@AAEXAAV1@ABV1@@Z");
    todo("implement");
    _sub_1008B860(this, arg, arg);
}

_extern void _sub_1008B930(PrimSet *const);
void PrimSet::clear() // 0x1008B930
{
    mangled_assert("?clear@PrimSet@@QAEXXZ");
    todo("implement");
    _sub_1008B930(this);
}

_extern void _sub_1008B710(PrimSet *const, PrimitiveType, __int32, __int32 *, bool);
void PrimSet::add(PrimitiveType, __int32, __int32 *, bool) // 0x1008B710
{
    mangled_assert("?add@PrimSet@@QAEXW4PrimitiveType@@HPAH_N@Z");
    todo("implement");
    _sub_1008B710(this, arg, arg, arg, arg);
}

_extern bool _sub_1008B960(PrimSet const *const);
bool PrimSet::containsData() const // 0x1008B960
{
    mangled_assert("?containsData@PrimSet@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_1008B960(this);
    return __result;
}

_extern void _sub_1008BAA0(PrimSet const *const, VertexArray *, bool, unsigned __int32, __int32 *);
void PrimSet::render(VertexArray *, bool, unsigned __int32, __int32 *) const // 0x1008BAA0
{
    mangled_assert("?render@PrimSet@@QBEXPAVVertexArray@@_NIPAH@Z");
    todo("implement");
    _sub_1008BAA0(this, arg, arg, arg, arg);
}

_extern void _sub_1008BB10(PrimSet const *const, VertexArray *, unsigned __int32, __int32 *, __int32 *);
void PrimSet::renderDirect(VertexArray *, unsigned __int32, __int32 *, __int32 *) const // 0x1008BB10
{
    mangled_assert("?renderDirect@PrimSet@@QBEXPAVVertexArray@@IPAH1@Z");
    todo("implement");
    _sub_1008BB10(this, arg, arg, arg, arg);
}

_extern void _sub_1008BC30(PrimSet *const, PrimitiveType);
void PrimSet::setPrim(PrimitiveType) // 0x1008BC30
{
    mangled_assert("?setPrim@PrimSet@@QAEXW4PrimitiveType@@@Z");
    todo("implement");
    _sub_1008BC30(this, arg);
}

_extern void _sub_1008BC20(PrimSet *const, __int32);
void PrimSet::setNumIndices(__int32) // 0x1008BC20
{
    mangled_assert("?setNumIndices@PrimSet@@QAEXH@Z");
    todo("implement");
    _sub_1008BC20(this, arg);
}

_extern void _sub_1008BBC0(PrimSet *const, __int32 *, bool);
void PrimSet::setIndices(__int32 *, bool) // 0x1008BBC0
{
    mangled_assert("?setIndices@PrimSet@@QAEXPAH_N@Z");
    todo("implement");
    _sub_1008BBC0(this, arg, arg);
}

/* ---------- private code */

_extern void _sub_1008B9D0(PrimSet *);
_static _inline void delete_primset(PrimSet *p) // 0x1008B9D0
{
    mangled_assert("delete_primset");
    todo("implement");
    _sub_1008B9D0(p);
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <vector>
#include <xmemory>
#include <new>
#include <xmemory0>
#include <xstddef>
#include <type_traits>
#include <xstring>
#include <xutility>
#include <utility>
#include <algorithm>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\sePatchInfoList.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::PatchIDInfoLess
{
public:
    bool operator()(PatchID::Info *, PatchID::Info *);
};
static_assert(sizeof(`anonymous-namespace'::PatchIDInfoLess) == 1, "Invalid `anonymous-namespace'::PatchIDInfoLess size");

class `anonymous-namespace'::PatchIDInfoFilenameLess
{
public:
    bool operator()(PatchID::Info *, char const *);
};
static_assert(sizeof(`anonymous-namespace'::PatchIDInfoFilenameLess) == 1, "Invalid `anonymous-namespace'::PatchIDInfoFilenameLess size");

typedef `anonymous-namespace'::PatchIDInfoLess ?A0x8e6e6f70::PatchIDInfoLess;
typedef `anonymous-namespace'::PatchIDInfoFilenameLess ?A0x8e6e6f70::PatchIDInfoFilenameLess;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6C203D(sePatchInfoList *const);
sePatchInfoList::sePatchInfoList() // 0x6C203D
{
    mangled_assert("??0sePatchInfoList@@QAE@XZ");
    todo("implement");
    _sub_6C203D(this);
}

_extern void _sub_6C204F(sePatchInfoList *const);
sePatchInfoList::~sePatchInfoList() // 0x6C204F
{
    mangled_assert("??1sePatchInfoList@@QAE@XZ");
    todo("implement");
    _sub_6C204F(this);
}

_extern void _sub_6C2398(sePatchInfoList *const, PatchID::Info *);
void sePatchInfoList::push_back(PatchID::Info *) // 0x6C2398
{
    mangled_assert("?push_back@sePatchInfoList@@QAEXPAUInfo@PatchID@@@Z");
    todo("implement");
    _sub_6C2398(this, arg);
}

_extern void _sub_6C22B6(sePatchInfoList *const, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > >, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > >);
void sePatchInfoList::erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > >, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > >) // 0x6C22B6
{
    mangled_assert("?erase@sePatchInfoList@@QAEXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAUInfo@PatchID@@@std@@@std@@@std@@0@Z");
    todo("implement");
    _sub_6C22B6(this, arg, arg);
}

_extern void _sub_6C23B9(sePatchInfoList *const);
void sePatchInfoList::sort() // 0x6C23B9
{
    mangled_assert("?sort@sePatchInfoList@@AAEXXZ");
    todo("implement");
    _sub_6C23B9(this);
}

_extern std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > _sub_6C22D8(sePatchInfoList const *const, char const *);
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > sePatchInfoList::find(char const *) const // 0x6C22D8
{
    mangled_assert("?find@sePatchInfoList@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAUInfo@PatchID@@@std@@@std@@@std@@PBD@Z");
    todo("implement");
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > __result = _sub_6C22D8(this, arg);
    return __result;
}

/* ---------- private code */
#endif

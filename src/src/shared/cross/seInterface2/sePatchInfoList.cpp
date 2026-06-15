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
#include "src\Src\Shared\PC\seInterface2\pch.h"
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

sePatchInfoList::sePatchInfoList() // 0x6C203D
{
    mangled_assert("??0sePatchInfoList@@QAE@XZ");
    todo("implement");
}

sePatchInfoList::~sePatchInfoList() // 0x6C204F
{
    mangled_assert("??1sePatchInfoList@@QAE@XZ");
    todo("implement");
}

void sePatchInfoList::push_back(PatchID::Info *) // 0x6C2398
{
    mangled_assert("?push_back@sePatchInfoList@@QAEXPAUInfo@PatchID@@@Z");
    todo("implement");
}

void sePatchInfoList::erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > >, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > >) // 0x6C22B6
{
    mangled_assert("?erase@sePatchInfoList@@QAEXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAUInfo@PatchID@@@std@@@std@@@std@@0@Z");
    todo("implement");
}

void sePatchInfoList::sort() // 0x6C23B9
{
    mangled_assert("?sort@sePatchInfoList@@AAEXXZ");
    todo("implement");
}

std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > sePatchInfoList::find(char const *) const // 0x6C22D8
{
    mangled_assert("?find@sePatchInfoList@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAUInfo@PatchID@@@std@@@std@@@std@@PBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif

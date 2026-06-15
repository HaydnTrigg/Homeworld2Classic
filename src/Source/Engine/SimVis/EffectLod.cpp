#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\FxGL\VarMulti.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <Mathlib\vector3.h>
#include <util\colour.h>
#include <SimVis\EffectLod.h>
#include <algorithm>
#include <Render\FxGL\FXManager.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::Less2P<EffectLod::Entry,float> :
    public std::binary_function<EffectLod::Entry,float,bool>
{
    bool operator()(EffectLod::Entry const &, float const &) const;
};
static_assert(sizeof(`anonymous-namespace'::Less2P<EffectLod::Entry,float>) == 1, "Invalid `anonymous-namespace'::Less2P<EffectLod::Entry,float> size");

typedef `anonymous-namespace'::DistancePred ?A0x6d7fe11c::DistancePred;
typedef `anonymous-namespace'::Less2P<EffectLod::Entry,float> ?A0x6d7fe11c::Less2P<EffectLod::Entry,float>;

class `anonymous-namespace'::DistancePred
{
public:
    bool operator()(EffectLod::Entry const &, EffectLod::Entry const &);
};
static_assert(sizeof(`anonymous-namespace'::DistancePred) == 1, "Invalid `anonymous-namespace'::DistancePred size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

EffectLod::EffectLod() // 0x51B878
{
    mangled_assert("??0EffectLod@@QAE@XZ");
    todo("implement");
}

_inline EffectLod::Entry::Entry(EffectLod::Entry const &) // 0x51B892
{
    mangled_assert("??0Entry@EffectLod@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline EffectLod::Entry::Entry() // 0x51B8AD
{
    mangled_assert("??0Entry@EffectLod@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

EffectLod::~EffectLod() // 0x51B8C3
{
    mangled_assert("??1EffectLod@@QAE@XZ");
    todo("implement");
}

_inline EffectLod::Entry::~Entry() // 0x51B8D6
{
    mangled_assert("??1Entry@EffectLod@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline EffectLod::Entry &EffectLod::Entry::operator=(EffectLod::Entry const &) // 0x51B8DB
{
    mangled_assert("??4Entry@EffectLod@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

void EffectLod::SetName(char const *) // 0x51BAA7
{
    mangled_assert("?SetName@EffectLod@@QAEXPBD@Z");
    todo("implement");
}

void EffectLod::Add(char const *, float) // 0x51B9F8
{
    mangled_assert("?Add@EffectLod@@QAEXPBDM@Z");
    todo("implement");
}

EffectLod::Entry const *EffectLod::Find(float) const // 0x51BA55
{
    mangled_assert("?Find@EffectLod@@QBEPBUEntry@1@M@Z");
    todo("implement");
}

void EffectLod::PrecacheFX() const // 0x51BA7A
{
    mangled_assert("?PrecacheFX@EffectLod@@QBEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif

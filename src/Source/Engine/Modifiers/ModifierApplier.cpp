#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <Modifiers\ModifierEffect.h>
#include <Modifiers\ModifierApplier.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

ModifierApplier::~ModifierApplier() // 0x56E18C
{
    mangled_assert("??1ModifierApplier@@QAE@XZ");
    todo("implement");
}

void ModifierApplier::addEffect(ModifierEffect *) // 0x56E312
{
    mangled_assert("?addEffect@ModifierApplier@@QAEXPAVModifierEffect@@@Z");
    todo("implement");
}

void ModifierApplier::applyModifierEffects(Ship *, vector3 const &, float, std::vector<Selection *,std::allocator<Selection *> > *) const // 0x56E33B
{
    mangled_assert("?applyModifierEffects@ModifierApplier@@QBEXPAVShip@@ABVvector3@@MPAV?$vector@PAVSelection@@V?$allocator@PAVSelection@@@std@@@std@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

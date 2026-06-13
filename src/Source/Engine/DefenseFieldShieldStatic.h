#if 0
#ifndef __DEFENSEFIELDSHIELDSTATIC_H__
#define __DEFENSEFIELDSHIELDSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DefenseFieldShieldStatic
{
public:
    DefenseFieldShieldStatic(DefenseFieldShieldStatic const &); /* compiler_generated() */
    DefenseFieldShieldStatic(float, float, float);
    ModifierApplier m_modifierApplier; // 0x0
    _inline ~DefenseFieldShieldStatic(); /* compiler_generated() */
    DefenseFieldShieldStatic &operator=(DefenseFieldShieldStatic const &); /* compiler_generated() */
};
static_assert(sizeof(DefenseFieldShieldStatic) == 12, "Invalid DefenseFieldShieldStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DEFENSEFIELDSHIELDSTATIC_H__
#endif

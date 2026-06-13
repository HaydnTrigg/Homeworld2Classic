#if 0
#ifndef __DEFENSEFIELDSTATIC_H__
#define __DEFENSEFIELDSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DefenseFieldStatic :
    public SobStatic
{
public:
    virtual ~DefenseFieldStatic() override; /* compiler_generated() */
    DefenseFieldStatic(DefenseFieldStatic const &); /* compiler_generated() */
    DefenseFieldStatic &operator=(DefenseFieldStatic const &); /* compiler_generated() */
};
static_assert(sizeof(DefenseFieldStatic) == 444, "Invalid DefenseFieldStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DEFENSEFIELDSTATIC_H__
#endif

#if 0
#ifndef __SPAN_H__
#define __SPAN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::Span<Sob *> :
    public Collision::BVH<Collision::Internal::Span,Sob *>
{
public:
    Span<Sob *>(); /* compiler_generated() */
    ~Span<Sob *>(); /* compiler_generated() */
};
static_assert(sizeof(Collision::Span<Sob *>) == 160, "Invalid Collision::Span<Sob *> size");

class Collision::Span<Sob> :
    public Collision::BVH<Collision::Internal::Span,Sob>
{
public:
    _inline Span<Sob>(); /* compiler_generated() */
    _inline ~Span<Sob>(); /* compiler_generated() */
};
static_assert(sizeof(Collision::Span<Sob>) == 160, "Invalid Collision::Span<Sob> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SPAN_H__
#endif

#if 0
#ifndef __RENDERABLE_H__
#define __RENDERABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Renderable
{
public:
    virtual ~Renderable();
    virtual void render(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32) const = 0;
    Renderable(Renderable const &); /* compiler_generated() */
    Renderable(); /* compiler_generated() */
    Renderable &operator=(Renderable const &); /* compiler_generated() */
};
static_assert(sizeof(Renderable) == 4, "Invalid Renderable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RENDERABLE_H__
/* combined */
#ifndef __RENDERABLE_H__
#define __RENDERABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Renderable
{
public:
    virtual ~Renderable();
    virtual void render(matrix4 const &, MeshInstance const *, unsigned __int32 const, float const, vector4 const &, __int32) const = 0;
    _inline Renderable(Renderable const &); /* compiler_generated() */
    _inline Renderable(); /* compiler_generated() */
    _inline Renderable &operator=(Renderable const &); /* compiler_generated() */
};
static_assert(sizeof(Renderable) == 4, "Invalid Renderable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RENDERABLE_H__
#endif

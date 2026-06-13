#if 0
#ifndef __FXTIMEINTERFACE_H__
#define __FXTIMEINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXTimeInterface
{
public:
    virtual float getSeconds() const = 0;
    FXTimeInterface(FXTimeInterface const &); /* compiler_generated() */
    FXTimeInterface(); /* compiler_generated() */
    FXTimeInterface &operator=(FXTimeInterface const &); /* compiler_generated() */
};
static_assert(sizeof(FXTimeInterface) == 4, "Invalid FXTimeInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FXTIMEINTERFACE_H__
#endif

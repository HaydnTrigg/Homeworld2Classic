#if 0
#ifndef __APPINTERFACE_H__
#define __APPINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AppInterface
{
protected:
    virtual _inline ~AppInterface();
public:
    virtual char const *Run() = 0;
    AppInterface(AppInterface const &); /* compiler_generated() */
    _inline AppInterface(); /* compiler_generated() */
    AppInterface &operator=(AppInterface const &); /* compiler_generated() */
};
static_assert(sizeof(AppInterface) == 4, "Invalid AppInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline AppInterface::~AppInterface() // 0x4F65FA
{
    mangled_assert("??1AppInterface@@MAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __APPINTERFACE_H__
/* combined */
#ifndef __APPINTERFACE_H__
#define __APPINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AppInterface
{
protected:
    virtual ~AppInterface();
public:
    virtual char const *Run() = 0;
    AppInterface(AppInterface const &); /* compiler_generated() */
    AppInterface(); /* compiler_generated() */
    AppInterface &operator=(AppInterface const &); /* compiler_generated() */
};
static_assert(sizeof(AppInterface) == 4, "Invalid AppInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __APPINTERFACE_H__
#endif

#if 0
#ifndef __NAMEDINTERFACE_H__
#define __NAMEDINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NamedFactory
{
public:
    NamedFactory(NamedFactory const &); /* compiler_generated() */
    NamedFactory();
    virtual ~NamedFactory();
    virtual void *Create(__int32) = 0;
    virtual void *Create() = 0;
    NamedFactory &operator=(NamedFactory const &); /* compiler_generated() */
};
static_assert(sizeof(NamedFactory) == 4, "Invalid NamedFactory size");

class NamedInterface
{
public:
    static NamedInterface *i();
    virtual void *interfaceGet(char const *) = 0;
    virtual NamedFactory *factoryGet(char const *) = 0;
    virtual bool interfaceRegister(char const *, void *) = 0;
    virtual bool factoryRegister(char const *, NamedFactory *) = 0;
    virtual bool interfaceUnregister(char const *) = 0;
    virtual bool factoryUnregister(char const *) = 0;
protected:
    virtual ~NamedInterface();
public:
    NamedInterface(NamedInterface const &); /* compiler_generated() */
    NamedInterface(); /* compiler_generated() */
    NamedInterface &operator=(NamedInterface const &); /* compiler_generated() */
};
static_assert(sizeof(NamedInterface) == 4, "Invalid NamedInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NAMEDINTERFACE_H__
/* combined */
#ifndef __NAMEDINTERFACE_H__
#define __NAMEDINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NamedFactory
{
public:
    NamedFactory(NamedFactory const &); /* compiler_generated() */
    NamedFactory();
    virtual ~NamedFactory();
    virtual void *Create(__int32) = 0;
    virtual void *Create() = 0;
    NamedFactory &operator=(NamedFactory const &); /* compiler_generated() */
};
static_assert(sizeof(NamedFactory) == 4, "Invalid NamedFactory size");

class NamedInterface
{
public:
    static NamedInterface *i();
    virtual void *interfaceGet(char const *) = 0;
    virtual NamedFactory *factoryGet(char const *) = 0;
    virtual bool interfaceRegister(char const *, void *) = 0;
    virtual bool factoryRegister(char const *, NamedFactory *) = 0;
    virtual bool interfaceUnregister(char const *) = 0;
    virtual bool factoryUnregister(char const *) = 0;
protected:
    virtual _inline ~NamedInterface();
public:
    _inline NamedInterface(NamedInterface const &); /* compiler_generated() */
    _inline NamedInterface(); /* compiler_generated() */
    _inline NamedInterface &operator=(NamedInterface const &); /* compiler_generated() */
};
static_assert(sizeof(NamedInterface) == 4, "Invalid NamedInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline NamedInterface::~NamedInterface() // 0x10003183
{
    mangled_assert("??1NamedInterface@@MAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NAMEDINTERFACE_H__
#endif

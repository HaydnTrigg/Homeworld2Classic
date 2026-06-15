#if 0
#ifndef __SHAREDLIBRARYINTERFACE_H__
#define __SHAREDLIBRARYINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SharedLibraryInterface
{
public:
    static SharedLibraryInterface *i();
    virtual bool findSharedLibrary(char const *) = 0;
    virtual void *loadSharedLibrary(char const *) = 0;
    virtual bool freeSharedLibrary(void *) = 0;
    virtual void *loadAndSetupSharedLibrary(char const *, void *, unsigned __int32) = 0;
    virtual __int32 (*getSharedLibraryFunctionAddress(void *, char const *, bool))() = 0;
protected:
    virtual ~SharedLibraryInterface();
public:
    SharedLibraryInterface(SharedLibraryInterface const &); /* compiler_generated() */
    SharedLibraryInterface(); /* compiler_generated() */
    SharedLibraryInterface &operator=(SharedLibraryInterface const &); /* compiler_generated() */
};
static_assert(sizeof(SharedLibraryInterface) == 4, "Invalid SharedLibraryInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHAREDLIBRARYINTERFACE_H__
/* combined */
#ifndef __SHAREDLIBRARYINTERFACE_H__
#define __SHAREDLIBRARYINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SharedLibraryInterface
{
public:
    static SharedLibraryInterface *i();
    virtual bool findSharedLibrary(char const *) = 0;
    virtual void *loadSharedLibrary(char const *) = 0;
    virtual bool freeSharedLibrary(void *) = 0;
    virtual void *loadAndSetupSharedLibrary(char const *, void *, unsigned __int32) = 0;
    virtual __int32 (*getSharedLibraryFunctionAddress(void *, char const *, bool))() = 0;
protected:
    virtual _inline ~SharedLibraryInterface();
public:
    _inline SharedLibraryInterface(SharedLibraryInterface const &); /* compiler_generated() */
    _inline SharedLibraryInterface(); /* compiler_generated() */
    _inline SharedLibraryInterface &operator=(SharedLibraryInterface const &); /* compiler_generated() */
};
static_assert(sizeof(SharedLibraryInterface) == 4, "Invalid SharedLibraryInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SharedLibraryInterface::~SharedLibraryInterface() // 0x10006C04
{
    mangled_assert("??1SharedLibraryInterface@@MAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SHAREDLIBRARYINTERFACE_H__
#endif

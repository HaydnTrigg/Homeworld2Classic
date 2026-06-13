#if 0
#ifndef __SHAREDLIBRARY_H__
#define __SHAREDLIBRARY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SharedLibraryImpl :
    public SharedLibraryInterface
{
public:
    static bool startup();
    static bool shutdown();
    static SharedLibraryImpl *i();
    virtual bool findSharedLibrary(char const *) override;
    virtual void *loadSharedLibrary(char const *) override;
    virtual bool freeSharedLibrary(void *) override;
    virtual void *loadAndSetupSharedLibrary(char const *, void *, unsigned __int32) override;
    virtual __int32 (*getSharedLibraryFunctionAddress(void *, char const *, bool))() override;
    SharedLibraryImpl(SharedLibraryImpl const &); /* compiler_generated() */
protected:
    SharedLibraryImpl();
    virtual ~SharedLibraryImpl() override;
private:
    unsigned __int32 getSharedLibraryID(void *);
protected:
    static SharedLibraryImpl *s_instance;
public:
    SharedLibraryImpl &operator=(SharedLibraryImpl const &); /* compiler_generated() */
};
static_assert(sizeof(SharedLibraryImpl) == 4, "Invalid SharedLibraryImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHAREDLIBRARY_H__
#endif

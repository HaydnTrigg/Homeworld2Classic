#if 0
#ifndef __SEINTERFACEFUNC_H__
#define __SEINTERFACEFUNC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class seInterfaceFunc
{
public:
    typedef unsigned long FHandle;
    enum FileSeekOrigin
    {
        FSEEK_BEGIN = 0,
        FSEEK_CURRENT,
        FSEEK_END,
    };
    virtual PatchBase *PatchCreate(char const *) = 0;
    virtual void PatchDestroy(PatchBase *) = 0;
    virtual void PatchSave(PatchBase const *, char const *) = 0;
    virtual SampleBase *SampleCreate(char const *) = 0;
    virtual void SampleDestroy(SampleBase *) = 0;
    virtual void SampleSave(SampleBase const *, char const *) = 0;
    virtual unsigned long FileOpen(char const *) = 0;
    virtual __int32 FileClose(unsigned long) = 0;
    virtual long FileTell(unsigned long) = 0;
    virtual __int32 FileSeek(unsigned long, __int32, seInterfaceFunc::FileSeekOrigin) = 0;
    virtual unsigned __int32 FileRead(unsigned long, void *, unsigned __int32) = 0;
    virtual bool FileEOF(unsigned long) = 0;
    virtual float Rand() = 0;
    virtual unsigned long RandRange(unsigned long, unsigned long) = 0;
    virtual void *MemAlloc(unsigned __int32) = 0;
    virtual void MemFree(void *) = 0;
    virtual void DbgPrint(char const *, ...) = 0;
    virtual void DbgTrace(char const *, ...) = 0;
    virtual float GetTime() = 0;
    seInterfaceFunc(seInterfaceFunc const &); /* compiler_generated() */
    _inline seInterfaceFunc(); /* compiler_generated() */
    seInterfaceFunc &operator=(seInterfaceFunc const &); /* compiler_generated() */
};
static_assert(sizeof(seInterfaceFunc) == 4, "Invalid seInterfaceFunc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SEINTERFACEFUNC_H__
/* combined */
#ifndef __SEINTERFACEFUNC_H__
#define __SEINTERFACEFUNC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class seInterfaceFunc
{
public:
    typedef unsigned long FHandle;
    enum FileSeekOrigin
    {
        FSEEK_BEGIN = 0,
        FSEEK_CURRENT,
        FSEEK_END,
    };
    virtual PatchBase *PatchCreate(char const *) = 0;
    virtual void PatchDestroy(PatchBase *) = 0;
    virtual void PatchSave(PatchBase const *, char const *) = 0;
    virtual SampleBase *SampleCreate(char const *) = 0;
    virtual void SampleDestroy(SampleBase *) = 0;
    virtual void SampleSave(SampleBase const *, char const *) = 0;
    virtual unsigned long FileOpen(char const *) = 0;
    virtual __int32 FileClose(unsigned long) = 0;
    virtual long FileTell(unsigned long) = 0;
    virtual __int32 FileSeek(unsigned long, __int32, seInterfaceFunc::FileSeekOrigin) = 0;
    virtual unsigned __int32 FileRead(unsigned long, void *, unsigned __int32) = 0;
    virtual bool FileEOF(unsigned long) = 0;
    virtual float Rand() = 0;
    virtual unsigned long RandRange(unsigned long, unsigned long) = 0;
    virtual void *MemAlloc(unsigned __int32) = 0;
    virtual void MemFree(void *) = 0;
    virtual void DbgPrint(char const *, ...) = 0;
    virtual void DbgTrace(char const *, ...) = 0;
    virtual float GetTime() = 0;
    seInterfaceFunc(seInterfaceFunc const &); /* compiler_generated() */
    seInterfaceFunc(); /* compiler_generated() */
    seInterfaceFunc &operator=(seInterfaceFunc const &); /* compiler_generated() */
};
static_assert(sizeof(seInterfaceFunc) == 4, "Invalid seInterfaceFunc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SEINTERFACEFUNC_H__
/* combined */
#ifndef __SEINTERFACEFUNC_H__
#define __SEINTERFACEFUNC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class seInterfaceFunc
{
public:
    typedef unsigned long FHandle;
    enum FileSeekOrigin
    {
        FSEEK_BEGIN = 0,
        FSEEK_CURRENT,
        FSEEK_END,
    };
    virtual PatchBase *PatchCreate(char const *) = 0;
    virtual void PatchDestroy(PatchBase *) = 0;
    virtual void PatchSave(PatchBase const *, char const *) = 0;
    virtual SampleBase *SampleCreate(char const *) = 0;
    virtual void SampleDestroy(SampleBase *) = 0;
    virtual void SampleSave(SampleBase const *, char const *) = 0;
    virtual unsigned long FileOpen(char const *) = 0;
    virtual __int32 FileClose(unsigned long) = 0;
    virtual long FileTell(unsigned long) = 0;
    virtual __int32 FileSeek(unsigned long, __int32, seInterfaceFunc::FileSeekOrigin) = 0;
    virtual unsigned __int32 FileRead(unsigned long, void *, unsigned __int32) = 0;
    virtual bool FileEOF(unsigned long) = 0;
    virtual float Rand() = 0;
    virtual unsigned long RandRange(unsigned long, unsigned long) = 0;
    virtual void *MemAlloc(unsigned __int32) = 0;
    virtual void MemFree(void *) = 0;
    virtual void DbgPrint(char const *, ...) = 0;
    virtual void DbgTrace(char const *, ...) = 0;
    virtual float GetTime() = 0;
    seInterfaceFunc(seInterfaceFunc const &); /* compiler_generated() */
    seInterfaceFunc(); /* compiler_generated() */
    seInterfaceFunc &operator=(seInterfaceFunc const &); /* compiler_generated() */
};
static_assert(sizeof(seInterfaceFunc) == 4, "Invalid seInterfaceFunc size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SEINTERFACEFUNC_H__
#endif

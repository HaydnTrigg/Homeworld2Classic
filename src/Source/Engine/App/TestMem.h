#if 0
#ifndef __TESTMEM_H__
#define __TESTMEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TestMem :
    public Profile::MemHook
{
public:
    static bool Startup();
    static bool Shutdown();
    virtual unsigned __int32 getNumberOfAllocations() const override;
    virtual unsigned __int32 getNumberOfBytesAllocated() const override;
    static TestMem *getInstance();
private:
    static void TestMemoryLibCB(_HMEMPOOL *const &pool, MEMBLOCKINFO const &inf);
    static unsigned __int32 numAllocations;
    static unsigned __int32 amountOfBytes;
    static TestMem s_instance;
public:
    TestMem(TestMem const &); /* compiler_generated() */
    _inline TestMem(); /* compiler_generated() */
    TestMem &operator=(TestMem const &); /* compiler_generated() */
};
static_assert(sizeof(TestMem) == 4, "Invalid TestMem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TESTMEM_H__
#endif

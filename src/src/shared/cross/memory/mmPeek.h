#if 0
#ifndef __MMPEEK_H__
#define __MMPEEK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct MPeekRegion
{
    static char const *REPORT;
    enum Type
    {
        TYPE_FREE = 0,
        TYPE_IMAGE,
        TYPE_MAPPED,
        TYPE_STACK,
        TYPE_PRIVATE,
    };
    unsigned long address; // 0x0
    MPeekRegion::Type type; // 0x4
    unsigned __int32 blocks; // 0x8
    unsigned __int32 sizeRegion; // 0xC
    char filename[512]; // 0x10
};
static_assert(sizeof(MPeekRegion) == 528, "Invalid MPeekRegion size");

struct MPeekBlock
{
    static char const *REPORT;
    enum Flags
    {
        FL_READ = (1 << 0),
        FL_WRITE = (1 << 1),
        FL_EXECUTE = (1 << 2),
        FL_GUARD = (1 << 3),
        FL_NOCACHE = (1 << 4),
        FL_COPY = (1 << 5),
        FL_WRITECOMBINE = (1 << 6),
    };
    unsigned long address; // 0x0
    unsigned long flags; // 0x4
    bool isReserved; // 0x8
    unsigned long size; // 0xC
};
static_assert(sizeof(MPeekBlock) == 16, "Invalid MPeekBlock size");

struct MPeekWSPage
{
    static char const *REPORT;
    unsigned long address; // 0x0
};
static_assert(sizeof(MPeekWSPage) == 4, "Invalid MPeekWSPage size");

struct MPeekHeap
{
    static char const *REPORT;
    unsigned long heap; // 0x0
    bool isDefault; // 0x4
};
static_assert(sizeof(MPeekHeap) == 8, "Invalid MPeekHeap size");

struct MPeekPool
{
    static char const *REPORT;
    unsigned long heap; // 0x0
    char name[256]; // 0x4
};
static_assert(sizeof(MPeekPool) == 260, "Invalid MPeekPool size");

struct MPeekHeapEntry
{
    static char const *REPORT;
    enum State
    {
        HESTATE_BUSY = 0,
        HESTATE_FREE,
        HESTATE_UNCOMMITTED,
    };
    unsigned long heap; // 0x0
    unsigned long address; // 0x4
    unsigned long heapregion; // 0x8
    MPeekHeapEntry::State state; // 0xC
    unsigned __int32 size; // 0x10
};
static_assert(sizeof(MPeekHeapEntry) == 20, "Invalid MPeekHeapEntry size");

struct MPeekHeapRegion
{
    static char const *REPORT;
    unsigned long heap; // 0x0
    unsigned long address; // 0x4
    unsigned __int32 sizeRegion; // 0x8
    unsigned __int32 sizeCommitted; // 0xC
    unsigned __int32 sizeUncommitted; // 0x10
};
static_assert(sizeof(MPeekHeapRegion) == 20, "Invalid MPeekHeapRegion size");

struct MPeekSmallChunk
{
    static char const *REPORT;
    char name[256]; // 0x0
    unsigned __int32 size; // 0x100
    unsigned long address; // 0x104
    unsigned __int32 sizeRegion; // 0x108
    unsigned __int32 sizeUsed; // 0x10C
    unsigned __int32 countAllocated; // 0x110
    unsigned __int32 countFree; // 0x114
};
static_assert(sizeof(MPeekSmallChunk) == 280, "Invalid MPeekSmallChunk size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MMPEEK_H__
#endif

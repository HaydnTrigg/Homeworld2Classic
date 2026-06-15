#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <Render\Table.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern long TableMakeSize(TableHeader **ppTabHdr, __int32 num, __int32 elsize);
extern void TableSetCount(TableHeader **ppTabHdr, __int32 n, __int32 elsize);
extern long TableInsertAt(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize, __int32 extra);
extern long TableCopy(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize);
extern long TableDelete(TableHeader **ppTabHdr, __int32 starting, __int32 num, __int32 elsize);

_static void Resize(TableHeader **ppTabHdr, __int32 num, __int32 elsize);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

long TableMakeSize(TableHeader **ppTabHdr, __int32 num, __int32 elsize) // 0x643B7D
{
    mangled_assert("?TableMakeSize@@YGJPAPAUTableHeader@@HH@Z");
    todo("implement");
}

void TableSetCount(TableHeader **ppTabHdr, __int32 n, __int32 elsize) // 0x643BAA
{
    mangled_assert("?TableSetCount@@YGXPAPAUTableHeader@@HH@Z");
    todo("implement");
}

long TableInsertAt(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize, __int32 extra) // 0x643ACF
{
    mangled_assert("?TableInsertAt@@YGJPAPAUTableHeader@@HHPAXHH@Z");
    todo("implement");
}

long TableCopy(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize) // 0x643A45
{
    mangled_assert("?TableCopy@@YGJPAPAUTableHeader@@HHPAXH@Z");
    todo("implement");
}

long TableDelete(TableHeader **ppTabHdr, __int32 starting, __int32 num, __int32 elsize) // 0x643A74
{
    mangled_assert("?TableDelete@@YGJPAPAUTableHeader@@HHH@Z");
    todo("implement");
}

/* ---------- private code */

_static void Resize(TableHeader **ppTabHdr, __int32 num, __int32 elsize) // 0x6439AD
{
    mangled_assert("Resize");
    todo("implement");
}
/* combined */
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <Table.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern long TableMakeSize(TableHeader **ppTabHdr, __int32 num, __int32 elsize);
extern void TableSetCount(TableHeader **ppTabHdr, __int32 n, __int32 elsize);
extern long TableInsertAt(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize, __int32 extra);
extern long TableCopy(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize);
extern long TableDelete(TableHeader **ppTabHdr, __int32 starting, __int32 num, __int32 elsize);

_static void Resize(TableHeader **ppTabHdr, __int32 num, __int32 elsize);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

long TableMakeSize(TableHeader **ppTabHdr, __int32 num, __int32 elsize) // 0x1009DB30
{
    mangled_assert("?TableMakeSize@@YGJPAPAUTableHeader@@HH@Z");
    todo("implement");
}

void TableSetCount(TableHeader **ppTabHdr, __int32 n, __int32 elsize) // 0x1009DB70
{
    mangled_assert("?TableSetCount@@YGXPAPAUTableHeader@@HH@Z");
    todo("implement");
}

long TableInsertAt(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize, __int32 extra) // 0x1009DA80
{
    mangled_assert("?TableInsertAt@@YGJPAPAUTableHeader@@HHPAXHH@Z");
    todo("implement");
}

long TableCopy(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize) // 0x1009D9C0
{
    mangled_assert("?TableCopy@@YGJPAPAUTableHeader@@HHPAXH@Z");
    todo("implement");
}

long TableDelete(TableHeader **ppTabHdr, __int32 starting, __int32 num, __int32 elsize) // 0x1009DA10
{
    mangled_assert("?TableDelete@@YGJPAPAUTableHeader@@HHH@Z");
    todo("implement");
}

/* ---------- private code */

_static void Resize(TableHeader **ppTabHdr, __int32 num, __int32 elsize) // 0x1009D910
{
    mangled_assert("Resize");
    todo("implement");
}
#endif

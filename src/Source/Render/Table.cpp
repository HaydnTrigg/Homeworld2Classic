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

_extern long _sub_643B7D(TableHeader **, __int32, __int32);
long TableMakeSize(TableHeader **ppTabHdr, __int32 num, __int32 elsize) // 0x643B7D
{
    mangled_assert("?TableMakeSize@@YGJPAPAUTableHeader@@HH@Z");
    todo("implement");
    long __result = _sub_643B7D(ppTabHdr, num, elsize);
    return __result;
}

_extern void _sub_643BAA(TableHeader **, __int32, __int32);
void TableSetCount(TableHeader **ppTabHdr, __int32 n, __int32 elsize) // 0x643BAA
{
    mangled_assert("?TableSetCount@@YGXPAPAUTableHeader@@HH@Z");
    todo("implement");
    _sub_643BAA(ppTabHdr, n, elsize);
}

_extern long _sub_643ACF(TableHeader **, __int32, __int32, void *, __int32, __int32);
long TableInsertAt(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize, __int32 extra) // 0x643ACF
{
    mangled_assert("?TableInsertAt@@YGJPAPAUTableHeader@@HHPAXHH@Z");
    todo("implement");
    long __result = _sub_643ACF(ppTabHdr, at, num, el, elsize, extra);
    return __result;
}

_extern long _sub_643A45(TableHeader **, __int32, __int32, void *, __int32);
long TableCopy(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize) // 0x643A45
{
    mangled_assert("?TableCopy@@YGJPAPAUTableHeader@@HHPAXH@Z");
    todo("implement");
    long __result = _sub_643A45(ppTabHdr, at, num, el, elsize);
    return __result;
}

_extern long _sub_643A74(TableHeader **, __int32, __int32, __int32);
long TableDelete(TableHeader **ppTabHdr, __int32 starting, __int32 num, __int32 elsize) // 0x643A74
{
    mangled_assert("?TableDelete@@YGJPAPAUTableHeader@@HHH@Z");
    todo("implement");
    long __result = _sub_643A74(ppTabHdr, starting, num, elsize);
    return __result;
}

/* ---------- private code */

_extern void _sub_6439AD(TableHeader **, __int32, __int32);
_static void Resize(TableHeader **ppTabHdr, __int32 num, __int32 elsize) // 0x6439AD
{
    mangled_assert("Resize");
    todo("implement");
    _sub_6439AD(ppTabHdr, num, elsize);
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

_extern long _sub_1009DB30(TableHeader **, __int32, __int32);
long TableMakeSize(TableHeader **ppTabHdr, __int32 num, __int32 elsize) // 0x1009DB30
{
    mangled_assert("?TableMakeSize@@YGJPAPAUTableHeader@@HH@Z");
    todo("implement");
    long __result = _sub_1009DB30(ppTabHdr, num, elsize);
    return __result;
}

_extern void _sub_1009DB70(TableHeader **, __int32, __int32);
void TableSetCount(TableHeader **ppTabHdr, __int32 n, __int32 elsize) // 0x1009DB70
{
    mangled_assert("?TableSetCount@@YGXPAPAUTableHeader@@HH@Z");
    todo("implement");
    _sub_1009DB70(ppTabHdr, n, elsize);
}

_extern long _sub_1009DA80(TableHeader **, __int32, __int32, void *, __int32, __int32);
long TableInsertAt(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize, __int32 extra) // 0x1009DA80
{
    mangled_assert("?TableInsertAt@@YGJPAPAUTableHeader@@HHPAXHH@Z");
    todo("implement");
    long __result = _sub_1009DA80(ppTabHdr, at, num, el, elsize, extra);
    return __result;
}

_extern long _sub_1009D9C0(TableHeader **, __int32, __int32, void *, __int32);
long TableCopy(TableHeader **ppTabHdr, __int32 at, __int32 num, void *el, __int32 elsize) // 0x1009D9C0
{
    mangled_assert("?TableCopy@@YGJPAPAUTableHeader@@HHPAXH@Z");
    todo("implement");
    long __result = _sub_1009D9C0(ppTabHdr, at, num, el, elsize);
    return __result;
}

_extern long _sub_1009DA10(TableHeader **, __int32, __int32, __int32);
long TableDelete(TableHeader **ppTabHdr, __int32 starting, __int32 num, __int32 elsize) // 0x1009DA10
{
    mangled_assert("?TableDelete@@YGJPAPAUTableHeader@@HHH@Z");
    todo("implement");
    long __result = _sub_1009DA10(ppTabHdr, starting, num, elsize);
    return __result;
}

/* ---------- private code */

_extern void _sub_1009D910(TableHeader **, __int32, __int32);
_static void Resize(TableHeader **ppTabHdr, __int32 num, __int32 elsize) // 0x1009D910
{
    mangled_assert("Resize");
    todo("implement");
    _sub_1009D910(ppTabHdr, num, elsize);
}
#endif

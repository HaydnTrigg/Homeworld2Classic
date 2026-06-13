#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <xutility>
#include <prim2d.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void primTriSolid2(triangle *tri, __int32 c);
extern void primTriOutline2(triangle *tri, __int32 thickness, __int32 c);
extern void primRectUnion2(oldRect *result, oldRect *r0, oldRect *r1);
extern void primRealRectUnion2(realrectangle *result, realrectangle *r0, realrectangle *r1);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_620953(triangle *, __int32);
void primTriSolid2(triangle *tri, __int32 c) // 0x620953
{
    mangled_assert("?primTriSolid2@@YGXPAUtriangle@@H@Z");
    todo("implement");
    _sub_620953(tri, c);
}

_extern void _sub_620950(triangle *, __int32, __int32);
void primTriOutline2(triangle *tri, __int32 thickness, __int32 c) // 0x620950
{
    mangled_assert("?primTriOutline2@@YGXPAUtriangle@@HH@Z");
    todo("implement");
    _sub_620950(tri, thickness, c);
}

_extern void _sub_6208D2(oldRect *, oldRect *, oldRect *);
void primRectUnion2(oldRect *result, oldRect *r0, oldRect *r1) // 0x6208D2
{
    mangled_assert("?primRectUnion2@@YGXPAUoldRect@@00@Z");
    todo("implement");
    _sub_6208D2(result, r0, r1);
}

_extern void _sub_620843(realrectangle *, realrectangle *, realrectangle *);
void primRealRectUnion2(realrectangle *result, realrectangle *r0, realrectangle *r1) // 0x620843
{
    mangled_assert("?primRealRectUnion2@@YGXPAUrealrectangle@@00@Z");
    todo("implement");
    _sub_620843(result, r0, r1);
}

/* ---------- private code */
#endif

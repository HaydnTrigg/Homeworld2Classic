#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <math.h>
#include <util\types.h>
#include <Mathlib\vector3.h>
#include <Objects\Objects.h>
#include <Objects\BoundBox.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern float BoundBoxArea(vector3 &min, vector3 &max, vector3 &eye, matrix4 &view);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern __int32 const indexlist[64][7]; // 0x100E37C0
}

/* ---------- public code */

_extern float _sub_10027CA0(vector3 &, vector3 &, vector3 &, matrix4 &);
float BoundBoxArea(vector3 &min, vector3 &max, vector3 &eye, matrix4 &view) // 0x10027CA0
{
    mangled_assert("?BoundBoxArea@@YGMAAVvector3@@00AAVmatrix4@@@Z");
    todo("implement");
    float __result = _sub_10027CA0(min, max, eye, view);
    return __result;
}

/* ---------- private code */
#endif

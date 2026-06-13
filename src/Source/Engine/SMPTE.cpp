#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Render\objects\cliprect.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\mathutil.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <xutility>
#include <utility>
#include <Render\objects\fontsystem.h>
#include <iosfwd>
#include <vector>
#include <Render\objects\objects.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <xhash>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Render\objects\compiledtext.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <util\colour.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>
#include <SMPTE.h>
#include <Render\gl\r_types.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *NUMBER_Strings[10]; // 0x83D474
}

/* ---------- public code */

_extern _sub_6385F8(SMPTE *const);
SMPTE::SMPTE() // 0x6385F8
{
    mangled_assert("??0SMPTE@@QAE@XZ");
    todo("implement");
    _sub_6385F8(this);
}

_extern void _sub_63864F(SMPTE *const);
SMPTE::~SMPTE() // 0x63864F
{
    mangled_assert("??1SMPTE@@QAE@XZ");
    todo("implement");
    _sub_63864F(this);
}

_extern void _sub_638971(SMPTE *const, float);
void SMPTE::setStartTime(float) // 0x638971
{
    mangled_assert("?setStartTime@SMPTE@@QAEXM@Z");
    todo("implement");
    _sub_638971(this, arg);
}

_extern void _sub_63893D(SMPTE *const, float);
void SMPTE::setFrameRate(float) // 0x63893D
{
    mangled_assert("?setFrameRate@SMPTE@@QAEXM@Z");
    todo("implement");
    _sub_63893D(this, arg);
}

_extern void _sub_638927(SMPTE *const, char const *);
void SMPTE::setFormatString(char const *) // 0x638927
{
    mangled_assert("?setFormatString@SMPTE@@QAEXPBD@Z");
    todo("implement");
    _sub_638927(this, arg);
}

_extern void _sub_63894B(SMPTE *const, float, float);
void SMPTE::setPosition(float, float) // 0x63894B
{
    mangled_assert("?setPosition@SMPTE@@QAEXMM@Z");
    todo("implement");
    _sub_63894B(this, arg, arg);
}

_extern void _sub_6388FF(SMPTE *const, vector4 const &);
void SMPTE::setColour(vector4 const &) // 0x6388FF
{
    mangled_assert("?setColour@SMPTE@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_6388FF(this, arg);
}

_extern void _sub_638964(SMPTE *const, bool);
void SMPTE::setRightJustified(bool) // 0x638964
{
    mangled_assert("?setRightJustified@SMPTE@@QAEX_N@Z");
    todo("implement");
    _sub_638964(this, arg);
}

_extern void _sub_638911(SMPTE *const, char const *);
void SMPTE::setFont(char const *) // 0x638911
{
    mangled_assert("?setFont@SMPTE@@QAEXPBD@Z");
    todo("implement");
    _sub_638911(this, arg);
}

_extern void _sub_638662(SMPTE *const, float);
void SMPTE::render(float) // 0x638662
{
    mangled_assert("?render@SMPTE@@QAEXM@Z");
    todo("implement");
    _sub_638662(this, arg);
}

/* ---------- private code */
#endif

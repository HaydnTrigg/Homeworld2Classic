#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <localizer\localizer.h>
#include <xmemory0>
#include <UserInterface\pch.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\objects.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <Render\gl\r_defines.h>
#include <xhash>
#include <Render\gl\glext.h>
#include <UserInterface\UICoord.h>
#include <new>
#include <Render\objects\texture.h>
#include <xstddef>
#include <Render\objects\textureregistry.h>
#include <type_traits>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <Mathlib\mathlibdll.h>
#include <utility>
#include <Mathlib\fastmath.h>
#include <iosfwd>
#include <Mathlib\vector3.h>
#include <vector>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <Render\objects\compiledtext.h>
#include <UserInterface\UIFont.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\uitypes.h>
#include <map>
#include <platform\inputinterface.h>
#include <xtree>
#include <platform\platformexports.h>
#include <platform\keydefines.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Render\gl\lotypes.h>
#include <Render\gl\r_types.h>
#include <Render\objects\cliprect.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void UIFont::ApplyFontStyle(UIText &textStyle);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_68F757(UIText &);
void UIFont::ApplyFontStyle(UIText &textStyle) // 0x68F757
{
    mangled_assert("?ApplyFontStyle@UIFont@@YGXAAUUIText@@@Z");
    todo("implement");
    _sub_68F757(textStyle);
}

/* ---------- private code */
#endif

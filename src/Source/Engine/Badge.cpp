#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <fileio\filepath.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <Badge.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const DEFAULT_FILENAME[12]; // 0x7624B4
    extern char const *LOCATION_PATHS[3]; // 0x834514
}

/* ---------- public code */

Badge::Badge() // 0x469500
{
    mangled_assert("??0Badge@@QAE@XZ");
    todo("implement");
}

std::basic_string<char,std::char_traits<char>,std::allocator<char> > Badge::GetName() const // 0x469539
{
    mangled_assert("?GetName@Badge@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

std::basic_string<char,std::char_traits<char>,std::allocator<char> > Badge::GetPath() const // 0x469558
{
    mangled_assert("?GetPath@Badge@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

void Badge::SetDefault() // 0x4695E6
{
    mangled_assert("?SetDefault@Badge@@QAEXXZ");
    todo("implement");
}

void Badge::SetFromPath(char const *) // 0x4695FE
{
    mangled_assert("?SetFromPath@Badge@@QAEXPBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif

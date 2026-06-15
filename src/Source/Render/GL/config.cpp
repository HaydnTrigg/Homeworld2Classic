#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>
#include <memory\memorylib.h>
#include <xmemory>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <vector>
#include <fileio\filestream.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <debug\db.h>
#include <string.h>
#include <type_traits>
#include <assist\fixedstring.h>
#include <xstring>
#include <assist\stlexstring.h>
#include <algorithm>
#include <string>
#include <wchar.h>
#include <assist\typemagic.h>
#include <xutility>
#include <utility>
#include <iosfwd>

/* ---------- constants */

/* ---------- definitions */

struct ConfigVariable
{
    char *name; // 0x0
    bool *var; // 0x4
};
static_assert(sizeof(ConfigVariable) == 8, "Invalid ConfigVariable size");

typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > StringList;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > StringListI;

/* ---------- prototypes */

extern bool rglReadConfig();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern ConfigVariable cvar[16]; // 0x1001F348
}

/* ---------- public code */

bool rglReadConfig() // 0x10002E79
{
    mangled_assert("?rglReadConfig@@YG_NXZ");
    todo("implement");
}

/* ---------- private code */
#endif

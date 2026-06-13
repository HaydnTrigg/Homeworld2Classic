#if 0
/* ---------- headers */

#include "decomp.h"
#include <memory\memorylib.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <new>
#include <xmemory0>
#include <xstddef>
#include <type_traits>
#include <assist\gbitset.h>
#include <xstring>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <debug\db.h>
#include <bitset>
#include <boost\scoped_array.hpp>
#include <algorithm>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <SoundManager\pch.h>
#include <SoundManager\HW2Sample.h>
#include <seInterface2\SampleBase.h>
#include <boost\shared_ptr.hpp>
#include <assist\fixedstring.h>
#include <wchar.h>
#include <assist\stlexstring.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\SoundParams.h>
#include <boost\shared_array.hpp>
#include <assist\typemagic.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6D0551(HW2Sample *const);
HW2Sample::HW2Sample() // 0x6D0551
{
    mangled_assert("??0HW2Sample@@QAE@XZ");
    todo("implement");
    _sub_6D0551(this);
}

_extern void _sub_6D0563(HW2Sample *const);
_inline HW2Sample::~HW2Sample() // 0x6D0563
{
    mangled_assert("??1HW2Sample@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6D0563(this);
}

_extern bool _sub_6D0584(HW2Sample *const, char const *);
bool HW2Sample::Open(char const *) // 0x6D0584
{
    mangled_assert("?Open@HW2Sample@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_6D0584(this, arg);
    return __result;
}

_extern bool _sub_6D0609(HW2Sample const *const, char const *);
bool HW2Sample::Save(char const *) const // 0x6D0609
{
    mangled_assert("?Save@HW2Sample@@UBE_NPBD@Z");
    todo("implement");
    bool __result = _sub_6D0609(this, arg);
    return __result;
}

/* ---------- private code */
#endif

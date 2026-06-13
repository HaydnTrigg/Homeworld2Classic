#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\SoundParamManager.h>
#include <bitset>
#include <memory\memorylib.h>
#include <Engine\App\AppObj.h>
#include <platform\appinterface.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <vector>
#include <new>
#include <xmemory>
#include <xmemory0>
#include <xstddef>
#include <util\types.h>
#include <type_traits>
#include <xstring>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <xutility>
#include <debug\ctassert.h>
#include <utility>
#include <iosfwd>
#include <string.h>
#include <debug\db.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <boost\scoped_array.hpp>
#include <seInterface2\SEInterface.h>
#include <algorithm>
#include <seInterface2\seinterfacefunc.h>
#include <string>
#include <SoundManager\pch.h>
#include <SoundManager\HW2Patch.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <boost\shared_ptr.hpp>
#include <assist\typemagic.h>
#include <wchar.h>
#include <seInterface2\PatchID.h>
#include <boost\shared_array.hpp>
#include <assist\gbitset.h>
#include <seInterface2\sedefinesshared.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static __int32 HELP_Gather(char const *find, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &list);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6CFE92(HW2Patch *const);
HW2Patch::HW2Patch() // 0x6CFE92
{
    mangled_assert("??0HW2Patch@@QAE@XZ");
    todo("implement");
    _sub_6CFE92(this);
}

_extern void _sub_6CFEA4(HW2Patch *const);
_inline HW2Patch::~HW2Patch() // 0x6CFEA4
{
    mangled_assert("??1HW2Patch@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6CFEA4(this);
}

_extern bool _sub_6D0541(HW2Patch const *const, char const *);
bool HW2Patch::Save(char const *) const // 0x6D0541
{
    mangled_assert("?Save@HW2Patch@@UBE_NPBD@Z");
    todo("implement");
    bool __result = _sub_6D0541(this, arg);
    return __result;
}

_extern bool _sub_6D0024(HW2Patch *const, char const *);
bool HW2Patch::Open(char const *) // 0x6D0024
{
    mangled_assert("?Open@HW2Patch@@UAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_6D0024(this, arg);
    return __result;
}

_extern bool _sub_6CFFBD(HW2Patch *const);
bool HW2Patch::IsLooping() // 0x6CFFBD
{
    mangled_assert("?IsLooping@HW2Patch@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6CFFBD(this);
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_6CFEC8(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
_static __int32 HELP_Gather(char const *find, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &list) // 0x6CFEC8
{
    mangled_assert("HELP_Gather");
    todo("implement");
    __int32 __result = _sub_6CFEC8(find, list);
    return __result;
}
#endif

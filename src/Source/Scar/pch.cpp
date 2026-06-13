#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <xiosbase>
#include <xlocale>
#include <stdexcept>
#include <functional>
#include <xstring>
#include <xfunctional>
#include <xmemory0>
#include <Scar\pch.h>
#include <limits>
#include <memory\memorylib.h>
#include <Engine\Waypoint.h>
#include <ymath.h>
#include <malloc.h>
#include <Engine\SOBGroupManager.h>
#include <Engine\SobUnmoveable.h>
#include <crtdefs.h>
#include <hash_map>
#include <Engine\sob.h>
#include <sal.h>
#include <xhash>
#include <Engine\sobstatic.h>
#include <bitset>
#include <concurrencysal.h>
#include <Collision\Primitives\sphere.h>
#include <vadefs.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierContainer.h>
#include <immintrin.h>
#include <Collision\BVH\bvh.h>
#include <Engine\MultiplierTypes.h>
#include <wmmintrin.h>
#include <new>
#include <nmmintrin.h>
#include <exception>
#include <smmintrin.h>
#include <xstddef>
#include <cstddef>
#include <tmmintrin.h>
#include <type_traits>
#include <stddef.h>
#include <yvals.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <xkeycheck.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <use_ansi.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <Mathlib\matrix3.h>
#include <queue>
#include <mmintrin.h>
#include <algorithm>
#include <xutility>
#include <boost\scoped_array.hpp>
#include <xatomic0.h>
#include <utility>
#include <boost\config.hpp>
#include <map>
#include <iosfwd>
#include <boost\config\user.hpp>
#include <xtree>
#include <crtdbg.h>
#include <boost\config\select_compiler_config.hpp>
#include <xmemory>
#include <platform\timer.h>
#include <boost\config\compiler\visualc.hpp>
#include <share.h>
#include <platform\platformexports.h>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <compiler\compilerconfig.h>
#include <cmath>
#include <math.h>
#include <Collision\Primitives\obb.h>
#include <xrefwrap>
#include <fileio\bytestream.h>
#include <string.h>
#include <fileio\fileioexports.h>
#include <wtime.inl>
#include <debug\ctassert.h>
#include <Engine\Address2UdwordMapper.h>
#include <boost\cstdint.hpp>
#include <luaconfig\luaconfig.h>
#include <vector>
#include <lua\lua.h>
#include <Engine\HyperspaceManager.h>
#include <xdebug>
#include <Engine\SquadronList.h>
#include <boost\detail\workaround.hpp>
#include <Engine\Interpolation.h>
#include <assist\fixedstring.h>
#include <typeinfo>
#include <Mathlib\quat.h>
#include <assist\stlexstring.h>
#include <tuple>
#include <boost\config\suffix.hpp>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <xfacet>
#include <memory.h>
#include <util\colour.h>
#include <Engine\sobid.h>
#include <cassert>
#include <Collision\BVH\octree.h>
#include <assert.h>
#include <Collision\BVH\span.h>
#include <cstdio>
#include <Collision\BVH\Internal\span_i.h>
#include <cfloat>
#include <stdio.h>
#include <Collision\BVH\proxy.h>
#include <Mathlib\vector2.h>
#include <float.h>
#include <Collision\intersect.h>
#include <Engine\sobtypes.h>
#include <util\types.h>
#include <crtwrn.h>
#include <Collision\primitivesfwd.h>
#include <xtr1common>
#include <Engine\SelTarg.h>
#include <seInterface2\PatchID.h>
#include <Engine\prim.h>
#include <seInterface2\PatchBase.h>
#include <Collision\Primitives\aabb.h>
#include <seInterface2\SoundParams.h>
#include <Engine\Universe.h>
#include <ammintrin.h>
#include <eh.h>
#include <Engine\savegamedef.h>
#include <mm3dnow.h>
#include <boost\shared_ptr.hpp>
#include <assist\typemagic.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\smart_ptr.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Mathlib\fastmath.h>
#include <boost\assert.hpp>
#include <Engine\savegamedatainfo.h>
#include <Engine\savegameimpl.h>
#include <boost\checked_delete.hpp>
#include <Engine\fixedpoint.h>
#include <Engine\savegamedata.h>
#include <util\fixed.h>
#include <Engine\pathpoints.h>
#include <Engine\dbdefines.h>
#include <Engine\UnitCaps\UnitCaps.h>
#include <assist\stlexsmallvector.h>
#include <locale.h>
#include <set>
#include <system_error>
#include <stdlib.h>
#include <cerrno>
#include <limits.h>
#include <memory>
#include <errno.h>
#include <stdint.h>
#include <cstring>
#include <list>
#include <intrin.h>
#include <cwchar>
#include <cstdlib>
#include <boost\shared_array.hpp>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <Collision\Primitives\capsule.h>
#include <iterator>
#include <swprintf.inl>
#include <Collision\Primitives\segment.h>
#include <istream>
#include <Collision\BVH\profiling.h>
#include <ostream>
#include <debug\ctmessage.h>
#include <ios>
#include <debug\db.h>
#include <xlocnum>
#include <climits>
#include <xtgmath.h>
#include <streambuf>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern __int32 __@@_PchSym_@00@UsrxplibRkxhsrkUslnvdliowCxozhhrxUhixUrmgvinvwrzgvUhlfixvUhxziUivovzhvUlyqUkxsOlyq@8A5DB7DA8D3EA6DD; // 0x861384

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x86138B
    extern std::allocator_arg_t allocator_arg; // 0x86138A
    extern std::_Ignore ignore; // 0x861389
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x861388
}

/* ---------- public code */

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <xlocale>
#include <Engine\DynamicPoint.h>
#include <stdexcept>
#include <xstring>
#include <fileio\bytestream.h>
#include <xmemory0>
#include <fileio\fileioexports.h>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <limits>
#include <Engine\commands\pch.h>
#include <Engine\fixedpoint.h>
#include <debug\ctassert.h>
#include <ymath.h>
#include <memory\memorylib.h>
#include <util\fixed.h>
#include <malloc.h>
#include <crtdefs.h>
#include <sal.h>
#include <Engine\Address2UdwordMapper.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierContainer.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <boost\checked_delete.hpp>
#include <Collision\BVH\bvh.h>
#include <functional>
#include <assist\fixedstring.h>
#include <xfunctional>
#include <immintrin.h>
#include <assist\stlexstring.h>
#include <wmmintrin.h>
#include <nmmintrin.h>
#include <new>
#include <Engine\Squadron.h>
#include <smmintrin.h>
#include <exception>
#include <Engine\ship.h>
#include <tmmintrin.h>
#include <type_traits>
#include <xstddef>
#include <cstddef>
#include <Engine\SobWithMesh.h>
#include <xlocinfo>
#include <pmmintrin.h>
#include <stddef.h>
#include <yvals.h>
#include <Engine\SobRigidBody.h>
#include <xlocinfo.h>
#include <emmintrin.h>
#include <xkeycheck.h>
#include <Engine\sob.h>
#include <ctype.h>
#include <xmmintrin.h>
#include <use_ansi.h>
#include <Engine\sobstatic.h>
#include <mmintrin.h>
#include <Collision\Primitives\sphere.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <vector>
#include <iosfwd>
#include <xmemory>
#include <crtdbg.h>
#include <Engine\Parade.h>
#include <boost\next_prior.hpp>
#include <share.h>
#include <hash_map>
#include <xhash>
#include <Engine\weaponinfo.h>
#include <boost\noncopyable.hpp>
#include <cmath>
#include <math.h>
#include <xrefwrap>
#include <list>
#include <Engine\playerresourcetype.h>
#include <wtime.inl>
#include <string.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Engine\task.h>
#include <stack>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <xdebug>
#include <Engine\Interpolation.h>
#include <assist\typemagic.h>
#include <Mathlib\quat.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <typeinfo>
#include <Engine\SobRigidBodyStatic.h>
#include <memory>
#include <Collision\Primitives\obb.h>
#include <stdint.h>
#include <Engine\MeshAnimation.h>
#include <util\types.h>
#include <xfacet>
#include <Engine\ShieldTypes.h>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <memory.h>
#include <Engine\savegamedatainfo.h>
#include <Engine\savegamedata.h>
#include <Engine\pathpoints.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\Internal\span_i.h>
#include <boost\config.hpp>
#include <cassert>
#include <Engine\Subsystems\HardPointManager.h>
#include <Collision\BVH\proxy.h>
#include <boost\config\user.hpp>
#include <assert.h>
#include <Engine\Subsystems\HardPoint.h>
#include <Collision\intersect.h>
#include <boost\config\select_compiler_config.hpp>
#include <cstdio>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Collision\primitivesfwd.h>
#include <boost\config\compiler\visualc.hpp>
#include <cfloat>
#include <stdio.h>
#include <Engine\Subsystems\SubSystemType.h>
#include <tuple>
#include <boost\config\select_stdlib_config.hpp>
#include <float.h>
#include <boost\scoped_array.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <crtwrn.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <Engine\sobtypes.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <xtr1common>
#include <Engine\ParadeCommand.h>
#include <Engine\commandtype.h>
#include <Engine\SelTarg.h>
#include <Engine\prim.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector2.h>
#include <Mathlib\mathlibdll.h>
#include <ammintrin.h>
#include <Mathlib\fastmath.h>
#include <mm3dnow.h>
#include <eh.h>
#include <Engine\OrderFeedback.h>
#include <Engine\abilities.h>
#include <Engine\SquadronList.h>
#include <compiler\compilerconfig.h>
#include <debug\ctmessage.h>
#include <debug\db.h>
#include <boost\config\suffix.hpp>
#include <queue>
#include <algorithm>
#include <seInterface2\PatchID.h>
#include <assist\stlexsmallvector.h>
#include <seInterface2\PatchBase.h>
#include <boost\shared_ptr.hpp>
#include <seInterface2\SoundParams.h>
#include <boost\throw_exception.hpp>
#include <bitset>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <locale.h>
#include <system_error>
#include <cerrno>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <Collision\Primitives\capsule.h>
#include <cstring>
#include <Collision\Primitives\segment.h>
#include <intrin.h>
#include <cwchar>
#include <cstdlib>
#include <Collision\BVH\profiling.h>
#include <setjmp.h>
#include <wchar.h>
#include <string>
#include <boost\utility.hpp>
#include <iterator>
#include <swprintf.inl>
#include <boost\utility\addressof.hpp>
#include <istream>
#include <boost\detail\workaround.hpp>
#include <ostream>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <ios>
#include <xlocnum>
#include <boost\utility\base_from_member.hpp>
#include <climits>
#include <xtgmath.h>
#include <Engine\sobid.h>
#include <boost\utility_fwd.hpp>
#include <streambuf>
#include <deque>
#include <set>
#include <xiosbase>

/* ---------- constants */

/* ---------- definitions */

typedef long SoundPatchID;
typedef Sob *SobPtr;
typedef std::vector<HardPointStatic *,std::allocator<HardPointStatic *> > HardPointStaticVector;

/* ---------- prototypes */

/* ---------- globals */

extern __int32 __@@_PchSym_@00@UsrxplibRkxhsrkUslnvdliowCxozhhrxUhixUrmgvinvwrzgvUhlfixvUxlnnzmwhUivovzhvUlyqUkxsOlyq@1CE1853C7BFFDC08; // 0x84CA80

/* ---------- private variables */

_static
{
    extern std::piecewise_construct_t piecewise_construct; // 0x84CA87
    extern std::allocator_arg_t allocator_arg; // 0x84CA86
    extern std::_Ignore ignore; // 0x84CA85
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x84CA84
}

/* ---------- public code */

/* ---------- private code */
#endif

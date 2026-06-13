#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <SimProxy.h>
#include <GameEventSys.h>
#include <platform\osdef.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Mathlib\matrix3.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Render\objects\debugrender.h>
#include <Collision\primitivesfwd.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <new>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Player.h>
#include <SquadronList.h>
#include <sobid.h>
#include <Interpolation.h>
#include <Render\gl\lotypes.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Collision\Primitives\aabb.h>
#include <vector>
#include <xmemory>
#include <Universe.h>
#include <Render\gl\r_types.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <list>
#include <Race.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Mathlib\vector3.h>
#include <task.h>
#include <Mathlib\vector4.h>
#include <stack>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <SelTarg.h>
#include <BuildManager.h>
#include <prim.h>
#include <Mathlib\vector2.h>
#include <playerresourcetype.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <platform\timer.h>
#include <Collision\Primitives\capsule.h>
#include <platform\platformexports.h>
#include <Collision\Primitives\segment.h>
#include <boost\cstdint.hpp>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <Collision\Primitives\obb.h>
#include <util\fixed.h>
#include <Mathlib\quat.h>
#include <SOBGroupManager.h>
#include <Stats\StatLogging.h>
#include <hash_map>
#include <xhash>
#include <ResearchManager.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <HyperspaceManager.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <CPUPlayer\CpuClassifier.h>
#include <luaconfig\luabinding.h>
#include <wchar.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <App\Hw2Identify.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 CpuClassifier::s_hgn_battlecruiser_id; // 0x844910
extern unsigned __int32 CpuClassifier::s_vgr_battlecruiser_id; // 0x844914
extern unsigned __int32 CpuClassifier::s_hyperspace_id; // 0x844918

/* ---------- private variables */

/* ---------- public code */

_extern _sub_52CA51(CpuClassifier::Class *const, CpuClassifier::Class const &);
_inline CpuClassifier::Class::Class(CpuClassifier::Class const &) // 0x52CA51
{
    mangled_assert("??0Class@CpuClassifier@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_52CA51(this, arg);
}

_extern _sub_52CA8E(CpuClassifier::Class *const);
_inline CpuClassifier::Class::Class() // 0x52CA8E
{
    mangled_assert("??0Class@CpuClassifier@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52CA8E(this);
}

_extern _sub_52CAA8(CpuClassifier *const, Player &, LuaConfig &, SimProxy &);
CpuClassifier::CpuClassifier(Player &, LuaConfig &, SimProxy &) // 0x52CAA8
{
    mangled_assert("??0CpuClassifier@@QAE@AAVPlayer@@AAVLuaConfig@@AAVSimProxy@@@Z");
    todo("implement");
    _sub_52CAA8(this, arg, arg, arg);
}

_extern void _sub_52CB80(LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,CpuClassifier> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,CpuClassifier> >::~ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1MemberConst<unsigned int,unsigned int,CpuClassifier> >() // 0x52CB80
{
    mangled_assert("??1?$ObjInternal1@IIV?$Functor1MemberConst@IIVCpuClassifier@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52CB80(this);
}

_extern void _sub_52CB86(LuaBinding::ObjInternal2<unsigned int,unsigned int,unsigned int,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,unsigned int,CpuClassifier> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,unsigned int,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,unsigned int,CpuClassifier> >::~ObjInternal2<unsigned int,unsigned int,unsigned int,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,unsigned int,CpuClassifier> >() // 0x52CB86
{
    mangled_assert("??1?$ObjInternal2@IIIV?$Functor2MemberConst@IIIVCpuClassifier@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52CB86(this);
}

_extern void _sub_52CB8C(LuaBinding::ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,void,CpuClassifier> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,void,CpuClassifier> >::~ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,void,CpuClassifier> >() // 0x52CB8C
{
    mangled_assert("??1?$ObjInternal2@IIXV?$Functor2MemberNonConst@IIXVCpuClassifier@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52CB8C(this);
}

_extern void _sub_52CB92(LuaBinding::ObjInternal2<unsigned int,unsigned int,bool,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,bool,CpuClassifier> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,bool,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,bool,CpuClassifier> >::~ObjInternal2<unsigned int,unsigned int,bool,LuaBinding::Functor2MemberConst<unsigned int,unsigned int,bool,CpuClassifier> >() // 0x52CB92
{
    mangled_assert("??1?$ObjInternal2@II_NV?$Functor2MemberConst@II_NVCpuClassifier@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52CB92(this);
}

_extern void _sub_52CB98(LuaBinding::ObjInternal2<unsigned int,char const *,void,LuaBinding::Functor2MemberNonConst<unsigned int,char const *,void,CpuClassifier> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,char const *,void,LuaBinding::Functor2MemberNonConst<unsigned int,char const *,void,CpuClassifier> >::~ObjInternal2<unsigned int,char const *,void,LuaBinding::Functor2MemberNonConst<unsigned int,char const *,void,CpuClassifier> >() // 0x52CB98
{
    mangled_assert("??1?$ObjInternal2@IPBDXV?$Functor2MemberNonConst@IPBDXVCpuClassifier@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52CB98(this);
}

_extern void _sub_52CBA3(CpuClassifier::Class *const);
_inline CpuClassifier::Class::~Class() // 0x52CBA3
{
    mangled_assert("??1Class@CpuClassifier@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_52CBA3(this);
}

_extern CpuClassifier::Class &_sub_52CC84(CpuClassifier::Class *const, CpuClassifier::Class const &);
_inline CpuClassifier::Class &CpuClassifier::Class::operator=(CpuClassifier::Class const &) // 0x52CC84
{
    mangled_assert("??4Class@CpuClassifier@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
    CpuClassifier::Class & __result = _sub_52CC84(this, arg);
    return __result;
}

_extern void _sub_52CE92(CpuClassifier *const, LuaConfig &);
void CpuClassifier::BindToLua(LuaConfig &) // 0x52CE92
{
    mangled_assert("?BindToLua@CpuClassifier@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_52CE92(this, arg);
}

_extern unsigned __int32 _sub_52D95B(CpuClassifier const *const, unsigned __int32, unsigned __int32);
unsigned __int32 CpuClassifier::numActiveOfClass(unsigned __int32, unsigned __int32) const // 0x52D95B
{
    mangled_assert("?numActiveOfClass@CpuClassifier@@QBEIII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_52D95B(this, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_52D993(CpuClassifier const *const, unsigned __int32);
unsigned __int32 CpuClassifier::numQueueOfClass(unsigned __int32) const // 0x52D993
{
    mangled_assert("?numQueueOfClass@CpuClassifier@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_52D993(this, arg);
    return __result;
}

_extern bool _sub_52D918(CpuClassifier const *const, unsigned __int32, unsigned __int32);
bool CpuClassifier::isOfClass(unsigned __int32, unsigned __int32) const // 0x52D918
{
    mangled_assert("?isOfClass@CpuClassifier@@QBE_NII@Z");
    todo("implement");
    bool __result = _sub_52D918(this, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_52D84D(CpuClassifier const *const, unsigned __int32);
unsigned __int32 CpuClassifier::classSize(unsigned __int32) const // 0x52D84D
{
    mangled_assert("?classSize@CpuClassifier@@QBEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_52D84D(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_52D837(CpuClassifier const *const, unsigned __int32, unsigned __int32);
unsigned __int32 CpuClassifier::classAt(unsigned __int32, unsigned __int32) const // 0x52D837
{
    mangled_assert("?classAt@CpuClassifier@@QBEIII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_52D837(this, arg, arg);
    return __result;
}

_extern void _sub_52CE55(CpuClassifier *const, unsigned __int32, char const *);
void CpuClassifier::AddClassName(unsigned __int32, char const *) // 0x52CE55
{
    mangled_assert("?AddClassName@CpuClassifier@@AAEXIPBD@Z");
    todo("implement");
    _sub_52CE55(this, arg, arg);
}

_extern void _sub_52CE7A(CpuClassifier *const, unsigned __int32, unsigned __int32);
void CpuClassifier::AddToClass(unsigned __int32, unsigned __int32) // 0x52CE7A
{
    mangled_assert("?AddToClass@CpuClassifier@@AAEXII@Z");
    todo("implement");
    _sub_52CE7A(this, arg, arg);
}

_extern void _sub_52D27B(CpuClassifier *const, unsigned __int32, float);
void CpuClassifier::DebugStats(unsigned __int32, float) // 0x52D27B
{
    mangled_assert("?DebugStats@CpuClassifier@@QAEXIM@Z");
    todo("implement");
    _sub_52D27B(this, arg, arg);
}

/* ---------- private code */
#endif

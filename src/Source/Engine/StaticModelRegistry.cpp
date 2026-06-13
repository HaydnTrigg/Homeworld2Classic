#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <xstring>
#include <xmemory0>
#include <sobid.h>
#include <pch.h>
#include <staticmodelcomponentregistry.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <shipHold.h>
#include <SquadronList.h>
#include <debug\db.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <StaticModelRegistry.h>
#include <sobstatic.h>
#include <wchar.h>
#include <string>
#include <Collision\Primitives\sphere.h>

/* ---------- constants */

/* ---------- definitions */

typedef boost::shared_ptr<SobStatic::Model> TPtr;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > > ComponentMap;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x843C1C
    extern StaticModelRegistry *s_instance; // 0x843C18
}

/* ---------- public code */

_extern bool _sub_481EFE();
bool StaticModelRegistry::Startup() // 0x481EFE
{
    mangled_assert("?Startup@StaticModelRegistry@@SG_NXZ");
    todo("implement");
    bool __result = _sub_481EFE();
    return __result;
}

_extern bool _sub_481E58();
bool StaticModelRegistry::Shutdown() // 0x481E58
{
    mangled_assert("?Shutdown@StaticModelRegistry@@SG_NXZ");
    todo("implement");
    bool __result = _sub_481E58();
    return __result;
}

_extern _sub_48123E(boost::shared_ptr<SobStatic::Model> *const, boost::shared_ptr<SobStatic::Model> const &);
_inline boost::shared_ptr<SobStatic::Model>::shared_ptr<SobStatic::Model>(boost::shared_ptr<SobStatic::Model> const &) // 0x48123E
{
    mangled_assert("??0?$shared_ptr@VModel@SobStatic@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_48123E(this, arg);
}

_extern _sub_48125E(boost::shared_ptr<SobWithMeshStatic::Model> *const, boost::shared_ptr<SobWithMeshStatic::Model> const &);
_inline boost::shared_ptr<SobWithMeshStatic::Model>::shared_ptr<SobWithMeshStatic::Model>(boost::shared_ptr<SobWithMeshStatic::Model> const &) // 0x48125E
{
    mangled_assert("??0?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_48125E(this, arg);
}

_extern _sub_4812A7(StaticModelRegistry::Data *const);
_inline StaticModelRegistry::Data::Data() // 0x4812A7
{
    mangled_assert("??0Data@StaticModelRegistry@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4812A7(this);
}

_extern StaticModelRegistry *_sub_481C56();
StaticModelRegistry *StaticModelRegistry::Instance() // 0x481C56
{
    mangled_assert("?Instance@StaticModelRegistry@@SGPAV1@XZ");
    todo("implement");
    StaticModelRegistry * __result = _sub_481C56();
    return __result;
}

_extern _sub_481317(StaticModelRegistry *const);
StaticModelRegistry::StaticModelRegistry() // 0x481317
{
    mangled_assert("??0StaticModelRegistry@@AAE@XZ");
    todo("implement");
    _sub_481317(this);
}

_extern void _sub_4813FC(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> > >() // 0x4813FC
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShipHoldStatic@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShipHoldStatic@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4813FC(this);
}

_extern void _sub_481405(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > >() // 0x481405
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobStatic@@@boost@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobStatic@@@boost@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481405(this);
}

_extern void _sub_48140E(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > > >() // 0x48140E
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48140E(this);
}

_extern void _sub_481417(std::_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *const);
_inline std::_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x481417
{
    mangled_assert("??1?$_Tree_buy@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481417(this);
}

_extern void _sub_481574(StaticModelRegistry *const);
StaticModelRegistry::~StaticModelRegistry() // 0x481574
{
    mangled_assert("??1StaticModelRegistry@@AAE@XZ");
    todo("implement");
    _sub_481574(this);
}

_extern void _sub_481420(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> >,0> >() // 0x481420
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShipHoldStatic@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShipHoldStatic@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481420(this);
}

_extern void _sub_481429(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > >,0> >() // 0x481429
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobStatic@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobStatic@@@boost@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481429(this);
}

_extern void _sub_481432(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > >,0> >() // 0x481432
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481432(this);
}

_extern void _sub_48143B(std::_Tree_comp<0,std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> >::~_Tree_comp<0,std::_Tset_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,0> >() // 0x48143B
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48143B(this);
}

_extern void _sub_481444(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> > >() // 0x481444
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShipHoldStatic@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShipHoldStatic@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481444(this);
}

_extern void _sub_481DFF(StaticModelRegistry *const, char const *);
void StaticModelRegistry::Register(char const *) // 0x481DFF
{
    mangled_assert("?Register@StaticModelRegistry@@QAEXPBD@Z");
    todo("implement");
    _sub_481DFF(this, arg);
}

_extern void _sub_481449(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > > >() // 0x481449
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobStatic@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobStatic@@@boost@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481449(this);
}

_extern void _sub_48144E(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > > >() // 0x48144E
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48144E(this);
}

_extern void _sub_481453(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ShipHoldStatic *>() // 0x481453
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShipHoldStatic@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481453(this);
}

_extern void _sub_481458(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobStatic::Model> >() // 0x481458
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobStatic@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481458(this);
}

_extern void _sub_48148D(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,boost::shared_ptr<SobWithMeshStatic::Model> >() // 0x48148D
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48148D(this);
}

_extern void _sub_4814C2(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ShipHoldStatic *>() // 0x4814C2
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShipHoldStatic@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4814C2(this);
}

_extern bool _sub_481C5C(StaticModelRegistry *const, char const *);
bool StaticModelRegistry::IsRegistered(char const *) // 0x481C5C
{
    mangled_assert("?IsRegistered@StaticModelRegistry@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_481C5C(this, arg);
    return __result;
}

_extern void _sub_4814C7(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model> > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model> >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobStatic::Model> >() // 0x4814C7
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobStatic@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4814C7(this);
}

_extern void _sub_4814FC(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model> > *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model> >::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,boost::shared_ptr<SobWithMeshStatic::Model> >() // 0x4814FC
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4814FC(this);
}

_extern void _sub_481539(std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *const);
_inline std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x481539
{
    mangled_assert("??1?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481539(this);
}

_extern void _sub_48153E(boost::shared_ptr<SobWithMeshStatic::Model> *const);
_inline boost::shared_ptr<SobWithMeshStatic::Model>::~shared_ptr<SobWithMeshStatic::Model>() // 0x48153E
{
    mangled_assert("??1?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48153E(this);
}

_extern void _sub_48154A(boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> > *const);
_inline boost::detail::sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >::~sp_counted_base_impl<SobWithMeshStatic::Model *,boost::checked_deleter<SobWithMeshStatic::Model> >() // 0x48154A
{
    mangled_assert("??1?$sp_counted_base_impl@PAVModel@SobWithMeshStatic@@U?$checked_deleter@VModel@SobWithMeshStatic@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_48154A(this);
}

_extern boost::shared_ptr<SobStatic::Model> _sub_481E9B(StaticModelRegistry *const, char const *, SobStatic::Model *);
boost::shared_ptr<SobStatic::Model> StaticModelRegistry::SobStatic_Register(char const *, SobStatic::Model *) // 0x481E9B
{
    mangled_assert("?SobStatic_Register@StaticModelRegistry@@QAE?AV?$shared_ptr@VModel@SobStatic@@@boost@@PBDPAVModel@SobStatic@@@Z");
    todo("implement");
    boost::shared_ptr<SobStatic::Model> __result = _sub_481E9B(this, arg, arg);
    return __result;
}

_extern void _sub_481551(StaticModelRegistry::Data *const);
_inline StaticModelRegistry::Data::~Data() // 0x481551
{
    mangled_assert("??1Data@StaticModelRegistry@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_481551(this);
}

_extern boost::shared_ptr<SobStatic::Model> _sub_481E7C(StaticModelRegistry *const, char const *);
boost::shared_ptr<SobStatic::Model> StaticModelRegistry::SobStatic_Find(char const *) // 0x481E7C
{
    mangled_assert("?SobStatic_Find@StaticModelRegistry@@QAE?AV?$shared_ptr@VModel@SobStatic@@@boost@@PBD@Z");
    todo("implement");
    boost::shared_ptr<SobStatic::Model> __result = _sub_481E7C(this, arg);
    return __result;
}

_extern boost::shared_ptr<SobWithMeshStatic::Model> _sub_481EDC(StaticModelRegistry *const, char const *, SobWithMeshStatic::Model *);
boost::shared_ptr<SobWithMeshStatic::Model> StaticModelRegistry::SobWithMeshStatic_Register(char const *, SobWithMeshStatic::Model *) // 0x481EDC
{
    mangled_assert("?SobWithMeshStatic_Register@StaticModelRegistry@@QAE?AV?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@PBDPAVModel@SobWithMeshStatic@@@Z");
    todo("implement");
    boost::shared_ptr<SobWithMeshStatic::Model> __result = _sub_481EDC(this, arg, arg);
    return __result;
}

_extern boost::shared_ptr<SobWithMeshStatic::Model> _sub_481EBD(StaticModelRegistry *const, char const *);
boost::shared_ptr<SobWithMeshStatic::Model> StaticModelRegistry::SobWithMeshStatic_Find(char const *) // 0x481EBD
{
    mangled_assert("?SobWithMeshStatic_Find@StaticModelRegistry@@QAE?AV?$shared_ptr@VModel@SobWithMeshStatic@@@boost@@PBD@Z");
    todo("implement");
    boost::shared_ptr<SobWithMeshStatic::Model> __result = _sub_481EBD(this, arg);
    return __result;
}

_extern void _sub_481E4E(StaticModelRegistry *const, char const *, ShipHoldStatic *);
void StaticModelRegistry::ShipHoldStatic_Register(char const *, ShipHoldStatic *) // 0x481E4E
{
    mangled_assert("?ShipHoldStatic_Register@StaticModelRegistry@@QAEXPBDPAVShipHoldStatic@@@Z");
    todo("implement");
    _sub_481E4E(this, arg, arg);
}

_extern ShipHoldStatic *_sub_481E44(StaticModelRegistry *const, char const *);
ShipHoldStatic *StaticModelRegistry::ShipHoldStatic_Find(char const *) // 0x481E44
{
    mangled_assert("?ShipHoldStatic_Find@StaticModelRegistry@@QAEPAVShipHoldStatic@@PBD@Z");
    todo("implement");
    ShipHoldStatic * __result = _sub_481E44(this, arg);
    return __result;
}

/* ---------- private code */
#endif

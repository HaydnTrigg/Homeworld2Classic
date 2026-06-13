#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <list>
#include <profile\profile.h>
#include <map>
#include <Decal\DecalRefMesh.h>
#include <iostream>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Decal\DecalRefMeshRegistry.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > > >,std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > > > > _Pairii;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > > MeshMap;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern DecalRefMeshRegistry *s_instance; // 0x846DD8
}

/* ---------- public code */

_extern bool _sub_5C40A5();
bool DecalRefMeshRegistry::Startup() // 0x5C40A5
{
    mangled_assert("?Startup@DecalRefMeshRegistry@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5C40A5();
    return __result;
}

_extern _sub_5C3CC6(DecalRefMeshRegistry::Data *const);
_inline DecalRefMeshRegistry::Data::Data() // 0x5C3CC6
{
    mangled_assert("??0Data@DecalRefMeshRegistry@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C3CC6(this);
}

_extern bool _sub_5C407D();
bool DecalRefMeshRegistry::Shutdown() // 0x5C407D
{
    mangled_assert("?Shutdown@DecalRefMeshRegistry@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5C407D();
    return __result;
}

_extern DecalRefMeshRegistry *_sub_5C3FD9();
DecalRefMeshRegistry *DecalRefMeshRegistry::Instance() // 0x5C3FD9
{
    mangled_assert("?Instance@DecalRefMeshRegistry@@SGPAV1@XZ");
    todo("implement");
    DecalRefMeshRegistry * __result = _sub_5C3FD9();
    return __result;
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_5C3F7D(DecalRefMesh const *);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > DecalRefMeshRegistry::GetRegistryName(DecalRefMesh const *pRefMesh) // 0x5C3F7D
{
    mangled_assert("?GetRegistryName@DecalRefMeshRegistry@@SG?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@@Z");
    todo("implement");
    std::string __result = _sub_5C3F7D(pRefMesh);
    return __result;
}

_extern void _sub_5C3FDF(DecalRefMeshRegistry *const, DecalRefMesh const *);
void DecalRefMeshRegistry::Register(DecalRefMesh const *) // 0x5C3FDF
{
    mangled_assert("?Register@DecalRefMeshRegistry@@QAEXPBVDecalRefMesh@@@Z");
    todo("implement");
    _sub_5C3FDF(this, arg);
}

_extern void _sub_5C40EB(DecalRefMeshRegistry *const, DecalRefMesh const *);
void DecalRefMeshRegistry::Unregister(DecalRefMesh const *) // 0x5C40EB
{
    mangled_assert("?Unregister@DecalRefMeshRegistry@@QAEXPBVDecalRefMesh@@@Z");
    todo("implement");
    _sub_5C40EB(this, arg);
}

_extern DecalRefMesh const *_sub_5C3F3D(DecalRefMeshRegistry *const, char const *);
DecalRefMesh const *DecalRefMeshRegistry::Find(char const *) // 0x5C3F3D
{
    mangled_assert("?Find@DecalRefMeshRegistry@@QAEPBVDecalRefMesh@@PBD@Z");
    todo("implement");
    DecalRefMesh const * __result = _sub_5C3F3D(this, arg);
    return __result;
}

_extern _sub_5C3CDB(DecalRefMeshRegistry *const);
DecalRefMeshRegistry::DecalRefMeshRegistry() // 0x5C3CDB
{
    mangled_assert("??0DecalRefMeshRegistry@@AAE@XZ");
    todo("implement");
    _sub_5C3CDB(this);
}

_extern void _sub_5C3D4B(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > >() // 0x5C3D4B
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C3D4B(this);
}

_extern void _sub_5C3D54(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> >,0> >() // 0x5C3D54
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C3D54(this);
}

_extern void _sub_5C3D5D(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> > >() // 0x5C3D5D
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C3D5D(this);
}

_extern void _sub_5C3D62(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,DecalRefMesh const *>() // 0x5C3D62
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C3D62(this);
}

_extern void _sub_5C3D67(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,DecalRefMesh const *>() // 0x5C3D67
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDecalRefMesh@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C3D67(this);
}

_extern void _sub_5C3D79(DecalRefMeshRegistry *const);
DecalRefMeshRegistry::~DecalRefMeshRegistry() // 0x5C3D79
{
    mangled_assert("??1DecalRefMeshRegistry@@AAE@XZ");
    todo("implement");
    _sub_5C3D79(this);
}

_extern void _sub_5C3D74(DecalRefMeshRegistry::Data *const);
_inline DecalRefMeshRegistry::Data::~Data() // 0x5C3D74
{
    mangled_assert("??1Data@DecalRefMeshRegistry@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5C3D74(this);
}

/* ---------- private code */
#endif

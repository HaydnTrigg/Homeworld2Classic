#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\r_types.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <platform\osdef.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Render\objects\debugrender.h>
#include <pch.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <renderer.h>
#include <Render\objects\fontsystem.h>
#include <boost\checked_delete.hpp>
#include <Render\objects\bitmapfont.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <savegame.h>
#include <xmemory>
#include <task.h>
#include <stack>
#include <debug\ctassert.h>
#include <BattleScar\BattleScarStats.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\vector2.h>
#include <Collision\Primitives\mesh.h>
#include <util\types.h>
#include <Collision\Primitives\obb.h>
#include <Decal\DecalRefMesh.h>
#include <boost\cstdint.hpp>
#include <BattleScar\BattleScarInternal.h>
#include <Render\objects\cliprect.h>
#include <gameRenderDebug.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <BattleScar\BattleScarUtil.h>
#include <Collision\Primitives\sphere.h>
#include <Render\objects\texture.h>
#include <debug\db.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Render\gl\lotypes.h>
#include <util\colour.h>
#include <Collision\Primitives\triangle.h>
#include <savegamedef.h>
#include <Mathlib\mathutil.h>
#include <gameRandom.h>
#include <BattleScar\BattleScarPoint.h>
#include <random.h>
#include <BattleScar\BattleScarManager.h>
#include <string>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <algorithm>
#include <Render\objects\compiledtext.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void shipAlignUV(vector3 const &texDir, vector3 &texRight, vector3 &texUp);
_static __int32 pruneNonIncidentFaces(vector3 const &coDir, std::vector<FatVertex,std::allocator<FatVertex> > &vertices, std::vector<unsigned short,std::allocator<unsigned short> > &vertIndices, std::vector<unsigned short,std::allocator<unsigned short> > &triIndices);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern BattleScarUtil::TempMesh s_tempDecalMesh; // 0x844998
}

/* ---------- public code */

_extern _sub_55DA1D(BattleScarPoint::Renderer::DecalDesc *const);
_inline BattleScarPoint::Renderer::DecalDesc::DecalDesc() // 0x55DA1D
{
    mangled_assert("??0DecalDesc@Renderer@BattleScarPoint@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DA1D(this);
}

_extern BattleScarManager::Type *_sub_55EC2C(char const *);
BattleScarManager::Type *BattleScarPoint::Type::creator(char const *name) // 0x55EC2C
{
    mangled_assert("?creator@Type@BattleScarPoint@@SGPAV1BattleScarManager@@PBD@Z");
    todo("implement");
    BattleScarManager::Type * __result = _sub_55EC2C(name);
    return __result;
}

_extern _sub_55DA7A(BattleScarPoint::Type *const, char const *);
BattleScarPoint::Type::Type(char const *) // 0x55DA7A
{
    mangled_assert("??0Type@BattleScarPoint@@AAE@PBD@Z");
    todo("implement");
    _sub_55DA7A(this, arg);
}

_extern void _sub_55DB99(std::_List_buy<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *> > *const);
_inline std::_List_buy<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *> >::~_List_buy<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *> >() // 0x55DB99
{
    mangled_assert("??1?$_List_buy@PAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@V?$allocator@PAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DB99(this);
}

_extern void _sub_55DBC9(std::_Tree_buy<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > >,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > > > *const);
_inline std::_Tree_buy<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > >,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > > >::~_Tree_buy<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > >,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > > >() // 0x55DBC9
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarPoint@@V?$allocator@UDecalDesc@Renderer@BattleScarPoint@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarPoint@@V?$allocator@UDecalDesc@Renderer@BattleScarPoint@@@std@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DBC9(this);
}

_extern void _sub_55DBD2(std::_Tree_comp<0,std::_Tmap_traits<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > >,0> >() // 0x55DBD2
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HV?$vector@UDecalDesc@Renderer@BattleScarPoint@@V?$allocator@UDecalDesc@Renderer@BattleScarPoint@@@std@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarPoint@@V?$allocator@UDecalDesc@Renderer@BattleScarPoint@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DBD2(this);
}

_extern void _sub_55DBED(std::map<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > > > *const);
_inline std::map<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > > >::~map<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > > >() // 0x55DBED
{
    mangled_assert("??1?$map@HV?$vector@UDecalDesc@Renderer@BattleScarPoint@@V?$allocator@UDecalDesc@Renderer@BattleScarPoint@@@std@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarPoint@@V?$allocator@UDecalDesc@Renderer@BattleScarPoint@@@std@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DBED(this);
}

_extern void _sub_55DBF2(std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > *const);
_inline std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > >::~pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > >() // 0x55DBF2
{
    mangled_assert("??1?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarPoint@@V?$allocator@UDecalDesc@Renderer@BattleScarPoint@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DBF2(this);
}

_extern void _sub_55DC44(BattleScarPoint::Type *const);
BattleScarPoint::Type::~Type() // 0x55DC44
{
    mangled_assert("??1Type@BattleScarPoint@@EAE@XZ");
    todo("implement");
    _sub_55DC44(this);
}

_extern void _sub_55DBFA(std::pair<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > *const);
_inline std::pair<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > >::~pair<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > >() // 0x55DBFA
{
    mangled_assert("??1?$pair@HV?$vector@UDecalDesc@Renderer@BattleScarPoint@@V?$allocator@UDecalDesc@Renderer@BattleScarPoint@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DBFA(this);
}

_extern bool _sub_55F4C0(BattleScarPoint::Type *const, LuaConfig &);
bool BattleScarPoint::Type::load(LuaConfig &) // 0x55F4C0
{
    mangled_assert("?load@Type@BattleScarPoint@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_55F4C0(this, arg);
    return __result;
}

_extern void _sub_55F830(BattleScarPoint::Type *const, LuaConfig &, __int32);
void BattleScarPoint::Type::loadTextures(LuaConfig &, __int32) // 0x55F830
{
    mangled_assert("?loadTextures@Type@BattleScarPoint@@AAEXAAVLuaConfig@@H@Z");
    todo("implement");
    _sub_55F830(this, arg, arg);
}

_extern void _sub_55F849(BattleScarPoint::Type *const, LuaConfig &);
void BattleScarPoint::Type::loadTextures_ver1(LuaConfig &) // 0x55F849
{
    mangled_assert("?loadTextures_ver1@Type@BattleScarPoint@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_55F849(this, arg);
}

_extern void _sub_55FA53(BattleScarPoint::Type *const, LuaConfig &, char const *, BattleScarPoint::Type::TextureType, bool);
void BattleScarPoint::Type::loadTextures_ver2(LuaConfig &, char const *, BattleScarPoint::Type::TextureType, bool) // 0x55FA53
{
    mangled_assert("?loadTextures_ver2@Type@BattleScarPoint@@AAEXAAVLuaConfig@@PBDW4TextureType@12@_N@Z");
    todo("implement");
    _sub_55FA53(this, arg, arg, arg, arg);
}

_extern void _sub_55FA1D(BattleScarPoint::Type *const, LuaConfig &);
void BattleScarPoint::Type::loadTextures_ver2(LuaConfig &) // 0x55FA1D
{
    mangled_assert("?loadTextures_ver2@Type@BattleScarPoint@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_55FA1D(this, arg);
}

_extern void _sub_55F5E8(BattleScarPoint::Type *const, LuaConfig &, __int32);
void BattleScarPoint::Type::loadFXs(LuaConfig &, __int32) // 0x55F5E8
{
    mangled_assert("?loadFXs@Type@BattleScarPoint@@AAEXAAVLuaConfig@@H@Z");
    todo("implement");
    _sub_55F5E8(this, arg, arg);
}

_extern void _sub_55F633(BattleScarPoint::Type *const, LuaConfig &);
void BattleScarPoint::Type::loadFXs_ver2(LuaConfig &) // 0x55F633
{
    mangled_assert("?loadFXs_ver2@Type@BattleScarPoint@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_55F633(this, arg);
}

_extern void _sub_55F70F(BattleScarPoint::Type *const, LuaConfig &);
void BattleScarPoint::Type::loadFXs_ver3(LuaConfig &) // 0x55F70F
{
    mangled_assert("?loadFXs_ver3@Type@BattleScarPoint@@AAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_55F70F(this, arg);
}

_extern bool _sub_56032F(BattleScarPoint::Type const *const);
bool BattleScarPoint::Type::randIgnore() const // 0x56032F
{
    mangled_assert("?randIgnore@Type@BattleScarPoint@@MBE_NXZ");
    todo("implement");
    bool __result = _sub_56032F(this);
    return __result;
}

_extern bool _sub_55F36B(BattleScarPoint::Type const *const, BattleScarManager::DamageInfo const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *, matrix4 const &);
bool BattleScarPoint::Type::ignoreDamage(BattleScarManager::DamageInfo const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *, matrix4 const &) const // 0x55F36B
{
    mangled_assert("?ignoreDamage@Type@BattleScarPoint@@MBE_NABUDamageInfo@BattleScarManager@@MPBV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@ABVmatrix4@@@Z");
    todo("implement");
    bool __result = _sub_55F36B(this, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_55EC66(BattleScarPoint::Type *const, BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &);
void BattleScarPoint::Type::damageBegin(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &) // 0x55EC66
{
    mangled_assert("?damageBegin@Type@BattleScarPoint@@MAEXABUDamageInfo@BattleScarManager@@MHJAAVBattleScarStats@@@Z");
    todo("implement");
    _sub_55EC66(this, arg, arg, arg, arg, arg);
}

_extern void _sub_55EE5E(BattleScarPoint::Type *const);
void BattleScarPoint::Type::damageEnd() // 0x55EE5E
{
    mangled_assert("?damageEnd@Type@BattleScarPoint@@MAEXXZ");
    todo("implement");
    _sub_55EE5E(this);
}

_extern bool _sub_55FCAE(BattleScarPoint::Type *const, BattleScarManager::DamageTarget &);
bool BattleScarPoint::Type::onDamage(BattleScarManager::DamageTarget &) // 0x55FCAE
{
    mangled_assert("?onDamage@Type@BattleScarPoint@@MAE_NAAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
    bool __result = _sub_55FCAE(this, arg);
    return __result;
}

_extern void _sub_5604B9(BattleScarPoint::Type const *const);
void BattleScarPoint::Type::renderBegin() const // 0x5604B9
{
    mangled_assert("?renderBegin@Type@BattleScarPoint@@UBEXXZ");
    todo("implement");
    _sub_5604B9(this);
}

_extern void _sub_5605A8(BattleScarPoint::Type const *const);
void BattleScarPoint::Type::renderEnd() const // 0x5605A8
{
    mangled_assert("?renderEnd@Type@BattleScarPoint@@UBEXXZ");
    todo("implement");
    _sub_5605A8(this);
}

_extern void _sub_5604A4(BattleScarPoint::Type const *const, BattleScarPoint::Obj const *);
void BattleScarPoint::Type::render(BattleScarPoint::Obj const *) const // 0x5604A4
{
    mangled_assert("?render@Type@BattleScarPoint@@QBEXPBVObj@2@@Z");
    todo("implement");
    _sub_5604A4(this, arg);
}

_extern void _sub_55EBFA(BattleScarPoint::Type *const, void *, BattleScarManager::Handle &);
void BattleScarPoint::Type::createObject(void *, BattleScarManager::Handle &) // 0x55EBFA
{
    mangled_assert("?createObject@Type@BattleScarPoint@@UAEXPAXAAUHandle@BattleScarManager@@@Z");
    todo("implement");
    _sub_55EBFA(this, arg, arg);
}

_extern unsigned __int32 _sub_55FCA8(BattleScarPoint::Type const *const);
unsigned __int32 BattleScarPoint::Type::objectSize() const // 0x55FCA8
{
    mangled_assert("?objectSize@Type@BattleScarPoint@@UBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_55FCA8(this);
    return __result;
}

_extern void _sub_5603F5(BattleScarPoint::Type *const);
void BattleScarPoint::Type::reloadTextures() // 0x5603F5
{
    mangled_assert("?reloadTextures@Type@BattleScarPoint@@UAEXXZ");
    todo("implement");
    _sub_5603F5(this);
}

_extern bool _sub_55FDBC(BattleScarPoint::Type *const, vector3 const &, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &);
bool BattleScarPoint::Type::onDamagePoint(vector3 const &, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &) // 0x55FDBC
{
    mangled_assert("?onDamagePoint@Type@BattleScarPoint@@AAE_NABVvector3@@00AAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
    bool __result = _sub_55FDBC(this, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_55F437(BattleScarPoint::Type const *const, vector3 const &, vector3 const &, vector3 const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *);
bool BattleScarPoint::Type::ignoreEvent(vector3 const &, vector3 const &, vector3 const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *) const // 0x55F437
{
    mangled_assert("?ignoreEvent@Type@BattleScarPoint@@ABE_NABVvector3@@00MPBV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_55F437(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern bool _sub_55E8A3(BattleScarPoint::Type *const, vector3 const &, vector3 const &, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, BattleScarManager::Object::History &);
bool BattleScarPoint::Type::assignUVs(vector3 const &, vector3 const &, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, BattleScarManager::Object::History &) // 0x55E8A3
{
    mangled_assert("?assignUVs@Type@BattleScarPoint@@AAE_NABVvector3@@0AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@AAV?$vector@GV?$allocator@G@std@@@5@AAUHistory@Object@BattleScarManager@@@Z");
    todo("implement");
    bool __result = _sub_55E8A3(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_55F2B8(BattleScarPoint::Type *const);
void BattleScarPoint::Type::eventAbortCleanup() // 0x55F2B8
{
    mangled_assert("?eventAbortCleanup@Type@BattleScarPoint@@AAEXXZ");
    todo("implement");
    _sub_55F2B8(this);
}

_extern bool _sub_56091A(BattleScarPoint::Type const *const, vector3 const &);
bool BattleScarPoint::Type::verifyTexDir(vector3 const &) const // 0x56091A
{
    mangled_assert("?verifyTexDir@Type@BattleScarPoint@@ABE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_56091A(this, arg);
    return __result;
}

_extern _sub_55DA20(BattleScarPoint::Obj *const, BattleScarManager::Type *, BattleScarManager::Handle &);
BattleScarPoint::Obj::Obj(BattleScarManager::Type *, BattleScarManager::Handle &) // 0x55DA20
{
    mangled_assert("??0Obj@BattleScarPoint@@AAE@PAVType@BattleScarManager@@AAUHandle@3@@Z");
    todo("implement");
    _sub_55DA20(this, arg, arg);
}

_extern void _sub_55DC19(BattleScarPoint::Obj *const);
BattleScarPoint::Obj::~Obj() // 0x55DC19
{
    mangled_assert("??1Obj@BattleScarPoint@@EAE@XZ");
    todo("implement");
    _sub_55DC19(this);
}

_extern void _sub_55EFC7(BattleScarPoint::Obj const *const);
void BattleScarPoint::Obj::display() const // 0x55EFC7
{
    mangled_assert("?display@Obj@BattleScarPoint@@UBEXXZ");
    todo("implement");
    _sub_55EFC7(this);
}

_extern bool _sub_55F47A(BattleScarPoint::Obj const *const, vector3 const &, float);
bool BattleScarPoint::Obj::inProximity(vector3 const &, float) const // 0x55F47A
{
    mangled_assert("?inProximity@Obj@BattleScarPoint@@UBE_NABVvector3@@M@Z");
    todo("implement");
    bool __result = _sub_55F47A(this, arg, arg);
    return __result;
}

_extern void _sub_55EFC6(BattleScarPoint::Obj const *const);
void BattleScarPoint::Obj::debugDisplay() const // 0x55EFC6
{
    mangled_assert("?debugDisplay@Obj@BattleScarPoint@@ABEXXZ");
    todo("implement");
    _sub_55EFC6(this);
}

_extern _sub_55DA3C(BattleScarPoint::Renderer *const);
BattleScarPoint::Renderer::Renderer() // 0x55DA3C
{
    mangled_assert("??0Renderer@BattleScarPoint@@QAE@XZ");
    todo("implement");
    _sub_55DA3C(this);
}

_extern _sub_55DA51(BattleScarUtil::TempMesh *const);
_inline BattleScarUtil::TempMesh::TempMesh() // 0x55DA51
{
    mangled_assert("??0TempMesh@BattleScarUtil@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DA51(this);
}

_extern void _sub_55DC24(BattleScarPoint::Renderer *const);
BattleScarPoint::Renderer::~Renderer() // 0x55DC24
{
    mangled_assert("??1Renderer@BattleScarPoint@@QAE@XZ");
    todo("implement");
    _sub_55DC24(this);
}

_extern void _sub_55DC29(BattleScarUtil::TempMesh *const);
_inline BattleScarUtil::TempMesh::~TempMesh() // 0x55DC29
{
    mangled_assert("??1TempMesh@BattleScarUtil@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_55DC29(this);
}

_extern void _sub_5604AF(BattleScarPoint::Renderer *const, std::vector<Texture *,std::allocator<Texture *> > const *);
void BattleScarPoint::Renderer::renderBegin(std::vector<Texture *,std::allocator<Texture *> > const *) // 0x5604AF
{
    mangled_assert("?renderBegin@Renderer@BattleScarPoint@@QAEXPBV?$vector@PAVTexture@@V?$allocator@PAVTexture@@@std@@@std@@@Z");
    todo("implement");
    _sub_5604AF(this, arg);
}

_extern void _sub_560457(BattleScarPoint::Renderer *const, BattleScarManager::Object const *);
void BattleScarPoint::Renderer::render(BattleScarManager::Object const *) // 0x560457
{
    mangled_assert("?render@Renderer@BattleScarPoint@@QAEXPBVObject@BattleScarManager@@@Z");
    todo("implement");
    _sub_560457(this, arg);
}

_extern void _sub_560359(BattleScarPoint::Renderer *const, __int32, matrix4 const &, float, BattleScarManager::Object::Decal const *);
void BattleScarPoint::Renderer::registerDecal(__int32, matrix4 const &, float, BattleScarManager::Object::Decal const *) // 0x560359
{
    mangled_assert("?registerDecal@Renderer@BattleScarPoint@@AAEXHABVmatrix4@@MPBVDecal@Object@BattleScarManager@@@Z");
    todo("implement");
    _sub_560359(this, arg, arg, arg, arg);
}

_extern void _sub_560512(BattleScarPoint::Renderer *const);
void BattleScarPoint::Renderer::renderEnd() // 0x560512
{
    mangled_assert("?renderEnd@Renderer@BattleScarPoint@@QAEXXZ");
    todo("implement");
    _sub_560512(this);
}

_extern void _sub_5604C6(BattleScarPoint::Renderer *const, matrix4 const &, float, BattleScarManager::Object::Decal const *);
void BattleScarPoint::Renderer::renderDecal(matrix4 const &, float, BattleScarManager::Object::Decal const *) // 0x5604C6
{
    mangled_assert("?renderDecal@Renderer@BattleScarPoint@@AAEXABVmatrix4@@MPBVDecal@Object@BattleScarManager@@@Z");
    todo("implement");
    _sub_5604C6(this, arg, arg, arg);
}

/* ---------- private code */

_extern void _sub_5606BC(vector3 const &, vector3 &, vector3 &);
_static void shipAlignUV(vector3 const &texDir, vector3 &texRight, vector3 &texUp) // 0x5606BC
{
    mangled_assert("shipAlignUV");
    todo("implement");
    _sub_5606BC(texDir, texRight, texUp);
}

_extern __int32 _sub_560008(vector3 const &, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > &);
_static __int32 pruneNonIncidentFaces(vector3 const &coDir, std::vector<FatVertex,std::allocator<FatVertex> > &vertices, std::vector<unsigned short,std::allocator<unsigned short> > &vertIndices, std::vector<unsigned short,std::allocator<unsigned short> > &triIndices) // 0x560008
{
    mangled_assert("pruneNonIncidentFaces");
    todo("implement");
    __int32 __result = _sub_560008(coDir, vertices, vertIndices, triIndices);
    return __result;
}
#endif

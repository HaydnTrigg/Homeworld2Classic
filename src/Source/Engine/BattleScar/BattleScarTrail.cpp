#if 0
/* ---------- headers */

#include "decomp.h"
#include <luaconfig\luaconfig.h>
#include <set>
#include <lua.h>
#include <Render\gl\r_types.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Collision\Primitives\triangle.h>
#include <Render\objects\cliprect.h>
#include <gameRenderDebug.h>
#include <Render\gl\r_defines.h>
#include <platform\timer.h>
#include <Render\gl\glext.h>
#include <platform\platformexports.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\matrix3.h>
#include <BattleScar\BattleScarUtil.h>
#include <boost\checked_delete.hpp>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\FxGL\FXManager.h>
#include <Render\objects\core.h>
#include <Render\FxGL\VarMulti.h>
#include <new>
#include <Render\gl\types.h>
#include <Render\gl\lotypes.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <savegame.h>
#include <xmemory>
#include <task.h>
#include <stack>
#include <debug\ctassert.h>
#include <math.h>
#include <list>
#include <BattleScar\BattleScarInternal.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <gameRandom.h>
#include <xtree>
#include <random.h>
#include <boost\scoped_ptr.hpp>
#include <platform\osdef.h>
#include <Mathlib\vector2.h>
#include <Render\objects\compiledtext.h>
#include <util\types.h>
#include <BattleScar\BattleScarStats.h>
#include <boost\cstdint.hpp>
#include <renderer.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\fastmath.h>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\obb.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <util\colour.h>
#include <savegamedef.h>
#include <BattleScar\BattleScarTrail.h>
#include <BattleScar\BattleScarManager.h>
#include <string>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

typedef std::map<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > > > DecalMap;

/* ---------- prototypes */

extern void clearTopBotBorderCB(TextureFormat format, __int32 level, __int32 width, __int32 height, void *user);
extern void clearLeftRightBorderCB(TextureFormat format, __int32 level, __int32 width, __int32 height, void *user);

_static bool orientTexCoord(vector3 const &coPoint, vector3 const &prevCoPoint, vector3 const &texDir, std::vector<float,std::allocator<float> > const &triWeights, vector3 &right, vector3 &up);
_static void projectMaskUVs(vector3 const &coPoint, vector3 const &prevCoPoint, BattleScarTrail::TextureTransform const &texTxfm, float radius, FatVertex *vertices, __int32 numVertices);
_static void vectorToSet(std::vector<unsigned short,std::allocator<unsigned short> > const &ivec, std::set<unsigned short,std::less<unsigned short>,std::allocator<unsigned short> > &iset);
_static bool findNewTriangles(std::vector<unsigned short,std::allocator<unsigned short> > const &refDecalTriIndices, std::vector<unsigned short,std::allocator<unsigned short> > const &newDecalTriIndices, std::vector<unsigned short,std::allocator<unsigned short> > &newTriangles);
_static bool isDirChanged(BattleScarTrail::Obj const *pObjToExtend, vector3 const &coPoint, float distErr);
_static void getDotTexTxfm(std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, vector3 const &coPoint, float radius, BattleScarTrail::TextureTransform &texTxfm);
_static bool diffTexTxfm(BattleScarTrail::TextureTransform const &texTxfm1, BattleScarTrail::TextureTransform const &texTxfm2);
_static Collision::Sphere mergeBoundSphere(Collision::Sphere const &sphere1, Collision::Sphere const &sphere2);
_static unsigned __int32 getRenderMask(bool bUseMaskTex);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const kMaxExtendTime; // 0x79FDB4
    extern BattleScarUtil::TempMesh s_tempDecalMesh; // 0x8449C0
    extern std::_Nil _Nil_obj; // 0x8449E4
}

/* ---------- public code */

_inline BattleScarTrail::Renderer::DecalDesc::DecalDesc() // 0x562878
{
    mangled_assert("??0DecalDesc@Renderer@BattleScarTrail@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void clearTopBotBorderCB(TextureFormat format, __int32 level, __int32 width, __int32 height, void *user) // 0x563931
{
    mangled_assert("?clearTopBotBorderCB@@YGXW4TextureFormat@@HHHPAX@Z");
    todo("implement");
}

void clearLeftRightBorderCB(TextureFormat format, __int32 level, __int32 width, __int32 height, void *user) // 0x5638FA
{
    mangled_assert("?clearLeftRightBorderCB@@YGXW4TextureFormat@@HHHPAX@Z");
    todo("implement");
}

BattleScarManager::Type *BattleScarTrail::Type::creator(char const *name) // 0x5639E6
{
    mangled_assert("?creator@Type@BattleScarTrail@@SGPAV1BattleScarManager@@PBD@Z");
    todo("implement");
}

BattleScarTrail::Type::Type(char const *) // 0x5628F1
{
    mangled_assert("??0Type@BattleScarTrail@@AAE@PBD@Z");
    todo("implement");
}

_inline std::_Tree_buy<unsigned short,std::allocator<unsigned short> >::~_Tree_buy<unsigned short,std::allocator<unsigned short> >() // 0x562B09
{
    mangled_assert("??1?$_Tree_buy@GV?$allocator@G@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > >,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > > >::~_Tree_buy<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > >,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > > >() // 0x562B12
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarTrail@@V?$allocator@UDecalDesc@Renderer@BattleScarTrail@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarTrail@@V?$allocator@UDecalDesc@Renderer@BattleScarTrail@@@std@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > >,0> >() // 0x562B1B
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HV?$vector@UDecalDesc@Renderer@BattleScarTrail@@V?$allocator@UDecalDesc@Renderer@BattleScarTrail@@@std@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarTrail@@V?$allocator@UDecalDesc@Renderer@BattleScarTrail@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tset_traits<unsigned short,std::less<unsigned short>,std::allocator<unsigned short>,0> >::~_Tree_comp<0,std::_Tset_traits<unsigned short,std::less<unsigned short>,std::allocator<unsigned short>,0> >() // 0x562B24
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@GU?$less@G@std@@V?$allocator@G@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > > >::~map<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > > >() // 0x562B2D
{
    mangled_assert("??1?$map@HV?$vector@UDecalDesc@Renderer@BattleScarTrail@@V?$allocator@UDecalDesc@Renderer@BattleScarTrail@@@std@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarTrail@@V?$allocator@UDecalDesc@Renderer@BattleScarTrail@@@std@@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > >::~pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > >() // 0x562B32
{
    mangled_assert("??1?$pair@$$CBHV?$vector@UDecalDesc@Renderer@BattleScarTrail@@V?$allocator@UDecalDesc@Renderer@BattleScarTrail@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > >::~pair<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > >() // 0x562B3A
{
    mangled_assert("??1?$pair@HV?$vector@UDecalDesc@Renderer@BattleScarTrail@@V?$allocator@UDecalDesc@Renderer@BattleScarTrail@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::set<unsigned short,std::less<unsigned short>,std::allocator<unsigned short> >::~set<unsigned short,std::less<unsigned short>,std::allocator<unsigned short> >() // 0x562B4A
{
    mangled_assert("??1?$set@GU?$less@G@std@@V?$allocator@G@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

BattleScarTrail::Type::~Type() // 0x562B64
{
    mangled_assert("??1Type@BattleScarTrail@@EAE@XZ");
    todo("implement");
}

bool BattleScarTrail::Type::load(LuaConfig &) // 0x565406
{
    mangled_assert("?load@Type@BattleScarTrail@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::healthLimitDamage(float, BattleScarStats const &) const // 0x564FEA
{
    mangled_assert("?healthLimitDamage@Type@BattleScarTrail@@MBE_NMABVBattleScarStats@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::randIgnore() const // 0x566A65
{
    mangled_assert("?randIgnore@Type@BattleScarTrail@@MBE_NXZ");
    todo("implement");
}

bool BattleScarTrail::Type::ignoreDamage(BattleScarManager::DamageInfo const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *, matrix4 const &) const // 0x565015
{
    mangled_assert("?ignoreDamage@Type@BattleScarTrail@@MBE_NABUDamageInfo@BattleScarManager@@MPBV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@ABVmatrix4@@@Z");
    todo("implement");
}

void BattleScarTrail::Type::damageBegin(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &) // 0x563A20
{
    mangled_assert("?damageBegin@Type@BattleScarTrail@@MAEXABUDamageInfo@BattleScarManager@@MHJAAVBattleScarStats@@@Z");
    todo("implement");
}

void BattleScarTrail::Type::damageEnd() // 0x563AD5
{
    mangled_assert("?damageEnd@Type@BattleScarTrail@@MAEXXZ");
    todo("implement");
}

bool BattleScarTrail::Type::onDamage(BattleScarManager::DamageTarget &) // 0x566468
{
    mangled_assert("?onDamage@Type@BattleScarTrail@@MAE_NAAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
}

void BattleScarTrail::Type::renderBegin() const // 0x566D9A
{
    mangled_assert("?renderBegin@Type@BattleScarTrail@@UBEXXZ");
    todo("implement");
}

void BattleScarTrail::Type::renderEnd() const // 0x566ED6
{
    mangled_assert("?renderEnd@Type@BattleScarTrail@@UBEXXZ");
    todo("implement");
}

void BattleScarTrail::Type::render(BattleScarTrail::Obj const *) const // 0x566D6A
{
    mangled_assert("?render@Type@BattleScarTrail@@QBEXPBVObj@2@@Z");
    todo("implement");
}

void BattleScarTrail::Type::createObject(void *, BattleScarManager::Handle &) // 0x5639B4
{
    mangled_assert("?createObject@Type@BattleScarTrail@@UAEXPAXAAUHandle@BattleScarManager@@@Z");
    todo("implement");
}

unsigned __int32 BattleScarTrail::Type::objectSize() const // 0x566462
{
    mangled_assert("?objectSize@Type@BattleScarTrail@@UBEIXZ");
    todo("implement");
}

void BattleScarTrail::Type::reloadTextures() // 0x566B04
{
    mangled_assert("?reloadTextures@Type@BattleScarTrail@@UAEXXZ");
    todo("implement");
}

bool BattleScarTrail::Type::tooCloseToExisting(vector3 const &, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *) const // 0x56704E
{
    mangled_assert("?tooCloseToExisting@Type@BattleScarTrail@@ABE_NABVvector3@@PBV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@@Z");
    todo("implement");
}

BattleScarTrail::Obj *BattleScarTrail::Type::findTrailToExtend(vector3 const &, BattleScarManager::DamageTarget const &) const // 0x564DE6
{
    mangled_assert("?findTrailToExtend@Type@BattleScarTrail@@ABEPAVObj@2@ABVvector3@@ABUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::extendTrail(BattleScarTrail::Obj *, vector3 const &, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &) // 0x564AE9
{
    mangled_assert("?extendTrail@Type@BattleScarTrail@@AAE_NPAVObj@2@ABVvector3@@11AAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::newTrail(vector3 const &, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &) // 0x56634E
{
    mangled_assert("?newTrail@Type@BattleScarTrail@@AAE_NABVvector3@@00AAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
}

BattleScarManager::Object::Decal *BattleScarTrail::Type::newDotDecal(BattleScarTrail::Obj *, vector3 const &, __int32, BattleScarManager::DamageTarget &, BattleScarManager::Object::History *) // 0x566191
{
    mangled_assert("?newDotDecal@Type@BattleScarTrail@@AAEPAVDecal@Object@BattleScarManager@@PAVObj@2@ABVvector3@@HAAUDamageTarget@5@PAUHistory@45@@Z");
    todo("implement");
}

BattleScarManager::Object::Decal *BattleScarTrail::Type::newDashDecal(BattleScarTrail::Obj *, vector3 const &, BattleScarManager::DamageTarget &) // 0x565D91
{
    mangled_assert("?newDashDecal@Type@BattleScarTrail@@AAEPAVDecal@Object@BattleScarManager@@PAVObj@2@ABVvector3@@AAUDamageTarget@5@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::extendDashDot(BattleScarTrail::Obj *, vector3 const &, BattleScarManager::DamageTarget &) // 0x5648AE
{
    mangled_assert("?extendDashDot@Type@BattleScarTrail@@AAE_NPAVObj@2@ABVvector3@@AAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::newDashDot(BattleScarTrail::Obj *, vector3 const &, BattleScarManager::DamageTarget &) // 0x56601D
{
    mangled_assert("?newDashDot@Type@BattleScarTrail@@AAE_NPAVObj@2@ABVvector3@@AAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::extendDashDecal(BattleScarTrail::Obj *, BattleScarManager::Object::Decal *, BattleScarManager::Object::Decal const *, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &) // 0x564763
{
    mangled_assert("?extendDashDecal@Type@BattleScarTrail@@AAE_NPAVObj@2@PAVDecal@Object@BattleScarManager@@PBV456@ABVvector3@@3AAUDamageTarget@6@@Z");
    todo("implement");
}

void BattleScarTrail::Type::insertTrianglesIntoDash(BattleScarTrail::Obj *, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > const &, BattleScarManager::DamageTarget &) const // 0x5651F5
{
    mangled_assert("?insertTrianglesIntoDash@Type@BattleScarTrail@@ABEXPAVObj@2@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@AAV?$vector@GV?$allocator@G@std@@@5@2ABV65@AAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::assignDotUVs(BattleScarTrail::TextureTransform const &, std::vector<FatVertex,std::allocator<FatVertex> > &, BattleScarManager::Object::History *) // 0x5637F8
{
    mangled_assert("?assignDotUVs@Type@BattleScarTrail@@AAE_NABUTextureTransform@2@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@PAUHistory@Object@BattleScarManager@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::assignDashUVs(vector3 const &, BattleScarTrail::TextureTransform const &, std::vector<FatVertex,std::allocator<FatVertex> > &) // 0x563780
{
    mangled_assert("?assignDashUVs@Type@BattleScarTrail@@AAE_NABVvector3@@ABUTextureTransform@2@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@@Z");
    todo("implement");
}

bool BattleScarTrail::Type::needNewTexTransform(BattleScarTrail::Obj *, vector3 const &, BattleScarManager::DamageTarget &) // 0x565C31
{
    mangled_assert("?needNewTexTransform@Type@BattleScarTrail@@AAE_NPAVObj@2@ABVvector3@@AAUDamageTarget@BattleScarManager@@@Z");
    todo("implement");
}

void BattleScarTrail::Type::eventAbortCleanup() // 0x5646CF
{
    mangled_assert("?eventAbortCleanup@Type@BattleScarTrail@@AAEXXZ");
    todo("implement");
}

BattleScarTrail::Obj::Obj(BattleScarManager::Type *, BattleScarManager::Handle &) // 0x562897
{
    mangled_assert("??0Obj@BattleScarTrail@@AAE@PAVType@BattleScarManager@@AAUHandle@3@@Z");
    todo("implement");
}

BattleScarTrail::Obj::~Obj() // 0x562B54
{
    mangled_assert("??1Obj@BattleScarTrail@@EAE@XZ");
    todo("implement");
}

void BattleScarTrail::Obj::display() const // 0x564160
{
    mangled_assert("?display@Obj@BattleScarTrail@@UBEXXZ");
    todo("implement");
}

bool BattleScarTrail::Obj::inProximity(vector3 const &, float) const // 0x565118
{
    mangled_assert("?inProximity@Obj@BattleScarTrail@@UBE_NABVvector3@@M@Z");
    todo("implement");
}

bool BattleScarTrail::Obj::save(SaveGameData *) const // 0x566FAD
{
    mangled_assert("?save@Obj@BattleScarTrail@@UBE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool BattleScarTrail::Obj::restore(SaveGameData *) // 0x566F9C
{
    mangled_assert("?restore@Obj@BattleScarTrail@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

void BattleScarTrail::Obj::finalizeCmdSet(BattleScarTrail::Obj::FinalizeCommand &) // 0x564CC7
{
    mangled_assert("?finalizeCmdSet@Obj@BattleScarTrail@@QAEXAAUFinalizeCommand@12@@Z");
    todo("implement");
}

void BattleScarTrail::Obj::finalizeCmdAbort() // 0x564BBA
{
    mangled_assert("?finalizeCmdAbort@Obj@BattleScarTrail@@QAEXXZ");
    todo("implement");
}

void BattleScarTrail::Obj::finalizeCmdCommit() // 0x564C2A
{
    mangled_assert("?finalizeCmdCommit@Obj@BattleScarTrail@@QAEXXZ");
    todo("implement");
}

void BattleScarTrail::Obj::debugDisplay() const // 0x563D93
{
    mangled_assert("?debugDisplay@Obj@BattleScarTrail@@ABEXXZ");
    todo("implement");
}

BattleScarTrail::Renderer::Renderer() // 0x5628D9
{
    mangled_assert("??0Renderer@BattleScarTrail@@QAE@XZ");
    todo("implement");
}

_inline BattleScarTrail::TextureTransform::TextureTransform() // 0x5628EE
{
    mangled_assert("??0TextureTransform@BattleScarTrail@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

BattleScarTrail::Renderer::~Renderer() // 0x562B5F
{
    mangled_assert("??1Renderer@BattleScarTrail@@QAE@XZ");
    todo("implement");
}

void BattleScarTrail::Renderer::renderBegin(std::vector<Texture *,std::allocator<Texture *> > const *, std::vector<bool,std::allocator<bool> > const *, Texture *, bool, bool) // 0x566D75
{
    mangled_assert("?renderBegin@Renderer@BattleScarTrail@@QAEXPBV?$vector@PAVTexture@@V?$allocator@PAVTexture@@@std@@@std@@PBV?$vector@_NV?$allocator@_N@std@@@4@PAVTexture@@_N3@Z");
    todo("implement");
}

void BattleScarTrail::Renderer::render(BattleScarManager::Object const *) // 0x566B6A
{
    mangled_assert("?render@Renderer@BattleScarTrail@@QAEXPBVObject@BattleScarManager@@@Z");
    todo("implement");
}

void BattleScarTrail::Renderer::registerDecal(__int32, matrix4 const &, float, BattleScarManager::Object::Decal const *) // 0x566A68
{
    mangled_assert("?registerDecal@Renderer@BattleScarTrail@@AAEXHABVmatrix4@@MPBVDecal@Object@BattleScarManager@@@Z");
    todo("implement");
}

void BattleScarTrail::Renderer::renderEnd() // 0x566E0F
{
    mangled_assert("?renderEnd@Renderer@BattleScarTrail@@QAEXXZ");
    todo("implement");
}

void BattleScarTrail::Renderer::renderDecal(matrix4 const &, float, BattleScarManager::Object::Decal const *) // 0x566DC3
{
    mangled_assert("?renderDecal@Renderer@BattleScarTrail@@AAEXABVmatrix4@@MPBVDecal@Object@BattleScarManager@@@Z");
    todo("implement");
}

void BattleScarTrail::Renderer::textureBegin(__int32) // 0x566FCE
{
    mangled_assert("?textureBegin@Renderer@BattleScarTrail@@AAEXH@Z");
    todo("implement");
}

void BattleScarTrail::Renderer::textureEnd(__int32) // 0x56701D
{
    mangled_assert("?textureEnd@Renderer@BattleScarTrail@@AAEXH@Z");
    todo("implement");
}

/* ---------- private code */

_static bool orientTexCoord(vector3 const &coPoint, vector3 const &prevCoPoint, vector3 const &texDir, std::vector<float,std::allocator<float> > const &triWeights, vector3 &right, vector3 &up) // 0x5665A0
{
    mangled_assert("orientTexCoord");
    todo("implement");
}

_static void projectMaskUVs(vector3 const &coPoint, vector3 const &prevCoPoint, BattleScarTrail::TextureTransform const &texTxfm, float radius, FatVertex *vertices, __int32 numVertices) // 0x566772
{
    mangled_assert("projectMaskUVs");
    todo("implement");
}

_static void vectorToSet(std::vector<unsigned short,std::allocator<unsigned short> > const &ivec, std::set<unsigned short,std::less<unsigned short>,std::allocator<unsigned short> > &iset) // 0x56712C
{
    mangled_assert("vectorToSet");
    todo("implement");
}

_static bool findNewTriangles(std::vector<unsigned short,std::allocator<unsigned short> > const &refDecalTriIndices, std::vector<unsigned short,std::allocator<unsigned short> > const &newDecalTriIndices, std::vector<unsigned short,std::allocator<unsigned short> > &newTriangles) // 0x564D45
{
    mangled_assert("findNewTriangles");
    todo("implement");
}

_static bool isDirChanged(BattleScarTrail::Obj const *pObjToExtend, vector3 const &coPoint, float distErr) // 0x56530F
{
    mangled_assert("isDirChanged");
    todo("implement");
}

_static void getDotTexTxfm(std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, vector3 const &coPoint, float radius, BattleScarTrail::TextureTransform &texTxfm) // 0x564EBB
{
    mangled_assert("getDotTexTxfm");
    todo("implement");
}

_static bool diffTexTxfm(BattleScarTrail::TextureTransform const &texTxfm1, BattleScarTrail::TextureTransform const &texTxfm2) // 0x5640F6
{
    mangled_assert("diffTexTxfm");
    todo("implement");
}

_static Collision::Sphere mergeBoundSphere(Collision::Sphere const &sphere1, Collision::Sphere const &sphere2) // 0x565B1C
{
    mangled_assert("mergeBoundSphere");
    todo("implement");
}

_static unsigned __int32 getRenderMask(bool bUseMaskTex) // 0x564FD1
{
    mangled_assert("getRenderMask");
    todo("implement");
}
#endif

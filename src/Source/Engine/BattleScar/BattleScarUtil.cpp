#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\r_types.h>
#include <xstring>
#include <Mathlib\matvec.h>
#include <platform\sysinputinterface.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <Render\gl\r_defines.h>
#include <Camera\CameraOrbitTarget.h>
#include <Render\gl\glext.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix3.h>
#include <hash_map>
#include <xhash>
#include <Render\FxGL\FXManager.h>
#include <Render\objects\texture.h>
#include <Render\FxGL\VarMulti.h>
#include <new>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <exception>
#include <xstddef>
#include <Render\gl\types.h>
#include <type_traits>
#include <Render\gl\lotypes.h>
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
#include <gameRandom.h>
#include <list>
#include <random.h>
#include <Decal\DecalRefMesh.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <platform\osdef.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <renderer.h>
#include <profile\profile.h>
#include <sobid.h>
#include <iostream>
#include <Collision\primitivesfwd.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <BattleScar\BattleScarStats.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Camera\OrbitParameters.h>
#include <BattleScar\BattleScarUtil.h>
#include <BattleScar\BattleScarManager.h>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <Interface.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool BattleScarUtil::pointInSphere(vector3 const &p, vector3 const &center, float radiusSqr);
extern float BattleScarUtil::triAreaInSphereHelper(vector3 const &v0, vector3 const &v1, vector3 const &v2, float area, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, float *error);
extern float BattleScarUtil::triArea(vector3 const &v0, vector3 const &v1, vector3 const &v2);
extern float BattleScarUtil::triAreaInSphere(vector3 const &v0, vector3 const &v1, vector3 const &v2, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, float *error);
extern float BattleScarUtil::triListAreaInSphere(std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, std::vector<float,std::allocator<float> > &triAreas, float *error);
extern float BattleScarUtil::repairScars(float repairAmount, float currentTime, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &scars, BattleScarStats &stats);
extern void BattleScarUtil::mipMapModCB(__int32 level, __int32 width, __int32 height, unsigned __int32 *data);
extern void BattleScarUtil::clearBorderCB(TextureFormat format, __int32 level, __int32 width, __int32 height, void *user);
extern void BattleScarUtil::createFX(BattleScarManager::Object const *pObj, BattleScarManager::Object::Decal *pDecal, char const *fxName, float scale, matrix4 const &localTxfm);
extern void BattleScarUtil::createFX(BattleScarManager::Object *pObj, char const *fxName, float scale);
extern void BattleScarUtil::getTrianglesVertices(std::vector<unsigned short,std::allocator<unsigned short> > const &faceIndices, BattleScarManager::DamageTarget const &dmgTarget, std::vector<FatVertex,std::allocator<FatVertex> > &fats);
extern __int32 BattleScarUtil::findIntersectGeom(vector3 const &coPoint, float radius, DecalRefMesh const *pRefMesh, std::vector<FatVertex,std::allocator<FatVertex> > &outVertices, std::vector<unsigned short,std::allocator<unsigned short> > &outVertIndices, std::vector<unsigned short,std::allocator<unsigned short> > &outTriIndices);
extern vector3 BattleScarUtil::averageNormal(std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, std::vector<float,std::allocator<float> > const &triWeights);
extern void BattleScarUtil::projectUVs(vector3 const &coPoint, vector3 const &texDir, vector3 const &right, vector3 const &up, float scaleRight, float scaleUp, float radius, std::vector<FatVertex,std::allocator<FatVertex> > &fv, matrix3 *texProjMtx, vector3 *texProjCenter);
extern float BattleScarUtil::averageTexScale(vector3 const &texDir, std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, std::vector<float,std::allocator<float> > const &triWeights);
extern void BattleScarUtil::randomOrient(vector3 const &texDir, vector3 &right, vector3 &up);
extern void BattleScarUtil::pruneUntexturedTris(std::vector<FatVertex,std::allocator<FatVertex> > &inOutVertices, std::vector<unsigned short,std::allocator<unsigned short> > &inOutVertIndices, std::vector<unsigned short,std::allocator<unsigned short> > &inOutTriIndices, bool bClampX, bool bClampY);
extern void BattleScarUtil::normalizeTriAreas(std::vector<float,std::allocator<float> > &triAreasInSphere, float totalAreaInSphere);
extern bool BattleScarUtil::debugIsMouseOver(vector3 const &sphereCenter, float sphereRadius);

_static bool BattleScarUtil::isTextured(vector2 const *triangleUVs, bool bClampX, bool bClampY);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_567FBE(vector3 const &, vector3 const &, float);
bool BattleScarUtil::pointInSphere(vector3 const &p, vector3 const &center, float radiusSqr) // 0x567FBE
{
    mangled_assert("?pointInSphere@BattleScarUtil@@YG_NABVvector3@@0M@Z");
    todo("implement");
    bool __result = _sub_567FBE(p, center, radiusSqr);
    return __result;
}

_extern float _sub_5687F7(vector3 const &, vector3 const &, vector3 const &, float, vector3 const &, float, __int32, float, float *);
float BattleScarUtil::triAreaInSphereHelper(vector3 const &v0, vector3 const &v1, vector3 const &v2, float area, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, float *error) // 0x5687F7
{
    mangled_assert("?triAreaInSphereHelper@BattleScarUtil@@YGMABVvector3@@00M0MHMPAM@Z");
    todo("implement");
    float __result = _sub_5687F7(v0, v1, v2, area, spCenter, spRadiusSqr, maxSubd, minSubdArea, error);
    return __result;
}

_extern float _sub_5686ED(vector3 const &, vector3 const &, vector3 const &);
float BattleScarUtil::triArea(vector3 const &v0, vector3 const &v1, vector3 const &v2) // 0x5686ED
{
    mangled_assert("?triArea@BattleScarUtil@@YGMABVvector3@@00@Z");
    todo("implement");
    float __result = _sub_5686ED(v0, v1, v2);
    return __result;
}

_extern float _sub_5687A6(vector3 const &, vector3 const &, vector3 const &, vector3 const &, float, __int32, float, float *);
float BattleScarUtil::triAreaInSphere(vector3 const &v0, vector3 const &v1, vector3 const &v2, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, float *error) // 0x5687A6
{
    mangled_assert("?triAreaInSphere@BattleScarUtil@@YGMABVvector3@@000MHMPAM@Z");
    todo("implement");
    float __result = _sub_5687A6(v0, v1, v2, spCenter, spRadiusSqr, maxSubd, minSubdArea, error);
    return __result;
}

_extern float _sub_568B0C(std::vector<FatVertex,std::allocator<FatVertex> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &, vector3 const &, float, __int32, float, std::vector<float,std::allocator<float> > &, float *);
float BattleScarUtil::triListAreaInSphere(std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, std::vector<float,std::allocator<float> > &triAreas, float *error) // 0x568B0C
{
    mangled_assert("?triListAreaInSphere@BattleScarUtil@@YGMABV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@ABV?$vector@GV?$allocator@G@std@@@3@ABVvector3@@MHMAAV?$vector@MV?$allocator@M@std@@@3@PAM@Z");
    todo("implement");
    float __result = _sub_568B0C(vertices, vertIndices, spCenter, spRadiusSqr, maxSubd, minSubdArea, triAreas, error);
    return __result;
}

_extern float _sub_5685C5(float, float, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, BattleScarStats &);
float BattleScarUtil::repairScars(float repairAmount, float currentTime, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &scars, BattleScarStats &stats) // 0x5685C5
{
    mangled_assert("?repairScars@BattleScarUtil@@YGMMMAAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@AAVBattleScarStats@@@Z");
    todo("implement");
    float __result = _sub_5685C5(repairAmount, currentTime, scars, stats);
    return __result;
}

_extern void _sub_567F0E(__int32, __int32, __int32, unsigned __int32 *);
void BattleScarUtil::mipMapModCB(__int32 level, __int32 width, __int32 height, unsigned __int32 *data) // 0x567F0E
{
    mangled_assert("?mipMapModCB@BattleScarUtil@@YGXHHHPAI@Z");
    todo("implement");
    _sub_567F0E(level, width, height, data);
}

_extern void _sub_56780C(TextureFormat, __int32, __int32, __int32, void *);
void BattleScarUtil::clearBorderCB(TextureFormat format, __int32 level, __int32 width, __int32 height, void *user) // 0x56780C
{
    mangled_assert("?clearBorderCB@BattleScarUtil@@YGXW4TextureFormat@@HHHPAX@Z");
    todo("implement");
    _sub_56780C(format, level, width, height, user);
}

_extern void _sub_567905(BattleScarManager::Object const *, BattleScarManager::Object::Decal *, char const *, float, matrix4 const &);
void BattleScarUtil::createFX(BattleScarManager::Object const *pObj, BattleScarManager::Object::Decal *pDecal, char const *fxName, float scale, matrix4 const &localTxfm) // 0x567905
{
    mangled_assert("?createFX@BattleScarUtil@@YGXPBVObject@BattleScarManager@@PAVDecal@23@PBDMABVmatrix4@@@Z");
    todo("implement");
    _sub_567905(pObj, pDecal, fxName, scale, localTxfm);
}

_extern void _sub_567872(BattleScarManager::Object *, char const *, float);
void BattleScarUtil::createFX(BattleScarManager::Object *pObj, char const *fxName, float scale) // 0x567872
{
    mangled_assert("?createFX@BattleScarUtil@@YGXPAVObject@BattleScarManager@@PBDM@Z");
    todo("implement");
    _sub_567872(pObj, fxName, scale);
}

_extern void _sub_567D34(std::vector<unsigned short,std::allocator<unsigned short> > const &, BattleScarManager::DamageTarget const &, std::vector<FatVertex,std::allocator<FatVertex> > &);
void BattleScarUtil::getTrianglesVertices(std::vector<unsigned short,std::allocator<unsigned short> > const &faceIndices, BattleScarManager::DamageTarget const &dmgTarget, std::vector<FatVertex,std::allocator<FatVertex> > &fats) // 0x567D34
{
    mangled_assert("?getTrianglesVertices@BattleScarUtil@@YGXABV?$vector@GV?$allocator@G@std@@@std@@ABUDamageTarget@BattleScarManager@@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@3@@Z");
    todo("implement");
    _sub_567D34(faceIndices, dmgTarget, fats);
}

_extern __int32 _sub_567AE4(vector3 const &, float, DecalRefMesh const *, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > &);
__int32 BattleScarUtil::findIntersectGeom(vector3 const &coPoint, float radius, DecalRefMesh const *pRefMesh, std::vector<FatVertex,std::allocator<FatVertex> > &outVertices, std::vector<unsigned short,std::allocator<unsigned short> > &outVertIndices, std::vector<unsigned short,std::allocator<unsigned short> > &outTriIndices) // 0x567AE4
{
    mangled_assert("?findIntersectGeom@BattleScarUtil@@YGHABVvector3@@MPBVDecalRefMesh@@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@AAV?$vector@GV?$allocator@G@std@@@5@3@Z");
    todo("implement");
    __int32 __result = _sub_567AE4(coPoint, radius, pRefMesh, outVertices, outVertIndices, outTriIndices);
    return __result;
}

_extern vector3 _sub_56757A(std::vector<FatVertex,std::allocator<FatVertex> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &, std::vector<float,std::allocator<float> > const &);
vector3 BattleScarUtil::averageNormal(std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, std::vector<float,std::allocator<float> > const &triWeights) // 0x56757A
{
    mangled_assert("?averageNormal@BattleScarUtil@@YG?AVvector3@@ABV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@ABV?$vector@GV?$allocator@G@std@@@4@ABV?$vector@MV?$allocator@M@std@@@4@@Z");
    todo("implement");
    vector3 __result = _sub_56757A(vertices, vertIndices, triWeights);
    return __result;
}

_extern void _sub_568007(vector3 const &, vector3 const &, vector3 const &, vector3 const &, float, float, float, std::vector<FatVertex,std::allocator<FatVertex> > &, matrix3 *, vector3 *);
void BattleScarUtil::projectUVs(vector3 const &coPoint, vector3 const &texDir, vector3 const &right, vector3 const &up, float scaleRight, float scaleUp, float radius, std::vector<FatVertex,std::allocator<FatVertex> > &fv, matrix3 *texProjMtx, vector3 *texProjCenter) // 0x568007
{
    mangled_assert("?projectUVs@BattleScarUtil@@YGXABVvector3@@000MMMAAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@PAVmatrix3@@PAV2@@Z");
    todo("implement");
    _sub_568007(coPoint, texDir, right, up, scaleRight, scaleUp, radius, fv, texProjMtx, texProjCenter);
}

_extern float _sub_5676B6(vector3 const &, std::vector<FatVertex,std::allocator<FatVertex> > const &, std::vector<unsigned short,std::allocator<unsigned short> > const &, std::vector<float,std::allocator<float> > const &);
float BattleScarUtil::averageTexScale(vector3 const &texDir, std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, std::vector<float,std::allocator<float> > const &triWeights) // 0x5676B6
{
    mangled_assert("?averageTexScale@BattleScarUtil@@YGMABVvector3@@ABV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@ABV?$vector@GV?$allocator@G@std@@@4@ABV?$vector@MV?$allocator@M@std@@@4@@Z");
    todo("implement");
    float __result = _sub_5676B6(texDir, vertices, vertIndices, triWeights);
    return __result;
}

_extern void _sub_568387(vector3 const &, vector3 &, vector3 &);
void BattleScarUtil::randomOrient(vector3 const &texDir, vector3 &right, vector3 &up) // 0x568387
{
    mangled_assert("?randomOrient@BattleScarUtil@@YGXABVvector3@@AAV2@1@Z");
    todo("implement");
    _sub_568387(texDir, right, up);
}

_extern void _sub_568142(std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, bool, bool);
void BattleScarUtil::pruneUntexturedTris(std::vector<FatVertex,std::allocator<FatVertex> > &inOutVertices, std::vector<unsigned short,std::allocator<unsigned short> > &inOutVertIndices, std::vector<unsigned short,std::allocator<unsigned short> > &inOutTriIndices, bool bClampX, bool bClampY) // 0x568142
{
    mangled_assert("?pruneUntexturedTris@BattleScarUtil@@YGXAAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@AAV?$vector@GV?$allocator@G@std@@@3@1_N2@Z");
    todo("implement");
    _sub_568142(inOutVertices, inOutVertIndices, inOutTriIndices, bClampX, bClampY);
}

_extern void _sub_567F67(std::vector<float,std::allocator<float> > &, float);
void BattleScarUtil::normalizeTriAreas(std::vector<float,std::allocator<float> > &triAreasInSphere, float totalAreaInSphere) // 0x567F67
{
    mangled_assert("?normalizeTriAreas@BattleScarUtil@@YGXAAV?$vector@MV?$allocator@M@std@@@std@@M@Z");
    todo("implement");
    _sub_567F67(triAreasInSphere, totalAreaInSphere);
}

_extern bool _sub_5679F3(vector3 const &, float);
bool BattleScarUtil::debugIsMouseOver(vector3 const &sphereCenter, float sphereRadius) // 0x5679F3
{
    mangled_assert("?debugIsMouseOver@BattleScarUtil@@YG_NABVvector3@@M@Z");
    todo("implement");
    bool __result = _sub_5679F3(sphereCenter, sphereRadius);
    return __result;
}

/* ---------- private code */

_extern bool _sub_567E6A(vector2 const *, bool, bool);
_static bool BattleScarUtil::isTextured(vector2 const *triangleUVs, bool bClampX, bool bClampY) // 0x567E6A
{
    mangled_assert("BattleScarUtil::isTextured");
    todo("implement");
    bool __result = _sub_567E6A(triangleUVs, bClampX, bClampY);
    return __result;
}
#endif

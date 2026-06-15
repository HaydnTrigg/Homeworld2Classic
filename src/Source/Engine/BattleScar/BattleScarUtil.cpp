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

bool BattleScarUtil::pointInSphere(vector3 const &p, vector3 const &center, float radiusSqr) // 0x567FBE
{
    mangled_assert("?pointInSphere@BattleScarUtil@@YG_NABVvector3@@0M@Z");
    todo("implement");
}

float BattleScarUtil::triAreaInSphereHelper(vector3 const &v0, vector3 const &v1, vector3 const &v2, float area, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, float *error) // 0x5687F7
{
    mangled_assert("?triAreaInSphereHelper@BattleScarUtil@@YGMABVvector3@@00M0MHMPAM@Z");
    todo("implement");
}

float BattleScarUtil::triArea(vector3 const &v0, vector3 const &v1, vector3 const &v2) // 0x5686ED
{
    mangled_assert("?triArea@BattleScarUtil@@YGMABVvector3@@00@Z");
    todo("implement");
}

float BattleScarUtil::triAreaInSphere(vector3 const &v0, vector3 const &v1, vector3 const &v2, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, float *error) // 0x5687A6
{
    mangled_assert("?triAreaInSphere@BattleScarUtil@@YGMABVvector3@@000MHMPAM@Z");
    todo("implement");
}

float BattleScarUtil::triListAreaInSphere(std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, vector3 const &spCenter, float spRadiusSqr, __int32 maxSubd, float minSubdArea, std::vector<float,std::allocator<float> > &triAreas, float *error) // 0x568B0C
{
    mangled_assert("?triListAreaInSphere@BattleScarUtil@@YGMABV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@ABV?$vector@GV?$allocator@G@std@@@3@ABVvector3@@MHMAAV?$vector@MV?$allocator@M@std@@@3@PAM@Z");
    todo("implement");
}

float BattleScarUtil::repairScars(float repairAmount, float currentTime, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &scars, BattleScarStats &stats) // 0x5685C5
{
    mangled_assert("?repairScars@BattleScarUtil@@YGMMMAAV?$vector@UHandle@BattleScarManager@@V?$allocator@UHandle@BattleScarManager@@@std@@@std@@AAVBattleScarStats@@@Z");
    todo("implement");
}

void BattleScarUtil::mipMapModCB(__int32 level, __int32 width, __int32 height, unsigned __int32 *data) // 0x567F0E
{
    mangled_assert("?mipMapModCB@BattleScarUtil@@YGXHHHPAI@Z");
    todo("implement");
}

void BattleScarUtil::clearBorderCB(TextureFormat format, __int32 level, __int32 width, __int32 height, void *user) // 0x56780C
{
    mangled_assert("?clearBorderCB@BattleScarUtil@@YGXW4TextureFormat@@HHHPAX@Z");
    todo("implement");
}

void BattleScarUtil::createFX(BattleScarManager::Object const *pObj, BattleScarManager::Object::Decal *pDecal, char const *fxName, float scale, matrix4 const &localTxfm) // 0x567905
{
    mangled_assert("?createFX@BattleScarUtil@@YGXPBVObject@BattleScarManager@@PAVDecal@23@PBDMABVmatrix4@@@Z");
    todo("implement");
}

void BattleScarUtil::createFX(BattleScarManager::Object *pObj, char const *fxName, float scale) // 0x567872
{
    mangled_assert("?createFX@BattleScarUtil@@YGXPAVObject@BattleScarManager@@PBDM@Z");
    todo("implement");
}

void BattleScarUtil::getTrianglesVertices(std::vector<unsigned short,std::allocator<unsigned short> > const &faceIndices, BattleScarManager::DamageTarget const &dmgTarget, std::vector<FatVertex,std::allocator<FatVertex> > &fats) // 0x567D34
{
    mangled_assert("?getTrianglesVertices@BattleScarUtil@@YGXABV?$vector@GV?$allocator@G@std@@@std@@ABUDamageTarget@BattleScarManager@@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@3@@Z");
    todo("implement");
}

__int32 BattleScarUtil::findIntersectGeom(vector3 const &coPoint, float radius, DecalRefMesh const *pRefMesh, std::vector<FatVertex,std::allocator<FatVertex> > &outVertices, std::vector<unsigned short,std::allocator<unsigned short> > &outVertIndices, std::vector<unsigned short,std::allocator<unsigned short> > &outTriIndices) // 0x567AE4
{
    mangled_assert("?findIntersectGeom@BattleScarUtil@@YGHABVvector3@@MPBVDecalRefMesh@@AAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@AAV?$vector@GV?$allocator@G@std@@@5@3@Z");
    todo("implement");
}

vector3 BattleScarUtil::averageNormal(std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, std::vector<float,std::allocator<float> > const &triWeights) // 0x56757A
{
    mangled_assert("?averageNormal@BattleScarUtil@@YG?AVvector3@@ABV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@ABV?$vector@GV?$allocator@G@std@@@4@ABV?$vector@MV?$allocator@M@std@@@4@@Z");
    todo("implement");
}

void BattleScarUtil::projectUVs(vector3 const &coPoint, vector3 const &texDir, vector3 const &right, vector3 const &up, float scaleRight, float scaleUp, float radius, std::vector<FatVertex,std::allocator<FatVertex> > &fv, matrix3 *texProjMtx, vector3 *texProjCenter) // 0x568007
{
    mangled_assert("?projectUVs@BattleScarUtil@@YGXABVvector3@@000MMMAAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@PAVmatrix3@@PAV2@@Z");
    todo("implement");
}

float BattleScarUtil::averageTexScale(vector3 const &texDir, std::vector<FatVertex,std::allocator<FatVertex> > const &vertices, std::vector<unsigned short,std::allocator<unsigned short> > const &vertIndices, std::vector<float,std::allocator<float> > const &triWeights) // 0x5676B6
{
    mangled_assert("?averageTexScale@BattleScarUtil@@YGMABVvector3@@ABV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@ABV?$vector@GV?$allocator@G@std@@@4@ABV?$vector@MV?$allocator@M@std@@@4@@Z");
    todo("implement");
}

void BattleScarUtil::randomOrient(vector3 const &texDir, vector3 &right, vector3 &up) // 0x568387
{
    mangled_assert("?randomOrient@BattleScarUtil@@YGXABVvector3@@AAV2@1@Z");
    todo("implement");
}

void BattleScarUtil::pruneUntexturedTris(std::vector<FatVertex,std::allocator<FatVertex> > &inOutVertices, std::vector<unsigned short,std::allocator<unsigned short> > &inOutVertIndices, std::vector<unsigned short,std::allocator<unsigned short> > &inOutTriIndices, bool bClampX, bool bClampY) // 0x568142
{
    mangled_assert("?pruneUntexturedTris@BattleScarUtil@@YGXAAV?$vector@UFatVertex@@V?$allocator@UFatVertex@@@std@@@std@@AAV?$vector@GV?$allocator@G@std@@@3@1_N2@Z");
    todo("implement");
}

void BattleScarUtil::normalizeTriAreas(std::vector<float,std::allocator<float> > &triAreasInSphere, float totalAreaInSphere) // 0x567F67
{
    mangled_assert("?normalizeTriAreas@BattleScarUtil@@YGXAAV?$vector@MV?$allocator@M@std@@@std@@M@Z");
    todo("implement");
}

bool BattleScarUtil::debugIsMouseOver(vector3 const &sphereCenter, float sphereRadius) // 0x5679F3
{
    mangled_assert("?debugIsMouseOver@BattleScarUtil@@YG_NABVvector3@@M@Z");
    todo("implement");
}

/* ---------- private code */

_static bool BattleScarUtil::isTextured(vector2 const *triangleUVs, bool bClampX, bool bClampY) // 0x567E6A
{
    mangled_assert("BattleScarUtil::isTextured");
    todo("implement");
}
#endif

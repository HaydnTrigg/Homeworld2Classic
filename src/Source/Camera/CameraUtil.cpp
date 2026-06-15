#if 0
/* ---------- headers */

#include "decomp.h"
#include <Camera\pch.h>
#include <crtdefs.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Camera\Camera.h>
#include <exception>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector4.h>
#include <math.h>
#include <Camera\CameraUtil.h>
#include <Mathlib\mathutil.h>
#include <cfloat>
#include <float.h>
#include <crtwrn.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void MatrixMakeTranslate(matrix4 &m, vector3 const &t);
extern void cameraGenPerspectiveWindow(matrix4 &m, float fovy, float aspect, float nearval, float farval, vector4 &window);
extern void cameraGenLookAt(matrix4 &m, vector3 const &eyevec, vector3 const &centrevec, vector3 const &upvec);
extern float cameraScreenSpaceSizeFromWorldSpace(Camera const *pCamera, vector3 const &worldPosition, float diameter);
extern float cameraScreenSpaceSizeFromCameraSpace(Camera const *pCamera, vector4 const &csPosition, float diameter);
extern float cameraCalculateArea(Camera const *pCamera, vector3 const &sphereCenter, float sphereRadius);

_static void GenFrustum(matrix4 &m, float left, float right, float bottom, float top, float znear, float zfar);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void MatrixMakeTranslate(matrix4 &m, vector3 const &t) // 0x665A4B
{
    mangled_assert("?MatrixMakeTranslate@@YGXAAVmatrix4@@ABVvector3@@@Z");
    todo("implement");
}

void cameraGenPerspectiveWindow(matrix4 &m, float fovy, float aspect, float nearval, float farval, vector4 &window) // 0x665DB5
{
    mangled_assert("?cameraGenPerspectiveWindow@@YGXAAVmatrix4@@MMMMAAVvector4@@@Z");
    todo("implement");
}

void cameraGenLookAt(matrix4 &m, vector3 const &eyevec, vector3 const &centrevec, vector3 const &upvec) // 0x665B54
{
    mangled_assert("?cameraGenLookAt@@YGXAAVmatrix4@@ABVvector3@@11@Z");
    todo("implement");
}

float cameraScreenSpaceSizeFromWorldSpace(Camera const *pCamera, vector3 const &worldPosition, float diameter) // 0x66601C
{
    mangled_assert("?cameraScreenSpaceSizeFromWorldSpace@@YGMPBVCamera@@ABVvector3@@M@Z");
    todo("implement");
}

float cameraScreenSpaceSizeFromCameraSpace(Camera const *pCamera, vector4 const &csPosition, float diameter) // 0x665F34
{
    mangled_assert("?cameraScreenSpaceSizeFromCameraSpace@@YGMPBVCamera@@ABVvector4@@M@Z");
    todo("implement");
}

float cameraCalculateArea(Camera const *pCamera, vector3 const &sphereCenter, float sphereRadius) // 0x665A66
{
    mangled_assert("?cameraCalculateArea@@YGMPBVCamera@@ABVvector3@@M@Z");
    todo("implement");
}

/* ---------- private code */

_static void GenFrustum(matrix4 &m, float left, float right, float bottom, float top, float znear, float zfar) // 0x665961
{
    mangled_assert("GenFrustum");
    todo("implement");
}
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <list>
#include <Render\GL\pch.h>
#include <xmemory>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <vector>
#include <hash_map>
#include <xhash>
#include <type_traits>
#include <xutility>
#include <utility>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void rglSetDefaultCaps();
extern void rglShutdownCaps();
extern _inline CapMapTable *rglFindCap(BooleanCap cap);
extern _inline void hitCap(BooleanCap cap);
extern bool rglSetCap(unsigned __int32 _cap, bool state);
extern bool rglGetCap(BooleanCap cap);
extern bool rglSetCaps(CapChange *changes);
extern bool rglRestoreCaps(CapChanges *changes);
extern bool rglEnsureCaps(BooleanCap const *cl, CapChanges *restore);
extern void rglSetDepthWrite(bool state);
extern bool rglGetDepthWrite();
extern void rglSetColourWrite(bool rstate, bool gstate, bool bstate, bool astate);
extern bool rglGetColourWrite(__int32 cindex);
extern unsigned __int32 mapFunc(ComparisonFunc func);
extern void rglSetDepthFunc(ComparisonFunc func);
extern ComparisonFunc rglGetDepthFunc();
extern bool rglIsEmulated(BooleanCap feature);
extern bool rglCanUse(BooleanCap feature, bool checkEmulated);
extern void rglSetCanUse(BooleanCap feature, bool canUse);
extern unsigned __int32 mapPolygonMode(PolyfillMode fill);
extern void rglSetPolyFill(unsigned __int32 _fill);
extern PolyfillMode rglGetPolyFill();
extern void rglSetAlphaFunc(ComparisonFunc func);
extern ComparisonFunc rglGetAlphaFunc();
extern void rglSetAlphaRef(float ref);
extern float rglGetAlphaRef();
extern unsigned __int32 mapCullMode(CullMode c);
extern void rglSetCullMode(unsigned __int32 _mode);
extern CullMode rglGetCullMode();
extern bool rglSetTwoSidedLighting(bool state);
extern bool rglGetTwoSidedLighting();
extern void rglSetStencilMask(unsigned __int32 mask);
extern void rglSetStencilFunc(ComparisonFunc func, unsigned __int32 ref, unsigned __int32 mask);
extern unsigned __int32 mapOp(StencilOp op);
extern void rglSetStencilOp(StencilOp fail, StencilOp zfail, StencilOp zpass);
extern void rglPushAttrib(unsigned __int32 mask);
extern void rglPopAttrib();
extern void rglPushClientAttrib(unsigned __int32 mask);
extern void rglPopClientAttrib();
extern void rglSetLineWidth(float width);
extern float rglGetLineWidth();
extern void rglSetPointSize(float size);
extern float rglGetPointSize();
extern void rglSetPolygonOffset(float factor, float units);
extern void rglGetPolygonOffset(float *factor, float *units);

_static void AC(BooleanCap cap, unsigned __int32 glCap, bool *var, bool const *canUse, bool _always);
_static unsigned __int32 mapAttributeBits(unsigned __int32 mask);
_static unsigned __int32 mapClientAttributeBits(unsigned __int32 mask);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool g_true; // 0x1002033C
    extern bool t[4]; // 0x10021A68
    extern bool c[4]; // 0x10021A6C
    extern bool t3d[4]; // 0x10021A70
}

/* ---------- public code */

void rglSetDefaultCaps() // 0x1000B6BC
{
    mangled_assert("?rglSetDefaultCaps@@YGXXZ");
    todo("implement");
}

void rglShutdownCaps() // 0x1000BE47
{
    mangled_assert("?rglShutdownCaps@@YGXXZ");
    todo("implement");
}

_inline CapMapTable *rglFindCap(BooleanCap cap) // 0x1000AEF7
{
    mangled_assert("?rglFindCap@@YGPAUCapMapTable@@W4BooleanCap@@@Z");
    todo("implement");
}

_inline void hitCap(BooleanCap cap) // 0x1000A822
{
    mangled_assert("?hitCap@@YGXW4BooleanCap@@@Z");
    todo("implement");
}

bool rglSetCap(unsigned __int32 _cap, bool state) // 0x1000B426
{
    mangled_assert("?rglSetCap@@YG_NI_N@Z");
    todo("implement");
}

bool rglGetCap(BooleanCap cap) // 0x1000AF36
{
    mangled_assert("?rglGetCap@@YG_NW4BooleanCap@@@Z");
    todo("implement");
}

bool rglSetCaps(CapChange *changes) // 0x1000B61A
{
    mangled_assert("?rglSetCaps@@YG_NPAUCapChange@@@Z");
    todo("implement");
}

bool rglRestoreCaps(CapChanges *changes) // 0x1000B05A
{
    mangled_assert("?rglRestoreCaps@@YG_NPAUCapChanges@@@Z");
    todo("implement");
}

bool rglEnsureCaps(BooleanCap const *cl, CapChanges *restore) // 0x1000ADAF
{
    mangled_assert("?rglEnsureCaps@@YG_NPBW4BooleanCap@@PAUCapChanges@@@Z");
    todo("implement");
}

void rglSetDepthWrite(bool state) // 0x1000BBE3
{
    mangled_assert("?rglSetDepthWrite@@YGX_N@Z");
    todo("implement");
}

bool rglGetDepthWrite() // 0x1000AFB3
{
    mangled_assert("?rglGetDepthWrite@@YG_NXZ");
    todo("implement");
}

void rglSetColourWrite(bool rstate, bool gstate, bool bstate, bool astate) // 0x1000B649
{
    mangled_assert("?rglSetColourWrite@@YGX_N000@Z");
    todo("implement");
}

bool rglGetColourWrite(__int32 cindex) // 0x1000AF8E
{
    mangled_assert("?rglGetColourWrite@@YG_NH@Z");
    todo("implement");
}

unsigned __int32 mapFunc(ComparisonFunc func) // 0x1000A9E5
{
    mangled_assert("?mapFunc@@YGIW4ComparisonFunc@@@Z");
    todo("implement");
}

void rglSetDepthFunc(ComparisonFunc func) // 0x1000BBAD
{
    mangled_assert("?rglSetDepthFunc@@YGXW4ComparisonFunc@@@Z");
    todo("implement");
}

ComparisonFunc rglGetDepthFunc() // 0x1000AFAD
{
    mangled_assert("?rglGetDepthFunc@@YG?AW4ComparisonFunc@@XZ");
    todo("implement");
}

bool rglIsEmulated(BooleanCap feature) // 0x1000B002
{
    mangled_assert("?rglIsEmulated@@YG_NW4BooleanCap@@@Z");
    todo("implement");
}

bool rglCanUse(BooleanCap feature, bool checkEmulated) // 0x1000AB73
{
    mangled_assert("?rglCanUse@@YG_NW4BooleanCap@@_N@Z");
    todo("implement");
}

void rglSetCanUse(BooleanCap feature, bool canUse) // 0x1000B116
{
    mangled_assert("?rglSetCanUse@@YGXW4BooleanCap@@_N@Z");
    todo("implement");
}

unsigned __int32 mapPolygonMode(PolyfillMode fill) // 0x1000AABD
{
    mangled_assert("?mapPolygonMode@@YGIW4PolyfillMode@@@Z");
    todo("implement");
}

void rglSetPolyFill(unsigned __int32 _fill) // 0x1000BCAB
{
    mangled_assert("?rglSetPolyFill@@YGXI@Z");
    todo("implement");
}

PolyfillMode rglGetPolyFill() // 0x1000AFC7
{
    mangled_assert("?rglGetPolyFill@@YG?AW4PolyfillMode@@XZ");
    todo("implement");
}

void rglSetAlphaFunc(ComparisonFunc func) // 0x1000B063
{
    mangled_assert("?rglSetAlphaFunc@@YGXW4ComparisonFunc@@@Z");
    todo("implement");
}

ComparisonFunc rglGetAlphaFunc() // 0x1000AF29
{
    mangled_assert("?rglGetAlphaFunc@@YG?AW4ComparisonFunc@@XZ");
    todo("implement");
}

void rglSetAlphaRef(float ref) // 0x1000B0B8
{
    mangled_assert("?rglSetAlphaRef@@YGXM@Z");
    todo("implement");
}

float rglGetAlphaRef() // 0x1000AF2F
{
    mangled_assert("?rglGetAlphaRef@@YGMXZ");
    todo("implement");
}

unsigned __int32 mapCullMode(CullMode c) // 0x1000A9AC
{
    mangled_assert("?mapCullMode@@YGIW4CullMode@@@Z");
    todo("implement");
}

void rglSetCullMode(unsigned __int32 _mode) // 0x1000B683
{
    mangled_assert("?rglSetCullMode@@YGXI@Z");
    todo("implement");
}

CullMode rglGetCullMode() // 0x1000AFA7
{
    mangled_assert("?rglGetCullMode@@YG?AW4CullMode@@XZ");
    todo("implement");
}

bool rglSetTwoSidedLighting(bool state) // 0x1000BE32
{
    mangled_assert("?rglSetTwoSidedLighting@@YG_N_N@Z");
    todo("implement");
}

bool rglGetTwoSidedLighting() // 0x1000AFFC
{
    mangled_assert("?rglGetTwoSidedLighting@@YG_NXZ");
    todo("implement");
}

void rglSetStencilMask(unsigned __int32 mask) // 0x1000BD83
{
    mangled_assert("?rglSetStencilMask@@YGXI@Z");
    todo("implement");
}

void rglSetStencilFunc(ComparisonFunc func, unsigned __int32 ref, unsigned __int32 mask) // 0x1000BD1C
{
    mangled_assert("?rglSetStencilFunc@@YGXW4ComparisonFunc@@II@Z");
    todo("implement");
}

unsigned __int32 mapOp(StencilOp op) // 0x1000AA69
{
    mangled_assert("?mapOp@@YGIW4StencilOp@@@Z");
    todo("implement");
}

void rglSetStencilOp(StencilOp fail, StencilOp zfail, StencilOp zpass) // 0x1000BDB4
{
    mangled_assert("?rglSetStencilOp@@YGXW4StencilOp@@00@Z");
    todo("implement");
}

void rglPushAttrib(unsigned __int32 mask) // 0x1000B028
{
    mangled_assert("?rglPushAttrib@@YGXI@Z");
    todo("implement");
}

void rglPopAttrib() // 0x1000B01C
{
    mangled_assert("?rglPopAttrib@@YGXXZ");
    todo("implement");
}

void rglPushClientAttrib(unsigned __int32 mask) // 0x1000B03E
{
    mangled_assert("?rglPushClientAttrib@@YGXI@Z");
    todo("implement");
}

void rglPopClientAttrib() // 0x1000B022
{
    mangled_assert("?rglPopClientAttrib@@YGXXZ");
    todo("implement");
}

void rglSetLineWidth(float width) // 0x1000BC11
{
    mangled_assert("?rglSetLineWidth@@YGXM@Z");
    todo("implement");
}

float rglGetLineWidth() // 0x1000AFB9
{
    mangled_assert("?rglGetLineWidth@@YGMXZ");
    todo("implement");
}

void rglSetPointSize(float size) // 0x1000BC5E
{
    mangled_assert("?rglSetPointSize@@YGXM@Z");
    todo("implement");
}

float rglGetPointSize() // 0x1000AFC0
{
    mangled_assert("?rglGetPointSize@@YGMXZ");
    todo("implement");
}

void rglSetPolygonOffset(float factor, float units) // 0x1000BCF8
{
    mangled_assert("?rglSetPolygonOffset@@YGXMM@Z");
    todo("implement");
}

void rglGetPolygonOffset(float *factor, float *units) // 0x1000AFCD
{
    mangled_assert("?rglGetPolygonOffset@@YGXPAM0@Z");
    todo("implement");
}

/* ---------- private code */

_static void AC(BooleanCap cap, unsigned __int32 glCap, bool *var, bool const *canUse, bool _always) // 0x1000A365
{
    mangled_assert("AC");
    todo("implement");
}

_static unsigned __int32 mapAttributeBits(unsigned __int32 mask) // 0x1000A8E1
{
    mangled_assert("mapAttributeBits");
    todo("implement");
}

_static unsigned __int32 mapClientAttributeBits(unsigned __int32 mask) // 0x1000A996
{
    mangled_assert("mapClientAttributeBits");
    todo("implement");
}
#endif

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

_extern void _sub_1000B6BC();
void rglSetDefaultCaps() // 0x1000B6BC
{
    mangled_assert("?rglSetDefaultCaps@@YGXXZ");
    todo("implement");
    _sub_1000B6BC();
}

_extern void _sub_1000BE47();
void rglShutdownCaps() // 0x1000BE47
{
    mangled_assert("?rglShutdownCaps@@YGXXZ");
    todo("implement");
    _sub_1000BE47();
}

_extern CapMapTable *_sub_1000AEF7(BooleanCap);
_inline CapMapTable *rglFindCap(BooleanCap cap) // 0x1000AEF7
{
    mangled_assert("?rglFindCap@@YGPAUCapMapTable@@W4BooleanCap@@@Z");
    todo("implement");
    CapMapTable * __result = _sub_1000AEF7(cap);
    return __result;
}

_extern void _sub_1000A822(BooleanCap);
_inline void hitCap(BooleanCap cap) // 0x1000A822
{
    mangled_assert("?hitCap@@YGXW4BooleanCap@@@Z");
    todo("implement");
    _sub_1000A822(cap);
}

_extern bool _sub_1000B426(unsigned __int32, bool);
bool rglSetCap(unsigned __int32 _cap, bool state) // 0x1000B426
{
    mangled_assert("?rglSetCap@@YG_NI_N@Z");
    todo("implement");
    bool __result = _sub_1000B426(_cap, state);
    return __result;
}

_extern bool _sub_1000AF36(BooleanCap);
bool rglGetCap(BooleanCap cap) // 0x1000AF36
{
    mangled_assert("?rglGetCap@@YG_NW4BooleanCap@@@Z");
    todo("implement");
    bool __result = _sub_1000AF36(cap);
    return __result;
}

_extern bool _sub_1000B61A(CapChange *);
bool rglSetCaps(CapChange *changes) // 0x1000B61A
{
    mangled_assert("?rglSetCaps@@YG_NPAUCapChange@@@Z");
    todo("implement");
    bool __result = _sub_1000B61A(changes);
    return __result;
}

_extern bool _sub_1000B05A(CapChanges *);
bool rglRestoreCaps(CapChanges *changes) // 0x1000B05A
{
    mangled_assert("?rglRestoreCaps@@YG_NPAUCapChanges@@@Z");
    todo("implement");
    bool __result = _sub_1000B05A(changes);
    return __result;
}

_extern bool _sub_1000ADAF(BooleanCap const *, CapChanges *);
bool rglEnsureCaps(BooleanCap const *cl, CapChanges *restore) // 0x1000ADAF
{
    mangled_assert("?rglEnsureCaps@@YG_NPBW4BooleanCap@@PAUCapChanges@@@Z");
    todo("implement");
    bool __result = _sub_1000ADAF(cl, restore);
    return __result;
}

_extern void _sub_1000BBE3(bool);
void rglSetDepthWrite(bool state) // 0x1000BBE3
{
    mangled_assert("?rglSetDepthWrite@@YGX_N@Z");
    todo("implement");
    _sub_1000BBE3(state);
}

_extern bool _sub_1000AFB3();
bool rglGetDepthWrite() // 0x1000AFB3
{
    mangled_assert("?rglGetDepthWrite@@YG_NXZ");
    todo("implement");
    bool __result = _sub_1000AFB3();
    return __result;
}

_extern void _sub_1000B649(bool, bool, bool, bool);
void rglSetColourWrite(bool rstate, bool gstate, bool bstate, bool astate) // 0x1000B649
{
    mangled_assert("?rglSetColourWrite@@YGX_N000@Z");
    todo("implement");
    _sub_1000B649(rstate, gstate, bstate, astate);
}

_extern bool _sub_1000AF8E(__int32);
bool rglGetColourWrite(__int32 cindex) // 0x1000AF8E
{
    mangled_assert("?rglGetColourWrite@@YG_NH@Z");
    todo("implement");
    bool __result = _sub_1000AF8E(cindex);
    return __result;
}

_extern unsigned __int32 _sub_1000A9E5(ComparisonFunc);
unsigned __int32 mapFunc(ComparisonFunc func) // 0x1000A9E5
{
    mangled_assert("?mapFunc@@YGIW4ComparisonFunc@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1000A9E5(func);
    return __result;
}

_extern void _sub_1000BBAD(ComparisonFunc);
void rglSetDepthFunc(ComparisonFunc func) // 0x1000BBAD
{
    mangled_assert("?rglSetDepthFunc@@YGXW4ComparisonFunc@@@Z");
    todo("implement");
    _sub_1000BBAD(func);
}

_extern ComparisonFunc _sub_1000AFAD();
ComparisonFunc rglGetDepthFunc() // 0x1000AFAD
{
    mangled_assert("?rglGetDepthFunc@@YG?AW4ComparisonFunc@@XZ");
    todo("implement");
    ComparisonFunc __result = _sub_1000AFAD();
    return __result;
}

_extern bool _sub_1000B002(BooleanCap);
bool rglIsEmulated(BooleanCap feature) // 0x1000B002
{
    mangled_assert("?rglIsEmulated@@YG_NW4BooleanCap@@@Z");
    todo("implement");
    bool __result = _sub_1000B002(feature);
    return __result;
}

_extern bool _sub_1000AB73(BooleanCap, bool);
bool rglCanUse(BooleanCap feature, bool checkEmulated) // 0x1000AB73
{
    mangled_assert("?rglCanUse@@YG_NW4BooleanCap@@_N@Z");
    todo("implement");
    bool __result = _sub_1000AB73(feature, checkEmulated);
    return __result;
}

_extern void _sub_1000B116(BooleanCap, bool);
void rglSetCanUse(BooleanCap feature, bool canUse) // 0x1000B116
{
    mangled_assert("?rglSetCanUse@@YGXW4BooleanCap@@_N@Z");
    todo("implement");
    _sub_1000B116(feature, canUse);
}

_extern unsigned __int32 _sub_1000AABD(PolyfillMode);
unsigned __int32 mapPolygonMode(PolyfillMode fill) // 0x1000AABD
{
    mangled_assert("?mapPolygonMode@@YGIW4PolyfillMode@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1000AABD(fill);
    return __result;
}

_extern void _sub_1000BCAB(unsigned __int32);
void rglSetPolyFill(unsigned __int32 _fill) // 0x1000BCAB
{
    mangled_assert("?rglSetPolyFill@@YGXI@Z");
    todo("implement");
    _sub_1000BCAB(_fill);
}

_extern PolyfillMode _sub_1000AFC7();
PolyfillMode rglGetPolyFill() // 0x1000AFC7
{
    mangled_assert("?rglGetPolyFill@@YG?AW4PolyfillMode@@XZ");
    todo("implement");
    PolyfillMode __result = _sub_1000AFC7();
    return __result;
}

_extern void _sub_1000B063(ComparisonFunc);
void rglSetAlphaFunc(ComparisonFunc func) // 0x1000B063
{
    mangled_assert("?rglSetAlphaFunc@@YGXW4ComparisonFunc@@@Z");
    todo("implement");
    _sub_1000B063(func);
}

_extern ComparisonFunc _sub_1000AF29();
ComparisonFunc rglGetAlphaFunc() // 0x1000AF29
{
    mangled_assert("?rglGetAlphaFunc@@YG?AW4ComparisonFunc@@XZ");
    todo("implement");
    ComparisonFunc __result = _sub_1000AF29();
    return __result;
}

_extern void _sub_1000B0B8(float);
void rglSetAlphaRef(float ref) // 0x1000B0B8
{
    mangled_assert("?rglSetAlphaRef@@YGXM@Z");
    todo("implement");
    _sub_1000B0B8(ref);
}

_extern float _sub_1000AF2F();
float rglGetAlphaRef() // 0x1000AF2F
{
    mangled_assert("?rglGetAlphaRef@@YGMXZ");
    todo("implement");
    float __result = _sub_1000AF2F();
    return __result;
}

_extern unsigned __int32 _sub_1000A9AC(CullMode);
unsigned __int32 mapCullMode(CullMode c) // 0x1000A9AC
{
    mangled_assert("?mapCullMode@@YGIW4CullMode@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1000A9AC(c);
    return __result;
}

_extern void _sub_1000B683(unsigned __int32);
void rglSetCullMode(unsigned __int32 _mode) // 0x1000B683
{
    mangled_assert("?rglSetCullMode@@YGXI@Z");
    todo("implement");
    _sub_1000B683(_mode);
}

_extern CullMode _sub_1000AFA7();
CullMode rglGetCullMode() // 0x1000AFA7
{
    mangled_assert("?rglGetCullMode@@YG?AW4CullMode@@XZ");
    todo("implement");
    CullMode __result = _sub_1000AFA7();
    return __result;
}

_extern bool _sub_1000BE32(bool);
bool rglSetTwoSidedLighting(bool state) // 0x1000BE32
{
    mangled_assert("?rglSetTwoSidedLighting@@YG_N_N@Z");
    todo("implement");
    bool __result = _sub_1000BE32(state);
    return __result;
}

_extern bool _sub_1000AFFC();
bool rglGetTwoSidedLighting() // 0x1000AFFC
{
    mangled_assert("?rglGetTwoSidedLighting@@YG_NXZ");
    todo("implement");
    bool __result = _sub_1000AFFC();
    return __result;
}

_extern void _sub_1000BD83(unsigned __int32);
void rglSetStencilMask(unsigned __int32 mask) // 0x1000BD83
{
    mangled_assert("?rglSetStencilMask@@YGXI@Z");
    todo("implement");
    _sub_1000BD83(mask);
}

_extern void _sub_1000BD1C(ComparisonFunc, unsigned __int32, unsigned __int32);
void rglSetStencilFunc(ComparisonFunc func, unsigned __int32 ref, unsigned __int32 mask) // 0x1000BD1C
{
    mangled_assert("?rglSetStencilFunc@@YGXW4ComparisonFunc@@II@Z");
    todo("implement");
    _sub_1000BD1C(func, ref, mask);
}

_extern unsigned __int32 _sub_1000AA69(StencilOp);
unsigned __int32 mapOp(StencilOp op) // 0x1000AA69
{
    mangled_assert("?mapOp@@YGIW4StencilOp@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1000AA69(op);
    return __result;
}

_extern void _sub_1000BDB4(StencilOp, StencilOp, StencilOp);
void rglSetStencilOp(StencilOp fail, StencilOp zfail, StencilOp zpass) // 0x1000BDB4
{
    mangled_assert("?rglSetStencilOp@@YGXW4StencilOp@@00@Z");
    todo("implement");
    _sub_1000BDB4(fail, zfail, zpass);
}

_extern void _sub_1000B028(unsigned __int32);
void rglPushAttrib(unsigned __int32 mask) // 0x1000B028
{
    mangled_assert("?rglPushAttrib@@YGXI@Z");
    todo("implement");
    _sub_1000B028(mask);
}

_extern void _sub_1000B01C();
void rglPopAttrib() // 0x1000B01C
{
    mangled_assert("?rglPopAttrib@@YGXXZ");
    todo("implement");
    _sub_1000B01C();
}

_extern void _sub_1000B03E(unsigned __int32);
void rglPushClientAttrib(unsigned __int32 mask) // 0x1000B03E
{
    mangled_assert("?rglPushClientAttrib@@YGXI@Z");
    todo("implement");
    _sub_1000B03E(mask);
}

_extern void _sub_1000B022();
void rglPopClientAttrib() // 0x1000B022
{
    mangled_assert("?rglPopClientAttrib@@YGXXZ");
    todo("implement");
    _sub_1000B022();
}

_extern void _sub_1000BC11(float);
void rglSetLineWidth(float width) // 0x1000BC11
{
    mangled_assert("?rglSetLineWidth@@YGXM@Z");
    todo("implement");
    _sub_1000BC11(width);
}

_extern float _sub_1000AFB9();
float rglGetLineWidth() // 0x1000AFB9
{
    mangled_assert("?rglGetLineWidth@@YGMXZ");
    todo("implement");
    float __result = _sub_1000AFB9();
    return __result;
}

_extern void _sub_1000BC5E(float);
void rglSetPointSize(float size) // 0x1000BC5E
{
    mangled_assert("?rglSetPointSize@@YGXM@Z");
    todo("implement");
    _sub_1000BC5E(size);
}

_extern float _sub_1000AFC0();
float rglGetPointSize() // 0x1000AFC0
{
    mangled_assert("?rglGetPointSize@@YGMXZ");
    todo("implement");
    float __result = _sub_1000AFC0();
    return __result;
}

_extern void _sub_1000BCF8(float, float);
void rglSetPolygonOffset(float factor, float units) // 0x1000BCF8
{
    mangled_assert("?rglSetPolygonOffset@@YGXMM@Z");
    todo("implement");
    _sub_1000BCF8(factor, units);
}

_extern void _sub_1000AFCD(float *, float *);
void rglGetPolygonOffset(float *factor, float *units) // 0x1000AFCD
{
    mangled_assert("?rglGetPolygonOffset@@YGXPAM0@Z");
    todo("implement");
    _sub_1000AFCD(factor, units);
}

/* ---------- private code */

_extern void _sub_1000A365(BooleanCap, unsigned __int32, bool *, bool const *, bool);
_static void AC(BooleanCap cap, unsigned __int32 glCap, bool *var, bool const *canUse, bool _always) // 0x1000A365
{
    mangled_assert("AC");
    todo("implement");
    _sub_1000A365(cap, glCap, var, canUse, _always);
}

_extern unsigned __int32 _sub_1000A8E1(unsigned __int32);
_static unsigned __int32 mapAttributeBits(unsigned __int32 mask) // 0x1000A8E1
{
    mangled_assert("mapAttributeBits");
    todo("implement");
    unsigned __int32 __result = _sub_1000A8E1(mask);
    return __result;
}

_extern unsigned __int32 _sub_1000A996(unsigned __int32);
_static unsigned __int32 mapClientAttributeBits(unsigned __int32 mask) // 0x1000A996
{
    mangled_assert("mapClientAttributeBits");
    todo("implement");
    unsigned __int32 __result = _sub_1000A996(mask);
    return __result;
}
#endif

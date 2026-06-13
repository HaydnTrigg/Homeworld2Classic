#if 0
/* ---------- headers */

#include "decomp.h"
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\r_types.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <math.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <assist\array2d.h>
#include <Mathlib\integrate.h>
#include <Mathlib\fourier.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <util\colour.h>
#include <platform\osdef.h>
#include <NURBSCurve.h>
#include <curve.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::LengthData
{
    LengthData(NURBSCurve const *);
    __int32 span; // 0x0
    NURBSCurve const *c; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::LengthData) == 8, "Invalid `anonymous-namespace'::LengthData size");

struct `anonymous-namespace'::ClassPOvoid
{
    virtual float operator()(float, void *) = 0;
    ClassPOvoid(`anonymous-namespace'::ClassPOvoid const &); /* compiler_generated() */
    ClassPOvoid(); /* compiler_generated() */
    `anonymous-namespace'::ClassPOvoid &operator=(`anonymous-namespace'::ClassPOvoid const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::ClassPOvoid) == 4, "Invalid `anonymous-namespace'::ClassPOvoid size");

struct `anonymous-namespace'::OpLengthFcn :
    public `anonymous-namespace'::ClassPOvoid
{
    virtual float operator()(float, void *) override;
    OpLengthFcn(`anonymous-namespace'::OpLengthFcn const &); /* compiler_generated() */
    OpLengthFcn(); /* compiler_generated() */
    `anonymous-namespace'::OpLengthFcn &operator=(`anonymous-namespace'::OpLengthFcn const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::OpLengthFcn) == 4, "Invalid `anonymous-namespace'::OpLengthFcn size");

typedef std::vector<vector4,std::allocator<vector4> > CVVector;
typedef std::vector<float,std::allocator<float> > KnotVector;
typedef `anonymous-namespace'::LengthData ?A0x588b5db9::LengthData;
typedef `anonymous-namespace'::OpLengthFcn ?A0x588b5db9::OpLengthFcn;
typedef `anonymous-namespace'::ClassPOvoid ?A0x588b5db9::ClassPOvoid;

/* ---------- prototypes */

extern float BasisFunction(__int32 i, __int32 p, float u, std::vector<float,std::allocator<float> > const &knots);
extern float RationalBasisFunction(__int32 i, __int32 p, __int32 numCVs, float u, std::vector<float,std::allocator<float> > const &knots);
extern _inline vector3 project(vector4 const &a);
extern __int32 Compare(float l, float lb, float const k_tol);

_static void binomialCoef(Array2D<float,Array2DNewAllocator<float> > &Bin);
_static void nurbsBasisFuns(float u, __int32 span, __int32 deg, std::vector<float,std::allocator<float> > const &knots, std::vector<float,std::allocator<float> > &N);

/* ---------- globals */

extern float NURBSCurve::m_stats[4]; // 0x8498FC

/* ---------- private variables */

_static
{
    extern float const k_undefinedLength; // 0x7AD7D4
}

/* ---------- public code */

_extern void _sub_610310();
void NURBSCurve::resetStats() // 0x610310
{
    mangled_assert("?resetStats@NURBSCurve@@SGXXZ");
    todo("implement");
    _sub_610310();
}

_extern unsigned __int32 _sub_60FB69();
unsigned __int32 NURBSCurve::getNumStats() // 0x60FB69
{
    mangled_assert("?getNumStats@NURBSCurve@@SGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_60FB69();
    return __result;
}

_extern float _sub_60FB6D(unsigned __int32);
float NURBSCurve::getStat(unsigned __int32 s) // 0x60FB6D
{
    mangled_assert("?getStat@NURBSCurve@@SGMI@Z");
    todo("implement");
    float __result = _sub_60FB6D(s);
    return __result;
}

_extern _sub_60DD0F(NURBSCurve *const);
NURBSCurve::NURBSCurve() // 0x60DD0F
{
    mangled_assert("??0NURBSCurve@@QAE@XZ");
    todo("implement");
    _sub_60DD0F(this);
}

_extern void _sub_60DD7A(NURBSCurve *const);
NURBSCurve::~NURBSCurve() // 0x60DD7A
{
    mangled_assert("??1NURBSCurve@@UAE@XZ");
    todo("implement");
    _sub_60DD7A(this);
}

_extern void _sub_60E347(NURBSCurve *const, float);
void NURBSCurve::addKnot(float) // 0x60E347
{
    mangled_assert("?addKnot@NURBSCurve@@QAEXM@Z");
    todo("implement");
    _sub_60E347(this, arg);
}

_extern void _sub_60E301(NURBSCurve *const, vector4 const &);
void NURBSCurve::addCV(vector4 const &) // 0x60E301
{
    mangled_assert("?addCV@NURBSCurve@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_60E301(this, arg);
}

_extern void _sub_60E309(NURBSCurve *const, float, float, float, float);
void NURBSCurve::addCV(float, float, float, float) // 0x60E309
{
    mangled_assert("?addCV@NURBSCurve@@QAEXMMMM@Z");
    todo("implement");
    _sub_60E309(this, arg, arg, arg, arg);
}

_extern void _sub_6103C7(NURBSCurve *const, bool);
void NURBSCurve::setRational(bool) // 0x6103C7
{
    mangled_assert("?setRational@NURBSCurve@@QAEX_N@Z");
    todo("implement");
    _sub_6103C7(this, arg);
}

_extern void _sub_6103BD(NURBSCurve *const, __int32);
void NURBSCurve::setDegree(__int32) // 0x6103BD
{
    mangled_assert("?setDegree@NURBSCurve@@QAEXH@Z");
    todo("implement");
    _sub_6103BD(this, arg);
}

_extern unsigned __int32 _sub_60FB5F(NURBSCurve const *const);
unsigned __int32 NURBSCurve::getNumKnots() const // 0x60FB5F
{
    mangled_assert("?getNumKnots@NURBSCurve@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_60FB5F(this);
    return __result;
}

_extern float _sub_60FB52(NURBSCurve const *const, unsigned __int32);
float NURBSCurve::getKnotValue(unsigned __int32) const // 0x60FB52
{
    mangled_assert("?getKnotValue@NURBSCurve@@QBEMI@Z");
    todo("implement");
    float __result = _sub_60FB52(this, arg);
    return __result;
}

_extern void _sub_61012B(NURBSCurve *const);
void NURBSCurve::precompute() // 0x61012B
{
    mangled_assert("?precompute@NURBSCurve@@QAEXXZ");
    todo("implement");
    _sub_61012B(this);
}

_extern void _sub_60F0CC(NURBSCurve const *const, float);
void NURBSCurve::draw(float) const // 0x60F0CC
{
    mangled_assert("?draw@NURBSCurve@@UBEXM@Z");
    todo("implement");
    _sub_60F0CC(this, arg);
}

_extern float _sub_60DECE(__int32, __int32, float, std::vector<float,std::allocator<float> > const &);
float BasisFunction(__int32 i, __int32 p, float u, std::vector<float,std::allocator<float> > const &knots) // 0x60DECE
{
    mangled_assert("?BasisFunction@@YGMHHMABV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    float __result = _sub_60DECE(i, p, u, knots);
    return __result;
}

_extern float _sub_60E08D(__int32, __int32, __int32, float, std::vector<float,std::allocator<float> > const &);
float RationalBasisFunction(__int32 i, __int32 p, __int32 numCVs, float u, std::vector<float,std::allocator<float> > const &knots) // 0x60E08D
{
    mangled_assert("?RationalBasisFunction@@YGMHHHMABV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    float __result = _sub_60E08D(i, p, numCVs, u, knots);
    return __result;
}

_extern bool _sub_60F3B1(NURBSCurve const *const, float, vector3 *, vector3 *);
bool NURBSCurve::evaluate(float, vector3 *, vector3 *) const // 0x60F3B1
{
    mangled_assert("?evaluate@NURBSCurve@@UBE_NMPAVvector3@@0@Z");
    todo("implement");
    bool __result = _sub_60F3B1(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_60F28F(NURBSCurve const *const, float, vector3 *, vector3 *);
bool NURBSCurve::evaluate2(float, vector3 *, vector3 *) const // 0x60F28F
{
    mangled_assert("?evaluate2@NURBSCurve@@QBE_NMPAVvector3@@0@Z");
    todo("implement");
    bool __result = _sub_60F28F(this, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_60F90D(NURBSCurve const *const, float);
unsigned __int32 NURBSCurve::findSpan(float) const // 0x60F90D
{
    mangled_assert("?findSpan@NURBSCurve@@ABEIM@Z");
    todo("implement");
    unsigned __int32 __result = _sub_60F90D(this, arg);
    return __result;
}

_extern void _sub_60E5F1(NURBSCurve const *const, float, __int32, std::vector<float,std::allocator<float> > &);
void NURBSCurve::basisFuns(float, __int32, std::vector<float,std::allocator<float> > &) const // 0x60E5F1
{
    mangled_assert("?basisFuns@NURBSCurve@@ABEXMHAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    _sub_60E5F1(this, arg, arg, arg);
}

_extern void _sub_60E809(NURBSCurve const *const, float, __int32, vector3 &);
void NURBSCurve::derive3D(float, __int32, vector3 &) const // 0x60E809
{
    mangled_assert("?derive3D@NURBSCurve@@ABEXMHAAVvector3@@@Z");
    todo("implement");
    _sub_60E809(this, arg, arg, arg);
}

_extern void _sub_60E87E(NURBSCurve const *const, float, __int32, std::vector<vector3,std::allocator<vector3> > &);
void NURBSCurve::deriveAt(float, __int32, std::vector<vector3,std::allocator<vector3> > &) const // 0x60E87E
{
    mangled_assert("?deriveAt@NURBSCurve@@ABEXMHAAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
    _sub_60E87E(this, arg, arg, arg);
}

_extern void _sub_60EA76(NURBSCurve const *const, float, __int32, std::vector<vector4,std::allocator<vector4> > &);
void NURBSCurve::deriveAtH(float, __int32, std::vector<vector4,std::allocator<vector4> > &) const // 0x60EA76
{
    mangled_assert("?deriveAtH@NURBSCurve@@ABEXMHAAV?$vector@Vvector4@@V?$allocator@Vvector4@@@std@@@std@@@Z");
    todo("implement");
    _sub_60EA76(this, arg, arg, arg);
}

_extern void _sub_60EC02(NURBSCurve const *const, __int32, float, __int32, Array2D<float,Array2DNewAllocator<float> > &);
void NURBSCurve::dersBasisFuns(__int32, float, __int32, Array2D<float,Array2DNewAllocator<float> > &) const // 0x60EC02
{
    mangled_assert("?dersBasisFuns@NURBSCurve@@ABEXHMHAAV?$Array2D@MV?$Array2DNewAllocator@M@@@@@Z");
    todo("implement");
    _sub_60EC02(this, arg, arg, arg, arg);
}

_extern vector3 _sub_610246(vector4 const &);
_inline vector3 project(vector4 const &a) // 0x610246
{
    mangled_assert("?project@@YG?AVvector3@@ABVvector4@@@Z");
    todo("implement");
    vector3 __result = _sub_610246(a);
    return __result;
}

_extern vector3 _sub_60FA62(NURBSCurve const *const, float, __int32);
vector3 NURBSCurve::firstDn(float, __int32) const // 0x60FA62
{
    mangled_assert("?firstDn@NURBSCurve@@ABE?AVvector3@@MH@Z");
    todo("implement");
    vector3 __result = _sub_60FA62(this, arg, arg);
    return __result;
}

_extern vector4 _sub_60FB7B(NURBSCurve const *const, float, __int32);
vector4 NURBSCurve::hpointAt(float, __int32) const // 0x60FB7B
{
    mangled_assert("?hpointAt@NURBSCurve@@ABE?AVvector4@@MH@Z");
    todo("implement");
    vector4 __result = _sub_60FB7B(this, arg, arg);
    return __result;
}

_extern vector4 _sub_60F96B(NURBSCurve const *const, float, __int32);
vector4 NURBSCurve::firstD(float, __int32) const // 0x60F96B
{
    mangled_assert("?firstD@NURBSCurve@@ABE?AVvector4@@MH@Z");
    todo("implement");
    vector4 __result = _sub_60F96B(this, arg, arg);
    return __result;
}

_extern float _sub_60FD68(NURBSCurve const *const, float, __int32);
float NURBSCurve::lengthF(float, __int32) const // 0x60FD68
{
    mangled_assert("?lengthF@NURBSCurve@@QBEMMH@Z");
    todo("implement");
    float __result = _sub_60FD68(this, arg, arg);
    return __result;
}

_extern float _sub_60FC67(NURBSCurve const *const, float, __int32);
float NURBSCurve::length(float, __int32) const // 0x60FC67
{
    mangled_assert("?length@NURBSCurve@@QBEMMH@Z");
    todo("implement");
    float __result = _sub_60FC67(this, arg, arg);
    return __result;
}

_extern __int32 _sub_60F8DC(NURBSCurve const *const, __int32);
__int32 NURBSCurve::findMult(__int32) const // 0x60F8DC
{
    mangled_assert("?findMult@NURBSCurve@@ABEHH@Z");
    todo("implement");
    __int32 __result = _sub_60F8DC(this, arg);
    return __result;
}

_extern float _sub_60FDD1(NURBSCurve const *const, float, float, float, __int32);
float NURBSCurve::lengthIn(float, float, float, __int32) const // 0x60FDD1
{
    mangled_assert("?lengthIn@NURBSCurve@@QBEMMMMH@Z");
    todo("implement");
    float __result = _sub_60FDD1(this, arg, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_60E012(float, float, float const);
__int32 Compare(float l, float lb, float const k_tol) // 0x60E012
{
    mangled_assert("?Compare@@YGHMMM@Z");
    todo("implement");
    __int32 __result = _sub_60E012(l, lb, k_tol);
    return __result;
}

_extern float _sub_60E507(NURBSCurve *const, float const);
float NURBSCurve::arcLenParam(float const) // 0x60E507
{
    mangled_assert("?arcLenParam@NURBSCurve@@QAEMM@Z");
    todo("implement");
    float __result = _sub_60E507(this, arg);
    return __result;
}

_extern float _sub_60E3A3(NURBSCurve *const, float const);
float NURBSCurve::arcLenParam2(float const) // 0x60E3A3
{
    mangled_assert("?arcLenParam2@NURBSCurve@@QAEMM@Z");
    todo("implement");
    float __result = _sub_60E3A3(this, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_60E717(Array2D<float,Array2DNewAllocator<float> > &);
_static void binomialCoef(Array2D<float,Array2DNewAllocator<float> > &Bin) // 0x60E717
{
    mangled_assert("binomialCoef");
    todo("implement");
    _sub_60E717(Bin);
}

_extern void _sub_61001F(float, __int32, __int32, std::vector<float,std::allocator<float> > const &, std::vector<float,std::allocator<float> > &);
_static void nurbsBasisFuns(float u, __int32 span, __int32 deg, std::vector<float,std::allocator<float> > const &knots, std::vector<float,std::allocator<float> > &N) // 0x61001F
{
    mangled_assert("nurbsBasisFuns");
    todo("implement");
    _sub_61001F(u, span, deg, knots, N);
}
#endif

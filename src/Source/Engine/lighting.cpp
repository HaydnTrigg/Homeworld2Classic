#if 0
/* ---------- headers */

#include "decomp.h"
#include <renderer.h>
#include <Render\gl\types.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <Mathlib\matvec.h>
#include <xmemory0>
#include <pch.h>
#include <Render\gl\lotypes.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <Mathlib\matrix3.h>
#include <xhash>
#include <Render\gl\r_types.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <list>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <util\ftoi.h>
#include <Render\objects\vertexarray.h>
#include <Render\objects\vertexarrayinternal.h>
#include <Render\gl\r_macros.h>
#include <Render\objects\material.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <profile\profile.h>
#include <iostream>
#include <debug\db.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <bitset>
#include <Render\objects\geometry.h>
#include <Render\objects\mesh.h>
#include <Render\objects\renderable.h>
#include <lighting.h>
#include <platform\osdef.h>

/* ---------- constants */

/* ---------- definitions */

struct LightStruct
{
    vector4 ambient; // 0x0
    vector4 diffuse; // 0x10
    vector4 matAmbient; // 0x20
    vector4 matDiffuse; // 0x30
    _inline LightStruct(); /* compiler_generated() */
};
static_assert(sizeof(LightStruct) == 64, "Invalid LightStruct size");

class LightModifier :
    public Modifier
{
private:
    bool active; // 0x4
    bool applied; // 0x5
    std::vector<unsigned int,std::allocator<unsigned int> > colours; // 0x8
    vector4 globalAmbient; // 0x14
    LightStruct lights[2]; // 0x24
public:
    LightModifier(LightModifier const &); /* compiler_generated() */
    _inline LightModifier();
    _inline void lightBuffer(__int32, unsigned __int32 *, unsigned char *, __int32, matrix4 &);
    virtual _inline void modify(VertexArray *, unsigned __int32 *, bool) override;
    virtual _inline void modify(Material *, unsigned __int32 *) override;
    virtual _inline ~LightModifier() override; /* compiler_generated() */
    LightModifier &operator=(LightModifier const &); /* compiler_generated() */
};
static_assert(sizeof(LightModifier) == 164, "Invalid LightModifier size");

/* ---------- prototypes */

extern void lightSetViewTransform(matrix4 const &mtx);
extern bool lightBegin();
extern bool lightEnd();
extern void lightStartup();
extern void lightShutdown();

_static void _light(__int32 nVert, __int32 nLight, unsigned char *c_ub, unsigned char *norm, __int32 stride, vector4 &ambient, vector4 *diffuse, vector3 *lightVec, __int32 baseAlpha);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern matrix4 viewInv; // 0x848AE0
    extern LightModifier *lightMod; // 0x848AD8
}

/* ---------- public code */

_extern _sub_603D44(LightModifier *const);
_inline LightModifier::LightModifier() // 0x603D44
{
    mangled_assert("??0LightModifier@@QAE@XZ");
    todo("implement");
    _sub_603D44(this);
}

_extern _sub_603DE1(LightStruct *const);
_inline LightStruct::LightStruct() // 0x603DE1
{
    mangled_assert("??0LightStruct@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_603DE1(this);
}

_extern void _sub_603DE4(LightModifier *const);
_inline LightModifier::~LightModifier() // 0x603DE4
{
    mangled_assert("??1LightModifier@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_603DE4(this);
}

_extern void _sub_60408A(LightModifier *const, __int32, unsigned __int32 *, unsigned char *, __int32, matrix4 &);
_inline void LightModifier::lightBuffer(__int32, unsigned __int32 *, unsigned char *, __int32, matrix4 &) // 0x60408A
{
    mangled_assert("?lightBuffer@LightModifier@@QAEXHPAIPAEHAAVmatrix4@@@Z");
    todo("implement");
    _sub_60408A(this, arg, arg, arg, arg, arg);
}

_extern void _sub_604376(LightModifier *const, Material *, unsigned __int32 *);
_inline void LightModifier::modify(Material *, unsigned __int32 *) // 0x604376
{
    mangled_assert("?modify@LightModifier@@UAEXPAVMaterial@@PAI@Z");
    todo("implement");
    _sub_604376(this, arg, arg);
}

_extern void _sub_6043A1(LightModifier *const, VertexArray *, unsigned __int32 *, bool);
_inline void LightModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x6043A1
{
    mangled_assert("?modify@LightModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
    _sub_6043A1(this, arg, arg, arg);
}

_extern void _sub_6042DC(matrix4 const &);
void lightSetViewTransform(matrix4 const &mtx) // 0x6042DC
{
    mangled_assert("?lightSetViewTransform@@YGXABVmatrix4@@@Z");
    todo("implement");
    _sub_6042DC(mtx);
}

_extern bool _sub_60406F();
bool lightBegin() // 0x60406F
{
    mangled_assert("?lightBegin@@YG_NXZ");
    todo("implement");
    bool __result = _sub_60406F();
    return __result;
}

_extern bool _sub_6042C1();
bool lightEnd() // 0x6042C1
{
    mangled_assert("?lightEnd@@YG_NXZ");
    todo("implement");
    bool __result = _sub_6042C1();
    return __result;
}

_extern void _sub_60433C();
void lightStartup() // 0x60433C
{
    mangled_assert("?lightStartup@@YGXXZ");
    todo("implement");
    _sub_60433C();
}

_extern void _sub_604324();
void lightShutdown() // 0x604324
{
    mangled_assert("?lightShutdown@@YGXXZ");
    todo("implement");
    _sub_604324();
}

/* ---------- private code */

_extern void _sub_603F2F(__int32, __int32, unsigned char *, unsigned char *, __int32, vector4 &, vector4 *, vector3 *, __int32);
_static void _light(__int32 nVert, __int32 nLight, unsigned char *c_ub, unsigned char *norm, __int32 stride, vector4 &ambient, vector4 *diffuse, vector3 *lightVec, __int32 baseAlpha) // 0x603F2F
{
    mangled_assert("_light");
    todo("implement");
    _sub_603F2F(nVert, nLight, c_ub, norm, stride, ambient, diffuse, lightVec, baseAlpha);
}
#endif

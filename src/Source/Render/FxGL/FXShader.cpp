#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\r_types.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\FxGL\pch.h>
#include <Render\objects\core.h>
#include <Render\gl\r_defines.h>
#include <Mathlib\matrix4.h>
#include <Render\gl\glext.h>
#include <util\types.h>
#include <Render\objects\textureanim.h>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\textureregistry.h>
#include <Render\FxGL\FXGL.h>
#include <platform\osdef.h>
#include <Render\gl\types.h>
#include <util\colour.h>
#include <Mathlib\matvec.h>
#include <Render\FxGL\FXShader.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector2.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 FXShader::s_numApplies; // 0x8607D8

/* ---------- private variables */

_static
{
    extern vector2 g_FullUV[4]; // 0x841A60
}

/* ---------- public code */

_extern void _sub_6F75A6();
void FXShader::resetStats() // 0x6F75A6
{
    mangled_assert("?resetStats@FXShader@@SGXXZ");
    todo("implement");
    _sub_6F75A6();
}

_extern unsigned __int32 _sub_6F74DD();
unsigned __int32 FXShader::getNumApplies() // 0x6F74DD
{
    mangled_assert("?getNumApplies@FXShader@@SGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_6F74DD();
    return __result;
}

_extern _sub_6F748C(FXShader *const);
FXShader::FXShader() // 0x6F748C
{
    mangled_assert("??0FXShader@@QAE@XZ");
    todo("implement");
    _sub_6F748C(this);
}

_extern void _sub_6F7496(FXShader *const);
FXShader::~FXShader() // 0x6F7496
{
    mangled_assert("??1FXShader@@QAE@XZ");
    todo("implement");
    _sub_6F7496(this);
}

_extern void _sub_6F764F(FXShader *const, Texture *);
void FXShader::setTexture(Texture *) // 0x6F764F
{
    mangled_assert("?setTexture@FXShader@@QAEXPAVTexture@@@Z");
    todo("implement");
    _sub_6F764F(this, arg);
}

_extern void _sub_6F7658(FXShader *const, TextureAnim *);
void FXShader::setTextureAnim(TextureAnim *) // 0x6F7658
{
    mangled_assert("?setTextureAnim@FXShader@@QAEXPAVTextureAnim@@@Z");
    todo("implement");
    _sub_6F7658(this, arg);
}

_extern void _sub_6F75AE(FXShader *const, BlendFunc, BlendFunc);
void FXShader::setBlend(BlendFunc, BlendFunc) // 0x6F75AE
{
    mangled_assert("?setBlend@FXShader@@QAEXW4BlendFunc@@0@Z");
    todo("implement");
    _sub_6F75AE(this, arg, arg);
}

_extern void _sub_6F7662(FXShader *const, TextureWrap);
void FXShader::setWrapMode(TextureWrap) // 0x6F7662
{
    mangled_assert("?setWrapMode@FXShader@@QAEXW4TextureWrap@@@Z");
    todo("implement");
    _sub_6F7662(this, arg);
}

_extern void _sub_6F7645(FXShader *const, TextureFilter);
void FXShader::setFilterMode(TextureFilter) // 0x6F7645
{
    mangled_assert("?setFilterMode@FXShader@@QAEXW4TextureFilter@@@Z");
    todo("implement");
    _sub_6F7645(this, arg);
}

_extern unsigned __int32 _sub_6F74E3(FXShader const *const);
unsigned __int32 FXShader::getNumTextures() const // 0x6F74E3
{
    mangled_assert("?getNumTextures@FXShader@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_6F74E3(this);
    return __result;
}

_extern Texture *_sub_6F750D(FXShader *const, float);
Texture *FXShader::getTexture(float) // 0x6F750D
{
    mangled_assert("?getTexture@FXShader@@QAEPAVTexture@@M@Z");
    todo("implement");
    Texture * __result = _sub_6F750D(this, arg);
    return __result;
}

_extern Texture *_sub_6F74F4(FXShader *const, unsigned __int32);
Texture *FXShader::getTexture(unsigned __int32) // 0x6F74F4
{
    mangled_assert("?getTexture@FXShader@@QAEPAVTexture@@I@Z");
    todo("implement");
    Texture * __result = _sub_6F74F4(this, arg);
    return __result;
}

_extern bool _sub_6F7564(FXShader *const, float, vector2 &[4]);
bool FXShader::getUV(float, vector2 &[4]) // 0x6F7564
{
    mangled_assert("?getUV@FXShader@@QAE_NMAAY03Vvector2@@@Z");
    todo("implement");
    bool __result = _sub_6F7564(this, arg, arg);
    return __result;
}

_extern bool _sub_6F7534(FXShader *const, unsigned __int32, vector2 &[4]);
bool FXShader::getUV(unsigned __int32, vector2 &[4]) // 0x6F7534
{
    mangled_assert("?getUV@FXShader@@QAE_NIAAY03Vvector2@@@Z");
    todo("implement");
    bool __result = _sub_6F7534(this, arg, arg);
    return __result;
}

_extern void _sub_6F7497(FXShader *const, float);
void FXShader::apply(float) // 0x6F7497
{
    mangled_assert("?apply@FXShader@@QAEXM@Z");
    todo("implement");
    _sub_6F7497(this, arg);
}

_extern void _sub_6F74D8(FXShader *const, Texture *);
void FXShader::apply(Texture *) // 0x6F74D8
{
    mangled_assert("?apply@FXShader@@QAEXPAVTexture@@@Z");
    todo("implement");
    _sub_6F74D8(this, arg);
}

_extern void _sub_6F75BF(FXShader *const, Texture *);
void FXShader::setCaps(Texture *) // 0x6F75BF
{
    mangled_assert("?setCaps@FXShader@@AAEXPAVTexture@@@Z");
    todo("implement");
    _sub_6F75BF(this, arg);
}

/* ---------- private code */
#endif

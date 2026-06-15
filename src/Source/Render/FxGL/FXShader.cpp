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

void FXShader::resetStats() // 0x6F75A6
{
    mangled_assert("?resetStats@FXShader@@SGXXZ");
    todo("implement");
}

unsigned __int32 FXShader::getNumApplies() // 0x6F74DD
{
    mangled_assert("?getNumApplies@FXShader@@SGIXZ");
    todo("implement");
}

FXShader::FXShader() // 0x6F748C
{
    mangled_assert("??0FXShader@@QAE@XZ");
    todo("implement");
}

FXShader::~FXShader() // 0x6F7496
{
    mangled_assert("??1FXShader@@QAE@XZ");
    todo("implement");
}

void FXShader::setTexture(Texture *) // 0x6F764F
{
    mangled_assert("?setTexture@FXShader@@QAEXPAVTexture@@@Z");
    todo("implement");
}

void FXShader::setTextureAnim(TextureAnim *) // 0x6F7658
{
    mangled_assert("?setTextureAnim@FXShader@@QAEXPAVTextureAnim@@@Z");
    todo("implement");
}

void FXShader::setBlend(BlendFunc, BlendFunc) // 0x6F75AE
{
    mangled_assert("?setBlend@FXShader@@QAEXW4BlendFunc@@0@Z");
    todo("implement");
}

void FXShader::setWrapMode(TextureWrap) // 0x6F7662
{
    mangled_assert("?setWrapMode@FXShader@@QAEXW4TextureWrap@@@Z");
    todo("implement");
}

void FXShader::setFilterMode(TextureFilter) // 0x6F7645
{
    mangled_assert("?setFilterMode@FXShader@@QAEXW4TextureFilter@@@Z");
    todo("implement");
}

unsigned __int32 FXShader::getNumTextures() const // 0x6F74E3
{
    mangled_assert("?getNumTextures@FXShader@@QBEIXZ");
    todo("implement");
}

Texture *FXShader::getTexture(float) // 0x6F750D
{
    mangled_assert("?getTexture@FXShader@@QAEPAVTexture@@M@Z");
    todo("implement");
}

Texture *FXShader::getTexture(unsigned __int32) // 0x6F74F4
{
    mangled_assert("?getTexture@FXShader@@QAEPAVTexture@@I@Z");
    todo("implement");
}

bool FXShader::getUV(float, vector2 &[4]) // 0x6F7564
{
    mangled_assert("?getUV@FXShader@@QAE_NMAAY03Vvector2@@@Z");
    todo("implement");
}

bool FXShader::getUV(unsigned __int32, vector2 &[4]) // 0x6F7534
{
    mangled_assert("?getUV@FXShader@@QAE_NIAAY03Vvector2@@@Z");
    todo("implement");
}

void FXShader::apply(float) // 0x6F7497
{
    mangled_assert("?apply@FXShader@@QAEXM@Z");
    todo("implement");
}

void FXShader::apply(Texture *) // 0x6F74D8
{
    mangled_assert("?apply@FXShader@@QAEXPAVTexture@@@Z");
    todo("implement");
}

void FXShader::setCaps(Texture *) // 0x6F75BF
{
    mangled_assert("?setCaps@FXShader@@AAEXPAVTexture@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

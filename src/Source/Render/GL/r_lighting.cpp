#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>
#include <Render\GL\r_macros.h>
#include <Mathlib\vector4.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool rglSetLight(__int32 n, bool state);
extern bool rglGetLight(__int32 n);
extern void rglSetLightPosition(__int32 n, vector4 const &position);
extern vector4 rglGetLightPosition(__int32 n);
extern __int32 rglGetSideIndex();
extern unsigned __int32 rglMapSide();
extern void rglSetMaterialProperty(unsigned __int32 property, vector4 const &value);
extern vector4 rglGetMaterialProperty(MaterialProperty property);
extern MaterialSide rglSetMaterialSide(MaterialSide side);
extern MaterialSide rglGetMaterialSide();
extern void rglSetLightProperty(__int32 n, MaterialProperty property, vector4 const &value);
extern void rglSetLightPropertyf(__int32 n, LightProperty property, float value);
extern void rglGetSceneAmbient(vector4 &ambient);
extern void rglSetSceneAmbient(vector4 const &ambient);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

bool rglSetLight(__int32 n, bool state) // 0x1000D654
{
    mangled_assert("?rglSetLight@@YG_NH_N@Z");
    todo("implement");
}

bool rglGetLight(__int32 n) // 0x1000D4E7
{
    mangled_assert("?rglGetLight@@YG_NH@Z");
    todo("implement");
}

void rglSetLightPosition(__int32 n, vector4 const &position) // 0x1000D6DB
{
    mangled_assert("?rglSetLightPosition@@YGXHABVvector4@@@Z");
    todo("implement");
}

vector4 rglGetLightPosition(__int32 n) // 0x1000D500
{
    mangled_assert("?rglGetLightPosition@@YG?AVvector4@@H@Z");
    todo("implement");
}

__int32 rglGetSideIndex() // 0x1000D5F9
{
    mangled_assert("?rglGetSideIndex@@YGHXZ");
    todo("implement");
}

unsigned __int32 rglMapSide() // 0x1000D621
{
    mangled_assert("?rglMapSide@@YGIXZ");
    todo("implement");
}

void rglSetMaterialProperty(unsigned __int32 property, vector4 const &value) // 0x1000D7CE
{
    mangled_assert("?rglSetMaterialProperty@@YGXIABVvector4@@@Z");
    todo("implement");
}

vector4 rglGetMaterialProperty(MaterialProperty property) // 0x1000D54B
{
    mangled_assert("?rglGetMaterialProperty@@YG?AVvector4@@W4MaterialProperty@@@Z");
    todo("implement");
}

MaterialSide rglSetMaterialSide(MaterialSide side) // 0x1000D962
{
    mangled_assert("?rglSetMaterialSide@@YG?AW4MaterialSide@@W41@@Z");
    todo("implement");
}

MaterialSide rglGetMaterialSide() // 0x1000D5DE
{
    mangled_assert("?rglGetMaterialSide@@YG?AW4MaterialSide@@XZ");
    todo("implement");
}

void rglSetLightProperty(__int32 n, MaterialProperty property, vector4 const &value) // 0x1000D6FE
{
    mangled_assert("?rglSetLightProperty@@YGXHW4MaterialProperty@@ABVvector4@@@Z");
    todo("implement");
}

void rglSetLightPropertyf(__int32 n, LightProperty property, float value) // 0x1000D75A
{
    mangled_assert("?rglSetLightPropertyf@@YGXHW4LightProperty@@M@Z");
    todo("implement");
}

void rglGetSceneAmbient(vector4 &ambient) // 0x1000D5E4
{
    mangled_assert("?rglGetSceneAmbient@@YGXAAVvector4@@@Z");
    todo("implement");
}

void rglSetSceneAmbient(vector4 const &ambient) // 0x1000D977
{
    mangled_assert("?rglSetSceneAmbient@@YGXABVvector4@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif

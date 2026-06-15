#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <list>
#include <map>
#include <xtree>
#include <assert.h>
#include <assist\stlexvector.h>
#include <algorithm>
#include <util\types.h>
#include <memory\mmfixedpool.h>
#include <boost\static_assert.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <platform\osdef.h>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <fileio\iff.h>
#include <fileio\fileioexports.h>
#include <Objects\Objects.h>
#include <Objects\Light.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <boost\config\suffix.hpp>
#include <gl\r_types.h>
#include <debug\ctmessage.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

typedef stdext::hash_map<unsigned int,Light *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,Light *> > > HandleToLightMap;

/* ---------- prototypes */

extern __int32 handleLITE(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

_static bool lightOrderFunc(LightHandle const &a, LightHandle const &b);

/* ---------- globals */

extern LightHandle LightManager::InvalidHandle; // 0x10132B18
extern LightManager *LightManager::m_instance; // 0x10132AE8

/* ---------- private variables */

_static
{
    extern stdext::hash_map<unsigned int,Light *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,Light *> > > g_handleMap; // 0x10132AF8
    extern FixedSizeObjAllocator<Light,32> s_LightAllocator; // 0x1010D5D0
    extern std::vector<LightHandle,std::allocator<LightHandle> > g_activeLights; // 0x10132AEC
    extern float const maxDistance; // 0x100E4930
    extern unsigned __int32 g_nextHandle; // 0x1010D5CC
}

/* ---------- public code */

void *Light::operator new(unsigned __int32 size) // 0x1006C0C0
{
    mangled_assert("??2Light@@SGPAXI@Z");
    todo("implement");
}

void Light::operator delete(void *p, unsigned __int32 size) // 0x1006C100
{
    mangled_assert("??3Light@@SGXPAXI@Z");
    todo("implement");
}

Light const *LightHandle::getLightPtr() const // 0x1006E080
{
    mangled_assert("?getLightPtr@LightHandle@@QBEPBVLight@@XZ");
    todo("implement");
}

Light *LightHandle::getLightPtrForModification() // 0x1006E0D0
{
    mangled_assert("?getLightPtrForModification@LightHandle@@QAEPAVLight@@XZ");
    todo("implement");
}

LightHandle &LightHandle::operator=(Light *) // 0x1006C120
{
    mangled_assert("??4LightHandle@@QAEAAV0@PAVLight@@@Z");
    todo("implement");
}

void LightHandle::assignNewHandle(Light *) // 0x1006D650
{
    mangled_assert("?assignNewHandle@LightHandle@@QAEXPAVLight@@@Z");
    todo("implement");
}

void LightHandle::killHandle() // 0x1006E670
{
    mangled_assert("?killHandle@LightHandle@@QAEXXZ");
    todo("implement");
}

LightManager::LightManager() // 0x1006BDC0
{
    mangled_assert("??0LightManager@@IAE@XZ");
    todo("implement");
}

_inline std::_List_buy<std::pair<unsigned int const ,Light *>,std::allocator<std::pair<unsigned int const ,Light *> > >::~_List_buy<std::pair<unsigned int const ,Light *>,std::allocator<std::pair<unsigned int const ,Light *> > >() // 0x1006BFD0
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBIPAVLight@@@std@@V?$allocator@U?$pair@$$CBIPAVLight@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<unsigned int,Light *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,Light *> > >::~hash_map<unsigned int,Light *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,Light *> > >() // 0x1006BFE0
{
    mangled_assert("??1?$hash_map@IPAVLight@@V?$hash_compare@IU?$less@I@std@@@stdext@@V?$allocator@U?$pair@$$CBIPAVLight@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LightManager::~LightManager() // 0x1006C090
{
    mangled_assert("??1LightManager@@IAE@XZ");
    todo("implement");
}

LightManager *LightManager::i() // 0x1006E640
{
    mangled_assert("?i@LightManager@@SGPAV1@XZ");
    todo("implement");
}

bool LightManager::startup() // 0x1006EEB0
{
    mangled_assert("?startup@LightManager@@SG_NXZ");
    todo("implement");
}

bool LightManager::shutdown() // 0x1006EE10
{
    mangled_assert("?shutdown@LightManager@@SG_NXZ");
    todo("implement");
}

LightHandle LightManager::createPointLight(char const *) // 0x1006D7F0
{
    mangled_assert("?createPointLight@LightManager@@QAE?AVLightHandle@@PBD@Z");
    todo("implement");
}

bool LightManager::removeLight(LightHandle) // 0x1006EBF0
{
    mangled_assert("?removeLight@LightManager@@QAE_NVLightHandle@@@Z");
    todo("implement");
}

void LightManager::addLight(Light *) // 0x1006D4B0
{
    mangled_assert("?addLight@LightManager@@QAEXPAVLight@@@Z");
    todo("implement");
}

void LightManager::setMaxActiveLights(unsigned __int32) // 0x1006EE00
{
    mangled_assert("?setMaxActiveLights@LightManager@@QAEXI@Z");
    todo("implement");
}

unsigned __int32 LightManager::getMaxActiveLights() const // 0x1006E220
{
    mangled_assert("?getMaxActiveLights@LightManager@@QBEIXZ");
    todo("implement");
}

bool LightManager::findIndexedLight(unsigned __int32, LightHandle &) // 0x1006DFE0
{
    mangled_assert("?findIndexedLight@LightManager@@QAE_NIAAVLightHandle@@@Z");
    todo("implement");
}

bool LightManager::findNamedLight(char const *, LightHandle &) // 0x1006E010
{
    mangled_assert("?findNamedLight@LightManager@@QAE_NPBDAAVLightHandle@@@Z");
    todo("implement");
}

std::vector<LightHandle,std::allocator<LightHandle> > &LightManager::findActiveLights(vector3 const &, float const) const // 0x1006DE80
{
    mangled_assert("?findActiveLights@LightManager@@QBEAAV?$vector@VLightHandle@@V?$allocator@VLightHandle@@@std@@@std@@ABVvector3@@M@Z");
    todo("implement");
}

void LightManager::disableAllLights(rndTable const &) const // 0x1006D9B0
{
    mangled_assert("?disableAllLights@LightManager@@ABEXABUrndTable@@@Z");
    todo("implement");
}

__int32 LightManager::findCachedLight(LightHandle &) // 0x1006DFB0
{
    mangled_assert("?findCachedLight@LightManager@@QAEHAAVLightHandle@@@Z");
    todo("implement");
}

void LightManager::resetLights() // 0x1006ED90
{
    mangled_assert("?resetLights@LightManager@@QAEXXZ");
    todo("implement");
}

__int32 handleLITE(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x1006E230
{
    mangled_assert("?handleLITE@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

void Light::execute(rndTable *, __int32) const // 0x1006DB60
{
    mangled_assert("?execute@Light@@QBEXPAUrndTable@@H@Z");
    todo("implement");
}

void Light::setAttenConst(float) // 0x1006EDC0
{
    mangled_assert("?setAttenConst@Light@@QAEXM@Z");
    todo("implement");
}

unsigned __int32 LightManager::executeLights(rndTable &, unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, vector3 const &) const // 0x1006DCC0
{
    mangled_assert("?executeLights@LightManager@@QBEIAAUrndTable@@IIIABVvector3@@@Z");
    todo("implement");
}

unsigned __int32 LightManager::getLights(unsigned __int32 const, LightHandle *, unsigned __int32, vector3 const &) // 0x1006E120
{
    mangled_assert("?getLights@LightManager@@QAEIIPAVLightHandle@@IABVvector3@@@Z");
    todo("implement");
}

/* ---------- private code */

_static bool lightOrderFunc(LightHandle const &a, LightHandle const &b) // 0x1006E6E0
{
    mangled_assert("lightOrderFunc");
    todo("implement");
}
#endif

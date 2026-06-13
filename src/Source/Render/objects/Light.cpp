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

_extern void *_sub_1006C0C0(unsigned __int32);
void *Light::operator new(unsigned __int32 size) // 0x1006C0C0
{
    mangled_assert("??2Light@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_1006C0C0(size);
    return __result;
}

_extern void _sub_1006C100(void *, unsigned __int32);
void Light::operator delete(void *p, unsigned __int32 size) // 0x1006C100
{
    mangled_assert("??3Light@@SGXPAXI@Z");
    todo("implement");
    _sub_1006C100(p, size);
}

_extern Light const *_sub_1006E080(LightHandle const *const);
Light const *LightHandle::getLightPtr() const // 0x1006E080
{
    mangled_assert("?getLightPtr@LightHandle@@QBEPBVLight@@XZ");
    todo("implement");
    Light const * __result = _sub_1006E080(this);
    return __result;
}

_extern Light *_sub_1006E0D0(LightHandle *const);
Light *LightHandle::getLightPtrForModification() // 0x1006E0D0
{
    mangled_assert("?getLightPtrForModification@LightHandle@@QAEPAVLight@@XZ");
    todo("implement");
    Light * __result = _sub_1006E0D0(this);
    return __result;
}

_extern LightHandle &_sub_1006C120(LightHandle *const, Light *);
LightHandle &LightHandle::operator=(Light *) // 0x1006C120
{
    mangled_assert("??4LightHandle@@QAEAAV0@PAVLight@@@Z");
    todo("implement");
    LightHandle & __result = _sub_1006C120(this, arg);
    return __result;
}

_extern void _sub_1006D650(LightHandle *const, Light *);
void LightHandle::assignNewHandle(Light *) // 0x1006D650
{
    mangled_assert("?assignNewHandle@LightHandle@@QAEXPAVLight@@@Z");
    todo("implement");
    _sub_1006D650(this, arg);
}

_extern void _sub_1006E670(LightHandle *const);
void LightHandle::killHandle() // 0x1006E670
{
    mangled_assert("?killHandle@LightHandle@@QAEXXZ");
    todo("implement");
    _sub_1006E670(this);
}

_extern _sub_1006BDC0(LightManager *const);
LightManager::LightManager() // 0x1006BDC0
{
    mangled_assert("??0LightManager@@IAE@XZ");
    todo("implement");
    _sub_1006BDC0(this);
}

_extern void _sub_1006BFD0(std::_List_buy<std::pair<unsigned int const ,Light *>,std::allocator<std::pair<unsigned int const ,Light *> > > *const);
_inline std::_List_buy<std::pair<unsigned int const ,Light *>,std::allocator<std::pair<unsigned int const ,Light *> > >::~_List_buy<std::pair<unsigned int const ,Light *>,std::allocator<std::pair<unsigned int const ,Light *> > >() // 0x1006BFD0
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBIPAVLight@@@std@@V?$allocator@U?$pair@$$CBIPAVLight@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1006BFD0(this);
}

_extern void _sub_1006BFE0(stdext::hash_map<unsigned int,Light *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,Light *> > > *const);
_inline stdext::hash_map<unsigned int,Light *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,Light *> > >::~hash_map<unsigned int,Light *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,Light *> > >() // 0x1006BFE0
{
    mangled_assert("??1?$hash_map@IPAVLight@@V?$hash_compare@IU?$less@I@std@@@stdext@@V?$allocator@U?$pair@$$CBIPAVLight@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_1006BFE0(this);
}

_extern void _sub_1006C090(LightManager *const);
LightManager::~LightManager() // 0x1006C090
{
    mangled_assert("??1LightManager@@IAE@XZ");
    todo("implement");
    _sub_1006C090(this);
}

_extern LightManager *_sub_1006E640();
LightManager *LightManager::i() // 0x1006E640
{
    mangled_assert("?i@LightManager@@SGPAV1@XZ");
    todo("implement");
    LightManager * __result = _sub_1006E640();
    return __result;
}

_extern bool _sub_1006EEB0();
bool LightManager::startup() // 0x1006EEB0
{
    mangled_assert("?startup@LightManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_1006EEB0();
    return __result;
}

_extern bool _sub_1006EE10();
bool LightManager::shutdown() // 0x1006EE10
{
    mangled_assert("?shutdown@LightManager@@SG_NXZ");
    todo("implement");
    bool __result = _sub_1006EE10();
    return __result;
}

_extern LightHandle _sub_1006D7F0(LightManager *const, char const *);
LightHandle LightManager::createPointLight(char const *) // 0x1006D7F0
{
    mangled_assert("?createPointLight@LightManager@@QAE?AVLightHandle@@PBD@Z");
    todo("implement");
    LightHandle __result = _sub_1006D7F0(this, arg);
    return __result;
}

_extern bool _sub_1006EBF0(LightManager *const, LightHandle);
bool LightManager::removeLight(LightHandle) // 0x1006EBF0
{
    mangled_assert("?removeLight@LightManager@@QAE_NVLightHandle@@@Z");
    todo("implement");
    bool __result = _sub_1006EBF0(this, arg);
    return __result;
}

_extern void _sub_1006D4B0(LightManager *const, Light *);
void LightManager::addLight(Light *) // 0x1006D4B0
{
    mangled_assert("?addLight@LightManager@@QAEXPAVLight@@@Z");
    todo("implement");
    _sub_1006D4B0(this, arg);
}

_extern void _sub_1006EE00(LightManager *const, unsigned __int32);
void LightManager::setMaxActiveLights(unsigned __int32) // 0x1006EE00
{
    mangled_assert("?setMaxActiveLights@LightManager@@QAEXI@Z");
    todo("implement");
    _sub_1006EE00(this, arg);
}

_extern unsigned __int32 _sub_1006E220(LightManager const *const);
unsigned __int32 LightManager::getMaxActiveLights() const // 0x1006E220
{
    mangled_assert("?getMaxActiveLights@LightManager@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_1006E220(this);
    return __result;
}

_extern bool _sub_1006DFE0(LightManager *const, unsigned __int32, LightHandle &);
bool LightManager::findIndexedLight(unsigned __int32, LightHandle &) // 0x1006DFE0
{
    mangled_assert("?findIndexedLight@LightManager@@QAE_NIAAVLightHandle@@@Z");
    todo("implement");
    bool __result = _sub_1006DFE0(this, arg, arg);
    return __result;
}

_extern bool _sub_1006E010(LightManager *const, char const *, LightHandle &);
bool LightManager::findNamedLight(char const *, LightHandle &) // 0x1006E010
{
    mangled_assert("?findNamedLight@LightManager@@QAE_NPBDAAVLightHandle@@@Z");
    todo("implement");
    bool __result = _sub_1006E010(this, arg, arg);
    return __result;
}

_extern std::vector<LightHandle,std::allocator<LightHandle> > &_sub_1006DE80(LightManager const *const, vector3 const &, float const);
std::vector<LightHandle,std::allocator<LightHandle> > &LightManager::findActiveLights(vector3 const &, float const) const // 0x1006DE80
{
    mangled_assert("?findActiveLights@LightManager@@QBEAAV?$vector@VLightHandle@@V?$allocator@VLightHandle@@@std@@@std@@ABVvector3@@M@Z");
    todo("implement");
    std::vector<LightHandle,std::allocator<LightHandle> > & __result = _sub_1006DE80(this, arg, arg);
    return __result;
}

_extern void _sub_1006D9B0(LightManager const *const, rndTable const &);
void LightManager::disableAllLights(rndTable const &) const // 0x1006D9B0
{
    mangled_assert("?disableAllLights@LightManager@@ABEXABUrndTable@@@Z");
    todo("implement");
    _sub_1006D9B0(this, arg);
}

_extern __int32 _sub_1006DFB0(LightManager *const, LightHandle &);
__int32 LightManager::findCachedLight(LightHandle &) // 0x1006DFB0
{
    mangled_assert("?findCachedLight@LightManager@@QAEHAAVLightHandle@@@Z");
    todo("implement");
    __int32 __result = _sub_1006DFB0(this, arg);
    return __result;
}

_extern void _sub_1006ED90(LightManager *const);
void LightManager::resetLights() // 0x1006ED90
{
    mangled_assert("?resetLights@LightManager@@QAEXXZ");
    todo("implement");
    _sub_1006ED90(this);
}

_extern __int32 _sub_1006E230(IFF *, IFFChunk *, void *, void *);
__int32 handleLITE(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x1006E230
{
    mangled_assert("?handleLITE@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_1006E230(iff, chunk, user0, user1);
    return __result;
}

_extern void _sub_1006DB60(Light const *const, rndTable *, __int32);
void Light::execute(rndTable *, __int32) const // 0x1006DB60
{
    mangled_assert("?execute@Light@@QBEXPAUrndTable@@H@Z");
    todo("implement");
    _sub_1006DB60(this, arg, arg);
}

_extern void _sub_1006EDC0(Light *const, float);
void Light::setAttenConst(float) // 0x1006EDC0
{
    mangled_assert("?setAttenConst@Light@@QAEXM@Z");
    todo("implement");
    _sub_1006EDC0(this, arg);
}

_extern unsigned __int32 _sub_1006DCC0(LightManager const *const, rndTable &, unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, vector3 const &);
unsigned __int32 LightManager::executeLights(rndTable &, unsigned __int32 const, unsigned __int32 const, unsigned __int32 const, vector3 const &) const // 0x1006DCC0
{
    mangled_assert("?executeLights@LightManager@@QBEIAAUrndTable@@IIIABVvector3@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1006DCC0(this, arg, arg, arg, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_1006E120(LightManager *const, unsigned __int32 const, LightHandle *, unsigned __int32, vector3 const &);
unsigned __int32 LightManager::getLights(unsigned __int32 const, LightHandle *, unsigned __int32, vector3 const &) // 0x1006E120
{
    mangled_assert("?getLights@LightManager@@QAEIIPAVLightHandle@@IABVvector3@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_1006E120(this, arg, arg, arg, arg);
    return __result;
}

/* ---------- private code */

_extern bool _sub_1006E6E0(LightHandle const &, LightHandle const &);
_static bool lightOrderFunc(LightHandle const &a, LightHandle const &b) // 0x1006E6E0
{
    mangled_assert("lightOrderFunc");
    todo("implement");
    bool __result = _sub_1006E6E0(a, b);
    return __result;
}
#endif

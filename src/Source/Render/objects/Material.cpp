#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <platform\osdef.h>
#include <gl\r_macros.h>
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Objects\Material.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <gl\types.h>
#include <util\colour.h>
#include <xutility>
#include <Mathlib\vector4.h>
#include <utility>
#include <Mathlib\mathlibdll.h>
#include <vector>
#include <iosfwd>
#include <Mathlib\fastmath.h>
#include <xmemory>
#include <gl\r_types.h>
#include <math.h>
#include <list>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <util\types.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Objects\Constructor.h>
#include <Objects\Objects.h>
#include <Objects\Layer.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<Modifier *,std::allocator<Modifier *> > ModifierList;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Modifier *> > > ModifierListI;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Layer *> > > LayerListI;

/* ---------- prototypes */

/* ---------- globals */

extern bool Material::m_suspend; // 0x10132B38
extern std::vector<Modifier *,std::allocator<Modifier *> > Material_mods; // 0x10132B3C

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132B39
    extern __int32 nSwitches; // 0x10132B48
    extern unsigned __int32 _allow; // 0x1010D7BC
    extern unsigned __int32 rndTMUMasks[4]; // 0x1010D7C0
}

/* ---------- public code */

_extern Material *_sub_100712D0();
Material *Material::create() // 0x100712D0
{
    mangled_assert("?create@Material@@SGPAV1@XZ");
    todo("implement");
    Material * __result = _sub_100712D0();
    return __result;
}

_extern _sub_100704D0(Material *const);
Material::Material() // 0x100704D0
{
    mangled_assert("??0Material@@QAE@XZ");
    todo("implement");
    _sub_100704D0(this);
}

_extern void _sub_10070570(Material *const);
Material::~Material() // 0x10070570
{
    mangled_assert("??1Material@@UAE@XZ");
    todo("implement");
    _sub_10070570(this);
}

_extern void _sub_10070F20(Material *const);
void Material::clear() // 0x10070F20
{
    mangled_assert("?clear@Material@@QAEXXZ");
    todo("implement");
    _sub_10070F20(this);
}

_extern void _sub_10071140(Material *const);
void Material::clearLayers() // 0x10071140
{
    mangled_assert("?clearLayers@Material@@QAEXXZ");
    todo("implement");
    _sub_10071140(this);
}

_extern void _sub_10070DA0(Material *const, Material &, Material const &);
void Material::assign(Material &, Material const &) // 0x10070DA0
{
    mangled_assert("?assign@Material@@AAEXAAV1@ABV1@@Z");
    todo("implement");
    _sub_10070DA0(this, arg, arg);
}

_extern _sub_10070460(Material *const, Material const &);
Material::Material(Material const &) // 0x10070460
{
    mangled_assert("??0Material@@QAE@ABV0@@Z");
    todo("implement");
    _sub_10070460(this, arg);
}

_extern Material &_sub_10070720(Material *const, Material const &);
Material &Material::operator=(Material const &) // 0x10070720
{
    mangled_assert("??4Material@@QAEAAV0@ABV0@@Z");
    todo("implement");
    Material & __result = _sub_10070720(this, arg);
    return __result;
}

_extern void _sub_100717C0(__int32);
void Material::setStats(__int32 _nSwitches) // 0x100717C0
{
    mangled_assert("?setStats@Material@@SGXH@Z");
    todo("implement");
    _sub_100717C0(_nSwitches);
}

_extern __int32 _sub_10071470();
__int32 Material::getStats() // 0x10071470
{
    mangled_assert("?getStats@Material@@SGHXZ");
    todo("implement");
    __int32 __result = _sub_10071470();
    return __result;
}

_extern void _sub_10070C10(Material *const, Layer *);
void Material::addLayer(Layer *) // 0x10070C10
{
    mangled_assert("?addLayer@Material@@QAEXPAVLayer@@@Z");
    todo("implement");
    _sub_10070C10(this, arg);
}

_extern bool _sub_10071630(Material *const, Layer *);
bool Material::remLayer(Layer *) // 0x10071630
{
    mangled_assert("?remLayer@Material@@QAE_NPAVLayer@@@Z");
    todo("implement");
    bool __result = _sub_10071630(this, arg);
    return __result;
}

_extern bool _sub_10071300(Material *const, Layer *);
bool Material::delLayer(Layer *) // 0x10071300
{
    mangled_assert("?delLayer@Material@@QAE_NPAVLayer@@@Z");
    todo("implement");
    bool __result = _sub_10071300(this, arg);
    return __result;
}

_extern Layer *_sub_10071430(Material const *const, __int32);
Layer *Material::getLayer(__int32) const // 0x10071430
{
    mangled_assert("?getLayer@Material@@QBEPAVLayer@@H@Z");
    todo("implement");
    Layer * __result = _sub_10071430(this, arg);
    return __result;
}

_extern bool _sub_10070D80(Material *const, unsigned __int32 &);
bool Material::apply(unsigned __int32 &) // 0x10070D80
{
    mangled_assert("?apply@Material@@QAE_NAAI@Z");
    todo("implement");
    bool __result = _sub_10070D80(this, arg);
    return __result;
}

_extern bool _sub_10070D90(Material *const);
bool Material::apply() // 0x10070D90
{
    mangled_assert("?apply@Material@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_10070D90(this);
    return __result;
}

_extern void _sub_10071760(Material *const, bool);
void Material::setGouraud(bool) // 0x10071760
{
    mangled_assert("?setGouraud@Material@@QAEX_N@Z");
    todo("implement");
    _sub_10071760(this, arg);
}

_extern bool _sub_10071420(Material const *const);
bool Material::getGouraud() const // 0x10071420
{
    mangled_assert("?getGouraud@Material@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_10071420(this);
    return __result;
}

_extern void _sub_10071710(Material *const, CullMode);
void Material::setCull(CullMode) // 0x10071710
{
    mangled_assert("?setCull@Material@@QAEXW4CullMode@@@Z");
    todo("implement");
    _sub_10071710(this, arg);
}

_extern CullMode _sub_10071410(Material const *const);
CullMode Material::getCull() const // 0x10071410
{
    mangled_assert("?getCull@Material@@QBE?AW4CullMode@@XZ");
    todo("implement");
    CullMode __result = _sub_10071410(this);
    return __result;
}

_extern void _sub_100716F0(Material *const, BlendFunc, BlendFunc);
void Material::setBlend(BlendFunc, BlendFunc) // 0x100716F0
{
    mangled_assert("?setBlend@Material@@QAEXW4BlendFunc@@0@Z");
    todo("implement");
    _sub_100716F0(this, arg, arg);
}

_extern void _sub_100713E0(Material const *const, BlendFunc *, BlendFunc *);
void Material::getBlend(BlendFunc *, BlendFunc *) const // 0x100713E0
{
    mangled_assert("?getBlend@Material@@QBEXPAW4BlendFunc@@0@Z");
    todo("implement");
    _sub_100713E0(this, arg, arg);
}

_extern void _sub_100716D0(Material *const, vector4 const &);
void Material::setAmbient(vector4 const &) // 0x100716D0
{
    mangled_assert("?setAmbient@Material@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_100716D0(this, arg);
}

_extern void _sub_10071720(Material *const, vector4 const &);
void Material::setDiffuse(vector4 const &) // 0x10071720
{
    mangled_assert("?setDiffuse@Material@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_10071720(this, arg);
}

_extern void _sub_100717A0(Material *const, vector4 const &);
void Material::setSpecular(vector4 const &) // 0x100717A0
{
    mangled_assert("?setSpecular@Material@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_100717A0(this, arg);
}

_extern void _sub_10071790(Material *const, float);
void Material::setShininess(float) // 0x10071790
{
    mangled_assert("?setShininess@Material@@QAEXM@Z");
    todo("implement");
    _sub_10071790(this, arg);
}

_extern void _sub_10071740(Material *const, vector4 const &);
void Material::setEmission(vector4 const &) // 0x10071740
{
    mangled_assert("?setEmission@Material@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_10071740(this, arg);
}

_extern unsigned __int32 _sub_10071770(unsigned __int32);
unsigned __int32 Material::setOverride(unsigned __int32 passthru) // 0x10071770
{
    mangled_assert("?setOverride@Material@@SGII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10071770(passthru);
    return __result;
}

_extern unsigned __int32 _sub_10071460();
unsigned __int32 Material::getOverride() // 0x10071460
{
    mangled_assert("?getOverride@Material@@SGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10071460();
    return __result;
}

_extern bool _sub_10070C20(Modifier *);
bool Material::addModifier(Modifier *mod) // 0x10070C20
{
    mangled_assert("?addModifier@Material@@SG_NPAVModifier@@@Z");
    todo("implement");
    bool __result = _sub_10070C20(mod);
    return __result;
}

_extern bool _sub_10071680(Modifier *);
bool Material::remModifier(Modifier *mod) // 0x10071680
{
    mangled_assert("?remModifier@Material@@SG_NPAVModifier@@@Z");
    todo("implement");
    bool __result = _sub_10071680(mod);
    return __result;
}

_extern bool _sub_10071270();
bool Material::clearModifiers() // 0x10071270
{
    mangled_assert("?clearModifiers@Material@@SG_NXZ");
    todo("implement");
    bool __result = _sub_10071270();
    return __result;
}

_extern bool _sub_10071500(Material *, unsigned __int32 *);
bool Material::processModifiers(Material *mat, unsigned __int32 *mask) // 0x10071500
{
    mangled_assert("?processModifiers@Material@@SG_NPAV1@PAI@Z");
    todo("implement");
    bool __result = _sub_10071500(mat, mask);
    return __result;
}

_extern bool _sub_100717D0(bool);
bool Material::suspendModifiers(bool state) // 0x100717D0
{
    mangled_assert("?suspendModifiers@Material@@SG_N_N@Z");
    todo("implement");
    bool __result = _sub_100717D0(state);
    return __result;
}

_extern __int32 _sub_10071450();
__int32 Material::getNumModifiers() // 0x10071450
{
    mangled_assert("?getNumModifiers@Material@@SGHXZ");
    todo("implement");
    __int32 __result = _sub_10071450();
    return __result;
}

/* ---------- private code */
#endif

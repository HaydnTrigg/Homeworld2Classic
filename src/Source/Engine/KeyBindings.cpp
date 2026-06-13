#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <seInterface2\sedefinesshared.h>
#include <platform\inputinterface.h>
#include <memory\memorylib.h>
#include <abilities.h>
#include <localizer\localizer.h>
#include <Mathlib\matrix3.h>
#include <sobid.h>
#include <xfunctional>
#include <new>
#include <xstddef>
#include <Collision\BVH\octree.h>
#include <type_traits>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <stdarg.h>
#include <Collision\BVH\proxy.h>
#include <region.h>
#include <Collision\intersect.h>
#include <prim.h>
#include <Collision\primitivesfwd.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <luaconfig\luautils.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <Collision\Primitives\aabb.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Camera\OrbitParameters.h>
#include <boost\cstdint.hpp>
#include <task.h>
#include <SoundManager\SoundManager.h>
#include <stack>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <boost\scoped_array.hpp>
#include <Collision\Primitives\capsule.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <SoundManager\SoundEntityHandle.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <assist\typemagic.h>
#include <Mathlib\mathlibdll.h>
#include <sob.h>
#include <Mathlib\fastmath.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Interface.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <seInterface2\SampleID.h>
#include <selection.h>
#include <seInterface2\SampleBase.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <CameraTuning.h>
#include <MainUI.h>
#include <boost\detail\lwm_win32.hpp>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <KeyBindings.h>
#include <Collision\Primitives\obb.h>
#include <config.h>
#include <wchar.h>
#include <string>
#include <platform\keydefines.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

class IsKeyBindingUnique :
    public std::binary_function<KeyBinding *,int const ,bool>
{
public:
    bool operator()(KeyBinding *, __int32 const) const;
};
static_assert(sizeof(IsKeyBindingUnique) == 1, "Invalid IsKeyBindingUnique size");

/* ---------- prototypes */

extern void MakeKeyComboString(std::smallvector<int,5,std::allocator<int> > const &keyCombo, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &outString);
extern bool KeyCombosEqual(std::smallvector<int,5,std::allocator<int> > const &l, std::smallvector<int,5,std::allocator<int> > const &r);

/* ---------- globals */

extern __int32 keyFocusModifier; // 0x83C22C
extern __int32 keyAddModifier; // 0x83C230
extern __int32 keyHotKeyGroupModifier; // 0x83C234

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5FEF2A(KeyBindingList *const);
KeyBindingList::KeyBindingList() // 0x5FEF2A
{
    mangled_assert("??0KeyBindingList@@QAE@XZ");
    todo("implement");
    _sub_5FEF2A(this);
}

_extern void _sub_5FEF4A(std::_List_buy<KeyBinding *,std::allocator<KeyBinding *> > *const);
_inline std::_List_buy<KeyBinding *,std::allocator<KeyBinding *> >::~_List_buy<KeyBinding *,std::allocator<KeyBinding *> >() // 0x5FEF4A
{
    mangled_assert("??1?$_List_buy@PAVKeyBinding@@V?$allocator@PAVKeyBinding@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5FEF4A(this);
}

_extern void _sub_5FEF65(KeyBinding *const);
_inline KeyBinding::~KeyBinding() // 0x5FEF65
{
    mangled_assert("??1KeyBinding@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5FEF65(this);
}

_extern void _sub_5FEF8B(KeyBindingList *const);
KeyBindingList::~KeyBindingList() // 0x5FEF8B
{
    mangled_assert("??1KeyBindingList@@QAE@XZ");
    todo("implement");
    _sub_5FEF8B(this);
}

_extern void _sub_6009D3(KeyBindingList *const);
void KeyBindingList::clear() // 0x6009D3
{
    mangled_assert("?clear@KeyBindingList@@QAEXXZ");
    todo("implement");
    _sub_6009D3(this);
}

_extern KeyBinding *_sub_600BA8(KeyBindingList const *const, __int32, __int32);
KeyBinding *KeyBindingList::findEventData(__int32, __int32) const // 0x600BA8
{
    mangled_assert("?findEventData@KeyBindingList@@ABEPAVKeyBinding@@HH@Z");
    todo("implement");
    KeyBinding * __result = _sub_600BA8(this, arg, arg);
    return __result;
}

_extern void _sub_5FF79F(LuaConfig &);
void KeyBindingList::BindKeyDefines(LuaConfig &lc) // 0x5FF79F
{
    mangled_assert("?BindKeyDefines@KeyBindingList@@SGXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5FF79F(lc);
}

_extern void _sub_5FF086(LuaConfig &);
void KeyBindingList::BindEventEnums(LuaConfig &lc) // 0x5FF086
{
    mangled_assert("?BindEventEnums@KeyBindingList@@SGXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_5FF086(lc);
}

_extern void _sub_601331(KeyBindingList *const, char const *, char const *);
void KeyBindingList::save(char const *, char const *) // 0x601331
{
    mangled_assert("?save@KeyBindingList@@QAEXPBD0@Z");
    todo("implement");
    _sub_601331(this, arg, arg);
}

_extern void _sub_6012A9(KeyBindingList *const, LuaConfig &, char const *);
void KeyBindingList::save(LuaConfig &, char const *) // 0x6012A9
{
    mangled_assert("?save@KeyBindingList@@QAEXAAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_6012A9(this, arg, arg);
}

_extern void _sub_600CEE(KeyBindingList *const, LuaConfig &, char const *);
void KeyBindingList::load(LuaConfig &, char const *) // 0x600CEE
{
    mangled_assert("?load@KeyBindingList@@QAEXAAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_600CEE(this, arg, arg);
}

_extern void _sub_6010B5(KeyBindingList *const, char const *, char const *);
void KeyBindingList::load(char const *, char const *) // 0x6010B5
{
    mangled_assert("?load@KeyBindingList@@QAEXPBD0@Z");
    todo("implement");
    _sub_6010B5(this, arg, arg);
}

_extern void _sub_600B6A(KeyBindingList const *const, std::smallvector<int,5,std::allocator<int> > const &, std::vector<KeyBinding *,std::allocator<KeyBinding *> > &);
void KeyBindingList::findBindKeyCombos(std::smallvector<int,5,std::allocator<int> > const &, std::vector<KeyBinding *,std::allocator<KeyBinding *> > &) const // 0x600B6A
{
    mangled_assert("?findBindKeyCombos@KeyBindingList@@QBEXABV?$smallvector@H$04V?$allocator@H@std@@@std@@AAV?$vector@PAVKeyBinding@@V?$allocator@PAVKeyBinding@@@std@@@3@@Z");
    todo("implement");
    _sub_600B6A(this, arg, arg);
}

_extern KeyBinding *_sub_600AAE(KeyBindingList const *const, KeyEvent, unsigned __int32, __int32 *);
KeyBinding *KeyBindingList::findBind(KeyEvent, unsigned __int32, __int32 *) const // 0x600AAE
{
    mangled_assert("?findBind@KeyBindingList@@QBEPAVKeyBinding@@W4KeyEvent@@IPAH@Z");
    todo("implement");
    KeyBinding * __result = _sub_600AAE(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_5FF054(IsKeyBindingUnique const *const, KeyBinding *, __int32 const);
_inline bool IsKeyBindingUnique::operator()(KeyBinding *, __int32 const) const // 0x5FF054
{
    mangled_assert("??RIsKeyBindingUnique@@QBE_NPAVKeyBinding@@H@Z");
    todo("implement");
    bool __result = _sub_5FF054(this, arg, arg);
    return __result;
}

_extern _sub_5FEDD5(KeyBinding *const, KeyBinding const &);
_inline KeyBinding::KeyBinding(KeyBinding const &) // 0x5FEDD5
{
    mangled_assert("??0KeyBinding@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_5FEDD5(this, arg);
}

_extern void _sub_600700(KeyBindingList *const, KeyBindingList const &);
void KeyBindingList::bind(KeyBindingList const &) // 0x600700
{
    mangled_assert("?bind@KeyBindingList@@QAEXABV1@@Z");
    todo("implement");
    _sub_600700(this, arg);
}

_extern void _sub_6008A1(KeyBindingList *const, wchar_t const *, char const *, KeyEvent, unsigned __int32, __int32 *, __int32);
void KeyBindingList::bind(wchar_t const *, char const *, KeyEvent, unsigned __int32, __int32 *, __int32) // 0x6008A1
{
    mangled_assert("?bind@KeyBindingList@@QAEXPB_WPBDW4KeyEvent@@IPAHH@Z");
    todo("implement");
    _sub_6008A1(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_60078F(KeyBindingList *const, __int32, KeyEvent, __int32, wchar_t const *, unsigned __int32, __int32 *, __int32);
void KeyBindingList::bind(__int32, KeyEvent, __int32, wchar_t const *, unsigned __int32, __int32 *, __int32) // 0x60078F
{
    mangled_assert("?bind@KeyBindingList@@QAEXHW4KeyEvent@@HPB_WIPAHH@Z");
    todo("implement");
    _sub_60078F(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_6013AF(KeyBindingList *const, __int32, __int32);
bool KeyBindingList::unbindByEventData(__int32, __int32) // 0x6013AF
{
    mangled_assert("?unbindByEventData@KeyBindingList@@QAE_NHH@Z");
    todo("implement");
    bool __result = _sub_6013AF(this, arg, arg);
    return __result;
}

_extern void _sub_600A61(KeyBindingList const *const, region *);
void KeyBindingList::executeBindings(region *) const // 0x600A61
{
    mangled_assert("?executeBindings@KeyBindingList@@QBEXPAVregion@@@Z");
    todo("implement");
    _sub_600A61(this, arg);
}

_extern KeyBinding *_sub_600B37(KeyBindingList const *const, __int32);
KeyBinding *KeyBindingList::findBindId(__int32) const // 0x600B37
{
    mangled_assert("?findBindId@KeyBindingList@@QBEPAVKeyBinding@@H@Z");
    todo("implement");
    KeyBinding * __result = _sub_600B37(this, arg);
    return __result;
}

_extern void _sub_601133(KeyBindingList const *const, KeyBindingList &);
void KeyBindingList::makeCopy(KeyBindingList &) const // 0x601133
{
    mangled_assert("?makeCopy@KeyBindingList@@QBEXAAV1@@Z");
    todo("implement");
    _sub_601133(this, arg);
}

_extern unsigned __int32 _sub_601243(KeyBindingList *const, std::smallvector<int,5,std::allocator<int> >, std::smallvector<int,5,std::allocator<int> > const &);
unsigned __int32 KeyBindingList::reassignKeyCombo(std::smallvector<int,5,std::allocator<int> >, std::smallvector<int,5,std::allocator<int> > const &) // 0x601243
{
    mangled_assert("?reassignKeyCombo@KeyBindingList@@QAEIV?$smallvector@H$04V?$allocator@H@std@@@std@@ABV23@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_601243(this, arg, arg);
    return __result;
}

_extern _sub_5FEE71(KeyBinding *const, KeyEvent, unsigned __int32, __int32 const *, __int32);
KeyBinding::KeyBinding(KeyEvent, unsigned __int32, __int32 const *, __int32) // 0x5FEE71
{
    mangled_assert("??0KeyBinding@@QAE@W4KeyEvent@@IPBHH@Z");
    todo("implement");
    _sub_5FEE71(this, arg, arg, arg, arg);
}

_extern void _sub_60037E(KeyBinding *const, std::smallvector<int,5,std::allocator<int> > const &);
void KeyBinding::ResetKeyCombo(std::smallvector<int,5,std::allocator<int> > const &) // 0x60037E
{
    mangled_assert("?ResetKeyCombo@KeyBinding@@QAEXABV?$smallvector@H$04V?$allocator@H@std@@@std@@@Z");
    todo("implement");
    _sub_60037E(this, arg);
}

_extern void _sub_600312(KeyBinding *const, KeyBinding const &);
void KeyBinding::Reset(KeyBinding const &) // 0x600312
{
    mangled_assert("?Reset@KeyBinding@@QAEXABV1@@Z");
    todo("implement");
    _sub_600312(this, arg);
}

_extern void _sub_6003A2(KeyBinding const *const, LuaConfig &);
void KeyBinding::Save(LuaConfig &) const // 0x6003A2
{
    mangled_assert("?Save@KeyBinding@@QBEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_6003A2(this, arg);
}

_extern void _sub_600263(std::smallvector<int,5,std::allocator<int> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &);
void MakeKeyComboString(std::smallvector<int,5,std::allocator<int> > const &keyCombo, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &outString) // 0x600263
{
    mangled_assert("?MakeKeyComboString@@YGXABV?$smallvector@H$04V?$allocator@H@std@@@std@@AAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z");
    todo("implement");
    _sub_600263(keyCombo, outString);
}

_extern bool _sub_600213(std::smallvector<int,5,std::allocator<int> > const &, std::smallvector<int,5,std::allocator<int> > const &);
bool KeyCombosEqual(std::smallvector<int,5,std::allocator<int> > const &l, std::smallvector<int,5,std::allocator<int> > const &r) // 0x600213
{
    mangled_assert("?KeyCombosEqual@@YG_NABV?$smallvector@H$04V?$allocator@H@std@@@std@@0@Z");
    todo("implement");
    bool __result = _sub_600213(l, r);
    return __result;
}

/* ---------- private code */
#endif

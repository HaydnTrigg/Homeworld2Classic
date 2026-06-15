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

KeyBindingList::KeyBindingList() // 0x5FEF2A
{
    mangled_assert("??0KeyBindingList@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<KeyBinding *,std::allocator<KeyBinding *> >::~_List_buy<KeyBinding *,std::allocator<KeyBinding *> >() // 0x5FEF4A
{
    mangled_assert("??1?$_List_buy@PAVKeyBinding@@V?$allocator@PAVKeyBinding@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline KeyBinding::~KeyBinding() // 0x5FEF65
{
    mangled_assert("??1KeyBinding@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

KeyBindingList::~KeyBindingList() // 0x5FEF8B
{
    mangled_assert("??1KeyBindingList@@QAE@XZ");
    todo("implement");
}

void KeyBindingList::clear() // 0x6009D3
{
    mangled_assert("?clear@KeyBindingList@@QAEXXZ");
    todo("implement");
}

KeyBinding *KeyBindingList::findEventData(__int32, __int32) const // 0x600BA8
{
    mangled_assert("?findEventData@KeyBindingList@@ABEPAVKeyBinding@@HH@Z");
    todo("implement");
}

void KeyBindingList::BindKeyDefines(LuaConfig &lc) // 0x5FF79F
{
    mangled_assert("?BindKeyDefines@KeyBindingList@@SGXAAVLuaConfig@@@Z");
    todo("implement");
}

void KeyBindingList::BindEventEnums(LuaConfig &lc) // 0x5FF086
{
    mangled_assert("?BindEventEnums@KeyBindingList@@SGXAAVLuaConfig@@@Z");
    todo("implement");
}

void KeyBindingList::save(char const *, char const *) // 0x601331
{
    mangled_assert("?save@KeyBindingList@@QAEXPBD0@Z");
    todo("implement");
}

void KeyBindingList::save(LuaConfig &, char const *) // 0x6012A9
{
    mangled_assert("?save@KeyBindingList@@QAEXAAVLuaConfig@@PBD@Z");
    todo("implement");
}

void KeyBindingList::load(LuaConfig &, char const *) // 0x600CEE
{
    mangled_assert("?load@KeyBindingList@@QAEXAAVLuaConfig@@PBD@Z");
    todo("implement");
}

void KeyBindingList::load(char const *, char const *) // 0x6010B5
{
    mangled_assert("?load@KeyBindingList@@QAEXPBD0@Z");
    todo("implement");
}

void KeyBindingList::findBindKeyCombos(std::smallvector<int,5,std::allocator<int> > const &, std::vector<KeyBinding *,std::allocator<KeyBinding *> > &) const // 0x600B6A
{
    mangled_assert("?findBindKeyCombos@KeyBindingList@@QBEXABV?$smallvector@H$04V?$allocator@H@std@@@std@@AAV?$vector@PAVKeyBinding@@V?$allocator@PAVKeyBinding@@@std@@@3@@Z");
    todo("implement");
}

KeyBinding *KeyBindingList::findBind(KeyEvent, unsigned __int32, __int32 *) const // 0x600AAE
{
    mangled_assert("?findBind@KeyBindingList@@QBEPAVKeyBinding@@W4KeyEvent@@IPAH@Z");
    todo("implement");
}

_inline bool IsKeyBindingUnique::operator()(KeyBinding *, __int32 const) const // 0x5FF054
{
    mangled_assert("??RIsKeyBindingUnique@@QBE_NPAVKeyBinding@@H@Z");
    todo("implement");
}

_inline KeyBinding::KeyBinding(KeyBinding const &) // 0x5FEDD5
{
    mangled_assert("??0KeyBinding@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void KeyBindingList::bind(KeyBindingList const &) // 0x600700
{
    mangled_assert("?bind@KeyBindingList@@QAEXABV1@@Z");
    todo("implement");
}

void KeyBindingList::bind(wchar_t const *, char const *, KeyEvent, unsigned __int32, __int32 *, __int32) // 0x6008A1
{
    mangled_assert("?bind@KeyBindingList@@QAEXPB_WPBDW4KeyEvent@@IPAHH@Z");
    todo("implement");
}

void KeyBindingList::bind(__int32, KeyEvent, __int32, wchar_t const *, unsigned __int32, __int32 *, __int32) // 0x60078F
{
    mangled_assert("?bind@KeyBindingList@@QAEXHW4KeyEvent@@HPB_WIPAHH@Z");
    todo("implement");
}

bool KeyBindingList::unbindByEventData(__int32, __int32) // 0x6013AF
{
    mangled_assert("?unbindByEventData@KeyBindingList@@QAE_NHH@Z");
    todo("implement");
}

void KeyBindingList::executeBindings(region *) const // 0x600A61
{
    mangled_assert("?executeBindings@KeyBindingList@@QBEXPAVregion@@@Z");
    todo("implement");
}

KeyBinding *KeyBindingList::findBindId(__int32) const // 0x600B37
{
    mangled_assert("?findBindId@KeyBindingList@@QBEPAVKeyBinding@@H@Z");
    todo("implement");
}

void KeyBindingList::makeCopy(KeyBindingList &) const // 0x601133
{
    mangled_assert("?makeCopy@KeyBindingList@@QBEXAAV1@@Z");
    todo("implement");
}

unsigned __int32 KeyBindingList::reassignKeyCombo(std::smallvector<int,5,std::allocator<int> >, std::smallvector<int,5,std::allocator<int> > const &) // 0x601243
{
    mangled_assert("?reassignKeyCombo@KeyBindingList@@QAEIV?$smallvector@H$04V?$allocator@H@std@@@std@@ABV23@@Z");
    todo("implement");
}

KeyBinding::KeyBinding(KeyEvent, unsigned __int32, __int32 const *, __int32) // 0x5FEE71
{
    mangled_assert("??0KeyBinding@@QAE@W4KeyEvent@@IPBHH@Z");
    todo("implement");
}

void KeyBinding::ResetKeyCombo(std::smallvector<int,5,std::allocator<int> > const &) // 0x60037E
{
    mangled_assert("?ResetKeyCombo@KeyBinding@@QAEXABV?$smallvector@H$04V?$allocator@H@std@@@std@@@Z");
    todo("implement");
}

void KeyBinding::Reset(KeyBinding const &) // 0x600312
{
    mangled_assert("?Reset@KeyBinding@@QAEXABV1@@Z");
    todo("implement");
}

void KeyBinding::Save(LuaConfig &) const // 0x6003A2
{
    mangled_assert("?Save@KeyBinding@@QBEXAAVLuaConfig@@@Z");
    todo("implement");
}

void MakeKeyComboString(std::smallvector<int,5,std::allocator<int> > const &keyCombo, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &outString) // 0x600263
{
    mangled_assert("?MakeKeyComboString@@YGXABV?$smallvector@H$04V?$allocator@H@std@@@std@@AAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z");
    todo("implement");
}

bool KeyCombosEqual(std::smallvector<int,5,std::allocator<int> > const &l, std::smallvector<int,5,std::allocator<int> > const &r) // 0x600213
{
    mangled_assert("?KeyCombosEqual@@YG_NABV?$smallvector@H$04V?$allocator@H@std@@@std@@0@Z");
    todo("implement");
}

/* ---------- private code */
#endif

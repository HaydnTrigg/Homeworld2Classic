#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Render\objects\material.h>
#include <list>
#include <region.h>
#include <prim.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <platform\cmdline.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <UserInterface\NewUIScreenManager.h>
#include <hash_map>
#include <xhash>
#include <boost\cstdint.hpp>
#include <Interface.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\draw.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\types.h>
#include <Mathlib\fastmath.h>
#include <platform\keydefines.h>
#include <Mathlib\matvec.h>
#include <KeyBindings.h>
#include <config.h>
#include <Render\gl\lotypes.h>
#include <debug\db.h>
#include <deque>
#include <Render\gl\r_types.h>
#include <util\colour.h>
#include <profile\profile.h>
#include <iostream>
#include <task.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

typedef void (*RegProcessInputFunc)(__int32, __int32);
typedef std::vector<region *,std::allocator<region *> > FocusedInputRegionList;

/* ---------- prototypes */

extern void regNULLRenderFunction(region *region);
extern unsigned __int32 regNULLProcessFunction(region *region, __int32 ID, __int32 regEvent, __int32 userEvent, __int32 data);
extern void regSetInputCB(void (*func)(__int32, __int32));
extern bool regFlagIsSet(region *reg, unsigned __int32 flag);
extern bool regStatusIsSet(region *reg, unsigned __int32 status);
extern bool regMouseInRegion(region *reg);
extern bool regFunctionCall(region *reg, unsigned __int32 regEvent, __int32 userEvent, unsigned __int32 data, unsigned __int32 *maskpointer);
extern bool regFunctionCallLuaStr(region *reg, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luaStr);
extern void regDirtyChildren(region *reg);
extern void regRecursiveSetDirty(region *reg);
extern void regRecursiveSetReallyDirty(region *reg);
extern bool regPointOnRegion(float x, float y, region *region);
extern bool regRegionInside(region *needle, region *haystack);
extern void regDirtySiblingsInside(region *region);
extern bool regDoRegionsOverlap(region *a, region *b);
extern void regDirtyEverythingUpwardsSelectively(region *region, region *overlap);
extern void regDirtyEverythingUpwards(region *region);
extern void regDirtyScreensAboveRegion(region *region);
extern bool IsComboKeyPressed(KeySeq const &comboKeySeq, RegionKeyEvent const &event);
extern void regProcessKeyEvent(region *reg, RegionKeyEvent &event);
extern unsigned __int32 regRegionProcess(region *reg, unsigned __int32 mask);
extern void regKeyHandler(__int32 inKey, KeyEvent triggerEvent, __int32 regHandle);
extern void regGenericKeyHandler(__int32 inKey, KeyEvent triggerEvent, __int32 regHandle);
extern __int32 regAddAccSeqArray(region *reg, KeyEvent onEvent, __int32 procID, __int32 procData, __int32 nKeys, __int32 const *accKeys, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luaStr);
extern void regRemoveAllAccelaratorSequences(region *region);
extern bool regStartup();
extern bool regShutdown();
extern region *regChildAlloc(region *parent, __int32 ID, float x, float y, float width, float height, __int32 extra, unsigned __int32 flags, bool isExclusive);
extern region *regSiblingAlloc(region *sibling, __int32 ID, float x, float y, float width, float height, __int32 extra, unsigned __int32 flags);
extern region *regOrphanAlloc(__int32 ID, float x, float y, float width, float height, __int32 extra, unsigned __int32 flags);
extern region *regSiblingMoveToFront(region *region);
extern void regRegionScroll(region *reg, __int32 scrollX, __int32 scrollY);
extern void regLinkRemove(region *region);
extern void regMoveLinkChild(region *regionToMove, region *newParent);
extern void regRecursiveDisable(region *reg);
extern void regRegionDelete(region *region);
extern void regRegionExcise(region *region);
extern void regChildInsert(region *regionToInsert, region *parent);
extern void regChildInsertExclusive(region *regionToInsert, region *parent);
extern void regSiblingInsert(region *regionToInsert, region *sibling);
extern void (*regDrawFunctionSet(region *region, void (*function)(region *)))(region *);
extern unsigned __int32 (*regFunctionSet(region *region, unsigned __int32 (*function)(region *, __int32, __int32, __int32, __int32)))(region *, __int32, __int32, __int32, __int32);
extern void (*regLuaFunctionSet(region *region, void (*function)(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &)))(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
extern unsigned __int32 regFilterSet(region *region, unsigned __int32 filter);
extern region *regSiblingFindByFunction(region *reg, unsigned __int32 (*find)(region *, __int32, __int32, __int32, __int32));
extern void (*regSetPredrawFunction(void (*function)()))();
extern void (*regSetPostdrawFunction(void (*function)()))();
extern void regSetVisibility(region *reg, bool isVisible);
extern void regSetAllVisibility(region *reg, bool isVisible);
extern void regSetFamilyVisibility(region *reg, bool isVisible);
extern void regMouseFocusRegion(region *reg);
extern void regMouseFocusRegionReset();
extern void regMouseFocusRegionAll(region *reg);
extern void regMouseFocusRegionFamily(region *reg);
extern void regKeyFocusRegionSet(region *reg);
extern region *regKeyFocusRegionGet();
extern void regKeyFocusRegionClear();
extern void regSetDisabled(region *reg, bool isDisabled);
extern void regSetFamilyDisabled(region *reg, bool isDisabled);
extern void regSetAllDisabled(region *reg, bool isDisabled);
extern void regClaimMousePress(region *reg);
extern void regUpdateNowReferencesTo(region *reg);
extern void Region::MouseEvent(unsigned __int32 key);

/* ---------- globals */

extern RegDrawTask *regDrawTask; // 0x843A24
extern RegUpdateTask *regUpdateTask; // 0x843A28
extern std::vector<region *,std::allocator<region *> > regMouseFocusRegionList; // 0x843A3C
extern region *regClickedLeft; // 0x843A00
extern region *regClickedRight; // 0x843A04
extern region *regClickedCentre; // 0x843A08
extern region *regClickedDoubleLeft; // 0x843A0C
extern region *regClickedDoubleRight; // 0x843A10
extern region *regClickedDoubleCentre; // 0x843A14
extern region *regFocussedRegion; // 0x843A18
extern region regRootRegion; // 0x843A48
extern unsigned __int32 regRegionFrameDrawCount; // 0x843A20
extern __int32 regModuleInit; // 0x843A2C
extern bool regDebugRegionDraw; // 0x843A30
extern __int32 regNumberRenderEvents; // 0x834354
extern void (*predrawFunction)(); // 0x843A34
extern void (*postdrawFunction)(); // 0x843A38

/* ---------- private variables */

_static
{
    extern void (*s_regProcessInputFunc)(__int32, __int32); // 0x843A1C
}

/* ---------- public code */

_extern _sub_464F24(KeySeq *const, KeySeq const &);
_inline KeySeq::KeySeq(KeySeq const &) // 0x464F24
{
    mangled_assert("??0KeySeq@@QAE@ABU0@@Z");
    compiler_generated();
    todo("implement");
    _sub_464F24(this, arg);
}

_extern _sub_464F59(KeySeq *const);
_inline KeySeq::KeySeq() // 0x464F59
{
    mangled_assert("??0KeySeq@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_464F59(this);
}

_extern void _sub_4661AE(region *);
void regNULLRenderFunction(region *region) // 0x4661AE
{
    mangled_assert("?regNULLRenderFunction@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_4661AE(region);
}

_extern unsigned __int32 _sub_4661A9(region *, __int32, __int32, __int32, __int32);
unsigned __int32 regNULLProcessFunction(region *region, __int32 ID, __int32 regEvent, __int32 userEvent, __int32 data) // 0x4661A9
{
    mangled_assert("?regNULLProcessFunction@@YGIPAVregion@@HHHH@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4661A9(region, ID, regEvent, userEvent, data);
    return __result;
}

_extern void _sub_466E93(void (*)(__int32, __int32));
void regSetInputCB(void (*func)(__int32, __int32)) // 0x466E93
{
    mangled_assert("?regSetInputCB@@YGXP6GXHH@Z@Z");
    todo("implement");
    _sub_466E93(func);
}

_extern bool _sub_465E56(region *, unsigned __int32);
bool regFlagIsSet(region *reg, unsigned __int32 flag) // 0x465E56
{
    mangled_assert("?regFlagIsSet@@YG_NPAVregion@@I@Z");
    todo("implement");
    bool __result = _sub_465E56(reg, flag);
    return __result;
}

_extern bool _sub_4671BB(region *, unsigned __int32);
bool regStatusIsSet(region *reg, unsigned __int32 status) // 0x4671BB
{
    mangled_assert("?regStatusIsSet@@YG_NPAVregion@@I@Z");
    todo("implement");
    bool __result = _sub_4671BB(reg, status);
    return __result;
}

_extern bool _sub_4660C5(region *);
bool regMouseInRegion(region *reg) // 0x4660C5
{
    mangled_assert("?regMouseInRegion@@YG_NPAVregion@@@Z");
    todo("implement");
    bool __result = _sub_4660C5(reg);
    return __result;
}

_extern bool _sub_465E6A(region *, unsigned __int32, __int32, unsigned __int32, unsigned __int32 *);
bool regFunctionCall(region *reg, unsigned __int32 regEvent, __int32 userEvent, unsigned __int32 data, unsigned __int32 *maskpointer) // 0x465E6A
{
    mangled_assert("?regFunctionCall@@YG_NPAVregion@@IHIPAI@Z");
    todo("implement");
    bool __result = _sub_465E6A(reg, regEvent, userEvent, data, maskpointer);
    return __result;
}

_extern bool _sub_465EBC(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool regFunctionCallLuaStr(region *reg, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luaStr) // 0x465EBC
{
    mangled_assert("?regFunctionCallLuaStr@@YG_NPAVregion@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_465EBC(reg, luaStr);
    return __result;
}

_extern void _sub_465D2F(region *);
void regDirtyChildren(region *reg) // 0x465D2F
{
    mangled_assert("?regDirtyChildren@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_465D2F(reg);
}

_extern void _sub_466456(region *);
void regRecursiveSetDirty(region *reg) // 0x466456
{
    mangled_assert("?regRecursiveSetDirty@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_466456(reg);
}

_extern void _sub_46647F(region *);
void regRecursiveSetReallyDirty(region *reg) // 0x46647F
{
    mangled_assert("?regRecursiveSetReallyDirty@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_46647F(reg);
}

_extern bool _sub_46623D(float, float, region *);
bool regPointOnRegion(float x, float y, region *region) // 0x46623D
{
    mangled_assert("?regPointOnRegion@@YG_NMMPAVregion@@@Z");
    todo("implement");
    bool __result = _sub_46623D(x, y, region);
    return __result;
}

_extern bool _sub_466565(region *, region *);
bool regRegionInside(region *needle, region *haystack) // 0x466565
{
    mangled_assert("?regRegionInside@@YG_NPAVregion@@0@Z");
    todo("implement");
    bool __result = _sub_466565(needle, haystack);
    return __result;
}

_extern void _sub_465DBB(region *);
void regDirtySiblingsInside(region *region) // 0x465DBB
{
    mangled_assert("?regDirtySiblingsInside@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_465DBB(region);
}

_extern bool _sub_465DE9(region *, region *);
bool regDoRegionsOverlap(region *a, region *b) // 0x465DE9
{
    mangled_assert("?regDoRegionsOverlap@@YG_NPAVregion@@0@Z");
    todo("implement");
    bool __result = _sub_465DE9(a, b);
    return __result;
}

_extern void _sub_465D81(region *, region *);
void regDirtyEverythingUpwardsSelectively(region *region, region *overlap) // 0x465D81
{
    mangled_assert("?regDirtyEverythingUpwardsSelectively@@YGXPAVregion@@0@Z");
    todo("implement");
    _sub_465D81(region, overlap);
}

_extern void _sub_465D5C(region *);
void regDirtyEverythingUpwards(region *region) // 0x465D5C
{
    mangled_assert("?regDirtyEverythingUpwards@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_465D5C(region);
}

_extern void _sub_465DB8(region *);
void regDirtyScreensAboveRegion(region *region) // 0x465DB8
{
    mangled_assert("?regDirtyScreensAboveRegion@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_465DB8(region);
}

_extern bool _sub_465146(KeySeq const &, RegionKeyEvent const &);
bool IsComboKeyPressed(KeySeq const &comboKeySeq, RegionKeyEvent const &event) // 0x465146
{
    mangled_assert("?IsComboKeyPressed@@YG_NABUKeySeq@@ABURegionKeyEvent@@@Z");
    todo("implement");
    bool __result = _sub_465146(comboKeySeq, event);
    return __result;
}

_extern void _sub_46627F(region *, RegionKeyEvent &);
void regProcessKeyEvent(region *reg, RegionKeyEvent &event) // 0x46627F
{
    mangled_assert("?regProcessKeyEvent@@YGXPAVregion@@AAURegionKeyEvent@@@Z");
    todo("implement");
    _sub_46627F(reg, event);
}

_extern unsigned __int32 _sub_466612(region *, unsigned __int32);
unsigned __int32 regRegionProcess(region *reg, unsigned __int32 mask) // 0x466612
{
    mangled_assert("?regRegionProcess@@YGIPAVregion@@I@Z");
    todo("implement");
    unsigned __int32 __result = _sub_466612(reg, mask);
    return __result;
}

_extern void _sub_465F4E(__int32, KeyEvent, __int32);
void regKeyHandler(__int32 inKey, KeyEvent triggerEvent, __int32 regHandle) // 0x465F4E
{
    mangled_assert("?regKeyHandler@@YGXHW4KeyEvent@@H@Z");
    todo("implement");
    _sub_465F4E(inKey, triggerEvent, regHandle);
}

_extern void _sub_465EEE(__int32, KeyEvent, __int32);
void regGenericKeyHandler(__int32 inKey, KeyEvent triggerEvent, __int32 regHandle) // 0x465EEE
{
    mangled_assert("?regGenericKeyHandler@@YGXHW4KeyEvent@@H@Z");
    todo("implement");
    _sub_465EEE(inKey, triggerEvent, regHandle);
}

_extern __int32 _sub_465A79(region *, KeyEvent, __int32, __int32, __int32, __int32 const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
__int32 regAddAccSeqArray(region *reg, KeyEvent onEvent, __int32 procID, __int32 procData, __int32 nKeys, __int32 const *accKeys, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &luaStr) // 0x465A79
{
    mangled_assert("?regAddAccSeqArray@@YGHPAVregion@@W4KeyEvent@@HHHPBHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    __int32 __result = _sub_465A79(reg, onEvent, procID, procData, nKeys, accKeys, luaStr);
    return __result;
}

_extern void _sub_466CCE(region *);
void regRemoveAllAccelaratorSequences(region *region) // 0x466CCE
{
    mangled_assert("?regRemoveAllAccelaratorSequences@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_466CCE(region);
}

_extern bool _sub_46708B();
bool regStartup() // 0x46708B
{
    mangled_assert("?regStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_46708B();
    return __result;
}

_extern bool _sub_466EE1();
bool regShutdown() // 0x466EE1
{
    mangled_assert("?regShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_466EE1();
    return __result;
}

_extern region *_sub_465B46(region *, __int32, float, float, float, float, __int32, unsigned __int32, bool);
region *regChildAlloc(region *parent, __int32 ID, float x, float y, float width, float height, __int32 extra, unsigned __int32 flags, bool isExclusive) // 0x465B46
{
    mangled_assert("?regChildAlloc@@YGPAVregion@@PAV1@HMMMMHI_N@Z");
    todo("implement");
    region * __result = _sub_465B46(parent, ID, x, y, width, height, extra, flags, isExclusive);
    return __result;
}

_extern region *_sub_466F37(region *, __int32, float, float, float, float, __int32, unsigned __int32);
region *regSiblingAlloc(region *sibling, __int32 ID, float x, float y, float width, float height, __int32 extra, unsigned __int32 flags) // 0x466F37
{
    mangled_assert("?regSiblingAlloc@@YGPAVregion@@PAV1@HMMMMHI@Z");
    todo("implement");
    region * __result = _sub_466F37(sibling, ID, x, y, width, height, extra, flags);
    return __result;
}

_extern region *_sub_4661B1(__int32, float, float, float, float, __int32, unsigned __int32);
region *regOrphanAlloc(__int32 ID, float x, float y, float width, float height, __int32 extra, unsigned __int32 flags) // 0x4661B1
{
    mangled_assert("?regOrphanAlloc@@YGPAVregion@@HMMMMHI@Z");
    todo("implement");
    region * __result = _sub_4661B1(ID, x, y, width, height, extra, flags);
    return __result;
}

_extern region *_sub_467018(region *);
region *regSiblingMoveToFront(region *region) // 0x467018
{
    mangled_assert("?regSiblingMoveToFront@@YGPAVregion@@PAV1@@Z");
    todo("implement");
    region * __result = _sub_467018(region);
    return __result;
}

_extern void _sub_466CA5(region *, __int32, __int32);
void regRegionScroll(region *reg, __int32 scrollX, __int32 scrollY) // 0x466CA5
{
    mangled_assert("?regRegionScroll@@YGXPAVregion@@HH@Z");
    todo("implement");
    _sub_466CA5(reg, scrollX, scrollY);
}

_extern void _sub_465F7B(region *);
void regLinkRemove(region *region) // 0x465F7B
{
    mangled_assert("?regLinkRemove@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_465F7B(region);
}

_extern void _sub_466127(region *, region *);
void regMoveLinkChild(region *regionToMove, region *newParent) // 0x466127
{
    mangled_assert("?regMoveLinkChild@@YGXPAVregion@@0@Z");
    todo("implement");
    _sub_466127(regionToMove, newParent);
}

_extern void _sub_466434(region *);
void regRecursiveDisable(region *reg) // 0x466434
{
    mangled_assert("?regRecursiveDisable@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_466434(reg);
}

_extern void _sub_4664A8(region *);
void regRegionDelete(region *region) // 0x4664A8
{
    mangled_assert("?regRegionDelete@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_4664A8(region);
}

_extern void _sub_46650F(region *);
void regRegionExcise(region *region) // 0x46650F
{
    mangled_assert("?regRegionExcise@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_46650F(region);
}

_extern void _sub_465BEA(region *, region *);
void regChildInsert(region *regionToInsert, region *parent) // 0x465BEA
{
    mangled_assert("?regChildInsert@@YGXPAVregion@@0@Z");
    todo("implement");
    _sub_465BEA(regionToInsert, parent);
}

_extern void _sub_465C35(region *, region *);
void regChildInsertExclusive(region *regionToInsert, region *parent) // 0x465C35
{
    mangled_assert("?regChildInsertExclusive@@YGXPAVregion@@0@Z");
    todo("implement");
    _sub_465C35(regionToInsert, parent);
}

_extern void _sub_466FE3(region *, region *);
void regSiblingInsert(region *regionToInsert, region *sibling) // 0x466FE3
{
    mangled_assert("?regSiblingInsert@@YGXPAVregion@@0@Z");
    todo("implement");
    _sub_466FE3(regionToInsert, sibling);
}

_extern void (*_sub_465E28(region *, void (*)(region *)))(region *);
void (*regDrawFunctionSet(region *region, void (*function)(region *)))(region *) // 0x465E28
{
    mangled_assert("?regDrawFunctionSet@@YGP6GXPAVregion@@@Z0P6GX0@Z@Z");
    todo("implement");
    void (*)(region *) __result = _sub_465E28(region, function);
    return __result;
}

_extern unsigned __int32 (*_sub_465EDD(region *, unsigned __int32 (*)(region *, __int32, __int32, __int32, __int32)))(region *, __int32, __int32, __int32, __int32);
unsigned __int32 (*regFunctionSet(region *region, unsigned __int32 (*function)(region *, __int32, __int32, __int32, __int32)))(region *, __int32, __int32, __int32, __int32) // 0x465EDD
{
    mangled_assert("?regFunctionSet@@YGP6GIPAVregion@@HHHH@Z0P6GI0HHHH@Z@Z");
    todo("implement");
    unsigned __int32 (*)(region *, __int32, __int32, __int32, __int32) __result = _sub_465EDD(region, function);
    return __result;
}

_extern void (*_sub_466044(region *, void (*)(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &)))(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void (*regLuaFunctionSet(region *region, void (*function)(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &)))(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x466044
{
    mangled_assert("?regLuaFunctionSet@@YGP6GXPAVregion@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z0P6GX01@Z@Z");
    todo("implement");
    void (*)(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) __result = _sub_466044(region, function);
    return __result;
}

_extern unsigned __int32 _sub_465E45(region *, unsigned __int32);
unsigned __int32 regFilterSet(region *region, unsigned __int32 filter) // 0x465E45
{
    mangled_assert("?regFilterSet@@YGIPAVregion@@I@Z");
    todo("implement");
    unsigned __int32 __result = _sub_465E45(region, filter);
    return __result;
}

_extern region *_sub_466FC0(region *, unsigned __int32 (*)(region *, __int32, __int32, __int32, __int32));
region *regSiblingFindByFunction(region *reg, unsigned __int32 (*find)(region *, __int32, __int32, __int32, __int32)) // 0x466FC0
{
    mangled_assert("?regSiblingFindByFunction@@YGPAVregion@@PAV1@P6GI0HHHH@Z@Z");
    todo("implement");
    region * __result = _sub_466FC0(reg, find);
    return __result;
}

_extern void (*_sub_466EB1(void (*)()))();
void (*regSetPredrawFunction(void (*function)()))() // 0x466EB1
{
    mangled_assert("?regSetPredrawFunction@@YGP6GXXZP6GXXZ@Z");
    todo("implement");
    void (*)() __result = _sub_466EB1(function);
    return __result;
}

_extern void (*_sub_466E9F(void (*)()))();
void (*regSetPostdrawFunction(void (*function)()))() // 0x466E9F
{
    mangled_assert("?regSetPostdrawFunction@@YGP6GXXZP6GXXZ@Z");
    todo("implement");
    void (*)() __result = _sub_466E9F(function);
    return __result;
}

_extern void _sub_466EC3(region *, bool);
void regSetVisibility(region *reg, bool isVisible) // 0x466EC3
{
    mangled_assert("?regSetVisibility@@YGXPAVregion@@_N@Z");
    todo("implement");
    _sub_466EC3(reg, isVisible);
}

_extern void _sub_466D77(region *, bool);
void regSetAllVisibility(region *reg, bool isVisible) // 0x466D77
{
    mangled_assert("?regSetAllVisibility@@YGXPAVregion@@_N@Z");
    todo("implement");
    _sub_466D77(reg, isVisible);
}

_extern void _sub_466E5C(region *, bool);
void regSetFamilyVisibility(region *reg, bool isVisible) // 0x466E5C
{
    mangled_assert("?regSetFamilyVisibility@@YGXPAVregion@@_N@Z");
    todo("implement");
    _sub_466E5C(reg, isVisible);
}

_extern void _sub_466055(region *);
void regMouseFocusRegion(region *reg) // 0x466055
{
    mangled_assert("?regMouseFocusRegion@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_466055(reg);
}

_extern void _sub_4660AF();
void regMouseFocusRegionReset() // 0x4660AF
{
    mangled_assert("?regMouseFocusRegionReset@@YGXXZ");
    todo("implement");
    _sub_4660AF();
}

_extern void _sub_466067(region *);
void regMouseFocusRegionAll(region *reg) // 0x466067
{
    mangled_assert("?regMouseFocusRegionAll@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_466067(reg);
}

_extern void _sub_466084(region *);
void regMouseFocusRegionFamily(region *reg) // 0x466084
{
    mangled_assert("?regMouseFocusRegionFamily@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_466084(reg);
}

_extern void _sub_465F27(region *);
void regKeyFocusRegionSet(region *reg) // 0x465F27
{
    mangled_assert("?regKeyFocusRegionSet@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_465F27(reg);
}

_extern region *_sub_465F21();
region *regKeyFocusRegionGet() // 0x465F21
{
    mangled_assert("?regKeyFocusRegionGet@@YGPAVregion@@XZ");
    todo("implement");
    region * __result = _sub_465F21();
    return __result;
}

_extern void _sub_465F19();
void regKeyFocusRegionClear() // 0x465F19
{
    mangled_assert("?regKeyFocusRegionClear@@YGXXZ");
    todo("implement");
    _sub_465F19();
}

_extern void _sub_466D9C(region *, bool);
void regSetDisabled(region *reg, bool isDisabled) // 0x466D9C
{
    mangled_assert("?regSetDisabled@@YGXPAVregion@@_N@Z");
    todo("implement");
    _sub_466D9C(reg, isDisabled);
}

_extern void _sub_466E25(region *, bool);
void regSetFamilyDisabled(region *reg, bool isDisabled) // 0x466E25
{
    mangled_assert("?regSetFamilyDisabled@@YGXPAVregion@@_N@Z");
    todo("implement");
    _sub_466E25(reg, isDisabled);
}

_extern void _sub_466D52(region *, bool);
void regSetAllDisabled(region *reg, bool isDisabled) // 0x466D52
{
    mangled_assert("?regSetAllDisabled@@YGXPAVregion@@_N@Z");
    todo("implement");
    _sub_466D52(reg, isDisabled);
}

_extern void _sub_465C7A(region *);
void regClaimMousePress(region *reg) // 0x465C7A
{
    mangled_assert("?regClaimMousePress@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_465C7A(reg);
}

_extern __int32 _sub_467202(RegUpdateTask *const, float);
__int32 RegUpdateTask::taskFunction(float) // 0x467202
{
    mangled_assert("?taskFunction@RegUpdateTask@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_467202(this, arg);
    return __result;
}

_extern void _sub_465778(RegUpdateTask *const);
void RegUpdateTask::eventFunction() // 0x465778
{
    mangled_assert("?eventFunction@RegUpdateTask@@QAEXXZ");
    todo("implement");
    _sub_465778(this);
}

_extern _sub_464F6B(RegDrawTask *const, __int32);
RegDrawTask::RegDrawTask(__int32) // 0x464F6B
{
    mangled_assert("??0RegDrawTask@@QAE@H@Z");
    todo("implement");
    _sub_464F6B(this, arg);
}

_extern void _sub_465017(KeySeq *const);
_inline KeySeq::~KeySeq() // 0x465017
{
    mangled_assert("??1KeySeq@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_465017(this);
}

_extern void _sub_46501F(RegDrawTask *const);
RegDrawTask::~RegDrawTask() // 0x46501F
{
    mangled_assert("??1RegDrawTask@@UAE@XZ");
    todo("implement");
    _sub_46501F(this);
}

_extern __int32 _sub_4671F8(RegDrawTask *const, float);
__int32 RegDrawTask::taskFunction(float) // 0x4671F8
{
    mangled_assert("?taskFunction@RegDrawTask@@UAEHM@Z");
    todo("implement");
    __int32 __result = _sub_4671F8(this, arg);
    return __result;
}

_extern void _sub_465794(RegDrawTask *const, void (*)(region *), region *);
void RegDrawTask::functionAdd(void (*)(region *), region *) // 0x465794
{
    mangled_assert("?functionAdd@RegDrawTask@@QAEXP6GXPAVregion@@@Z0@Z");
    todo("implement");
    _sub_465794(this, arg, arg);
}

_extern void _sub_465833(RegDrawTask *const, region *);
void RegDrawTask::functionAddPossibly(region *) // 0x465833
{
    mangled_assert("?functionAddPossibly@RegDrawTask@@QAEXPAVregion@@@Z");
    todo("implement");
    _sub_465833(this, arg);
}

_extern void _sub_465858(RegDrawTask *const);
void RegDrawTask::functionsDraw() // 0x465858
{
    mangled_assert("?functionsDraw@RegDrawTask@@QAEXXZ");
    todo("implement");
    _sub_465858(this);
}

_extern void _sub_465733(RegDrawTask *const, region *);
void RegDrawTask::deleteReferencesTo(region *) // 0x465733
{
    mangled_assert("?deleteReferencesTo@RegDrawTask@@QAEXPAVregion@@@Z");
    todo("implement");
    _sub_465733(this, arg);
}

_extern void _sub_46723A(RegDrawTask *const, region *);
void RegDrawTask::updateReferencesTo(region *) // 0x46723A
{
    mangled_assert("?updateReferencesTo@RegDrawTask@@QAEXPAVregion@@@Z");
    todo("implement");
    _sub_46723A(this, arg);
}

_extern void _sub_4671CF(region *);
void regUpdateNowReferencesTo(region *reg) // 0x4671CF
{
    mangled_assert("?regUpdateNowReferencesTo@@YGXPAVregion@@@Z");
    todo("implement");
    _sub_4671CF(reg);
}

_extern void _sub_465193(unsigned __int32);
void Region::MouseEvent(unsigned __int32 key) // 0x465193
{
    mangled_assert("?MouseEvent@Region@@YGXI@Z");
    todo("implement");
    _sub_465193(key);
}

/* ---------- private code */
#endif

#if 0
/* ---------- headers */

#include "decomp.h"
#include <GameEventSys.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Subsystems\HardPointManager.h>
#include <xmemory0>
#include <Collision\BVH\octree.h>
#include <Mathlib\matrix4.h>
#include <Subsystems\HardPoint.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Scar\LuaRuleSystem.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPointStatic.h>
#include <memory\memorylib.h>
#include <Render\objects\compiledtext.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\BVH\proxy.h>
#include <crtdefs.h>
#include <Collision\intersect.h>
#include <Mathlib\mathutil.h>
#include <Collision\primitivesfwd.h>
#include <localizer\localizer.h>
#include <GameObj.h>
#include <UserInterface\ListBoxItem.h>
#include <config.h>
#include <UserInterface\TextButton.h>
#include <Mathlib\matrix3.h>
#include <ParadeCommand.h>
#include <OrderFeedback.h>
#include <util\statmonitor.h>
#include <commandtype.h>
#include <SquadronList.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <xfunctional>
#include <Interpolation.h>
#include <platform\platformexports.h>
#include <region.h>
#include <new>
#include <exception>
#include <fileio\logfile.h>
#include <xstddef>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\NewScrollBar.h>
#include <type_traits>
#include <Collision\Primitives\aabb.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewButton.h>
#include <Collision\Primitives\obb.h>
#include <UserInterface\NewText.h>
#include <abilities.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <xutility>
#include <Render\objects\textureregistry.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <SensorsManager.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <ShipQuery.h>
#include <compiler\compilerconfig.h>
#include <UserInterface\NewTextInput.h>
#include <MainUI.h>
#include <UserInterface\NewListBox.h>
#include <Selector.h>
#include <MetaSelTarg.h>
#include <list>
#include <platform\windowinterface.h>
#include <assist\fixedstring.h>
#include <SelTarg.h>
#include <Mathlib\vector3.h>
#include <luaconfig\luabinding.h>
#include <prim.h>
#include <Mathlib\vector4.h>
#include <UserInterface\NewUIScreenManager.h>
#include <map>
#include <CPUPlayer\HW2CpuPlayer.h>
#include <UserInterface\uitypes.h>
#include <xtree>
#include <CPUPlayer\cpuplayer.h>
#include <platform\inputinterface.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <platform\keydefines.h>
#include <DynamicPoint.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <seInterface2\SampleID.h>
#include <seInterface2\PatchID.h>
#include <cassert>
#include <seInterface2\SampleBase.h>
#include <seInterface2\PatchBase.h>
#include <fixedpoint.h>
#include <assert.h>
#include <Camera\OrbitParameters.h>
#include <seInterface2\SoundParams.h>
#include <util\fixed.h>
#include <boost\scoped_array.hpp>
#include <platform\osdef.h>
#include <Mathlib\quat.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <assist\typemagic.h>
#include <Render\objects\texture.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <UserInterface\NewUIScreen.h>
#include <Render\objects\objects.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <UserInterface\NewFrame.h>
#include <Render\objects\core.h>
#include <Render\objects\cliprect.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\types.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luaconfig.h>
#include <CPUPlayer\CpuCommon.h>
#include <lua.h>
#include <CPUPlayer\CpuTarget.h>
#include <Render\gl\lotypes.h>
#include <Squadron.h>
#include <command.h>
#include <sobid.h>
#include <debug\db.h>
#include <UserInterface\StyleSheet.h>
#include <cstdarg>
#include <UserInterface\pch.h>
#include <stdarg.h>
#include <Parade.h>
#include <hash_map>
#include <seInterface2\sedefinesshared.h>
#include <deque>
#include <xhash>
#include <Render\gl\r_types.h>
#include <weaponinfo.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <Render\objects\textureproxy.h>
#include <savegamedef.h>
#include <playerresourcetype.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <Scar\Scar.h>
#include <Scar\ScarEventSys.h>
#include <boost\detail\lwm_win32.hpp>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SoundManager\SoundEntityHandle.h>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <LuaTools\LCWatcher.h>
#include <sob.h>
#include <wchar.h>
#include <boost\utility.hpp>
#include <sobstatic.h>
#include <SobRigidBodyStatic.h>
#include <Collision\Primitives\sphere.h>
#include <MeshAnimation.h>
#include <queue>
#include <ShieldTypes.h>
#include <KeyBindings.h>
#include <algorithm>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaLCWatcherLib :
    public LuaLibrary
{
public:
    LuaLCWatcherLib(`anonymous-namespace'::LuaLCWatcherLib const &); /* compiler_generated() */
    LuaLCWatcherLib();
    virtual ~LuaLCWatcherLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaLCWatcherLib &operator=(`anonymous-namespace'::LuaLCWatcherLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaLCWatcherLib) == 16, "Invalid `anonymous-namespace'::LuaLCWatcherLib size");

typedef unsigned __int32 size_type;
typedef char *pointer;
typedef char _Elem;
typedef std::_Wrap_alloc<std::allocator<char> > other;
typedef std::_Wrap_alloc<std::allocator<char> > _Alty;
typedef char value_type;
typedef std::allocator<char> _Alloc;
typedef char &reference;
typedef char const &const_reference;
typedef char const *const_pointer;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > _Myt;
typedef char *type;
typedef std::list<LCWatcher::LCWatcherElement,std::allocator<LCWatcher::LCWatcherElement> > LCWEContainer;
typedef __int32 (*TagMethod)(lua_State *);
typedef __int32 (*LuaFunc)(lua_State *);
typedef void (*CBRegister)(char const *);
typedef void (*CBClear)(char const *);
typedef void (*CBAlert)(char const *);
typedef LuaConfig::Data **unspecified_bool_type() const;
typedef std::vector<ScarEvent *,std::allocator<ScarEvent *> > EventList;
typedef __int32 difference_type;
typedef std::_Tree_node<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,void *> *_Nodeptr;
typedef std::_Tree_node<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,void *> *&_Nodepref;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,void *> > > _Alnod_type;
typedef std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > allocator_type;
typedef std::less<int> key_compare;
typedef __int32 key_type;
typedef void *void_pointer;
typedef void const *const_void_pointer;
typedef std::integral_constant<bool,0> propagate_on_container_copy_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_move_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_swap;
typedef std::allocator<std::_Tree_node<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,void *> > _Mybase;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > mapped_type;
typedef std::map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > KeyMap;
typedef boost::shared_ptr<SobIDShared> SobIDSharedPtr;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> > > iterator;
typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> > > const_iterator;
typedef std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> >,std::_Iterator_base0> _Unchecked_const_iterator;
typedef std::list<MultiplierContainer *,std::allocator<MultiplierContainer *> > MultiplierContainerList;
typedef std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> >,std::_Iterator_base0> _Myiter;
typedef std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> >,std::_Iterator_base0> _Unchecked_type;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<MultiplierContainer *> > > MultiplierContainerListIterator;
typedef unsigned __int32 SobFlagsType;
typedef unsigned __int32 SobDetFlagsType;
typedef std::vector<Selection *,std::allocator<Selection *> > ObserverList;
typedef unsigned __int32 Handle;
typedef std::vector<TeamColour *,std::allocator<TeamColour *> > TeamColourList;
typedef void (*FinishedCB)(SobWithMesh *, AnimatorMad *, AnimatorMad::CallbackEvent);
typedef std::vector<unsigned int,std::allocator<unsigned int> > FittingSubsystems;
typedef std::vector<HardPoint *,std::allocator<HardPoint *> > HardPointVector;
typedef std::vector<SubSystem *,std::allocator<SubSystem *> > SubSystemVector;
typedef Fixed<10> FixedPoint;
typedef std::vector<ParadeSlotStatus,std::allocator<ParadeSlotStatus> > ParadeSlotStatusVector;
typedef std::vector<ParadeType,std::allocator<ParadeType> > ParadeTypeVector;
typedef std::list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > _Mylist;
typedef std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > > > > > _Myvec;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > TypeToIndexMap;
typedef std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > reverse_iterator;
typedef std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Squadron *> > > > const_reverse_iterator;
typedef std::vector<Squadron *,std::allocator<Squadron *> > SquadList;
typedef std::vector<SquadronList::Observer *,std::allocator<SquadronList::Observer *> > ObserverSet;
typedef Squadron **_Tptr;
typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
typedef std::_List_node<Formation *,void *> _Node;
typedef long long timerVal;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContI;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StatMonitorChannel *> > > ChannelContCI;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,BitmapFont *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,BitmapFont *> > > BitmapFontList;
typedef std::vector<StatMonitorChannel *,std::allocator<StatMonitorChannel *> > ChannelCont;
typedef void (*KeyCallbackFunc)(__int32, KeyEvent, __int32);
typedef void (*RegDrawFunc)(region *);
typedef unsigned __int32 (*RegProcFunc)(region *, __int32, __int32, __int32, __int32);
typedef void (*RegProcLuaFunc)(region *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
typedef std::vector<KeySeq,std::allocator<KeySeq> > KeySeqVec;
typedef std::vector<RegionKeyEvent,std::allocator<RegionKeyEvent> > KeyEventVec;
typedef region *regionhandle;
typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > KeyBindingConstIterator;
typedef std::smallvector<int,5,std::allocator<int> > KeyCombo;
typedef std::list<KeyBinding *,std::allocator<KeyBinding *> > KeyBindingContainer;
typedef std::list<UI::UIScreenInfo,std::allocator<UI::UIScreenInfo> > UIScreenInfoMap;
typedef std::list<UI::NewUIScreen *,std::allocator<UI::NewUIScreen *> > UIScreenList;
typedef std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<UI::NewUIScreen *> > > _Unchecked_iterator;
typedef void (*UISlot)(UI::InterfaceElement *);
typedef void (*UIFloatSlot)(UI::InterfaceElement *, float);
typedef void (*UIIntSlot)(UI::InterfaceElement *, __int32);
typedef void (*UIStringSlot)(UI::InterfaceElement *, char const *);
typedef void (*UIMouseSlot)(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
typedef void (*UIKeySlot)(UI::InterfaceElement *, unsigned short, __int32);
typedef unsigned __int32 colour32;
typedef unsigned __int32 TextureHandle;
typedef unsigned __int32 osWindowHandle;
typedef unsigned __int32 osInstanceHandle;
typedef unsigned __int32 VertexBufferHandle;
typedef void (*MipMapEditCB)(TextureFormat, __int32, __int32, __int32, void *);
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > ElementMap;
typedef void (*KeyBinderCB)(unsigned __int32, wchar_t const *, wchar_t *, unsigned __int32);
typedef boost::shared_ptr<UI::Graphic> Obj;
typedef bool (*SortFunc)(UI::InterfaceElement const *, UI::InterfaceElement const *);
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Typeface *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Typeface *> > > TypefaceList;
typedef std::vector<FatVertex,std::allocator<FatVertex> > Vertices;
typedef std::map<Typeface *,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > >,std::less<Typeface *>,std::allocator<std::pair<Typeface * const,std::map<int,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > >,std::less<int>,std::allocator<std::pair<int const ,std::map<vector4,std::vector<FatVertex,std::allocator<FatVertex> >,CompiledText::ColourLess,std::allocator<std::pair<vector4 const ,std::vector<FatVertex,std::allocator<FatVertex> > > > > > > > > > > VTypefaceMap;
typedef unsigned __int32 LabelHandle;
typedef long ChanHandle;
typedef long EnvelopeHandle;
typedef long DestinationHandle;
typedef unsigned long FHandle;
typedef TypedBitSet<enum SoundParams::ParamType,30> ParamMask;
typedef TypedBitSet<enum SoundParams::ParamType,30> OverrideMask;
typedef std::list<LCWatcher::LCWatcherFilters,std::allocator<LCWatcher::LCWatcherFilters> > LCWFContainer;
typedef LCWatcher::LCWatcherFilters argument_type;
typedef bool result_type;
typedef char const *second_argument_type;
typedef `anonymous-namespace'::LuaLCWatcherLib ?A0x1e3f9b59::LuaLCWatcherLib;
typedef std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > BindInfoList;
typedef OrderFeedbackInfo **_Mapptr;
typedef std::_Wrap_alloc<std::allocator<OrderFeedbackInfo *> > _Alpty;
typedef unsigned long _Ty;
typedef std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > BindObjList;
typedef void (*type_func)(bool);
typedef std::bidirectional_iterator_tag iterator_category;

/* ---------- prototypes */

extern void LCWatcher_Activate(bool on);
extern void LCWatcher_AddFilter(unsigned __int32 luaConfig, char const *filter);
extern void LCWatcher_AddFilterCPUPlayer(unsigned __int32 index, char const *filter);
extern void LCWatcher_RmvFilter(char const *filter);

/* ---------- globals */

extern char const *LUALIB_LCWATCHER; // 0x83D9F0
extern LCWatcher *LCWatcher::ms_instance; // 0x84B888

/* ---------- private variables */

_static
{
    extern float const oneonnbscreensperline; // 0x83D9F4
}

/* ---------- public code */

LCWatcher::LCWatcher() // 0x65B14F
{
    mangled_assert("??0LCWatcher@@AAE@XZ");
    todo("implement");
}

_inline LCWatcher::LCWatcherElement::LCWatcherElement(LCWatcher::LCWatcherElement const &) // 0x65B2BF
{
    mangled_assert("??0LCWatcherElement@LCWatcher@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline LCWatcher::LCWatcherFilters::LCWatcherFilters(LCWatcher::LCWatcherFilters const &) // 0x65B374
{
    mangled_assert("??0LCWatcherFilters@LCWatcher@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline LCWatcher::LCWatcherFilters::LCWatcherFilters() // 0x65B3BD
{
    mangled_assert("??0LCWatcherFilters@LCWatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,char const *,void,LuaBinding::Functor2Free<unsigned int,char const *,void> >::~ObjInternal2<unsigned int,char const *,void,LuaBinding::Functor2Free<unsigned int,char const *,void> >() // 0x65B424
{
    mangled_assert("??1?$ObjInternal2@IPBDXV?$Functor2Free@IPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<LCWatcher::LCWatcherElement,std::allocator<LCWatcher::LCWatcherElement> >::~_List_buy<LCWatcher::LCWatcherElement,std::allocator<LCWatcher::LCWatcherElement> >() // 0x65B43C
{
    mangled_assert("??1?$_List_buy@ULCWatcherElement@LCWatcher@@V?$allocator@ULCWatcherElement@LCWatcher@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<LCWatcher::LCWatcherFilters,std::allocator<LCWatcher::LCWatcherFilters> >::~_List_buy<LCWatcher::LCWatcherFilters,std::allocator<LCWatcher::LCWatcherFilters> >() // 0x65B445
{
    mangled_assert("??1?$_List_buy@ULCWatcherFilters@LCWatcher@@V?$allocator@ULCWatcherFilters@LCWatcher@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LCWatcher::~LCWatcher() // 0x65B48A
{
    mangled_assert("??1LCWatcher@@AAE@XZ");
    todo("implement");
}

_inline LCWatcher::LCWatcherElement::~LCWatcherElement() // 0x65B4F6
{
    mangled_assert("??1LCWatcherElement@LCWatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LCWatcher::LCWatcherFilter::~LCWatcherFilter() // 0x65B515
{
    mangled_assert("??1LCWatcherFilter@LCWatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LCWatcher::LCWatcherFilters::~LCWatcherFilters() // 0x65B51D
{
    mangled_assert("??1LCWatcherFilters@LCWatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LCWatcher *LCWatcher::i() // 0x65CB45
{
    mangled_assert("?i@LCWatcher@@SGPAV1@XZ");
    todo("implement");
}

void LCWatcher::Initialize() // 0x65BF86
{
    mangled_assert("?Initialize@LCWatcher@@SGXXZ");
    todo("implement");
}

void LCWatcher::Shutdown() // 0x65C32E
{
    mangled_assert("?Shutdown@LCWatcher@@SGXXZ");
    todo("implement");
}

void LCWatcher::RmvFilter(char const *) // 0x65C1FA
{
    mangled_assert("?RmvFilter@LCWatcher@@QAEXPBD@Z");
    todo("implement");
}

void LCWatcher::RmvAllFilters() // 0x65C1B5
{
    mangled_assert("?RmvAllFilters@LCWatcher@@QAEXXZ");
    todo("implement");
}

void LCWatcher::AddFilter(LuaConfig *, char const *) // 0x65B751
{
    mangled_assert("?AddFilter@LCWatcher@@QAEXPAVLuaConfig@@PBD@Z");
    todo("implement");
}

void LCWatcher::OnOk(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button) // 0x65C091
{
    mangled_assert("?OnOk@LCWatcher@@SGXPAVInterfaceElement@UI@@HHI@Z");
    todo("implement");
}

void LCWatcher::UpdateActiveFilter() // 0x65C5C8
{
    mangled_assert("?UpdateActiveFilter@LCWatcher@@AAEXXZ");
    todo("implement");
}

void LCWatcher::OnCancel(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button) // 0x65C071
{
    mangled_assert("?OnCancel@LCWatcher@@SGXPAVInterfaceElement@UI@@HHI@Z");
    todo("implement");
}

void LCWatcher::DeActivateScreen() // 0x65BE95
{
    mangled_assert("?DeActivateScreen@LCWatcher@@AAEXXZ");
    todo("implement");
}

void LCWatcher::OnClick(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button) // 0x65C07F
{
    mangled_assert("?OnClick@LCWatcher@@SGXPAVInterfaceElement@UI@@HHI@Z");
    todo("implement");
}

void LCWatcher::AssignActiveFilter(UI::InterfaceElement *) // 0x65BCB6
{
    mangled_assert("?AssignActiveFilter@LCWatcher@@AAEXPAVInterfaceElement@UI@@@Z");
    todo("implement");
}

void LCWatcher::Display(bool) // 0x65BF41
{
    mangled_assert("?Display@LCWatcher@@QAEX_N@Z");
    todo("implement");
}

void LCWatcher::Update() // 0x65C350
{
    mangled_assert("?Update@LCWatcher@@QAEXXZ");
    todo("implement");
}

void LCWatcher_Activate(bool on) // 0x65BFC2
{
    mangled_assert("?LCWatcher_Activate@@YGX_N@Z");
    todo("implement");
}

void LCWatcher_AddFilter(unsigned __int32 luaConfig, char const *filter) // 0x65BFCD
{
    mangled_assert("?LCWatcher_AddFilter@@YGXIPBD@Z");
    todo("implement");
}

void LCWatcher_AddFilterCPUPlayer(unsigned __int32 index, char const *filter) // 0x65BFF4
{
    mangled_assert("?LCWatcher_AddFilterCPUPlayer@@YGXIPBD@Z");
    todo("implement");
}

void LCWatcher_RmvFilter(char const *filter) // 0x65C044
{
    mangled_assert("?LCWatcher_RmvFilter@@YGXPBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif

#if 0
#ifndef __KEYBINDINGS_H__
#define __KEYBINDINGS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum GameEvent
{
    eNullEvent = 0,
    eCancel,
    eCancelOrders,
    eCancelGroup,
    eFocusHome,
    eTacticalOverlay,
    eScuttle,
    ePreviousTactic,
    eNextTactic,
    eMove,
    eHarvest,
    eGuard,
    eResearchManager,
    eFocus,
    eSelectAllVisible,
    eDock,
    eNextFocus,
    ePreviousFocus,
    eSubtitleOk,
    eBuildManager,
    eLaunchManager,
    eMenu,
    eGroup,
    eSelectGroup,
    eShiftModifier,
    eControlModifier,
    eFocusModifier,
    eWaypoint,
    eDelete,
    eZoom,
    eWaypointMode,
    eSensorsManager,
    eSwitchPlayer,
    eScriptReload,
    eShipScriptReload,
    eParade,
    eHUD,
    eQuickSave,
    eQuickLoad,
    eQuickSaveDeterministic,
    eQuickLoadDeterministic,
    eRestartLevel,
    eScreenShot,
    eChat,
    ePause,
    eTactics,
    eHyperspace,
    eSensorPing,
    eRepair,
    eSpecialAttack,
    eRallyPoint,
    eRallyObject,
    eRetire,
    eDropMinesInstant,
    eMoveAttack,
    eMilitary,
    eTurboEnable,
    eNISTest,
    eFlightManeuverTest,
    eWeaponNext,
    eWeaponLeft,
    eWeaponRight,
    eWeaponDown,
    eWeaponUp,
    eWeaponsFire,
    eWeaponCentre,
    eRenderToggle,
    eSuperTurbo,
    eDefenseField,
    eCloak,
    eCapture,
    eDeployMines,
    eFiltersToggle,
    eTempWaypoint,
    eExit,
    eCameraDump,
    eNumEvents,
};

/* ---------- definitions */

class KeyBinding
{
public:
    typedef std::smallvector<int,5,std::allocator<int> > KeyCombo;
    _inline KeyBinding(KeyBinding const &); /* compiler_generated() */
    KeyBinding(KeyEvent, unsigned __int32, __int32 const *, __int32);
    void Save(LuaConfig &) const;
    void ResetKeyCombo(std::smallvector<int,5,std::allocator<int> > const &);
    void Reset(KeyBinding const &);
    KeyEvent m_eventType; // 0x0
    std::smallvector<int,5,std::allocator<int> > m_keyCombo; // 0x4
    wchar_t m_name[64]; // 0x28
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaStr; // 0xA8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_keyString; // 0xC0
    __int32 m_event; // 0xD8
    __int32 m_data; // 0xDC
    __int32 m_uid; // 0xE0
    _inline ~KeyBinding(); /* compiler_generated() */
    KeyBinding &operator=(KeyBinding const &); /* compiler_generated() */
};
static_assert(sizeof(KeyBinding) == 228, "Invalid KeyBinding size");

class KeyBindingList
{
public:
    KeyBindingList(KeyBindingList const &); /* compiler_generated() */
    KeyBindingList();
    ~KeyBindingList();
    typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > KeyBindingConstIterator;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > begin() const;
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > end() const;
    void clear();
    _inline bool empty() const;
    unsigned __int32 size() const;
    void load(LuaConfig &, char const *);
    void load(char const *, char const *);
    void save(LuaConfig &, char const *);
    void save(char const *, char const *);
    void bind(KeyBindingList const &);
    void bind(__int32, KeyEvent, __int32, wchar_t const *, unsigned __int32, __int32 *, __int32);
    void bind(wchar_t const *, char const *, KeyEvent, unsigned __int32, __int32 *, __int32);
    KeyBinding *findBind(KeyEvent, unsigned __int32, __int32 *) const;
    KeyBinding *findBindId(__int32) const;
    void findBindKeyCombos(std::smallvector<int,5,std::allocator<int> > const &, std::vector<KeyBinding *,std::allocator<KeyBinding *> > &) const;
    bool unbindByEventData(__int32, __int32);
    void executeBindings(region *) const;
    void makeCopy(KeyBindingList &) const;
    unsigned __int32 reassignKeyCombo(std::smallvector<int,5,std::allocator<int> >, std::smallvector<int,5,std::allocator<int> > const &);
    static void BindEventEnums(LuaConfig &lc);
    static void BindKeyDefines(LuaConfig &lc);
private:
    KeyBinding *findEventData(__int32, __int32) const;
    typedef std::list<KeyBinding *,std::allocator<KeyBinding *> > KeyBindingContainer;
    std::list<KeyBinding *,std::allocator<KeyBinding *> > keyBindings; // 0x0
public:
    KeyBindingList &operator=(KeyBindingList const &); /* compiler_generated() */
};
static_assert(sizeof(KeyBindingList) == 8, "Invalid KeyBindingList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > _sub_503B04(KeyBindingList const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > KeyBindingList::begin() const // 0x503B04
{
    mangled_assert("?begin@KeyBindingList@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVKeyBinding@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > __result = _sub_503B04(this);
    return __result;
}

_extern std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > _sub_503B1C(KeyBindingList const *const);
_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > KeyBindingList::end() const // 0x503B1C
{
    mangled_assert("?end@KeyBindingList@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVKeyBinding@@@std@@@std@@@std@@XZ");
    todo("implement");
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<KeyBinding *> > > __result = _sub_503B1C(this);
    return __result;
}

_extern bool _sub_66F4DE(KeyBindingList const *const);
_inline bool KeyBindingList::empty() const // 0x66F4DE
{
    mangled_assert("?empty@KeyBindingList@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_66F4DE(this);
    return __result;
}

/* ---------- private code */

#endif // __KEYBINDINGS_H__
#endif

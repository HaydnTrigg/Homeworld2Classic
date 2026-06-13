#if 0
#ifndef __LCWATCHER_H__
#define __LCWATCHER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum LCWatcherConfig
{
    LC_Scar = 0,
    LC_AI,
    eLCCMaxElement,
};

/* ---------- definitions */

class LCWatcher
{
public:
    enum LCWatcherType
    {
        eString = 0,
        eNumber,
        eLCTMaxElement,
    };
    struct LCWatcherElement
    {
        _inline LCWatcherElement(LCWatcher::LCWatcherElement const &); /* compiler_generated() */
        _inline LCWatcherElement();
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_wname; // 0x18
        UI::TextListBoxItem *m_listBoxItem; // 0x30
        LCWatcher::LCWatcherType m_type; // 0x34
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_stringValue; // 0x38
        double m_numberValue; // 0x50
        bool m_updated; // 0x58
        _inline ~LCWatcherElement(); /* compiler_generated() */
        LCWatcher::LCWatcherElement &operator=(LCWatcher::LCWatcherElement const &); /* compiler_generated() */
    };
    static_assert(sizeof(LCWatcherElement) == 96, "Invalid LCWatcherElement size");
    typedef std::list<LCWatcher::LCWatcherElement,std::allocator<LCWatcher::LCWatcherElement> > LCWEContainer;
    struct LCWatcherFilters
    {
        std::list<LCWatcher::LCWatcherElement,std::allocator<LCWatcher::LCWatcherElement> > m_lcweList; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filter; // 0x8
        UI::NewListBox *m_listbox; // 0x20
        LuaConfig *m_luaConfig; // 0x24
        _inline LCWatcherFilters(LCWatcher::LCWatcherFilters const &); /* compiler_generated() */
        _inline LCWatcherFilters(); /* compiler_generated() */
        _inline ~LCWatcherFilters(); /* compiler_generated() */
        LCWatcher::LCWatcherFilters &operator=(LCWatcher::LCWatcherFilters const &); /* compiler_generated() */
    };
    static_assert(sizeof(LCWatcherFilters) == 40, "Invalid LCWatcherFilters size");
    class LCWatcherFilter
    {
    public:
        LCWatcherFilter(LCWatcher::LCWatcherFilter const &); /* compiler_generated() */
        _inline LCWatcherFilter(char const *, LuaConfig *);
        _inline char const *GetName() const;
        _inline LuaConfig *GetLuaConfig() const;
    private:
        LuaConfig *m_luaConfig; // 0x0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    public:
        _inline ~LCWatcherFilter(); /* compiler_generated() */
        LCWatcher::LCWatcherFilter &operator=(LCWatcher::LCWatcherFilter const &); /* compiler_generated() */
    };
    static_assert(sizeof(LCWatcherFilter) == 28, "Invalid LCWatcherFilter size");
    class LCWatcherSearch :
        public std::binary_function<LCWatcher::LCWatcherFilters,char const *,bool>
    {
    public:
        bool operator()(LCWatcher::LCWatcherFilters const &, char const *) const;
    };
    static_assert(sizeof(LCWatcherSearch) == 1, "Invalid LCWatcherSearch size");
    typedef std::list<LCWatcher::LCWatcherFilters,std::allocator<LCWatcher::LCWatcherFilters> > LCWFContainer;
    LCWatcher(LCWatcher &); /* compiler_generated() */
private:
    LCWatcher();
    ~LCWatcher();
    static LCWatcher *ms_instance;
public:
    static LCWatcher *i();
    static void Initialize();
    static void Shutdown();
    void Update();
    void AddFilter(LuaConfig *, char const *);
    void RmvFilter(char const *);
    void RmvAllFilters();
    void Display(bool);
    static void OnOk(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button);
    static void OnCancel(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button);
    static void OnClick(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 button);
private:
    void AssignActiveFilter(UI::InterfaceElement *);
    void UpdateActiveFilter();
    void DeActivateScreen();
    std::list<LCWatcher::LCWatcherFilters,std::allocator<LCWatcher::LCWatcherFilters> > m_listoffilters; // 0x0
    UI::NewUIScreen *m_editDialog; // 0x8
    UI::NewUIScreen *m_listboxDialog; // 0xC
    std::auto_ptr<LCWatcher::LCWatcherFilter> m_activeVariable; // 0x10
    bool m_isDisplaying; // 0x14
public:
    LCWatcher &operator=(LCWatcher &); /* compiler_generated() */
};
static_assert(sizeof(LCWatcher) == 24, "Invalid LCWatcher size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_65B328(LCWatcher::LCWatcherElement *const);
_inline LCWatcher::LCWatcherElement::LCWatcherElement() // 0x65B328
{
    mangled_assert("??0LCWatcherElement@LCWatcher@@QAE@XZ");
    todo("implement");
    _sub_65B328(this);
}

_extern _sub_65B359(LCWatcher::LCWatcherFilter *const, char const *, LuaConfig *);
_inline LCWatcher::LCWatcherFilter::LCWatcherFilter(char const *, LuaConfig *) // 0x65B359
{
    mangled_assert("??0LCWatcherFilter@LCWatcher@@QAE@PBDPAVLuaConfig@@@Z");
    todo("implement");
    _sub_65B359(this, arg, arg);
}

_extern char const *_sub_65BF7A(LCWatcher::LCWatcherFilter const *const);
_inline char const *LCWatcher::LCWatcherFilter::GetName() const // 0x65BF7A
{
    mangled_assert("?GetName@LCWatcherFilter@LCWatcher@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_65BF7A(this);
    return __result;
}

_extern LuaConfig *_sub_65BF77(LCWatcher::LCWatcherFilter const *const);
_inline LuaConfig *LCWatcher::LCWatcherFilter::GetLuaConfig() const // 0x65BF77
{
    mangled_assert("?GetLuaConfig@LCWatcherFilter@LCWatcher@@QBEPAVLuaConfig@@XZ");
    todo("implement");
    LuaConfig * __result = _sub_65BF77(this);
    return __result;
}

_extern bool _sub_65B682(LCWatcher::LCWatcherSearch const *const, LCWatcher::LCWatcherFilters const &, char const *);
_inline bool LCWatcher::LCWatcherSearch::operator()(LCWatcher::LCWatcherFilters const &, char const *) const // 0x65B682
{
    mangled_assert("??RLCWatcherSearch@LCWatcher@@QBE_NABULCWatcherFilters@1@PBD@Z");
    todo("implement");
    bool __result = _sub_65B682(this, arg, arg);
    return __result;
}

/* ---------- private code */

#endif // __LCWATCHER_H__
#endif
